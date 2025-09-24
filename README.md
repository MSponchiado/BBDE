# BBDE: Black-box Differential Evolution

![License: GNU GPLv3](https://img.shields.io/badge/License-GPLv3-blue.svg)

**BBDE (Black-box Differential Evolution)** é um otimizador meta-heurístico híbrido projetado para resolver problemas de otimização numérica global com restrições. A abordagem é baseada na meta-heurística Evolução Diferencial (DE) e foi desenvolvida como parte da tese de doutorado de Mariane Regina Sponchiado Cassenote no Programa de Pós-Graduação em Informática da Universidade Federal do Paraná (UFPR). 

## Sobre o Projeto

O BBDE foi concebido para enfrentar funções-objetivo complexas, que podem ser não-lineares, não-convexas e multimodais. Ele funciona como um resolvedor "caixa-fechada" (*black-box*), explorando estocasticamente o espaço de busca sem necessitar de informações sobre a estrutura algébrica da instância. 

As principais características do BBDE incluem:

* **Base em Evolução Diferencial (DE):** Utiliza os princípios da DE para evoluir uma população de soluções candidatas. 
* **Hibridização de Estratégias:** Incorpora múltiplas heurísticas e estratégias adaptativas de otimizadores de ponta da literatura para um desempenho mais robusto. 
* **Esquema de Reinícios Periódicos:** Implementa um mecanismo de reinício para evitar a estagnação da busca em mínimos locais e promover uma exploração mais ampla do espaço de soluções. 
* **Integração com Consistência Local:** É hibridizado com um contrator de consistência de arco generalizada (GAC) que utiliza as soluções factíveis encontradas para podar regiões sub-ótimas e infactíveis do espaço de busca. 

## Como Usar

Siga os passos abaixo para configurar o ambiente, compilar e executar o otimizador BBDE.

### Pré-requisitos

Certifique-se de que você tem as seguintes ferramentas instaladas:
* `git`
* Compilador C (por exemplo, `gcc`)
* `make`

### 1. Estrutura de Diretórios e Instâncias

O BBDE requer um conjunto de instâncias de problemas para sua execução. Estas instâncias e seu processamento de entrada estão disponíveis no repositório [MINLPLib](https://github.com/MSponchiado/MINLPLib.git).

É **essencial** que o diretório do BBDE e o diretório `MINLPLib` estejam localizados no mesmo nível (sejam "irmãos"), como mostra a estrutura abaixo:

seu_diretorio_de_trabalho/
├── BBDE/      <-- Repositório do otimizador
└── MINLPLib/  <-- Repositório das instâncias

### Compilação e Execução

Para executar o resolvedor em um arquivo de instância, utilize o seguinte comando:

```bash
./executa.sh <nome_da_instancia>
```

## Licença

Este projeto está licenciado sob a **Licença GNU General Public License v3.0**. Veja o arquivo `LICENSE` para mais detalhes.

## Como Citar Este Trabalho

Se você utilizar o BBDE em sua pesquisa, por favor, cite a seguinte tese:

**Cassenote, M. R. S. (2024).** *Hibridizações entre métodos exatos e meta-heurísticas: Estratégias para otimização global com restrições*. Tese de Doutorado, Programa de Pós-Graduação em Informática, Universidade Federal do Paraná, Curitiba, PR, Brasil.

### BibTeX

```bibtex
@phdthesis{Cassenote2024,
  author  = {Cassenote, Mariane Regina Sponchiado},
  title   = {Hibridizações entre métodos exatos e meta-heurísticas: Estratégias para otimização global com restrições},
  school  = {Universidade Federal do Paraná},
  year    = {2024},
  address = {Curitiba, PR, Brazil},
  month   = {July},
  note    = {Tese de Doutorado em Ciência da Computação}
}
```

## Agradecimentos

Este trabalho foi desenvolvido com o apoio do **Programa de Pós-Graduação em Informática (PPGInf)** da **Universidade Federal do Paraná (UFPR)** e financiado pela **Coordenação de Aperfeiçoamento de Pessoal de Nível Superior (CAPES)**. 

Agradecimentos especiais aos orientadores **Prof. Fabiano Silva** e **Prof. Guilherme Alex Derenievicz** pelo suporte e direcionamento ao longo da pesquisa.
