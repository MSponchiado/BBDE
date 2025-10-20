#include "main.h"

double bsFunObj;
int indiceFunObj;

int main(int argc, char *argv[]) {

  clock_t inicio, fim;
  double tempo_usado = 0.0;

  inicio = clock();  

  int realD = 0, ncons, bbde_multnp, newbest[2], log, seed;
  int interD, omega, restr_tern, ciclos = 0;
  double porcfes = 0.0, porcnfevalbest = 0.0;
  long int consisGAC = 0, inconsisGAC = 0;
  double mediacontrGAC = 0.0, mediacontrGACTotal = 0.0;
  long multmaxfes, bbde_multmaxfes;
  t_indice *dominio, *bestbox, *caixa, *contrEstoc, *auxgac;
  bsFunObj = INFINITY;

  /*----------Inicialização de arquivos e parâmetros--------------*/
  FILE *fpar = fopen(argv[1],"r");
  FILE *fout = fopen(argv[2],"w");
  FILE *flog = fopen(argv[3],"w");
  FILE *fgac = fopen(argv[4],"w");

  arquiv_init(argc, fpar, fout, flog, fgac);
  params_init(fpar, &multmaxfes, &bbde_multnp, &bbde_multmaxfes, &log, &seed);
  random_init(seed);
  startEpsLvl();

  /*----------Inicialização da instância--------------------------*/
  tamanho_instancia(&realD, &ncons);
  epifita C = epifita_init(&interD, &omega, &restr_tern);
  long long int maxfes = realD * multmaxfes, nfeval = 0, nfevalbest = 0;
  int tcFes = (int)(maxfes * 0.85);

  // alocação e definição das caixas intermediárias
  contrEstoc = aloca_box(interD);
  auxgac = aloca_box(interD);
  bestbox = aloca_box(interD);
  caixa = aloca_box(interD);
  (*bestbox).cost = (*bestbox).viol = INFINITY;

  /*----------Inicialização do BBDE e da busca--------------------*/
  int bbde_np = realD * bbde_multnp;
  long bbde_maxfes = realD * bbde_multmaxfes;
  bbde_init(realD, ncons, bbde_np);

  dominio = aloca_box(interD);
  epifita_dominio_init(C, dominio);
  corrigeInfsDom(dominio, interD);

  copiaIndiv(caixa, dominio, realD, interD, 1);

  if (!contrator_GAC(C, caixa, auxgac, dominio, realD, interD, &mediacontrGAC,
    &consisGAC, &inconsisGAC, &nfeval, fgac)) {
    evaluate(caixa, bbde_maxfes, bbde_np, dominio, bestbox,
      contrEstoc, tcFes, interD, &nfevalbest, &nfeval);
  }
  else {
    printf("INCONSISTENCIA NO DOMINIO\n");
    exit(1);
  }

  mediacontrGACTotal = (inconsisGAC + (consisGAC * mediacontrGAC)) /
    (inconsisGAC + consisGAC);

  newbest[0] = 0;

  /*----------enquantou houver orçamento e caixas na fila---------*/
  while (nfeval < maxfes) {
    ciclos++;

    newbest[0] = evaluate(caixa, bbde_maxfes, bbde_np, dominio, bestbox,
      contrEstoc, tcFes, interD, &nfevalbest, &nfeval);

    // se o best é atualizado, aplica GAC e zera o contador de estagnação
    if (newbest[0] == 1) {
      if (contrator_GAC(C, caixa, auxgac, dominio, realD, interD, &mediacontrGAC,
        &consisGAC, &inconsisGAC, &nfeval, fgac)) {
        printbox(caixa, interD, 1);
        printf("INCONSISTENCIA EM GAC %f\n", porcfes);
        exit(1);
      }
      (*bestbox).cestag = 0;
    }
    else
      (*bestbox).cestag++;

    /*----------Trace de execução----------------------------------*/
    porcfes = ((double)nfeval * 100) / (double)maxfes;
    porcnfevalbest = ((double)nfevalbest * 100) / (double)maxfes;
    mediacontrGACTotal = (inconsisGAC + (consisGAC * mediacontrGAC)) /
      (inconsisGAC + consisGAC);

    fim = clock();
    tempo_usado = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

    if (log) {
      if (newbest[0] == 1)
        printf("-------------------- novo best %g %g --------------------\n",
          (*bestbox).cost, (*bestbox).viol);
      printf("c%g;v%g;D%d;rt%d;fes%.1f;cic%d;",
        (*bestbox).cost, (*bestbox).viol, realD, restr_tern, porcfes, ciclos);
      printf("pbest%.1f;gac%ld;%ld;redGAC%g;%g;%llu;%llu;%llu;%f\n",
        porcnfevalbest, consisGAC, inconsisGAC,
        mediacontrGAC, mediacontrGACTotal,
        DEBUG_ERRO_INSTANCIACAO, DEBUG_MAX_STEPS_REACHED, MAX_STEPS_USED, tempo_usado);
    }

  } // fim do loop

  if (log)
    printbox(bestbox, realD, 1);

  fclose(flog);

  porcfes = ((double)nfeval * 100) / (double)maxfes;
  fprintf(fout, "%.8e;%.8e;%d;%d;%d;%g;%g;%ld;%ld;%g;%g;%llu;%llu;%llu;%f\n",
    (*bestbox).cost, (*bestbox).viol, realD, restr_tern, ciclos,
    porcfes, porcnfevalbest, consisGAC, inconsisGAC, mediacontrGAC, mediacontrGACTotal,
    DEBUG_ERRO_INSTANCIACAO, DEBUG_MAX_STEPS_REACHED, MAX_STEPS_USED, tempo_usado);

  fclose(fout);

  return 0;

}
