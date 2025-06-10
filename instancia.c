#include <math.h>

double v_x2;
double v_x3;
double v_x4;
double v_x5;
double v_x6;
double v_x7;
double v_x8;
double v_x9;
double v_x10;
double v_x11;
double v_x12;
double v_x13;
double v_x14;
double v_x15;
double v_x16;
double v_x18;
double v_x19;
double v_x20;
double v_x21;
double v_x22;
double v_x23;
double v_x24;
double v_x25;
double v_x26;
double v_x27;
double v_x28;
double v_x29;
double v_x30;
double v_x31;
double v_x32;
double v_x33;
double v_x34;
double v_x35;
double v_x36;
double v_x37;
double v_x38;
double v_x39;
double v_x40;
double v_x41;
double v_x42;
double v_x43;
double v_x44;
double v_x45;
double v_x46;
double v_x47;
double v_x48;
double v_x49;
double v_x50;
double v_x51;
double v_x52;
double v_x53;
double v_x54;
double v_x55;
double v_x56;
double v_x57;
double v_x58;
double v_x59;
double v_x60;
double v_x61;

double c_e2;
double c_e3;
double c_e4;
double c_e5;
double c_e6;
double c_e7;
double c_e8;
double c_e9;
double c_e10;
double c_e11;
double c_e12;
double c_e13;
double c_e14;
double c_e15;
double c_e16;
double c_e17;
double c_e18;
double c_e19;
double c_e20;
double c_e21;
double c_e22;
double c_e23;
double c_e24;
double c_e25;
double c_e26;
double c_e27;
double c_e28;
double c_e29;
double c_e30;
double c_e31;
double c_e32;
double c_e33;
double c_e34;
double c_e35;
double c_e36;
double c_e37;
double c_e38;
double c_e39;
double c_e40;
double c_e41;
double c_e42;
double c_e43;
double c_e44;
double c_e45;
double c_e46;
double c_e47;
double c_e48;
double c_e49;
double c_e50;
double c_e51;
double c_e52;
double c_e53;
double c_e54;
double c_e55;
double c_e56;
double c_e57;
double c_e58;
double c_e59;
double c_e60;
double c_e61;
double c_e62;
double c_e63;
double c_e64;

double tmp1;
double tmp2;

/* returns the number of variables and constraints */
void problem_size(int *nvar, int *nconstr) {
  *nvar = 59;
  *nconstr = 63;
}

/* returns the domain of the variables */
void problem_dom(double *dominf, double *domsup) {
  dominf[0] = 0.0;
  domsup[0] = 100000.0;
  dominf[1] = 0.0;
  domsup[1] = 100000.0;
  dominf[2] = 0.0;
  domsup[2] = 100000.0;
  dominf[3] = 0.0;
  domsup[3] = 100000.0;
  dominf[4] = 0.0;
  domsup[4] = 100000.0;
  dominf[5] = 0.0;
  domsup[5] = 100000.0;
  dominf[6] = 0.0;
  domsup[6] = 100000.0;
  dominf[7] = 0.0;
  domsup[7] = 100000.0;
  dominf[8] = 0.0;
  domsup[8] = 100000.0;
  dominf[9] = 0.0;
  domsup[9] = 100000.0;
  dominf[10] = 0.0;
  domsup[10] = 100000.0;
  dominf[11] = 0.0;
  domsup[11] = 100000.0;
  dominf[12] = 0.0;
  domsup[12] = 100000.0;
  dominf[13] = 0.0;
  domsup[13] = 100000.0;
  dominf[14] = 0.0;
  domsup[14] = 100000.0;
  dominf[15] = 0.0;
  domsup[15] = 100000.0;
  dominf[16] = 0.0;
  domsup[16] = 100000.0;
  dominf[17] = 0.0;
  domsup[17] = 100000.0;
  dominf[18] = 0.0;
  domsup[18] = 100000.0;
  dominf[19] = 0.0;
  domsup[19] = 100000.0;
  dominf[20] = 0.0;
  domsup[20] = 100000.0;
  dominf[21] = 0.0;
  domsup[21] = 100000.0;
  dominf[22] = 0.0;
  domsup[22] = 100000.0;
  dominf[23] = 0.0;
  domsup[23] = 100000.0;
  dominf[24] = 0.0;
  domsup[24] = 100000.0;
  dominf[25] = 0.0;
  domsup[25] = 100000.0;
  dominf[26] = 0.0;
  domsup[26] = 100000.0;
  dominf[27] = 0.0;
  domsup[27] = 100000.0;
  dominf[28] = 0.0;
  domsup[28] = 100000.0;
  dominf[29] = 0.0;
  domsup[29] = 100000.0;
  dominf[30] = 0.0;
  domsup[30] = 100000.0;
  dominf[31] = 0.0;
  domsup[31] = 100000.0;
  dominf[32] = 0.0;
  domsup[32] = 100000.0;
  dominf[33] = 0.0;
  domsup[33] = 100000.0;
  dominf[34] = 0.0;
  domsup[34] = 100000.0;
  dominf[35] = 0.0;
  domsup[35] = 100000.0;
  dominf[36] = 0.0;
  domsup[36] = 100000.0;
  dominf[37] = 0.0;
  domsup[37] = 100000.0;
  dominf[38] = 0.0;
  domsup[38] = 100000.0;
  dominf[39] = 0.0;
  domsup[39] = 100000.0;
  dominf[40] = 0.0;
  domsup[40] = 100000.0;
  dominf[41] = 0.0;
  domsup[41] = 100000.0;
  dominf[42] = 0.0;
  domsup[42] = 100000.0;
  dominf[43] = 0.0;
  domsup[43] = 100000.0;
  dominf[44] = 0.0;
  domsup[44] = 100000.0;
  dominf[45] = 0.0;
  domsup[45] = 100000.0;
  dominf[46] = 0.0;
  domsup[46] = 100000.0;
  dominf[47] = 0.0;
  domsup[47] = 100000.0;
  dominf[48] = 0.0;
  domsup[48] = 100000.0;
  dominf[49] = 0.0;
  domsup[49] = 100000.0;
  dominf[50] = 0.0;
  domsup[50] = 100000.0;
  dominf[51] = 0.0;
  domsup[51] = 100000.0;
  dominf[52] = 0.0;
  domsup[52] = 100000.0;
  dominf[53] = 0.0;
  domsup[53] = 100000.0;
  dominf[54] = 0.0;
  domsup[54] = 100000.0;
  dominf[55] = 0.0;
  domsup[55] = 100000.0;
  dominf[56] = 0.0;
  domsup[56] = 100000.0;
  dominf[57] = 0.0;
  domsup[57] = 100000.0;
  dominf[58] = 0.0;
  domsup[58] = 100000.0;
}

/* evaluates the problem using variable values in var and */
/* returns the value of the objective function in val and */
/* and the constraint violations in array constr          */
void problem_eval(double *var, double *val, double *constr) {
  v_x2 = var[0];
  v_x3 = var[1];
  v_x4 = var[2];
  v_x5 = var[3];
  v_x6 = var[4];
  v_x7 = var[5];
  v_x8 = var[6];
  v_x9 = var[7];
  v_x10 = var[8];
  v_x11 = var[9];
  v_x12 = var[10];
  v_x13 = var[11];
  v_x14 = var[12];
  v_x15 = var[13];
  v_x16 = var[14];
  v_x18 = var[15];
  v_x19 = var[16];
  v_x20 = var[17];
  v_x21 = var[18];
  v_x22 = var[19];
  v_x23 = var[20];
  v_x24 = var[21];
  v_x25 = var[22];
  v_x26 = var[23];
  v_x27 = var[24];
  v_x28 = var[25];
  v_x29 = var[26];
  v_x30 = var[27];
  v_x31 = var[28];
  v_x32 = var[29];
  v_x33 = var[30];
  v_x34 = var[31];
  v_x35 = var[32];
  v_x36 = var[33];
  v_x37 = var[34];
  v_x38 = var[35];
  v_x39 = var[36];
  v_x40 = var[37];
  v_x41 = var[38];
  v_x42 = var[39];
  v_x43 = var[40];
  v_x44 = var[41];
  v_x45 = var[42];
  v_x46 = var[43];
  v_x47 = var[44];
  v_x48 = var[45];
  v_x49 = var[46];
  v_x50 = var[47];
  v_x51 = var[48];
  v_x52 = var[49];
  v_x53 = var[50];
  v_x54 = var[51];
  v_x55 = var[52];
  v_x56 = var[53];
  v_x57 = var[54];
  v_x58 = var[55];
  v_x59 = var[56];
  v_x60 = var[57];
  v_x61 = var[58];

  *val = (((((((((((v_x2 + v_x3) + v_x4) + v_x5) + v_x6) + v_x7) + v_x8) + v_x9) + v_x10) + v_x11) + v_x12) + v_x13);

  c_e2 = (tmp1 = ((((((((-v_x2) - v_x6) - v_x10) + v_x14) - v_x22) - v_x26) - v_x30) - v_x34)) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e3 = (tmp1 = ((((((((-v_x3) - v_x7) - v_x11) + v_x15) - v_x23) - v_x27) - v_x31) - v_x35)) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e4 = (tmp1 = ((((((((-v_x4) - v_x8) - v_x12) + v_x16) - v_x24) - v_x28) - v_x32) - v_x36)) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e5 = (tmp1 = (((((((-v_x5) - v_x9) - v_x13) - v_x25) - v_x29) - v_x33) - v_x37)) == (tmp2 = -170) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e6 = (tmp1 = (((((v_x14 - v_x18) - v_x22) - v_x23) - v_x24) - v_x25)) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e7 = (tmp1 = (((((v_x15 - v_x19) - v_x26) - v_x27) - v_x28) - v_x29)) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e8 = (tmp1 = (((((v_x16 - v_x20) - v_x30) - v_x31) - v_x32) - v_x33)) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e9 = (tmp1 = (((((-v_x21) - v_x34) - v_x35) - v_x36) - v_x37)) == (tmp2 = -140) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e10 = (tmp1 = ((((v_x14 * v_x38) - (((v_x22 * v_x50) + (v_x26 * v_x54)) + (v_x30 * v_x58))) - (2 * v_x6)) - (250 * v_x34))) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e11 = (tmp1 = (((((v_x14 * v_x39) - (((v_x22 * v_x51) + (v_x26 * v_x55)) + (v_x30 * v_x59))) - (3 * v_x2)) - v_x6) - (180 * v_x34))) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e12 = (tmp1 = ((((v_x14 * v_x40) - (((v_x22 * v_x52) + (v_x26 * v_x56)) + (v_x30 * v_x60))) - v_x10) - (90 * v_x34))) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e13 = (tmp1 = ((((v_x14 * v_x41) - (((v_x22 * v_x53) + (v_x26 * v_x57)) + (v_x30 * v_x61))) - (3 * v_x10)) - (90 * v_x34))) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e14 = (tmp1 = ((((v_x15 * v_x42) - (((v_x23 * v_x50) + (v_x27 * v_x54)) + (v_x31 * v_x58))) - (2 * v_x7)) - (250 * v_x35))) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e15 = (tmp1 = (((((v_x15 * v_x43) - (((v_x23 * v_x51) + (v_x27 * v_x55)) + (v_x31 * v_x59))) - (3 * v_x3)) - v_x7) - (180 * v_x35))) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e16 = (tmp1 = ((((v_x15 * v_x44) - (((v_x23 * v_x52) + (v_x27 * v_x56)) + (v_x31 * v_x60))) - v_x11) - (90 * v_x35))) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e17 = (tmp1 = ((((v_x15 * v_x45) - (((v_x23 * v_x53) + (v_x27 * v_x57)) + (v_x31 * v_x61))) - (3 * v_x11)) - (90 * v_x35))) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e18 = (tmp1 = ((((v_x16 * v_x46) - (((v_x24 * v_x50) + (v_x28 * v_x54)) + (v_x32 * v_x58))) - (2 * v_x8)) - (250 * v_x36))) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e19 = (tmp1 = (((((v_x16 * v_x47) - (((v_x24 * v_x51) + (v_x28 * v_x55)) + (v_x32 * v_x59))) - (3 * v_x4)) - v_x8) - (180 * v_x36))) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e20 = (tmp1 = ((((v_x16 * v_x48) - (((v_x24 * v_x52) + (v_x28 * v_x56)) + (v_x32 * v_x60))) - v_x12) - (90 * v_x36))) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e21 = (tmp1 = ((((v_x16 * v_x49) - (((v_x24 * v_x53) + (v_x28 * v_x57)) + (v_x32 * v_x61))) - (3 * v_x12)) - (90 * v_x36))) == (tmp2 = 0) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e22 = (tmp1 = ((-v_x14) * (v_x50 - v_x38))) == (tmp2 = -3690) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e23 = (tmp1 = ((-v_x14) * (v_x51 - v_x39))) == (tmp2 = -3690) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e24 = (tmp1 = ((-v_x14) * (v_x52 - v_x40))) == (tmp2 = -1230) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e25 = (tmp1 = ((-v_x14) * (v_x53 - v_x41))) == (tmp2 = -3690) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e26 = (tmp1 = ((-v_x15) * (v_x54 - v_x42))) == (tmp2 = -940) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e27 = (tmp1 = ((-v_x15) * (v_x55 - v_x43))) == (tmp2 = -2350) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e28 = (tmp1 = ((-v_x15) * (v_x56 - v_x44))) == (tmp2 = -1175) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e29 = (tmp1 = ((-v_x15) * (v_x57 - v_x45))) == (tmp2 = -1880) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e30 = (tmp1 = ((-v_x16) * (v_x58 - v_x46))) == (tmp2 = -12300) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e31 = (tmp1 = ((-v_x16) * (v_x59 - v_x47))) == (tmp2 = -12300) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e32 = (tmp1 = ((-v_x16) * (v_x60 - v_x48))) == (tmp2 = -6150) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e33 = (tmp1 = ((-v_x16) * (v_x61 - v_x49))) == (tmp2 = -4920) ? 0.0 : ((tmp1 = tmp1 - tmp2) > 0 ? tmp1 : -tmp1);

  c_e34 = (tmp1 = v_x38) <= (tmp2 = 20) ? 0.0 : tmp1 - tmp2;

  c_e35 = (tmp1 = v_x39) <= (tmp2 = 30) ? 0.0 : tmp1 - tmp2;

  c_e36 = (tmp1 = v_x40) <= (tmp2 = 20) ? 0.0 : tmp1 - tmp2;

  c_e37 = (tmp1 = v_x41) <= (tmp2 = 10) ? 0.0 : tmp1 - tmp2;

  c_e38 = (tmp1 = v_x42) <= (tmp2 = 50) ? 0.0 : tmp1 - tmp2;

  c_e39 = (tmp1 = v_x43) <= (tmp2 = 20) ? 0.0 : tmp1 - tmp2;

  c_e40 = (tmp1 = v_x44) <= (tmp2 = 20) ? 0.0 : tmp1 - tmp2;

  c_e41 = (tmp1 = v_x45) <= (tmp2 = 20) ? 0.0 : tmp1 - tmp2;

  c_e42 = (tmp1 = v_x46) <= (tmp2 = 100) ? 0.0 : tmp1 - tmp2;

  c_e43 = (tmp1 = v_x47) <= (tmp2 = 150) ? 0.0 : tmp1 - tmp2;

  c_e44 = (tmp1 = v_x48) <= (tmp2 = 30) ? 0.0 : tmp1 - tmp2;

  c_e45 = (tmp1 = v_x49) <= (tmp2 = 20) ? 0.0 : tmp1 - tmp2;

  c_e46 = (tmp1 = v_x50) <= (tmp2 = 50) ? 0.0 : tmp1 - tmp2;

  c_e47 = (tmp1 = v_x51) <= (tmp2 = 60) ? 0.0 : tmp1 - tmp2;

  c_e48 = (tmp1 = v_x52) <= (tmp2 = 30) ? 0.0 : tmp1 - tmp2;

  c_e49 = (tmp1 = v_x53) <= (tmp2 = 40) ? 0.0 : tmp1 - tmp2;

  c_e50 = (tmp1 = v_x54) <= (tmp2 = 70) ? 0.0 : tmp1 - tmp2;

  c_e51 = (tmp1 = v_x55) <= (tmp2 = 70) ? 0.0 : tmp1 - tmp2;

  c_e52 = (tmp1 = v_x56) <= (tmp2 = 45) ? 0.0 : tmp1 - tmp2;

  c_e53 = (tmp1 = v_x57) <= (tmp2 = 60) ? 0.0 : tmp1 - tmp2;

  c_e54 = (tmp1 = v_x58) <= (tmp2 = 200) ? 0.0 : tmp1 - tmp2;

  c_e55 = (tmp1 = v_x59) <= (tmp2 = 250) ? 0.0 : tmp1 - tmp2;

  c_e56 = (tmp1 = v_x60) <= (tmp2 = 80) ? 0.0 : tmp1 - tmp2;

  c_e57 = (tmp1 = v_x61) <= (tmp2 = 60) ? 0.0 : tmp1 - tmp2;

  c_e58 = (tmp1 = (((-(((v_x25 * v_x50) + (v_x29 * v_x54)) + (v_x33 * v_x58))) - (2 * v_x9)) - (250 * v_x37))) >= (tmp2 = -34000) ? 0.0 : tmp2 - tmp1;

  c_e59 = (tmp1 = ((((-(((v_x25 * v_x51) + (v_x29 * v_x55)) + (v_x33 * v_x59))) - (3 * v_x5)) - v_x9) - (180 * v_x37))) >= (tmp2 = -13600) ? 0.0 : tmp2 - tmp1;

  c_e60 = (tmp1 = (((-(((v_x25 * v_x52) + (v_x29 * v_x56)) + (v_x33 * v_x60))) - v_x13) - (90 * v_x37))) >= (tmp2 = -3400) ? 0.0 : tmp2 - tmp1;

  c_e61 = (tmp1 = (((-(((v_x25 * v_x53) + (v_x29 * v_x57)) + (v_x33 * v_x61))) - (3 * v_x13)) - (90 * v_x37))) >= (tmp2 = -10200) ? 0.0 : tmp2 - tmp1;

  c_e62 = (tmp1 = v_x14) <= (tmp2 = 123) ? 0.0 : tmp1 - tmp2;

  c_e63 = (tmp1 = v_x15) <= (tmp2 = 47) ? 0.0 : tmp1 - tmp2;

  c_e64 = (tmp1 = v_x16) <= (tmp2 = 123) ? 0.0 : tmp1 - tmp2;

  constr[0] = c_e2;
  constr[1] = c_e3;
  constr[2] = c_e4;
  constr[3] = c_e5;
  constr[4] = c_e6;
  constr[5] = c_e7;
  constr[6] = c_e8;
  constr[7] = c_e9;
  constr[8] = c_e10;
  constr[9] = c_e11;
  constr[10] = c_e12;
  constr[11] = c_e13;
  constr[12] = c_e14;
  constr[13] = c_e15;
  constr[14] = c_e16;
  constr[15] = c_e17;
  constr[16] = c_e18;
  constr[17] = c_e19;
  constr[18] = c_e20;
  constr[19] = c_e21;
  constr[20] = c_e22;
  constr[21] = c_e23;
  constr[22] = c_e24;
  constr[23] = c_e25;
  constr[24] = c_e26;
  constr[25] = c_e27;
  constr[26] = c_e28;
  constr[27] = c_e29;
  constr[28] = c_e30;
  constr[29] = c_e31;
  constr[30] = c_e32;
  constr[31] = c_e33;
  constr[32] = c_e34;
  constr[33] = c_e35;
  constr[34] = c_e36;
  constr[35] = c_e37;
  constr[36] = c_e38;
  constr[37] = c_e39;
  constr[38] = c_e40;
  constr[39] = c_e41;
  constr[40] = c_e42;
  constr[41] = c_e43;
  constr[42] = c_e44;
  constr[43] = c_e45;
  constr[44] = c_e46;
  constr[45] = c_e47;
  constr[46] = c_e48;
  constr[47] = c_e49;
  constr[48] = c_e50;
  constr[49] = c_e51;
  constr[50] = c_e52;
  constr[51] = c_e53;
  constr[52] = c_e54;
  constr[53] = c_e55;
  constr[54] = c_e56;
  constr[55] = c_e57;
  constr[56] = c_e58;
  constr[57] = c_e59;
  constr[58] = c_e60;
  constr[59] = c_e61;
  constr[60] = c_e62;
  constr[61] = c_e63;
  constr[62] = c_e64;
  return;
}
