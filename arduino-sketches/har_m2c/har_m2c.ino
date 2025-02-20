// Imports
#include <math.h>
#include <string.h>

// Declaring Global Variables
int color = 0;

// XGB-Model
#include <string.h>
void softmax(double *x, int size, double *result) {
    double max = x[0];
    for (int i = 1; i < size; ++i) {
        if (x[i] > max)
            max = x[i];
    }
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        result[i] = exp(x[i] - max);
        sum += result[i];
    }
    for (int i = 0; i < size; ++i)
        result[i] /= sum;
}
void score(double * input, double * output) {
    double var0[3];
    double var1;
    if (input[10] < 101.0) {
        if (input[9] < 111.0) {
            if (input[10] < 97.0) {
                if (input[18] < 112.0) {
                    if (input[10] < 64.0) {
                        if (input[3] < 1.0) {
                            var1 = -0.011764711;
                        } else {
                            var1 = 0.042148758;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var1 = -0.027329197;
                        } else {
                            var1 = -0.0057034264;
                        }
                    }
                } else {
                    if (input[0] < 85.0) {
                        if (input[4] < 1.0) {
                            var1 = -0.022172756;
                        } else {
                            var1 = -0.03060005;
                        }
                    } else {
                        if (input[18] < 138.0) {
                            var1 = -0.041823063;
                        } else {
                            var1 = -0.0020026749;
                        }
                    }
                }
            } else {
                if (input[18] < 139.0) {
                    if (input[2] < 1.0) {
                        if (input[4] < 1.0) {
                            var1 = -0.011009179;
                        } else {
                            var1 = -0.04647888;
                        }
                    } else {
                        if (input[5] < 17.72) {
                            var1 = -0.020689659;
                        } else {
                            var1 = -0.07135136;
                        }
                    }
                } else {
                    if (input[16] < 2.0) {
                        if (input[4] < 1.0) {
                            var1 = -0.049704146;
                        } else {
                            var1 = -0.012262779;
                        }
                    } else {
                        if (input[0] < 39.0) {
                            var1 = -0.0069767484;
                        } else {
                            var1 = -0.058356173;
                        }
                    }
                }
            }
        } else {
            if (input[12] < 2.0) {
                if (input[9] < 179.0) {
                    if (input[9] < 178.0) {
                        if (input[8] < 277.7) {
                            var1 = -0.030813087;
                        } else {
                            var1 = -0.024667058;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var1 = -0.023961667;
                        } else {
                            var1 = 0.026865667;
                        }
                    }
                } else {
                    if (input[8] < 260.9) {
                        if (input[8] < 238.0) {
                            var1 = -0.05151516;
                        } else {
                            var1 = 0.020547941;
                        }
                    } else {
                        var1 = -0.070700645;
                    }
                }
            } else {
                if (input[18] < 182.0) {
                    if (input[0] < 21.0) {
                        if (input[5] < 39.62) {
                            var1 = -0.048433743;
                        } else {
                            var1 = 0.027272725;
                        }
                    } else {
                        if (input[0] < 22.0) {
                            var1 = -0.013936435;
                        } else {
                            var1 = -0.034751166;
                        }
                    }
                } else {
                    if (input[18] < 193.0) {
                        if (input[5] < 22.24) {
                            var1 = -0.009267436;
                        } else {
                            var1 = -0.028445428;
                        }
                    } else {
                        if (input[5] < 25.17) {
                            var1 = -0.05118192;
                        } else {
                            var1 = -0.02710473;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 107.0) {
            if (input[9] < 179.0) {
                if (input[0] < 89.0) {
                    if (input[13] < 1.0) {
                        if (input[9] < 147.0) {
                            var1 = -0.024228035;
                        } else {
                            var1 = -0.006924984;
                        }
                    } else {
                        if (input[8] < 298.1) {
                            var1 = -0.024709158;
                        } else {
                            var1 = -0.059235673;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[8] < 281.3) {
                            var1 = -0.06442954;
                        } else {
                            var1 = -0.0000000025544848;
                        }
                    } else {
                        if (input[9] < 153.0) {
                            var1 = 0.04285714;
                        } else {
                            var1 = -0.042857148;
                        }
                    }
                }
            } else {
                if (input[18] < 164.0) {
                    if (input[4] < 2.0) {
                        if (input[5] < 20.48) {
                            var1 = 0.06;
                        } else {
                            var1 = -0.040000003;
                        }
                    } else {
                        if (input[0] < 50.0) {
                            var1 = 0.023999998;
                        } else {
                            var1 = 0.10909092;
                        }
                    }
                } else {
                    if (input[5] < 30.6) {
                        var1 = -0.05853659;
                    } else {
                        var1 = 0.010344825;
                    }
                }
            }
        } else {
            if (input[8] < 295.4) {
                if (input[8] < 263.2) {
                    if (input[8] < 151.8) {
                        if (input[18] < 195.0) {
                            var1 = -0.018124012;
                        } else {
                            var1 = 0.07317073;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var1 = -0.03249679;
                        } else {
                            var1 = -0.028705165;
                        }
                    }
                } else {
                    if (input[9] < 166.0) {
                        if (input[0] < 19.0) {
                            var1 = 0.0076923035;
                        } else {
                            var1 = -0.027774757;
                        }
                    } else {
                        if (input[5] < 37.1) {
                            var1 = -0.014090024;
                        } else {
                            var1 = 0.04285714;
                        }
                    }
                }
            } else {
                if (input[18] < 196.0) {
                    if (input[5] < 37.19) {
                        if (input[1] < 1.0) {
                            var1 = -0.034567907;
                        } else {
                            var1 = -0.055190545;
                        }
                    } else {
                        if (input[9] < 140.0) {
                            var1 = -0.04020619;
                        } else {
                            var1 = 0.027272725;
                        }
                    }
                } else {
                    if (input[0] < 42.0) {
                        if (input[2] < 1.0) {
                            var1 = 0.096;
                        } else {
                            var1 = -0.0000000025544848;
                        }
                    } else {
                        if (input[5] < 22.12) {
                            var1 = -0.05454546;
                        } else {
                            var1 = -0.0000000025544848;
                        }
                    }
                }
            }
        }
    }
    double var2;
    if (input[10] < 101.0) {
        if (input[9] < 128.0) {
            if (input[7] < 1.0) {
                if (input[18] < 102.0) {
                    if (input[10] < 95.0) {
                        if (input[8] < 187.7) {
                            var2 = -0.037024047;
                        } else {
                            var2 = 0.010063596;
                        }
                    } else {
                        var2 = -0.06539511;
                    }
                } else {
                    if (input[18] < 136.0) {
                        if (input[0] < 19.0) {
                            var2 = 0.018131634;
                        } else {
                            var2 = -0.029497966;
                        }
                    } else {
                        if (input[18] < 141.0) {
                            var2 = -0.008573507;
                        } else {
                            var2 = -0.024757998;
                        }
                    }
                }
            } else {
                if (input[9] < 126.0) {
                    if (input[5] < 17.04) {
                        if (input[0] < 85.0) {
                            var2 = -0.05093984;
                        } else {
                            var2 = 0.017564368;
                        }
                    } else {
                        if (input[8] < 277.7) {
                            var2 = -0.032380905;
                        } else {
                            var2 = -0.02226392;
                        }
                    }
                } else {
                    if (input[10] < 89.0) {
                        if (input[10] < 75.0) {
                            var2 = -0.026468456;
                        } else {
                            var2 = 0.040810656;
                        }
                    } else {
                        if (input[5] < 38.06) {
                            var2 = -0.05256917;
                        } else {
                            var2 = 0.044686656;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 155.0) {
                if (input[10] < 100.0) {
                    if (input[9] < 141.0) {
                        if (input[1] < 1.0) {
                            var2 = -0.025469158;
                        } else {
                            var2 = -0.032480262;
                        }
                    } else {
                        if (input[5] < 15.57) {
                            var2 = -0.01238184;
                        } else {
                            var2 = -0.034828074;
                        }
                    }
                } else {
                    if (input[5] < 39.43) {
                        if (input[16] < 2.0) {
                            var2 = -0.057515956;
                        } else {
                            var2 = -0.034914687;
                        }
                    } else {
                        var2 = 0.025849575;
                    }
                }
            } else {
                if (input[1] < 1.0) {
                    if (input[8] < 215.2) {
                        if (input[9] < 178.0) {
                            var2 = -0.028382484;
                        } else {
                            var2 = -0.00548808;
                        }
                    } else {
                        if (input[5] < 39.71) {
                            var2 = -0.03573595;
                        } else {
                            var2 = 0.0047223377;
                        }
                    }
                } else {
                    if (input[8] < 244.0) {
                        if (input[5] < 27.13) {
                            var2 = -0.03459462;
                        } else {
                            var2 = -0.026177365;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var2 = -0.0072313794;
                        } else {
                            var2 = -0.02358162;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 107.0) {
            if (input[9] < 179.0) {
                if (input[0] < 89.0) {
                    if (input[5] < 23.24) {
                        if (input[0] < 69.0) {
                            var2 = -0.030471185;
                        } else {
                            var2 = -0.015517329;
                        }
                    } else {
                        if (input[8] < 151.8) {
                            var2 = -0.051364273;
                        } else {
                            var2 = -0.019165661;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[8] < 281.3) {
                            var2 = -0.062360406;
                        } else {
                            var2 = 0.00027984544;
                        }
                    } else {
                        if (input[18] < 135.0) {
                            var2 = 0.042846557;
                        } else {
                            var2 = -0.042274546;
                        }
                    }
                }
            } else {
                if (input[18] < 164.0) {
                    if (input[4] < 2.0) {
                        if (input[8] < 208.0) {
                            var2 = -0.053559672;
                        } else {
                            var2 = 0.041090894;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var2 = 0.022160528;
                        } else {
                            var2 = 0.10521885;
                        }
                    }
                } else {
                    if (input[5] < 30.6) {
                        var2 = -0.056793757;
                    } else {
                        var2 = 0.010679564;
                    }
                }
            }
        } else {
            if (input[8] < 295.4) {
                if (input[8] < 263.2) {
                    if (input[8] < 151.8) {
                        if (input[18] < 175.0) {
                            var2 = -0.02394864;
                        } else {
                            var2 = 0.025120988;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var2 = -0.030658392;
                        } else {
                            var2 = -0.026973981;
                        }
                    }
                } else {
                    if (input[9] < 166.0) {
                        if (input[5] < 17.04) {
                            var2 = -0.039384913;
                        } else {
                            var2 = -0.024489649;
                        }
                    } else {
                        if (input[5] < 37.1) {
                            var2 = -0.012854393;
                        } else {
                            var2 = 0.041073088;
                        }
                    }
                }
            } else {
                if (input[18] < 196.0) {
                    if (input[5] < 37.19) {
                        if (input[1] < 1.0) {
                            var2 = -0.032673903;
                        } else {
                            var2 = -0.053033497;
                        }
                    } else {
                        if (input[9] < 140.0) {
                            var2 = -0.03838271;
                        } else {
                            var2 = 0.026531873;
                        }
                    }
                } else {
                    if (input[0] < 42.0) {
                        if (input[3] < 1.0) {
                            var2 = 0.09272162;
                        } else {
                            var2 = -0.0008743765;
                        }
                    } else {
                        if (input[18] < 199.0) {
                            var2 = -0.053426858;
                        } else {
                            var2 = 0.001551844;
                        }
                    }
                }
            }
        }
    }
    double var3;
    if (input[10] < 101.0) {
        if (input[9] < 111.0) {
            if (input[10] < 97.0) {
                if (input[18] < 112.0) {
                    if (input[10] < 64.0) {
                        if (input[3] < 1.0) {
                            var3 = -0.00907601;
                        } else {
                            var3 = 0.042579554;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var3 = -0.024117284;
                        } else {
                            var3 = -0.0027969058;
                        }
                    }
                } else {
                    if (input[0] < 85.0) {
                        if (input[4] < 1.0) {
                            var3 = -0.018770032;
                        } else {
                            var3 = -0.027110567;
                        }
                    } else {
                        if (input[18] < 138.0) {
                            var3 = -0.038296796;
                        } else {
                            var3 = 0.0006425146;
                        }
                    }
                }
            } else {
                if (input[18] < 139.0) {
                    if (input[2] < 1.0) {
                        if (input[9] < 93.0) {
                            var3 = -0.006314505;
                        } else {
                            var3 = -0.0430855;
                        }
                    } else {
                        if (input[5] < 17.72) {
                            var3 = -0.018311646;
                        } else {
                            var3 = -0.0681612;
                        }
                    }
                } else {
                    if (input[16] < 2.0) {
                        if (input[4] < 1.0) {
                            var3 = -0.046329465;
                        } else {
                            var3 = -0.009020677;
                        }
                    } else {
                        if (input[0] < 39.0) {
                            var3 = -0.0039026968;
                        } else {
                            var3 = -0.054989733;
                        }
                    }
                }
            }
        } else {
            if (input[12] < 2.0) {
                if (input[9] < 179.0) {
                    if (input[9] < 178.0) {
                        if (input[18] < 187.0) {
                            var3 = -0.025538856;
                        } else {
                            var3 = -0.03202833;
                        }
                    } else {
                        if (input[10] < 97.0) {
                            var3 = -0.0099712005;
                        } else {
                            var3 = 0.066203915;
                        }
                    }
                } else {
                    if (input[8] < 260.9) {
                        if (input[8] < 238.0) {
                            var3 = -0.047989342;
                        } else {
                            var3 = 0.022179434;
                        }
                    } else {
                        var3 = -0.067629755;
                    }
                }
            } else {
                if (input[18] < 182.0) {
                    if (input[0] < 21.0) {
                        if (input[5] < 39.62) {
                            var3 = -0.044587817;
                        } else {
                            var3 = 0.028247876;
                        }
                    } else {
                        if (input[0] < 22.0) {
                            var3 = -0.010555263;
                        } else {
                            var3 = -0.031074429;
                        }
                    }
                } else {
                    if (input[18] < 193.0) {
                        if (input[5] < 22.24) {
                            var3 = -0.0058900476;
                        } else {
                            var3 = -0.024917176;
                        }
                    } else {
                        if (input[5] < 25.17) {
                            var3 = -0.04728201;
                        } else {
                            var3 = -0.023554603;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 107.0) {
            if (input[9] < 179.0) {
                if (input[0] < 89.0) {
                    if (input[13] < 1.0) {
                        if (input[18] < 111.0) {
                            var3 = -0.03930965;
                        } else {
                            var3 = -0.012125013;
                        }
                    } else {
                        if (input[8] < 298.1) {
                            var3 = -0.021642422;
                        } else {
                            var3 = -0.056202143;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[8] < 263.2) {
                            var3 = -0.06580631;
                        } else {
                            var3 = -0.020507092;
                        }
                    } else {
                        if (input[10] < 105.0) {
                            var3 = 0.04279182;
                        } else {
                            var3 = -0.04174986;
                        }
                    }
                }
            } else {
                if (input[18] < 164.0) {
                    if (input[4] < 2.0) {
                        if (input[5] < 20.48) {
                            var3 = 0.05762685;
                        } else {
                            var3 = -0.03760928;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var3 = 0.021091906;
                        } else {
                            var3 = 0.100318626;
                        }
                    }
                } else {
                    if (input[5] < 30.6) {
                        var3 = -0.055216294;
                    } else {
                        var3 = 0.011000736;
                    }
                }
            }
        } else {
            if (input[8] < 295.4) {
                if (input[8] < 285.3) {
                    if (input[8] < 284.8) {
                        if (input[8] < 151.8) {
                            var3 = -0.010430464;
                        } else {
                            var3 = -0.025869885;
                        }
                    } else {
                        if (input[5] < 37.1) {
                            var3 = -0.06394144;
                        } else {
                            var3 = 0.025751743;
                        }
                    }
                } else {
                    if (input[9] < 149.0) {
                        if (input[5] < 38.85) {
                            var3 = -0.020979416;
                        } else {
                            var3 = -0.06585851;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var3 = -0.019785395;
                        } else {
                            var3 = 0.008053937;
                        }
                    }
                }
            } else {
                if (input[18] < 196.0) {
                    if (input[5] < 37.19) {
                        if (input[11] < 1.0) {
                            var3 = -0.048343793;
                        } else {
                            var3 = -0.027129775;
                        }
                    } else {
                        if (input[9] < 140.0) {
                            var3 = -0.03662515;
                        } else {
                            var3 = 0.02603048;
                        }
                    }
                } else {
                    if (input[10] < 113.0) {
                        var3 = -0.052296437;
                    } else {
                        if (input[5] < 22.12) {
                            var3 = 0.00055446447;
                        } else {
                            var3 = 0.09028683;
                        }
                    }
                }
            }
        }
    }
    double var4;
    if (input[10] < 101.0) {
        if (input[9] < 128.0) {
            if (input[7] < 1.0) {
                if (input[12] < 2.0) {
                    if (input[10] < 62.0) {
                        if (input[18] < 191.0) {
                            var4 = -0.041272093;
                        } else {
                            var4 = 0.025707915;
                        }
                    } else {
                        if (input[18] < 195.0) {
                            var4 = -0.018080587;
                        } else {
                            var4 = -0.033194907;
                        }
                    }
                } else {
                    if (input[8] < 162.5) {
                        if (input[18] < 186.0) {
                            var4 = -0.015881578;
                        } else {
                            var4 = 0.020661147;
                        }
                    } else {
                        if (input[0] < 19.0) {
                            var4 = 0.0058239303;
                        } else {
                            var4 = -0.025815187;
                        }
                    }
                }
            } else {
                if (input[9] < 126.0) {
                    if (input[5] < 17.04) {
                        if (input[0] < 85.0) {
                            var4 = -0.047671467;
                        } else {
                            var4 = 0.018809943;
                        }
                    } else {
                        if (input[8] < 277.7) {
                            var4 = -0.029069835;
                        } else {
                            var4 = -0.01906965;
                        }
                    }
                } else {
                    if (input[10] < 86.0) {
                        if (input[10] < 75.0) {
                            var4 = -0.023118226;
                        } else {
                            var4 = 0.059085973;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var4 = -0.050140943;
                        } else {
                            var4 = 0.0057288962;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 155.0) {
                if (input[10] < 100.0) {
                    if (input[9] < 141.0) {
                        if (input[5] < 17.21) {
                            var4 = -0.03683632;
                        } else {
                            var4 = -0.024494782;
                        }
                    } else {
                        if (input[5] < 15.48) {
                            var4 = -0.0065162643;
                        } else {
                            var4 = -0.031323582;
                        }
                    }
                } else {
                    if (input[5] < 39.43) {
                        if (input[8] < 271.1) {
                            var4 = -0.04143779;
                        } else {
                            var4 = -0.06711846;
                        }
                    } else {
                        var4 = 0.027009828;
                    }
                }
            } else {
                if (input[1] < 1.0) {
                    if (input[13] < 1.0) {
                        if (input[6] < 1.0) {
                            var4 = -0.025350606;
                        } else {
                            var4 = -0.0036607005;
                        }
                    } else {
                        if (input[5] < 39.71) {
                            var4 = -0.031160006;
                        } else {
                            var4 = 0.01670477;
                        }
                    }
                } else {
                    if (input[8] < 244.0) {
                        if (input[10] < 65.0) {
                            var4 = -0.015423878;
                        } else {
                            var4 = -0.028387323;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var4 = -0.009684213;
                        } else {
                            var4 = -0.025755292;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 108.0) {
            if (input[5] < 23.24) {
                if (input[9] < 176.0) {
                    if (input[18] < 136.0) {
                        if (input[8] < 202.6) {
                            var4 = -0.021235757;
                        } else {
                            var4 = -0.04368835;
                        }
                    } else {
                        if (input[18] < 143.0) {
                            var4 = 0.00905097;
                        } else {
                            var4 = -0.024802003;
                        }
                    }
                } else {
                    if (input[8] < 208.0) {
                        if (input[18] < 111.0) {
                            var4 = 0.014669329;
                        } else {
                            var4 = -0.05388846;
                        }
                    } else {
                        if (input[10] < 104.0) {
                            var4 = 0.09373417;
                        } else {
                            var4 = 0.004579776;
                        }
                    }
                }
            } else {
                if (input[5] < 35.56) {
                    if (input[0] < 45.0) {
                        if (input[9] < 100.0) {
                            var4 = -0.03397841;
                        } else {
                            var4 = -0.00456199;
                        }
                    } else {
                        if (input[8] < 272.3) {
                            var4 = -0.02056091;
                        } else {
                            var4 = -0.0065375133;
                        }
                    }
                } else {
                    if (input[0] < 75.0) {
                        if (input[5] < 38.96) {
                            var4 = -0.032836866;
                        } else {
                            var4 = -0.012993275;
                        }
                    } else {
                        if (input[18] < 179.0) {
                            var4 = -0.02984769;
                        } else {
                            var4 = 0.07480352;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 295.4) {
                if (input[8] < 285.3) {
                    if (input[8] < 284.8) {
                        if (input[8] < 151.8) {
                            var4 = -0.009849272;
                        } else {
                            var4 = -0.02449204;
                        }
                    } else {
                        if (input[5] < 37.1) {
                            var4 = -0.06159849;
                        } else {
                            var4 = 0.02520707;
                        }
                    }
                } else {
                    if (input[9] < 148.0) {
                        if (input[5] < 31.61) {
                            var4 = -0.014691837;
                        } else {
                            var4 = -0.03402611;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var4 = -0.017822674;
                        } else {
                            var4 = 0.00834758;
                        }
                    }
                }
            } else {
                if (input[5] < 36.05) {
                    if (input[1] < 1.0) {
                        if (input[17] < 1.0) {
                            var4 = -0.036216218;
                        } else {
                            var4 = 0.003021064;
                        }
                    } else {
                        if (input[0] < 21.0) {
                            var4 = 0.0135527495;
                        } else {
                            var4 = -0.050058335;
                        }
                    }
                } else {
                    if (input[15] < 1.0) {
                        if (input[8] < 298.8) {
                            var4 = -0.05195284;
                        } else {
                            var4 = 0.024470208;
                        }
                    } else {
                        if (input[17] < 1.0) {
                            var4 = 0.07543834;
                        } else {
                            var4 = -0.04089971;
                        }
                    }
                }
            }
        }
    }
    double var5;
    if (input[10] < 101.0) {
        if (input[9] < 111.0) {
            if (input[8] < 160.0) {
                if (input[1] < 1.0) {
                    if (input[10] < 69.0) {
                        if (input[10] < 62.0) {
                            var5 = -0.051061966;
                        } else {
                            var5 = 0.0668541;
                        }
                    } else {
                        if (input[18] < 134.0) {
                            var5 = -0.024909012;
                        } else {
                            var5 = 0.016735319;
                        }
                    }
                } else {
                    if (input[5] < 19.69) {
                        if (input[10] < 98.0) {
                            var5 = -0.0658157;
                        } else {
                            var5 = 0.0042673643;
                        }
                    } else {
                        if (input[13] < 3.0) {
                            var5 = -0.031697474;
                        } else {
                            var5 = 0.0129780695;
                        }
                    }
                }
            } else {
                if (input[18] < 191.0) {
                    if (input[0] < 19.0) {
                        if (input[5] < 25.26) {
                            var5 = 0.039075036;
                        } else {
                            var5 = -0.020776078;
                        }
                    } else {
                        if (input[18] < 182.0) {
                            var5 = -0.022505103;
                        } else {
                            var5 = -0.011167366;
                        }
                    }
                } else {
                    if (input[8] < 167.7) {
                        if (input[5] < 27.63) {
                            var5 = -0.023947237;
                        } else {
                            var5 = 0.09063296;
                        }
                    } else {
                        if (input[9] < 103.0) {
                            var5 = -0.044338275;
                        } else {
                            var5 = -0.021473903;
                        }
                    }
                }
            }
        } else {
            if (input[12] < 2.0) {
                if (input[9] < 179.0) {
                    if (input[9] < 178.0) {
                        if (input[8] < 277.7) {
                            var5 = -0.024132496;
                        } else {
                            var5 = -0.017952954;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var5 = -0.018841323;
                        } else {
                            var5 = 0.030637503;
                        }
                    }
                } else {
                    if (input[8] < 260.9) {
                        if (input[8] < 238.0) {
                            var5 = -0.044899445;
                        } else {
                            var5 = 0.023864014;
                        }
                    } else {
                        var5 = -0.065149695;
                    }
                }
            } else {
                if (input[0] < 20.0) {
                    if (input[5] < 36.16) {
                        if (input[18] < 108.0) {
                            var5 = -0.013199674;
                        } else {
                            var5 = -0.050272685;
                        }
                    } else {
                        if (input[5] < 36.92) {
                            var5 = 0.050887197;
                        } else {
                            var5 = -0.03781624;
                        }
                    }
                } else {
                    if (input[18] < 182.0) {
                        if (input[5] < 25.94) {
                            var5 = -0.024954176;
                        } else {
                            var5 = -0.02975673;
                        }
                    } else {
                        if (input[18] < 193.0) {
                            var5 = -0.015532373;
                        } else {
                            var5 = -0.0291769;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 107.0) {
            if (input[9] < 179.0) {
                if (input[0] < 89.0) {
                    if (input[13] < 1.0) {
                        if (input[9] < 110.0) {
                            var5 = -0.028536199;
                        } else {
                            var5 = -0.008124801;
                        }
                    } else {
                        if (input[8] < 298.1) {
                            var5 = -0.018855263;
                        } else {
                            var5 = -0.053525485;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[8] < 263.2) {
                            var5 = -0.063381106;
                        } else {
                            var5 = -0.018443547;
                        }
                    } else {
                        if (input[9] < 153.0) {
                            var5 = 0.0435306;
                        } else {
                            var5 = -0.040129248;
                        }
                    }
                }
            } else {
                if (input[18] < 164.0) {
                    if (input[4] < 2.0) {
                        if (input[8] < 208.0) {
                            var5 = -0.050635893;
                        } else {
                            var5 = 0.039647643;
                        }
                    } else {
                        if (input[0] < 50.0) {
                            var5 = 0.020319466;
                        } else {
                            var5 = 0.09561709;
                        }
                    }
                } else {
                    if (input[5] < 30.6) {
                        var5 = -0.053131487;
                    } else {
                        var5 = 0.012613246;
                    }
                }
            }
        } else {
            if (input[8] < 295.4) {
                if (input[8] < 263.2) {
                    if (input[8] < 151.8) {
                        if (input[18] < 195.0) {
                            var5 = -0.013607866;
                        } else {
                            var5 = 0.07169305;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var5 = -0.026002401;
                        } else {
                            var5 = -0.022279313;
                        }
                    }
                } else {
                    if (input[9] < 166.0) {
                        if (input[5] < 17.04) {
                            var5 = -0.035149258;
                        } else {
                            var5 = -0.019967988;
                        }
                    } else {
                        if (input[5] < 37.1) {
                            var5 = -0.008719618;
                        } else {
                            var5 = 0.043056674;
                        }
                    }
                }
            } else {
                if (input[18] < 196.0) {
                    if (input[11] < 1.0) {
                        if (input[5] < 34.36) {
                            var5 = -0.046998348;
                        } else {
                            var5 = -0.022448964;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var5 = 0.005703749;
                        } else {
                            var5 = -0.03468723;
                        }
                    }
                } else {
                    if (input[10] < 113.0) {
                        var5 = -0.049862795;
                    } else {
                        if (input[3] < 1.0) {
                            var5 = 0.07787721;
                        } else {
                            var5 = -0.010769151;
                        }
                    }
                }
            }
        }
    }
    double var6;
    if (input[10] < 101.0) {
        if (input[9] < 111.0) {
            if (input[10] < 97.0) {
                if (input[18] < 112.0) {
                    if (input[10] < 64.0) {
                        if (input[3] < 1.0) {
                            var6 = -0.0050425474;
                        } else {
                            var6 = 0.045366116;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var6 = -0.019679407;
                        } else {
                            var6 = 0.0013476838;
                        }
                    }
                } else {
                    if (input[0] < 85.0) {
                        if (input[5] < 15.48) {
                            var6 = -0.04620257;
                        } else {
                            var6 = -0.020593995;
                        }
                    } else {
                        if (input[18] < 138.0) {
                            var6 = -0.034144804;
                        } else {
                            var6 = 0.0044657104;
                        }
                    }
                }
            } else {
                if (input[18] < 149.0) {
                    if (input[5] < 21.06) {
                        if (input[9] < 92.0) {
                            var6 = 0.070395194;
                        } else {
                            var6 = -0.02708177;
                        }
                    } else {
                        if (input[8] < 194.2) {
                            var6 = -0.022936696;
                        } else {
                            var6 = -0.05150277;
                        }
                    }
                } else {
                    if (input[18] < 163.0) {
                        if (input[14] < 1.0) {
                            var6 = -0.03078391;
                        } else {
                            var6 = 0.023972454;
                        }
                    } else {
                        if (input[0] < 26.0) {
                            var6 = 0.019703113;
                        } else {
                            var6 = -0.034450807;
                        }
                    }
                }
            }
        } else {
            if (input[12] < 2.0) {
                if (input[9] < 179.0) {
                    if (input[9] < 178.0) {
                        if (input[18] < 187.0) {
                            var6 = -0.02098134;
                        } else {
                            var6 = -0.027404675;
                        }
                    } else {
                        if (input[10] < 91.0) {
                            var6 = -0.012975441;
                        } else {
                            var6 = 0.040006798;
                        }
                    }
                } else {
                    if (input[8] < 260.9) {
                        if (input[8] < 238.0) {
                            var6 = -0.043130897;
                        } else {
                            var6 = 0.023444306;
                        }
                    } else {
                        var6 = -0.06360705;
                    }
                }
            } else {
                if (input[0] < 20.0) {
                    if (input[5] < 36.16) {
                        if (input[18] < 108.0) {
                            var6 = -0.012148663;
                        } else {
                            var6 = -0.048519827;
                        }
                    } else {
                        if (input[5] < 36.92) {
                            var6 = 0.04814066;
                        } else {
                            var6 = -0.036290776;
                        }
                    }
                } else {
                    if (input[18] < 182.0) {
                        if (input[9] < 119.0) {
                            var6 = -0.032505624;
                        } else {
                            var6 = -0.025318095;
                        }
                    } else {
                        if (input[18] < 193.0) {
                            var6 = -0.01434281;
                        } else {
                            var6 = -0.027588932;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 108.0) {
            if (input[5] < 23.24) {
                if (input[9] < 176.0) {
                    if (input[18] < 136.0) {
                        if (input[8] < 211.0) {
                            var6 = -0.019919364;
                        } else {
                            var6 = -0.04189037;
                        }
                    } else {
                        if (input[18] < 143.0) {
                            var6 = 0.010622634;
                        } else {
                            var6 = -0.02209497;
                        }
                    }
                } else {
                    if (input[8] < 208.0) {
                        if (input[18] < 111.0) {
                            var6 = 0.016376654;
                        } else {
                            var6 = -0.051197883;
                        }
                    } else {
                        if (input[10] < 104.0) {
                            var6 = 0.08847861;
                        } else {
                            var6 = 0.0061918884;
                        }
                    }
                }
            } else {
                if (input[5] < 35.56) {
                    if (input[5] < 33.65) {
                        if (input[5] < 33.28) {
                            var6 = -0.012680705;
                        } else {
                            var6 = -0.043770082;
                        }
                    } else {
                        if (input[8] < 281.3) {
                            var6 = -0.005861414;
                        } else {
                            var6 = 0.044132564;
                        }
                    }
                } else {
                    if (input[0] < 75.0) {
                        if (input[5] < 38.96) {
                            var6 = -0.030079434;
                        } else {
                            var6 = -0.010632022;
                        }
                    } else {
                        if (input[18] < 179.0) {
                            var6 = -0.02711909;
                        } else {
                            var6 = 0.07240884;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 295.4) {
                if (input[8] < 285.3) {
                    if (input[8] < 284.8) {
                        if (input[16] < 2.0) {
                            var6 = -0.020243166;
                        } else {
                            var6 = -0.023784084;
                        }
                    } else {
                        if (input[5] < 37.1) {
                            var6 = -0.059204858;
                        } else {
                            var6 = 0.02525315;
                        }
                    }
                } else {
                    if (input[18] < 133.0) {
                        if (input[9] < 162.0) {
                            var6 = -0.030347437;
                        } else {
                            var6 = 0.0039853347;
                        }
                    } else {
                        if (input[10] < 124.0) {
                            var6 = -0.0143202515;
                        } else {
                            var6 = 0.0094961235;
                        }
                    }
                }
            } else {
                if (input[5] < 36.05) {
                    if (input[1] < 1.0) {
                        if (input[17] < 1.0) {
                            var6 = -0.032963723;
                        } else {
                            var6 = 0.0056098397;
                        }
                    } else {
                        if (input[0] < 21.0) {
                            var6 = 0.014043148;
                        } else {
                            var6 = -0.04697229;
                        }
                    }
                } else {
                    if (input[15] < 1.0) {
                        if (input[8] < 298.8) {
                            var6 = -0.049253013;
                        } else {
                            var6 = 0.025383458;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var6 = -0.039775338;
                        } else {
                            var6 = 0.0738555;
                        }
                    }
                }
            }
        }
    }
    double var7;
    if (input[10] < 76.0) {
        if (input[18] < 102.0) {
            if (input[6] < 1.0) {
                if (input[9] < 101.0) {
                    if (input[10] < 70.0) {
                        if (input[0] < 31.0) {
                            var7 = -0.021767937;
                        } else {
                            var7 = 0.10073566;
                        }
                    } else {
                        var7 = -0.048925947;
                    }
                } else {
                    if (input[5] < 16.56) {
                        if (input[0] < 56.0) {
                            var7 = 0.09137932;
                        } else {
                            var7 = -0.008649255;
                        }
                    } else {
                        if (input[0] < 80.0) {
                            var7 = -0.032321718;
                        } else {
                            var7 = 0.024765817;
                        }
                    }
                }
            } else {
                if (input[10] < 65.0) {
                    if (input[8] < 190.0) {
                        var7 = 0.008575796;
                    } else {
                        var7 = -0.051642176;
                    }
                } else {
                    if (input[5] < 18.01) {
                        var7 = -0.008843555;
                    } else {
                        if (input[5] < 25.08) {
                            var7 = 0.112106696;
                        } else {
                            var7 = 0.032807425;
                        }
                    }
                }
            }
        } else {
            if (input[10] < 73.0) {
                if (input[0] < 86.0) {
                    if (input[5] < 22.85) {
                        if (input[5] < 22.44) {
                            var7 = -0.023471152;
                        } else {
                            var7 = -0.04714076;
                        }
                    } else {
                        if (input[5] < 23.54) {
                            var7 = 0.00054974115;
                        } else {
                            var7 = -0.020510064;
                        }
                    }
                } else {
                    if (input[5] < 34.86) {
                        if (input[8] < 157.6) {
                            var7 = 0.018384261;
                        } else {
                            var7 = -0.04156735;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var7 = -0.022708891;
                        } else {
                            var7 = 0.061811652;
                        }
                    }
                }
            } else {
                if (input[18] < 107.0) {
                    if (input[3] < 1.0) {
                        if (input[5] < 19.69) {
                            var7 = 0.036999382;
                        } else {
                            var7 = -0.034363795;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var7 = -0.03014828;
                        } else {
                            var7 = 0.048069157;
                        }
                    }
                } else {
                    if (input[6] < 1.0) {
                        if (input[8] < 174.5) {
                            var7 = -0.01222856;
                        } else {
                            var7 = -0.02910381;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var7 = -0.032179907;
                        } else {
                            var7 = -0.053692978;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 15.12) {
            if (input[0] < 79.0) {
                if (input[8] < 186.5) {
                    if (input[9] < 159.0) {
                        if (input[8] < 178.1) {
                            var7 = -0.0633479;
                        } else {
                            var7 = 0.0068644546;
                        }
                    } else {
                        if (input[0] < 71.0) {
                            var7 = 0.096617684;
                        } else {
                            var7 = 0.006020352;
                        }
                    }
                } else {
                    if (input[8] < 273.0) {
                        var7 = -0.066450916;
                    } else {
                        if (input[8] < 276.0) {
                            var7 = 0.04973697;
                        } else {
                            var7 = -0.058718827;
                        }
                    }
                }
            } else {
                if (input[8] < 189.4) {
                    var7 = -0.053183522;
                } else {
                    if (input[0] < 84.0) {
                        var7 = 0.10551522;
                    } else {
                        var7 = -0.013424304;
                    }
                }
            }
        } else {
            if (input[7] < 1.0) {
                if (input[9] < 126.0) {
                    if (input[9] < 122.0) {
                        if (input[18] < 152.0) {
                            var7 = -0.02088901;
                        } else {
                            var7 = -0.0138644865;
                        }
                    } else {
                        if (input[5] < 30.69) {
                            var7 = -0.0014320373;
                        } else {
                            var7 = -0.019722274;
                        }
                    }
                } else {
                    if (input[8] < 202.0) {
                        if (input[3] < 1.0) {
                            var7 = -0.01981271;
                        } else {
                            var7 = -0.02806953;
                        }
                    } else {
                        if (input[9] < 179.0) {
                            var7 = -0.019108264;
                        } else {
                            var7 = 0.0059780134;
                        }
                    }
                }
            } else {
                if (input[9] < 169.0) {
                    if (input[9] < 162.0) {
                        if (input[5] < 36.92) {
                            var7 = -0.020633101;
                        } else {
                            var7 = -0.031209221;
                        }
                    } else {
                        if (input[18] < 166.0) {
                            var7 = -0.026166866;
                        } else {
                            var7 = -0.04528565;
                        }
                    }
                } else {
                    if (input[9] < 170.0) {
                        if (input[5] < 33.46) {
                            var7 = 0.03268565;
                        } else {
                            var7 = -0.029800946;
                        }
                    } else {
                        if (input[5] < 39.05) {
                            var7 = -0.015706908;
                        } else {
                            var7 = 0.026361618;
                        }
                    }
                }
            }
        }
    }
    double var8;
    if (input[10] < 101.0) {
        if (input[9] < 128.0) {
            if (input[7] < 1.0) {
                if (input[9] < 94.0) {
                    if (input[8] < 155.2) {
                        if (input[18] < 159.0) {
                            var8 = -0.0061189635;
                        } else {
                            var8 = 0.08637305;
                        }
                    } else {
                        if (input[0] < 29.0) {
                            var8 = 0.00855215;
                        } else {
                            var8 = -0.015990995;
                        }
                    }
                } else {
                    if (input[8] < 297.0) {
                        if (input[8] < 288.4) {
                            var8 = -0.01765505;
                        } else {
                            var8 = -0.0039988756;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var8 = -0.009657835;
                        } else {
                            var8 = -0.05023807;
                        }
                    }
                }
            } else {
                if (input[9] < 126.0) {
                    if (input[5] < 17.04) {
                        if (input[0] < 85.0) {
                            var8 = -0.042774033;
                        } else {
                            var8 = 0.023308475;
                        }
                    } else {
                        if (input[0] < 82.0) {
                            var8 = -0.023404097;
                        } else {
                            var8 = -0.011357861;
                        }
                    }
                } else {
                    if (input[10] < 89.0) {
                        if (input[10] < 75.0) {
                            var8 = -0.017495453;
                        } else {
                            var8 = 0.046220616;
                        }
                    } else {
                        if (input[5] < 38.06) {
                            var8 = -0.045073397;
                        } else {
                            var8 = 0.050861187;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 155.0) {
                if (input[10] < 100.0) {
                    if (input[9] < 141.0) {
                        if (input[1] < 1.0) {
                            var8 = -0.016187679;
                        } else {
                            var8 = -0.023518993;
                        }
                    } else {
                        if (input[5] < 15.57) {
                            var8 = -0.0033424317;
                        } else {
                            var8 = -0.025776967;
                        }
                    }
                } else {
                    if (input[5] < 39.43) {
                        if (input[16] < 2.0) {
                            var8 = -0.050017606;
                        } else {
                            var8 = -0.025854131;
                        }
                    } else {
                        var8 = 0.030305762;
                    }
                }
            } else {
                if (input[1] < 1.0) {
                    if (input[8] < 223.2) {
                        if (input[5] < 28.86) {
                            var8 = -0.012618727;
                        } else {
                            var8 = -0.02524426;
                        }
                    } else {
                        if (input[5] < 39.71) {
                            var8 = -0.02770093;
                        } else {
                            var8 = 0.0185595;
                        }
                    }
                } else {
                    if (input[8] < 244.0) {
                        if (input[5] < 27.13) {
                            var8 = -0.025825525;
                        } else {
                            var8 = -0.016766975;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var8 = 0.0018942597;
                        } else {
                            var8 = -0.014785873;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 107.0) {
            if (input[0] < 89.0) {
                if (input[9] < 179.0) {
                    if (input[13] < 1.0) {
                        if (input[9] < 147.0) {
                            var8 = -0.015052783;
                        } else {
                            var8 = 0.0021176578;
                        }
                    } else {
                        if (input[8] < 298.1) {
                            var8 = -0.015093773;
                        } else {
                            var8 = -0.05055965;
                        }
                    }
                } else {
                    if (input[18] < 164.0) {
                        if (input[4] < 2.0) {
                            var8 = -0.00010442619;
                        } else {
                            var8 = 0.07340707;
                        }
                    } else {
                        if (input[5] < 30.6) {
                            var8 = -0.051027622;
                        } else {
                            var8 = 0.013846307;
                        }
                    }
                }
            } else {
                if (input[2] < 1.0) {
                    if (input[8] < 263.2) {
                        var8 = -0.060793817;
                    } else {
                        if (input[9] < 133.0) {
                            var8 = 0.05324542;
                        } else {
                            var8 = -0.05108231;
                        }
                    }
                } else {
                    if (input[10] < 105.0) {
                        var8 = 0.04602747;
                    } else {
                        var8 = -0.03852652;
                    }
                }
            }
        } else {
            if (input[8] < 295.4) {
                if (input[8] < 263.2) {
                    if (input[8] < 151.8) {
                        if (input[18] < 175.0) {
                            var8 = -0.016759299;
                        } else {
                            var8 = 0.031015892;
                        }
                    } else {
                        if (input[9] < 152.0) {
                            var8 = -0.018398745;
                        } else {
                            var8 = -0.022235848;
                        }
                    }
                } else {
                    if (input[9] < 166.0) {
                        if (input[0] < 19.0) {
                            var8 = 0.01813601;
                        } else {
                            var8 = -0.017824085;
                        }
                    } else {
                        if (input[5] < 37.1) {
                            var8 = -0.0053677307;
                        } else {
                            var8 = 0.043916922;
                        }
                    }
                }
            } else {
                if (input[18] < 196.0) {
                    if (input[11] < 1.0) {
                        if (input[0] < 80.0) {
                            var8 = -0.041800935;
                        } else {
                            var8 = -0.012526362;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var8 = 0.00926607;
                        } else {
                            var8 = -0.03083164;
                        }
                    }
                } else {
                    if (input[10] < 113.0) {
                        var8 = -0.04716522;
                    } else {
                        if (input[3] < 1.0) {
                            var8 = 0.07858349;
                        } else {
                            var8 = -0.008247059;
                        }
                    }
                }
            }
        }
    }
    double var9;
    if (input[10] < 76.0) {
        if (input[18] < 102.0) {
            if (input[5] < 26.42) {
                if (input[3] < 1.0) {
                    if (input[13] < 1.0) {
                        if (input[0] < 62.0) {
                            var9 = 0.09238265;
                        } else {
                            var9 = -0.043005455;
                        }
                    } else {
                        if (input[0] < 76.0) {
                            var9 = -0.03839851;
                        } else {
                            var9 = 0.045613676;
                        }
                    }
                } else {
                    if (input[4] < 2.0) {
                        if (input[7] < 1.0) {
                            var9 = 0.0358922;
                        } else {
                            var9 = -0.04058748;
                        }
                    } else {
                        var9 = 0.10082127;
                    }
                }
            } else {
                if (input[2] < 1.0) {
                    if (input[9] < 95.0) {
                        var9 = 0.066016205;
                    } else {
                        if (input[5] < 38.16) {
                            var9 = -0.04686308;
                        } else {
                            var9 = 0.03806993;
                        }
                    }
                } else {
                    if (input[8] < 184.2) {
                        if (input[10] < 63.0) {
                            var9 = 0.00422013;
                        } else {
                            var9 = -0.05023202;
                        }
                    } else {
                        if (input[10] < 69.0) {
                            var9 = 0.0043559372;
                        } else {
                            var9 = 0.077937074;
                        }
                    }
                }
            }
        } else {
            if (input[10] < 73.0) {
                if (input[0] < 86.0) {
                    if (input[5] < 22.85) {
                        if (input[9] < 163.0) {
                            var9 = -0.024638833;
                        } else {
                            var9 = -0.011869003;
                        }
                    } else {
                        if (input[5] < 23.54) {
                            var9 = 0.0025102978;
                        } else {
                            var9 = -0.018007366;
                        }
                    }
                } else {
                    if (input[5] < 34.86) {
                        if (input[8] < 157.6) {
                            var9 = 0.01890872;
                        } else {
                            var9 = -0.03905262;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var9 = 0.03439747;
                        } else {
                            var9 = -0.03004241;
                        }
                    }
                }
            } else {
                if (input[18] < 107.0) {
                    if (input[4] < 1.0) {
                        if (input[18] < 106.0) {
                            var9 = -0.057442218;
                        } else {
                            var9 = -0.0037374608;
                        }
                    } else {
                        if (input[5] < 28.95) {
                            var9 = 0.027503699;
                        } else {
                            var9 = -0.016683556;
                        }
                    }
                } else {
                    if (input[6] < 1.0) {
                        if (input[8] < 174.5) {
                            var9 = -0.00985943;
                        } else {
                            var9 = -0.026527008;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var9 = -0.029659528;
                        } else {
                            var9 = -0.05130889;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 15.12) {
            if (input[0] < 79.0) {
                if (input[9] < 159.0) {
                    if (input[9] < 94.0) {
                        var9 = -0.0026866014;
                    } else {
                        if (input[8] < 273.0) {
                            var9 = -0.06497124;
                        } else {
                            var9 = -0.026633939;
                        }
                    }
                } else {
                    if (input[8] < 175.0) {
                        if (input[3] < 1.0) {
                            var9 = 0.09402625;
                        } else {
                            var9 = 0.006820388;
                        }
                    } else {
                        var9 = -0.058959972;
                    }
                }
            } else {
                if (input[8] < 189.4) {
                    var9 = -0.051318377;
                } else {
                    if (input[0] < 84.0) {
                        var9 = 0.1009174;
                    } else {
                        var9 = -0.011886534;
                    }
                }
            }
        } else {
            if (input[7] < 1.0) {
                if (input[9] < 126.0) {
                    if (input[9] < 122.0) {
                        if (input[18] < 152.0) {
                            var9 = -0.01852396;
                        } else {
                            var9 = -0.011709302;
                        }
                    } else {
                        if (input[5] < 30.69) {
                            var9 = 0.00050423027;
                        } else {
                            var9 = -0.017354665;
                        }
                    }
                } else {
                    if (input[8] < 202.0) {
                        if (input[3] < 1.0) {
                            var9 = -0.017331956;
                        } else {
                            var9 = -0.025510592;
                        }
                    } else {
                        if (input[9] < 179.0) {
                            var9 = -0.016681721;
                        } else {
                            var9 = 0.007564731;
                        }
                    }
                }
            } else {
                if (input[9] < 169.0) {
                    if (input[9] < 162.0) {
                        if (input[5] < 36.92) {
                            var9 = -0.01817325;
                        } else {
                            var9 = -0.028671285;
                        }
                    } else {
                        if (input[18] < 166.0) {
                            var9 = -0.023636855;
                        } else {
                            var9 = -0.042837128;
                        }
                    }
                } else {
                    if (input[9] < 170.0) {
                        if (input[5] < 33.46) {
                            var9 = 0.032844674;
                        } else {
                            var9 = -0.027653486;
                        }
                    } else {
                        if (input[5] < 39.05) {
                            var9 = -0.013431159;
                        } else {
                            var9 = 0.026690757;
                        }
                    }
                }
            }
        }
    }
    double var10;
    if (input[10] < 101.0) {
        if (input[9] < 128.0) {
            if (input[7] < 1.0) {
                if (input[5] < 38.75) {
                    if (input[8] < 156.4) {
                        if (input[9] < 95.0) {
                            var10 = 0.04726888;
                        } else {
                            var10 = -0.010322517;
                        }
                    } else {
                        if (input[12] < 2.0) {
                            var10 = -0.01156644;
                        } else {
                            var10 = -0.01719666;
                        }
                    }
                } else {
                    if (input[11] < 1.0) {
                        if (input[5] < 39.81) {
                            var10 = -0.038508408;
                        } else {
                            var10 = -0.0006036131;
                        }
                    } else {
                        if (input[4] < 2.0) {
                            var10 = -0.026721045;
                        } else {
                            var10 = 0.02852335;
                        }
                    }
                }
            } else {
                if (input[9] < 126.0) {
                    if (input[5] < 17.04) {
                        if (input[0] < 85.0) {
                            var10 = -0.04032697;
                        } else {
                            var10 = 0.023733929;
                        }
                    } else {
                        if (input[9] < 94.0) {
                            var10 = -0.030659262;
                        } else {
                            var10 = -0.018347118;
                        }
                    }
                } else {
                    if (input[10] < 86.0) {
                        if (input[10] < 75.0) {
                            var10 = -0.015313891;
                        } else {
                            var10 = 0.061591387;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var10 = -0.043832287;
                        } else {
                            var10 = 0.013428608;
                        }
                    }
                }
            }
        } else {
            if (input[18] < 126.0) {
                if (input[10] < 90.0) {
                    if (input[18] < 114.0) {
                        if (input[18] < 109.0) {
                            var10 = -0.02039574;
                        } else {
                            var10 = -0.006863568;
                        }
                    } else {
                        if (input[8] < 198.3) {
                            var10 = -0.013817075;
                        } else {
                            var10 = -0.029193014;
                        }
                    }
                } else {
                    if (input[0] < 80.0) {
                        if (input[5] < 33.98) {
                            var10 = -0.026499772;
                        } else {
                            var10 = -0.045696083;
                        }
                    } else {
                        if (input[5] < 35.26) {
                            var10 = -0.023845008;
                        } else {
                            var10 = 0.029466135;
                        }
                    }
                }
            } else {
                if (input[5] < 39.23) {
                    if (input[8] < 179.2) {
                        if (input[8] < 166.1) {
                            var10 = -0.02063117;
                        } else {
                            var10 = -0.0060094832;
                        }
                    } else {
                        if (input[5] < 35.07) {
                            var10 = -0.018106248;
                        } else {
                            var10 = -0.026130265;
                        }
                    }
                } else {
                    if (input[17] < 1.0) {
                        if (input[9] < 175.0) {
                            var10 = -0.017794391;
                        } else {
                            var10 = 0.034030225;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var10 = 0.058036663;
                        } else {
                            var10 = -0.0013935906;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 108.0) {
            if (input[5] < 23.24) {
                if (input[9] < 176.0) {
                    if (input[18] < 138.0) {
                        if (input[8] < 212.2) {
                            var10 = -0.016038734;
                        } else {
                            var10 = -0.036793254;
                        }
                    } else {
                        if (input[18] < 143.0) {
                            var10 = 0.033263545;
                        } else {
                            var10 = -0.017551616;
                        }
                    }
                } else {
                    if (input[8] < 208.0) {
                        if (input[18] < 111.0) {
                            var10 = 0.019188633;
                        } else {
                            var10 = -0.04791847;
                        }
                    } else {
                        if (input[5] < 18.21) {
                            var10 = -0.005998876;
                        } else {
                            var10 = 0.07536353;
                        }
                    }
                }
            } else {
                if (input[5] < 35.56) {
                    if (input[0] < 45.0) {
                        if (input[10] < 107.0) {
                            var10 = -0.004555319;
                        } else {
                            var10 = 0.02153073;
                        }
                    } else {
                        if (input[8] < 272.3) {
                            var10 = -0.013435009;
                        } else {
                            var10 = 0.00020594956;
                        }
                    }
                } else {
                    if (input[0] < 75.0) {
                        if (input[5] < 38.96) {
                            var10 = -0.025414769;
                        } else {
                            var10 = -0.0058545433;
                        }
                    } else {
                        if (input[18] < 179.0) {
                            var10 = -0.022306735;
                        } else {
                            var10 = 0.07343429;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 295.4) {
                if (input[8] < 285.3) {
                    if (input[8] < 284.8) {
                        if (input[16] < 2.0) {
                            var10 = -0.015405558;
                        } else {
                            var10 = -0.01898865;
                        }
                    } else {
                        if (input[5] < 37.1) {
                            var10 = -0.05612229;
                        } else {
                            var10 = 0.027484348;
                        }
                    }
                } else {
                    if (input[5] < 17.13) {
                        if (input[5] < 15.29) {
                            var10 = 0.02799427;
                        } else {
                            var10 = -0.040430907;
                        }
                    } else {
                        if (input[9] < 148.0) {
                            var10 = -0.012792277;
                        } else {
                            var10 = 0.0038999883;
                        }
                    }
                }
            } else {
                if (input[5] < 36.05) {
                    if (input[1] < 1.0) {
                        if (input[17] < 1.0) {
                            var10 = -0.028324459;
                        } else {
                            var10 = 0.010088298;
                        }
                    } else {
                        if (input[0] < 21.0) {
                            var10 = 0.015520513;
                        } else {
                            var10 = -0.042846773;
                        }
                    }
                } else {
                    if (input[15] < 1.0) {
                        if (input[8] < 298.8) {
                            var10 = -0.04511146;
                        } else {
                            var10 = 0.029531581;
                        }
                    } else {
                        if (input[17] < 1.0) {
                            var10 = 0.07630661;
                        } else {
                            var10 = -0.038787007;
                        }
                    }
                }
            }
        }
    }
    double var11;
    if (input[10] < 76.0) {
        if (input[18] < 102.0) {
            if (input[6] < 1.0) {
                if (input[5] < 24.2) {
                    if (input[13] < 1.0) {
                        if (input[0] < 73.0) {
                            var11 = 0.09135135;
                        } else {
                            var11 = -0.040829487;
                        }
                    } else {
                        if (input[8] < 275.3) {
                            var11 = -0.030709056;
                        } else {
                            var11 = 0.059074063;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[5] < 37.88) {
                            var11 = -0.039960455;
                        } else {
                            var11 = 0.03539508;
                        }
                    } else {
                        if (input[0] < 80.0) {
                            var11 = -0.007114436;
                        } else {
                            var11 = 0.09454517;
                        }
                    }
                }
            } else {
                if (input[10] < 65.0) {
                    if (input[8] < 190.0) {
                        var11 = 0.008294728;
                    } else {
                        var11 = -0.048654355;
                    }
                } else {
                    if (input[5] < 18.01) {
                        var11 = -0.008690637;
                    } else {
                        if (input[12] < 1.0) {
                            var11 = 0.09867316;
                        } else {
                            var11 = 0.02969639;
                        }
                    }
                }
            }
        } else {
            if (input[10] < 73.0) {
                if (input[0] < 86.0) {
                    if (input[0] < 22.0) {
                        if (input[15] < 1.0) {
                            var11 = -0.011744718;
                        } else {
                            var11 = 0.026266081;
                        }
                    } else {
                        if (input[5] < 19.61) {
                            var11 = -0.022912772;
                        } else {
                            var11 = -0.01571892;
                        }
                    }
                } else {
                    if (input[5] < 34.86) {
                        if (input[8] < 157.6) {
                            var11 = 0.01933932;
                        } else {
                            var11 = -0.036716502;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var11 = -0.018486956;
                        } else {
                            var11 = 0.06237405;
                        }
                    }
                }
            } else {
                if (input[6] < 1.0) {
                    if (input[8] < 174.5) {
                        if (input[8] < 168.3) {
                            var11 = -0.016154638;
                        } else {
                            var11 = 0.017306274;
                        }
                    } else {
                        if (input[18] < 184.0) {
                            var11 = -0.025958052;
                        } else {
                            var11 = -0.010174345;
                        }
                    }
                } else {
                    if (input[17] < 1.0) {
                        if (input[8] < 155.8) {
                            var11 = 0.008443708;
                        } else {
                            var11 = -0.04178917;
                        }
                    } else {
                        if (input[5] < 16.84) {
                            var11 = 0.059427835;
                        } else {
                            var11 = -0.018402033;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 15.12) {
            if (input[0] < 79.0) {
                if (input[8] < 186.5) {
                    if (input[9] < 159.0) {
                        if (input[9] < 97.0) {
                            var11 = 0.010737731;
                        } else {
                            var11 = -0.059650894;
                        }
                    } else {
                        if (input[0] < 71.0) {
                            var11 = 0.09224137;
                        } else {
                            var11 = 0.0066246535;
                        }
                    }
                } else {
                    if (input[8] < 273.0) {
                        var11 = -0.062663935;
                    } else {
                        if (input[8] < 276.0) {
                            var11 = 0.050911944;
                        } else {
                            var11 = -0.05536727;
                        }
                    }
                }
            } else {
                if (input[8] < 189.4) {
                    var11 = -0.04971489;
                } else {
                    if (input[18] < 131.0) {
                        var11 = -0.011106318;
                    } else {
                        var11 = 0.09841919;
                    }
                }
            }
        } else {
            if (input[8] < 245.6) {
                if (input[8] < 239.2) {
                    if (input[9] < 143.0) {
                        if (input[7] < 1.0) {
                            var11 = -0.012678235;
                        } else {
                            var11 = -0.017960241;
                        }
                    } else {
                        if (input[5] < 16.75) {
                            var11 = -0.030304328;
                        } else {
                            var11 = -0.016419053;
                        }
                    }
                } else {
                    if (input[9] < 93.0) {
                        if (input[10] < 126.0) {
                            var11 = -0.0572815;
                        } else {
                            var11 = 0.009405226;
                        }
                    } else {
                        if (input[10] < 114.0) {
                            var11 = -0.017200084;
                        } else {
                            var11 = -0.02897955;
                        }
                    }
                }
            } else {
                if (input[18] < 127.0) {
                    if (input[9] < 169.0) {
                        if (input[9] < 95.0) {
                            var11 = 0.00031922525;
                        } else {
                            var11 = -0.021955932;
                        }
                    } else {
                        if (input[5] < 17.42) {
                            var11 = -0.039064873;
                        } else {
                            var11 = -0.0008026298;
                        }
                    }
                } else {
                    if (input[10] < 115.0) {
                        if (input[8] < 252.0) {
                            var11 = -0.0013687426;
                        } else {
                            var11 = -0.010944618;
                        }
                    } else {
                        if (input[18] < 157.0) {
                            var11 = -0.01031259;
                        } else {
                            var11 = -0.02074278;
                        }
                    }
                }
            }
        }
    }
    double var12;
    if (input[10] < 101.0) {
        if (input[9] < 111.0) {
            if (input[10] < 97.0) {
                if (input[18] < 112.0) {
                    if (input[10] < 64.0) {
                        if (input[3] < 1.0) {
                            var12 = 0.00064744323;
                        } else {
                            var12 = 0.05055764;
                        }
                    } else {
                        if (input[5] < 25.84) {
                            var12 = -0.01760239;
                        } else {
                            var12 = 0.0034767233;
                        }
                    }
                } else {
                    if (input[0] < 85.0) {
                        if (input[4] < 1.0) {
                            var12 = -0.0071941884;
                        } else {
                            var12 = -0.016191678;
                        }
                    } else {
                        if (input[18] < 138.0) {
                            var12 = -0.02765586;
                        } else {
                            var12 = 0.011618543;
                        }
                    }
                }
            } else {
                if (input[18] < 139.0) {
                    if (input[2] < 1.0) {
                        if (input[3] < 1.0) {
                            var12 = -0.036747262;
                        } else {
                            var12 = -0.0023835409;
                        }
                    } else {
                        if (input[5] < 17.72) {
                            var12 = -0.01020155;
                        } else {
                            var12 = -0.06188604;
                        }
                    }
                } else {
                    if (input[16] < 2.0) {
                        if (input[4] < 1.0) {
                            var12 = -0.037718352;
                        } else {
                            var12 = 0.0024645044;
                        }
                    } else {
                        if (input[0] < 39.0) {
                            var12 = 0.006655842;
                        } else {
                            var12 = -0.04722509;
                        }
                    }
                }
            }
        } else {
            if (input[18] < 126.0) {
                if (input[10] < 90.0) {
                    if (input[8] < 293.1) {
                        if (input[8] < 290.7) {
                            var12 = -0.017335285;
                        } else {
                            var12 = 0.015441358;
                        }
                    } else {
                        if (input[0] < 38.0) {
                            var12 = -0.011053584;
                        } else {
                            var12 = -0.047054403;
                        }
                    }
                } else {
                    if (input[14] < 1.0) {
                        if (input[16] < 1.0) {
                            var12 = 0.0035289668;
                        } else {
                            var12 = -0.027174084;
                        }
                    } else {
                        if (input[8] < 289.5) {
                            var12 = -0.03170864;
                        } else {
                            var12 = -0.005261553;
                        }
                    }
                }
            } else {
                if (input[0] < 19.0) {
                    if (input[10] < 90.0) {
                        if (input[18] < 160.0) {
                            var12 = -0.027647808;
                        } else {
                            var12 = -0.056945063;
                        }
                    } else {
                        if (input[9] < 143.0) {
                            var12 = -0.04842836;
                        } else {
                            var12 = 0.019286884;
                        }
                    }
                } else {
                    if (input[5] < 39.71) {
                        if (input[8] < 279.5) {
                            var12 = -0.016152682;
                        } else {
                            var12 = -0.0103990715;
                        }
                    } else {
                        if (input[8] < 183.1) {
                            var12 = -0.03743723;
                        } else {
                            var12 = 0.013120457;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 107.0) {
            if (input[0] < 89.0) {
                if (input[13] < 1.0) {
                    if (input[9] < 153.0) {
                        if (input[12] < 2.0) {
                            var12 = 0.0009485936;
                        } else {
                            var12 = -0.020968491;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var12 = 0.015802093;
                        } else {
                            var12 = -0.021204295;
                        }
                    }
                } else {
                    if (input[8] < 298.1) {
                        if (input[5] < 15.68) {
                            var12 = -0.036840048;
                        } else {
                            var12 = -0.010048415;
                        }
                    } else {
                        if (input[9] < 93.0) {
                            var12 = 0.012916312;
                        } else {
                            var12 = -0.053527344;
                        }
                    }
                }
            } else {
                if (input[2] < 1.0) {
                    if (input[8] < 263.2) {
                        var12 = -0.058346983;
                    } else {
                        if (input[9] < 133.0) {
                            var12 = 0.053915273;
                        } else {
                            var12 = -0.04864302;
                        }
                    }
                } else {
                    if (input[18] < 135.0) {
                        var12 = 0.04804366;
                    } else {
                        var12 = -0.03680763;
                    }
                }
            }
        } else {
            if (input[8] < 295.4) {
                if (input[8] < 262.7) {
                    if (input[8] < 260.9) {
                        if (input[8] < 151.8) {
                            var12 = -0.0002615295;
                        } else {
                            var12 = -0.01501275;
                        }
                    } else {
                        if (input[0] < 38.0) {
                            var12 = -0.058659624;
                        } else {
                            var12 = -0.017513119;
                        }
                    }
                } else {
                    if (input[9] < 169.0) {
                        if (input[5] < 17.04) {
                            var12 = -0.027854133;
                        } else {
                            var12 = -0.011805919;
                        }
                    } else {
                        if (input[8] < 269.9) {
                            var12 = 0.042224236;
                        } else {
                            var12 = -0.0027788437;
                        }
                    }
                }
            } else {
                if (input[18] < 196.0) {
                    if (input[11] < 1.0) {
                        if (input[15] < 1.0) {
                            var12 = -0.03831813;
                        } else {
                            var12 = -0.009500062;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var12 = 0.013264748;
                        } else {
                            var12 = -0.026712889;
                        }
                    }
                } else {
                    if (input[10] < 113.0) {
                        var12 = -0.044686474;
                    } else {
                        if (input[3] < 1.0) {
                            var12 = 0.0794104;
                        } else {
                            var12 = -0.0051308298;
                        }
                    }
                }
            }
        }
    }
    double var13;
    if (input[5] < 15.12) {
        if (input[0] < 79.0) {
            if (input[10] < 66.0) {
                if (input[8] < 256.1) {
                    if (input[8] < 197.1) {
                        var13 = 0.012318871;
                    } else {
                        var13 = -0.045871753;
                    }
                } else {
                    var13 = 0.10129223;
                }
            } else {
                if (input[9] < 97.0) {
                    if (input[14] < 2.0) {
                        var13 = 0.040008098;
                    } else {
                        var13 = -0.039578237;
                    }
                } else {
                    if (input[8] < 175.0) {
                        if (input[9] < 159.0) {
                            var13 = -0.056972176;
                        } else {
                            var13 = 0.031800445;
                        }
                    } else {
                        if (input[8] < 273.0) {
                            var13 = -0.061961155;
                        } else {
                            var13 = -0.037172355;
                        }
                    }
                }
            }
        } else {
            if (input[0] < 84.0) {
                if (input[8] < 189.4) {
                    var13 = -0.041702714;
                } else {
                    var13 = 0.10406846;
                }
            } else {
                if (input[13] < 3.0) {
                    var13 = -0.050798066;
                } else {
                    var13 = 0.011083635;
                }
            }
        }
    } else {
        if (input[10] < 76.0) {
            if (input[10] < 71.0) {
                if (input[18] < 199.0) {
                    if (input[18] < 186.0) {
                        if (input[18] < 102.0) {
                            var13 = 0.0054504373;
                        } else {
                            var13 = -0.015472549;
                        }
                    } else {
                        if (input[5] < 19.61) {
                            var13 = -0.02836482;
                        } else {
                            var13 = -0.0012619933;
                        }
                    }
                } else {
                    if (input[9] < 159.0) {
                        if (input[9] < 98.0) {
                            var13 = -0.00089003204;
                        } else {
                            var13 = -0.06206664;
                        }
                    } else {
                        if (input[9] < 169.0) {
                            var13 = 0.047183167;
                        } else {
                            var13 = -0.045605816;
                        }
                    }
                }
            } else {
                if (input[13] < 1.0) {
                    if (input[0] < 84.0) {
                        if (input[8] < 178.1) {
                            var13 = 0.006911435;
                        } else {
                            var13 = -0.017507177;
                        }
                    } else {
                        if (input[9] < 100.0) {
                            var13 = 0.117502294;
                        } else {
                            var13 = 0.013793791;
                        }
                    }
                } else {
                    if (input[18] < 111.0) {
                        if (input[0] < 24.0) {
                            var13 = 0.042083602;
                        } else {
                            var13 = -0.012103461;
                        }
                    } else {
                        if (input[8] < 254.3) {
                            var13 = -0.020662548;
                        } else {
                            var13 = -0.03464195;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 245.6) {
                if (input[8] < 239.2) {
                    if (input[9] < 143.0) {
                        if (input[7] < 1.0) {
                            var13 = -0.010832961;
                        } else {
                            var13 = -0.016012179;
                        }
                    } else {
                        if (input[5] < 16.75) {
                            var13 = -0.028098216;
                        } else {
                            var13 = -0.014468901;
                        }
                    }
                } else {
                    if (input[12] < 2.0) {
                        if (input[10] < 117.0) {
                            var13 = -0.0068405843;
                        } else {
                            var13 = -0.035298277;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var13 = -0.028603617;
                        } else {
                            var13 = -0.0062839473;
                        }
                    }
                }
            } else {
                if (input[18] < 127.0) {
                    if (input[9] < 169.0) {
                        if (input[18] < 124.0) {
                            var13 = -0.016375704;
                        } else {
                            var13 = -0.034271132;
                        }
                    } else {
                        if (input[5] < 17.42) {
                            var13 = -0.03714731;
                        } else {
                            var13 = 0.0005343043;
                        }
                    }
                } else {
                    if (input[10] < 115.0) {
                        if (input[0] < 84.0) {
                            var13 = -0.00901198;
                        } else {
                            var13 = 0.0022708077;
                        }
                    } else {
                        if (input[18] < 157.0) {
                            var13 = -0.008607986;
                        } else {
                            var13 = -0.018766938;
                        }
                    }
                }
            }
        }
    }
    double var14;
    if (input[8] < 296.4) {
        if (input[8] < 288.4) {
            if (input[10] < 101.0) {
                if (input[8] < 287.7) {
                    if (input[12] < 2.0) {
                        if (input[5] < 15.48) {
                            var14 = -0.031123728;
                        } else {
                            var14 = -0.012166852;
                        }
                    } else {
                        if (input[5] < 29.52) {
                            var14 = -0.013387573;
                        } else {
                            var14 = -0.018301873;
                        }
                    }
                } else {
                    if (input[18] < 152.0) {
                        if (input[5] < 15.68) {
                            var14 = 0.012344362;
                        } else {
                            var14 = -0.05479567;
                        }
                    } else {
                        if (input[18] < 178.0) {
                            var14 = 0.022122359;
                        } else {
                            var14 = -0.05786393;
                        }
                    }
                }
            } else {
                if (input[10] < 108.0) {
                    if (input[5] < 23.24) {
                        if (input[5] < 17.32) {
                            var14 = -0.0021293128;
                        } else {
                            var14 = -0.017842686;
                        }
                    } else {
                        if (input[9] < 95.0) {
                            var14 = -0.027885959;
                        } else {
                            var14 = -0.0048730057;
                        }
                    }
                } else {
                    if (input[8] < 285.3) {
                        if (input[8] < 284.8) {
                            var14 = -0.012739477;
                        } else {
                            var14 = -0.043299004;
                        }
                    } else {
                        if (input[5] < 15.29) {
                            var14 = 0.092674844;
                        } else {
                            var14 = -0.004391403;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 124.0) {
                if (input[9] < 116.0) {
                    if (input[18] < 119.0) {
                        if (input[10] < 64.0) {
                            var14 = 0.10350877;
                        } else {
                            var14 = 0.006950325;
                        }
                    } else {
                        if (input[13] < 3.0) {
                            var14 = -0.016319528;
                        } else {
                            var14 = 0.005643695;
                        }
                    }
                } else {
                    if (input[1] < 1.0) {
                        if (input[12] < 2.0) {
                            var14 = 0.06418198;
                        } else {
                            var14 = 0.0068194955;
                        }
                    } else {
                        if (input[8] < 292.5) {
                            var14 = -0.03047148;
                        } else {
                            var14 = 0.024885703;
                        }
                    }
                }
            } else {
                if (input[18] < 102.0) {
                    if (input[10] < 78.0) {
                        var14 = -0.04489792;
                    } else {
                        if (input[1] < 1.0) {
                            var14 = 0.11051291;
                        } else {
                            var14 = 0.017729899;
                        }
                    }
                } else {
                    if (input[5] < 39.43) {
                        if (input[18] < 142.0) {
                            var14 = -0.01969808;
                        } else {
                            var14 = -0.009386789;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var14 = -0.008909083;
                        } else {
                            var14 = 0.10662496;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 22.95) {
            if (input[5] < 19.97) {
                if (input[5] < 19.69) {
                    if (input[0] < 39.0) {
                        if (input[5] < 18.31) {
                            var14 = 0.013467105;
                        } else {
                            var14 = -0.056138802;
                        }
                    } else {
                        if (input[5] < 18.01) {
                            var14 = -0.05507509;
                        } else {
                            var14 = -0.013264887;
                        }
                    }
                } else {
                    if (input[0] < 31.0) {
                        var14 = -0.03948907;
                    } else {
                        if (input[13] < 1.0) {
                            var14 = 0.0011797011;
                        } else {
                            var14 = 0.14317329;
                        }
                    }
                }
            } else {
                if (input[10] < 77.0) {
                    if (input[10] < 68.0) {
                        var14 = -0.0561331;
                    } else {
                        if (input[13] < 1.0) {
                            var14 = 0.05007214;
                        } else {
                            var14 = -0.030143047;
                        }
                    }
                } else {
                    if (input[9] < 168.0) {
                        var14 = -0.061171826;
                    } else {
                        if (input[10] < 103.0) {
                            var14 = 0.03510619;
                        } else {
                            var14 = -0.04512011;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 95.0) {
                if (input[0] < 52.0) {
                    if (input[5] < 26.03) {
                        var14 = 0.039743897;
                    } else {
                        var14 = -0.055086054;
                    }
                } else {
                    if (input[18] < 110.0) {
                        var14 = -0.043864317;
                    } else {
                        if (input[10] < 114.0) {
                            var14 = 0.087744884;
                        } else {
                            var14 = -0.005662575;
                        }
                    }
                }
            } else {
                if (input[18] < 101.0) {
                    var14 = 0.06773273;
                } else {
                    if (input[0] < 80.0) {
                        if (input[18] < 152.0) {
                            var14 = -0.030147731;
                        } else {
                            var14 = -0.010038257;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var14 = 0.047256876;
                        } else {
                            var14 = -0.009233335;
                        }
                    }
                }
            }
        }
    }
    double var15;
    if (input[5] < 15.12) {
        if (input[0] < 79.0) {
            if (input[10] < 66.0) {
                if (input[8] < 256.1) {
                    if (input[0] < 54.0) {
                        var15 = -0.044837642;
                    } else {
                        var15 = 0.013680442;
                    }
                } else {
                    var15 = 0.09759527;
                }
            } else {
                if (input[9] < 97.0) {
                    if (input[16] < 1.0) {
                        var15 = 0.04038109;
                    } else {
                        var15 = -0.03908005;
                    }
                } else {
                    if (input[8] < 175.0) {
                        if (input[9] < 159.0) {
                            var15 = -0.05559617;
                        } else {
                            var15 = 0.0315711;
                        }
                    } else {
                        if (input[8] < 273.0) {
                            var15 = -0.060597487;
                        } else {
                            var15 = -0.035490096;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 136.0) {
                if (input[9] < 105.0) {
                    var15 = 0.012017398;
                } else {
                    var15 = -0.04965226;
                }
            } else {
                if (input[8] < 223.2) {
                    var15 = -0.038008045;
                } else {
                    if (input[0] < 83.0) {
                        var15 = 0.112140395;
                    } else {
                        var15 = 0.009647308;
                    }
                }
            }
        }
    } else {
        if (input[7] < 1.0) {
            if (input[9] < 126.0) {
                if (input[4] < 2.0) {
                    if (input[0] < 67.0) {
                        if (input[8] < 156.4) {
                            var15 = 0.0011922885;
                        } else {
                            var15 = -0.013681564;
                        }
                    } else {
                        if (input[5] < 39.05) {
                            var15 = -0.005425214;
                        } else {
                            var15 = -0.037688974;
                        }
                    }
                } else {
                    if (input[9] < 121.0) {
                        if (input[12] < 2.0) {
                            var15 = -0.0043728533;
                        } else {
                            var15 = -0.012755337;
                        }
                    } else {
                        if (input[5] < 16.75) {
                            var15 = -0.04057103;
                        } else {
                            var15 = 0.0064398446;
                        }
                    }
                }
            } else {
                if (input[8] < 223.2) {
                    if (input[8] < 213.4) {
                        if (input[8] < 211.0) {
                            var15 = -0.013825099;
                        } else {
                            var15 = 0.006084345;
                        }
                    } else {
                        if (input[10] < 119.0) {
                            var15 = -0.027265355;
                        } else {
                            var15 = -0.0019656278;
                        }
                    }
                } else {
                    if (input[5] < 38.75) {
                        if (input[10] < 128.0) {
                            var15 = -0.010981111;
                        } else {
                            var15 = -0.02765662;
                        }
                    } else {
                        if (input[18] < 149.0) {
                            var15 = -0.0173287;
                        } else {
                            var15 = 0.016351307;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 169.0) {
                if (input[8] < 216.3) {
                    if (input[5] < 39.43) {
                        if (input[0] < 26.0) {
                            var15 = -0.0019421384;
                        } else {
                            var15 = -0.012217211;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var15 = 0.020806184;
                        } else {
                            var15 = -0.049146973;
                        }
                    }
                } else {
                    if (input[5] < 15.21) {
                        if (input[13] < 3.0) {
                            var15 = -0.00200704;
                        } else {
                            var15 = 0.12143242;
                        }
                    } else {
                        if (input[9] < 160.0) {
                            var15 = -0.016545797;
                        } else {
                            var15 = -0.0266771;
                        }
                    }
                }
            } else {
                if (input[10] < 122.0) {
                    if (input[18] < 103.0) {
                        if (input[10] < 81.0) {
                            var15 = 0.078948416;
                        } else {
                            var15 = 0.0012102335;
                        }
                    } else {
                        if (input[4] < 1.0) {
                            var15 = 0.0040883007;
                        } else {
                            var15 = -0.01214087;
                        }
                    }
                } else {
                    if (input[18] < 139.0) {
                        if (input[0] < 37.0) {
                            var15 = -0.028852537;
                        } else {
                            var15 = 0.06411203;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var15 = 0.040542703;
                        } else {
                            var15 = -0.02591661;
                        }
                    }
                }
            }
        }
    }
    double var16;
    if (input[8] < 296.4) {
        if (input[8] < 276.0) {
            if (input[8] < 274.8) {
                if (input[7] < 1.0) {
                    if (input[9] < 111.0) {
                        if (input[2] < 1.0) {
                            var16 = -0.01012206;
                        } else {
                            var16 = -0.002384736;
                        }
                    } else {
                        if (input[8] < 223.2) {
                            var16 = -0.01306876;
                        } else {
                            var16 = -0.009569998;
                        }
                    }
                } else {
                    if (input[8] < 218.1) {
                        if (input[5] < 29.8) {
                            var16 = -0.007950655;
                        } else {
                            var16 = -0.014878235;
                        }
                    } else {
                        if (input[9] < 169.0) {
                            var16 = -0.018074658;
                        } else {
                            var16 = -0.004605981;
                        }
                    }
                }
            } else {
                if (input[18] < 103.0) {
                    if (input[0] < 50.0) {
                        var16 = -0.007189193;
                    } else {
                        if (input[11] < 1.0) {
                            var16 = 0.016266506;
                        } else {
                            var16 = 0.11145451;
                        }
                    }
                } else {
                    if (input[5] < 15.57) {
                        if (input[12] < 2.0) {
                            var16 = -0.034512583;
                        } else {
                            var16 = 0.106575154;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var16 = -0.04847014;
                        } else {
                            var16 = -0.020683168;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 17.04) {
                if (input[8] < 285.9) {
                    if (input[9] < 168.0) {
                        if (input[10] < 64.0) {
                            var16 = 0.029836854;
                        } else {
                            var16 = -0.048198584;
                        }
                    } else {
                        if (input[0] < 75.0) {
                            var16 = -0.024924222;
                        } else {
                            var16 = 0.091942295;
                        }
                    }
                } else {
                    if (input[14] < 2.0) {
                        if (input[5] < 16.37) {
                            var16 = 0.018649077;
                        } else {
                            var16 = -0.03270058;
                        }
                    } else {
                        if (input[5] < 16.17) {
                            var16 = -0.050743826;
                        } else {
                            var16 = -0.0099349795;
                        }
                    }
                }
            } else {
                if (input[18] < 169.0) {
                    if (input[0] < 38.0) {
                        if (input[10] < 110.0) {
                            var16 = -0.020060766;
                        } else {
                            var16 = -0.005000994;
                        }
                    } else {
                        if (input[0] < 47.0) {
                            var16 = 0.00301991;
                        } else {
                            var16 = -0.008832389;
                        }
                    }
                } else {
                    if (input[9] < 98.0) {
                        if (input[8] < 281.3) {
                            var16 = 0.017907437;
                        } else {
                            var16 = -0.04927517;
                        }
                    } else {
                        if (input[9] < 132.0) {
                            var16 = 0.01052046;
                        } else {
                            var16 = -0.0066829855;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 22.95) {
            if (input[5] < 19.97) {
                if (input[5] < 19.69) {
                    if (input[0] < 39.0) {
                        if (input[5] < 18.31) {
                            var16 = 0.0143701425;
                        } else {
                            var16 = -0.05465746;
                        }
                    } else {
                        if (input[5] < 18.01) {
                            var16 = -0.05336241;
                        } else {
                            var16 = -0.01143372;
                        }
                    }
                } else {
                    if (input[0] < 31.0) {
                        var16 = -0.038273126;
                    } else {
                        if (input[0] < 61.0) {
                            var16 = 0.13452137;
                        } else {
                            var16 = 0.0010149333;
                        }
                    }
                }
            } else {
                if (input[10] < 77.0) {
                    if (input[10] < 68.0) {
                        var16 = -0.054667603;
                    } else {
                        if (input[18] < 129.0) {
                            var16 = -0.044472035;
                        } else {
                            var16 = 0.037937585;
                        }
                    }
                } else {
                    if (input[9] < 168.0) {
                        var16 = -0.059628736;
                    } else {
                        if (input[10] < 103.0) {
                            var16 = 0.034544323;
                        } else {
                            var16 = -0.043626547;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 95.0) {
                if (input[0] < 52.0) {
                    if (input[5] < 26.03) {
                        var16 = 0.03882903;
                    } else {
                        var16 = -0.05355641;
                    }
                } else {
                    if (input[18] < 110.0) {
                        var16 = -0.04262264;
                    } else {
                        if (input[10] < 114.0) {
                            var16 = 0.08227762;
                        } else {
                            var16 = -0.00478891;
                        }
                    }
                }
            } else {
                if (input[9] < 97.0) {
                    var16 = -0.057855215;
                } else {
                    if (input[0] < 80.0) {
                        if (input[18] < 101.0) {
                            var16 = 0.064444624;
                        } else {
                            var16 = -0.016508192;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var16 = 0.04891528;
                        } else {
                            var16 = -0.0058723427;
                        }
                    }
                }
            }
        }
    }
    double var17;
    if (input[5] < 15.12) {
        if (input[0] < 79.0) {
            if (input[10] < 66.0) {
                if (input[8] < 256.1) {
                    if (input[4] < 2.0) {
                        var17 = -0.04390021;
                    } else {
                        var17 = 0.015026616;
                    }
                } else {
                    var17 = 0.09343066;
                }
            } else {
                if (input[9] < 97.0) {
                    if (input[14] < 2.0) {
                        var17 = 0.04018746;
                    } else {
                        var17 = -0.038494516;
                    }
                } else {
                    if (input[8] < 175.0) {
                        if (input[9] < 159.0) {
                            var17 = -0.054397322;
                        } else {
                            var17 = 0.03094031;
                        }
                    } else {
                        if (input[8] < 273.0) {
                            var17 = -0.059426572;
                        } else {
                            var17 = -0.034039095;
                        }
                    }
                }
            }
        } else {
            if (input[0] < 84.0) {
                if (input[8] < 189.4) {
                    var17 = -0.03945807;
                } else {
                    var17 = 0.09552403;
                }
            } else {
                if (input[11] < 1.0) {
                    var17 = -0.048612177;
                } else {
                    var17 = 0.012773191;
                }
            }
        }
    } else {
        if (input[10] < 76.0) {
            if (input[10] < 73.0) {
                if (input[0] < 22.0) {
                    if (input[18] < 104.0) {
                        if (input[14] < 1.0) {
                            var17 = -0.03957164;
                        } else {
                            var17 = 0.0818642;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var17 = -0.008830823;
                        } else {
                            var17 = 0.03189339;
                        }
                    }
                } else {
                    if (input[9] < 111.0) {
                        if (input[8] < 162.5) {
                            var17 = 0.015419309;
                        } else {
                            var17 = -0.008686762;
                        }
                    } else {
                        if (input[0] < 85.0) {
                            var17 = -0.012676209;
                        } else {
                            var17 = -0.024835737;
                        }
                    }
                }
            } else {
                if (input[18] < 107.0) {
                    if (input[12] < 1.0) {
                        if (input[6] < 1.0) {
                            var17 = -0.05811503;
                        } else {
                            var17 = 0.01316112;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var17 = -0.0076626935;
                        } else {
                            var17 = 0.041784085;
                        }
                    }
                } else {
                    if (input[6] < 1.0) {
                        if (input[8] < 174.5) {
                            var17 = -0.002142244;
                        } else {
                            var17 = -0.018876342;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var17 = -0.022014646;
                        } else {
                            var17 = -0.04539251;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 296.4) {
                if (input[8] < 245.6) {
                    if (input[8] < 239.2) {
                        if (input[9] < 143.0) {
                            var17 = -0.00914818;
                        } else {
                            var17 = -0.01205885;
                        }
                    } else {
                        if (input[9] < 93.0) {
                            var17 = -0.04822744;
                        } else {
                            var17 = -0.015576141;
                        }
                    }
                } else {
                    if (input[18] < 127.0) {
                        if (input[9] < 93.0) {
                            var17 = 0.016812896;
                        } else {
                            var17 = -0.013870961;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var17 = -0.004160383;
                        } else {
                            var17 = -0.010418499;
                        }
                    }
                }
            } else {
                if (input[5] < 23.14) {
                    if (input[5] < 19.97) {
                        if (input[9] < 115.0) {
                            var17 = -0.047943056;
                        } else {
                            var17 = -0.0037889553;
                        }
                    } else {
                        if (input[9] < 163.0) {
                            var17 = -0.058918256;
                        } else {
                            var17 = -0.0047638034;
                        }
                    }
                } else {
                    if (input[9] < 93.0) {
                        if (input[18] < 119.0) {
                            var17 = -0.041461945;
                        } else {
                            var17 = 0.051424086;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var17 = -0.018390836;
                        } else {
                            var17 = -0.0006372262;
                        }
                    }
                }
            }
        }
    }
    double var18;
    if (input[5] < 15.12) {
        if (input[0] < 79.0) {
            if (input[10] < 66.0) {
                if (input[8] < 256.1) {
                    if (input[18] < 177.0) {
                        var18 = -0.043126844;
                    } else {
                        var18 = 0.015201122;
                    }
                } else {
                    var18 = 0.0891225;
                }
            } else {
                if (input[16] < 1.0) {
                    if (input[11] < 1.0) {
                        if (input[14] < 1.0) {
                            var18 = -0.0007578191;
                        } else {
                            var18 = -0.05554379;
                        }
                    } else {
                        if (input[0] < 46.0) {
                            var18 = 0.055104937;
                        } else {
                            var18 = -0.01364773;
                        }
                    }
                } else {
                    if (input[10] < 121.0) {
                        var18 = -0.05923584;
                    } else {
                        if (input[14] < 1.0) {
                            var18 = -0.042576365;
                        } else {
                            var18 = 0.005392732;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 136.0) {
                if (input[18] < 183.0) {
                    var18 = -0.047863927;
                } else {
                    var18 = 0.011472409;
                }
            } else {
                if (input[0] < 84.0) {
                    if (input[9] < 153.0) {
                        var18 = 0.10135771;
                    } else {
                        var18 = 0.009127634;
                    }
                } else {
                    var18 = -0.03653236;
                }
            }
        }
    } else {
        if (input[10] < 101.0) {
            if (input[0] < 84.0) {
                if (input[10] < 97.0) {
                    if (input[9] < 139.0) {
                        if (input[0] < 80.0) {
                            var18 = -0.008597955;
                        } else {
                            var18 = -0.018932322;
                        }
                    } else {
                        if (input[0] < 34.0) {
                            var18 = -0.008480389;
                        } else {
                            var18 = -0.013508542;
                        }
                    }
                } else {
                    if (input[0] < 21.0) {
                        if (input[11] < 1.0) {
                            var18 = -0.05721007;
                        } else {
                            var18 = -0.009399965;
                        }
                    } else {
                        if (input[18] < 122.0) {
                            var18 = -0.025478646;
                        } else {
                            var18 = -0.01185712;
                        }
                    }
                }
            } else {
                if (input[10] < 69.0) {
                    if (input[2] < 1.0) {
                        if (input[0] < 85.0) {
                            var18 = 0.00597388;
                        } else {
                            var18 = -0.037175685;
                        }
                    } else {
                        if (input[5] < 23.92) {
                            var18 = -0.04509853;
                        } else {
                            var18 = 0.015699424;
                        }
                    }
                } else {
                    if (input[16] < 2.0) {
                        if (input[14] < 1.0) {
                            var18 = 0.0052821855;
                        } else {
                            var18 = -0.012755248;
                        }
                    } else {
                        if (input[4] < 2.0) {
                            var18 = 0.023672787;
                        } else {
                            var18 = -0.012199961;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 23.74) {
                if (input[8] < 296.4) {
                    if (input[9] < 168.0) {
                        if (input[8] < 294.8) {
                            var18 = -0.011726784;
                        } else {
                            var18 = 0.018481493;
                        }
                    } else {
                        if (input[5] < 17.13) {
                            var18 = -0.021290315;
                        } else {
                            var18 = 0.00066373247;
                        }
                    }
                } else {
                    if (input[17] < 1.0) {
                        if (input[5] < 15.78) {
                            var18 = 0.026033038;
                        } else {
                            var18 = -0.042608436;
                        }
                    } else {
                        if (input[0] < 63.0) {
                            var18 = 0.020775734;
                        } else {
                            var18 = -0.03747428;
                        }
                    }
                }
            } else {
                if (input[10] < 108.0) {
                    if (input[8] < 151.2) {
                        if (input[0] < 60.0) {
                            var18 = -0.058285303;
                        } else {
                            var18 = 0.012332729;
                        }
                    } else {
                        if (input[5] < 35.56) {
                            var18 = -0.00016845917;
                        } else {
                            var18 = -0.009529857;
                        }
                    }
                } else {
                    if (input[16] < 2.0) {
                        if (input[5] < 24.02) {
                            var18 = 0.013014518;
                        } else {
                            var18 = -0.007409575;
                        }
                    } else {
                        if (input[8] < 150.6) {
                            var18 = 0.058467593;
                        } else {
                            var18 = -0.012659952;
                        }
                    }
                }
            }
        }
    }
    double var19;
    if (input[5] < 15.12) {
        if (input[0] < 79.0) {
            if (input[10] < 66.0) {
                if (input[8] < 256.1) {
                    if (input[0] < 54.0) {
                        var19 = -0.042547137;
                    } else {
                        var19 = 0.015760845;
                    }
                } else {
                    var19 = 0.085318685;
                }
            } else {
                if (input[16] < 1.0) {
                    if (input[11] < 1.0) {
                        if (input[14] < 1.0) {
                            var19 = -0.00050532003;
                        } else {
                            var19 = -0.05456664;
                        }
                    } else {
                        if (input[0] < 46.0) {
                            var19 = 0.052692544;
                        } else {
                            var19 = -0.01306527;
                        }
                    }
                } else {
                    if (input[10] < 121.0) {
                        var19 = -0.058376063;
                    } else {
                        if (input[14] < 1.0) {
                            var19 = -0.041792404;
                        } else {
                            var19 = 0.005453677;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 136.0) {
                if (input[9] < 105.0) {
                    var19 = 0.011377246;
                } else {
                    var19 = -0.047077205;
                }
            } else {
                if (input[8] < 223.2) {
                    var19 = -0.036075383;
                } else {
                    if (input[0] < 83.0) {
                        var19 = 0.096166186;
                    } else {
                        var19 = 0.009462891;
                    }
                }
            }
        }
    } else {
        if (input[7] < 1.0) {
            if (input[9] < 126.0) {
                if (input[4] < 2.0) {
                    if (input[0] < 67.0) {
                        if (input[3] < 1.0) {
                            var19 = -0.01291377;
                        } else {
                            var19 = -0.006671395;
                        }
                    } else {
                        if (input[5] < 39.05) {
                            var19 = -0.002908968;
                        } else {
                            var19 = -0.035056055;
                        }
                    }
                } else {
                    if (input[9] < 120.0) {
                        if (input[12] < 2.0) {
                            var19 = -0.0018707445;
                        } else {
                            var19 = -0.010551735;
                        }
                    } else {
                        if (input[5] < 16.75) {
                            var19 = -0.036170617;
                        } else {
                            var19 = 0.007379954;
                        }
                    }
                }
            } else {
                if (input[8] < 223.2) {
                    if (input[8] < 213.4) {
                        if (input[8] < 211.0) {
                            var19 = -0.010841923;
                        } else {
                            var19 = 0.008640011;
                        }
                    } else {
                        if (input[10] < 119.0) {
                            var19 = -0.024103666;
                        } else {
                            var19 = 0.0009926925;
                        }
                    }
                } else {
                    if (input[5] < 38.75) {
                        if (input[10] < 128.0) {
                            var19 = -0.00814253;
                        } else {
                            var19 = -0.024707027;
                        }
                    } else {
                        if (input[18] < 149.0) {
                            var19 = -0.014467761;
                        } else {
                            var19 = 0.018164126;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 169.0) {
                if (input[8] < 216.3) {
                    if (input[5] < 39.43) {
                        if (input[18] < 198.0) {
                            var19 = -0.0077484096;
                        } else {
                            var19 = -0.03272779;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var19 = 0.022700949;
                        } else {
                            var19 = -0.046748456;
                        }
                    }
                } else {
                    if (input[9] < 158.0) {
                        if (input[0] < 58.0) {
                            var19 = -0.009634723;
                        } else {
                            var19 = -0.017456794;
                        }
                    } else {
                        if (input[8] < 234.4) {
                            var19 = -0.043859463;
                        } else {
                            var19 = -0.016304595;
                        }
                    }
                }
            } else {
                if (input[10] < 122.0) {
                    if (input[18] < 103.0) {
                        if (input[10] < 81.0) {
                            var19 = 0.076553166;
                        } else {
                            var19 = 0.0032532648;
                        }
                    } else {
                        if (input[5] < 15.38) {
                            var19 = 0.049445592;
                        } else {
                            var19 = -0.0069948933;
                        }
                    }
                } else {
                    if (input[18] < 139.0) {
                        if (input[0] < 37.0) {
                            var19 = -0.02641122;
                        } else {
                            var19 = 0.06255607;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var19 = 0.04060017;
                        } else {
                            var19 = -0.023124715;
                        }
                    }
                }
            }
        }
    }
    double var20;
    if (input[8] < 296.4) {
        if (input[8] < 288.4) {
            if (input[10] < 101.0) {
                if (input[8] < 287.7) {
                    if (input[12] < 2.0) {
                        if (input[5] < 15.48) {
                            var20 = -0.02686705;
                        } else {
                            var20 = -0.007917037;
                        }
                    } else {
                        if (input[10] < 92.0) {
                            var20 = -0.009644103;
                        } else {
                            var20 = -0.015678745;
                        }
                    }
                } else {
                    if (input[18] < 152.0) {
                        if (input[5] < 15.68) {
                            var20 = 0.015521075;
                        } else {
                            var20 = -0.05196286;
                        }
                    } else {
                        if (input[18] < 178.0) {
                            var20 = 0.02502722;
                        } else {
                            var20 = -0.05548306;
                        }
                    }
                }
            } else {
                if (input[10] < 105.0) {
                    if (input[10] < 103.0) {
                        if (input[5] < 17.32) {
                            var20 = 0.017038459;
                        } else {
                            var20 = -0.010105796;
                        }
                    } else {
                        if (input[5] < 18.54) {
                            var20 = -0.017366968;
                        } else {
                            var20 = 0.0050526746;
                        }
                    }
                } else {
                    if (input[8] < 285.3) {
                        if (input[8] < 284.8) {
                            var20 = -0.008298197;
                        } else {
                            var20 = -0.044114888;
                        }
                    } else {
                        if (input[18] < 131.0) {
                            var20 = -0.023649642;
                        } else {
                            var20 = 0.018092932;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 124.0) {
                if (input[9] < 119.0) {
                    if (input[18] < 140.0) {
                        if (input[5] < 34.57) {
                            var20 = 0.016780984;
                        } else {
                            var20 = -0.020805435;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var20 = -0.029057844;
                        } else {
                            var20 = -0.0020112814;
                        }
                    }
                } else {
                    if (input[5] < 31.2) {
                        if (input[5] < 19.22) {
                            var20 = -0.011503661;
                        } else {
                            var20 = 0.05962656;
                        }
                    } else {
                        if (input[10] < 76.0) {
                            var20 = 0.052066613;
                        } else {
                            var20 = -0.037995216;
                        }
                    }
                }
            } else {
                if (input[18] < 102.0) {
                    if (input[10] < 78.0) {
                        var20 = -0.041979358;
                    } else {
                        if (input[1] < 1.0) {
                            var20 = 0.10718884;
                        } else {
                            var20 = 0.019898865;
                        }
                    }
                } else {
                    if (input[10] < 63.0) {
                        if (input[18] < 159.0) {
                            var20 = -0.017139478;
                        } else {
                            var20 = 0.07704457;
                        }
                    } else {
                        if (input[5] < 39.71) {
                            var20 = -0.010718921;
                        } else {
                            var20 = 0.04708023;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 22.95) {
            if (input[5] < 19.97) {
                if (input[5] < 19.69) {
                    if (input[0] < 39.0) {
                        if (input[5] < 18.31) {
                            var20 = 0.016633643;
                        } else {
                            var20 = -0.052847363;
                        }
                    } else {
                        if (input[5] < 18.01) {
                            var20 = -0.051078577;
                        } else {
                            var20 = -0.007999065;
                        }
                    }
                } else {
                    if (input[0] < 31.0) {
                        var20 = -0.03668472;
                    } else {
                        if (input[13] < 1.0) {
                            var20 = 0.0036831573;
                        } else {
                            var20 = 0.127622;
                        }
                    }
                }
            } else {
                if (input[13] < 1.0) {
                    if (input[0] < 75.0) {
                        if (input[8] < 299.4) {
                            var20 = -0.04861155;
                        } else {
                            var20 = 0.023740234;
                        }
                    } else {
                        if (input[9] < 130.0) {
                            var20 = -0.03521153;
                        } else {
                            var20 = 0.06078095;
                        }
                    }
                } else {
                    if (input[18] < 199.0) {
                        if (input[5] < 20.38) {
                            var20 = -0.03417222;
                        } else {
                            var20 = -0.06029121;
                        }
                    } else {
                        var20 = 0.018030649;
                    }
                }
            }
        } else {
            if (input[0] < 79.0) {
                if (input[18] < 152.0) {
                    if (input[18] < 101.0) {
                        var20 = 0.04818901;
                    } else {
                        if (input[5] < 23.35) {
                            var20 = 0.04079118;
                        } else {
                            var20 = -0.025578046;
                        }
                    }
                } else {
                    if (input[18] < 156.0) {
                        if (input[0] < 65.0) {
                            var20 = 0.079889506;
                        } else {
                            var20 = -0.043361258;
                        }
                    } else {
                        if (input[8] < 298.8) {
                            var20 = -0.01820117;
                        } else {
                            var20 = 0.011251837;
                        }
                    }
                }
            } else {
                if (input[18] < 110.0) {
                    var20 = -0.051958676;
                } else {
                    if (input[9] < 143.0) {
                        if (input[9] < 133.0) {
                            var20 = 0.012162164;
                        } else {
                            var20 = 0.08735252;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var20 = 0.051000066;
                        } else {
                            var20 = -0.041243065;
                        }
                    }
                }
            }
        }
    }
    double var21;
    if (input[5] < 15.12) {
        if (input[10] < 66.0) {
            if (input[8] < 256.1) {
                if (input[0] < 54.0) {
                    var21 = -0.041303582;
                } else {
                    var21 = 0.039427813;
                }
            } else {
                var21 = 0.08300149;
            }
        } else {
            if (input[0] < 79.0) {
                if (input[16] < 1.0) {
                    if (input[11] < 1.0) {
                        if (input[14] < 1.0) {
                            var21 = 0.0001709954;
                        } else {
                            var21 = -0.05351118;
                        }
                    } else {
                        if (input[0] < 46.0) {
                            var21 = 0.051348455;
                        } else {
                            var21 = -0.012459622;
                        }
                    }
                } else {
                    if (input[10] < 121.0) {
                        var21 = -0.05737994;
                    } else {
                        if (input[14] < 1.0) {
                            var21 = -0.040968526;
                        } else {
                            var21 = 0.0059167347;
                        }
                    }
                }
            } else {
                if (input[8] < 189.4) {
                    var21 = -0.04419383;
                } else {
                    if (input[0] < 84.0) {
                        var21 = 0.07618528;
                    } else {
                        if (input[8] < 223.2) {
                            var21 = 0.014605097;
                        } else {
                            var21 = -0.04210521;
                        }
                    }
                }
            }
        }
    } else {
        if (input[8] < 296.4) {
            if (input[8] < 276.0) {
                if (input[8] < 274.8) {
                    if (input[7] < 1.0) {
                        if (input[9] < 111.0) {
                            var21 = -0.0048156236;
                        } else {
                            var21 = -0.008275053;
                        }
                    } else {
                        if (input[8] < 218.1) {
                            var21 = -0.0073928493;
                        } else {
                            var21 = -0.012911252;
                        }
                    }
                } else {
                    if (input[18] < 103.0) {
                        if (input[10] < 91.0) {
                            var21 = -0.0032135972;
                        } else {
                            var21 = 0.10404135;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var21 = -0.046134815;
                        } else {
                            var21 = -0.01594206;
                        }
                    }
                }
            } else {
                if (input[5] < 17.04) {
                    if (input[8] < 285.9) {
                        if (input[9] < 168.0) {
                            var21 = -0.039833024;
                        } else {
                            var21 = 0.003789962;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var21 = 0.007082169;
                        } else {
                            var21 = -0.031292427;
                        }
                    }
                } else {
                    if (input[18] < 169.0) {
                        if (input[0] < 38.0) {
                            var21 = -0.012570098;
                        } else {
                            var21 = -0.0039593177;
                        }
                    } else {
                        if (input[9] < 98.0) {
                            var21 = -0.026954293;
                        } else {
                            var21 = 0.003147353;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 24.67) {
                if (input[9] < 132.0) {
                    if (input[18] < 128.0) {
                        var21 = -0.058731075;
                    } else {
                        if (input[10] < 64.0) {
                            var21 = 0.034825146;
                        } else {
                            var21 = -0.03174713;
                        }
                    }
                } else {
                    if (input[18] < 162.0) {
                        if (input[9] < 134.0) {
                            var21 = 0.054677237;
                        } else {
                            var21 = -0.029124144;
                        }
                    } else {
                        if (input[11] < 1.0) {
                            var21 = 0.036891337;
                        } else {
                            var21 = -0.040386047;
                        }
                    }
                }
            } else {
                if (input[12] < 1.0) {
                    if (input[0] < 72.0) {
                        if (input[9] < 146.0) {
                            var21 = 0.0073349164;
                        } else {
                            var21 = -0.038512222;
                        }
                    } else {
                        if (input[18] < 108.0) {
                            var21 = -0.040737644;
                        } else {
                            var21 = 0.07386172;
                        }
                    }
                } else {
                    if (input[5] < 25.75) {
                        if (input[14] < 2.0) {
                            var21 = 0.051176157;
                        } else {
                            var21 = -0.05134597;
                        }
                    } else {
                        if (input[5] < 27.63) {
                            var21 = -0.04633466;
                        } else {
                            var21 = -0.009293357;
                        }
                    }
                }
            }
        }
    }
    double var22;
    if (input[5] < 15.12) {
        if (input[10] < 66.0) {
            if (input[8] < 256.1) {
                if (input[0] < 54.0) {
                    var22 = -0.040587317;
                } else {
                    var22 = 0.038128637;
                }
            } else {
                var22 = 0.07942091;
            }
        } else {
            if (input[0] < 79.0) {
                if (input[9] < 97.0) {
                    if (input[14] < 2.0) {
                        var22 = 0.041124053;
                    } else {
                        var22 = -0.03520658;
                    }
                } else {
                    if (input[8] < 175.0) {
                        if (input[9] < 159.0) {
                            var22 = -0.050689798;
                        } else {
                            var22 = 0.034188874;
                        }
                    } else {
                        if (input[8] < 273.0) {
                            var22 = -0.05671189;
                        } else {
                            var22 = -0.029791385;
                        }
                    }
                }
            } else {
                if (input[8] < 189.4) {
                    var22 = -0.04326771;
                } else {
                    if (input[0] < 84.0) {
                        var22 = 0.072616845;
                    } else {
                        if (input[8] < 223.2) {
                            var22 = 0.014502172;
                        } else {
                            var22 = -0.041144364;
                        }
                    }
                }
            }
        }
    } else {
        if (input[7] < 1.0) {
            if (input[9] < 126.0) {
                if (input[9] < 122.0) {
                    if (input[10] < 129.0) {
                        if (input[10] < 122.0) {
                            var22 = -0.0054389862;
                        } else {
                            var22 = -0.013161047;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var22 = 0.04065582;
                        } else {
                            var22 = -0.022802291;
                        }
                    }
                } else {
                    if (input[5] < 37.97) {
                        if (input[18] < 199.0) {
                            var22 = 0.0018096786;
                        } else {
                            var22 = 0.079108074;
                        }
                    } else {
                        if (input[5] < 39.9) {
                            var22 = -0.028688928;
                        } else {
                            var22 = 0.077734634;
                        }
                    }
                }
            } else {
                if (input[8] < 223.2) {
                    if (input[8] < 213.4) {
                        if (input[8] < 211.0) {
                            var22 = -0.009059819;
                        } else {
                            var22 = 0.0097481245;
                        }
                    } else {
                        if (input[0] < 48.0) {
                            var22 = -0.028748685;
                        } else {
                            var22 = -0.009987306;
                        }
                    }
                } else {
                    if (input[5] < 38.75) {
                        if (input[10] < 128.0) {
                            var22 = -0.0064541236;
                        } else {
                            var22 = -0.022762368;
                        }
                    } else {
                        if (input[18] < 149.0) {
                            var22 = -0.012747114;
                        } else {
                            var22 = 0.01812844;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 169.0) {
                if (input[8] < 216.3) {
                    if (input[5] < 39.43) {
                        if (input[10] < 84.0) {
                            var22 = -0.0017235384;
                        } else {
                            var22 = -0.008977593;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var22 = 0.02298653;
                        } else {
                            var22 = -0.04498242;
                        }
                    }
                } else {
                    if (input[5] < 15.21) {
                        if (input[13] < 3.0) {
                            var22 = 0.0023164076;
                        } else {
                            var22 = 0.12008045;
                        }
                    } else {
                        if (input[9] < 129.0) {
                            var22 = -0.00956598;
                        } else {
                            var22 = -0.015910147;
                        }
                    }
                }
            } else {
                if (input[8] < 261.5) {
                    if (input[5] < 23.44) {
                        if (input[0] < 68.0) {
                            var22 = -0.0050555645;
                        } else {
                            var22 = 0.02603945;
                        }
                    } else {
                        if (input[17] < 1.0) {
                            var22 = -0.004378792;
                        } else {
                            var22 = -0.030088106;
                        }
                    }
                } else {
                    if (input[0] < 39.0) {
                        if (input[9] < 172.0) {
                            var22 = 0.023665408;
                        } else {
                            var22 = -0.03165184;
                        }
                    } else {
                        if (input[0] < 66.0) {
                            var22 = 0.043217726;
                        } else {
                            var22 = -0.006689546;
                        }
                    }
                }
            }
        }
    }
    double var23;
    if (input[10] < 101.0) {
        if (input[13] < 1.0) {
            if (input[8] < 160.6) {
                if (input[5] < 15.88) {
                    if (input[0] < 53.0) {
                        var23 = 0.14974533;
                    } else {
                        if (input[10] < 65.0) {
                            var23 = 0.08734961;
                        } else {
                            var23 = -0.039706014;
                        }
                    }
                } else {
                    if (input[0] < 86.0) {
                        if (input[1] < 1.0) {
                            var23 = 0.015873188;
                        } else {
                            var23 = -0.012237905;
                        }
                    } else {
                        if (input[18] < 119.0) {
                            var23 = -0.037567094;
                        } else {
                            var23 = 0.08622911;
                        }
                    }
                }
            } else {
                if (input[8] < 245.1) {
                    if (input[14] < 2.0) {
                        if (input[5] < 31.2) {
                            var23 = -0.0089728115;
                        } else {
                            var23 = -0.02065628;
                        }
                    } else {
                        if (input[5] < 32.57) {
                            var23 = -0.00785615;
                        } else {
                            var23 = 0.010570637;
                        }
                    }
                } else {
                    if (input[18] < 160.0) {
                        if (input[4] < 1.0) {
                            var23 = -0.019210888;
                        } else {
                            var23 = -0.0035340486;
                        }
                    } else {
                        if (input[5] < 17.52) {
                            var23 = 0.034802902;
                        } else {
                            var23 = 0.0023842875;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 16.75) {
                if (input[18] < 141.0) {
                    if (input[18] < 136.0) {
                        if (input[9] < 157.0) {
                            var23 = -0.00954682;
                        } else {
                            var23 = -0.036637686;
                        }
                    } else {
                        if (input[8] < 233.2) {
                            var23 = 0.07250618;
                        } else {
                            var23 = -0.011617068;
                        }
                    }
                } else {
                    if (input[18] < 157.0) {
                        if (input[14] < 1.0) {
                            var23 = -0.020298673;
                        } else {
                            var23 = -0.048136685;
                        }
                    } else {
                        if (input[0] < 26.0) {
                            var23 = -0.04645643;
                        } else {
                            var23 = -0.012076061;
                        }
                    }
                }
            } else {
                if (input[5] < 18.01) {
                    if (input[18] < 166.0) {
                        if (input[8] < 161.2) {
                            var23 = -0.039124873;
                        } else {
                            var23 = 0.01250602;
                        }
                    } else {
                        if (input[10] < 81.0) {
                            var23 = -0.03473144;
                        } else {
                            var23 = 0.0010304698;
                        }
                    }
                } else {
                    if (input[5] < 19.42) {
                        if (input[0] < 28.0) {
                            var23 = 0.0078356145;
                        } else {
                            var23 = -0.021359991;
                        }
                    } else {
                        if (input[18] < 126.0) {
                            var23 = -0.011494848;
                        } else {
                            var23 = -0.006763365;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 23.74) {
            if (input[8] < 296.4) {
                if (input[8] < 172.8) {
                    if (input[9] < 91.0) {
                        if (input[10] < 116.0) {
                            var23 = 0.106732726;
                        } else {
                            var23 = 0.014216401;
                        }
                    } else {
                        if (input[0] < 32.0) {
                            var23 = 0.0024113555;
                        } else {
                            var23 = -0.01824659;
                        }
                    }
                } else {
                    if (input[9] < 118.0) {
                        if (input[8] < 184.2) {
                            var23 = 0.0073839314;
                        } else {
                            var23 = -0.0140537545;
                        }
                    } else {
                        if (input[9] < 120.0) {
                            var23 = 0.028294751;
                        } else {
                            var23 = -0.0053883465;
                        }
                    }
                }
            } else {
                if (input[17] < 1.0) {
                    if (input[5] < 15.78) {
                        var23 = 0.028201837;
                    } else {
                        if (input[9] < 168.0) {
                            var23 = -0.046013094;
                        } else {
                            var23 = 0.012188886;
                        }
                    }
                } else {
                    if (input[0] < 63.0) {
                        if (input[10] < 124.0) {
                            var23 = 0.05276632;
                        } else {
                            var23 = -0.04469166;
                        }
                    } else {
                        if (input[0] < 82.0) {
                            var23 = -0.049217533;
                        } else {
                            var23 = 0.013556324;
                        }
                    }
                }
            }
        } else {
            if (input[10] < 108.0) {
                if (input[8] < 151.2) {
                    if (input[0] < 60.0) {
                        var23 = -0.056564957;
                    } else {
                        var23 = 0.012987509;
                    }
                } else {
                    if (input[9] < 146.0) {
                        if (input[9] < 132.0) {
                            var23 = 0.00020502662;
                        } else {
                            var23 = -0.015487581;
                        }
                    } else {
                        if (input[9] < 173.0) {
                            var23 = 0.009942903;
                        } else {
                            var23 = -0.012063271;
                        }
                    }
                }
            } else {
                if (input[5] < 26.71) {
                    if (input[12] < 2.0) {
                        if (input[3] < 1.0) {
                            var23 = 0.0006936427;
                        } else {
                            var23 = -0.020750783;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var23 = 0.0104194665;
                        } else {
                            var23 = -0.015778638;
                        }
                    }
                } else {
                    if (input[5] < 27.33) {
                        if (input[0] < 34.0) {
                            var23 = -0.008893826;
                        } else {
                            var23 = -0.039024577;
                        }
                    } else {
                        if (input[5] < 27.44) {
                            var23 = 0.02956214;
                        } else {
                            var23 = -0.0063497736;
                        }
                    }
                }
            }
        }
    }
    double var24;
    if (input[8] < 296.4) {
        if (input[8] < 288.4) {
            if (input[10] < 101.0) {
                if (input[8] < 287.7) {
                    if (input[5] < 31.89) {
                        if (input[12] < 1.0) {
                            var24 = -0.010806385;
                        } else {
                            var24 = -0.005427653;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var24 = -0.001296976;
                        } else {
                            var24 = -0.0114753805;
                        }
                    }
                } else {
                    if (input[0] < 55.0) {
                        if (input[0] < 48.0) {
                            var24 = -0.031594697;
                        } else {
                            var24 = 0.048685845;
                        }
                    } else {
                        if (input[9] < 166.0) {
                            var24 = -0.05908504;
                        } else {
                            var24 = 0.0154899005;
                        }
                    }
                }
            } else {
                if (input[10] < 105.0) {
                    if (input[10] < 103.0) {
                        if (input[5] < 17.32) {
                            var24 = 0.018236427;
                        } else {
                            var24 = -0.008212184;
                        }
                    } else {
                        if (input[8] < 166.1) {
                            var24 = -0.016274512;
                        } else {
                            var24 = 0.006417626;
                        }
                    }
                } else {
                    if (input[8] < 285.3) {
                        if (input[8] < 284.8) {
                            var24 = -0.0062391935;
                        } else {
                            var24 = -0.042258885;
                        }
                    } else {
                        if (input[18] < 131.0) {
                            var24 = -0.021534098;
                        } else {
                            var24 = 0.018709129;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 124.0) {
                if (input[9] < 116.0) {
                    if (input[18] < 140.0) {
                        if (input[0] < 37.0) {
                            var24 = 0.03926547;
                        } else {
                            var24 = -0.0004148881;
                        }
                    } else {
                        if (input[18] < 144.0) {
                            var24 = -0.0571857;
                        } else {
                            var24 = -0.0064912434;
                        }
                    }
                } else {
                    if (input[1] < 1.0) {
                        if (input[10] < 102.0) {
                            var24 = 0.025517916;
                        } else {
                            var24 = 0.08906222;
                        }
                    } else {
                        if (input[8] < 292.5) {
                            var24 = -0.026728064;
                        } else {
                            var24 = 0.028806059;
                        }
                    }
                }
            } else {
                if (input[18] < 102.0) {
                    if (input[10] < 78.0) {
                        var24 = -0.040412616;
                    } else {
                        if (input[5] < 24.12) {
                            var24 = 0.10432743;
                        } else {
                            var24 = 0.019956786;
                        }
                    }
                } else {
                    if (input[10] < 63.0) {
                        if (input[18] < 159.0) {
                            var24 = -0.014943527;
                        } else {
                            var24 = 0.07238687;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var24 = 0.0030318506;
                        } else {
                            var24 = -0.01187474;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 22.95) {
            if (input[5] < 19.97) {
                if (input[5] < 19.69) {
                    if (input[0] < 39.0) {
                        if (input[5] < 18.31) {
                            var24 = 0.018984176;
                        } else {
                            var24 = -0.05097713;
                        }
                    } else {
                        if (input[5] < 18.01) {
                            var24 = -0.0489671;
                        } else {
                            var24 = -0.004677142;
                        }
                    }
                } else {
                    if (input[0] < 31.0) {
                        var24 = -0.03496557;
                    } else {
                        if (input[0] < 61.0) {
                            var24 = 0.121052004;
                        } else {
                            var24 = 0.006170284;
                        }
                    }
                }
            } else {
                if (input[13] < 1.0) {
                    if (input[0] < 75.0) {
                        if (input[8] < 299.4) {
                            var24 = -0.046563286;
                        } else {
                            var24 = 0.024867898;
                        }
                    } else {
                        if (input[9] < 130.0) {
                            var24 = -0.033544905;
                        } else {
                            var24 = 0.058849186;
                        }
                    }
                } else {
                    if (input[18] < 198.0) {
                        if (input[5] < 20.38) {
                            var24 = -0.031418767;
                        } else {
                            var24 = -0.058535904;
                        }
                    } else {
                        var24 = -0.0003976773;
                    }
                }
            }
        } else {
            if (input[9] < 95.0) {
                if (input[0] < 52.0) {
                    if (input[5] < 26.03) {
                        var24 = 0.040003743;
                    } else {
                        var24 = -0.050781824;
                    }
                } else {
                    if (input[18] < 110.0) {
                        var24 = -0.040213943;
                    } else {
                        if (input[10] < 114.0) {
                            var24 = 0.07904925;
                        } else {
                            var24 = -0.002535444;
                        }
                    }
                }
            } else {
                if (input[9] < 97.0) {
                    var24 = -0.055164058;
                } else {
                    if (input[12] < 1.0) {
                        if (input[0] < 72.0) {
                            var24 = -0.0125277685;
                        } else {
                            var24 = 0.05767193;
                        }
                    } else {
                        if (input[18] < 104.0) {
                            var24 = 0.037775427;
                        } else {
                            var24 = -0.013502349;
                        }
                    }
                }
            }
        }
    }
    double var25;
    if (input[5] < 15.12) {
        if (input[0] < 79.0) {
            if (input[10] < 66.0) {
                if (input[8] < 256.1) {
                    if (input[8] < 197.1) {
                        var25 = 0.017113054;
                    } else {
                        var25 = -0.04111164;
                    }
                } else {
                    var25 = 0.07747227;
                }
            } else {
                if (input[16] < 1.0) {
                    if (input[11] < 1.0) {
                        if (input[14] < 1.0) {
                            var25 = 0.0014338454;
                        } else {
                            var25 = -0.05191359;
                        }
                    } else {
                        if (input[0] < 46.0) {
                            var25 = 0.049587633;
                        } else {
                            var25 = -0.010188584;
                        }
                    }
                } else {
                    if (input[10] < 121.0) {
                        var25 = -0.055853397;
                    } else {
                        if (input[14] < 1.0) {
                            var25 = -0.03926779;
                        } else {
                            var25 = 0.007748144;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 136.0) {
                if (input[15] < 1.0) {
                    var25 = -0.04519015;
                } else {
                    var25 = 0.015413712;
                }
            } else {
                if (input[0] < 84.0) {
                    if (input[9] < 153.0) {
                        var25 = 0.08796992;
                    } else {
                        var25 = 0.009549464;
                    }
                } else {
                    var25 = -0.0339829;
                }
            }
        }
    } else {
        if (input[7] < 1.0) {
            if (input[9] < 126.0) {
                if (input[4] < 2.0) {
                    if (input[0] < 67.0) {
                        if (input[3] < 1.0) {
                            var25 = -0.010029745;
                        } else {
                            var25 = -0.0037482257;
                        }
                    } else {
                        if (input[5] < 39.05) {
                            var25 = -0.00009590376;
                        } else {
                            var25 = -0.03231656;
                        }
                    }
                } else {
                    if (input[18] < 153.0) {
                        if (input[0] < 19.0) {
                            var25 = 0.048079237;
                        } else {
                            var25 = -0.00627845;
                        }
                    } else {
                        if (input[12] < 2.0) {
                            var25 = 0.009242444;
                        } else {
                            var25 = -0.0040167067;
                        }
                    }
                }
            } else {
                if (input[8] < 223.2) {
                    if (input[8] < 214.0) {
                        if (input[8] < 202.0) {
                            var25 = -0.00840808;
                        } else {
                            var25 = -0.000029023633;
                        }
                    } else {
                        if (input[0] < 48.0) {
                            var25 = -0.028141335;
                        } else {
                            var25 = -0.008051084;
                        }
                    }
                } else {
                    if (input[5] < 16.65) {
                        if (input[0] < 83.0) {
                            var25 = -0.018410325;
                        } else {
                            var25 = 0.026562033;
                        }
                    } else {
                        if (input[10] < 128.0) {
                            var25 = -0.0037938268;
                        } else {
                            var25 = -0.02194281;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 169.0) {
                if (input[8] < 216.3) {
                    if (input[5] < 39.43) {
                        if (input[10] < 84.0) {
                            var25 = -0.00043307114;
                        } else {
                            var25 = -0.00756878;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var25 = 0.022642508;
                        } else {
                            var25 = -0.04332371;
                        }
                    }
                } else {
                    if (input[5] < 15.21) {
                        if (input[13] < 3.0) {
                            var25 = 0.0031925892;
                        } else {
                            var25 = 0.11337202;
                        }
                    } else {
                        if (input[9] < 160.0) {
                            var25 = -0.010065502;
                        } else {
                            var25 = -0.020109665;
                        }
                    }
                }
            } else {
                if (input[18] < 103.0) {
                    if (input[11] < 1.0) {
                        if (input[12] < 1.0) {
                            var25 = -0.013007216;
                        } else {
                            var25 = 0.066816136;
                        }
                    } else {
                        if (input[2] < 1.0) {
                            var25 = 0.024939151;
                        } else {
                            var25 = -0.046185207;
                        }
                    }
                } else {
                    if (input[9] < 179.0) {
                        if (input[8] < 261.5) {
                            var25 = -0.0035299433;
                        } else {
                            var25 = 0.013141001;
                        }
                    } else {
                        if (input[5] < 37.3) {
                            var25 = -0.034674186;
                        } else {
                            var25 = 0.04694885;
                        }
                    }
                }
            }
        }
    }
    double var26;
    if (input[10] < 76.0) {
        if (input[10] < 71.0) {
            if (input[18] < 199.0) {
                if (input[18] < 186.0) {
                    if (input[0] < 85.0) {
                        if (input[18] < 101.0) {
                            var26 = 0.023253892;
                        } else {
                            var26 = -0.0060858973;
                        }
                    } else {
                        if (input[2] < 1.0) {
                            var26 = -0.031133635;
                        } else {
                            var26 = 0.008937205;
                        }
                    }
                } else {
                    if (input[5] < 37.1) {
                        if (input[5] < 20.38) {
                            var26 = -0.01730033;
                        } else {
                            var26 = 0.014534962;
                        }
                    } else {
                        if (input[18] < 187.0) {
                            var26 = 0.044922285;
                        } else {
                            var26 = -0.031934995;
                        }
                    }
                }
            } else {
                if (input[9] < 159.0) {
                    if (input[9] < 98.0) {
                        var26 = 0.0039595114;
                    } else {
                        var26 = -0.05839141;
                    }
                } else {
                    if (input[13] < 3.0) {
                        if (input[4] < 2.0) {
                            var26 = 0.06669576;
                        } else {
                            var26 = 0.017060166;
                        }
                    } else {
                        var26 = -0.04266269;
                    }
                }
            }
        } else {
            if (input[13] < 1.0) {
                if (input[9] < 168.0) {
                    if (input[0] < 89.0) {
                        if (input[15] < 1.0) {
                            var26 = -0.011045921;
                        } else {
                            var26 = 0.01606736;
                        }
                    } else {
                        if (input[5] < 31.0) {
                            var26 = -0.009398709;
                        } else {
                            var26 = 0.12492514;
                        }
                    }
                } else {
                    if (input[18] < 164.0) {
                        if (input[14] < 2.0) {
                            var26 = 0.025037158;
                        } else {
                            var26 = -0.054702844;
                        }
                    } else {
                        if (input[5] < 34.67) {
                            var26 = 0.035042256;
                        } else {
                            var26 = 0.1293054;
                        }
                    }
                }
            } else {
                if (input[18] < 111.0) {
                    if (input[0] < 24.0) {
                        if (input[5] < 23.44) {
                            var26 = -0.049975198;
                        } else {
                            var26 = 0.0988412;
                        }
                    } else {
                        if (input[9] < 159.0) {
                            var26 = -0.017183771;
                        } else {
                            var26 = 0.04072484;
                        }
                    }
                } else {
                    if (input[8] < 254.3) {
                        if (input[9] < 175.0) {
                            var26 = -0.0144200325;
                        } else {
                            var26 = 0.014994918;
                        }
                    } else {
                        if (input[9] < 119.0) {
                            var26 = -0.0121066505;
                        } else {
                            var26 = -0.034924276;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 82.0) {
            if (input[0] < 85.0) {
                if (input[17] < 1.0) {
                    if (input[5] < 30.79) {
                        if (input[12] < 1.0) {
                            var26 = -0.020622423;
                        } else {
                            var26 = 0.0018927547;
                        }
                    } else {
                        if (input[9] < 115.0) {
                            var26 = -0.025622651;
                        } else {
                            var26 = -0.006388084;
                        }
                    }
                } else {
                    if (input[18] < 115.0) {
                        if (input[5] < 22.74) {
                            var26 = -0.0013381228;
                        } else {
                            var26 = 0.060773313;
                        }
                    } else {
                        if (input[8] < 193.6) {
                            var26 = -0.028050134;
                        } else {
                            var26 = 0.0073534907;
                        }
                    }
                }
            } else {
                if (input[3] < 1.0) {
                    if (input[17] < 1.0) {
                        if (input[10] < 77.0) {
                            var26 = -0.021476341;
                        } else {
                            var26 = 0.063789986;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var26 = -0.03650808;
                        } else {
                            var26 = 0.036099892;
                        }
                    }
                } else {
                    if (input[8] < 160.0) {
                        var26 = 0.09719433;
                    } else {
                        if (input[9] < 156.0) {
                            var26 = -0.03032644;
                        } else {
                            var26 = 0.032337505;
                        }
                    }
                }
            }
        } else {
            if (input[10] < 101.0) {
                if (input[18] < 145.0) {
                    if (input[12] < 2.0) {
                        if (input[5] < 18.01) {
                            var26 = 0.0081837205;
                        } else {
                            var26 = -0.008566549;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var26 = -0.020219296;
                        } else {
                            var26 = -0.009461246;
                        }
                    }
                } else {
                    if (input[5] < 37.79) {
                        if (input[18] < 188.0) {
                            var26 = -0.0040358407;
                        } else {
                            var26 = -0.013385317;
                        }
                    } else {
                        if (input[5] < 38.45) {
                            var26 = 0.028999163;
                        } else {
                            var26 = -0.0029831375;
                        }
                    }
                }
            } else {
                if (input[5] < 23.74) {
                    if (input[5] < 23.44) {
                        if (input[5] < 23.24) {
                            var26 = -0.0068214396;
                        } else {
                            var26 = 0.010185187;
                        }
                    } else {
                        if (input[8] < 244.0) {
                            var26 = -0.010518561;
                        } else {
                            var26 = -0.03953587;
                        }
                    }
                } else {
                    if (input[9] < 92.0) {
                        if (input[8] < 296.4) {
                            var26 = -0.021458698;
                        } else {
                            var26 = 0.056685027;
                        }
                    } else {
                        if (input[5] < 24.02) {
                            var26 = 0.012309267;
                        } else {
                            var26 = -0.0034545902;
                        }
                    }
                }
            }
        }
    }
    double var27;
    if (input[8] < 296.4) {
        if (input[8] < 276.0) {
            if (input[8] < 274.8) {
                if (input[18] < 197.0) {
                    if (input[14] < 2.0) {
                        if (input[5] < 35.07) {
                            var27 = -0.0053960523;
                        } else {
                            var27 = -0.009374546;
                        }
                    } else {
                        if (input[8] < 166.1) {
                            var27 = -0.009986627;
                        } else {
                            var27 = -0.00250278;
                        }
                    }
                } else {
                    if (input[0] < 33.0) {
                        if (input[9] < 160.0) {
                            var27 = -0.000047025005;
                        } else {
                            var27 = 0.045938592;
                        }
                    } else {
                        if (input[8] < 153.0) {
                            var27 = 0.041376214;
                        } else {
                            var27 = -0.019802487;
                        }
                    }
                }
            } else {
                if (input[18] < 103.0) {
                    if (input[18] < 101.0) {
                        var27 = -0.0063892216;
                    } else {
                        if (input[18] < 102.0) {
                            var27 = 0.10999771;
                        } else {
                            var27 = 0.017001515;
                        }
                    }
                } else {
                    if (input[16] < 2.0) {
                        if (input[5] < 15.57) {
                            var27 = 0.08085414;
                        } else {
                            var27 = -0.015350491;
                        }
                    } else {
                        if (input[18] < 174.0) {
                            var27 = -0.053417057;
                        } else {
                            var27 = 0.0073271403;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 17.04) {
                if (input[8] < 285.9) {
                    if (input[9] < 168.0) {
                        if (input[10] < 64.0) {
                            var27 = 0.035815272;
                        } else {
                            var27 = -0.04306641;
                        }
                    } else {
                        if (input[0] < 75.0) {
                            var27 = -0.019500991;
                        } else {
                            var27 = 0.08782256;
                        }
                    }
                } else {
                    if (input[14] < 2.0) {
                        if (input[0] < 63.0) {
                            var27 = 0.02572074;
                        } else {
                            var27 = -0.027494028;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var27 = -0.01150255;
                        } else {
                            var27 = -0.05704376;
                        }
                    }
                }
            } else {
                if (input[18] < 169.0) {
                    if (input[0] < 38.0) {
                        if (input[1] < 1.0) {
                            var27 = -0.002712085;
                        } else {
                            var27 = -0.017469468;
                        }
                    } else {
                        if (input[0] < 47.0) {
                            var27 = 0.008403893;
                        } else {
                            var27 = -0.0032697232;
                        }
                    }
                } else {
                    if (input[9] < 98.0) {
                        if (input[8] < 281.3) {
                            var27 = 0.023994826;
                        } else {
                            var27 = -0.045030627;
                        }
                    } else {
                        if (input[9] < 132.0) {
                            var27 = 0.01480588;
                        } else {
                            var27 = -0.0017175319;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 24.67) {
            if (input[9] < 132.0) {
                if (input[18] < 128.0) {
                    var27 = -0.0569231;
                } else {
                    if (input[11] < 1.0) {
                        if (input[18] < 130.0) {
                            var27 = 0.034745127;
                        } else {
                            var27 = -0.04179963;
                        }
                    } else {
                        if (input[0] < 61.0) {
                            var27 = 0.031773034;
                        } else {
                            var27 = -0.05241717;
                        }
                    }
                }
            } else {
                if (input[18] < 162.0) {
                    if (input[18] < 125.0) {
                        if (input[9] < 134.0) {
                            var27 = 0.06864051;
                        } else {
                            var27 = -0.007435436;
                        }
                    } else {
                        if (input[0] < 52.0) {
                            var27 = -0.013163392;
                        } else {
                            var27 = -0.057351362;
                        }
                    }
                } else {
                    if (input[11] < 1.0) {
                        if (input[17] < 1.0) {
                            var27 = 0.056848984;
                        } else {
                            var27 = -0.041628506;
                        }
                    } else {
                        if (input[2] < 1.0) {
                            var27 = -0.050211128;
                        } else {
                            var27 = 0.014146621;
                        }
                    }
                }
            }
        } else {
            if (input[12] < 1.0) {
                if (input[0] < 72.0) {
                    if (input[9] < 146.0) {
                        if (input[5] < 37.79) {
                            var27 = -0.008126168;
                        } else {
                            var27 = 0.060936768;
                        }
                    } else {
                        if (input[0] < 31.0) {
                            var27 = 0.013562413;
                        } else {
                            var27 = -0.0544504;
                        }
                    }
                } else {
                    if (input[18] < 108.0) {
                        var27 = -0.03967052;
                    } else {
                        if (input[0] < 82.0) {
                            var27 = 0.11349528;
                        } else {
                            var27 = 0.030727817;
                        }
                    }
                }
            } else {
                if (input[5] < 33.65) {
                    if (input[3] < 1.0) {
                        if (input[8] < 297.0) {
                            var27 = -0.046598315;
                        } else {
                            var27 = -0.006138995;
                        }
                    } else {
                        if (input[5] < 32.68) {
                            var27 = 0.0124957105;
                        } else {
                            var27 = 0.09611472;
                        }
                    }
                } else {
                    if (input[13] < 1.0) {
                        if (input[6] < 1.0) {
                            var27 = -0.01575102;
                        } else {
                            var27 = 0.061083253;
                        }
                    } else {
                        if (input[8] < 298.8) {
                            var27 = -0.040621426;
                        } else {
                            var27 = -0.007907569;
                        }
                    }
                }
            }
        }
    }
    double var28;
    if (input[5] < 15.12) {
        if (input[0] < 79.0) {
            if (input[10] < 66.0) {
                if (input[8] < 256.1) {
                    if (input[4] < 2.0) {
                        var28 = -0.04037871;
                    } else {
                        var28 = 0.01749923;
                    }
                } else {
                    var28 = 0.07506156;
                }
            } else {
                if (input[0] < 40.0) {
                    var28 = -0.054891743;
                } else {
                    if (input[0] < 50.0) {
                        if (input[16] < 1.0) {
                            var28 = 0.042484652;
                        } else {
                            var28 = -0.022502912;
                        }
                    } else {
                        if (input[8] < 186.5) {
                            var28 = -0.0037735887;
                        } else {
                            var28 = -0.054152336;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 189.4) {
                var28 = -0.041249197;
            } else {
                if (input[0] < 84.0) {
                    var28 = 0.07516499;
                } else {
                    if (input[18] < 160.0) {
                        var28 = -0.039012488;
                    } else {
                        var28 = 0.016636482;
                    }
                }
            }
        }
    } else {
        if (input[7] < 1.0) {
            if (input[9] < 126.0) {
                if (input[9] < 122.0) {
                    if (input[10] < 129.0) {
                        if (input[10] < 122.0) {
                            var28 = -0.0030419913;
                        } else {
                            var28 = -0.010686842;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var28 = 0.04140557;
                        } else {
                            var28 = -0.020085571;
                        }
                    }
                } else {
                    if (input[5] < 37.97) {
                        if (input[10] < 66.0) {
                            var28 = -0.022664873;
                        } else {
                            var28 = 0.0067904824;
                        }
                    } else {
                        if (input[5] < 39.81) {
                            var28 = -0.027730977;
                        } else {
                            var28 = 0.05916452;
                        }
                    }
                }
            } else {
                if (input[8] < 219.8) {
                    if (input[8] < 216.3) {
                        if (input[2] < 1.0) {
                            var28 = -0.0040518283;
                        } else {
                            var28 = -0.010179772;
                        }
                    } else {
                        if (input[9] < 127.0) {
                            var28 = 0.054629333;
                        } else {
                            var28 = -0.028880987;
                        }
                    }
                } else {
                    if (input[5] < 38.75) {
                        if (input[9] < 157.0) {
                            var28 = -0.006647685;
                        } else {
                            var28 = -0.0015975453;
                        }
                    } else {
                        if (input[18] < 149.0) {
                            var28 = -0.009115931;
                        } else {
                            var28 = 0.019082518;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 169.0) {
                if (input[8] < 216.3) {
                    if (input[5] < 39.43) {
                        if (input[18] < 198.0) {
                            var28 = -0.0035703722;
                        } else {
                            var28 = -0.028729519;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var28 = 0.022399073;
                        } else {
                            var28 = -0.04188386;
                        }
                    }
                } else {
                    if (input[0] < 58.0) {
                        if (input[9] < 160.0) {
                            var28 = -0.004998345;
                        } else {
                            var28 = -0.022344861;
                        }
                    } else {
                        if (input[10] < 82.0) {
                            var28 = -0.005463845;
                        } else {
                            var28 = -0.016608424;
                        }
                    }
                }
            } else {
                if (input[10] < 122.0) {
                    if (input[4] < 1.0) {
                        if (input[8] < 290.1) {
                            var28 = 0.016555315;
                        } else {
                            var28 = -0.055823337;
                        }
                    } else {
                        if (input[18] < 103.0) {
                            var28 = 0.027171005;
                        } else {
                            var28 = -0.0058014034;
                        }
                    }
                } else {
                    if (input[13] < 1.0) {
                        if (input[6] < 1.0) {
                            var28 = 0.028128533;
                        } else {
                            var28 = 0.111844175;
                        }
                    } else {
                        if (input[18] < 139.0) {
                            var28 = 0.03608911;
                        } else {
                            var28 = -0.019824605;
                        }
                    }
                }
            }
        }
    }
    double var29;
    if (input[5] < 22.85) {
        if (input[8] < 296.4) {
            if (input[18] < 193.0) {
                if (input[8] < 174.5) {
                    if (input[13] < 3.0) {
                        if (input[0] < 33.0) {
                            var29 = 0.006717806;
                        } else {
                            var29 = -0.009330094;
                        }
                    } else {
                        if (input[9] < 92.0) {
                            var29 = 0.03644008;
                        } else {
                            var29 = -0.022129828;
                        }
                    }
                } else {
                    if (input[8] < 177.5) {
                        if (input[1] < 1.0) {
                            var29 = 0.030630691;
                        } else {
                            var29 = -0.01006777;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var29 = -0.0054935697;
                        } else {
                            var29 = 0.0017930794;
                        }
                    }
                }
            } else {
                if (input[10] < 85.0) {
                    if (input[9] < 110.0) {
                        if (input[5] < 20.08) {
                            var29 = -0.034618597;
                        } else {
                            var29 = 0.043984894;
                        }
                    } else {
                        if (input[0] < 27.0) {
                            var29 = 0.0040201885;
                        } else {
                            var29 = -0.03964847;
                        }
                    }
                } else {
                    if (input[10] < 91.0) {
                        if (input[5] < 20.67) {
                            var29 = 0.041739292;
                        } else {
                            var29 = -0.040216543;
                        }
                    } else {
                        if (input[8] < 175.7) {
                            var29 = 0.008744021;
                        } else {
                            var29 = -0.018426377;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 19.97) {
                if (input[5] < 19.69) {
                    if (input[0] < 39.0) {
                        if (input[5] < 18.31) {
                            var29 = 0.020292839;
                        } else {
                            var29 = -0.04955183;
                        }
                    } else {
                        if (input[5] < 18.01) {
                            var29 = -0.047085606;
                        } else {
                            var29 = -0.0018537298;
                        }
                    }
                } else {
                    if (input[0] < 31.0) {
                        var29 = -0.03342441;
                    } else {
                        if (input[13] < 1.0) {
                            var29 = 0.0064747683;
                        } else {
                            var29 = 0.11455663;
                        }
                    }
                }
            } else {
                if (input[13] < 1.0) {
                    if (input[0] < 62.0) {
                        if (input[8] < 299.4) {
                            var29 = -0.053267963;
                        } else {
                            var29 = 0.046795696;
                        }
                    } else {
                        if (input[9] < 130.0) {
                            var29 = -0.04201469;
                        } else {
                            var29 = 0.06556987;
                        }
                    }
                } else {
                    if (input[18] < 198.0) {
                        if (input[5] < 20.38) {
                            var29 = -0.029056488;
                        } else {
                            var29 = -0.05713869;
                        }
                    } else {
                        var29 = 0.00009073103;
                    }
                }
            }
        }
    } else {
        if (input[5] < 35.26) {
            if (input[5] < 33.87) {
                if (input[5] < 32.96) {
                    if (input[18] < 126.0) {
                        if (input[0] < 22.0) {
                            var29 = 0.012917784;
                        } else {
                            var29 = -0.007318236;
                        }
                    } else {
                        if (input[18] < 141.0) {
                            var29 = 0.0032107104;
                        } else {
                            var29 = -0.0033857424;
                        }
                    }
                } else {
                    if (input[9] < 148.0) {
                        if (input[9] < 144.0) {
                            var29 = -0.016008766;
                        } else {
                            var29 = -0.04964205;
                        }
                    } else {
                        if (input[8] < 224.4) {
                            var29 = 0.016413732;
                        } else {
                            var29 = -0.009463511;
                        }
                    }
                }
            } else {
                if (input[15] < 1.0) {
                    if (input[9] < 91.0) {
                        if (input[18] < 112.0) {
                            var29 = -0.002563454;
                        } else {
                            var29 = 0.08131803;
                        }
                    } else {
                        if (input[0] < 47.0) {
                            var29 = 0.00461322;
                        } else {
                            var29 = -0.0063759396;
                        }
                    }
                } else {
                    if (input[0] < 70.0) {
                        if (input[13] < 3.0) {
                            var29 = -0.0061103846;
                        } else {
                            var29 = 0.026583076;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var29 = 0.02421919;
                        } else {
                            var29 = 0.10497177;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 298.8) {
                if (input[8] < 297.6) {
                    if (input[5] < 37.19) {
                        if (input[8] < 162.5) {
                            var29 = 0.0074192556;
                        } else {
                            var29 = -0.011376886;
                        }
                    } else {
                        if (input[18] < 195.0) {
                            var29 = -0.0048622703;
                        } else {
                            var29 = 0.01321198;
                        }
                    }
                } else {
                    if (input[9] < 99.0) {
                        var29 = 0.02276584;
                    } else {
                        if (input[9] < 175.0) {
                            var29 = -0.055087842;
                        } else {
                            var29 = 0.010066449;
                        }
                    }
                }
            } else {
                if (input[8] < 299.4) {
                    if (input[16] < 2.0) {
                        if (input[4] < 2.0) {
                            var29 = 0.11339631;
                        } else {
                            var29 = 0.017591251;
                        }
                    } else {
                        if (input[0] < 69.0) {
                            var29 = -0.040254857;
                        } else {
                            var29 = 0.017563654;
                        }
                    }
                } else {
                    if (input[9] < 154.0) {
                        if (input[10] < 80.0) {
                            var29 = -0.028623795;
                        } else {
                            var29 = 0.034058522;
                        }
                    } else {
                        var29 = -0.04825792;
                    }
                }
            }
        }
    }
    double var30;
    if (input[18] < 101.0) {
        if (input[8] < 187.7) {
            if (input[12] < 1.0) {
                if (input[8] < 183.1) {
                    var30 = -0.0652174;
                } else {
                    var30 = 0.04285714;
                }
            } else {
                if (input[8] < 160.6) {
                    if (input[8] < 160.0) {
                        if (input[16] < 1.0) {
                            var30 = -0.020000003;
                        } else {
                            var30 = 0.06734694;
                        }
                    } else {
                        var30 = -0.051724143;
                    }
                } else {
                    if (input[10] < 115.0) {
                        if (input[0] < 80.0) {
                            var30 = 0.1077348;
                        } else {
                            var30 = -0.0000000025544848;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var30 = -0.027272731;
                        } else {
                            var30 = 0.06486487;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 17.21) {
                if (input[0] < 88.0) {
                    if (input[10] < 70.0) {
                        var30 = -0.0000000025544848;
                    } else {
                        var30 = -0.06804124;
                    }
                } else {
                    var30 = 0.04285714;
                }
            } else {
                if (input[0] < 72.0) {
                    if (input[5] < 20.58) {
                        if (input[0] < 30.0) {
                            var30 = -0.036585372;
                        } else {
                            var30 = 0.068571426;
                        }
                    } else {
                        if (input[8] < 226.1) {
                            var30 = -0.030379752;
                        } else {
                            var30 = 0.009443096;
                        }
                    }
                } else {
                    if (input[9] < 122.0) {
                        if (input[8] < 230.8) {
                            var30 = -0.060000002;
                        } else {
                            var30 = 0.018461535;
                        }
                    } else {
                        if (input[5] < 19.04) {
                            var30 = -0.042857148;
                        } else {
                            var30 = 0.08980892;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 101.0) {
            if (input[0] < 20.0) {
                if (input[10] < 97.0) {
                    if (input[10] < 83.0) {
                        if (input[8] < 171.2) {
                            var30 = 0.09759036;
                        } else {
                            var30 = 0.044360902;
                        }
                    } else {
                        if (input[10] < 91.0) {
                            var30 = 0.016923074;
                        } else {
                            var30 = 0.04711316;
                        }
                    }
                } else {
                    if (input[9] < 173.0) {
                        if (input[6] < 1.0) {
                            var30 = 0.11428571;
                        } else {
                            var30 = 0.03962264;
                        }
                    } else {
                        var30 = -0.012000003;
                    }
                }
            } else {
                if (input[5] < 32.68) {
                    if (input[12] < 2.0) {
                        if (input[10] < 96.0) {
                            var30 = 0.03412051;
                        } else {
                            var30 = 0.043012705;
                        }
                    } else {
                        if (input[8] < 298.8) {
                            var30 = 0.03957836;
                        } else {
                            var30 = 0.08156682;
                        }
                    }
                } else {
                    if (input[18] < 114.0) {
                        if (input[8] < 253.7) {
                            var30 = 0.025149697;
                        } else {
                            var30 = 0.046345975;
                        }
                    } else {
                        if (input[18] < 138.0) {
                            var30 = 0.048836116;
                        } else {
                            var30 = 0.04044353;
                        }
                    }
                }
            }
        } else {
            if (input[0] < 41.0) {
                if (input[18] < 195.0) {
                    if (input[18] < 192.0) {
                        if (input[11] < 1.0) {
                            var30 = 0.03004582;
                        } else {
                            var30 = 0.041636456;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var30 = 0.03417721;
                        } else {
                            var30 = 0.07410926;
                        }
                    }
                } else {
                    if (input[3] < 1.0) {
                        if (input[14] < 2.0) {
                            var30 = 0.011111107;
                        } else {
                            var30 = -0.040975615;
                        }
                    } else {
                        if (input[8] < 208.0) {
                            var30 = 0.06545454;
                        } else {
                            var30 = -0.0022304875;
                        }
                    }
                }
            } else {
                if (input[5] < 23.04) {
                    if (input[5] < 16.56) {
                        if (input[5] < 15.68) {
                            var30 = 0.045059286;
                        } else {
                            var30 = 0.019116716;
                        }
                    } else {
                        if (input[5] < 17.13) {
                            var30 = 0.06357078;
                        } else {
                            var30 = 0.041994922;
                        }
                    }
                } else {
                    if (input[5] < 23.14) {
                        if (input[0] < 50.0) {
                            var30 = -0.060000002;
                        } else {
                            var30 = 0.015328464;
                        }
                    } else {
                        if (input[8] < 150.6) {
                            var30 = -0.00991736;
                        } else {
                            var30 = 0.03638984;
                        }
                    }
                }
            }
        }
    }
    double var31;
    if (input[18] < 101.0) {
        if (input[8] < 187.7) {
            if (input[12] < 1.0) {
                if (input[8] < 183.1) {
                    var31 = -0.06361889;
                } else {
                    var31 = 0.040506553;
                }
            } else {
                if (input[8] < 160.6) {
                    if (input[8] < 160.0) {
                        if (input[16] < 1.0) {
                            var31 = -0.019151798;
                        } else {
                            var31 = 0.0626682;
                        }
                    } else {
                        var31 = -0.050621994;
                    }
                } else {
                    if (input[10] < 115.0) {
                        if (input[0] < 80.0) {
                            var31 = 0.09747516;
                        } else {
                            var31 = -0.0006474582;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var31 = -0.026378715;
                        } else {
                            var31 = 0.060131766;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 17.21) {
                if (input[0] < 88.0) {
                    if (input[10] < 70.0) {
                        var31 = -0.00067100365;
                    } else {
                        var31 = -0.06655275;
                    }
                } else {
                    var31 = 0.040315177;
                }
            } else {
                if (input[0] < 34.0) {
                    if (input[5] < 28.04) {
                        if (input[9] < 95.0) {
                            var31 = 0.06006489;
                        } else {
                            var31 = -0.061367244;
                        }
                    } else {
                        if (input[0] < 27.0) {
                            var31 = 0.043734334;
                        } else {
                            var31 = -0.02196856;
                        }
                    }
                } else {
                    if (input[9] < 128.0) {
                        if (input[5] < 20.58) {
                            var31 = 0.05627046;
                        } else {
                            var31 = -0.02510412;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var31 = 0.053572256;
                        } else {
                            var31 = -0.02110593;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 101.0) {
            if (input[0] < 20.0) {
                if (input[10] < 97.0) {
                    if (input[9] < 128.0) {
                        if (input[18] < 122.0) {
                            var31 = -0.00052196195;
                        } else {
                            var31 = 0.035413172;
                        }
                    } else {
                        if (input[9] < 179.0) {
                            var31 = 0.051134896;
                        } else {
                            var31 = -0.034217138;
                        }
                    }
                } else {
                    if (input[9] < 173.0) {
                        if (input[6] < 1.0) {
                            var31 = 0.10340539;
                        } else {
                            var31 = 0.036621865;
                        }
                    } else {
                        var31 = -0.0119249625;
                    }
                }
            } else {
                if (input[5] < 32.68) {
                    if (input[12] < 2.0) {
                        if (input[5] < 30.69) {
                            var31 = 0.03291492;
                        } else {
                            var31 = 0.024207052;
                        }
                    } else {
                        if (input[8] < 298.8) {
                            var31 = 0.035888545;
                        } else {
                            var31 = 0.074446455;
                        }
                    }
                } else {
                    if (input[18] < 114.0) {
                        if (input[8] < 253.7) {
                            var31 = 0.022636179;
                        } else {
                            var31 = 0.042220425;
                        }
                    } else {
                        if (input[9] < 145.0) {
                            var31 = 0.036093414;
                        } else {
                            var31 = 0.043362524;
                        }
                    }
                }
            }
        } else {
            if (input[0] < 41.0) {
                if (input[18] < 195.0) {
                    if (input[18] < 192.0) {
                        if (input[11] < 1.0) {
                            var31 = 0.027213022;
                        } else {
                            var31 = 0.03791817;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var31 = 0.031046195;
                        } else {
                            var31 = 0.067501105;
                        }
                    }
                } else {
                    if (input[3] < 1.0) {
                        if (input[14] < 2.0) {
                            var31 = 0.009725703;
                        } else {
                            var31 = -0.040133763;
                        }
                    } else {
                        if (input[8] < 208.0) {
                            var31 = 0.059946563;
                        } else {
                            var31 = -0.0028713548;
                        }
                    }
                }
            } else {
                if (input[16] < 2.0) {
                    if (input[5] < 22.44) {
                        if (input[5] < 16.56) {
                            var31 = 0.025507927;
                        } else {
                            var31 = 0.039437708;
                        }
                    } else {
                        if (input[8] < 161.2) {
                            var31 = 0.04230572;
                        } else {
                            var31 = 0.030010162;
                        }
                    }
                } else {
                    if (input[8] < 294.2) {
                        if (input[9] < 94.0) {
                            var31 = 0.0165337;
                        } else {
                            var31 = 0.037828166;
                        }
                    } else {
                        if (input[10] < 110.0) {
                            var31 = 0.025607502;
                        } else {
                            var31 = 0.07962986;
                        }
                    }
                }
            }
        }
    }
    double var32;
    if (input[18] < 101.0) {
        if (input[8] < 187.7) {
            if (input[12] < 1.0) {
                if (input[8] < 183.1) {
                    var32 = -0.062159885;
                } else {
                    var32 = 0.03782023;
                }
            } else {
                if (input[8] < 160.6) {
                    if (input[8] < 160.0) {
                        if (input[16] < 1.0) {
                            var32 = -0.01815868;
                        } else {
                            var32 = 0.058692373;
                        }
                    } else {
                        var32 = -0.049618695;
                    }
                } else {
                    if (input[0] < 82.0) {
                        if (input[10] < 115.0) {
                            var32 = 0.088784665;
                        } else {
                            var32 = 0.028474623;
                        }
                    } else {
                        var32 = -0.013164232;
                    }
                }
            }
        } else {
            if (input[5] < 17.21) {
                if (input[0] < 88.0) {
                    if (input[10] < 70.0) {
                        var32 = -0.001018884;
                    } else {
                        var32 = -0.0652563;
                    }
                } else {
                    var32 = 0.037973937;
                }
            } else {
                if (input[0] < 72.0) {
                    if (input[1] < 1.0) {
                        if (input[8] < 238.0) {
                            var32 = -0.016808195;
                        } else {
                            var32 = 0.045512155;
                        }
                    } else {
                        if (input[5] < 23.92) {
                            var32 = 0.019654753;
                        } else {
                            var32 = -0.027241841;
                        }
                    }
                } else {
                    if (input[9] < 108.0) {
                        if (input[9] < 91.0) {
                            var32 = 0.044537097;
                        } else {
                            var32 = -0.048727408;
                        }
                    } else {
                        if (input[9] < 173.0) {
                            var32 = 0.0735397;
                        } else {
                            var32 = -0.012825601;
                        }
                    }
                }
            }
        }
    } else {
        if (input[18] < 124.0) {
            if (input[8] < 186.5) {
                if (input[8] < 183.1) {
                    if (input[5] < 32.29) {
                        if (input[9] < 161.0) {
                            var32 = 0.039113607;
                        } else {
                            var32 = 0.022973163;
                        }
                    } else {
                        if (input[10] < 71.0) {
                            var32 = -0.003709852;
                        } else {
                            var32 = 0.027540384;
                        }
                    }
                } else {
                    if (input[5] < 33.87) {
                        if (input[0] < 34.0) {
                            var32 = 0.032072853;
                        } else {
                            var32 = -0.014922673;
                        }
                    } else {
                        if (input[10] < 109.0) {
                            var32 = 0.032389667;
                        } else {
                            var32 = 0.103384756;
                        }
                    }
                }
            } else {
                if (input[5] < 15.12) {
                    if (input[9] < 105.0) {
                        if (input[4] < 2.0) {
                            var32 = 0.038963173;
                        } else {
                            var32 = -0.050225344;
                        }
                    } else {
                        if (input[9] < 169.0) {
                            var32 = 0.10567216;
                        } else {
                            var32 = -0.003286905;
                        }
                    }
                } else {
                    if (input[8] < 191.2) {
                        if (input[3] < 1.0) {
                            var32 = 0.030754602;
                        } else {
                            var32 = 0.07042318;
                        }
                    } else {
                        if (input[9] < 117.0) {
                            var32 = 0.037620258;
                        } else {
                            var32 = 0.031866815;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 237.4) {
                if (input[18] < 168.0) {
                    if (input[9] < 174.0) {
                        if (input[10] < 74.0) {
                            var32 = 0.03690928;
                        } else {
                            var32 = 0.029053876;
                        }
                    } else {
                        if (input[8] < 151.8) {
                            var32 = 0.09097006;
                        } else {
                            var32 = 0.015190998;
                        }
                    }
                } else {
                    if (input[10] < 115.0) {
                        if (input[5] < 21.65) {
                            var32 = 0.02911942;
                        } else {
                            var32 = 0.038740687;
                        }
                    } else {
                        if (input[10] < 123.0) {
                            var32 = 0.022634227;
                        } else {
                            var32 = 0.03523488;
                        }
                    }
                }
            } else {
                if (input[13] < 3.0) {
                    if (input[18] < 193.0) {
                        if (input[18] < 183.0) {
                            var32 = 0.027625063;
                        } else {
                            var32 = 0.020717429;
                        }
                    } else {
                        if (input[8] < 254.9) {
                            var32 = 0.051450342;
                        } else {
                            var32 = 0.031296205;
                        }
                    }
                } else {
                    if (input[18] < 132.0) {
                        if (input[10] < 62.0) {
                            var32 = -0.04876966;
                        } else {
                            var32 = 0.052099746;
                        }
                    } else {
                        if (input[9] < 120.0) {
                            var32 = 0.023695378;
                        } else {
                            var32 = 0.035551142;
                        }
                    }
                }
            }
        }
    }
    double var33;
    if (input[18] < 101.0) {
        if (input[8] < 187.7) {
            if (input[12] < 1.0) {
                if (input[8] < 183.1) {
                    var33 = -0.060849573;
                } else {
                    var33 = 0.03543156;
                }
            } else {
                if (input[8] < 160.6) {
                    if (input[8] < 160.0) {
                        if (input[16] < 1.0) {
                            var33 = -0.017756565;
                        } else {
                            var33 = 0.054963887;
                        }
                    } else {
                        var33 = -0.048381317;
                    }
                } else {
                    if (input[0] < 82.0) {
                        if (input[10] < 115.0) {
                            var33 = 0.08131739;
                        } else {
                            var33 = 0.026815413;
                        }
                    } else {
                        var33 = -0.013161476;
                    }
                }
            }
        } else {
            if (input[5] < 17.21) {
                if (input[0] < 88.0) {
                    if (input[10] < 70.0) {
                        var33 = -0.0019382116;
                    } else {
                        var33 = -0.0639841;
                    }
                } else {
                    var33 = 0.036067035;
                }
            } else {
                if (input[0] < 21.0) {
                    var33 = -0.06075844;
                } else {
                    if (input[15] < 1.0) {
                        if (input[9] < 128.0) {
                            var33 = -0.0020624602;
                        } else {
                            var33 = 0.032893635;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var33 = -0.05258736;
                        } else {
                            var33 = 0.009539683;
                        }
                    }
                }
            }
        }
    } else {
        if (input[18] < 124.0) {
            if (input[18] < 122.0) {
                if (input[14] < 1.0) {
                    if (input[8] < 153.0) {
                        if (input[9] < 159.0) {
                            var33 = 0.019074036;
                        } else {
                            var33 = -0.05331361;
                        }
                    } else {
                        if (input[10] < 67.0) {
                            var33 = 0.047119025;
                        } else {
                            var33 = 0.03220957;
                        }
                    }
                } else {
                    if (input[8] < 152.4) {
                        if (input[18] < 121.0) {
                            var33 = 0.06609992;
                        } else {
                            var33 = -0.051526755;
                        }
                    } else {
                        if (input[9] < 96.0) {
                            var33 = 0.013812371;
                        } else {
                            var33 = 0.028723205;
                        }
                    }
                }
            } else {
                if (input[5] < 37.51) {
                    if (input[4] < 2.0) {
                        if (input[0] < 56.0) {
                            var33 = 0.021285076;
                        } else {
                            var33 = 0.04404064;
                        }
                    } else {
                        if (input[9] < 125.0) {
                            var33 = 0.030396406;
                        } else {
                            var33 = 0.069558986;
                        }
                    }
                } else {
                    if (input[10] < 80.0) {
                        if (input[17] < 1.0) {
                            var33 = -0.06642744;
                        } else {
                            var33 = 0.017880395;
                        }
                    } else {
                        if (input[8] < 170.1) {
                            var33 = -0.058313098;
                        } else {
                            var33 = 0.021932917;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 237.4) {
                if (input[8] < 215.8) {
                    if (input[18] < 170.0) {
                        if (input[9] < 177.0) {
                            var33 = 0.026189143;
                        } else {
                            var33 = 0.00977135;
                        }
                    } else {
                        if (input[9] < 164.0) {
                            var33 = 0.02902025;
                        } else {
                            var33 = 0.040023025;
                        }
                    }
                } else {
                    if (input[10] < 63.0) {
                        if (input[9] < 99.0) {
                            var33 = -0.04691756;
                        } else {
                            var33 = 0.022775237;
                        }
                    } else {
                        if (input[10] < 70.0) {
                            var33 = 0.04942708;
                        } else {
                            var33 = 0.03185193;
                        }
                    }
                }
            } else {
                if (input[13] < 1.0) {
                    if (input[0] < 67.0) {
                        if (input[5] < 36.27) {
                            var33 = 0.016993215;
                        } else {
                            var33 = 0.03287963;
                        }
                    } else {
                        if (input[8] < 287.2) {
                            var33 = 0.023638494;
                        } else {
                            var33 = 0.04512075;
                        }
                    }
                } else {
                    if (input[10] < 62.0) {
                        if (input[9] < 165.0) {
                            var33 = 0.017447338;
                        } else {
                            var33 = -0.021454351;
                        }
                    } else {
                        if (input[9] < 125.0) {
                            var33 = 0.024704823;
                        } else {
                            var33 = 0.03041524;
                        }
                    }
                }
            }
        }
    }
    double var34;
    if (input[18] < 101.0) {
        if (input[8] < 187.7) {
            if (input[12] < 1.0) {
                if (input[8] < 183.1) {
                    var34 = -0.059524734;
                } else {
                    var34 = 0.033477858;
                }
            } else {
                if (input[8] < 161.8) {
                    if (input[5] < 28.04) {
                        if (input[1] < 1.0) {
                            var34 = -0.012501321;
                        } else {
                            var34 = 0.09016354;
                        }
                    } else {
                        if (input[8] < 157.6) {
                            var34 = 0.023732187;
                        } else {
                            var34 = -0.054911938;
                        }
                    }
                } else {
                    if (input[10] < 115.0) {
                        if (input[15] < 1.0) {
                            var34 = 0.080816545;
                        } else {
                            var34 = 0.021713108;
                        }
                    } else {
                        if (input[4] < 2.0) {
                            var34 = -0.019608347;
                        } else {
                            var34 = 0.06660786;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 17.21) {
                if (input[0] < 88.0) {
                    if (input[10] < 70.0) {
                        var34 = -0.0018622148;
                    } else {
                        var34 = -0.06280093;
                    }
                } else {
                    var34 = 0.034723703;
                }
            } else {
                if (input[0] < 21.0) {
                    var34 = -0.05933795;
                } else {
                    if (input[8] < 193.1) {
                        var34 = -0.057510342;
                    } else {
                        if (input[15] < 1.0) {
                            var34 = 0.020278072;
                        } else {
                            var34 = -0.02833656;
                        }
                    }
                }
            }
        }
    } else {
        if (input[18] < 124.0) {
            if (input[8] < 186.5) {
                if (input[8] < 183.1) {
                    if (input[5] < 32.29) {
                        if (input[1] < 1.0) {
                            var34 = 0.024167938;
                        } else {
                            var34 = 0.036440473;
                        }
                    } else {
                        if (input[10] < 71.0) {
                            var34 = -0.006496262;
                        } else {
                            var34 = 0.022598904;
                        }
                    }
                } else {
                    if (input[5] < 33.87) {
                        if (input[0] < 21.0) {
                            var34 = 0.09232802;
                        } else {
                            var34 = -0.00925849;
                        }
                    } else {
                        if (input[10] < 109.0) {
                            var34 = 0.027221162;
                        } else {
                            var34 = 0.09254297;
                        }
                    }
                }
            } else {
                if (input[5] < 15.12) {
                    if (input[9] < 105.0) {
                        if (input[18] < 111.0) {
                            var34 = 0.03664843;
                        } else {
                            var34 = -0.05093339;
                        }
                    } else {
                        if (input[9] < 169.0) {
                            var34 = 0.093748145;
                        } else {
                            var34 = -0.005079125;
                        }
                    }
                } else {
                    if (input[8] < 191.2) {
                        if (input[3] < 1.0) {
                            var34 = 0.025473118;
                        } else {
                            var34 = 0.061695185;
                        }
                    } else {
                        if (input[9] < 117.0) {
                            var34 = 0.031899698;
                        } else {
                            var34 = 0.026396314;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 237.4) {
                if (input[8] < 215.8) {
                    if (input[18] < 170.0) {
                        if (input[12] < 1.0) {
                            var34 = 0.028794238;
                        } else {
                            var34 = 0.022065612;
                        }
                    } else {
                        if (input[9] < 164.0) {
                            var34 = 0.026465375;
                        } else {
                            var34 = 0.036626298;
                        }
                    }
                } else {
                    if (input[10] < 63.0) {
                        if (input[9] < 99.0) {
                            var34 = -0.045751464;
                        } else {
                            var34 = 0.02064171;
                        }
                    } else {
                        if (input[10] < 70.0) {
                            var34 = 0.04543666;
                        } else {
                            var34 = 0.029120533;
                        }
                    }
                }
            } else {
                if (input[13] < 3.0) {
                    if (input[18] < 193.0) {
                        if (input[0] < 66.0) {
                            var34 = 0.020392146;
                        } else {
                            var34 = 0.025197877;
                        }
                    } else {
                        if (input[8] < 254.9) {
                            var34 = 0.044662874;
                        } else {
                            var34 = 0.026178194;
                        }
                    }
                } else {
                    if (input[18] < 132.0) {
                        if (input[10] < 62.0) {
                            var34 = -0.04864507;
                        } else {
                            var34 = 0.045095142;
                        }
                    } else {
                        if (input[9] < 120.0) {
                            var34 = 0.019320989;
                        } else {
                            var34 = 0.029920444;
                        }
                    }
                }
            }
        }
    }
    double var35;
    if (input[18] < 101.0) {
        if (input[8] < 187.7) {
            if (input[12] < 1.0) {
                if (input[8] < 183.1) {
                    var35 = -0.058677286;
                } else {
                    var35 = 0.031877607;
                }
            } else {
                if (input[8] < 161.8) {
                    if (input[16] < 2.0) {
                        if (input[13] < 3.0) {
                            var35 = 0.008186496;
                        } else {
                            var35 = -0.050976183;
                        }
                    } else {
                        if (input[2] < 1.0) {
                            var35 = 0.084004335;
                        } else {
                            var35 = -0.02655086;
                        }
                    }
                } else {
                    if (input[10] < 125.0) {
                        if (input[7] < 1.0) {
                            var35 = 0.07395386;
                        } else {
                            var35 = 0.034910742;
                        }
                    } else {
                        var35 = -0.013919489;
                    }
                }
            }
        } else {
            if (input[5] < 17.21) {
                if (input[0] < 88.0) {
                    if (input[10] < 70.0) {
                        var35 = -0.0023421657;
                    } else {
                        var35 = -0.061820563;
                    }
                } else {
                    var35 = 0.032919414;
                }
            } else {
                if (input[0] < 72.0) {
                    if (input[5] < 20.58) {
                        if (input[0] < 30.0) {
                            var35 = -0.035252836;
                        } else {
                            var35 = 0.05531534;
                        }
                    } else {
                        if (input[1] < 1.0) {
                            var35 = 0.009220997;
                        } else {
                            var35 = -0.024242925;
                        }
                    }
                } else {
                    if (input[9] < 122.0) {
                        if (input[8] < 230.8) {
                            var35 = -0.058890104;
                        } else {
                            var35 = 0.015489637;
                        }
                    } else {
                        if (input[5] < 19.04) {
                            var35 = -0.04420447;
                        } else {
                            var35 = 0.067153774;
                        }
                    }
                }
            }
        }
    } else {
        if (input[9] < 129.0) {
            if (input[8] < 235.0) {
                if (input[10] < 126.0) {
                    if (input[8] < 219.2) {
                        if (input[7] < 1.0) {
                            var35 = 0.02176026;
                        } else {
                            var35 = 0.02818635;
                        }
                    } else {
                        if (input[12] < 2.0) {
                            var35 = 0.024468718;
                        } else {
                            var35 = 0.037082255;
                        }
                    }
                } else {
                    if (input[11] < 1.0) {
                        if (input[5] < 37.41) {
                            var35 = 0.011955937;
                        } else {
                            var35 = -0.022446593;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var35 = 0.03490498;
                        } else {
                            var35 = -0.010937228;
                        }
                    }
                }
            } else {
                if (input[0] < 62.0) {
                    if (input[18] < 189.0) {
                        if (input[18] < 186.0) {
                            var35 = 0.016949845;
                        } else {
                            var35 = -0.011911127;
                        }
                    } else {
                        if (input[8] < 291.3) {
                            var35 = 0.027658388;
                        } else {
                            var35 = 0.06333868;
                        }
                    }
                } else {
                    if (input[5] < 26.71) {
                        if (input[5] < 24.67) {
                            var35 = 0.025965258;
                        } else {
                            var35 = -0.006096519;
                        }
                    } else {
                        if (input[10] < 62.0) {
                            var35 = -0.017621053;
                        } else {
                            var35 = 0.029373348;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 131.0) {
                if (input[10] < 113.0) {
                    if (input[18] < 181.0) {
                        if (input[10] < 78.0) {
                            var35 = 0.046689626;
                        } else {
                            var35 = 0.025725225;
                        }
                    } else {
                        if (input[1] < 1.0) {
                            var35 = -0.030124342;
                        } else {
                            var35 = 0.024929862;
                        }
                    }
                } else {
                    if (input[18] < 102.0) {
                        var35 = -0.05360798;
                    } else {
                        if (input[5] < 39.43) {
                            var35 = 0.059129577;
                        } else {
                            var35 = -0.05313403;
                        }
                    }
                }
            } else {
                if (input[0] < 74.0) {
                    if (input[8] < 216.3) {
                        if (input[0] < 19.0) {
                            var35 = 0.046305936;
                        } else {
                            var35 = 0.022629885;
                        }
                    } else {
                        if (input[8] < 219.2) {
                            var35 = 0.045188434;
                        } else {
                            var35 = 0.026182516;
                        }
                    }
                } else {
                    if (input[9] < 169.0) {
                        if (input[8] < 189.4) {
                            var35 = 0.029155904;
                        } else {
                            var35 = 0.021105684;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var35 = 0.031594973;
                        } else {
                            var35 = 0.009388796;
                        }
                    }
                }
            }
        }
    }
    double var36;
    if (input[18] < 101.0) {
        if (input[12] < 2.0) {
            if (input[16] < 1.0) {
                if (input[5] < 26.62) {
                    if (input[10] < 119.0) {
                        if (input[9] < 97.0) {
                            var36 = -0.010800756;
                        } else {
                            var36 = -0.066622846;
                        }
                    } else {
                        var36 = 0.019488143;
                    }
                } else {
                    if (input[5] < 36.36) {
                        if (input[2] < 1.0) {
                            var36 = 0.04439405;
                        } else {
                            var36 = -0.031965222;
                        }
                    } else {
                        if (input[0] < 63.0) {
                            var36 = -0.059154715;
                        } else {
                            var36 = -0.0043306067;
                        }
                    }
                }
            } else {
                if (input[13] < 2.0) {
                    if (input[16] < 2.0) {
                        if (input[5] < 19.79) {
                            var36 = 0.042290118;
                        } else {
                            var36 = -0.024312349;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var36 = 0.008445266;
                        } else {
                            var36 = 0.09780278;
                        }
                    }
                } else {
                    if (input[9] < 113.0) {
                        if (input[0] < 71.0) {
                            var36 = -0.06227429;
                        } else {
                            var36 = -0.004205528;
                        }
                    } else {
                        if (input[8] < 260.4) {
                            var36 = 0.015165836;
                        } else {
                            var36 = -0.056575574;
                        }
                    }
                }
            }
        } else {
            if (input[10] < 111.0) {
                if (input[15] < 1.0) {
                    if (input[10] < 82.0) {
                        if (input[0] < 47.0) {
                            var36 = -0.028602412;
                        } else {
                            var36 = 0.033829276;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var36 = 0.06172164;
                        } else {
                            var36 = 0.02000008;
                        }
                    }
                } else {
                    if (input[5] < 33.46) {
                        if (input[14] < 1.0) {
                            var36 = 0.0034499895;
                        } else {
                            var36 = -0.058446057;
                        }
                    } else {
                        var36 = 0.03574754;
                    }
                }
            } else {
                if (input[9] < 106.0) {
                    var36 = -0.060381282;
                } else {
                    if (input[0] < 47.0) {
                        if (input[0] < 26.0) {
                            var36 = 0.03737869;
                        } else {
                            var36 = -0.050545055;
                        }
                    } else {
                        if (input[5] < 37.1) {
                            var36 = 0.058019497;
                        } else {
                            var36 = -0.04411275;
                        }
                    }
                }
            }
        }
    } else {
        if (input[18] < 124.0) {
            if (input[18] < 122.0) {
                if (input[14] < 1.0) {
                    if (input[8] < 153.0) {
                        if (input[9] < 159.0) {
                            var36 = 0.013543402;
                        } else {
                            var36 = -0.054341424;
                        }
                    } else {
                        if (input[10] < 67.0) {
                            var36 = 0.038653832;
                        } else {
                            var36 = 0.024973325;
                        }
                    }
                } else {
                    if (input[8] < 152.4) {
                        if (input[18] < 121.0) {
                            var36 = 0.05645364;
                        } else {
                            var36 = -0.05225228;
                        }
                    } else {
                        if (input[9] < 96.0) {
                            var36 = 0.008123346;
                        } else {
                            var36 = 0.021913556;
                        }
                    }
                }
            } else {
                if (input[5] < 37.51) {
                    if (input[4] < 2.0) {
                        if (input[0] < 56.0) {
                            var36 = 0.015099533;
                        } else {
                            var36 = 0.035866164;
                        }
                    } else {
                        if (input[5] < 23.14) {
                            var36 = 0.070880204;
                        } else {
                            var36 = 0.032458514;
                        }
                    }
                } else {
                    if (input[10] < 80.0) {
                        if (input[17] < 1.0) {
                            var36 = -0.06671624;
                        } else {
                            var36 = 0.014150363;
                        }
                    } else {
                        if (input[8] < 170.1) {
                            var36 = -0.059119917;
                        } else {
                            var36 = 0.015877316;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 104.0) {
                if (input[6] < 1.0) {
                    if (input[8] < 152.4) {
                        if (input[18] < 150.0) {
                            var36 = -0.04217809;
                        } else {
                            var36 = 0.011702697;
                        }
                    } else {
                        if (input[8] < 183.6) {
                            var36 = 0.026156887;
                        } else {
                            var36 = 0.01933942;
                        }
                    }
                } else {
                    if (input[10] < 123.0) {
                        if (input[5] < 37.97) {
                            var36 = 0.0057878457;
                        } else {
                            var36 = 0.038397904;
                        }
                    } else {
                        if (input[5] < 16.84) {
                            var36 = -0.021387288;
                        } else {
                            var36 = 0.04736548;
                        }
                    }
                }
            } else {
                if (input[8] < 277.7) {
                    if (input[0] < 19.0) {
                        if (input[10] < 86.0) {
                            var36 = 0.061556835;
                        } else {
                            var36 = 0.020814808;
                        }
                    } else {
                        if (input[0] < 22.0) {
                            var36 = 0.0147169;
                        } else {
                            var36 = 0.02246559;
                        }
                    }
                } else {
                    if (input[5] < 17.13) {
                        if (input[0] < 63.0) {
                            var36 = 0.020279191;
                        } else {
                            var36 = 0.055002004;
                        }
                    } else {
                        if (input[10] < 129.0) {
                            var36 = 0.017608183;
                        } else {
                            var36 = -0.012986965;
                        }
                    }
                }
            }
        }
    }
    double var37;
    if (input[18] < 101.0) {
        if (input[8] < 187.7) {
            if (input[12] < 1.0) {
                if (input[8] < 183.1) {
                    var37 = -0.057383824;
                } else {
                    var37 = 0.028882325;
                }
            } else {
                if (input[8] < 160.6) {
                    if (input[8] < 160.0) {
                        if (input[16] < 1.0) {
                            var37 = -0.017805643;
                        } else {
                            var37 = 0.04696281;
                        }
                    } else {
                        var37 = -0.047024675;
                    }
                } else {
                    if (input[0] < 82.0) {
                        if (input[10] < 115.0) {
                            var37 = 0.06526574;
                        } else {
                            var37 = 0.018955542;
                        }
                    } else {
                        var37 = -0.015658988;
                    }
                }
            }
        } else {
            if (input[5] < 17.21) {
                if (input[0] < 88.0) {
                    if (input[10] < 70.0) {
                        var37 = -0.00394334;
                    } else {
                        var37 = -0.06057741;
                    }
                } else {
                    var37 = 0.03055315;
                }
            } else {
                if (input[0] < 21.0) {
                    var37 = -0.057826973;
                } else {
                    if (input[5] < 38.45) {
                        if (input[15] < 1.0) {
                            var37 = 0.017460046;
                        } else {
                            var37 = -0.028023114;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var37 = -0.06033616;
                        } else {
                            var37 = -0.0036803887;
                        }
                    }
                }
            }
        }
    } else {
        if (input[18] < 124.0) {
            if (input[4] < 1.0) {
                if (input[8] < 248.6) {
                    if (input[1] < 1.0) {
                        if (input[14] < 2.0) {
                            var37 = 0.0003583841;
                        } else {
                            var37 = 0.020579966;
                        }
                    } else {
                        if (input[5] < 25.64) {
                            var37 = 0.03540005;
                        } else {
                            var37 = 0.009201189;
                        }
                    }
                } else {
                    if (input[5] < 19.42) {
                        if (input[3] < 1.0) {
                            var37 = 0.0243711;
                        } else {
                            var37 = -0.017333282;
                        }
                    } else {
                        if (input[10] < 101.0) {
                            var37 = 0.042519618;
                        } else {
                            var37 = 0.019127704;
                        }
                    }
                }
            } else {
                if (input[18] < 120.0) {
                    if (input[4] < 2.0) {
                        if (input[0] < 30.0) {
                            var37 = 0.035247806;
                        } else {
                            var37 = 0.022289133;
                        }
                    } else {
                        if (input[10] < 121.0) {
                            var37 = 0.015936855;
                        } else {
                            var37 = 0.028507406;
                        }
                    }
                } else {
                    if (input[4] < 2.0) {
                        if (input[0] < 57.0) {
                            var37 = 0.012778637;
                        } else {
                            var37 = 0.032979887;
                        }
                    } else {
                        if (input[10] < 126.0) {
                            var37 = 0.038781036;
                        } else {
                            var37 = -0.004339508;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 104.0) {
                if (input[6] < 1.0) {
                    if (input[8] < 152.4) {
                        if (input[18] < 150.0) {
                            var37 = -0.04108971;
                        } else {
                            var37 = 0.010610574;
                        }
                    } else {
                        if (input[8] < 183.6) {
                            var37 = 0.024070447;
                        } else {
                            var37 = 0.01765809;
                        }
                    }
                } else {
                    if (input[3] < 1.0) {
                        if (input[8] < 173.5) {
                            var37 = 0.024236402;
                        } else {
                            var37 = -0.00061414734;
                        }
                    } else {
                        if (input[5] < 36.05) {
                            var37 = 0.016247926;
                        } else {
                            var37 = 0.056489307;
                        }
                    }
                }
            } else {
                if (input[8] < 277.7) {
                    if (input[0] < 19.0) {
                        if (input[10] < 86.0) {
                            var37 = 0.057181936;
                        } else {
                            var37 = 0.018975113;
                        }
                    } else {
                        if (input[0] < 33.0) {
                            var37 = 0.017159626;
                        } else {
                            var37 = 0.021037297;
                        }
                    }
                } else {
                    if (input[5] < 17.13) {
                        if (input[13] < 2.0) {
                            var37 = 0.046139922;
                        } else {
                            var37 = 0.014171424;
                        }
                    } else {
                        if (input[10] < 63.0) {
                            var37 = -0.0023307062;
                        } else {
                            var37 = 0.01633205;
                        }
                    }
                }
            }
        }
    }
    double var38;
    if (input[18] < 101.0) {
        if (input[12] < 2.0) {
            if (input[16] < 1.0) {
                if (input[5] < 26.62) {
                    if (input[10] < 119.0) {
                        if (input[9] < 97.0) {
                            var38 = -0.010574287;
                        } else {
                            var38 = -0.065123394;
                        }
                    } else {
                        var38 = 0.01881509;
                    }
                } else {
                    if (input[5] < 36.36) {
                        if (input[2] < 1.0) {
                            var38 = 0.04036882;
                        } else {
                            var38 = -0.03215121;
                        }
                    } else {
                        if (input[0] < 63.0) {
                            var38 = -0.057975985;
                        } else {
                            var38 = -0.005491428;
                        }
                    }
                }
            } else {
                if (input[10] < 74.0) {
                    if (input[8] < 172.8) {
                        var38 = 0.051352657;
                    } else {
                        if (input[10] < 63.0) {
                            var38 = 0.015164355;
                        } else {
                            var38 = -0.06135125;
                        }
                    }
                } else {
                    if (input[13] < 2.0) {
                        if (input[16] < 2.0) {
                            var38 = -0.0038055845;
                        } else {
                            var38 = 0.07403185;
                        }
                    } else {
                        if (input[9] < 126.0) {
                            var38 = -0.03356488;
                        } else {
                            var38 = 0.014293308;
                        }
                    }
                }
            }
        } else {
            if (input[16] < 2.0) {
                if (input[1] < 1.0) {
                    if (input[8] < 160.6) {
                        var38 = -0.045302387;
                    } else {
                        if (input[15] < 1.0) {
                            var38 = 0.064183116;
                        } else {
                            var38 = -0.012626979;
                        }
                    }
                } else {
                    if (input[8] < 187.1) {
                        if (input[5] < 28.4) {
                            var38 = 0.07993718;
                        } else {
                            var38 = 0.004575794;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var38 = -0.028553257;
                        } else {
                            var38 = 0.02619776;
                        }
                    }
                }
            } else {
                if (input[4] < 2.0) {
                    if (input[8] < 179.8) {
                        if (input[1] < 1.0) {
                            var38 = -0.029415388;
                        } else {
                            var38 = 0.058377236;
                        }
                    } else {
                        if (input[4] < 1.0) {
                            var38 = -0.0047709807;
                        } else {
                            var38 = -0.06740938;
                        }
                    }
                } else {
                    if (input[9] < 134.0) {
                        if (input[8] < 215.8) {
                            var38 = -0.035950046;
                        } else {
                            var38 = 0.03538695;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var38 = -0.0006070587;
                        } else {
                            var38 = 0.08779707;
                        }
                    }
                }
            }
        }
    } else {
        if (input[18] < 124.0) {
            if (input[8] < 186.5) {
                if (input[8] < 183.1) {
                    if (input[5] < 32.29) {
                        if (input[9] < 161.0) {
                            var38 = 0.024728818;
                        } else {
                            var38 = 0.010301086;
                        }
                    } else {
                        if (input[10] < 71.0) {
                            var38 = -0.011529616;
                        } else {
                            var38 = 0.015188991;
                        }
                    }
                } else {
                    if (input[5] < 33.87) {
                        if (input[0] < 21.0) {
                            var38 = 0.08209509;
                        } else {
                            var38 = -0.014375898;
                        }
                    } else {
                        if (input[10] < 109.0) {
                            var38 = 0.019848414;
                        } else {
                            var38 = 0.08028489;
                        }
                    }
                }
            } else {
                if (input[5] < 15.12) {
                    if (input[9] < 105.0) {
                        if (input[18] < 111.0) {
                            var38 = 0.03139344;
                        } else {
                            var38 = -0.052630175;
                        }
                    } else {
                        if (input[9] < 169.0) {
                            var38 = 0.08073134;
                        } else {
                            var38 = -0.008990447;
                        }
                    }
                } else {
                    if (input[8] < 191.2) {
                        if (input[3] < 1.0) {
                            var38 = 0.017681332;
                        } else {
                            var38 = 0.05099203;
                        }
                    } else {
                        if (input[9] < 117.0) {
                            var38 = 0.023680558;
                        } else {
                            var38 = 0.018372335;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 177.0) {
                if (input[9] < 104.0) {
                    if (input[18] < 196.0) {
                        if (input[6] < 1.0) {
                            var38 = 0.016494414;
                        } else {
                            var38 = 0.008169279;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var38 = 0.013935255;
                        } else {
                            var38 = 0.046315756;
                        }
                    }
                } else {
                    if (input[5] < 39.9) {
                        if (input[5] < 39.34) {
                            var38 = 0.018335072;
                        } else {
                            var38 = 0.026380902;
                        }
                    } else {
                        if (input[9] < 133.0) {
                            var38 = 0.031230647;
                        } else {
                            var38 = -0.027561722;
                        }
                    }
                }
            } else {
                if (input[18] < 132.0) {
                    if (input[8] < 271.7) {
                        if (input[8] < 250.8) {
                            var38 = -0.012604849;
                        } else {
                            var38 = 0.06370882;
                        }
                    } else {
                        if (input[5] < 35.47) {
                            var38 = -0.07346882;
                        } else {
                            var38 = -0.008239042;
                        }
                    }
                } else {
                    if (input[16] < 1.0) {
                        if (input[5] < 16.37) {
                            var38 = -0.04666242;
                        } else {
                            var38 = 0.0072998786;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var38 = 0.03597523;
                        } else {
                            var38 = 0.0071897763;
                        }
                    }
                }
            }
        }
    }
    double var39;
    if (input[18] < 101.0) {
        if (input[8] < 187.7) {
            if (input[12] < 1.0) {
                if (input[8] < 183.1) {
                    var39 = -0.056616522;
                } else {
                    var39 = 0.026713267;
                }
            } else {
                if (input[0] < 84.0) {
                    if (input[10] < 66.0) {
                        var39 = -0.045864716;
                    } else {
                        if (input[0] < 41.0) {
                            var39 = 0.021926997;
                        } else {
                            var39 = 0.059076946;
                        }
                    }
                } else {
                    if (input[10] < 101.0) {
                        var39 = -0.0031848059;
                    } else {
                        var39 = -0.044497143;
                    }
                }
            }
        } else {
            if (input[5] < 17.21) {
                if (input[0] < 88.0) {
                    if (input[10] < 70.0) {
                        var39 = -0.0032920372;
                    } else {
                        var39 = -0.059389453;
                    }
                } else {
                    var39 = 0.02828461;
                }
            } else {
                if (input[0] < 21.0) {
                    var39 = -0.056305654;
                } else {
                    if (input[8] < 193.1) {
                        var39 = -0.05616029;
                    } else {
                        if (input[15] < 1.0) {
                            var39 = 0.014180032;
                        } else {
                            var39 = -0.027204702;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 73.0) {
            if (input[0] < 50.0) {
                if (input[9] < 166.0) {
                    if (input[7] < 1.0) {
                        if (input[8] < 201.3) {
                            var39 = 0.008631669;
                        } else {
                            var39 = 0.019833075;
                        }
                    } else {
                        if (input[8] < 246.2) {
                            var39 = 0.034090217;
                        } else {
                            var39 = 0.016009776;
                        }
                    }
                } else {
                    if (input[17] < 1.0) {
                        if (input[8] < 285.3) {
                            var39 = 0.023037206;
                        } else {
                            var39 = 0.06929057;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var39 = -0.0075319083;
                        } else {
                            var39 = 0.06464403;
                        }
                    }
                }
            } else {
                if (input[0] < 71.0) {
                    if (input[9] < 168.0) {
                        if (input[5] < 39.43) {
                            var39 = 0.013341325;
                        } else {
                            var39 = 0.04876522;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var39 = 0.0059867143;
                        } else {
                            var39 = -0.020314878;
                        }
                    }
                } else {
                    if (input[10] < 72.0) {
                        if (input[5] < 36.16) {
                            var39 = 0.015501906;
                        } else {
                            var39 = 0.03119394;
                        }
                    } else {
                        if (input[18] < 195.0) {
                            var39 = 0.04379491;
                        } else {
                            var39 = -0.033246115;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 129.0) {
                if (input[5] < 35.76) {
                    if (input[8] < 245.1) {
                        if (input[10] < 126.0) {
                            var39 = 0.017060477;
                        } else {
                            var39 = 0.0055491016;
                        }
                    } else {
                        if (input[0] < 81.0) {
                            var39 = 0.009309727;
                        } else {
                            var39 = 0.022726422;
                        }
                    }
                } else {
                    if (input[6] < 1.0) {
                        if (input[8] < 188.2) {
                            var39 = 0.009220153;
                        } else {
                            var39 = 0.0263598;
                        }
                    } else {
                        if (input[8] < 182.1) {
                            var39 = 0.03663216;
                        } else {
                            var39 = 0.0020305815;
                        }
                    }
                }
            } else {
                if (input[0] < 74.0) {
                    if (input[8] < 248.1) {
                        if (input[8] < 245.6) {
                            var39 = 0.017197842;
                        } else {
                            var39 = 0.0027041568;
                        }
                    } else {
                        if (input[0] < 68.0) {
                            var39 = 0.019572392;
                        } else {
                            var39 = 0.034455705;
                        }
                    }
                } else {
                    if (input[9] < 170.0) {
                        if (input[8] < 299.4) {
                            var39 = 0.016470768;
                        } else {
                            var39 = -0.03698848;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var39 = -0.0015682935;
                        } else {
                            var39 = 0.018456971;
                        }
                    }
                }
            }
        }
    }
    double var40;
    if (input[18] < 101.0) {
        if (input[12] < 2.0) {
            if (input[16] < 1.0) {
                if (input[5] < 26.62) {
                    if (input[10] < 119.0) {
                        if (input[9] < 97.0) {
                            var40 = -0.010858812;
                        } else {
                            var40 = -0.06411079;
                        }
                    } else {
                        var40 = 0.01714287;
                    }
                } else {
                    if (input[5] < 36.36) {
                        if (input[2] < 1.0) {
                            var40 = 0.03639054;
                        } else {
                            var40 = -0.03221564;
                        }
                    } else {
                        if (input[0] < 63.0) {
                            var40 = -0.057388157;
                        } else {
                            var40 = -0.006482435;
                        }
                    }
                }
            } else {
                if (input[0] < 83.0) {
                    if (input[8] < 208.0) {
                        if (input[9] < 110.0) {
                            var40 = -0.032675095;
                        } else {
                            var40 = 0.0354903;
                        }
                    } else {
                        if (input[10] < 79.0) {
                            var40 = -0.04982767;
                        } else {
                            var40 = -0.000031288935;
                        }
                    }
                } else {
                    if (input[3] < 1.0) {
                        var40 = 0.085069284;
                    } else {
                        var40 = 0.0019825061;
                    }
                }
            }
        } else {
            if (input[10] < 111.0) {
                if (input[8] < 187.1) {
                    if (input[8] < 160.6) {
                        if (input[1] < 1.0) {
                            var40 = -0.05460902;
                        } else {
                            var40 = 0.055357914;
                        }
                    } else {
                        if (input[9] < 147.0) {
                            var40 = 0.08122428;
                        } else {
                            var40 = 0.02630021;
                        }
                    }
                } else {
                    if (input[1] < 1.0) {
                        if (input[16] < 2.0) {
                            var40 = 0.05612969;
                        } else {
                            var40 = -0.00009329583;
                        }
                    } else {
                        if (input[17] < 1.0) {
                            var40 = -0.0008813905;
                        } else {
                            var40 = -0.052864768;
                        }
                    }
                }
            } else {
                if (input[9] < 106.0) {
                    var40 = -0.059521865;
                } else {
                    if (input[0] < 47.0) {
                        if (input[0] < 26.0) {
                            var40 = 0.03334617;
                        } else {
                            var40 = -0.05134442;
                        }
                    } else {
                        if (input[5] < 37.1) {
                            var40 = 0.04920277;
                        } else {
                            var40 = -0.043350026;
                        }
                    }
                }
            }
        }
    } else {
        if (input[12] < 2.0) {
            if (input[8] < 165.4) {
                if (input[2] < 1.0) {
                    if (input[10] < 126.0) {
                        if (input[5] < 15.12) {
                            var40 = 0.08229827;
                        } else {
                            var40 = 0.01604986;
                        }
                    } else {
                        if (input[18] < 129.0) {
                            var40 = -0.05985556;
                        } else {
                            var40 = 0.007038366;
                        }
                    }
                } else {
                    if (input[9] < 108.0) {
                        if (input[9] < 96.0) {
                            var40 = 0.016930006;
                        } else {
                            var40 = 0.07126368;
                        }
                    } else {
                        if (input[5] < 38.16) {
                            var40 = 0.022529956;
                        } else {
                            var40 = 0.07306557;
                        }
                    }
                }
            } else {
                if (input[8] < 170.1) {
                    if (input[17] < 1.0) {
                        if (input[11] < 1.0) {
                            var40 = -0.008958186;
                        } else {
                            var40 = 0.011974174;
                        }
                    } else {
                        if (input[13] < 2.0) {
                            var40 = 0.008751563;
                        } else {
                            var40 = 0.055940688;
                        }
                    }
                } else {
                    if (input[9] < 92.0) {
                        if (input[3] < 1.0) {
                            var40 = 0.015515109;
                        } else {
                            var40 = 0.043924414;
                        }
                    } else {
                        if (input[9] < 107.0) {
                            var40 = 0.010810046;
                        } else {
                            var40 = 0.0148400655;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 96.0) {
                if (input[8] < 153.6) {
                    if (input[1] < 1.0) {
                        if (input[5] < 25.75) {
                            var40 = 0.06817688;
                        } else {
                            var40 = -0.047022004;
                        }
                    } else {
                        if (input[5] < 36.05) {
                            var40 = -0.07230338;
                        } else {
                            var40 = -0.009658967;
                        }
                    }
                } else {
                    if (input[18] < 192.0) {
                        if (input[18] < 159.0) {
                            var40 = 0.015472421;
                        } else {
                            var40 = -0.0002712372;
                        }
                    } else {
                        if (input[11] < 1.0) {
                            var40 = 0.011989304;
                        } else {
                            var40 = 0.073062085;
                        }
                    }
                }
            } else {
                if (input[10] < 85.0) {
                    if (input[5] < 39.81) {
                        if (input[9] < 179.0) {
                            var40 = 0.019316195;
                        } else {
                            var40 = -0.0068085007;
                        }
                    } else {
                        if (input[4] < 2.0) {
                            var40 = 0.013964161;
                        } else {
                            var40 = -0.049923744;
                        }
                    }
                } else {
                    if (input[18] < 161.0) {
                        if (input[18] < 159.0) {
                            var40 = 0.013697088;
                        } else {
                            var40 = -0.004538023;
                        }
                    } else {
                        if (input[18] < 195.0) {
                            var40 = 0.020216316;
                        } else {
                            var40 = 0.008124226;
                        }
                    }
                }
            }
        }
    }
    double var41;
    if (input[18] < 101.0) {
        if (input[12] < 2.0) {
            if (input[16] < 1.0) {
                if (input[5] < 26.62) {
                    if (input[10] < 119.0) {
                        if (input[9] < 97.0) {
                            var41 = -0.010921943;
                        } else {
                            var41 = -0.063014306;
                        }
                    } else {
                        var41 = 0.016265742;
                    }
                } else {
                    if (input[5] < 36.36) {
                        if (input[4] < 1.0) {
                            var41 = -0.032480475;
                        } else {
                            var41 = 0.03482759;
                        }
                    } else {
                        if (input[0] < 63.0) {
                            var41 = -0.056380488;
                        } else {
                            var41 = -0.00646319;
                        }
                    }
                }
            } else {
                if (input[13] < 2.0) {
                    if (input[16] < 2.0) {
                        if (input[0] < 57.0) {
                            var41 = 0.020940484;
                        } else {
                            var41 = -0.036709096;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var41 = 0.004553167;
                        } else {
                            var41 = 0.0832471;
                        }
                    }
                } else {
                    if (input[9] < 113.0) {
                        if (input[8] < 270.6) {
                            var41 = -0.060759325;
                        } else {
                            var41 = -0.0055583953;
                        }
                    } else {
                        if (input[17] < 1.0) {
                            var41 = -0.008427168;
                        } else {
                            var41 = 0.05143028;
                        }
                    }
                }
            }
        } else {
            if (input[10] < 111.0) {
                if (input[15] < 1.0) {
                    if (input[10] < 82.0) {
                        if (input[8] < 258.5) {
                            var41 = 0.028163312;
                        } else {
                            var41 = -0.028215894;
                        }
                    } else {
                        if (input[5] < 26.42) {
                            var41 = 0.05850115;
                        } else {
                            var41 = 0.0205046;
                        }
                    }
                } else {
                    if (input[5] < 33.46) {
                        if (input[14] < 1.0) {
                            var41 = 0.0040767738;
                        } else {
                            var41 = -0.05578008;
                        }
                    } else {
                        var41 = 0.032062452;
                    }
                }
            } else {
                if (input[9] < 106.0) {
                    var41 = -0.058341395;
                } else {
                    if (input[0] < 47.0) {
                        if (input[0] < 26.0) {
                            var41 = 0.031857844;
                        } else {
                            var41 = -0.050088968;
                        }
                    } else {
                        if (input[5] < 37.1) {
                            var41 = 0.046346337;
                        } else {
                            var41 = -0.042786445;
                        }
                    }
                }
            }
        }
    } else {
        if (input[12] < 2.0) {
            if (input[8] < 165.4) {
                if (input[2] < 1.0) {
                    if (input[10] < 126.0) {
                        if (input[5] < 15.12) {
                            var41 = 0.077820174;
                        } else {
                            var41 = 0.014730761;
                        }
                    } else {
                        if (input[18] < 129.0) {
                            var41 = -0.057989098;
                        } else {
                            var41 = 0.0062874644;
                        }
                    }
                } else {
                    if (input[5] < 30.6) {
                        if (input[5] < 24.78) {
                            var41 = 0.035047743;
                        } else {
                            var41 = -0.00044236548;
                        }
                    } else {
                        if (input[9] < 146.0) {
                            var41 = 0.030217996;
                        } else {
                            var41 = 0.06420985;
                        }
                    }
                }
            } else {
                if (input[8] < 170.1) {
                    if (input[17] < 1.0) {
                        if (input[0] < 74.0) {
                            var41 = -0.007492335;
                        } else {
                            var41 = 0.015073353;
                        }
                    } else {
                        if (input[13] < 2.0) {
                            var41 = 0.007862321;
                        } else {
                            var41 = 0.052337177;
                        }
                    }
                } else {
                    if (input[9] < 92.0) {
                        if (input[3] < 1.0) {
                            var41 = 0.014288314;
                        } else {
                            var41 = 0.041012753;
                        }
                    } else {
                        if (input[10] < 120.0) {
                            var41 = 0.012351868;
                        } else {
                            var41 = 0.01657053;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 96.0) {
                if (input[8] < 153.6) {
                    if (input[1] < 1.0) {
                        if (input[5] < 25.75) {
                            var41 = 0.06472258;
                        } else {
                            var41 = -0.045792304;
                        }
                    } else {
                        if (input[6] < 1.0) {
                            var41 = -0.070437446;
                        } else {
                            var41 = -0.009232583;
                        }
                    }
                } else {
                    if (input[8] < 268.7) {
                        if (input[8] < 265.3) {
                            var41 = 0.011744263;
                        } else {
                            var41 = 0.05596305;
                        }
                    } else {
                        if (input[18] < 190.0) {
                            var41 = -0.0046994085;
                        } else {
                            var41 = 0.049151897;
                        }
                    }
                }
            } else {
                if (input[10] < 74.0) {
                    if (input[8] < 242.1) {
                        if (input[4] < 2.0) {
                            var41 = 0.01706539;
                        } else {
                            var41 = 0.028006082;
                        }
                    } else {
                        if (input[8] < 298.8) {
                            var41 = 0.012726379;
                        } else {
                            var41 = 0.057597924;
                        }
                    }
                } else {
                    if (input[18] < 161.0) {
                        if (input[18] < 126.0) {
                            var41 = 0.015917262;
                        } else {
                            var41 = 0.010763071;
                        }
                    } else {
                        if (input[8] < 299.4) {
                            var41 = 0.017021023;
                        } else {
                            var41 = -0.034740705;
                        }
                    }
                }
            }
        }
    }
    double var42;
    if (input[18] < 101.0) {
        if (input[8] < 187.7) {
            if (input[12] < 1.0) {
                if (input[8] < 183.1) {
                    var42 = -0.05569132;
                } else {
                    var42 = 0.023570305;
                }
            } else {
                if (input[0] < 84.0) {
                    if (input[10] < 66.0) {
                        var42 = -0.045192737;
                    } else {
                        if (input[0] < 41.0) {
                            var42 = 0.018095652;
                        } else {
                            var42 = 0.05294363;
                        }
                    }
                } else {
                    if (input[1] < 1.0) {
                        var42 = -0.0036163907;
                    } else {
                        var42 = -0.04372163;
                    }
                }
            }
        } else {
            if (input[5] < 17.21) {
                if (input[0] < 88.0) {
                    if (input[10] < 70.0) {
                        var42 = -0.0028145981;
                    } else {
                        var42 = -0.05854435;
                    }
                } else {
                    var42 = 0.025707467;
                }
            } else {
                if (input[0] < 21.0) {
                    var42 = -0.055466082;
                } else {
                    if (input[9] < 128.0) {
                        if (input[5] < 20.58) {
                            var42 = 0.041963544;
                        } else {
                            var42 = -0.021410992;
                        }
                    } else {
                        if (input[0] < 72.0) {
                            var42 = 0.002388423;
                        } else {
                            var42 = 0.043928746;
                        }
                    }
                }
            }
        }
    } else {
        if (input[6] < 1.0) {
            if (input[18] < 108.0) {
                if (input[8] < 296.4) {
                    if (input[0] < 78.0) {
                        if (input[0] < 74.0) {
                            var42 = 0.01566747;
                        } else {
                            var42 = -0.014435622;
                        }
                    } else {
                        if (input[10] < 128.0) {
                            var42 = 0.031880464;
                        } else {
                            var42 = -0.05663065;
                        }
                    }
                } else {
                    if (input[0] < 76.0) {
                        if (input[18] < 106.0) {
                            var42 = 0.07166008;
                        } else {
                            var42 = 0.023303388;
                        }
                    } else {
                        if (input[8] < 297.0) {
                            var42 = 0.06557237;
                        } else {
                            var42 = -0.040934794;
                        }
                    }
                }
            } else {
                if (input[8] < 277.7) {
                    if (input[5] < 32.1) {
                        if (input[12] < 2.0) {
                            var42 = 0.011140448;
                        } else {
                            var42 = 0.014373145;
                        }
                    } else {
                        if (input[10] < 99.0) {
                            var42 = 0.017518507;
                        } else {
                            var42 = 0.012182635;
                        }
                    }
                } else {
                    if (input[4] < 2.0) {
                        if (input[9] < 97.0) {
                            var42 = 0.022952478;
                        } else {
                            var42 = 0.006229063;
                        }
                    } else {
                        if (input[5] < 16.17) {
                            var42 = 0.048096355;
                        } else {
                            var42 = 0.013054672;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 38.16) {
                if (input[5] < 34.36) {
                    if (input[9] < 96.0) {
                        if (input[10] < 115.0) {
                            var42 = -0.008169098;
                        } else {
                            var42 = 0.025991863;
                        }
                    } else {
                        if (input[9] < 97.0) {
                            var42 = 0.04470108;
                        } else {
                            var42 = 0.012525514;
                        }
                    }
                } else {
                    if (input[9] < 171.0) {
                        if (input[9] < 92.0) {
                            var42 = 0.039365485;
                        } else {
                            var42 = 0.0005672741;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var42 = 0.05934109;
                        } else {
                            var42 = 0.011421525;
                        }
                    }
                }
            } else {
                if (input[18] < 111.0) {
                    if (input[0] < 83.0) {
                        if (input[8] < 262.7) {
                            var42 = -0.037779044;
                        } else {
                            var42 = 0.027626848;
                        }
                    } else {
                        var42 = 0.06627143;
                    }
                } else {
                    if (input[18] < 113.0) {
                        if (input[0] < 37.0) {
                            var42 = 0.023851013;
                        } else {
                            var42 = 0.0975986;
                        }
                    } else {
                        if (input[0] < 84.0) {
                            var42 = 0.023443123;
                        } else {
                            var42 = -0.0087902425;
                        }
                    }
                }
            }
        }
    }
    double var43;
    if (input[18] < 101.0) {
        if (input[8] < 187.7) {
            if (input[12] < 1.0) {
                if (input[8] < 183.1) {
                    var43 = -0.054805573;
                } else {
                    var43 = 0.022687472;
                }
            } else {
                if (input[8] < 160.6) {
                    if (input[8] < 160.0) {
                        if (input[16] < 1.0) {
                            var43 = -0.019670388;
                        } else {
                            var43 = 0.038536813;
                        }
                    } else {
                        var43 = -0.047013912;
                    }
                } else {
                    if (input[10] < 125.0) {
                        if (input[7] < 1.0) {
                            var43 = 0.053399105;
                        } else {
                            var43 = 0.021926599;
                        }
                    } else {
                        var43 = -0.020412143;
                    }
                }
            }
        } else {
            if (input[5] < 17.21) {
                if (input[0] < 88.0) {
                    if (input[10] < 70.0) {
                        var43 = -0.0029531384;
                    } else {
                        var43 = -0.057664182;
                    }
                } else {
                    var43 = 0.024700278;
                }
            } else {
                if (input[5] < 36.36) {
                    if (input[8] < 227.3) {
                        if (input[13] < 3.0) {
                            var43 = -0.029018482;
                        } else {
                            var43 = 0.03492115;
                        }
                    } else {
                        if (input[1] < 1.0) {
                            var43 = 0.04242856;
                        } else {
                            var43 = -0.005393058;
                        }
                    }
                } else {
                    if (input[6] < 1.0) {
                        if (input[13] < 2.0) {
                            var43 = 0.03363843;
                        } else {
                            var43 = -0.045292698;
                        }
                    } else {
                        var43 = -0.06420806;
                    }
                }
            }
        }
    } else {
        if (input[6] < 1.0) {
            if (input[18] < 108.0) {
                if (input[8] < 296.4) {
                    if (input[0] < 78.0) {
                        if (input[0] < 74.0) {
                            var43 = 0.014510142;
                        } else {
                            var43 = -0.014069808;
                        }
                    } else {
                        if (input[10] < 128.0) {
                            var43 = 0.02980939;
                        } else {
                            var43 = -0.054905217;
                        }
                    }
                } else {
                    if (input[0] < 76.0) {
                        if (input[5] < 33.46) {
                            var43 = 0.06261505;
                        } else {
                            var43 = 0.007567399;
                        }
                    } else {
                        if (input[8] < 297.0) {
                            var43 = 0.06317284;
                        } else {
                            var43 = -0.039697375;
                        }
                    }
                }
            } else {
                if (input[5] < 31.99) {
                    if (input[5] < 26.91) {
                        if (input[16] < 1.0) {
                            var43 = 0.009092793;
                        } else {
                            var43 = 0.013464249;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var43 = 0.011465084;
                        } else {
                            var43 = 0.005766574;
                        }
                    }
                } else {
                    if (input[9] < 117.0) {
                        if (input[17] < 1.0) {
                            var43 = 0.013933212;
                        } else {
                            var43 = 0.032218464;
                        }
                    } else {
                        if (input[9] < 118.0) {
                            var43 = -0.010208911;
                        } else {
                            var43 = 0.012314734;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 38.16) {
                if (input[5] < 34.36) {
                    if (input[9] < 96.0) {
                        if (input[10] < 115.0) {
                            var43 = -0.008069239;
                        } else {
                            var43 = 0.024325714;
                        }
                    } else {
                        if (input[9] < 97.0) {
                            var43 = 0.04191531;
                        } else {
                            var43 = 0.011482708;
                        }
                    }
                } else {
                    if (input[9] < 171.0) {
                        if (input[9] < 92.0) {
                            var43 = 0.03704619;
                        } else {
                            var43 = 0.0001664491;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var43 = -0.013616261;
                        } else {
                            var43 = 0.038831033;
                        }
                    }
                }
            } else {
                if (input[13] < 1.0) {
                    if (input[8] < 295.4) {
                        if (input[9] < 174.0) {
                            var43 = 0.041346252;
                        } else {
                            var43 = -0.023182945;
                        }
                    } else {
                        if (input[10] < 114.0) {
                            var43 = -0.0580132;
                        } else {
                            var43 = -0.011212053;
                        }
                    }
                } else {
                    if (input[8] < 254.3) {
                        if (input[0] < 67.0) {
                            var43 = 0.016383184;
                        } else {
                            var43 = -0.0121220285;
                        }
                    } else {
                        if (input[18] < 144.0) {
                            var43 = 0.051474106;
                        } else {
                            var43 = 0.014467676;
                        }
                    }
                }
            }
        }
    }
    double var44;
    if (input[9] < 129.0) {
        if (input[8] < 235.0) {
            if (input[8] < 219.2) {
                if (input[11] < 1.0) {
                    if (input[7] < 1.0) {
                        if (input[5] < 39.71) {
                            var44 = 0.0070936047;
                        } else {
                            var44 = -0.03365872;
                        }
                    } else {
                        if (input[10] < 126.0) {
                            var44 = 0.015158956;
                        } else {
                            var44 = -0.012043052;
                        }
                    }
                } else {
                    if (input[0] < 85.0) {
                        if (input[13] < 3.0) {
                            var44 = 0.019488974;
                        } else {
                            var44 = 0.005487464;
                        }
                    } else {
                        if (input[0] < 89.0) {
                            var44 = -0.016319755;
                        } else {
                            var44 = 0.034368057;
                        }
                    }
                }
            } else {
                if (input[15] < 1.0) {
                    if (input[10] < 126.0) {
                        if (input[10] < 63.0) {
                            var44 = -0.006564656;
                        } else {
                            var44 = 0.016038088;
                        }
                    } else {
                        if (input[17] < 1.0) {
                            var44 = 0.011245238;
                        } else {
                            var44 = -0.059026476;
                        }
                    }
                } else {
                    if (input[9] < 123.0) {
                        if (input[9] < 102.0) {
                            var44 = 0.017041141;
                        } else {
                            var44 = 0.049482055;
                        }
                    } else {
                        if (input[10] < 86.0) {
                            var44 = 0.024216607;
                        } else {
                            var44 = -0.042826932;
                        }
                    }
                }
            }
        } else {
            if (input[0] < 62.0) {
                if (input[18] < 189.0) {
                    if (input[18] < 186.0) {
                        if (input[5] < 35.07) {
                            var44 = 0.0032676875;
                        } else {
                            var44 = 0.012405398;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var44 = -0.0657035;
                        } else {
                            var44 = 0.004208812;
                        }
                    }
                } else {
                    if (input[9] < 118.0) {
                        if (input[2] < 1.0) {
                            var44 = 0.03511856;
                        } else {
                            var44 = 0.00024317477;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var44 = 0.013912531;
                        } else {
                            var44 = -0.025170041;
                        }
                    }
                }
            } else {
                if (input[5] < 15.68) {
                    if (input[10] < 77.0) {
                        if (input[13] < 3.0) {
                            var44 = -0.07268881;
                        } else {
                            var44 = 0.040921543;
                        }
                    } else {
                        if (input[0] < 84.0) {
                            var44 = 0.060016204;
                        } else {
                            var44 = -0.02635;
                        }
                    }
                } else {
                    if (input[5] < 26.71) {
                        if (input[5] < 24.67) {
                            var44 = 0.011841658;
                        } else {
                            var44 = -0.015960142;
                        }
                    } else {
                        if (input[8] < 275.3) {
                            var44 = 0.020100417;
                        } else {
                            var44 = 0.0067747245;
                        }
                    }
                }
            }
        }
    } else {
        if (input[9] < 131.0) {
            if (input[10] < 113.0) {
                if (input[18] < 181.0) {
                    if (input[5] < 23.14) {
                        if (input[5] < 17.52) {
                            var44 = 0.03818668;
                        } else {
                            var44 = -0.012141454;
                        }
                    } else {
                        if (input[6] < 1.0) {
                            var44 = 0.01629623;
                        } else {
                            var44 = 0.053749025;
                        }
                    }
                } else {
                    if (input[1] < 1.0) {
                        if (input[5] < 38.35) {
                            var44 = -0.04843982;
                        } else {
                            var44 = 0.050764866;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var44 = -0.008138826;
                        } else {
                            var44 = 0.035791077;
                        }
                    }
                }
            } else {
                if (input[13] < 2.0) {
                    if (input[5] < 38.75) {
                        if (input[0] < 20.0) {
                            var44 = -0.05451076;
                        } else {
                            var44 = 0.030180916;
                        }
                    } else {
                        var44 = -0.06298328;
                    }
                } else {
                    if (input[17] < 1.0) {
                        if (input[3] < 1.0) {
                            var44 = 0.07231927;
                        } else {
                            var44 = 0.0405402;
                        }
                    } else {
                        if (input[2] < 1.0) {
                            var44 = -0.021363782;
                        } else {
                            var44 = 0.072669186;
                        }
                    }
                }
            }
        } else {
            if (input[0] < 74.0) {
                if (input[8] < 216.3) {
                    if (input[0] < 19.0) {
                        if (input[9] < 170.0) {
                            var44 = 0.019559205;
                        } else {
                            var44 = 0.08209991;
                        }
                    } else {
                        if (input[10] < 115.0) {
                            var44 = 0.010858896;
                        } else {
                            var44 = 0.004507232;
                        }
                    }
                } else {
                    if (input[8] < 219.2) {
                        if (input[9] < 177.0) {
                            var44 = 0.03325717;
                        } else {
                            var44 = -0.051376004;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var44 = 0.01525185;
                        } else {
                            var44 = 0.009300716;
                        }
                    }
                }
            } else {
                if (input[9] < 158.0) {
                    if (input[8] < 189.4) {
                        if (input[18] < 199.0) {
                            var44 = 0.022010148;
                        } else {
                            var44 = -0.047341507;
                        }
                    } else {
                        if (input[1] < 1.0) {
                            var44 = 0.0017917078;
                        } else {
                            var44 = 0.015328792;
                        }
                    }
                } else {
                    if (input[10] < 93.0) {
                        if (input[8] < 152.4) {
                            var44 = 0.07252087;
                        } else {
                            var44 = -0.0026097433;
                        }
                    } else {
                        if (input[8] < 287.7) {
                            var44 = 0.0124798305;
                        } else {
                            var44 = -0.011823387;
                        }
                    }
                }
            }
        }
    }
    double var45;
    if (input[18] < 101.0) {
        if (input[12] < 2.0) {
            if (input[16] < 1.0) {
                if (input[5] < 26.62) {
                    if (input[10] < 119.0) {
                        if (input[9] < 97.0) {
                            var45 = -0.010808266;
                        } else {
                            var45 = -0.062406745;
                        }
                    } else {
                        var45 = 0.013248875;
                    }
                } else {
                    if (input[5] < 36.36) {
                        if (input[2] < 1.0) {
                            var45 = 0.031244336;
                        } else {
                            var45 = -0.03328425;
                        }
                    } else {
                        if (input[0] < 63.0) {
                            var45 = -0.055703938;
                        } else {
                            var45 = -0.007101414;
                        }
                    }
                }
            } else {
                if (input[0] < 86.0) {
                    if (input[9] < 103.0) {
                        if (input[10] < 98.0) {
                            var45 = -0.058086183;
                        } else {
                            var45 = -0.004420913;
                        }
                    } else {
                        if (input[10] < 74.0) {
                            var45 = -0.023193372;
                        } else {
                            var45 = 0.014325462;
                        }
                    }
                } else {
                    var45 = 0.07195745;
                }
            }
        } else {
            if (input[16] < 2.0) {
                if (input[1] < 1.0) {
                    if (input[8] < 160.6) {
                        var45 = -0.046313267;
                    } else {
                        if (input[15] < 1.0) {
                            var45 = 0.051058557;
                        } else {
                            var45 = -0.012947537;
                        }
                    }
                } else {
                    if (input[8] < 187.1) {
                        if (input[5] < 28.4) {
                            var45 = 0.06687423;
                        } else {
                            var45 = -0.0022566642;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var45 = -0.028734237;
                        } else {
                            var45 = 0.02084235;
                        }
                    }
                }
            } else {
                if (input[4] < 2.0) {
                    if (input[8] < 179.8) {
                        if (input[1] < 1.0) {
                            var45 = -0.03206859;
                        } else {
                            var45 = 0.049068846;
                        }
                    } else {
                        if (input[10] < 107.0) {
                            var45 = -0.067030214;
                        } else {
                            var45 = -0.007927543;
                        }
                    }
                } else {
                    if (input[9] < 134.0) {
                        if (input[8] < 215.8) {
                            var45 = -0.03802178;
                        } else {
                            var45 = 0.029509982;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var45 = 0.00002115378;
                        } else {
                            var45 = 0.0754747;
                        }
                    }
                }
            }
        }
    } else {
        if (input[18] < 124.0) {
            if (input[10] < 120.0) {
                if (input[10] < 115.0) {
                    if (input[18] < 120.0) {
                        if (input[4] < 2.0) {
                            var45 = 0.012808797;
                        } else {
                            var45 = 0.006485087;
                        }
                    } else {
                        if (input[4] < 2.0) {
                            var45 = 0.011975829;
                        } else {
                            var45 = 0.026864415;
                        }
                    }
                } else {
                    if (input[5] < 22.64) {
                        if (input[9] < 155.0) {
                            var45 = 0.0059701162;
                        } else {
                            var45 = 0.065252684;
                        }
                    } else {
                        if (input[10] < 118.0) {
                            var45 = 0.0023313717;
                        } else {
                            var45 = -0.025698705;
                        }
                    }
                }
            } else {
                if (input[5] < 31.1) {
                    if (input[9] < 108.0) {
                        if (input[8] < 205.7) {
                            var45 = 0.015472092;
                        } else {
                            var45 = -0.021428036;
                        }
                    } else {
                        if (input[9] < 124.0) {
                            var45 = 0.03625932;
                        } else {
                            var45 = 0.008435886;
                        }
                    }
                } else {
                    if (input[0] < 85.0) {
                        if (input[13] < 2.0) {
                            var45 = 0.03771001;
                        } else {
                            var45 = 0.01755552;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var45 = -0.07130367;
                        } else {
                            var45 = 0.0044127237;
                        }
                    }
                }
            }
        } else {
            if (input[18] < 128.0) {
                if (input[9] < 168.0) {
                    if (input[5] < 31.3) {
                        if (input[8] < 162.5) {
                            var45 = -0.021972673;
                        } else {
                            var45 = 0.0058878874;
                        }
                    } else {
                        if (input[8] < 181.5) {
                            var45 = 0.033946414;
                        } else {
                            var45 = 0.012019519;
                        }
                    }
                } else {
                    if (input[12] < 1.0) {
                        if (input[8] < 285.9) {
                            var45 = -0.05464914;
                        } else {
                            var45 = 0.011475997;
                        }
                    } else {
                        if (input[0] < 87.0) {
                            var45 = 0.0045684557;
                        } else {
                            var45 = -0.07471661;
                        }
                    }
                }
            } else {
                if (input[18] < 135.0) {
                    if (input[10] < 76.0) {
                        if (input[0] < 32.0) {
                            var45 = 0.0025407057;
                        } else {
                            var45 = 0.027263517;
                        }
                    } else {
                        if (input[10] < 79.0) {
                            var45 = -0.018900575;
                        } else {
                            var45 = 0.01172415;
                        }
                    }
                } else {
                    if (input[8] < 237.4) {
                        if (input[8] < 215.8) {
                            var45 = 0.009268681;
                        } else {
                            var45 = 0.013966483;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var45 = 0.0045418367;
                        } else {
                            var45 = 0.00961731;
                        }
                    }
                }
            }
        }
    }
    double var46;
    if (input[12] < 2.0) {
        if (input[8] < 165.4) {
            if (input[2] < 1.0) {
                if (input[10] < 126.0) {
                    if (input[9] < 137.0) {
                        if (input[10] < 73.0) {
                            var46 = 0.03130234;
                        } else {
                            var46 = 0.010268693;
                        }
                    } else {
                        if (input[10] < 124.0) {
                            var46 = 0.004442842;
                        } else {
                            var46 = 0.051123302;
                        }
                    }
                } else {
                    if (input[18] < 129.0) {
                        if (input[9] < 104.0) {
                            var46 = 0.031678434;
                        } else {
                            var46 = -0.07613955;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var46 = 0.014609245;
                        } else {
                            var46 = -0.045939196;
                        }
                    }
                }
            } else {
                if (input[9] < 116.0) {
                    if (input[5] < 23.44) {
                        if (input[18] < 180.0) {
                            var46 = 0.08507254;
                        } else {
                            var46 = 0.022877587;
                        }
                    } else {
                        if (input[0] < 75.0) {
                            var46 = 0.037539657;
                        } else {
                            var46 = -0.01548999;
                        }
                    }
                } else {
                    if (input[5] < 28.23) {
                        if (input[8] < 162.5) {
                            var46 = -0.01021229;
                        } else {
                            var46 = 0.05565101;
                        }
                    } else {
                        if (input[9] < 171.0) {
                            var46 = 0.02733015;
                        } else {
                            var46 = 0.07373002;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 168.3) {
                if (input[0] < 72.0) {
                    if (input[18] < 170.0) {
                        if (input[0] < 36.0) {
                            var46 = 0.0075442153;
                        } else {
                            var46 = -0.02888499;
                        }
                    } else {
                        if (input[0] < 39.0) {
                            var46 = -0.02074508;
                        } else {
                            var46 = 0.032148916;
                        }
                    }
                } else {
                    if (input[18] < 117.0) {
                        if (input[5] < 20.19) {
                            var46 = 0.0062628225;
                        } else {
                            var46 = -0.07262542;
                        }
                    } else {
                        if (input[18] < 151.0) {
                            var46 = 0.053950757;
                        } else {
                            var46 = 0.009079704;
                        }
                    }
                }
            } else {
                if (input[9] < 92.0) {
                    if (input[3] < 1.0) {
                        if (input[4] < 1.0) {
                            var46 = 0.03596158;
                        } else {
                            var46 = 0.0005054376;
                        }
                    } else {
                        if (input[0] < 24.0) {
                            var46 = -0.033960454;
                        } else {
                            var46 = 0.039666723;
                        }
                    }
                } else {
                    if (input[9] < 107.0) {
                        if (input[18] < 196.0) {
                            var46 = 0.0039448887;
                        } else {
                            var46 = 0.022482831;
                        }
                    } else {
                        if (input[1] < 1.0) {
                            var46 = 0.0069973664;
                        } else {
                            var46 = 0.010408956;
                        }
                    }
                }
            }
        }
    } else {
        if (input[9] < 96.0) {
            if (input[8] < 153.6) {
                if (input[1] < 1.0) {
                    if (input[5] < 25.75) {
                        if (input[16] < 1.0) {
                            var46 = 0.022024615;
                        } else {
                            var46 = 0.06862927;
                        }
                    } else {
                        if (input[4] < 1.0) {
                            var46 = -0.008987301;
                        } else {
                            var46 = -0.05990962;
                        }
                    }
                } else {
                    if (input[5] < 36.05) {
                        var46 = -0.07083964;
                    } else {
                        var46 = -0.011107186;
                    }
                }
            } else {
                if (input[5] < 15.38) {
                    if (input[14] < 2.0) {
                        var46 = -0.07656459;
                    } else {
                        var46 = 0.056234002;
                    }
                } else {
                    if (input[5] < 16.37) {
                        if (input[16] < 1.0) {
                            var46 = -0.013480261;
                        } else {
                            var46 = 0.05823604;
                        }
                    } else {
                        if (input[10] < 63.0) {
                            var46 = -0.02374188;
                        } else {
                            var46 = 0.006415932;
                        }
                    }
                }
            }
        } else {
            if (input[4] < 2.0) {
                if (input[11] < 1.0) {
                    if (input[10] < 87.0) {
                        if (input[8] < 178.7) {
                            var46 = 0.0005765174;
                        } else {
                            var46 = 0.013260135;
                        }
                    } else {
                        if (input[18] < 161.0) {
                            var46 = 0.0017559221;
                        } else {
                            var46 = 0.010064385;
                        }
                    }
                } else {
                    if (input[5] < 20.28) {
                        if (input[8] < 158.2) {
                            var46 = 0.031574704;
                        } else {
                            var46 = 0.00042242827;
                        }
                    } else {
                        if (input[0] < 46.0) {
                            var46 = 0.022265581;
                        } else {
                            var46 = 0.011801774;
                        }
                    }
                }
            } else {
                if (input[5] < 39.81) {
                    if (input[10] < 75.0) {
                        if (input[8] < 257.4) {
                            var46 = 0.023002714;
                        } else {
                            var46 = 0.0041056904;
                        }
                    } else {
                        if (input[9] < 129.0) {
                            var46 = 0.007032705;
                        } else {
                            var46 = 0.013484499;
                        }
                    }
                } else {
                    if (input[10] < 104.0) {
                        if (input[18] < 120.0) {
                            var46 = 0.008544817;
                        } else {
                            var46 = -0.061666567;
                        }
                    } else {
                        if (input[11] < 1.0) {
                            var46 = 0.07494708;
                        } else {
                            var46 = -0.00876999;
                        }
                    }
                }
            }
        }
    }
    double var47;
    if (input[12] < 2.0) {
        if (input[8] < 165.4) {
            if (input[2] < 1.0) {
                if (input[10] < 126.0) {
                    if (input[5] < 15.12) {
                        var47 = 0.07009384;
                    } else {
                        if (input[5] < 36.44) {
                            var47 = 0.0070429533;
                        } else {
                            var47 = 0.019401249;
                        }
                    }
                } else {
                    if (input[18] < 129.0) {
                        if (input[9] < 104.0) {
                            var47 = 0.030407852;
                        } else {
                            var47 = -0.07388548;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var47 = 0.013658549;
                        } else {
                            var47 = -0.04437097;
                        }
                    }
                }
            } else {
                if (input[9] < 116.0) {
                    if (input[5] < 23.44) {
                        if (input[18] < 180.0) {
                            var47 = 0.08051986;
                        } else {
                            var47 = 0.021771034;
                        }
                    } else {
                        if (input[0] < 75.0) {
                            var47 = 0.03537697;
                        } else {
                            var47 = -0.015071744;
                        }
                    }
                } else {
                    if (input[5] < 28.59) {
                        if (input[8] < 162.5) {
                            var47 = -0.009261538;
                        } else {
                            var47 = 0.051947486;
                        }
                    } else {
                        if (input[9] < 171.0) {
                            var47 = 0.025979996;
                        } else {
                            var47 = 0.07506548;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 170.1) {
                if (input[17] < 1.0) {
                    if (input[4] < 2.0) {
                        if (input[11] < 1.0) {
                            var47 = -0.010129632;
                        } else {
                            var47 = 0.021558389;
                        }
                    } else {
                        if (input[8] < 168.8) {
                            var47 = -0.008137782;
                        } else {
                            var47 = -0.042462796;
                        }
                    }
                } else {
                    if (input[1] < 1.0) {
                        if (input[10] < 117.0) {
                            var47 = 0.058693826;
                        } else {
                            var47 = -0.014690034;
                        }
                    } else {
                        if (input[13] < 3.0) {
                            var47 = -0.012910572;
                        } else {
                            var47 = 0.057893563;
                        }
                    }
                }
            } else {
                if (input[18] < 101.0) {
                    if (input[9] < 128.0) {
                        if (input[9] < 95.0) {
                            var47 = 0.025576193;
                        } else {
                            var47 = -0.030461898;
                        }
                    } else {
                        if (input[0] < 34.0) {
                            var47 = -0.028789574;
                        } else {
                            var47 = 0.014547402;
                        }
                    }
                } else {
                    if (input[9] < 92.0) {
                        if (input[3] < 1.0) {
                            var47 = 0.0085414015;
                        } else {
                            var47 = 0.032230616;
                        }
                    } else {
                        if (input[10] < 120.0) {
                            var47 = 0.006948544;
                        } else {
                            var47 = 0.010956156;
                        }
                    }
                }
            }
        }
    } else {
        if (input[9] < 96.0) {
            if (input[8] < 153.6) {
                if (input[1] < 1.0) {
                    if (input[5] < 25.75) {
                        if (input[16] < 1.0) {
                            var47 = 0.021173317;
                        } else {
                            var47 = 0.066062465;
                        }
                    } else {
                        if (input[18] < 112.0) {
                            var47 = -0.008356038;
                        } else {
                            var47 = -0.058472294;
                        }
                    }
                } else {
                    if (input[6] < 1.0) {
                        var47 = -0.06924812;
                    } else {
                        var47 = -0.0099965;
                    }
                }
            } else {
                if (input[18] < 192.0) {
                    if (input[18] < 159.0) {
                        if (input[18] < 112.0) {
                            var47 = -0.0060527227;
                        } else {
                            var47 = 0.013844627;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var47 = -0.0005866072;
                        } else {
                            var47 = -0.036059786;
                        }
                    }
                } else {
                    if (input[11] < 1.0) {
                        if (input[18] < 194.0) {
                            var47 = 0.058055937;
                        } else {
                            var47 = -0.012326489;
                        }
                    } else {
                        if (input[8] < 212.8) {
                            var47 = 0.018152568;
                        } else {
                            var47 = 0.09158437;
                        }
                    }
                }
            }
        } else {
            if (input[4] < 2.0) {
                if (input[11] < 1.0) {
                    if (input[10] < 87.0) {
                        if (input[8] < 156.4) {
                            var47 = -0.011978256;
                        } else {
                            var47 = 0.011087848;
                        }
                    } else {
                        if (input[18] < 161.0) {
                            var47 = 0.0014048073;
                        } else {
                            var47 = 0.0093194675;
                        }
                    }
                } else {
                    if (input[5] < 20.28) {
                        if (input[9] < 114.0) {
                            var47 = -0.012664082;
                        } else {
                            var47 = 0.0067820023;
                        }
                    } else {
                        if (input[9] < 98.0) {
                            var47 = 0.047433924;
                        } else {
                            var47 = 0.013921464;
                        }
                    }
                }
            } else {
                if (input[5] < 39.81) {
                    if (input[8] < 297.0) {
                        if (input[10] < 78.0) {
                            var47 = 0.015553521;
                        } else {
                            var47 = 0.009594317;
                        }
                    } else {
                        if (input[18] < 148.0) {
                            var47 = 0.054669093;
                        } else {
                            var47 = 0.003378173;
                        }
                    }
                } else {
                    if (input[10] < 104.0) {
                        if (input[18] < 120.0) {
                            var47 = 0.008315875;
                        } else {
                            var47 = -0.05947123;
                        }
                    } else {
                        if (input[11] < 1.0) {
                            var47 = 0.07098909;
                        } else {
                            var47 = -0.008853085;
                        }
                    }
                }
            }
        }
    }
    double var48;
    if (input[10] < 61.0) {
        if (input[9] < 148.0) {
            if (input[9] < 98.0) {
                if (input[0] < 27.0) {
                    var48 = 0.0849676;
                } else {
                    if (input[5] < 16.75) {
                        var48 = 0.06344764;
                    } else {
                        if (input[1] < 1.0) {
                            var48 = -0.02231575;
                        } else {
                            var48 = -0.05917395;
                        }
                    }
                }
            } else {
                if (input[8] < 165.4) {
                    if (input[18] < 109.0) {
                        var48 = -0.020385796;
                    } else {
                        if (input[0] < 62.0) {
                            var48 = 0.08205896;
                        } else {
                            var48 = 0.012379379;
                        }
                    }
                } else {
                    if (input[0] < 48.0) {
                        if (input[7] < 1.0) {
                            var48 = -0.02744385;
                        } else {
                            var48 = 0.032564722;
                        }
                    } else {
                        if (input[9] < 143.0) {
                            var48 = 0.02466506;
                        } else {
                            var48 = -0.0153935915;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 189.4) {
                if (input[0] < 67.0) {
                    if (input[5] < 16.17) {
                        var48 = 0.0056527443;
                    } else {
                        if (input[12] < 2.0) {
                            var48 = -0.075847246;
                        } else {
                            var48 = -0.033825006;
                        }
                    }
                } else {
                    if (input[5] < 22.44) {
                        var48 = -0.06310771;
                    } else {
                        if (input[5] < 27.03) {
                            var48 = 0.08124339;
                        } else {
                            var48 = -0.019446861;
                        }
                    }
                }
            } else {
                if (input[5] < 34.86) {
                    if (input[5] < 27.54) {
                        if (input[3] < 1.0) {
                            var48 = 0.034801614;
                        } else {
                            var48 = -0.018118462;
                        }
                    } else {
                        if (input[8] < 197.7) {
                            var48 = 0.062441077;
                        } else {
                            var48 = -0.052125413;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[0] < 54.0) {
                            var48 = 0.077452764;
                        } else {
                            var48 = 0.015123705;
                        }
                    } else {
                        var48 = -0.038587853;
                    }
                }
            }
        }
    } else {
        if (input[6] < 1.0) {
            if (input[18] < 135.0) {
                if (input[10] < 68.0) {
                    if (input[3] < 1.0) {
                        if (input[9] < 168.0) {
                            var48 = 0.018696094;
                        } else {
                            var48 = 0.050468296;
                        }
                    } else {
                        if (input[13] < 2.0) {
                            var48 = 0.021001527;
                        } else {
                            var48 = -0.0062535205;
                        }
                    }
                } else {
                    if (input[8] < 153.6) {
                        if (input[5] < 20.28) {
                            var48 = -0.02971567;
                        } else {
                            var48 = 0.0013985847;
                        }
                    } else {
                        if (input[9] < 178.0) {
                            var48 = 0.009203132;
                        } else {
                            var48 = -0.00538442;
                        }
                    }
                }
            } else {
                if (input[18] < 136.0) {
                    if (input[5] < 37.51) {
                        if (input[0] < 26.0) {
                            var48 = -0.0479802;
                        } else {
                            var48 = -0.002203861;
                        }
                    } else {
                        if (input[8] < 243.4) {
                            var48 = -0.013635662;
                        } else {
                            var48 = 0.073106185;
                        }
                    }
                } else {
                    if (input[5] < 38.35) {
                        if (input[5] < 36.72) {
                            var48 = 0.0075845006;
                        } else {
                            var48 = 0.014775063;
                        }
                    } else {
                        if (input[8] < 259.8) {
                            var48 = 0.006248824;
                        } else {
                            var48 = -0.008518255;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 38.16) {
                if (input[5] < 35.84) {
                    if (input[2] < 1.0) {
                        if (input[0] < 34.0) {
                            var48 = 0.0020292432;
                        } else {
                            var48 = 0.010325812;
                        }
                    } else {
                        if (input[8] < 162.5) {
                            var48 = 0.021859067;
                        } else {
                            var48 = 0.00070749724;
                        }
                    }
                } else {
                    if (input[18] < 102.0) {
                        var48 = -0.071325965;
                    } else {
                        if (input[9] < 151.0) {
                            var48 = -0.0069528515;
                        } else {
                            var48 = 0.012261855;
                        }
                    }
                }
            } else {
                if (input[18] < 111.0) {
                    if (input[0] < 83.0) {
                        if (input[8] < 262.7) {
                            var48 = -0.04329924;
                        } else {
                            var48 = 0.021047115;
                        }
                    } else {
                        if (input[10] < 111.0) {
                            var48 = 0.073217675;
                        } else {
                            var48 = -0.00025933195;
                        }
                    }
                } else {
                    if (input[18] < 142.0) {
                        if (input[14] < 1.0) {
                            var48 = 0.056339353;
                        } else {
                            var48 = 0.01603086;
                        }
                    } else {
                        if (input[18] < 166.0) {
                            var48 = -0.008012599;
                        } else {
                            var48 = 0.021037955;
                        }
                    }
                }
            }
        }
    }
    double var49;
    if (input[12] < 2.0) {
        if (input[8] < 165.4) {
            if (input[2] < 1.0) {
                if (input[10] < 126.0) {
                    if (input[8] < 158.2) {
                        if (input[10] < 103.0) {
                            var49 = -0.003970286;
                        } else {
                            var49 = 0.017742915;
                        }
                    } else {
                        if (input[9] < 108.0) {
                            var49 = 0.028779918;
                        } else {
                            var49 = 0.0075901523;
                        }
                    }
                } else {
                    if (input[10] < 129.0) {
                        if (input[18] < 129.0) {
                            var49 = -0.07155951;
                        } else {
                            var49 = -0.011744784;
                        }
                    } else {
                        if (input[0] < 47.0) {
                            var49 = 0.06471019;
                        } else {
                            var49 = -0.017227737;
                        }
                    }
                }
            } else {
                if (input[9] < 116.0) {
                    if (input[5] < 23.44) {
                        if (input[18] < 180.0) {
                            var49 = 0.07576749;
                        } else {
                            var49 = 0.019752607;
                        }
                    } else {
                        if (input[0] < 86.0) {
                            var49 = 0.027196972;
                        } else {
                            var49 = -0.047367882;
                        }
                    }
                } else {
                    if (input[5] < 28.59) {
                        if (input[8] < 162.5) {
                            var49 = -0.009732997;
                        } else {
                            var49 = 0.048377097;
                        }
                    } else {
                        if (input[9] < 146.0) {
                            var49 = 0.0148356175;
                        } else {
                            var49 = 0.04572813;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 168.3) {
                if (input[9] < 128.0) {
                    if (input[10] < 125.0) {
                        if (input[0] < 29.0) {
                            var49 = 0.054401677;
                        } else {
                            var49 = 0.0077717104;
                        }
                    } else {
                        if (input[0] < 62.0) {
                            var49 = -0.07795824;
                        } else {
                            var49 = 0.049442206;
                        }
                    }
                } else {
                    if (input[9] < 140.0) {
                        if (input[0] < 69.0) {
                            var49 = -0.054415356;
                        } else {
                            var49 = 0.006261205;
                        }
                    } else {
                        if (input[18] < 168.0) {
                            var49 = -0.017007355;
                        } else {
                            var49 = 0.01661191;
                        }
                    }
                }
            } else {
                if (input[2] < 1.0) {
                    if (input[18] < 108.0) {
                        if (input[5] < 38.16) {
                            var49 = 0.015093707;
                        } else {
                            var49 = -0.012968681;
                        }
                    } else {
                        if (input[0] < 43.0) {
                            var49 = 0.009499931;
                        } else {
                            var49 = 0.005084801;
                        }
                    }
                } else {
                    if (input[5] < 22.02) {
                        if (input[5] < 20.19) {
                            var49 = 0.0059193866;
                        } else {
                            var49 = 0.022054754;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var49 = 0.00746778;
                        } else {
                            var49 = -0.0009693212;
                        }
                    }
                }
            }
        }
    } else {
        if (input[4] < 2.0) {
            if (input[11] < 1.0) {
                if (input[2] < 1.0) {
                    if (input[0] < 81.0) {
                        if (input[10] < 106.0) {
                            var49 = 0.008142932;
                        } else {
                            var49 = 0.00069015747;
                        }
                    } else {
                        if (input[9] < 92.0) {
                            var49 = -0.035242416;
                        } else {
                            var49 = 0.017556915;
                        }
                    }
                } else {
                    if (input[8] < 153.0) {
                        if (input[18] < 172.0) {
                            var49 = -0.055071253;
                        } else {
                            var49 = 0.016492037;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var49 = -0.0036664333;
                        } else {
                            var49 = 0.005487242;
                        }
                    }
                }
            } else {
                if (input[5] < 16.07) {
                    if (input[0] < 58.0) {
                        if (input[0] < 48.0) {
                            var49 = -0.007347803;
                        } else {
                            var49 = 0.0444223;
                        }
                    } else {
                        if (input[8] < 291.9) {
                            var49 = -0.03964907;
                        } else {
                            var49 = 0.067292035;
                        }
                    }
                } else {
                    if (input[10] < 79.0) {
                        if (input[16] < 2.0) {
                            var49 = 0.0103587825;
                        } else {
                            var49 = -0.01021527;
                        }
                    } else {
                        if (input[18] < 199.0) {
                            var49 = 0.013904492;
                        } else {
                            var49 = -0.029218057;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 97.0) {
                if (input[5] < 21.15) {
                    if (input[0] < 25.0) {
                        if (input[5] < 19.04) {
                            var49 = -0.05126032;
                        } else {
                            var49 = 0.034707673;
                        }
                    } else {
                        if (input[18] < 105.0) {
                            var49 = -0.044203117;
                        } else {
                            var49 = 0.024115145;
                        }
                    }
                } else {
                    if (input[10] < 124.0) {
                        if (input[5] < 39.81) {
                            var49 = -0.009228687;
                        } else {
                            var49 = 0.06114739;
                        }
                    } else {
                        if (input[13] < 2.0) {
                            var49 = 0.057467498;
                        } else {
                            var49 = -0.0059703407;
                        }
                    }
                }
            } else {
                if (input[5] < 39.81) {
                    if (input[10] < 75.0) {
                        if (input[8] < 257.4) {
                            var49 = 0.020175261;
                        } else {
                            var49 = 0.002197894;
                        }
                    } else {
                        if (input[11] < 1.0) {
                            var49 = 0.010885807;
                        } else {
                            var49 = 0.0045043975;
                        }
                    }
                } else {
                    if (input[10] < 104.0) {
                        if (input[18] < 120.0) {
                            var49 = 0.007627652;
                        } else {
                            var49 = -0.063085936;
                        }
                    } else {
                        if (input[11] < 1.0) {
                            var49 = 0.06672625;
                        } else {
                            var49 = -0.0092595285;
                        }
                    }
                }
            }
        }
    }
    double var50;
    if (input[9] < 177.0) {
        if (input[9] < 176.0) {
            if (input[8] < 150.6) {
                if (input[17] < 1.0) {
                    if (input[13] < 2.0) {
                        if (input[5] < 23.04) {
                            var50 = 0.022641053;
                        } else {
                            var50 = -0.028084448;
                        }
                    } else {
                        if (input[18] < 161.0) {
                            var50 = -0.00028396133;
                        } else {
                            var50 = 0.053135443;
                        }
                    }
                } else {
                    if (input[11] < 1.0) {
                        if (input[5] < 17.21) {
                            var50 = -0.013650953;
                        } else {
                            var50 = -0.07190523;
                        }
                    } else {
                        var50 = 0.0023222265;
                    }
                }
            } else {
                if (input[5] < 15.68) {
                    if (input[0] < 72.0) {
                        if (input[5] < 15.57) {
                            var50 = 0.0038919472;
                        } else {
                            var50 = 0.025202377;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var50 = 0.03101859;
                        } else {
                            var50 = -0.0030530114;
                        }
                    }
                } else {
                    if (input[5] < 16.07) {
                        if (input[8] < 293.1) {
                            var50 = -0.0023117466;
                        } else {
                            var50 = 0.039646488;
                        }
                    } else {
                        if (input[8] < 165.4) {
                            var50 = 0.008812158;
                        } else {
                            var50 = 0.006341148;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 203.9) {
                if (input[8] < 190.0) {
                    if (input[8] < 184.2) {
                        if (input[5] < 27.03) {
                            var50 = 0.04955169;
                        } else {
                            var50 = 0.00834464;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var50 = -0.05686741;
                        } else {
                            var50 = 0.06724527;
                        }
                    }
                } else {
                    if (input[16] < 1.0) {
                        if (input[10] < 66.0) {
                            var50 = 0.02229808;
                        } else {
                            var50 = 0.093018435;
                        }
                    } else {
                        if (input[10] < 114.0) {
                            var50 = 0.04732514;
                        } else {
                            var50 = -0.028030692;
                        }
                    }
                }
            } else {
                if (input[6] < 1.0) {
                    if (input[7] < 1.0) {
                        if (input[0] < 75.0) {
                            var50 = 0.014734629;
                        } else {
                            var50 = -0.029478792;
                        }
                    } else {
                        if (input[10] < 97.0) {
                            var50 = 0.0032559484;
                        } else {
                            var50 = -0.040525474;
                        }
                    }
                } else {
                    if (input[8] < 215.2) {
                        var50 = -0.06934525;
                    } else {
                        if (input[1] < 1.0) {
                            var50 = 0.079389006;
                        } else {
                            var50 = 0.021075085;
                        }
                    }
                }
            }
        }
    } else {
        if (input[0] < 60.0) {
            if (input[10] < 68.0) {
                if (input[16] < 2.0) {
                    if (input[14] < 2.0) {
                        if (input[1] < 1.0) {
                            var50 = 0.032347392;
                        } else {
                            var50 = 0.09147129;
                        }
                    } else {
                        if (input[5] < 20.19) {
                            var50 = -0.035086107;
                        } else {
                            var50 = 0.03449999;
                        }
                    }
                } else {
                    if (input[0] < 49.0) {
                        if (input[8] < 210.4) {
                            var50 = -0.027001683;
                        } else {
                            var50 = 0.05322483;
                        }
                    } else {
                        var50 = -0.06290794;
                    }
                }
            } else {
                if (input[16] < 1.0) {
                    if (input[5] < 33.98) {
                        if (input[0] < 43.0) {
                            var50 = -0.03146578;
                        } else {
                            var50 = 0.002227225;
                        }
                    } else {
                        if (input[5] < 37.71) {
                            var50 = 0.05789838;
                        } else {
                            var50 = -0.008339736;
                        }
                    }
                } else {
                    if (input[16] < 2.0) {
                        if (input[18] < 197.0) {
                            var50 = 0.030385304;
                        } else {
                            var50 = -0.05036403;
                        }
                    } else {
                        if (input[18] < 117.0) {
                            var50 = 0.024478547;
                        } else {
                            var50 = -0.007954145;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 152.4) {
                if (input[9] < 178.0) {
                    var50 = 0.022116749;
                } else {
                    var50 = 0.069573976;
                }
            } else {
                if (input[8] < 176.9) {
                    if (input[11] < 1.0) {
                        if (input[8] < 167.2) {
                            var50 = 0.018328415;
                        } else {
                            var50 = -0.037737455;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var50 = -0.06469538;
                        } else {
                            var50 = -0.0038743285;
                        }
                    }
                } else {
                    if (input[9] < 179.0) {
                        if (input[12] < 2.0) {
                            var50 = -0.019957272;
                        } else {
                            var50 = 0.006180925;
                        }
                    } else {
                        if (input[13] < 2.0) {
                            var50 = 0.033686288;
                        } else {
                            var50 = -0.016590182;
                        }
                    }
                }
            }
        }
    }
    double var51;
    if (input[10] < 61.0) {
        if (input[9] < 148.0) {
            if (input[9] < 121.0) {
                if (input[2] < 1.0) {
                    if (input[5] < 21.85) {
                        if (input[4] < 2.0) {
                            var51 = -0.077875815;
                        } else {
                            var51 = -0.020082757;
                        }
                    } else {
                        if (input[0] < 27.0) {
                            var51 = 0.035225347;
                        } else {
                            var51 = -0.014622805;
                        }
                    }
                } else {
                    if (input[9] < 98.0) {
                        if (input[5] < 16.75) {
                            var51 = 0.061098862;
                        } else {
                            var51 = -0.05230992;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var51 = 0.05882557;
                        } else {
                            var51 = 0.008289897;
                        }
                    }
                }
            } else {
                if (input[3] < 1.0) {
                    if (input[0] < 48.0) {
                        if (input[14] < 1.0) {
                            var51 = 0.024138192;
                        } else {
                            var51 = -0.030681824;
                        }
                    } else {
                        if (input[5] < 31.0) {
                            var51 = 0.041260872;
                        } else {
                            var51 = -0.0064052343;
                        }
                    }
                } else {
                    if (input[9] < 125.0) {
                        var51 = -0.011799548;
                    } else {
                        if (input[8] < 193.1) {
                            var51 = 0.07550383;
                        } else {
                            var51 = 0.029150097;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 189.4) {
                if (input[0] < 67.0) {
                    if (input[5] < 16.17) {
                        var51 = 0.004826754;
                    } else {
                        if (input[12] < 2.0) {
                            var51 = -0.07365776;
                        } else {
                            var51 = -0.03383066;
                        }
                    }
                } else {
                    if (input[5] < 22.44) {
                        var51 = -0.06170112;
                    } else {
                        if (input[5] < 27.03) {
                            var51 = 0.07675892;
                        } else {
                            var51 = -0.019670798;
                        }
                    }
                }
            } else {
                if (input[5] < 34.86) {
                    if (input[5] < 27.54) {
                        if (input[16] < 1.0) {
                            var51 = 0.049557526;
                        } else {
                            var51 = -0.007910417;
                        }
                    } else {
                        if (input[8] < 197.7) {
                            var51 = 0.059859384;
                        } else {
                            var51 = -0.050896224;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[0] < 54.0) {
                            var51 = 0.072491705;
                        } else {
                            var51 = 0.013540215;
                        }
                    } else {
                        var51 = -0.03822688;
                    }
                }
            }
        }
    } else {
        if (input[6] < 1.0) {
            if (input[18] < 138.0) {
                if (input[10] < 68.0) {
                    if (input[9] < 171.0) {
                        if (input[10] < 65.0) {
                            var51 = 0.005756911;
                        } else {
                            var51 = 0.019834008;
                        }
                    } else {
                        if (input[4] < 1.0) {
                            var51 = -0.01114363;
                        } else {
                            var51 = 0.047286637;
                        }
                    }
                } else {
                    if (input[18] < 137.0) {
                        if (input[8] < 153.0) {
                            var51 = -0.008335358;
                        } else {
                            var51 = 0.006633798;
                        }
                    } else {
                        if (input[10] < 71.0) {
                            var51 = -0.04296367;
                        } else {
                            var51 = 0.02384018;
                        }
                    }
                }
            } else {
                if (input[18] < 141.0) {
                    if (input[2] < 1.0) {
                        if (input[10] < 127.0) {
                            var51 = -0.0048093214;
                        } else {
                            var51 = -0.042729292;
                        }
                    } else {
                        if (input[8] < 229.7) {
                            var51 = -0.0009198161;
                        } else {
                            var51 = 0.020629747;
                        }
                    }
                } else {
                    if (input[5] < 38.06) {
                        if (input[5] < 32.36) {
                            var51 = 0.005529277;
                        } else {
                            var51 = 0.0096993;
                        }
                    } else {
                        if (input[10] < 71.0) {
                            var51 = 0.015300171;
                        } else {
                            var51 = -0.0014985497;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 38.16) {
                if (input[5] < 35.84) {
                    if (input[2] < 1.0) {
                        if (input[0] < 34.0) {
                            var51 = 0.0005917235;
                        } else {
                            var51 = 0.008503598;
                        }
                    } else {
                        if (input[8] < 162.5) {
                            var51 = 0.01963239;
                        } else {
                            var51 = -0.00050615676;
                        }
                    }
                } else {
                    if (input[18] < 102.0) {
                        var51 = -0.06978519;
                    } else {
                        if (input[9] < 151.0) {
                            var51 = -0.007734012;
                        } else {
                            var51 = 0.010158259;
                        }
                    }
                }
            } else {
                if (input[18] < 111.0) {
                    if (input[0] < 83.0) {
                        if (input[8] < 262.7) {
                            var51 = -0.04240678;
                        } else {
                            var51 = 0.018148841;
                        }
                    } else {
                        if (input[13] < 2.0) {
                            var51 = -0.00093468867;
                        } else {
                            var51 = 0.06965139;
                        }
                    }
                } else {
                    if (input[18] < 142.0) {
                        if (input[14] < 1.0) {
                            var51 = 0.05177492;
                        } else {
                            var51 = 0.0138545185;
                        }
                    } else {
                        if (input[18] < 166.0) {
                            var51 = -0.008778807;
                        } else {
                            var51 = 0.018573292;
                        }
                    }
                }
            }
        }
    }
    double var52;
    if (input[18] < 101.0) {
        if (input[8] < 187.7) {
            if (input[12] < 1.0) {
                if (input[8] < 183.1) {
                    var52 = -0.05522799;
                } else {
                    var52 = 0.019106874;
                }
            } else {
                if (input[0] < 84.0) {
                    if (input[10] < 66.0) {
                        var52 = -0.04518031;
                    } else {
                        if (input[1] < 1.0) {
                            var52 = 0.012532705;
                        } else {
                            var52 = 0.0455194;
                        }
                    }
                } else {
                    if (input[8] < 161.8) {
                        var52 = -0.045290202;
                    } else {
                        var52 = -0.006342032;
                    }
                }
            }
        } else {
            if (input[5] < 17.21) {
                if (input[0] < 88.0) {
                    if (input[10] < 70.0) {
                        var52 = -0.0046794186;
                    } else {
                        var52 = -0.057897337;
                    }
                } else {
                    var52 = 0.0192808;
                }
            } else {
                if (input[0] < 21.0) {
                    var52 = -0.05570379;
                } else {
                    if (input[8] < 193.1) {
                        var52 = -0.056371946;
                    } else {
                        if (input[10] < 127.0) {
                            var52 = 0.0045495597;
                        } else {
                            var52 = -0.047536947;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 36.72) {
            if (input[5] < 36.62) {
                if (input[12] < 2.0) {
                    if (input[1] < 1.0) {
                        if (input[8] < 215.8) {
                            var52 = 0.0005739983;
                        } else {
                            var52 = 0.00499664;
                        }
                    } else {
                        if (input[18] < 109.0) {
                            var52 = 0.015011805;
                        } else {
                            var52 = 0.0053714435;
                        }
                    }
                } else {
                    if (input[4] < 2.0) {
                        if (input[11] < 1.0) {
                            var52 = 0.0035757713;
                        } else {
                            var52 = 0.008548205;
                        }
                    } else {
                        if (input[9] < 111.0) {
                            var52 = 0.0023081696;
                        } else {
                            var52 = 0.0096337;
                        }
                    }
                }
            } else {
                if (input[10] < 83.0) {
                    if (input[18] < 174.0) {
                        if (input[0] < 62.0) {
                            var52 = 0.027656043;
                        } else {
                            var52 = -0.046543967;
                        }
                    } else {
                        var52 = 0.08915103;
                    }
                } else {
                    if (input[14] < 2.0) {
                        if (input[9] < 139.0) {
                            var52 = -0.02838038;
                        } else {
                            var52 = 0.02314957;
                        }
                    } else {
                        if (input[9] < 122.0) {
                            var52 = -0.008281702;
                        } else {
                            var52 = -0.061635207;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 37.19) {
                if (input[8] < 193.1) {
                    if (input[18] < 118.0) {
                        if (input[16] < 2.0) {
                            var52 = 0.006327644;
                        } else {
                            var52 = -0.06536569;
                        }
                    } else {
                        if (input[12] < 2.0) {
                            var52 = 0.033899188;
                        } else {
                            var52 = -0.0025181714;
                        }
                    }
                } else {
                    if (input[0] < 30.0) {
                        if (input[10] < 74.0) {
                            var52 = -0.04992533;
                        } else {
                            var52 = 0.014836865;
                        }
                    } else {
                        if (input[4] < 1.0) {
                            var52 = 0.04543888;
                        } else {
                            var52 = 0.021868447;
                        }
                    }
                }
            } else {
                if (input[10] < 71.0) {
                    if (input[16] < 1.0) {
                        if (input[18] < 191.0) {
                            var52 = -0.007949344;
                        } else {
                            var52 = 0.03211167;
                        }
                    } else {
                        if (input[9] < 153.0) {
                            var52 = 0.011271308;
                        } else {
                            var52 = 0.039340634;
                        }
                    }
                } else {
                    if (input[18] < 192.0) {
                        if (input[10] < 77.0) {
                            var52 = -0.0045736977;
                        } else {
                            var52 = 0.0061596343;
                        }
                    } else {
                        if (input[10] < 125.0) {
                            var52 = -0.013593893;
                        } else {
                            var52 = 0.034250025;
                        }
                    }
                }
            }
        }
    }
    double var53;
    if (input[9] < 177.0) {
        if (input[9] < 176.0) {
            if (input[8] < 150.6) {
                if (input[17] < 1.0) {
                    if (input[9] < 170.0) {
                        if (input[18] < 166.0) {
                            var53 = -0.018032422;
                        } else {
                            var53 = 0.016237099;
                        }
                    } else {
                        if (input[10] < 105.0) {
                            var53 = 0.0714311;
                        } else {
                            var53 = -0.025462693;
                        }
                    }
                } else {
                    if (input[11] < 1.0) {
                        if (input[5] < 17.21) {
                            var53 = -0.013618335;
                        } else {
                            var53 = -0.06992558;
                        }
                    } else {
                        var53 = 0.0015913198;
                    }
                }
            } else {
                if (input[5] < 15.68) {
                    if (input[0] < 72.0) {
                        if (input[5] < 15.57) {
                            var53 = 0.0025096815;
                        } else {
                            var53 = 0.022699708;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var53 = 0.028281415;
                        } else {
                            var53 = -0.0037725277;
                        }
                    }
                } else {
                    if (input[5] < 16.07) {
                        if (input[8] < 293.1) {
                            var53 = -0.0033070396;
                        } else {
                            var53 = 0.036066394;
                        }
                    } else {
                        if (input[8] < 165.4) {
                            var53 = 0.0073020975;
                        } else {
                            var53 = 0.0048786313;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 203.9) {
                if (input[5] < 22.02) {
                    if (input[10] < 64.0) {
                        var53 = -0.02966483;
                    } else {
                        if (input[12] < 1.0) {
                            var53 = 0.0044832383;
                        } else {
                            var53 = 0.08054961;
                        }
                    }
                } else {
                    if (input[10] < 101.0) {
                        if (input[15] < 1.0) {
                            var53 = -0.0072661364;
                        } else {
                            var53 = 0.05488063;
                        }
                    } else {
                        if (input[10] < 115.0) {
                            var53 = 0.05980888;
                        } else {
                            var53 = -0.000102630715;
                        }
                    }
                }
            } else {
                if (input[8] < 276.5) {
                    if (input[5] < 21.93) {
                        if (input[0] < 85.0) {
                            var53 = -0.03161948;
                        } else {
                            var53 = 0.037017416;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var53 = -0.01710975;
                        } else {
                            var53 = 0.01689461;
                        }
                    }
                } else {
                    if (input[6] < 1.0) {
                        if (input[18] < 153.0) {
                            var53 = 0.05054126;
                        } else {
                            var53 = -0.012787583;
                        }
                    } else {
                        var53 = 0.08630974;
                    }
                }
            }
        }
    } else {
        if (input[0] < 60.0) {
            if (input[10] < 68.0) {
                if (input[16] < 2.0) {
                    if (input[14] < 2.0) {
                        if (input[1] < 1.0) {
                            var53 = 0.029597426;
                        } else {
                            var53 = 0.08563084;
                        }
                    } else {
                        if (input[5] < 20.19) {
                            var53 = -0.034946065;
                        } else {
                            var53 = 0.032064613;
                        }
                    }
                } else {
                    if (input[0] < 49.0) {
                        if (input[8] < 210.4) {
                            var53 = -0.026769653;
                        } else {
                            var53 = 0.050066955;
                        }
                    } else {
                        var53 = -0.061484296;
                    }
                }
            } else {
                if (input[5] < 16.47) {
                    if (input[10] < 115.0) {
                        if (input[18] < 104.0) {
                            var53 = 0.022882583;
                        } else {
                            var53 = -0.056566287;
                        }
                    } else {
                        if (input[18] < 156.0) {
                            var53 = 0.06694773;
                        } else {
                            var53 = -0.015587585;
                        }
                    }
                } else {
                    if (input[18] < 172.0) {
                        if (input[18] < 113.0) {
                            var53 = 0.020804448;
                        } else {
                            var53 = -0.005245428;
                        }
                    } else {
                        if (input[5] < 38.96) {
                            var53 = 0.024117276;
                        } else {
                            var53 = -0.03287926;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 152.4) {
                if (input[2] < 1.0) {
                    var53 = 0.06597372;
                } else {
                    var53 = 0.020806821;
                }
            } else {
                if (input[8] < 176.9) {
                    if (input[12] < 1.0) {
                        var53 = -0.0751738;
                    } else {
                        if (input[11] < 1.0) {
                            var53 = 0.0027366455;
                        } else {
                            var53 = -0.04737417;
                        }
                    }
                } else {
                    if (input[3] < 1.0) {
                        if (input[8] < 230.2) {
                            var53 = -0.013908583;
                        } else {
                            var53 = 0.018111417;
                        }
                    } else {
                        if (input[8] < 223.8) {
                            var53 = 0.013784476;
                        } else {
                            var53 = -0.023930203;
                        }
                    }
                }
            }
        }
    }
    double var54;
    if (input[10] < 61.0) {
        if (input[5] < 16.07) {
            if (input[18] < 163.0) {
                var54 = -0.079339154;
            } else {
                if (input[4] < 2.0) {
                    var54 = 0.07024051;
                } else {
                    var54 = -0.055621494;
                }
            }
        } else {
            if (input[5] < 17.13) {
                if (input[12] < 1.0) {
                    var54 = -0.015746856;
                } else {
                    if (input[0] < 78.0) {
                        var54 = 0.08065979;
                    } else {
                        if (input[8] < 190.0) {
                            var54 = -0.017383462;
                        } else {
                            var54 = 0.05735599;
                        }
                    }
                }
            } else {
                if (input[9] < 96.0) {
                    if (input[0] < 27.0) {
                        var54 = 0.066846035;
                    } else {
                        if (input[18] < 144.0) {
                            var54 = -0.073517434;
                        } else {
                            var54 = -0.01926224;
                        }
                    }
                } else {
                    if (input[9] < 143.0) {
                        if (input[9] < 126.0) {
                            var54 = 0.0023709936;
                        } else {
                            var54 = 0.031216482;
                        }
                    } else {
                        if (input[8] < 189.4) {
                            var54 = -0.033385526;
                        } else {
                            var54 = 0.0004983011;
                        }
                    }
                }
            }
        }
    } else {
        if (input[9] < 141.0) {
            if (input[9] < 140.0) {
                if (input[0] < 78.0) {
                    if (input[16] < 2.0) {
                        if (input[0] < 37.0) {
                            var54 = 0.0055407053;
                        } else {
                            var54 = 0.0010139019;
                        }
                    } else {
                        if (input[0] < 35.0) {
                            var54 = 0.0014422495;
                        } else {
                            var54 = 0.008266314;
                        }
                    }
                } else {
                    if (input[13] < 1.0) {
                        if (input[5] < 39.14) {
                            var54 = 0.014688961;
                        } else {
                            var54 = 0.07125754;
                        }
                    } else {
                        if (input[5] < 33.98) {
                            var54 = 0.007063982;
                        } else {
                            var54 = -0.0019727724;
                        }
                    }
                }
            } else {
                if (input[5] < 16.07) {
                    if (input[18] < 158.0) {
                        var54 = 0.004657812;
                    } else {
                        var54 = 0.08147009;
                    }
                } else {
                    if (input[0] < 29.0) {
                        if (input[10] < 76.0) {
                            var54 = 0.014307267;
                        } else {
                            var54 = -0.0488208;
                        }
                    } else {
                        if (input[5] < 26.91) {
                            var54 = 0.0048280186;
                        } else {
                            var54 = -0.014575995;
                        }
                    }
                }
            }
        } else {
            if (input[0] < 74.0) {
                if (input[5] < 22.85) {
                    if (input[18] < 103.0) {
                        if (input[0] < 67.0) {
                            var54 = -0.020679958;
                        } else {
                            var54 = 0.024951328;
                        }
                    } else {
                        if (input[8] < 290.7) {
                            var54 = 0.010597598;
                        } else {
                            var54 = -0.002982957;
                        }
                    }
                } else {
                    if (input[10] < 100.0) {
                        if (input[8] < 264.2) {
                            var54 = 0.00527432;
                        } else {
                            var54 = 0.013594778;
                        }
                    } else {
                        if (input[9] < 150.0) {
                            var54 = -0.0041708453;
                        } else {
                            var54 = 0.004273425;
                        }
                    }
                }
            } else {
                if (input[9] < 151.0) {
                    if (input[5] < 25.75) {
                        if (input[8] < 192.5) {
                            var54 = 0.02080803;
                        } else {
                            var54 = -0.013905871;
                        }
                    } else {
                        if (input[5] < 39.43) {
                            var54 = 0.020318722;
                        } else {
                            var54 = -0.04026332;
                        }
                    }
                } else {
                    if (input[8] < 271.7) {
                        if (input[18] < 109.0) {
                            var54 = 0.013731656;
                        } else {
                            var54 = 0.0011219145;
                        }
                    } else {
                        if (input[18] < 119.0) {
                            var54 = -0.034366254;
                        } else {
                            var54 = -0.0044532665;
                        }
                    }
                }
            }
        }
    }
    double var55;
    if (input[9] < 177.0) {
        if (input[9] < 176.0) {
            if (input[8] < 150.6) {
                if (input[17] < 1.0) {
                    if (input[13] < 2.0) {
                        if (input[5] < 23.04) {
                            var55 = 0.020220054;
                        } else {
                            var55 = -0.028112397;
                        }
                    } else {
                        if (input[18] < 161.0) {
                            var55 = -0.00096803665;
                        } else {
                            var55 = 0.047770496;
                        }
                    }
                } else {
                    if (input[11] < 1.0) {
                        if (input[5] < 17.21) {
                            var55 = -0.013424088;
                        } else {
                            var55 = -0.06787788;
                        }
                    } else {
                        var55 = 0.0008702906;
                    }
                }
            } else {
                if (input[5] < 15.68) {
                    if (input[0] < 72.0) {
                        if (input[5] < 15.57) {
                            var55 = 0.0017066626;
                        } else {
                            var55 = 0.020847287;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var55 = 0.02606015;
                        } else {
                            var55 = -0.0042561884;
                        }
                    }
                } else {
                    if (input[5] < 16.07) {
                        if (input[8] < 169.5) {
                            var55 = -0.02628981;
                        } else {
                            var55 = 0.00170671;
                        }
                    } else {
                        if (input[8] < 165.4) {
                            var55 = 0.0063783783;
                        } else {
                            var55 = 0.004110278;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 203.9) {
                if (input[8] < 190.0) {
                    if (input[8] < 184.2) {
                        if (input[18] < 155.0) {
                            var55 = 0.04131354;
                        } else {
                            var55 = 0.0010578864;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var55 = -0.05616538;
                        } else {
                            var55 = 0.062982894;
                        }
                    }
                } else {
                    if (input[16] < 1.0) {
                        if (input[2] < 1.0) {
                            var55 = 0.08562941;
                        } else {
                            var55 = 0.018146096;
                        }
                    } else {
                        if (input[8] < 200.7) {
                            var55 = 0.012692615;
                        } else {
                            var55 = 0.07725953;
                        }
                    }
                }
            } else {
                if (input[6] < 1.0) {
                    if (input[18] < 165.0) {
                        if (input[8] < 253.2) {
                            var55 = -0.036110997;
                        } else {
                            var55 = 0.011577107;
                        }
                    } else {
                        if (input[8] < 238.6) {
                            var55 = 0.035324555;
                        } else {
                            var55 = -0.006481795;
                        }
                    }
                } else {
                    if (input[8] < 215.2) {
                        var55 = -0.06682121;
                    } else {
                        if (input[1] < 1.0) {
                            var55 = 0.07245218;
                        } else {
                            var55 = 0.018570276;
                        }
                    }
                }
            }
        }
    } else {
        if (input[0] < 58.0) {
            if (input[10] < 68.0) {
                if (input[16] < 2.0) {
                    if (input[14] < 2.0) {
                        if (input[15] < 1.0) {
                            var55 = 0.07206509;
                        } else {
                            var55 = -0.00283651;
                        }
                    } else {
                        if (input[5] < 20.19) {
                            var55 = -0.05019482;
                        } else {
                            var55 = 0.030411426;
                        }
                    }
                } else {
                    if (input[8] < 210.4) {
                        if (input[10] < 65.0) {
                            var55 = -0.0067133554;
                        } else {
                            var55 = -0.06111712;
                        }
                    } else {
                        if (input[8] < 251.4) {
                            var55 = 0.072876744;
                        } else {
                            var55 = -0.015304458;
                        }
                    }
                }
            } else {
                if (input[9] < 179.0) {
                    if (input[18] < 183.0) {
                        if (input[10] < 105.0) {
                            var55 = -0.0047674235;
                        } else {
                            var55 = 0.017398478;
                        }
                    } else {
                        if (input[10] < 103.0) {
                            var55 = 0.05968469;
                        } else {
                            var55 = -0.0011899323;
                        }
                    }
                } else {
                    if (input[18] < 105.0) {
                        if (input[16] < 2.0) {
                            var55 = 0.0602111;
                        } else {
                            var55 = -0.015072479;
                        }
                    } else {
                        if (input[8] < 271.1) {
                            var55 = -0.006022016;
                        } else {
                            var55 = -0.047260124;
                        }
                    }
                }
            }
        } else {
            if (input[13] < 2.0) {
                if (input[18] < 181.0) {
                    if (input[4] < 1.0) {
                        if (input[5] < 34.96) {
                            var55 = -0.0480226;
                        } else {
                            var55 = 0.03837484;
                        }
                    } else {
                        if (input[9] < 179.0) {
                            var55 = -0.009215939;
                        } else {
                            var55 = 0.021004045;
                        }
                    }
                } else {
                    if (input[0] < 86.0) {
                        if (input[5] < 34.77) {
                            var55 = 0.061323877;
                        } else {
                            var55 = -0.002812446;
                        }
                    } else {
                        if (input[4] < 2.0) {
                            var55 = 0.0048616985;
                        } else {
                            var55 = -0.06521889;
                        }
                    }
                }
            } else {
                if (input[18] < 181.0) {
                    if (input[8] < 238.0) {
                        if (input[8] < 205.0) {
                            var55 = -0.0031315524;
                        } else {
                            var55 = -0.04014231;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var55 = 0.039305765;
                        } else {
                            var55 = -0.011972478;
                        }
                    }
                } else {
                    if (input[10] < 103.0) {
                        if (input[18] < 189.0) {
                            var55 = -0.07705519;
                        } else {
                            var55 = -0.0075071403;
                        }
                    } else {
                        var55 = -0.08420264;
                    }
                }
            }
        }
    }
    double var56;
    if (input[5] < 36.72) {
        if (input[5] < 36.62) {
            if (input[12] < 2.0) {
                if (input[1] < 1.0) {
                    if (input[18] < 103.0) {
                        if (input[10] < 93.0) {
                            var56 = -0.02629075;
                        } else {
                            var56 = 0.0033300535;
                        }
                    } else {
                        if (input[8] < 215.8) {
                            var56 = -0.0006181601;
                        } else {
                            var56 = 0.0037903;
                        }
                    }
                } else {
                    if (input[8] < 237.4) {
                        if (input[18] < 124.0) {
                            var56 = 0.012054137;
                        } else {
                            var56 = 0.0047290986;
                        }
                    } else {
                        if (input[10] < 108.0) {
                            var56 = -0.0017061196;
                        } else {
                            var56 = 0.009122766;
                        }
                    }
                }
            } else {
                if (input[4] < 2.0) {
                    if (input[11] < 1.0) {
                        if (input[2] < 1.0) {
                            var56 = 0.0036303082;
                        } else {
                            var56 = -0.0017085597;
                        }
                    } else {
                        if (input[5] < 16.07) {
                            var56 = -0.013537236;
                        } else {
                            var56 = 0.0077482783;
                        }
                    }
                } else {
                    if (input[9] < 129.0) {
                        if (input[8] < 164.8) {
                            var56 = -0.012821234;
                        } else {
                            var56 = 0.0044810628;
                        }
                    } else {
                        if (input[18] < 102.0) {
                            var56 = 0.041284118;
                        } else {
                            var56 = 0.008426412;
                        }
                    }
                }
            }
        } else {
            if (input[10] < 83.0) {
                if (input[18] < 171.0) {
                    if (input[8] < 238.0) {
                        if (input[0] < 40.0) {
                            var56 = 0.006459457;
                        } else {
                            var56 = -0.07087081;
                        }
                    } else {
                        if (input[9] < 127.0) {
                            var56 = 0.079705626;
                        } else {
                            var56 = -0.017557023;
                        }
                    }
                } else {
                    if (input[17] < 1.0) {
                        var56 = 0.08499452;
                    } else {
                        var56 = 0.017563095;
                    }
                }
            } else {
                if (input[14] < 2.0) {
                    if (input[13] < 3.0) {
                        if (input[13] < 2.0) {
                            var56 = 0.004289459;
                        } else {
                            var56 = -0.045306;
                        }
                    } else {
                        if (input[4] < 2.0) {
                            var56 = 0.06277501;
                        } else {
                            var56 = 0.0030975756;
                        }
                    }
                } else {
                    if (input[9] < 122.0) {
                        if (input[9] < 104.0) {
                            var56 = -0.044553738;
                        } else {
                            var56 = 0.029054051;
                        }
                    } else {
                        if (input[10] < 111.0) {
                            var56 = -0.07500818;
                        } else {
                            var56 = -0.020719234;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 37.19) {
            if (input[8] < 193.1) {
                if (input[18] < 118.0) {
                    if (input[16] < 2.0) {
                        if (input[9] < 129.0) {
                            var56 = 0.03757464;
                        } else {
                            var56 = -0.034316618;
                        }
                    } else {
                        if (input[18] < 105.0) {
                            var56 = 0.024773575;
                        } else {
                            var56 = -0.08104002;
                        }
                    }
                } else {
                    if (input[12] < 2.0) {
                        if (input[10] < 103.0) {
                            var56 = 0.006920607;
                        } else {
                            var56 = 0.07720595;
                        }
                    } else {
                        if (input[17] < 1.0) {
                            var56 = -0.012770462;
                        } else {
                            var56 = 0.032109674;
                        }
                    }
                }
            } else {
                if (input[0] < 30.0) {
                    if (input[6] < 1.0) {
                        if (input[18] < 123.0) {
                            var56 = 0.066664115;
                        } else {
                            var56 = -0.0025800932;
                        }
                    } else {
                        if (input[0] < 22.0) {
                            var56 = 0.036052033;
                        } else {
                            var56 = -0.0628787;
                        }
                    }
                } else {
                    if (input[4] < 1.0) {
                        if (input[16] < 2.0) {
                            var56 = 0.06092292;
                        } else {
                            var56 = 0.0040702075;
                        }
                    } else {
                        if (input[18] < 123.0) {
                            var56 = -0.003440582;
                        } else {
                            var56 = 0.026480267;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 92.0) {
                if (input[18] < 180.0) {
                    if (input[0] < 51.0) {
                        if (input[5] < 37.97) {
                            var56 = 0.05847327;
                        } else {
                            var56 = -0.015838336;
                        }
                    } else {
                        if (input[0] < 85.0) {
                            var56 = 0.0649728;
                        } else {
                            var56 = -0.030802397;
                        }
                    }
                } else {
                    if (input[5] < 37.41) {
                        var56 = 0.063216;
                    } else {
                        if (input[5] < 39.62) {
                            var56 = -0.066223495;
                        } else {
                            var56 = 0.020432843;
                        }
                    }
                }
            } else {
                if (input[3] < 1.0) {
                    if (input[9] < 151.0) {
                        if (input[0] < 28.0) {
                            var56 = 0.010815129;
                        } else {
                            var56 = -0.0053565013;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var56 = 0.015101475;
                        } else {
                            var56 = -0.006347589;
                        }
                    }
                } else {
                    if (input[13] < 2.0) {
                        if (input[9] < 166.0) {
                            var56 = 0.017601887;
                        } else {
                            var56 = -0.009417726;
                        }
                    } else {
                        if (input[0] < 75.0) {
                            var56 = 0.00524304;
                        } else {
                            var56 = -0.015504922;
                        }
                    }
                }
            }
        }
    }
    double var57;
    if (input[18] < 101.0) {
        if (input[15] < 1.0) {
            if (input[10] < 124.0) {
                if (input[12] < 2.0) {
                    if (input[9] < 124.0) {
                        if (input[10] < 90.0) {
                            var57 = -0.0007957492;
                        } else {
                            var57 = -0.04287924;
                        }
                    } else {
                        if (input[10] < 116.0) {
                            var57 = -0.003063937;
                        } else {
                            var57 = 0.06292414;
                        }
                    }
                } else {
                    if (input[10] < 82.0) {
                        if (input[0] < 47.0) {
                            var57 = -0.03469999;
                        } else {
                            var57 = 0.016890964;
                        }
                    } else {
                        if (input[6] < 1.0) {
                            var57 = 0.029314596;
                        } else {
                            var57 = -0.009181238;
                        }
                    }
                }
            } else {
                if (input[14] < 2.0) {
                    if (input[8] < 265.9) {
                        var57 = -0.06927771;
                    } else {
                        var57 = 0.008898909;
                    }
                } else {
                    if (input[7] < 1.0) {
                        var57 = -0.015862286;
                    } else {
                        var57 = 0.057940867;
                    }
                }
            }
        } else {
            if (input[8] < 196.5) {
                if (input[0] < 39.0) {
                    var57 = -0.03620484;
                } else {
                    var57 = 0.061887532;
                }
            } else {
                if (input[9] < 98.0) {
                    var57 = 0.015115306;
                } else {
                    if (input[8] < 288.9) {
                        if (input[10] < 119.0) {
                            var57 = -0.06414936;
                        } else {
                            var57 = -0.009886035;
                        }
                    } else {
                        var57 = -0.001637949;
                    }
                }
            }
        }
    } else {
        if (input[18] < 124.0) {
            if (input[10] < 120.0) {
                if (input[10] < 115.0) {
                    if (input[18] < 120.0) {
                        if (input[4] < 2.0) {
                            var57 = 0.006195911;
                        } else {
                            var57 = -0.000079441656;
                        }
                    } else {
                        if (input[0] < 66.0) {
                            var57 = 0.0056314208;
                        } else {
                            var57 = 0.020133702;
                        }
                    }
                } else {
                    if (input[5] < 22.44) {
                        if (input[9] < 155.0) {
                            var57 = 0.00052385003;
                        } else {
                            var57 = 0.054434836;
                        }
                    } else {
                        if (input[8] < 186.5) {
                            var57 = -0.03438543;
                        } else {
                            var57 = -0.0062046247;
                        }
                    }
                }
            } else {
                if (input[5] < 31.1) {
                    if (input[9] < 108.0) {
                        if (input[8] < 205.7) {
                            var57 = 0.009204466;
                        } else {
                            var57 = -0.02570035;
                        }
                    } else {
                        if (input[9] < 124.0) {
                            var57 = 0.028997177;
                        } else {
                            var57 = 0.0024887193;
                        }
                    }
                } else {
                    if (input[0] < 85.0) {
                        if (input[13] < 2.0) {
                            var57 = 0.029412944;
                        } else {
                            var57 = 0.01058185;
                        }
                    } else {
                        if (input[9] < 139.0) {
                            var57 = 0.017674735;
                        } else {
                            var57 = -0.051673885;
                        }
                    }
                }
            }
        } else {
            if (input[18] < 128.0) {
                if (input[9] < 168.0) {
                    if (input[5] < 31.3) {
                        if (input[8] < 162.5) {
                            var57 = -0.02582228;
                        } else {
                            var57 = -0.00029276928;
                        }
                    } else {
                        if (input[8] < 181.5) {
                            var57 = 0.026202982;
                        } else {
                            var57 = 0.0053747147;
                        }
                    }
                } else {
                    if (input[12] < 1.0) {
                        if (input[8] < 285.9) {
                            var57 = -0.055688795;
                        } else {
                            var57 = 0.009127482;
                        }
                    } else {
                        if (input[0] < 87.0) {
                            var57 = -0.0013213854;
                        } else {
                            var57 = -0.07456299;
                        }
                    }
                }
            } else {
                if (input[4] < 1.0) {
                    if (input[8] < 153.0) {
                        if (input[0] < 26.0) {
                            var57 = -0.019407287;
                        } else {
                            var57 = 0.040114563;
                        }
                    } else {
                        if (input[10] < 88.0) {
                            var57 = 0.009263328;
                        } else {
                            var57 = 0.0022117225;
                        }
                    }
                } else {
                    if (input[9] < 133.0) {
                        if (input[5] < 39.05) {
                            var57 = 0.0016346902;
                        } else {
                            var57 = 0.012433072;
                        }
                    } else {
                        if (input[5] < 39.9) {
                            var57 = 0.004166844;
                        } else {
                            var57 = -0.026944323;
                        }
                    }
                }
            }
        }
    }
    double var58;
    if (input[10] < 61.0) {
        if (input[5] < 16.07) {
            if (input[18] < 163.0) {
                var58 = -0.076918446;
            } else {
                if (input[4] < 2.0) {
                    var58 = 0.06752617;
                } else {
                    var58 = -0.054261517;
                }
            }
        } else {
            if (input[5] < 17.13) {
                if (input[12] < 1.0) {
                    var58 = -0.016122479;
                } else {
                    if (input[0] < 78.0) {
                        var58 = 0.07656869;
                    } else {
                        if (input[8] < 190.0) {
                            var58 = -0.0173792;
                        } else {
                            var58 = 0.055281788;
                        }
                    }
                }
            } else {
                if (input[18] < 110.0) {
                    if (input[11] < 1.0) {
                        if (input[9] < 159.0) {
                            var58 = 0.016519552;
                        } else {
                            var58 = -0.059143513;
                        }
                    } else {
                        if (input[8] < 246.2) {
                            var58 = -0.069333084;
                        } else {
                            var58 = -0.01379211;
                        }
                    }
                } else {
                    if (input[18] < 117.0) {
                        if (input[5] < 19.04) {
                            var58 = -0.057567548;
                        } else {
                            var58 = 0.03828541;
                        }
                    } else {
                        if (input[18] < 120.0) {
                            var58 = -0.047377445;
                        } else {
                            var58 = 0.00088357175;
                        }
                    }
                }
            }
        }
    } else {
        if (input[6] < 1.0) {
            if (input[5] < 38.06) {
                if (input[5] < 36.72) {
                    if (input[18] < 109.0) {
                        if (input[9] < 168.0) {
                            var58 = 0.0046960018;
                        } else {
                            var58 = 0.020844394;
                        }
                    } else {
                        if (input[5] < 36.62) {
                            var58 = 0.0032323839;
                        } else {
                            var58 = -0.009509227;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[8] < 192.0) {
                            var58 = 0.0047702305;
                        } else {
                            var58 = 0.017698264;
                        }
                    } else {
                        if (input[8] < 240.4) {
                            var58 = 0.009978369;
                        } else {
                            var58 = -0.012318422;
                        }
                    }
                }
            } else {
                if (input[18] < 121.0) {
                    if (input[18] < 113.0) {
                        if (input[3] < 1.0) {
                            var58 = -0.009673508;
                        } else {
                            var58 = 0.015593881;
                        }
                    } else {
                        if (input[5] < 38.24) {
                            var58 = -0.04658427;
                        } else {
                            var58 = 0.026513329;
                        }
                    }
                } else {
                    if (input[16] < 2.0) {
                        if (input[9] < 93.0) {
                            var58 = 0.03530152;
                        } else {
                            var58 = -0.004982349;
                        }
                    } else {
                        if (input[10] < 125.0) {
                            var58 = 0.0067182006;
                        } else {
                            var58 = -0.031659473;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 38.16) {
                if (input[5] < 31.89) {
                    if (input[8] < 282.5) {
                        if (input[8] < 272.3) {
                            var58 = 0.0028218892;
                        } else {
                            var58 = -0.0074177976;
                        }
                    } else {
                        if (input[9] < 147.0) {
                            var58 = 0.020014899;
                        } else {
                            var58 = -0.0029726482;
                        }
                    }
                } else {
                    if (input[5] < 31.99) {
                        if (input[10] < 123.0) {
                            var58 = -0.0468211;
                        } else {
                            var58 = 0.037721515;
                        }
                    } else {
                        if (input[0] < 22.0) {
                            var58 = 0.016838107;
                        } else {
                            var58 = -0.0028288628;
                        }
                    }
                }
            } else {
                if (input[18] < 111.0) {
                    if (input[0] < 83.0) {
                        if (input[8] < 262.7) {
                            var58 = -0.042170856;
                        } else {
                            var58 = 0.014935221;
                        }
                    } else {
                        if (input[13] < 2.0) {
                            var58 = -0.0013514727;
                        } else {
                            var58 = 0.06619251;
                        }
                    }
                } else {
                    if (input[18] < 113.0) {
                        if (input[0] < 37.0) {
                            var58 = 0.012770566;
                        } else {
                            var58 = 0.0795768;
                        }
                    } else {
                        if (input[0] < 87.0) {
                            var58 = 0.011792133;
                        } else {
                            var58 = -0.026491532;
                        }
                    }
                }
            }
        }
    }
    double var59;
    if (input[18] < 101.0) {
        if (input[0] < 34.0) {
            if (input[17] < 1.0) {
                if (input[16] < 1.0) {
                    if (input[5] < 19.97) {
                        if (input[4] < 2.0) {
                            var59 = -0.042857148;
                        } else {
                            var59 = 0.04285714;
                        }
                    } else {
                        if (input[5] < 34.18) {
                            var59 = 0.12923078;
                        } else {
                            var59 = -0.0000000032511627;
                        }
                    }
                } else {
                    if (input[14] < 2.0) {
                        if (input[13] < 3.0) {
                            var59 = 0.069230765;
                        } else {
                            var59 = -0.015789477;
                        }
                    } else {
                        if (input[9] < 113.0) {
                            var59 = 0.023999998;
                        } else {
                            var59 = -0.03692308;
                        }
                    }
                }
            } else {
                if (input[9] < 102.0) {
                    var59 = 0.06;
                } else {
                    if (input[5] < 22.24) {
                        var59 = 0.010344825;
                    } else {
                        var59 = -0.062264156;
                    }
                }
            }
        } else {
            if (input[14] < 1.0) {
                if (input[10] < 62.0) {
                    var59 = 0.06;
                } else {
                    if (input[8] < 215.8) {
                        if (input[5] < 16.95) {
                            var59 = -0.0000000025544848;
                        } else {
                            var59 = -0.06496816;
                        }
                    } else {
                        if (input[8] < 267.6) {
                            var59 = 0.004511274;
                        } else {
                            var59 = -0.054545462;
                        }
                    }
                }
            } else {
                if (input[16] < 1.0) {
                    if (input[10] < 91.0) {
                        if (input[0] < 80.0) {
                            var59 = 0.09896907;
                        } else {
                            var59 = -0.012000003;
                        }
                    } else {
                        if (input[11] < 1.0) {
                            var59 = -0.022222226;
                        } else {
                            var59 = 0.04736842;
                        }
                    }
                } else {
                    if (input[10] < 121.0) {
                        if (input[5] < 36.16) {
                            var59 = -0.024705887;
                        } else {
                            var59 = 0.05660377;
                        }
                    } else {
                        if (input[4] < 2.0) {
                            var59 = 0.08571429;
                        } else {
                            var59 = -0.0000000032511627;
                        }
                    }
                }
            }
        }
    } else {
        if (input[18] < 171.0) {
            if (input[9] < 179.0) {
                if (input[9] < 142.0) {
                    if (input[8] < 239.2) {
                        if (input[9] < 135.0) {
                            var59 = -0.009726094;
                        } else {
                            var59 = -0.00021501971;
                        }
                    } else {
                        if (input[8] < 247.4) {
                            var59 = 0.005774054;
                        } else {
                            var59 = -0.0059398315;
                        }
                    }
                } else {
                    if (input[8] < 244.0) {
                        if (input[9] < 174.0) {
                            var59 = -0.008291733;
                        } else {
                            var59 = 0.0005711133;
                        }
                    } else {
                        if (input[8] < 271.7) {
                            var59 = -0.01637079;
                        } else {
                            var59 = -0.0077506076;
                        }
                    }
                }
            } else {
                if (input[18] < 117.0) {
                    if (input[10] < 70.0) {
                        if (input[18] < 107.0) {
                            var59 = 0.06486487;
                        } else {
                            var59 = -0.032432437;
                        }
                    } else {
                        if (input[10] < 94.0) {
                            var59 = -0.06705883;
                        } else {
                            var59 = -0.008670525;
                        }
                    }
                } else {
                    if (input[8] < 218.1) {
                        if (input[0] < 24.0) {
                            var59 = 0.107547164;
                        } else {
                            var59 = 0.023324393;
                        }
                    } else {
                        if (input[8] < 296.4) {
                            var59 = -0.010503287;
                        } else {
                            var59 = 0.096;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 20.96) {
                if (input[18] < 197.0) {
                    if (input[10] < 70.0) {
                        if (input[0] < 23.0) {
                            var59 = -0.039669428;
                        } else {
                            var59 = 0.011564118;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var59 = -0.0019914142;
                        } else {
                            var59 = -0.011317723;
                        }
                    }
                } else {
                    if (input[9] < 97.0) {
                        if (input[12] < 2.0) {
                            var59 = -0.06393444;
                        } else {
                            var59 = -0.01463415;
                        }
                    } else {
                        if (input[12] < 2.0) {
                            var59 = 0.002097898;
                        } else {
                            var59 = 0.033056132;
                        }
                    }
                }
            } else {
                if (input[8] < 172.3) {
                    if (input[14] < 2.0) {
                        if (input[5] < 39.62) {
                            var59 = -0.014959208;
                        } else {
                            var59 = 0.045205478;
                        }
                    } else {
                        if (input[18] < 199.0) {
                            var59 = -0.030052423;
                        } else {
                            var59 = 0.032307692;
                        }
                    }
                } else {
                    if (input[9] < 169.0) {
                        if (input[0] < 79.0) {
                            var59 = -0.007963539;
                        } else {
                            var59 = -0.016933644;
                        }
                    } else {
                        if (input[0] < 58.0) {
                            var59 = -0.024420261;
                        } else {
                            var59 = -0.0059034037;
                        }
                    }
                }
            }
        }
    }
    double var60;
    if (input[18] < 101.0) {
        if (input[0] < 34.0) {
            if (input[17] < 1.0) {
                if (input[16] < 1.0) {
                    if (input[5] < 19.97) {
                        if (input[5] < 17.72) {
                            var60 = 0.04141838;
                        } else {
                            var60 = -0.04326273;
                        }
                    } else {
                        if (input[5] < 34.18) {
                            var60 = 0.11767226;
                        } else {
                            var60 = -0.00018015072;
                        }
                    }
                } else {
                    if (input[14] < 2.0) {
                        if (input[13] < 3.0) {
                            var60 = 0.06353455;
                        } else {
                            var60 = -0.015461928;
                        }
                    } else {
                        if (input[9] < 113.0) {
                            var60 = 0.023253394;
                        } else {
                            var60 = -0.035842925;
                        }
                    }
                }
            } else {
                if (input[9] < 102.0) {
                    var60 = 0.056734312;
                } else {
                    if (input[9] < 159.0) {
                        var60 = -0.06147353;
                    } else {
                        var60 = 0.010968617;
                    }
                }
            }
        } else {
            if (input[14] < 1.0) {
                if (input[10] < 62.0) {
                    var60 = 0.058122247;
                } else {
                    if (input[8] < 215.8) {
                        if (input[10] < 115.0) {
                            var60 = -0.0631667;
                        } else {
                            var60 = 0.0015610656;
                        }
                    } else {
                        if (input[8] < 267.6) {
                            var60 = 0.0040192953;
                        } else {
                            var60 = -0.052954584;
                        }
                    }
                }
            } else {
                if (input[16] < 1.0) {
                    if (input[10] < 91.0) {
                        if (input[0] < 80.0) {
                            var60 = 0.09082007;
                        } else {
                            var60 = -0.011781015;
                        }
                    } else {
                        if (input[11] < 1.0) {
                            var60 = -0.021584906;
                        } else {
                            var60 = 0.044543162;
                        }
                    }
                } else {
                    if (input[10] < 121.0) {
                        if (input[5] < 36.16) {
                            var60 = -0.023756057;
                        } else {
                            var60 = 0.052934676;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var60 = 0.074250445;
                        } else {
                            var60 = -0.013664441;
                        }
                    }
                }
            }
        }
    } else {
        if (input[18] < 171.0) {
            if (input[9] < 179.0) {
                if (input[9] < 142.0) {
                    if (input[8] < 239.2) {
                        if (input[9] < 135.0) {
                            var60 = -0.009059198;
                        } else {
                            var60 = -0.000015941565;
                        }
                    } else {
                        if (input[8] < 247.4) {
                            var60 = 0.005703162;
                        } else {
                            var60 = -0.0054122335;
                        }
                    }
                } else {
                    if (input[8] < 245.1) {
                        if (input[10] < 61.0) {
                            var60 = 0.016939856;
                        } else {
                            var60 = -0.0069941296;
                        }
                    } else {
                        if (input[8] < 271.7) {
                            var60 = -0.015734186;
                        } else {
                            var60 = -0.00709256;
                        }
                    }
                }
            } else {
                if (input[18] < 117.0) {
                    if (input[8] < 207.4) {
                        if (input[10] < 115.0) {
                            var60 = -0.051519144;
                        } else {
                            var60 = 0.010907388;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var60 = -0.033048347;
                        } else {
                            var60 = 0.03480407;
                        }
                    }
                } else {
                    if (input[8] < 218.1) {
                        if (input[0] < 31.0) {
                            var60 = 0.0887949;
                        } else {
                            var60 = 0.020116668;
                        }
                    } else {
                        if (input[1] < 1.0) {
                            var60 = 0.017031992;
                        } else {
                            var60 = -0.028340021;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 20.96) {
                if (input[10] < 70.0) {
                    if (input[0] < 23.0) {
                        if (input[8] < 184.2) {
                            var60 = 0.017817209;
                        } else {
                            var60 = -0.049184453;
                        }
                    } else {
                        if (input[0] < 84.0) {
                            var60 = 0.015559301;
                        } else {
                            var60 = -0.0323346;
                        }
                    }
                } else {
                    if (input[18] < 197.0) {
                        if (input[14] < 1.0) {
                            var60 = -0.001625106;
                        } else {
                            var60 = -0.010519444;
                        }
                    } else {
                        if (input[12] < 2.0) {
                            var60 = -0.010411628;
                        } else {
                            var60 = 0.029930172;
                        }
                    }
                }
            } else {
                if (input[8] < 170.1) {
                    if (input[0] < 69.0) {
                        if (input[0] < 48.0) {
                            var60 = -0.014845303;
                        } else {
                            var60 = -0.033028;
                        }
                    } else {
                        if (input[10] < 79.0) {
                            var60 = -0.033137266;
                        } else {
                            var60 = 0.0017941603;
                        }
                    }
                } else {
                    if (input[0] < 23.0) {
                        if (input[8] < 279.5) {
                            var60 = -0.014802644;
                        } else {
                            var60 = -0.036805186;
                        }
                    } else {
                        if (input[5] < 22.02) {
                            var60 = -0.019026564;
                        } else {
                            var60 = -0.008257548;
                        }
                    }
                }
            }
        }
    }
    double var61;
    if (input[18] < 101.0) {
        if (input[0] < 34.0) {
            if (input[17] < 1.0) {
                if (input[8] < 176.9) {
                    if (input[9] < 101.0) {
                        var61 = 0.0921035;
                    } else {
                        if (input[9] < 165.0) {
                            var61 = -0.064809844;
                        } else {
                            var61 = 0.07555497;
                        }
                    }
                } else {
                    if (input[9] < 95.0) {
                        var61 = -0.047855504;
                    } else {
                        if (input[3] < 1.0) {
                            var61 = 0.073834024;
                        } else {
                            var61 = 0.028752003;
                        }
                    }
                }
            } else {
                if (input[9] < 102.0) {
                    var61 = 0.053451903;
                } else {
                    if (input[9] < 159.0) {
                        var61 = -0.060204405;
                    } else {
                        var61 = 0.010002059;
                    }
                }
            }
        } else {
            if (input[14] < 1.0) {
                if (input[10] < 62.0) {
                    var61 = 0.056047928;
                } else {
                    if (input[8] < 235.0) {
                        if (input[10] < 94.0) {
                            var61 = -0.066058405;
                        } else {
                            var61 = -0.032878242;
                        }
                    } else {
                        if (input[8] < 267.6) {
                            var61 = 0.038772237;
                        } else {
                            var61 = -0.051568396;
                        }
                    }
                }
            } else {
                if (input[16] < 1.0) {
                    if (input[11] < 1.0) {
                        if (input[6] < 1.0) {
                            var61 = -0.007425657;
                        } else {
                            var61 = 0.07525576;
                        }
                    } else {
                        if (input[10] < 126.0) {
                            var61 = 0.09962872;
                        } else {
                            var61 = -0.044587657;
                        }
                    }
                } else {
                    if (input[10] < 120.0) {
                        if (input[5] < 36.16) {
                            var61 = -0.025174115;
                        } else {
                            var61 = 0.060781;
                        }
                    } else {
                        if (input[1] < 1.0) {
                            var61 = 0.0749781;
                        } else {
                            var61 = 0.011360187;
                        }
                    }
                }
            }
        }
    } else {
        if (input[18] < 171.0) {
            if (input[9] < 179.0) {
                if (input[18] < 138.0) {
                    if (input[14] < 1.0) {
                        if (input[18] < 129.0) {
                            var61 = -0.008062439;
                        } else {
                            var61 = -0.019130608;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var61 = -0.0034068492;
                        } else {
                            var61 = -0.008420238;
                        }
                    }
                } else {
                    if (input[10] < 76.0) {
                        if (input[0] < 20.0) {
                            var61 = -0.036037233;
                        } else {
                            var61 = -0.001122921;
                        }
                    } else {
                        if (input[0] < 45.0) {
                            var61 = -0.0028209626;
                        } else {
                            var61 = -0.008614783;
                        }
                    }
                }
            } else {
                if (input[18] < 117.0) {
                    if (input[8] < 207.4) {
                        if (input[10] < 115.0) {
                            var61 = -0.049726732;
                        } else {
                            var61 = 0.010695292;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var61 = -0.031348765;
                        } else {
                            var61 = 0.033078253;
                        }
                    }
                } else {
                    if (input[8] < 218.1) {
                        if (input[0] < 24.0) {
                            var61 = 0.094147325;
                        } else {
                            var61 = 0.021339608;
                        }
                    } else {
                        if (input[8] < 296.4) {
                            var61 = -0.009235615;
                        } else {
                            var61 = 0.0902441;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 20.96) {
                if (input[18] < 197.0) {
                    if (input[10] < 70.0) {
                        if (input[0] < 23.0) {
                            var61 = -0.03678107;
                        } else {
                            var61 = 0.010781254;
                        }
                    } else {
                        if (input[13] < 2.0) {
                            var61 = -0.01133602;
                        } else {
                            var61 = -0.00310056;
                        }
                    }
                } else {
                    if (input[9] < 97.0) {
                        if (input[12] < 2.0) {
                            var61 = -0.06196872;
                        } else {
                            var61 = -0.0146734;
                        }
                    } else {
                        if (input[0] < 26.0) {
                            var61 = -0.022371167;
                        } else {
                            var61 = 0.022674305;
                        }
                    }
                }
            } else {
                if (input[8] < 172.3) {
                    if (input[14] < 2.0) {
                        if (input[5] < 39.62) {
                            var61 = -0.012994252;
                        } else {
                            var61 = 0.044405527;
                        }
                    } else {
                        if (input[18] < 199.0) {
                            var61 = -0.027761817;
                        } else {
                            var61 = 0.031669926;
                        }
                    }
                } else {
                    if (input[9] < 169.0) {
                        if (input[0] < 79.0) {
                            var61 = -0.0066966102;
                        } else {
                            var61 = -0.015349172;
                        }
                    } else {
                        if (input[0] < 58.0) {
                            var61 = -0.022498148;
                        } else {
                            var61 = -0.004585284;
                        }
                    }
                }
            }
        }
    }
    double var62;
    if (input[18] < 101.0) {
        if (input[0] < 43.0) {
            if (input[16] < 1.0) {
                if (input[5] < 28.86) {
                    if (input[5] < 19.97) {
                        if (input[4] < 2.0) {
                            var62 = -0.04284457;
                        } else {
                            var62 = 0.035839822;
                        }
                    } else {
                        if (input[10] < 113.0) {
                            var62 = 0.10900321;
                        } else {
                            var62 = 0.03311119;
                        }
                    }
                } else {
                    if (input[8] < 226.1) {
                        if (input[9] < 101.0) {
                            var62 = -0.006275747;
                        } else {
                            var62 = 0.07714709;
                        }
                    } else {
                        if (input[0] < 37.0) {
                            var62 = -0.044652868;
                        } else {
                            var62 = 0.035722554;
                        }
                    }
                }
            } else {
                if (input[5] < 37.88) {
                    if (input[14] < 2.0) {
                        if (input[12] < 1.0) {
                            var62 = -0.029444588;
                        } else {
                            var62 = 0.021631522;
                        }
                    } else {
                        if (input[0] < 41.0) {
                            var62 = -0.034992557;
                        } else {
                            var62 = 0.044250485;
                        }
                    }
                } else {
                    var62 = 0.07430389;
                }
            }
        } else {
            if (input[14] < 1.0) {
                if (input[4] < 1.0) {
                    if (input[3] < 1.0) {
                        if (input[9] < 163.0) {
                            var62 = -0.055411495;
                        } else {
                            var62 = 0.026497737;
                        }
                    } else {
                        var62 = 0.08000396;
                    }
                } else {
                    if (input[8] < 217.5) {
                        if (input[5] < 16.56) {
                            var62 = 0.0007353164;
                        } else {
                            var62 = -0.06521196;
                        }
                    } else {
                        if (input[8] < 267.6) {
                            var62 = 0.01855972;
                        } else {
                            var62 = -0.060809236;
                        }
                    }
                }
            } else {
                if (input[5] < 36.36) {
                    if (input[11] < 1.0) {
                        if (input[0] < 78.0) {
                            var62 = -0.0015465041;
                        } else {
                            var62 = -0.052254517;
                        }
                    } else {
                        if (input[5] < 19.04) {
                            var62 = 0.09489902;
                        } else {
                            var62 = 0.0036352742;
                        }
                    }
                } else {
                    if (input[4] < 1.0) {
                        var62 = -0.049585756;
                    } else {
                        if (input[9] < 99.0) {
                            var62 = -0.0011072943;
                        } else {
                            var62 = 0.08779531;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 20.19) {
            if (input[18] < 194.0) {
                if (input[14] < 2.0) {
                    if (input[10] < 80.0) {
                        if (input[7] < 1.0) {
                            var62 = -0.005557953;
                        } else {
                            var62 = 0.018976651;
                        }
                    } else {
                        if (input[6] < 1.0) {
                            var62 = -0.007079041;
                        } else {
                            var62 = 0.003143821;
                        }
                    }
                } else {
                    if (input[8] < 227.3) {
                        if (input[8] < 196.0) {
                            var62 = -0.006275034;
                        } else {
                            var62 = -0.02499136;
                        }
                    } else {
                        if (input[10] < 113.0) {
                            var62 = -0.008485222;
                        } else {
                            var62 = 0.0051344675;
                        }
                    }
                }
            } else {
                if (input[8] < 157.0) {
                    if (input[3] < 1.0) {
                        if (input[9] < 120.0) {
                            var62 = -0.032514714;
                        } else {
                            var62 = 0.07931377;
                        }
                    } else {
                        var62 = 0.104430795;
                    }
                } else {
                    if (input[8] < 285.9) {
                        if (input[0] < 88.0) {
                            var62 = 0.009230017;
                        } else {
                            var62 = -0.056185167;
                        }
                    } else {
                        if (input[9] < 170.0) {
                            var62 = -0.041480727;
                        } else {
                            var62 = 0.085302226;
                        }
                    }
                }
            }
        } else {
            if (input[18] < 171.0) {
                if (input[14] < 1.0) {
                    if (input[13] < 2.0) {
                        if (input[18] < 135.0) {
                            var62 = -0.009518888;
                        } else {
                            var62 = 0.0007959604;
                        }
                    } else {
                        if (input[10] < 125.0) {
                            var62 = -0.012799482;
                        } else {
                            var62 = 0.0056262133;
                        }
                    }
                } else {
                    if (input[9] < 91.0) {
                        if (input[10] < 64.0) {
                            var62 = 0.06678332;
                        } else {
                            var62 = -0.03309187;
                        }
                    } else {
                        if (input[9] < 179.0) {
                            var62 = -0.0049710977;
                        } else {
                            var62 = 0.01063731;
                        }
                    }
                }
            } else {
                if (input[8] < 168.8) {
                    if (input[3] < 1.0) {
                        if (input[0] < 69.0) {
                            var62 = -0.027543386;
                        } else {
                            var62 = -0.0056581083;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var62 = 0.011143895;
                        } else {
                            var62 = -0.01652467;
                        }
                    }
                } else {
                    if (input[9] < 169.0) {
                        if (input[9] < 166.0) {
                            var62 = -0.007706699;
                        } else {
                            var62 = 0.007985062;
                        }
                    } else {
                        if (input[0] < 58.0) {
                            var62 = -0.021452397;
                        } else {
                            var62 = -0.0056030247;
                        }
                    }
                }
            }
        }
    }
    double var63;
    if (input[10] < 62.0) {
        if (input[8] < 213.4) {
            if (input[8] < 176.3) {
                if (input[9] < 144.0) {
                    if (input[9] < 126.0) {
                        if (input[8] < 163.7) {
                            var63 = 0.047411714;
                        } else {
                            var63 = -0.04455749;
                        }
                    } else {
                        if (input[8] < 174.0) {
                            var63 = -0.052887887;
                        } else {
                            var63 = 0.043827184;
                        }
                    }
                } else {
                    if (input[8] < 168.8) {
                        if (input[9] < 149.0) {
                            var63 = 0.04986499;
                        } else {
                            var63 = -0.02652494;
                        }
                    } else {
                        if (input[5] < 26.53) {
                            var63 = 0.02253831;
                        } else {
                            var63 = 0.11771818;
                        }
                    }
                }
            } else {
                if (input[18] < 136.0) {
                    if (input[0] < 26.0) {
                        if (input[10] < 61.0) {
                            var63 = 0.06698679;
                        } else {
                            var63 = -0.042175993;
                        }
                    } else {
                        if (input[9] < 94.0) {
                            var63 = 0.022031149;
                        } else {
                            var63 = -0.047152646;
                        }
                    }
                } else {
                    if (input[5] < 26.62) {
                        if (input[0] < 33.0) {
                            var63 = 0.061535288;
                        } else {
                            var63 = -0.0058748177;
                        }
                    } else {
                        if (input[8] < 200.2) {
                            var63 = -0.035598874;
                        } else {
                            var63 = 0.0078578;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 217.5) {
                if (input[15] < 1.0) {
                    if (input[0] < 67.0) {
                        if (input[7] < 1.0) {
                            var63 = 0.1019266;
                        } else {
                            var63 = 0.012103715;
                        }
                    } else {
                        var63 = -0.01954413;
                    }
                } else {
                    var63 = -0.047225732;
                }
            } else {
                if (input[14] < 1.0) {
                    if (input[9] < 95.0) {
                        if (input[5] < 32.68) {
                            var63 = 0.102535956;
                        } else {
                            var63 = -0.010695303;
                        }
                    } else {
                        if (input[9] < 103.0) {
                            var63 = -0.057552643;
                        } else {
                            var63 = -0.008667434;
                        }
                    }
                } else {
                    if (input[8] < 258.5) {
                        if (input[5] < 28.59) {
                            var63 = -0.015827928;
                        } else {
                            var63 = 0.024635674;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var63 = 0.03875391;
                        } else {
                            var63 = -0.0047000935;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 64.0) {
            if (input[0] < 47.0) {
                if (input[4] < 1.0) {
                    if (input[5] < 26.14) {
                        if (input[2] < 1.0) {
                            var63 = 0.0012071171;
                        } else {
                            var63 = -0.06330031;
                        }
                    } else {
                        if (input[8] < 283.6) {
                            var63 = 0.01796735;
                        } else {
                            var63 = 0.099446796;
                        }
                    }
                } else {
                    if (input[10] < 63.0) {
                        if (input[5] < 31.2) {
                            var63 = -0.029252762;
                        } else {
                            var63 = -0.057107713;
                        }
                    } else {
                        if (input[9] < 153.0) {
                            var63 = 0.010343323;
                        } else {
                            var63 = -0.048186757;
                        }
                    }
                }
            } else {
                if (input[9] < 136.0) {
                    if (input[18] < 130.0) {
                        if (input[9] < 94.0) {
                            var63 = 0.03389092;
                        } else {
                            var63 = -0.04027126;
                        }
                    } else {
                        if (input[8] < 213.4) {
                            var63 = -0.026528997;
                        } else {
                            var63 = 0.005613746;
                        }
                    }
                } else {
                    if (input[9] < 148.0) {
                        if (input[7] < 1.0) {
                            var63 = 0.033470143;
                        } else {
                            var63 = -0.015643276;
                        }
                    } else {
                        if (input[1] < 1.0) {
                            var63 = -0.018420985;
                        } else {
                            var63 = 0.01034991;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 91.0) {
                if (input[14] < 1.0) {
                    if (input[5] < 26.42) {
                        if (input[1] < 1.0) {
                            var63 = 0.0120218275;
                        } else {
                            var63 = -0.04196406;
                        }
                    } else {
                        if (input[5] < 38.85) {
                            var63 = 0.055298377;
                        } else {
                            var63 = -0.034851637;
                        }
                    }
                } else {
                    if (input[10] < 99.0) {
                        if (input[8] < 155.8) {
                            var63 = 0.028534105;
                        } else {
                            var63 = -0.046350263;
                        }
                    } else {
                        if (input[18] < 171.0) {
                            var63 = -0.020599676;
                        } else {
                            var63 = 0.038238894;
                        }
                    }
                }
            } else {
                if (input[10] < 65.0) {
                    if (input[9] < 171.0) {
                        if (input[9] < 169.0) {
                            var63 = 0.004346357;
                        } else {
                            var63 = 0.112717345;
                        }
                    } else {
                        if (input[6] < 1.0) {
                            var63 = -0.044169173;
                        } else {
                            var63 = 0.012775103;
                        }
                    }
                } else {
                    if (input[18] < 171.0) {
                        if (input[9] < 179.0) {
                            var63 = -0.0052468926;
                        } else {
                            var63 = 0.008483487;
                        }
                    } else {
                        if (input[13] < 2.0) {
                            var63 = -0.009729482;
                        } else {
                            var63 = -0.005275009;
                        }
                    }
                }
            }
        }
    }
    double var64;
    if (input[17] < 1.0) {
        if (input[18] < 101.0) {
            if (input[16] < 1.0) {
                if (input[14] < 1.0) {
                    if (input[5] < 22.02) {
                        if (input[8] < 249.1) {
                            var64 = 0.0069331187;
                        } else {
                            var64 = 0.07819783;
                        }
                    } else {
                        if (input[0] < 29.0) {
                            var64 = 0.03535435;
                        } else {
                            var64 = -0.046366796;
                        }
                    }
                } else {
                    if (input[0] < 68.0) {
                        if (input[9] < 95.0) {
                            var64 = -0.03985749;
                        } else {
                            var64 = 0.075668804;
                        }
                    } else {
                        if (input[10] < 118.0) {
                            var64 = 0.03442206;
                        } else {
                            var64 = -0.054668386;
                        }
                    }
                }
            } else {
                if (input[5] < 37.61) {
                    if (input[0] < 34.0) {
                        if (input[14] < 2.0) {
                            var64 = 0.031530093;
                        } else {
                            var64 = -0.019693872;
                        }
                    } else {
                        if (input[10] < 61.0) {
                            var64 = 0.053744156;
                        } else {
                            var64 = -0.021547398;
                        }
                    }
                } else {
                    if (input[10] < 114.0) {
                        if (input[10] < 72.0) {
                            var64 = -0.0022540088;
                        } else {
                            var64 = 0.08510307;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var64 = 0.034382984;
                        } else {
                            var64 = -0.04530491;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 296.4) {
                if (input[8] < 294.8) {
                    if (input[5] < 35.16) {
                        if (input[5] < 20.19) {
                            var64 = -0.0034131173;
                        } else {
                            var64 = -0.006404523;
                        }
                    } else {
                        if (input[5] < 36.44) {
                            var64 = 0.004257164;
                        } else {
                            var64 = -0.004987816;
                        }
                    }
                } else {
                    if (input[18] < 157.0) {
                        if (input[0] < 22.0) {
                            var64 = 0.051755834;
                        } else {
                            var64 = -0.012432985;
                        }
                    } else {
                        if (input[0] < 84.0) {
                            var64 = -0.03592761;
                        } else {
                            var64 = 0.03388173;
                        }
                    }
                }
            } else {
                if (input[18] < 187.0) {
                    if (input[9] < 130.0) {
                        if (input[13] < 2.0) {
                            var64 = 0.021916233;
                        } else {
                            var64 = -0.004014992;
                        }
                    } else {
                        if (input[5] < 20.28) {
                            var64 = 0.016505498;
                        } else {
                            var64 = -0.0142481625;
                        }
                    }
                } else {
                    if (input[9] < 112.0) {
                        if (input[0] < 69.0) {
                            var64 = -0.05324797;
                        } else {
                            var64 = 0.04640085;
                        }
                    } else {
                        if (input[0] < 85.0) {
                            var64 = 0.059054244;
                        } else {
                            var64 = -0.024726838;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 39.62) {
            if (input[9] < 168.0) {
                if (input[2] < 1.0) {
                    if (input[10] < 98.0) {
                        if (input[18] < 184.0) {
                            var64 = -0.012765399;
                        } else {
                            var64 = 0.0012915649;
                        }
                    } else {
                        if (input[8] < 276.0) {
                            var64 = -0.00016557086;
                        } else {
                            var64 = -0.01784782;
                        }
                    }
                } else {
                    if (input[5] < 15.98) {
                        if (input[15] < 1.0) {
                            var64 = 0.039034016;
                        } else {
                            var64 = -0.04380063;
                        }
                    } else {
                        if (input[18] < 192.0) {
                            var64 = -0.0017011686;
                        } else {
                            var64 = -0.019836416;
                        }
                    }
                }
            } else {
                if (input[18] < 164.0) {
                    if (input[18] < 159.0) {
                        if (input[5] < 21.93) {
                            var64 = -0.030276421;
                        } else {
                            var64 = -0.003519763;
                        }
                    } else {
                        if (input[18] < 161.0) {
                            var64 = 0.06347697;
                        } else {
                            var64 = 0.004294677;
                        }
                    }
                } else {
                    if (input[5] < 17.62) {
                        if (input[0] < 84.0) {
                            var64 = 0.040321913;
                        } else {
                            var64 = -0.052673467;
                        }
                    } else {
                        if (input[0] < 24.0) {
                            var64 = 0.009278515;
                        } else {
                            var64 = -0.03411463;
                        }
                    }
                }
            }
        } else {
            if (input[13] < 3.0) {
                if (input[10] < 65.0) {
                    if (input[11] < 1.0) {
                        if (input[9] < 156.0) {
                            var64 = -0.050339695;
                        } else {
                            var64 = 0.0028635012;
                        }
                    } else {
                        var64 = 0.085715614;
                    }
                } else {
                    if (input[0] < 41.0) {
                        var64 = -0.06840892;
                    } else {
                        if (input[0] < 54.0) {
                            var64 = -0.0024775397;
                        } else {
                            var64 = -0.05107;
                        }
                    }
                }
            } else {
                if (input[0] < 61.0) {
                    if (input[4] < 1.0) {
                        var64 = 0.044791833;
                    } else {
                        if (input[8] < 236.9) {
                            var64 = -0.06406306;
                        } else {
                            var64 = -0.006278125;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[8] < 197.1) {
                            var64 = 0.02625057;
                        } else {
                            var64 = 0.11747996;
                        }
                    } else {
                        var64 = -0.010015507;
                    }
                }
            }
        }
    }
    double var65;
    if (input[10] < 62.0) {
        if (input[8] < 213.4) {
            if (input[8] < 176.3) {
                if (input[9] < 144.0) {
                    if (input[9] < 126.0) {
                        if (input[8] < 163.7) {
                            var65 = 0.044982806;
                        } else {
                            var65 = -0.04282978;
                        }
                    } else {
                        if (input[8] < 174.0) {
                            var65 = -0.050946366;
                        } else {
                            var65 = 0.042500477;
                        }
                    }
                } else {
                    if (input[8] < 168.8) {
                        if (input[9] < 149.0) {
                            var65 = 0.047803167;
                        } else {
                            var65 = -0.025030453;
                        }
                    } else {
                        if (input[5] < 26.53) {
                            var65 = 0.022037497;
                        } else {
                            var65 = 0.109544374;
                        }
                    }
                }
            } else {
                if (input[18] < 136.0) {
                    if (input[0] < 26.0) {
                        if (input[16] < 1.0) {
                            var65 = -0.041718192;
                        } else {
                            var65 = 0.0646268;
                        }
                    } else {
                        if (input[9] < 94.0) {
                            var65 = 0.02161173;
                        } else {
                            var65 = -0.045194514;
                        }
                    }
                } else {
                    if (input[5] < 26.62) {
                        if (input[4] < 1.0) {
                            var65 = 0.0687631;
                        } else {
                            var65 = -0.0029133915;
                        }
                    } else {
                        if (input[8] < 200.2) {
                            var65 = -0.03382797;
                        } else {
                            var65 = 0.0081401495;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 217.5) {
                if (input[15] < 1.0) {
                    if (input[0] < 67.0) {
                        if (input[7] < 1.0) {
                            var65 = 0.09490001;
                        } else {
                            var65 = 0.012288293;
                        }
                    } else {
                        var65 = -0.018519854;
                    }
                } else {
                    var65 = -0.045897435;
                }
            } else {
                if (input[14] < 1.0) {
                    if (input[9] < 95.0) {
                        if (input[5] < 32.68) {
                            var65 = 0.095641136;
                        } else {
                            var65 = -0.010604352;
                        }
                    } else {
                        if (input[4] < 2.0) {
                            var65 = -0.00010584271;
                        } else {
                            var65 = -0.032646697;
                        }
                    }
                } else {
                    if (input[8] < 258.5) {
                        if (input[5] < 28.59) {
                            var65 = -0.014652855;
                        } else {
                            var65 = 0.023722371;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var65 = 0.0120688025;
                        } else {
                            var65 = 0.051065184;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 64.0) {
            if (input[0] < 47.0) {
                if (input[4] < 1.0) {
                    if (input[5] < 26.14) {
                        if (input[2] < 1.0) {
                            var65 = 0.0017689494;
                        } else {
                            var65 = -0.06144253;
                        }
                    } else {
                        if (input[5] < 28.14) {
                            var65 = 0.098035805;
                        } else {
                            var65 = 0.01752793;
                        }
                    }
                } else {
                    if (input[10] < 63.0) {
                        if (input[5] < 31.2) {
                            var65 = -0.02758464;
                        } else {
                            var65 = -0.05520893;
                        }
                    } else {
                        if (input[9] < 153.0) {
                            var65 = 0.010468431;
                        } else {
                            var65 = -0.04625475;
                        }
                    }
                }
            } else {
                if (input[9] < 136.0) {
                    if (input[18] < 130.0) {
                        if (input[9] < 94.0) {
                            var65 = 0.033715066;
                        } else {
                            var65 = -0.038187042;
                        }
                    } else {
                        if (input[8] < 213.4) {
                            var65 = -0.02485097;
                        } else {
                            var65 = 0.0060166433;
                        }
                    }
                } else {
                    if (input[0] < 89.0) {
                        if (input[9] < 148.0) {
                            var65 = 0.02161189;
                        } else {
                            var65 = -0.0024962423;
                        }
                    } else {
                        var65 = -0.058783706;
                    }
                }
            }
        } else {
            if (input[9] < 91.0) {
                if (input[14] < 1.0) {
                    if (input[5] < 26.42) {
                        if (input[1] < 1.0) {
                            var65 = 0.012081968;
                        } else {
                            var65 = -0.040129893;
                        }
                    } else {
                        if (input[8] < 163.1) {
                            var65 = -0.03515893;
                        } else {
                            var65 = 0.053124506;
                        }
                    }
                } else {
                    if (input[10] < 99.0) {
                        if (input[8] < 155.8) {
                            var65 = 0.027413044;
                        } else {
                            var65 = -0.0443701;
                        }
                    } else {
                        if (input[18] < 171.0) {
                            var65 = -0.019240206;
                        } else {
                            var65 = 0.0368133;
                        }
                    }
                }
            } else {
                if (input[10] < 65.0) {
                    if (input[9] < 171.0) {
                        if (input[9] < 169.0) {
                            var65 = 0.0049074595;
                        } else {
                            var65 = 0.10649224;
                        }
                    } else {
                        if (input[6] < 1.0) {
                            var65 = -0.042074237;
                        } else {
                            var65 = 0.012575537;
                        }
                    }
                } else {
                    if (input[18] < 171.0) {
                        if (input[9] < 179.0) {
                            var65 = -0.0043197516;
                        } else {
                            var65 = 0.008640645;
                        }
                    } else {
                        if (input[0] < 23.0) {
                            var65 = -0.014249495;
                        } else {
                            var65 = -0.0057741217;
                        }
                    }
                }
            }
        }
    }
    double var66;
    if (input[17] < 1.0) {
        if (input[18] < 101.0) {
            if (input[16] < 1.0) {
                if (input[14] < 1.0) {
                    if (input[5] < 22.02) {
                        if (input[8] < 249.1) {
                            var66 = 0.0062984736;
                        } else {
                            var66 = 0.07391538;
                        }
                    } else {
                        if (input[0] < 29.0) {
                            var66 = 0.0350155;
                        } else {
                            var66 = -0.044699006;
                        }
                    }
                } else {
                    if (input[0] < 68.0) {
                        if (input[9] < 95.0) {
                            var66 = -0.0384098;
                        } else {
                            var66 = 0.06950349;
                        }
                    } else {
                        if (input[10] < 118.0) {
                            var66 = 0.0323119;
                        } else {
                            var66 = -0.05314336;
                        }
                    }
                }
            } else {
                if (input[5] < 37.61) {
                    if (input[0] < 34.0) {
                        if (input[14] < 2.0) {
                            var66 = 0.02941539;
                        } else {
                            var66 = -0.018694216;
                        }
                    } else {
                        if (input[10] < 61.0) {
                            var66 = 0.051581502;
                        } else {
                            var66 = -0.020497274;
                        }
                    }
                } else {
                    if (input[10] < 114.0) {
                        if (input[10] < 72.0) {
                            var66 = -0.0016825602;
                        } else {
                            var66 = 0.07947478;
                        }
                    } else {
                        if (input[7] < 1.0) {
                            var66 = 0.031764794;
                        } else {
                            var66 = -0.04493575;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 296.4) {
                if (input[8] < 294.8) {
                    if (input[5] < 34.46) {
                        if (input[5] < 33.87) {
                            var66 = -0.0044402587;
                        } else {
                            var66 = -0.0143558625;
                        }
                    } else {
                        if (input[0] < 89.0) {
                            var66 = -0.0016502939;
                        } else {
                            var66 = -0.028990105;
                        }
                    }
                } else {
                    if (input[18] < 157.0) {
                        if (input[0] < 22.0) {
                            var66 = 0.049135912;
                        } else {
                            var66 = -0.011370035;
                        }
                    } else {
                        if (input[0] < 84.0) {
                            var66 = -0.03407256;
                        } else {
                            var66 = 0.032918658;
                        }
                    }
                }
            } else {
                if (input[18] < 187.0) {
                    if (input[13] < 2.0) {
                        if (input[9] < 130.0) {
                            var66 = 0.021106528;
                        } else {
                            var66 = -0.0029040033;
                        }
                    } else {
                        if (input[10] < 68.0) {
                            var66 = 0.036123928;
                        } else {
                            var66 = -0.0128031345;
                        }
                    }
                } else {
                    if (input[9] < 112.0) {
                        if (input[0] < 69.0) {
                            var66 = -0.05103454;
                        } else {
                            var66 = 0.044335127;
                        }
                    } else {
                        if (input[0] < 85.0) {
                            var66 = 0.05587068;
                        } else {
                            var66 = -0.023580495;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 39.62) {
            if (input[9] < 168.0) {
                if (input[10] < 72.0) {
                    if (input[5] < 17.42) {
                        if (input[18] < 188.0) {
                            var66 = -0.04101022;
                        } else {
                            var66 = 0.02578497;
                        }
                    } else {
                        if (input[9] < 92.0) {
                            var66 = 0.033345107;
                        } else {
                            var66 = -0.008282246;
                        }
                    }
                } else {
                    if (input[5] < 15.68) {
                        if (input[9] < 121.0) {
                            var66 = 0.046718374;
                        } else {
                            var66 = -0.003446101;
                        }
                    } else {
                        if (input[8] < 167.7) {
                            var66 = -0.01325437;
                        } else {
                            var66 = -0.0030087556;
                        }
                    }
                }
            } else {
                if (input[18] < 185.0) {
                    if (input[18] < 184.0) {
                        if (input[14] < 1.0) {
                            var66 = 0.00006159115;
                        } else {
                            var66 = -0.014723054;
                        }
                    } else {
                        if (input[4] < 1.0) {
                            var66 = -0.039827444;
                        } else {
                            var66 = 0.095217496;
                        }
                    }
                } else {
                    if (input[10] < 68.0) {
                        if (input[0] < 69.0) {
                            var66 = -0.038913764;
                        } else {
                            var66 = 0.08221636;
                        }
                    } else {
                        if (input[0] < 43.0) {
                            var66 = -0.009466534;
                        } else {
                            var66 = -0.047424383;
                        }
                    }
                }
            }
        } else {
            if (input[13] < 3.0) {
                if (input[8] < 254.9) {
                    if (input[10] < 65.0) {
                        if (input[3] < 1.0) {
                            var66 = 0.086164586;
                        } else {
                            var66 = 0.0003952067;
                        }
                    } else {
                        if (input[8] < 246.2) {
                            var66 = -0.04485053;
                        } else {
                            var66 = 0.04450437;
                        }
                    }
                } else {
                    var66 = -0.06755356;
                }
            } else {
                if (input[0] < 61.0) {
                    if (input[4] < 1.0) {
                        var66 = 0.04389039;
                    } else {
                        if (input[8] < 236.9) {
                            var66 = -0.062254645;
                        } else {
                            var66 = -0.005763578;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[8] < 197.1) {
                            var66 = 0.025698427;
                        } else {
                            var66 = 0.11045059;
                        }
                    } else {
                        var66 = -0.009317784;
                    }
                }
            }
        }
    }
    double var67;
    if (input[10] < 62.0) {
        if (input[8] < 213.4) {
            if (input[8] < 176.3) {
                if (input[9] < 144.0) {
                    if (input[9] < 126.0) {
                        if (input[8] < 163.7) {
                            var67 = 0.043100573;
                        } else {
                            var67 = -0.040989056;
                        }
                    } else {
                        if (input[8] < 174.0) {
                            var67 = -0.04903203;
                        } else {
                            var67 = 0.04139526;
                        }
                    }
                } else {
                    if (input[8] < 168.8) {
                        if (input[9] < 149.0) {
                            var67 = 0.046117198;
                        } else {
                            var67 = -0.023527795;
                        }
                    } else {
                        if (input[5] < 26.53) {
                            var67 = 0.021514732;
                        } else {
                            var67 = 0.10274606;
                        }
                    }
                }
            } else {
                if (input[0] < 22.0) {
                    if (input[9] < 140.0) {
                        var67 = 0.096465275;
                    } else {
                        var67 = -0.010923283;
                    }
                } else {
                    if (input[18] < 136.0) {
                        if (input[9] < 94.0) {
                            var67 = 0.020410785;
                        } else {
                            var67 = -0.04055321;
                        }
                    } else {
                        if (input[8] < 212.2) {
                            var67 = -0.004351657;
                        } else {
                            var67 = -0.057492685;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 217.5) {
                if (input[15] < 1.0) {
                    if (input[0] < 67.0) {
                        if (input[7] < 1.0) {
                            var67 = 0.08921918;
                        } else {
                            var67 = 0.012284576;
                        }
                    } else {
                        var67 = -0.01761282;
                    }
                } else {
                    var67 = -0.04471898;
                }
            } else {
                if (input[12] < 1.0) {
                    if (input[9] < 176.0) {
                        if (input[18] < 113.0) {
                            var67 = -0.016001957;
                        } else {
                            var67 = 0.045146994;
                        }
                    } else {
                        var67 = -0.057462376;
                    }
                } else {
                    if (input[9] < 94.0) {
                        if (input[5] < 17.32) {
                            var67 = -0.04560859;
                        } else {
                            var67 = 0.058848828;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var67 = -0.016856153;
                        } else {
                            var67 = 0.007042896;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 64.0) {
            if (input[0] < 47.0) {
                if (input[4] < 1.0) {
                    if (input[5] < 26.14) {
                        if (input[2] < 1.0) {
                            var67 = 0.0022689647;
                        } else {
                            var67 = -0.059960086;
                        }
                    } else {
                        if (input[18] < 188.0) {
                            var67 = 0.0373139;
                        } else {
                            var67 = -0.022727886;
                        }
                    }
                } else {
                    if (input[10] < 63.0) {
                        if (input[5] < 31.2) {
                            var67 = -0.026089523;
                        } else {
                            var67 = -0.053377606;
                        }
                    } else {
                        if (input[9] < 153.0) {
                            var67 = 0.010599425;
                        } else {
                            var67 = -0.04436385;
                        }
                    }
                }
            } else {
                if (input[9] < 136.0) {
                    if (input[18] < 130.0) {
                        if (input[9] < 94.0) {
                            var67 = 0.032232247;
                        } else {
                            var67 = -0.036263715;
                        }
                    } else {
                        if (input[8] < 213.4) {
                            var67 = -0.023386387;
                        } else {
                            var67 = 0.0061815674;
                        }
                    }
                } else {
                    if (input[0] < 89.0) {
                        if (input[9] < 148.0) {
                            var67 = 0.021152614;
                        } else {
                            var67 = -0.001795578;
                        }
                    } else {
                        var67 = -0.057106894;
                    }
                }
            }
        } else {
            if (input[9] < 91.0) {
                if (input[14] < 1.0) {
                    if (input[5] < 26.42) {
                        if (input[1] < 1.0) {
                            var67 = 0.012280993;
                        } else {
                            var67 = -0.03846646;
                        }
                    } else {
                        if (input[0] < 69.0) {
                            var67 = 0.01827367;
                        } else {
                            var67 = 0.09450264;
                        }
                    }
                } else {
                    if (input[10] < 99.0) {
                        if (input[6] < 1.0) {
                            var67 = -0.046990342;
                        } else {
                            var67 = -0.0071599814;
                        }
                    } else {
                        if (input[18] < 171.0) {
                            var67 = -0.018149845;
                        } else {
                            var67 = 0.03510746;
                        }
                    }
                }
            } else {
                if (input[10] < 65.0) {
                    if (input[9] < 171.0) {
                        if (input[9] < 169.0) {
                            var67 = 0.0053432733;
                        } else {
                            var67 = 0.100791596;
                        }
                    } else {
                        if (input[6] < 1.0) {
                            var67 = -0.04027381;
                        } else {
                            var67 = 0.012063771;
                        }
                    }
                } else {
                    if (input[18] < 171.0) {
                        if (input[9] < 179.0) {
                            var67 = -0.0034873828;
                        } else {
                            var67 = 0.00925406;
                        }
                    } else {
                        if (input[18] < 195.0) {
                            var67 = -0.006429372;
                        } else {
                            var67 = -0.00064531714;
                        }
                    }
                }
            }
        }
    }
    double var68;
    if (input[5] < 20.19) {
        if (input[18] < 194.0) {
            if (input[14] < 2.0) {
                if (input[7] < 1.0) {
                    if (input[13] < 2.0) {
                        if (input[18] < 181.0) {
                            var68 = -0.004542683;
                        } else {
                            var68 = -0.023000708;
                        }
                    } else {
                        if (input[18] < 172.0) {
                            var68 = -0.0015238192;
                        } else {
                            var68 = 0.012521185;
                        }
                    }
                } else {
                    if (input[10] < 80.0) {
                        if (input[0] < 23.0) {
                            var68 = -0.03269145;
                        } else {
                            var68 = 0.02492286;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var68 = 0.008530591;
                        } else {
                            var68 = -0.006312139;
                        }
                    }
                }
            } else {
                if (input[5] < 19.69) {
                    if (input[10] < 67.0) {
                        if (input[17] < 1.0) {
                            var68 = -0.014138849;
                        } else {
                            var68 = -0.04693819;
                        }
                    } else {
                        if (input[8] < 226.7) {
                            var68 = -0.011358981;
                        } else {
                            var68 = -0.0017151617;
                        }
                    }
                } else {
                    if (input[9] < 112.0) {
                        if (input[10] < 98.0) {
                            var68 = 0.06916275;
                        } else {
                            var68 = -0.011236933;
                        }
                    } else {
                        if (input[10] < 123.0) {
                            var68 = -0.010251773;
                        } else {
                            var68 = 0.040480454;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 157.0) {
                if (input[3] < 1.0) {
                    if (input[9] < 120.0) {
                        if (input[0] < 48.0) {
                            var68 = -0.046792544;
                        } else {
                            var68 = 0.0031314772;
                        }
                    } else {
                        var68 = 0.07758927;
                    }
                } else {
                    var68 = 0.10086733;
                }
            } else {
                if (input[8] < 285.9) {
                    if (input[9] < 96.0) {
                        if (input[18] < 196.0) {
                            var68 = 0.045693647;
                        } else {
                            var68 = -0.052359033;
                        }
                    } else {
                        if (input[9] < 111.0) {
                            var68 = 0.04191559;
                        } else {
                            var68 = 0.007837622;
                        }
                    }
                } else {
                    if (input[9] < 170.0) {
                        if (input[10] < 123.0) {
                            var68 = -0.05170991;
                        } else {
                            var68 = 0.012465451;
                        }
                    } else {
                        var68 = 0.081978016;
                    }
                }
            }
        }
    } else {
        if (input[18] < 171.0) {
            if (input[14] < 1.0) {
                if (input[13] < 2.0) {
                    if (input[18] < 135.0) {
                        if (input[10] < 122.0) {
                            var68 = -0.0041900068;
                        } else {
                            var68 = -0.024754135;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var68 = -0.00020651624;
                        } else {
                            var68 = 0.024182176;
                        }
                    }
                } else {
                    if (input[10] < 125.0) {
                        if (input[5] < 22.12) {
                            var68 = -0.021101823;
                        } else {
                            var68 = -0.008676648;
                        }
                    } else {
                        if (input[8] < 261.5) {
                            var68 = 0.01602436;
                        } else {
                            var68 = -0.017455716;
                        }
                    }
                }
            } else {
                if (input[9] < 91.0) {
                    if (input[10] < 64.0) {
                        if (input[18] < 146.0) {
                            var68 = -0.0046663294;
                        } else {
                            var68 = 0.098536305;
                        }
                    } else {
                        if (input[18] < 140.0) {
                            var68 = -0.0064376104;
                        } else {
                            var68 = -0.055844348;
                        }
                    }
                } else {
                    if (input[6] < 1.0) {
                        if (input[10] < 86.0) {
                            var68 = -0.0052795107;
                        } else {
                            var68 = -0.0013203566;
                        }
                    } else {
                        if (input[5] < 35.07) {
                            var68 = -0.0025328358;
                        } else {
                            var68 = 0.011461606;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 168.8) {
                if (input[3] < 1.0) {
                    if (input[0] < 69.0) {
                        if (input[0] < 34.0) {
                            var68 = -0.0076150657;
                        } else {
                            var68 = -0.03151825;
                        }
                    } else {
                        if (input[13] < 1.0) {
                            var68 = -0.03221019;
                        } else {
                            var68 = 0.010278514;
                        }
                    }
                } else {
                    if (input[16] < 1.0) {
                        if (input[18] < 183.0) {
                            var68 = -0.0056589274;
                        } else {
                            var68 = 0.033323403;
                        }
                    } else {
                        if (input[8] < 167.7) {
                            var68 = -0.009274765;
                        } else {
                            var68 = -0.053949673;
                        }
                    }
                }
            } else {
                if (input[11] < 1.0) {
                    if (input[8] < 177.5) {
                        if (input[5] < 37.41) {
                            var68 = 0.011336202;
                        } else {
                            var68 = -0.03454663;
                        }
                    } else {
                        if (input[5] < 23.44) {
                            var68 = -0.014834778;
                        } else {
                            var68 = -0.0056515797;
                        }
                    }
                } else {
                    if (input[8] < 297.6) {
                        if (input[14] < 1.0) {
                            var68 = -0.008619124;
                        } else {
                            var68 = 0.0007829833;
                        }
                    } else {
                        if (input[5] < 35.94) {
                            var68 = 0.0630938;
                        } else {
                            var68 = -0.024553567;
                        }
                    }
                }
            }
        }
    }
    double var69;
    if (input[17] < 1.0) {
        if (input[8] < 296.4) {
            if (input[8] < 294.8) {
                if (input[5] < 35.16) {
                    if (input[5] < 20.19) {
                        if (input[8] < 205.0) {
                            var69 = 0.002428916;
                        } else {
                            var69 = -0.003930488;
                        }
                    } else {
                        if (input[8] < 239.2) {
                            var69 = -0.0052669803;
                        } else {
                            var69 = -0.0022392592;
                        }
                    }
                } else {
                    if (input[5] < 36.44) {
                        if (input[0] < 87.0) {
                            var69 = 0.0074005546;
                        } else {
                            var69 = -0.029073915;
                        }
                    } else {
                        if (input[12] < 2.0) {
                            var69 = -0.0063942424;
                        } else {
                            var69 = 0.0007458268;
                        }
                    }
                }
            } else {
                if (input[9] < 110.0) {
                    if (input[12] < 2.0) {
                        if (input[10] < 91.0) {
                            var69 = -0.0016693911;
                        } else {
                            var69 = 0.0702905;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var69 = 0.022440575;
                        } else {
                            var69 = -0.04592107;
                        }
                    }
                } else {
                    if (input[10] < 99.0) {
                        if (input[13] < 3.0) {
                            var69 = 0.00089190475;
                        } else {
                            var69 = -0.04517201;
                        }
                    } else {
                        if (input[9] < 161.0) {
                            var69 = -0.045169927;
                        } else {
                            var69 = -0.0030448986;
                        }
                    }
                }
            }
        } else {
            if (input[15] < 1.0) {
                if (input[13] < 2.0) {
                    if (input[5] < 23.83) {
                        if (input[16] < 2.0) {
                            var69 = 0.009609546;
                        } else {
                            var69 = 0.059453852;
                        }
                    } else {
                        if (input[5] < 24.78) {
                            var69 = -0.053079274;
                        } else {
                            var69 = 0.0039447807;
                        }
                    }
                } else {
                    if (input[0] < 23.0) {
                        if (input[10] < 81.0) {
                            var69 = 0.002058336;
                        } else {
                            var69 = -0.06262367;
                        }
                    } else {
                        if (input[18] < 141.0) {
                            var69 = -0.017876865;
                        } else {
                            var69 = 0.0049539474;
                        }
                    }
                }
            } else {
                if (input[10] < 117.0) {
                    if (input[9] < 123.0) {
                        if (input[8] < 297.6) {
                            var69 = 0.042899698;
                        } else {
                            var69 = -0.029416645;
                        }
                    } else {
                        if (input[0] < 24.0) {
                            var69 = -0.04249841;
                        } else {
                            var69 = 0.06333523;
                        }
                    }
                } else {
                    if (input[10] < 125.0) {
                        if (input[5] < 32.1) {
                            var69 = -0.05906057;
                        } else {
                            var69 = -0.003553132;
                        }
                    } else {
                        if (input[8] < 297.6) {
                            var69 = -0.04111486;
                        } else {
                            var69 = 0.08742222;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 39.62) {
            if (input[9] < 168.0) {
                if (input[2] < 1.0) {
                    if (input[10] < 98.0) {
                        if (input[18] < 184.0) {
                            var69 = -0.010379153;
                        } else {
                            var69 = 0.0032039115;
                        }
                    } else {
                        if (input[8] < 276.0) {
                            var69 = 0.0017247762;
                        } else {
                            var69 = -0.015466645;
                        }
                    }
                } else {
                    if (input[5] < 15.98) {
                        if (input[15] < 1.0) {
                            var69 = 0.037838377;
                        } else {
                            var69 = -0.04105186;
                        }
                    } else {
                        if (input[18] < 192.0) {
                            var69 = 0.00028031867;
                        } else {
                            var69 = -0.017305747;
                        }
                    }
                }
            } else {
                if (input[18] < 164.0) {
                    if (input[18] < 159.0) {
                        if (input[5] < 21.93) {
                            var69 = -0.027425323;
                        } else {
                            var69 = -0.001333115;
                        }
                    } else {
                        if (input[18] < 161.0) {
                            var69 = 0.061593123;
                        } else {
                            var69 = 0.0058417;
                        }
                    }
                } else {
                    if (input[5] < 17.62) {
                        if (input[0] < 81.0) {
                            var69 = 0.043049667;
                        } else {
                            var69 = -0.036968473;
                        }
                    } else {
                        if (input[0] < 24.0) {
                            var69 = 0.011655177;
                        } else {
                            var69 = -0.030706659;
                        }
                    }
                }
            }
        } else {
            if (input[13] < 3.0) {
                if (input[8] < 254.9) {
                    if (input[10] < 65.0) {
                        if (input[3] < 1.0) {
                            var69 = 0.0838678;
                        } else {
                            var69 = 0.000117588956;
                        }
                    } else {
                        if (input[8] < 246.2) {
                            var69 = -0.042716656;
                        } else {
                            var69 = 0.042956974;
                        }
                    }
                } else {
                    var69 = -0.06543232;
                }
            } else {
                if (input[0] < 61.0) {
                    if (input[4] < 1.0) {
                        var69 = 0.04315601;
                    } else {
                        if (input[8] < 236.9) {
                            var69 = -0.060399063;
                        } else {
                            var69 = -0.004542432;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[8] < 197.1) {
                            var69 = 0.024802836;
                        } else {
                            var69 = 0.10578269;
                        }
                    } else {
                        var69 = -0.008486821;
                    }
                }
            }
        }
    }
    double var70;
    if (input[10] < 62.0) {
        if (input[8] < 213.4) {
            if (input[8] < 176.3) {
                if (input[9] < 144.0) {
                    if (input[9] < 126.0) {
                        if (input[8] < 163.7) {
                            var70 = 0.041070756;
                        } else {
                            var70 = -0.039110404;
                        }
                    } else {
                        if (input[8] < 174.0) {
                            var70 = -0.04701727;
                        } else {
                            var70 = 0.040406328;
                        }
                    }
                } else {
                    if (input[8] < 168.8) {
                        if (input[9] < 149.0) {
                            var70 = 0.044942465;
                        } else {
                            var70 = -0.021754716;
                        }
                    } else {
                        if (input[5] < 26.53) {
                            var70 = 0.02151936;
                        } else {
                            var70 = 0.09688962;
                        }
                    }
                }
            } else {
                if (input[0] < 22.0) {
                    if (input[9] < 140.0) {
                        var70 = 0.09314632;
                    } else {
                        var70 = -0.009902412;
                    }
                } else {
                    if (input[18] < 136.0) {
                        if (input[9] < 94.0) {
                            var70 = 0.019246133;
                        } else {
                            var70 = -0.03857351;
                        }
                    } else {
                        if (input[5] < 26.62) {
                            var70 = 0.007687278;
                        } else {
                            var70 = -0.016744033;
                        }
                    }
                }
            }
        } else {
            if (input[18] < 196.0) {
                if (input[0] < 21.0) {
                    if (input[8] < 287.2) {
                        if (input[5] < 18.12) {
                            var70 = 0.0039625047;
                        } else {
                            var70 = -0.06273685;
                        }
                    } else {
                        var70 = 0.040405013;
                    }
                } else {
                    if (input[0] < 25.0) {
                        if (input[7] < 1.0) {
                            var70 = 0.07627687;
                        } else {
                            var70 = -0.024929691;
                        }
                    } else {
                        if (input[9] < 94.0) {
                            var70 = 0.046556957;
                        } else {
                            var70 = 0.007416803;
                        }
                    }
                }
            } else {
                if (input[0] < 22.0) {
                    var70 = 0.047095016;
                } else {
                    if (input[6] < 1.0) {
                        var70 = -0.063284285;
                    } else {
                        var70 = -0.009509383;
                    }
                }
            }
        }
    } else {
        if (input[10] < 64.0) {
            if (input[18] < 104.0) {
                if (input[14] < 2.0) {
                    if (input[9] < 166.0) {
                        if (input[8] < 172.8) {
                            var70 = -0.016427092;
                        } else {
                            var70 = -0.06516775;
                        }
                    } else {
                        var70 = 0.017175352;
                    }
                } else {
                    if (input[9] < 138.0) {
                        if (input[9] < 122.0) {
                            var70 = 0.05107044;
                        } else {
                            var70 = 0.0037290973;
                        }
                    } else {
                        var70 = -0.04023505;
                    }
                }
            } else {
                if (input[0] < 42.0) {
                    if (input[9] < 139.0) {
                        if (input[0] < 39.0) {
                            var70 = 0.007086596;
                        } else {
                            var70 = -0.03833388;
                        }
                    } else {
                        if (input[4] < 1.0) {
                            var70 = 0.007870418;
                        } else {
                            var70 = -0.03981144;
                        }
                    }
                } else {
                    if (input[9] < 136.0) {
                        if (input[9] < 91.0) {
                            var70 = 0.056426626;
                        } else {
                            var70 = -0.01383705;
                        }
                    } else {
                        if (input[9] < 148.0) {
                            var70 = 0.023428518;
                        } else {
                            var70 = -0.0018058725;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 91.0) {
                if (input[14] < 1.0) {
                    if (input[5] < 24.78) {
                        if (input[1] < 1.0) {
                            var70 = 0.008325981;
                        } else {
                            var70 = -0.043113437;
                        }
                    } else {
                        if (input[8] < 174.0) {
                            var70 = -0.015753597;
                        } else {
                            var70 = 0.048326902;
                        }
                    }
                } else {
                    if (input[10] < 99.0) {
                        if (input[8] < 155.8) {
                            var70 = 0.029528946;
                        } else {
                            var70 = -0.04056758;
                        }
                    } else {
                        if (input[18] < 171.0) {
                            var70 = -0.015938798;
                        } else {
                            var70 = 0.0339105;
                        }
                    }
                }
            } else {
                if (input[10] < 65.0) {
                    if (input[9] < 171.0) {
                        if (input[9] < 153.0) {
                            var70 = 0.0016509176;
                        } else {
                            var70 = 0.03243371;
                        }
                    } else {
                        if (input[6] < 1.0) {
                            var70 = -0.038153525;
                        } else {
                            var70 = 0.012401402;
                        }
                    }
                } else {
                    if (input[18] < 171.0) {
                        if (input[9] < 179.0) {
                            var70 = -0.002483503;
                        } else {
                            var70 = 0.009508103;
                        }
                    } else {
                        if (input[9] < 123.0) {
                            var70 = -0.0070556286;
                        } else {
                            var70 = -0.0025948477;
                        }
                    }
                }
            }
        }
    }
    double var71;
    if (input[10] < 62.0) {
        if (input[8] < 213.4) {
            if (input[8] < 176.3) {
                if (input[14] < 2.0) {
                    if (input[13] < 2.0) {
                        if (input[8] < 172.3) {
                            var71 = -0.040470276;
                        } else {
                            var71 = 0.040848278;
                        }
                    } else {
                        if (input[18] < 133.0) {
                            var71 = 0.040857963;
                        } else {
                            var71 = -0.019307753;
                        }
                    }
                } else {
                    if (input[0] < 28.0) {
                        if (input[18] < 166.0) {
                            var71 = -0.052986372;
                        } else {
                            var71 = 0.008638778;
                        }
                    } else {
                        if (input[5] < 16.65) {
                            var71 = -0.04377776;
                        } else {
                            var71 = 0.044201892;
                        }
                    }
                }
            } else {
                if (input[0] < 22.0) {
                    if (input[9] < 140.0) {
                        var71 = 0.08874715;
                    } else {
                        var71 = -0.009480755;
                    }
                } else {
                    if (input[18] < 136.0) {
                        if (input[5] < 23.83) {
                            var71 = -0.049935948;
                        } else {
                            var71 = -0.022182826;
                        }
                    } else {
                        if (input[8] < 212.2) {
                            var71 = -0.0027585214;
                        } else {
                            var71 = -0.055554517;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 174.0) {
                if (input[12] < 1.0) {
                    if (input[5] < 25.36) {
                        if (input[8] < 225.5) {
                            var71 = -0.034455065;
                        } else {
                            var71 = 0.08309166;
                        }
                    } else {
                        if (input[5] < 38.06) {
                            var71 = -0.0043666824;
                        } else {
                            var71 = 0.069826715;
                        }
                    }
                } else {
                    if (input[5] < 28.77) {
                        if (input[9] < 94.0) {
                            var71 = 0.047545295;
                        } else {
                            var71 = -0.0081465095;
                        }
                    } else {
                        if (input[5] < 29.8) {
                            var71 = 0.07974547;
                        } else {
                            var71 = 0.012648642;
                        }
                    }
                }
            } else {
                if (input[12] < 2.0) {
                    if (input[0] < 81.0) {
                        if (input[8] < 229.7) {
                            var71 = -0.0096905045;
                        } else {
                            var71 = -0.06478885;
                        }
                    } else {
                        var71 = 0.0023014785;
                    }
                } else {
                    if (input[3] < 1.0) {
                        if (input[4] < 1.0) {
                            var71 = -0.0196079;
                        } else {
                            var71 = 0.08899622;
                        }
                    } else {
                        if (input[0] < 64.0) {
                            var71 = -0.050827056;
                        } else {
                            var71 = 0.0009130365;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 64.0) {
            if (input[18] < 104.0) {
                if (input[14] < 2.0) {
                    if (input[9] < 166.0) {
                        if (input[8] < 172.8) {
                            var71 = -0.016320502;
                        } else {
                            var71 = -0.06376243;
                        }
                    } else {
                        var71 = 0.016655577;
                    }
                } else {
                    if (input[9] < 138.0) {
                        if (input[9] < 122.0) {
                            var71 = 0.049297955;
                        } else {
                            var71 = 0.003867938;
                        }
                    } else {
                        var71 = -0.039398644;
                    }
                }
            } else {
                if (input[5] < 17.52) {
                    if (input[8] < 293.1) {
                        if (input[8] < 182.6) {
                            var71 = 0.0054188306;
                        } else {
                            var71 = -0.03731569;
                        }
                    } else {
                        var71 = 0.04850742;
                    }
                } else {
                    if (input[5] < 19.52) {
                        if (input[8] < 273.0) {
                            var71 = 0.03535114;
                        } else {
                            var71 = -0.024006577;
                        }
                    } else {
                        if (input[0] < 42.0) {
                            var71 = -0.01591068;
                        } else {
                            var71 = -0.002926403;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 91.0) {
                if (input[14] < 1.0) {
                    if (input[5] < 26.42) {
                        if (input[1] < 1.0) {
                            var71 = 0.012396045;
                        } else {
                            var71 = -0.035358313;
                        }
                    } else {
                        if (input[5] < 38.85) {
                            var71 = 0.0478941;
                        } else {
                            var71 = -0.03499093;
                        }
                    }
                } else {
                    if (input[10] < 99.0) {
                        if (input[6] < 1.0) {
                            var71 = -0.043503027;
                        } else {
                            var71 = -0.0037991058;
                        }
                    } else {
                        if (input[8] < 275.3) {
                            var71 = -0.012781049;
                        } else {
                            var71 = 0.042859714;
                        }
                    }
                }
            } else {
                if (input[10] < 65.0) {
                    if (input[9] < 171.0) {
                        if (input[9] < 169.0) {
                            var71 = 0.0058908234;
                        } else {
                            var71 = 0.094733365;
                        }
                    } else {
                        if (input[6] < 1.0) {
                            var71 = -0.03683578;
                        } else {
                            var71 = 0.012088691;
                        }
                    }
                } else {
                    if (input[9] < 96.0) {
                        if (input[9] < 95.0) {
                            var71 = -0.0018850316;
                        } else {
                            var71 = 0.011881319;
                        }
                    } else {
                        if (input[18] < 104.0) {
                            var71 = 0.0018493861;
                        } else {
                            var71 = -0.0029765717;
                        }
                    }
                }
            }
        }
    }
    double var72;
    if (input[17] < 1.0) {
        if (input[8] < 296.4) {
            if (input[8] < 294.8) {
                if (input[5] < 35.16) {
                    if (input[0] < 69.0) {
                        if (input[0] < 61.0) {
                            var72 = -0.0023823706;
                        } else {
                            var72 = -0.0077836732;
                        }
                    } else {
                        if (input[5] < 15.78) {
                            var72 = -0.016528433;
                        } else {
                            var72 = -0.00007505066;
                        }
                    }
                } else {
                    if (input[0] < 89.0) {
                        if (input[5] < 36.44) {
                            var72 = 0.0068509616;
                        } else {
                            var72 = -0.0014643602;
                        }
                    } else {
                        if (input[9] < 153.0) {
                            var72 = -0.04555447;
                        } else {
                            var72 = 0.023430271;
                        }
                    }
                }
            } else {
                if (input[18] < 157.0) {
                    if (input[0] < 22.0) {
                        if (input[18] < 136.0) {
                            var72 = 0.09529596;
                        } else {
                            var72 = 0.0010356421;
                        }
                    } else {
                        if (input[18] < 122.0) {
                            var72 = -0.02478766;
                        } else {
                            var72 = 0.0034159627;
                        }
                    }
                } else {
                    if (input[18] < 181.0) {
                        if (input[5] < 17.42) {
                            var72 = 0.022849608;
                        } else {
                            var72 = -0.049487438;
                        }
                    } else {
                        if (input[10] < 98.0) {
                            var72 = 0.01592166;
                        } else {
                            var72 = -0.04033751;
                        }
                    }
                }
            }
        } else {
            if (input[13] < 2.0) {
                if (input[5] < 23.92) {
                    if (input[16] < 2.0) {
                        if (input[12] < 2.0) {
                            var72 = -0.011872961;
                        } else {
                            var72 = 0.036578316;
                        }
                    } else {
                        if (input[9] < 113.0) {
                            var72 = -0.01954414;
                        } else {
                            var72 = 0.066244766;
                        }
                    }
                } else {
                    if (input[9] < 130.0) {
                        if (input[10] < 114.0) {
                            var72 = 0.003573902;
                        } else {
                            var72 = 0.045329392;
                        }
                    } else {
                        if (input[18] < 193.0) {
                            var72 = -0.015311712;
                        } else {
                            var72 = 0.089423805;
                        }
                    }
                }
            } else {
                if (input[10] < 68.0) {
                    if (input[8] < 297.0) {
                        var72 = 0.11322024;
                    } else {
                        if (input[18] < 144.0) {
                            var72 = -0.035188712;
                        } else {
                            var72 = 0.043522272;
                        }
                    }
                } else {
                    if (input[0] < 52.0) {
                        if (input[18] < 122.0) {
                            var72 = -0.058596153;
                        } else {
                            var72 = -0.008741758;
                        }
                    } else {
                        if (input[8] < 299.4) {
                            var72 = -0.0034073766;
                        } else {
                            var72 = 0.05160742;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 33.55) {
            if (input[18] < 198.0) {
                if (input[9] < 170.0) {
                    if (input[10] < 70.0) {
                        if (input[5] < 32.1) {
                            var72 = -0.012651162;
                        } else {
                            var72 = 0.035170194;
                        }
                    } else {
                        if (input[8] < 167.2) {
                            var72 = -0.013287934;
                        } else {
                            var72 = 0.0011785993;
                        }
                    }
                } else {
                    if (input[5] < 31.79) {
                        if (input[5] < 28.14) {
                            var72 = -0.016634813;
                        } else {
                            var72 = 0.021683974;
                        }
                    } else {
                        if (input[0] < 60.0) {
                            var72 = -0.057814915;
                        } else {
                            var72 = -0.0156031875;
                        }
                    }
                }
            } else {
                if (input[16] < 1.0) {
                    if (input[14] < 1.0) {
                        if (input[18] < 199.0) {
                            var72 = -0.046134446;
                        } else {
                            var72 = 0.042623676;
                        }
                    } else {
                        if (input[0] < 46.0) {
                            var72 = 0.12137693;
                        } else {
                            var72 = 0.04469327;
                        }
                    }
                } else {
                    if (input[8] < 265.3) {
                        if (input[5] < 32.57) {
                            var72 = -0.013140286;
                        } else {
                            var72 = 0.07855958;
                        }
                    } else {
                        if (input[9] < 149.0) {
                            var72 = 0.086206846;
                        } else {
                            var72 = -0.016016109;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 117.0) {
                if (input[8] < 150.6) {
                    var72 = 0.068313845;
                } else {
                    if (input[10] < 97.0) {
                        if (input[5] < 38.45) {
                            var72 = -0.032548152;
                        } else {
                            var72 = 0.0001872418;
                        }
                    } else {
                        if (input[18] < 105.0) {
                            var72 = 0.042449545;
                        } else {
                            var72 = -0.010977929;
                        }
                    }
                }
            } else {
                if (input[9] < 123.0) {
                    if (input[0] < 31.0) {
                        if (input[8] < 159.4) {
                            var72 = 0.049945727;
                        } else {
                            var72 = -0.049066342;
                        }
                    } else {
                        if (input[0] < 52.0) {
                            var72 = 0.06660534;
                        } else {
                            var72 = 0.0146499565;
                        }
                    }
                } else {
                    if (input[8] < 156.4) {
                        if (input[10] < 120.0) {
                            var72 = -0.05289804;
                        } else {
                            var72 = 0.04586207;
                        }
                    } else {
                        if (input[8] < 157.6) {
                            var72 = 0.055851616;
                        } else {
                            var72 = -0.0066459933;
                        }
                    }
                }
            }
        }
    }
    double var73;
    if (input[5] < 20.96) {
        if (input[8] < 153.6) {
            if (input[0] < 62.0) {
                if (input[13] < 3.0) {
                    if (input[18] < 152.0) {
                        if (input[18] < 143.0) {
                            var73 = -0.020579774;
                        } else {
                            var73 = 0.0793077;
                        }
                    } else {
                        if (input[9] < 155.0) {
                            var73 = -0.058926772;
                        } else {
                            var73 = 0.00479329;
                        }
                    }
                } else {
                    if (input[5] < 17.42) {
                        if (input[6] < 1.0) {
                            var73 = -0.05712939;
                        } else {
                            var73 = 0.084701605;
                        }
                    } else {
                        if (input[8] < 151.2) {
                            var73 = 0.0054149483;
                        } else {
                            var73 = 0.086302035;
                        }
                    }
                }
            } else {
                if (input[0] < 83.0) {
                    if (input[8] < 150.6) {
                        if (input[10] < 82.0) {
                            var73 = 0.057248246;
                        } else {
                            var73 = -0.050923843;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var73 = 0.09323003;
                        } else {
                            var73 = 0.03565501;
                        }
                    }
                } else {
                    if (input[18] < 156.0) {
                        if (input[16] < 1.0) {
                            var73 = 0.100218646;
                        } else {
                            var73 = -0.029308314;
                        }
                    } else {
                        if (input[18] < 194.0) {
                            var73 = -0.05956566;
                        } else {
                            var73 = 0.04611918;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 155.2) {
                if (input[2] < 1.0) {
                    if (input[14] < 1.0) {
                        if (input[18] < 121.0) {
                            var73 = 0.044795495;
                        } else {
                            var73 = -0.032738;
                        }
                    } else {
                        if (input[5] < 19.69) {
                            var73 = -0.06265419;
                        } else {
                            var73 = -0.0029356803;
                        }
                    }
                } else {
                    if (input[5] < 18.84) {
                        if (input[18] < 120.0) {
                            var73 = -0.04499587;
                        } else {
                            var73 = 0.0713619;
                        }
                    } else {
                        var73 = -0.054711044;
                    }
                }
            } else {
                if (input[18] < 197.0) {
                    if (input[0] < 88.0) {
                        if (input[9] < 138.0) {
                            var73 = 0.00043104618;
                        } else {
                            var73 = -0.0040297657;
                        }
                    } else {
                        if (input[10] < 126.0) {
                            var73 = 0.006461756;
                        } else {
                            var73 = 0.08225011;
                        }
                    }
                } else {
                    if (input[9] < 97.0) {
                        if (input[12] < 2.0) {
                            var73 = -0.058339607;
                        } else {
                            var73 = -0.010136294;
                        }
                    } else {
                        if (input[10] < 100.0) {
                            var73 = 0.00510773;
                        } else {
                            var73 = 0.035698347;
                        }
                    }
                }
            }
        }
    } else {
        if (input[18] < 171.0) {
            if (input[9] < 165.0) {
                if (input[9] < 156.0) {
                    if (input[0] < 88.0) {
                        if (input[0] < 56.0) {
                            var73 = 0.00016750264;
                        } else {
                            var73 = -0.002990591;
                        }
                    } else {
                        if (input[5] < 30.6) {
                            var73 = -0.0026417652;
                        } else {
                            var73 = -0.025335787;
                        }
                    }
                } else {
                    if (input[14] < 1.0) {
                        if (input[10] < 127.0) {
                            var73 = -0.018022096;
                        } else {
                            var73 = 0.049029887;
                        }
                    } else {
                        if (input[0] < 23.0) {
                            var73 = -0.034658078;
                        } else {
                            var73 = -0.00092608103;
                        }
                    }
                }
            } else {
                if (input[0] < 89.0) {
                    if (input[8] < 261.5) {
                        if (input[3] < 1.0) {
                            var73 = -0.0014689978;
                        } else {
                            var73 = 0.009053083;
                        }
                    } else {
                        if (input[8] < 274.8) {
                            var73 = -0.020819439;
                        } else {
                            var73 = 0.001583086;
                        }
                    }
                } else {
                    if (input[14] < 1.0) {
                        if (input[4] < 2.0) {
                            var73 = -0.0426896;
                        } else {
                            var73 = 0.028320057;
                        }
                    } else {
                        if (input[17] < 1.0) {
                            var73 = 0.07990375;
                        } else {
                            var73 = -0.0051820013;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 172.3) {
                if (input[14] < 2.0) {
                    if (input[5] < 39.34) {
                        if (input[5] < 35.94) {
                            var73 = -0.0025285853;
                        } else {
                            var73 = -0.026087953;
                        }
                    } else {
                        if (input[18] < 186.0) {
                            var73 = 0.06655218;
                        } else {
                            var73 = -0.0012924427;
                        }
                    }
                } else {
                    if (input[10] < 61.0) {
                        if (input[8] < 160.0) {
                            var73 = 0.07938813;
                        } else {
                            var73 = -0.002653521;
                        }
                    } else {
                        if (input[12] < 2.0) {
                            var73 = -0.011435252;
                        } else {
                            var73 = -0.031363245;
                        }
                    }
                }
            } else {
                if (input[5] < 22.02) {
                    if (input[8] < 298.1) {
                        if (input[14] < 2.0) {
                            var73 = -0.023235956;
                        } else {
                            var73 = 0.0046681846;
                        }
                    } else {
                        var73 = 0.102672696;
                    }
                } else {
                    if (input[0] < 81.0) {
                        if (input[0] < 58.0) {
                            var73 = -0.0040098648;
                        } else {
                            var73 = 0.0023888773;
                        }
                    } else {
                        if (input[9] < 176.0) {
                            var73 = -0.012243261;
                        } else {
                            var73 = 0.035826597;
                        }
                    }
                }
            }
        }
    }
    double var74;
    if (input[10] < 62.0) {
        if (input[8] < 205.0) {
            if (input[8] < 188.2) {
                if (input[14] < 2.0) {
                    if (input[13] < 2.0) {
                        if (input[18] < 184.0) {
                            var74 = -0.03686131;
                        } else {
                            var74 = 0.031838354;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var74 = 0.021438507;
                        } else {
                            var74 = -0.033734147;
                        }
                    }
                } else {
                    if (input[12] < 2.0) {
                        if (input[11] < 1.0) {
                            var74 = 0.055884738;
                        } else {
                            var74 = -0.008931908;
                        }
                    } else {
                        if (input[0] < 46.0) {
                            var74 = 0.023385134;
                        } else {
                            var74 = -0.031273566;
                        }
                    }
                }
            } else {
                if (input[9] < 95.0) {
                    if (input[0] < 33.0) {
                        var74 = -0.04007348;
                    } else {
                        var74 = 0.076723404;
                    }
                } else {
                    if (input[0] < 75.0) {
                        if (input[5] < 27.13) {
                            var74 = -0.05620573;
                        } else {
                            var74 = -0.018038033;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var74 = 0.07922695;
                        } else {
                            var74 = -0.040433746;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 174.0) {
                if (input[9] < 169.0) {
                    if (input[5] < 38.06) {
                        if (input[18] < 197.0) {
                            var74 = 0.006167454;
                        } else {
                            var74 = -0.047273465;
                        }
                    } else {
                        if (input[5] < 39.05) {
                            var74 = 0.06404488;
                        } else {
                            var74 = 0.003529104;
                        }
                    }
                } else {
                    if (input[5] < 30.3) {
                        if (input[4] < 2.0) {
                            var74 = 0.034292337;
                        } else {
                            var74 = 0.099304944;
                        }
                    } else {
                        if (input[9] < 172.0) {
                            var74 = 0.02594397;
                        } else {
                            var74 = -0.04845412;
                        }
                    }
                }
            } else {
                if (input[12] < 2.0) {
                    if (input[0] < 81.0) {
                        if (input[18] < 129.0) {
                            var74 = -0.008100696;
                        } else {
                            var74 = -0.06326648;
                        }
                    } else {
                        var74 = 0.002463178;
                    }
                } else {
                    if (input[14] < 2.0) {
                        if (input[5] < 22.64) {
                            var74 = 0.0167976;
                        } else {
                            var74 = -0.05434679;
                        }
                    } else {
                        if (input[18] < 113.0) {
                            var74 = 0.0013324245;
                        } else {
                            var74 = 0.092716835;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 64.0) {
            if (input[18] < 104.0) {
                if (input[14] < 2.0) {
                    if (input[9] < 166.0) {
                        if (input[8] < 172.8) {
                            var74 = -0.016366012;
                        } else {
                            var74 = -0.06214131;
                        }
                    } else {
                        var74 = 0.01637036;
                    }
                } else {
                    if (input[9] < 138.0) {
                        if (input[5] < 23.14) {
                            var74 = 0.048730645;
                        } else {
                            var74 = 0.0029178855;
                        }
                    } else {
                        var74 = -0.03803857;
                    }
                }
            } else {
                if (input[8] < 297.6) {
                    if (input[8] < 295.9) {
                        if (input[5] < 17.52) {
                            var74 = -0.02381853;
                        } else {
                            var74 = -0.0035980083;
                        }
                    } else {
                        if (input[18] < 147.0) {
                            var74 = 0.023999346;
                        } else {
                            var74 = 0.111851655;
                        }
                    }
                } else {
                    if (input[9] < 107.0) {
                        var74 = 0.012573051;
                    } else {
                        if (input[6] < 1.0) {
                            var74 = -0.06280615;
                        } else {
                            var74 = 0.0018894197;
                        }
                    }
                }
            }
        } else {
            if (input[9] < 91.0) {
                if (input[13] < 3.0) {
                    if (input[8] < 270.6) {
                        if (input[14] < 1.0) {
                            var74 = 0.009867228;
                        } else {
                            var74 = -0.018806683;
                        }
                    } else {
                        if (input[5] < 17.92) {
                            var74 = 0.1140154;
                        } else {
                            var74 = 0.0064622858;
                        }
                    }
                } else {
                    if (input[11] < 1.0) {
                        if (input[0] < 72.0) {
                            var74 = -0.05798322;
                        } else {
                            var74 = -0.0021202427;
                        }
                    } else {
                        if (input[8] < 270.6) {
                            var74 = 0.01968156;
                        } else {
                            var74 = -0.052304685;
                        }
                    }
                }
            } else {
                if (input[10] < 65.0) {
                    if (input[18] < 154.0) {
                        if (input[9] < 112.0) {
                            var74 = -0.033323903;
                        } else {
                            var74 = 0.00488102;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var74 = 0.029473295;
                        } else {
                            var74 = -0.0153980525;
                        }
                    }
                } else {
                    if (input[10] < 68.0) {
                        if (input[8] < 256.8) {
                            var74 = -0.009907411;
                        } else {
                            var74 = 0.00613517;
                        }
                    } else {
                        if (input[8] < 246.9) {
                            var74 = -0.00095712155;
                        } else {
                            var74 = -0.0028457518;
                        }
                    }
                }
            }
        }
    }
    double var75;
    if (input[17] < 1.0) {
        if (input[5] < 35.16) {
            if (input[5] < 20.19) {
                if (input[5] < 18.21) {
                    if (input[9] < 92.0) {
                        if (input[8] < 262.7) {
                            var75 = -0.045245975;
                        } else {
                            var75 = 0.03626663;
                        }
                    } else {
                        if (input[13] < 3.0) {
                            var75 = -0.003814489;
                        } else {
                            var75 = 0.005877095;
                        }
                    }
                } else {
                    if (input[8] < 215.8) {
                        if (input[18] < 127.0) {
                            var75 = -0.0040580346;
                        } else {
                            var75 = 0.016324898;
                        }
                    } else {
                        if (input[8] < 239.8) {
                            var75 = -0.020183722;
                        } else {
                            var75 = 0.005163416;
                        }
                    }
                }
            } else {
                if (input[8] < 239.2) {
                    if (input[9] < 173.0) {
                        if (input[10] < 102.0) {
                            var75 = -0.0022066564;
                        } else {
                            var75 = -0.00712469;
                        }
                    } else {
                        if (input[10] < 81.0) {
                            var75 = -0.014711692;
                        } else {
                            var75 = 0.01142307;
                        }
                    }
                } else {
                    if (input[8] < 246.9) {
                        if (input[10] < 122.0) {
                            var75 = 0.0045389147;
                        } else {
                            var75 = 0.032028507;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var75 = -0.0041489997;
                        } else {
                            var75 = 0.002153225;
                        }
                    }
                }
            }
        } else {
            if (input[0] < 89.0) {
                if (input[5] < 36.44) {
                    if (input[6] < 1.0) {
                        if (input[3] < 1.0) {
                            var75 = 0.009963859;
                        } else {
                            var75 = -0.005695376;
                        }
                    } else {
                        if (input[2] < 1.0) {
                            var75 = 0.009792566;
                        } else {
                            var75 = 0.042148344;
                        }
                    }
                } else {
                    if (input[12] < 2.0) {
                        if (input[10] < 94.0) {
                            var75 = -0.010602751;
                        } else {
                            var75 = 0.0009706692;
                        }
                    } else {
                        if (input[9] < 152.0) {
                            var75 = 0.0061621685;
                        } else {
                            var75 = -0.004826915;
                        }
                    }
                }
            } else {
                if (input[10] < 124.0) {
                    if (input[9] < 153.0) {
                        if (input[5] < 39.71) {
                            var75 = -0.054844435;
                        } else {
                            var75 = 0.032975573;
                        }
                    } else {
                        if (input[18] < 154.0) {
                            var75 = 0.066279635;
                        } else {
                            var75 = -0.054823786;
                        }
                    }
                } else {
                    var75 = 0.06536653;
                }
            }
        }
    } else {
        if (input[5] < 39.62) {
            if (input[5] < 15.38) {
                if (input[9] < 124.0) {
                    if (input[18] < 164.0) {
                        if (input[0] < 22.0) {
                            var75 = 0.09817701;
                        } else {
                            var75 = 0.007034171;
                        }
                    } else {
                        var75 = 0.115034156;
                    }
                } else {
                    if (input[0] < 63.0) {
                        if (input[9] < 127.0) {
                            var75 = -0.054631658;
                        } else {
                            var75 = 0.01791404;
                        }
                    } else {
                        if (input[8] < 160.6) {
                            var75 = 0.0027108784;
                        } else {
                            var75 = -0.06420589;
                        }
                    }
                }
            } else {
                if (input[9] < 168.0) {
                    if (input[9] < 133.0) {
                        if (input[8] < 205.0) {
                            var75 = -0.010298473;
                        } else {
                            var75 = -0.0011231521;
                        }
                    } else {
                        if (input[10] < 125.0) {
                            var75 = -0.0007724689;
                        } else {
                            var75 = 0.020047149;
                        }
                    }
                } else {
                    if (input[18] < 185.0) {
                        if (input[4] < 2.0) {
                            var75 = -0.0005843926;
                        } else {
                            var75 = -0.014679179;
                        }
                    } else {
                        if (input[10] < 68.0) {
                            var75 = 0.0054594507;
                        } else {
                            var75 = -0.031247688;
                        }
                    }
                }
            }
        } else {
            if (input[13] < 3.0) {
                if (input[8] < 254.9) {
                    if (input[10] < 65.0) {
                        if (input[3] < 1.0) {
                            var75 = 0.080368094;
                        } else {
                            var75 = 0.0014024603;
                        }
                    } else {
                        if (input[8] < 246.2) {
                            var75 = -0.04022337;
                        } else {
                            var75 = 0.042254407;
                        }
                    }
                } else {
                    var75 = -0.0633158;
                }
            } else {
                if (input[0] < 61.0) {
                    if (input[4] < 1.0) {
                        var75 = 0.042016678;
                    } else {
                        if (input[8] < 236.9) {
                            var75 = -0.05851528;
                        } else {
                            var75 = -0.003458853;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[8] < 197.1) {
                            var75 = 0.024792396;
                        } else {
                            var75 = 0.1021147;
                        }
                    } else {
                        var75 = -0.00783429;
                    }
                }
            }
        }
    }
    double var76;
    if (input[10] < 62.0) {
        if (input[8] < 214.0) {
            if (input[16] < 2.0) {
                if (input[18] < 196.0) {
                    if (input[0] < 83.0) {
                        if (input[5] < 27.33) {
                            var76 = 0.015371728;
                        } else {
                            var76 = -0.01067163;
                        }
                    } else {
                        if (input[9] < 135.0) {
                            var76 = -0.06175665;
                        } else {
                            var76 = 0.009309909;
                        }
                    }
                } else {
                    if (input[9] < 101.0) {
                        var76 = -0.0018295468;
                    } else {
                        var76 = 0.10244006;
                    }
                }
            } else {
                if (input[9] < 94.0) {
                    var76 = 0.062467396;
                } else {
                    if (input[5] < 37.71) {
                        if (input[17] < 1.0) {
                            var76 = -0.018433353;
                        } else {
                            var76 = -0.061701138;
                        }
                    } else {
                        if (input[9] < 126.0) {
                            var76 = 0.063232966;
                        } else {
                            var76 = -0.046022348;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 217.5) {
                if (input[15] < 1.0) {
                    if (input[9] < 136.0) {
                        if (input[9] < 123.0) {
                            var76 = 0.084149554;
                        } else {
                            var76 = -0.054085523;
                        }
                    } else {
                        if (input[5] < 27.03) {
                            var76 = 0.03147018;
                        } else {
                            var76 = 0.10446365;
                        }
                    }
                } else {
                    var76 = -0.03799108;
                }
            } else {
                if (input[14] < 1.0) {
                    if (input[9] < 95.0) {
                        if (input[5] < 32.68) {
                            var76 = 0.08176129;
                        } else {
                            var76 = -0.013163979;
                        }
                    } else {
                        if (input[9] < 103.0) {
                            var76 = -0.05481484;
                        } else {
                            var76 = -0.005169855;
                        }
                    }
                } else {
                    if (input[0] < 39.0) {
                        if (input[9] < 176.0) {
                            var76 = 0.039487515;
                        } else {
                            var76 = -0.053319003;
                        }
                    } else {
                        if (input[8] < 242.8) {
                            var76 = -0.011466425;
                        } else {
                            var76 = 0.013520216;
                        }
                    }
                }
            }
        }
    } else {
        if (input[10] < 64.0) {
            if (input[0] < 47.0) {
                if (input[4] < 1.0) {
                    if (input[11] < 1.0) {
                        if (input[10] < 63.0) {
                            var76 = 0.05831159;
                        } else {
                            var76 = 0.0049027028;
                        }
                    } else {
                        if (input[9] < 96.0) {
                            var76 = 0.06717709;
                        } else {
                            var76 = -0.03741698;
                        }
                    }
                } else {
                    if (input[10] < 63.0) {
                        if (input[5] < 31.2) {
                            var76 = -0.021895286;
                        } else {
                            var76 = -0.049666956;
                        }
                    } else {
                        if (input[9] < 153.0) {
                            var76 = 0.013684826;
                        } else {
                            var76 = -0.039847065;
                        }
                    }
                }
            } else {
                if (input[9] < 136.0) {
                    if (input[8] < 286.5) {
                        if (input[8] < 213.4) {
                            var76 = -0.020676998;
                        } else {
                            var76 = 0.0069167386;
                        }
                    } else {
                        if (input[5] < 37.3) {
                            var76 = -0.05250066;
                        } else {
                            var76 = 0.046728738;
                        }
                    }
                } else {
                    if (input[0] < 89.0) {
                        if (input[9] < 148.0) {
                            var76 = 0.022100387;
                        } else {
                            var76 = 0.00069628254;
                        }
                    } else {
                        var76 = -0.054457147;
                    }
                }
            }
        } else {
            if (input[9] < 91.0) {
                if (input[14] < 1.0) {
                    if (input[5] < 24.78) {
                        if (input[15] < 1.0) {
                            var76 = -0.02849334;
                        } else {
                            var76 = 0.03827819;
                        }
                    } else {
                        if (input[8] < 174.0) {
                            var76 = -0.015347189;
                        } else {
                            var76 = 0.045216285;
                        }
                    }
                } else {
                    if (input[10] < 99.0) {
                        if (input[8] < 155.8) {
                            var76 = 0.031234354;
                        } else {
                            var76 = -0.036590792;
                        }
                    } else {
                        if (input[18] < 171.0) {
                            var76 = -0.013092424;
                        } else {
                            var76 = 0.034256957;
                        }
                    }
                }
            } else {
                if (input[10] < 65.0) {
                    if (input[9] < 171.0) {
                        if (input[9] < 153.0) {
                            var76 = 0.0024424994;
                        } else {
                            var76 = 0.030874401;
                        }
                    } else {
                        if (input[6] < 1.0) {
                            var76 = -0.03518353;
                        } else {
                            var76 = 0.01208262;
                        }
                    }
                } else {
                    if (input[9] < 96.0) {
                        if (input[9] < 95.0) {
                            var76 = -0.00078214257;
                        } else {
                            var76 = 0.012241664;
                        }
                    } else {
                        if (input[5] < 16.65) {
                            var76 = 0.0018855945;
                        } else {
                            var76 = -0.0018421272;
                        }
                    }
                }
            }
        }
    }
    double var77;
    if (input[6] < 1.0) {
        if (input[0] < 84.0) {
            if (input[8] < 292.5) {
                if (input[8] < 290.7) {
                    if (input[18] < 103.0) {
                        if (input[0] < 21.0) {
                            var77 = 0.052430958;
                        } else {
                            var77 = 0.003468689;
                        }
                    } else {
                        if (input[10] < 62.0) {
                            var77 = 0.0053398577;
                        } else {
                            var77 = -0.0017849159;
                        }
                    }
                } else {
                    if (input[18] < 134.0) {
                        if (input[10] < 84.0) {
                            var77 = -0.024971746;
                        } else {
                            var77 = 0.02658671;
                        }
                    } else {
                        if (input[9] < 177.0) {
                            var77 = -0.02441434;
                        } else {
                            var77 = 0.06463782;
                        }
                    }
                }
            } else {
                if (input[5] < 39.05) {
                    if (input[4] < 2.0) {
                        if (input[8] < 294.8) {
                            var77 = 0.022049956;
                        } else {
                            var77 = 0.0011867693;
                        }
                    } else {
                        if (input[5] < 19.42) {
                            var77 = 0.021072969;
                        } else {
                            var77 = -0.012253711;
                        }
                    }
                } else {
                    if (input[18] < 142.0) {
                        if (input[5] < 39.51) {
                            var77 = 0.07112527;
                        } else {
                            var77 = -0.034546796;
                        }
                    } else {
                        if (input[0] < 35.0) {
                            var77 = -0.015551579;
                        } else {
                            var77 = 0.11102515;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 154.6) {
                if (input[16] < 1.0) {
                    if (input[8] < 153.6) {
                        if (input[18] < 156.0) {
                            var77 = 0.07935994;
                        } else {
                            var77 = -0.034905884;
                        }
                    } else {
                        var77 = -0.055146355;
                    }
                } else {
                    if (input[9] < 112.0) {
                        if (input[9] < 104.0) {
                            var77 = -0.043875664;
                        } else {
                            var77 = 0.0535699;
                        }
                    } else {
                        if (input[18] < 191.0) {
                            var77 = -0.06634714;
                        } else {
                            var77 = -0.0069687488;
                        }
                    }
                }
            } else {
                if (input[5] < 15.48) {
                    if (input[9] < 132.0) {
                        if (input[9] < 123.0) {
                            var77 = -0.03216903;
                        } else {
                            var77 = 0.0662037;
                        }
                    } else {
                        if (input[18] < 189.0) {
                            var77 = -0.064675905;
                        } else {
                            var77 = 0.002978442;
                        }
                    }
                } else {
                    if (input[10] < 117.0) {
                        if (input[0] < 85.0) {
                            var77 = -0.017646005;
                        } else {
                            var77 = -0.003444594;
                        }
                    } else {
                        if (input[8] < 176.9) {
                            var77 = 0.04386445;
                        } else {
                            var77 = -0.00044098744;
                        }
                    }
                }
            }
        }
    } else {
        if (input[8] < 283.6) {
            if (input[9] < 156.0) {
                if (input[1] < 1.0) {
                    if (input[8] < 185.3) {
                        if (input[9] < 97.0) {
                            var77 = -0.028730556;
                        } else {
                            var77 = 0.0009291402;
                        }
                    } else {
                        if (input[9] < 149.0) {
                            var77 = 0.006496864;
                        } else {
                            var77 = 0.02684699;
                        }
                    }
                } else {
                    if (input[8] < 161.2) {
                        if (input[9] < 151.0) {
                            var77 = 0.0077821813;
                        } else {
                            var77 = 0.073769994;
                        }
                    } else {
                        if (input[18] < 178.0) {
                            var77 = 0.001297926;
                        } else {
                            var77 = -0.01046568;
                        }
                    }
                }
            } else {
                if (input[0] < 89.0) {
                    if (input[12] < 1.0) {
                        if (input[13] < 1.0) {
                            var77 = -0.014239459;
                        } else {
                            var77 = 0.011985425;
                        }
                    } else {
                        if (input[10] < 64.0) {
                            var77 = -0.029168624;
                        } else {
                            var77 = -0.0056022718;
                        }
                    }
                } else {
                    if (input[3] < 1.0) {
                        if (input[18] < 154.0) {
                            var77 = 0.050090313;
                        } else {
                            var77 = -0.053045113;
                        }
                    } else {
                        if (input[13] < 3.0) {
                            var77 = 0.11218522;
                        } else {
                            var77 = 0.023544509;
                        }
                    }
                }
            }
        } else {
            if (input[10] < 86.0) {
                if (input[13] < 3.0) {
                    if (input[18] < 181.0) {
                        if (input[10] < 82.0) {
                            var77 = -0.022564696;
                        } else {
                            var77 = 0.021536998;
                        }
                    } else {
                        if (input[8] < 284.8) {
                            var77 = 0.116807304;
                        } else {
                            var77 = 0.020664742;
                        }
                    }
                } else {
                    if (input[10] < 69.0) {
                        if (input[0] < 52.0) {
                            var77 = 0.008168708;
                        } else {
                            var77 = 0.10004538;
                        }
                    } else {
                        if (input[10] < 77.0) {
                            var77 = -0.029968495;
                        } else {
                            var77 = 0.041810106;
                        }
                    }
                }
            } else {
                if (input[5] < 38.45) {
                    if (input[0] < 61.0) {
                        if (input[0] < 57.0) {
                            var77 = -0.018159723;
                        } else {
                            var77 = -0.062787496;
                        }
                    } else {
                        if (input[18] < 145.0) {
                            var77 = 0.020463172;
                        } else {
                            var77 = -0.022833427;
                        }
                    }
                } else {
                    if (input[0] < 32.0) {
                        if (input[1] < 1.0) {
                            var77 = 0.04484948;
                        } else {
                            var77 = -0.03823044;
                        }
                    } else {
                        var77 = -0.06526034;
                    }
                }
            }
        }
    }
    double var78;
    if (input[18] < 195.0) {
        if (input[18] < 171.0) {
            if (input[14] < 1.0) {
                if (input[13] < 2.0) {
                    if (input[18] < 139.0) {
                        if (input[0] < 56.0) {
                            var78 = 0.0010343464;
                        } else {
                            var78 = -0.0076455954;
                        }
                    } else {
                        if (input[15] < 1.0) {
                            var78 = 0.0029279504;
                        } else {
                            var78 = 0.02382415;
                        }
                    }
                } else {
                    if (input[10] < 129.0) {
                        if (input[18] < 170.0) {
                            var78 = -0.0062729414;
                        } else {
                            var78 = 0.021480668;
                        }
                    } else {
                        if (input[0] < 46.0) {
                            var78 = -0.0059143524;
                        } else {
                            var78 = 0.053274047;
                        }
                    }
                }
            } else {
                if (input[5] < 16.17) {
                    if (input[0] < 76.0) {
                        if (input[10] < 124.0) {
                            var78 = -0.0032638758;
                        } else {
                            var78 = 0.025501976;
                        }
                    } else {
                        if (input[10] < 78.0) {
                            var78 = -0.0057900767;
                        } else {
                            var78 = -0.0393371;
                        }
                    }
                } else {
                    if (input[9] < 91.0) {
                        if (input[10] < 64.0) {
                            var78 = 0.0674208;
                        } else {
                            var78 = -0.021067936;
                        }
                    } else {
                        if (input[5] < 16.75) {
                            var78 = 0.009661895;
                        } else {
                            var78 = 0.00023620394;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 157.6) {
                if (input[3] < 1.0) {
                    if (input[9] < 176.0) {
                        if (input[10] < 70.0) {
                            var78 = 0.011463618;
                        } else {
                            var78 = -0.035310466;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var78 = 0.09283226;
                        } else {
                            var78 = -0.04527805;
                        }
                    }
                } else {
                    if (input[18] < 177.0) {
                        if (input[5] < 17.52) {
                            var78 = -0.05050222;
                        } else {
                            var78 = 0.05203079;
                        }
                    } else {
                        if (input[11] < 1.0) {
                            var78 = -0.023654342;
                        } else {
                            var78 = 0.01522996;
                        }
                    }
                }
            } else {
                if (input[9] < 171.0) {
                    if (input[9] < 142.0) {
                        if (input[9] < 104.0) {
                            var78 = 0.0023035852;
                        } else {
                            var78 = -0.005531649;
                        }
                    } else {
                        if (input[0] < 24.0) {
                            var78 = -0.014871828;
                        } else {
                            var78 = 0.0045260782;
                        }
                    }
                } else {
                    if (input[5] < 25.84) {
                        if (input[8] < 265.9) {
                            var78 = -0.0053670257;
                        } else {
                            var78 = 0.026988385;
                        }
                    } else {
                        if (input[10] < 129.0) {
                            var78 = -0.017969683;
                        } else {
                            var78 = 0.050929572;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 32.96) {
            if (input[8] < 160.6) {
                if (input[9] < 115.0) {
                    if (input[9] < 100.0) {
                        if (input[11] < 1.0) {
                            var78 = 0.088586785;
                        } else {
                            var78 = -0.04119251;
                        }
                    } else {
                        if (input[0] < 79.0) {
                            var78 = -0.040782087;
                        } else {
                            var78 = 0.029726788;
                        }
                    }
                } else {
                    if (input[18] < 196.0) {
                        var78 = 0.10541898;
                    } else {
                        if (input[5] < 20.38) {
                            var78 = 0.06888249;
                        } else {
                            var78 = 0.010545945;
                        }
                    }
                }
            } else {
                if (input[5] < 16.27) {
                    if (input[8] < 232.6) {
                        if (input[10] < 122.0) {
                            var78 = -0.012599132;
                        } else {
                            var78 = 0.08523115;
                        }
                    } else {
                        if (input[10] < 100.0) {
                            var78 = 0.01643951;
                        } else {
                            var78 = 0.08870084;
                        }
                    }
                } else {
                    if (input[5] < 29.52) {
                        if (input[0] < 28.0) {
                            var78 = -0.021958193;
                        } else {
                            var78 = 0.0018378726;
                        }
                    } else {
                        if (input[0] < 79.0) {
                            var78 = 0.024751937;
                        } else {
                            var78 = -0.024125112;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 33.28) {
                var78 = -0.06207338;
            } else {
                if (input[9] < 97.0) {
                    if (input[10] < 106.0) {
                        var78 = -0.06269207;
                    } else {
                        if (input[9] < 93.0) {
                            var78 = 0.047675837;
                        } else {
                            var78 = -0.04032521;
                        }
                    }
                } else {
                    if (input[0] < 87.0) {
                        if (input[0] < 84.0) {
                            var78 = -0.004023853;
                        } else {
                            var78 = -0.054610103;
                        }
                    } else {
                        if (input[5] < 34.77) {
                            var78 = 0.113013916;
                        } else {
                            var78 = 0.008912048;
                        }
                    }
                }
            }
        }
    }
    double var79;
    if (input[15] < 1.0) {
        if (input[6] < 1.0) {
            if (input[10] < 116.0) {
                if (input[10] < 110.0) {
                    if (input[13] < 2.0) {
                        if (input[5] < 36.44) {
                            var79 = -0.0014737529;
                        } else {
                            var79 = -0.007717684;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var79 = -0.0035481832;
                        } else {
                            var79 = 0.0019659896;
                        }
                    }
                } else {
                    if (input[8] < 204.5) {
                        if (input[16] < 2.0) {
                            var79 = -0.021454953;
                        } else {
                            var79 = 0.0023251665;
                        }
                    } else {
                        if (input[8] < 215.2) {
                            var79 = 0.01830594;
                        } else {
                            var79 = -0.0045901565;
                        }
                    }
                }
            } else {
                if (input[12] < 1.0) {
                    if (input[9] < 155.0) {
                        if (input[0] < 25.0) {
                            var79 = 0.025205811;
                        } else {
                            var79 = -0.0046149367;
                        }
                    } else {
                        if (input[9] < 178.0) {
                            var79 = -0.02273407;
                        } else {
                            var79 = 0.043649852;
                        }
                    }
                } else {
                    if (input[10] < 126.0) {
                        if (input[8] < 253.7) {
                            var79 = 0.0024356793;
                        } else {
                            var79 = 0.012512892;
                        }
                    } else {
                        if (input[0] < 88.0) {
                            var79 = -0.0053454777;
                        } else {
                            var79 = 0.049472798;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 251.4) {
                if (input[0] < 57.0) {
                    if (input[12] < 2.0) {
                        if (input[8] < 226.7) {
                            var79 = -0.0014731621;
                        } else {
                            var79 = -0.014867772;
                        }
                    } else {
                        if (input[9] < 100.0) {
                            var79 = 0.03096786;
                        } else {
                            var79 = 0.00056813733;
                        }
                    }
                } else {
                    if (input[8] < 247.4) {
                        if (input[18] < 111.0) {
                            var79 = -0.009709084;
                        } else {
                            var79 = 0.008665099;
                        }
                    } else {
                        if (input[5] < 36.16) {
                            var79 = 0.020269375;
                        } else {
                            var79 = 0.08668763;
                        }
                    }
                }
            } else {
                if (input[0] < 33.0) {
                    if (input[10] < 123.0) {
                        if (input[18] < 119.0) {
                            var79 = -0.015725221;
                        } else {
                            var79 = 0.019546865;
                        }
                    } else {
                        if (input[9] < 111.0) {
                            var79 = 0.030592907;
                        } else {
                            var79 = -0.053583175;
                        }
                    }
                } else {
                    if (input[10] < 68.0) {
                        if (input[2] < 1.0) {
                            var79 = 0.001148336;
                        } else {
                            var79 = 0.049428545;
                        }
                    } else {
                        if (input[5] < 38.24) {
                            var79 = -0.0071124616;
                        } else {
                            var79 = -0.040335204;
                        }
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.0) {
            if (input[5] < 23.44) {
                if (input[10] < 112.0) {
                    if (input[0] < 69.0) {
                        if (input[9] < 138.0) {
                            var79 = 0.0036758631;
                        } else {
                            var79 = -0.02133299;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var79 = 0.031024737;
                        } else {
                            var79 = -0.0304988;
                        }
                    }
                } else {
                    if (input[10] < 114.0) {
                        if (input[5] < 18.43) {
                            var79 = 0.04573516;
                        } else {
                            var79 = 0.11919414;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var79 = -0.026050031;
                        } else {
                            var79 = 0.017639881;
                        }
                    }
                }
            } else {
                if (input[5] < 25.94) {
                    if (input[17] < 1.0) {
                        if (input[10] < 122.0) {
                            var79 = -0.021532854;
                        } else {
                            var79 = 0.020960655;
                        }
                    } else {
                        if (input[9] < 101.0) {
                            var79 = 0.005530033;
                        } else {
                            var79 = -0.059044607;
                        }
                    }
                } else {
                    if (input[8] < 160.0) {
                        if (input[8] < 156.4) {
                            var79 = -0.00888076;
                        } else {
                            var79 = 0.055709746;
                        }
                    } else {
                        if (input[0] < 65.0) {
                            var79 = -0.004614316;
                        } else {
                            var79 = -0.016599972;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 35.36) {
                if (input[5] < 33.46) {
                    if (input[9] < 154.0) {
                        if (input[8] < 158.2) {
                            var79 = 0.036047008;
                        } else {
                            var79 = -0.006017198;
                        }
                    } else {
                        if (input[11] < 1.0) {
                            var79 = 0.00003517655;
                        } else {
                            var79 = 0.026067693;
                        }
                    }
                } else {
                    if (input[17] < 1.0) {
                        if (input[0] < 33.0) {
                            var79 = -0.00031676577;
                        } else {
                            var79 = -0.034478184;
                        }
                    } else {
                        if (input[10] < 111.0) {
                            var79 = -0.010748907;
                        } else {
                            var79 = 0.05461083;
                        }
                    }
                }
            } else {
                if (input[9] < 119.0) {
                    if (input[0] < 49.0) {
                        if (input[5] < 35.66) {
                            var79 = 0.04596099;
                        } else {
                            var79 = -0.038875353;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var79 = -0.028150886;
                        } else {
                            var79 = 0.020802202;
                        }
                    }
                } else {
                    if (input[18] < 122.0) {
                        if (input[8] < 233.2) {
                            var79 = -0.027010715;
                        } else {
                            var79 = 0.028843418;
                        }
                    } else {
                        if (input[10] < 111.0) {
                            var79 = 0.040400136;
                        } else {
                            var79 = 0.00870465;
                        }
                    }
                }
            }
        }
    }
    double var80;
    if (input[17] < 1.0) {
        if (input[5] < 34.46) {
            if (input[5] < 33.87) {
                if (input[9] < 179.0) {
                    if (input[18] < 195.0) {
                        if (input[16] < 2.0) {
                            var80 = -0.000315056;
                        } else {
                            var80 = -0.0028296409;
                        }
                    } else {
                        if (input[5] < 32.96) {
                            var80 = 0.0064049126;
                        } else {
                            var80 = -0.029877186;
                        }
                    }
                } else {
                    if (input[0] < 31.0) {
                        if (input[16] < 2.0) {
                            var80 = 0.013388653;
                        } else {
                            var80 = 0.09104402;
                        }
                    } else {
                        if (input[5] < 27.33) {
                            var80 = -0.0065697297;
                        } else {
                            var80 = 0.028886601;
                        }
                    }
                }
            } else {
                if (input[8] < 268.2) {
                    if (input[8] < 231.4) {
                        if (input[9] < 93.0) {
                            var80 = 0.057692178;
                        } else {
                            var80 = -0.010323605;
                        }
                    } else {
                        if (input[10] < 126.0) {
                            var80 = -0.031453766;
                        } else {
                            var80 = 0.023969399;
                        }
                    }
                } else {
                    if (input[16] < 2.0) {
                        if (input[5] < 34.36) {
                            var80 = 0.042017557;
                        } else {
                            var80 = -0.030700115;
                        }
                    } else {
                        if (input[10] < 99.0) {
                            var80 = 0.010861858;
                        } else {
                            var80 = -0.041848306;
                        }
                    }
                }
            }
        } else {
            if (input[0] < 89.0) {
                if (input[12] < 2.0) {
                    if (input[13] < 3.0) {
                        if (input[10] < 94.0) {
                            var80 = -0.009008869;
                        } else {
                            var80 = 0.0012644891;
                        }
                    } else {
                        if (input[8] < 256.1) {
                            var80 = 0.014094452;
                        } else {
                            var80 = -0.008218664;
                        }
                    }
                } else {
                    if (input[16] < 2.0) {
                        if (input[10] < 88.0) {
                            var80 = 0.0074785003;
                        } else {
                            var80 = -0.0028903084;
                        }
                    } else {
                        if (input[18] < 123.0) {
                            var80 = 0.026069183;
                        } else {
                            var80 = 0.0061113336;
                        }
                    }
                }
            } else {
                if (input[18] < 107.0) {
                    var80 = 0.0782854;
                } else {
                    if (input[9] < 177.0) {
                        if (input[10] < 124.0) {
                            var80 = -0.042020258;
                        } else {
                            var80 = 0.045239888;
                        }
                    } else {
                        var80 = 0.08208447;
                    }
                }
            }
        }
    } else {
        if (input[5] < 39.62) {
            if (input[8] < 297.6) {
                if (input[5] < 15.38) {
                    if (input[9] < 136.0) {
                        if (input[18] < 108.0) {
                            var80 = -0.037860025;
                        } else {
                            var80 = 0.059107065;
                        }
                    } else {
                        if (input[0] < 63.0) {
                            var80 = 0.0001327255;
                        } else {
                            var80 = -0.05314827;
                        }
                    }
                } else {
                    if (input[10] < 90.0) {
                        if (input[12] < 2.0) {
                            var80 = 0.00048478023;
                        } else {
                            var80 = -0.008963774;
                        }
                    } else {
                        if (input[18] < 113.0) {
                            var80 = 0.009294395;
                        } else {
                            var80 = -0.0012298276;
                        }
                    }
                }
            } else {
                if (input[0] < 47.0) {
                    if (input[9] < 111.0) {
                        if (input[4] < 2.0) {
                            var80 = 0.11726203;
                        } else {
                            var80 = -0.0069807507;
                        }
                    } else {
                        if (input[10] < 121.0) {
                            var80 = -0.039915618;
                        } else {
                            var80 = 0.08864286;
                        }
                    }
                } else {
                    if (input[0] < 81.0) {
                        if (input[18] < 195.0) {
                            var80 = -0.052109834;
                        } else {
                            var80 = 0.005261603;
                        }
                    } else {
                        if (input[9] < 116.0) {
                            var80 = -0.05068312;
                        } else {
                            var80 = 0.046459015;
                        }
                    }
                }
            }
        } else {
            if (input[13] < 3.0) {
                if (input[8] < 254.9) {
                    if (input[10] < 65.0) {
                        if (input[3] < 1.0) {
                            var80 = 0.07700577;
                        } else {
                            var80 = 0.001131309;
                        }
                    } else {
                        if (input[8] < 246.2) {
                            var80 = -0.038494606;
                        } else {
                            var80 = 0.040973514;
                        }
                    }
                } else {
                    var80 = -0.06197256;
                }
            } else {
                if (input[0] < 61.0) {
                    if (input[4] < 1.0) {
                        var80 = 0.041016918;
                    } else {
                        if (input[8] < 236.9) {
                            var80 = -0.057209905;
                        } else {
                            var80 = -0.0039012672;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[8] < 197.1) {
                            var80 = 0.024391267;
                        } else {
                            var80 = 0.09783502;
                        }
                    } else {
                        var80 = -0.007515849;
                    }
                }
            }
        }
    }
    double var81;
    if (input[15] < 1.0) {
        if (input[18] < 129.0) {
            if (input[5] < 29.52) {
                if (input[12] < 1.0) {
                    if (input[10] < 103.0) {
                        if (input[14] < 2.0) {
                            var81 = 0.023892313;
                        } else {
                            var81 = 0.0006588037;
                        }
                    } else {
                        if (input[8] < 212.2) {
                            var81 = 0.010255085;
                        } else {
                            var81 = -0.01774111;
                        }
                    }
                } else {
                    if (input[10] < 119.0) {
                        if (input[8] < 214.0) {
                            var81 = -0.009822401;
                        } else {
                            var81 = -0.0019050824;
                        }
                    } else {
                        if (input[9] < 172.0) {
                            var81 = 0.012256241;
                        } else {
                            var81 = -0.034893963;
                        }
                    }
                }
            } else {
                if (input[10] < 121.0) {
                    if (input[10] < 115.0) {
                        if (input[9] < 110.0) {
                            var81 = -0.0029730906;
                        } else {
                            var81 = 0.005939553;
                        }
                    } else {
                        if (input[5] < 38.24) {
                            var81 = 0.02432837;
                        } else {
                            var81 = -0.020984856;
                        }
                    }
                } else {
                    if (input[5] < 32.57) {
                        if (input[5] < 32.2) {
                            var81 = -0.00084773445;
                        } else {
                            var81 = 0.1049572;
                        }
                    } else {
                        if (input[18] < 105.0) {
                            var81 = 0.017806364;
                        } else {
                            var81 = -0.022436272;
                        }
                    }
                }
            }
        } else {
            if (input[18] < 138.0) {
                if (input[14] < 1.0) {
                    if (input[5] < 17.13) {
                        if (input[18] < 136.0) {
                            var81 = -0.044651754;
                        } else {
                            var81 = 0.011473379;
                        }
                    } else {
                        if (input[13] < 2.0) {
                            var81 = -0.003318837;
                        } else {
                            var81 = -0.01900529;
                        }
                    }
                } else {
                    if (input[10] < 78.0) {
                        if (input[12] < 1.0) {
                            var81 = -0.031274773;
                        } else {
                            var81 = -0.0073683183;
                        }
                    } else {
                        if (input[9] < 127.0) {
                            var81 = 0.013511732;
                        } else {
                            var81 = -0.0028570944;
                        }
                    }
                }
            } else {
                if (input[10] < 80.0) {
                    if (input[5] < 25.46) {
                        if (input[8] < 193.6) {
                            var81 = 0.013049774;
                        } else {
                            var81 = 0.0027821322;
                        }
                    } else {
                        if (input[8] < 176.3) {
                            var81 = -0.012665853;
                        } else {
                            var81 = 0.0011682381;
                        }
                    }
                } else {
                    if (input[8] < 262.7) {
                        if (input[3] < 1.0) {
                            var81 = -0.002360059;
                        } else {
                            var81 = 0.0026645435;
                        }
                    } else {
                        if (input[8] < 264.2) {
                            var81 = -0.02341218;
                        } else {
                            var81 = -0.0035029945;
                        }
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.0) {
            if (input[5] < 23.44) {
                if (input[10] < 112.0) {
                    if (input[0] < 69.0) {
                        if (input[0] < 51.0) {
                            var81 = 0.00091844547;
                        } else {
                            var81 = -0.0252596;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var81 = 0.029369205;
                        } else {
                            var81 = -0.029216109;
                        }
                    }
                } else {
                    if (input[10] < 114.0) {
                        if (input[10] < 113.0) {
                            var81 = 0.04289573;
                        } else {
                            var81 = 0.11016512;
                        }
                    } else {
                        if (input[12] < 1.0) {
                            var81 = -0.024929151;
                        } else {
                            var81 = 0.016835239;
                        }
                    }
                }
            } else {
                if (input[0] < 87.0) {
                    if (input[5] < 26.03) {
                        if (input[17] < 1.0) {
                            var81 = -0.013831762;
                        } else {
                            var81 = -0.045143183;
                        }
                    } else {
                        if (input[8] < 160.0) {
                            var81 = 0.020414377;
                        } else {
                            var81 = -0.007179146;
                        }
                    }
                } else {
                    if (input[5] < 31.99) {
                        if (input[9] < 131.0) {
                            var81 = -0.05423531;
                        } else {
                            var81 = 0.020209542;
                        }
                    } else {
                        if (input[9] < 93.0) {
                            var81 = 0.0048132585;
                        } else {
                            var81 = -0.05930472;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 35.36) {
                if (input[5] < 33.46) {
                    if (input[9] < 154.0) {
                        if (input[8] < 158.2) {
                            var81 = 0.034251746;
                        } else {
                            var81 = -0.005510845;
                        }
                    } else {
                        if (input[11] < 1.0) {
                            var81 = 0.00021856348;
                        } else {
                            var81 = 0.024632927;
                        }
                    }
                } else {
                    if (input[10] < 106.0) {
                        if (input[10] < 90.0) {
                            var81 = -0.014106912;
                        } else {
                            var81 = -0.054653566;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var81 = 0.025611946;
                        } else {
                            var81 = -0.031430926;
                        }
                    }
                }
            } else {
                if (input[9] < 119.0) {
                    if (input[0] < 49.0) {
                        if (input[5] < 35.66) {
                            var81 = 0.043808524;
                        } else {
                            var81 = -0.037467718;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var81 = -0.026982848;
                        } else {
                            var81 = 0.019582888;
                        }
                    }
                } else {
                    if (input[18] < 137.0) {
                        if (input[0] < 51.0) {
                            var81 = -0.019865735;
                        } else {
                            var81 = 0.026098877;
                        }
                    } else {
                        if (input[8] < 173.5) {
                            var81 = -0.014332068;
                        } else {
                            var81 = 0.039009094;
                        }
                    }
                }
            }
        }
    }
    double var82;
    if (input[15] < 1.0) {
        if (input[9] < 91.0) {
            if (input[10] < 64.0) {
                if (input[5] < 23.83) {
                    if (input[5] < 19.52) {
                        var82 = 0.024081452;
                    } else {
                        var82 = -0.049518056;
                    }
                } else {
                    if (input[10] < 61.0) {
                        var82 = 0.018942622;
                    } else {
                        var82 = 0.10050465;
                    }
                }
            } else {
                if (input[13] < 3.0) {
                    if (input[5] < 16.07) {
                        if (input[10] < 85.0) {
                            var82 = -0.026281355;
                        } else {
                            var82 = 0.09700431;
                        }
                    } else {
                        if (input[5] < 28.04) {
                            var82 = -0.028752152;
                        } else {
                            var82 = 0.0075597265;
                        }
                    }
                } else {
                    if (input[11] < 1.0) {
                        if (input[0] < 20.0) {
                            var82 = 0.010814131;
                        } else {
                            var82 = -0.0551637;
                        }
                    } else {
                        if (input[17] < 1.0) {
                            var82 = -0.018899279;
                        } else {
                            var82 = 0.10141287;
                        }
                    }
                }
            }
        } else {
            if (input[18] < 129.0) {
                if (input[12] < 1.0) {
                    if (input[0] < 31.0) {
                        if (input[9] < 136.0) {
                            var82 = 0.0061845332;
                        } else {
                            var82 = 0.03293266;
                        }
                    } else {
                        if (input[10] < 95.0) {
                            var82 = 0.009823286;
                        } else {
                            var82 = -0.005895653;
                        }
                    }
                } else {
                    if (input[5] < 29.52) {
                        if (input[10] < 119.0) {
                            var82 = -0.0050062933;
                        } else {
                            var82 = 0.008018891;
                        }
                    } else {
                        if (input[5] < 30.21) {
                            var82 = 0.0210703;
                        } else {
                            var82 = 0.0029264893;
                        }
                    }
                }
            } else {
                if (input[18] < 138.0) {
                    if (input[14] < 1.0) {
                        if (input[5] < 17.13) {
                            var82 = -0.03613412;
                        } else {
                            var82 = -0.009771398;
                        }
                    } else {
                        if (input[10] < 78.0) {
                            var82 = -0.012051061;
                        } else {
                            var82 = 0.0038416707;
                        }
                    }
                } else {
                    if (input[8] < 157.6) {
                        if (input[9] < 115.0) {
                            var82 = -0.0211122;
                        } else {
                            var82 = -0.00065680675;
                        }
                    } else {
                        if (input[8] < 290.1) {
                            var82 = 0.00039320087;
                        } else {
                            var82 = -0.004965547;
                        }
                    }
                }
            }
        }
    } else {
        if (input[18] < 124.0) {
            if (input[5] < 30.01) {
                if (input[16] < 1.0) {
                    if (input[18] < 122.0) {
                        if (input[0] < 82.0) {
                            var82 = 0.025900692;
                        } else {
                            var82 = -0.027029661;
                        }
                    } else {
                        var82 = -0.062614776;
                    }
                } else {
                    if (input[8] < 276.0) {
                        if (input[0] < 19.0) {
                            var82 = 0.102425866;
                        } else {
                            var82 = -0.006161994;
                        }
                    } else {
                        if (input[10] < 110.0) {
                            var82 = -0.0517008;
                        } else {
                            var82 = 0.009170868;
                        }
                    }
                }
            } else {
                if (input[9] < 117.0) {
                    if (input[18] < 101.0) {
                        var82 = 0.035617232;
                    } else {
                        if (input[14] < 2.0) {
                            var82 = -0.04679672;
                        } else {
                            var82 = -0.018095614;
                        }
                    }
                } else {
                    if (input[10] < 93.0) {
                        if (input[2] < 1.0) {
                            var82 = -0.0032850155;
                        } else {
                            var82 = 0.03832796;
                        }
                    } else {
                        if (input[5] < 39.51) {
                            var82 = -0.029332116;
                        } else {
                            var82 = 0.076289624;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 155.8) {
                if (input[5] < 15.98) {
                    var82 = -0.056681663;
                } else {
                    if (input[5] < 22.34) {
                        if (input[8] < 155.2) {
                            var82 = 0.06980888;
                        } else {
                            var82 = -0.02855893;
                        }
                    } else {
                        if (input[0] < 85.0) {
                            var82 = 0.016838377;
                        } else {
                            var82 = -0.055506587;
                        }
                    }
                }
            } else {
                if (input[1] < 1.0) {
                    if (input[9] < 96.0) {
                        if (input[10] < 68.0) {
                            var82 = -0.057154812;
                        } else {
                            var82 = 0.030428205;
                        }
                    } else {
                        if (input[5] < 32.36) {
                            var82 = -0.002455037;
                        } else {
                            var82 = -0.014562733;
                        }
                    }
                } else {
                    if (input[5] < 35.07) {
                        if (input[18] < 184.0) {
                            var82 = 0.0014740664;
                        } else {
                            var82 = -0.015993563;
                        }
                    } else {
                        if (input[9] < 132.0) {
                            var82 = 0.001739935;
                        } else {
                            var82 = 0.03201322;
                        }
                    }
                }
            }
        }
    }
    double var83;
    if (input[17] < 1.0) {
        if (input[8] < 296.4) {
            if (input[8] < 294.8) {
                if (input[5] < 35.16) {
                    if (input[0] < 69.0) {
                        if (input[0] < 61.0) {
                            var83 = -0.0005865408;
                        } else {
                            var83 = -0.005801502;
                        }
                    } else {
                        if (input[5] < 15.78) {
                            var83 = -0.01320473;
                        } else {
                            var83 = 0.0017141312;
                        }
                    }
                } else {
                    if (input[5] < 36.44) {
                        if (input[0] < 87.0) {
                            var83 = 0.008644743;
                        } else {
                            var83 = -0.024692439;
                        }
                    } else {
                        if (input[10] < 95.0) {
                            var83 = -0.0033037853;
                        } else {
                            var83 = 0.003332077;
                        }
                    }
                }
            } else {
                if (input[9] < 110.0) {
                    if (input[12] < 2.0) {
                        if (input[10] < 91.0) {
                            var83 = 0.0018872296;
                        } else {
                            var83 = 0.069644295;
                        }
                    } else {
                        if (input[14] < 1.0) {
                            var83 = 0.026090417;
                        } else {
                            var83 = -0.04310016;
                        }
                    }
                } else {
                    if (input[10] < 99.0) {
                        if (input[13] < 3.0) {
                            var83 = 0.003972451;
                        } else {
                            var83 = -0.041643936;
                        }
                    } else {
                        if (input[9] < 161.0) {
                            var83 = -0.04090416;
                        } else {
                            var83 = 0.001585422;
                        }
                    }
                }
            }
        } else {
            if (input[15] < 1.0) {
                if (input[13] < 2.0) {
                    if (input[0] < 62.0) {
                        if (input[0] < 53.0) {
                            var83 = 0.010946188;
                        } else {
                            var83 = 0.048852373;
                        }
                    } else {
                        if (input[18] < 193.0) {
                            var83 = -0.009612988;
                        } else {
                            var83 = 0.067694746;
                        }
                    }
                } else {
                    if (input[0] < 23.0) {
                        if (input[5] < 34.57) {
                            var83 = -0.05972565;
                        } else {
                            var83 = 0.004191495;
                        }
                    } else {
                        if (input[18] < 141.0) {
                            var83 = -0.014511709;
                        } else {
                            var83 = 0.0066607087;
                        }
                    }
                }
            } else {
                if (input[10] < 117.0) {
                    if (input[9] < 155.0) {
                        if (input[5] < 16.75) {
                            var83 = -0.054161724;
                        } else {
                            var83 = 0.028165752;
                        }
                    } else {
                        if (input[0] < 42.0) {
                            var83 = 0.028567497;
                        } else {
                            var83 = 0.10300288;
                        }
                    }
                } else {
                    if (input[10] < 125.0) {
                        if (input[5] < 32.1) {
                            var83 = -0.056742616;
                        } else {
                            var83 = -0.0040815226;
                        }
                    } else {
                        if (input[8] < 297.6) {
                            var83 = -0.03956951;
                        } else {
                            var83 = 0.083572365;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 39.62) {
            if (input[9] < 168.0) {
                if (input[8] < 242.1) {
                    if (input[9] < 119.0) {
                        if (input[8] < 233.8) {
                            var83 = -0.0075565497;
                        } else {
                            var83 = 0.017337402;
                        }
                    } else {
                        if (input[10] < 119.0) {
                            var83 = 0.0024431588;
                        } else {
                            var83 = 0.01717981;
                        }
                    }
                } else {
                    if (input[9] < 101.0) {
                        if (input[8] < 258.5) {
                            var83 = -0.005124436;
                        } else {
                            var83 = 0.022946319;
                        }
                    } else {
                        if (input[8] < 265.3) {
                            var83 = -0.013188417;
                        } else {
                            var83 = -0.0021751418;
                        }
                    }
                }
            } else {
                if (input[14] < 1.0) {
                    if (input[5] < 16.95) {
                        if (input[8] < 203.2) {
                            var83 = -0.0010358472;
                        } else {
                            var83 = 0.07423439;
                        }
                    } else {
                        if (input[5] < 20.96) {
                            var83 = -0.03132869;
                        } else {
                            var83 = 0.0047552125;
                        }
                    }
                } else {
                    if (input[8] < 202.0) {
                        if (input[13] < 3.0) {
                            var83 = -0.008386723;
                        } else {
                            var83 = 0.03806606;
                        }
                    } else {
                        if (input[10] < 115.0) {
                            var83 = -0.013849159;
                        } else {
                            var83 = -0.03917136;
                        }
                    }
                }
            }
        } else {
            if (input[13] < 3.0) {
                if (input[8] < 254.9) {
                    if (input[10] < 65.0) {
                        if (input[3] < 1.0) {
                            var83 = 0.07418846;
                        } else {
                            var83 = 0.0016158915;
                        }
                    } else {
                        if (input[8] < 246.2) {
                            var83 = -0.03733569;
                        } else {
                            var83 = 0.039496887;
                        }
                    }
                } else {
                    var83 = -0.06079349;
                }
            } else {
                if (input[0] < 61.0) {
                    if (input[4] < 1.0) {
                        var83 = 0.03960107;
                    } else {
                        if (input[8] < 236.9) {
                            var83 = -0.05615176;
                        } else {
                            var83 = -0.0038760572;
                        }
                    }
                } else {
                    if (input[2] < 1.0) {
                        if (input[8] < 197.1) {
                            var83 = 0.023386206;
                        } else {
                            var83 = 0.09334638;
                        }
                    } else {
                        var83 = -0.007361305;
                    }
                }
            }
        }
    }
    double var84;
    if (input[18] < 195.0) {
        if (input[18] < 171.0) {
            if (input[18] < 167.0) {
                if (input[5] < 35.16) {
                    if (input[18] < 166.0) {
                        if (input[9] < 129.0) {
                            var84 = 0.0007915906;
                        } else {
                            var84 = -0.0016725234;
                        }
                    } else {
                        if (input[10] < 63.0) {
                            var84 = 0.07713709;
                        } else {
                            var84 = -0.014566603;
                        }
                    }
                } else {
                    if (input[10] < 120.0) {
                        if (input[0] < 89.0) {
                            var84 = 0.0035307058;
                        } else {
                            var84 = -0.024517478;
                        }
                    } else {
                        if (input[0] < 86.0) {
                            var84 = -0.010454741;
                        } else {
                            var84 = 0.036581982;
                        }
                    }
                }
            } else {
                if (input[10] < 77.0) {
                    if (input[7] < 1.0) {
                        if (input[4] < 1.0) {
                            var84 = 0.051685054;
                        } else {
                            var84 = 0.015478807;
                        }
                    } else {
                        if (input[5] < 30.3) {
                            var84 = -0.023562973;
                        } else {
                            var84 = 0.02328903;
                        }
                    }
                } else {
                    if (input[10] < 126.0) {
                        if (input[18] < 168.0) {
                            var84 = 0.010836336;
                        } else {
                            var84 = -0.0063460357;
                        }
                    } else {
                        if (input[8] < 235.7) {
                            var84 = 0.0009264876;
                        } else {
                            var84 = 0.07531818;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 157.6) {
                if (input[3] < 1.0) {
                    if (input[9] < 176.0) {
                        if (input[10] < 70.0) {
                            var84 = 0.01154027;
                        } else {
                            var84 = -0.033510562;
                        }
                    } else {
                        if (input[16] < 1.0) {
                            var84 = 0.08723047;
                        } else {
                            var84 = -0.043565717;
                        }
                    }
                } else {
                    if (input[18] < 177.0) {
                        if (input[5] < 17.52) {
                            var84 = -0.048816074;
                        } else {
                            var84 = 0.04969418;
                        }
                    } else {
                        if (input[11] < 1.0) {
                            var84 = -0.02248959;
                        } else {
                            var84 = 0.0153864175;
                        }
                    }
                }
            } else {
                if (input[0] < 23.0) {
                    if (input[9] < 110.0) {
                        if (input[5] < 15.38) {
                            var84 = 0.10966905;
                        } else {
                            var84 = 0.003098586;
                        }
                    } else {
                        if (input[9] < 119.0) {
                            var84 = -0.04008356;
                        } else {
                            var84 = -0.011601514;
                        }
                    }
                } else {
                    if (input[9] < 171.0) {
                        if (input[9] < 142.0) {
                            var84 = -0.002319699;
                        } else {
                            var84 = 0.0046889964;
                        }
                    } else {
                        if (input[0] < 24.0) {
                            var84 = 0.05979528;
                        } else {
                            var84 = -0.008992302;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 32.96) {
            if (input[8] < 160.6) {
                if (input[0] < 61.0) {
                    if (input[8] < 158.8) {
                        if (input[5] < 27.24) {
                            var84 = 0.00541671;
                        } else {
                            var84 = -0.042338774;
                        }
                    } else {
                        if (input[11] < 1.0) {
                            var84 = 0.11064219;
                        } else {
                            var84 = 0.0015922647;
                        }
                    }
                } else {
                    if (input[8] < 154.6) {
                        if (input[4] < 2.0) {
                            var84 = -0.03914849;
                        } else {
                            var84 = 0.08010938;
                        }
                    } else {
                        if (input[9] < 115.0) {
                            var84 = 0.027591571;
                        } else {
                            var84 = 0.10310777;
                        }
                    }
                }
            } else {
                if (input[5] < 16.27) {
                    if (input[8] < 232.6) {
                        if (input[10] < 122.0) {
                            var84 = -0.011580396;
                        } else {
                            var84 = 0.080181904;
                        }
                    } else {
                        if (input[10] < 100.0) {
                            var84 = 0.015368628;
                        } else {
                            var84 = 0.08320088;
                        }
                    }
                } else {
                    if (input[5] < 30.69) {
                        if (input[0] < 28.0) {
                            var84 = -0.015830597;
                        } else {
                            var84 = 0.0021699206;
                        }
                    } else {
                        if (input[9] < 171.0) {
                            var84 = 0.010923828;
                        } else {
                            var84 = 0.09763985;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 33.28) {
                var84 = -0.059769686;
            } else {
                if (input[9] < 97.0) {
                    if (input[10] < 106.0) {
                        var84 = -0.061363917;
                    } else {
                        if (input[9] < 93.0) {
                            var84 = 0.045480102;
                        } else {
                            var84 = -0.0389275;
                        }
                    }
                } else {
                    if (input[0] < 87.0) {
                        if (input[0] < 84.0) {
                            var84 = -0.0031353764;
                        } else {
                            var84 = -0.05300631;
                        }
                    } else {
                        if (input[5] < 34.77) {
                            var84 = 0.107117765;
                        } else {
                            var84 = 0.00902564;
                        }
                    }
                }
            }
        }
    }
    double var85;
    if (input[15] < 1.0) {
        if (input[6] < 1.0) {
            if (input[11] < 1.0) {
                if (input[9] < 91.0) {
                    if (input[5] < 23.63) {
                        if (input[8] < 270.6) {
                            var85 = -0.05314821;
                        } else {
                            var85 = 0.0040455717;
                        }
                    } else {
                        if (input[5] < 25.26) {
                            var85 = 0.052729663;
                        } else {
                            var85 = -0.0066169687;
                        }
                    }
                } else {
                    if (input[5] < 20.08) {
                        if (input[10] < 87.0) {
                            var85 = 0.0090551535;
                        } else {
                            var85 = 0.000021870053;
                        }
                    } else {
                        if (input[5] < 22.02) {
                            var85 = -0.008311208;
                        } else {
                            var85 = 0.00033024538;
                        }
                    }
                }
            } else {
                if (input[5] < 31.69) {
                    if (input[18] < 187.0) {
                        if (input[14] < 1.0) {
                            var85 = -0.007085969;
                        } else {
                            var85 = 0.0015953716;
                        }
                    } else {
                        if (input[0] < 79.0) {
                            var85 = 0.015510164;
                        } else {
                            var85 = -0.021283634;
                        }
                    }
                } else {
                    if (input[9] < 93.0) {
                        if (input[8] < 176.3) {
                            var85 = -0.031346433;
                        } else {
                            var85 = 0.036721352;
                        }
                    } else {
                        if (input[18] < 112.0) {
                            var85 = 0.005890749;
                        } else {
                            var85 = -0.009668249;
                        }
                    }
                }
            }
        } else {
            if (input[8] < 284.8) {
                if (input[2] < 1.0) {
                    if (input[0] < 61.0) {
                        if (input[5] < 15.38) {
                            var85 = 0.032610655;
                        } else {
                            var85 = -0.0021272304;
                        }
                    } else {
                        if (input[10] < 80.0) {
                            var85 = 0.016525183;
                        } else {
                            var85 = 0.00051854545;
                        }
                    }
                } else {
                    if (input[10] < 117.0) {
                        if (input[8] < 271.7) {
                            var85 = 0.0072935275;
                        } else {
                            var85 = 0.03745876;
                        }
                    } else {
                        if (input[0] < 33.0) {
                            var85 = 0.025358234;
                        } else {
                            var85 = -0.020509634;
                        }
                    }
                }
            } else {
                if (input[10] < 86.0) {
                    if (input[13] < 3.0) {
                        if (input[18] < 190.0) {
                            var85 = -0.010614508;
                        } else {
                            var85 = 0.053729635;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var85 = 0.06602939;
                        } else {
                            var85 = 0.001878837;
                        }
                    }
                } else {
                    if (input[18] < 144.0) {
                        if (input[0] < 61.0) {
                            var85 = -0.018002942;
                        } else {
                            var85 = 0.024447333;
                        }
                    } else {
                        if (input[9] < 112.0) {
                            var85 = 0.0010194473;
                        } else {
                            var85 = -0.029991362;
                        }
                    }
                }
            }
        }
    } else {
        if (input[18] < 124.0) {
            if (input[10] < 117.0) {
                if (input[0] < 86.0) {
                    if (input[9] < 116.0) {
                        if (input[5] < 23.92) {
                            var85 = 0.011859925;
                        } else {
                            var85 = -0.027933715;
                        }
                    } else {
                        if (input[8] < 154.1) {
                            var85 = -0.050953526;
                        } else {
                            var85 = 0.004860084;
                        }
                    }
                } else {
                    if (input[8] < 285.9) {
                        if (input[8] < 219.2) {
                            var85 = -0.028706193;
                        } else {
                            var85 = -0.06426992;
                        }
                    } else {
                        if (input[18] < 113.0) {
                            var85 = -0.038099203;
                        } else {
                            var85 = 0.062690996;
                        }
                    }
                }
            } else {
                if (input[10] < 129.0) {
                    if (input[18] < 104.0) {
                        if (input[18] < 102.0) {
                            var85 = -0.038448405;
                        } else {
                            var85 = 0.0631634;
                        }
                    } else {
                        if (input[5] < 39.43) {
                            var85 = -0.03483425;
                        } else {
                            var85 = 0.046715118;
                        }
                    }
                } else {
                    if (input[14] < 2.0) {
                        if (input[5] < 18.84) {
                            var85 = 0.0032504683;
                        } else {
                            var85 = 0.114474714;
                        }
                    } else {
                        var85 = -0.047888972;
                    }
                }
            }
        } else {
            if (input[8] < 160.0) {
                if (input[9] < 103.0) {
                    if (input[17] < 1.0) {
                        if (input[18] < 159.0) {
                            var85 = 0.09668413;
                        } else {
                            var85 = 0.0337498;
                        }
                    } else {
                        var85 = -0.03841877;
                    }
                } else {
                    if (input[5] < 15.98) {
                        var85 = -0.057067662;
                    } else {
                        if (input[7] < 1.0) {
                            var85 = 0.017587135;
                        } else {
                            var85 = -0.008277913;
                        }
                    }
                }
            } else {
                if (input[16] < 1.0) {
                    if (input[3] < 1.0) {
                        if (input[0] < 89.0) {
                            var85 = -0.0032709744;
                        } else {
                            var85 = 0.06030316;
                        }
                    } else {
                        if (input[0] < 38.0) {
                            var85 = 0.00055487663;
                        } else {
                            var85 = -0.019035054;
                        }
                    }
                } else {
                    if (input[8] < 295.4) {
                        if (input[1] < 1.0) {
                            var85 = -0.0040783617;
                        } else {
                            var85 = 0.0054361154;
                        }
                    } else {
                        if (input[10] < 83.0) {
                            var85 = 0.0664087;
                        } else {
                            var85 = 0.0048656403;
                        }
                    }
                }
            }
        }
    }
    double var86;
    if (input[17] < 1.0) {
        if (input[5] < 34.46) {
            if (input[5] < 33.87) {
                if (input[9] < 179.0) {
                    if (input[0] < 20.0) {
                        if (input[16] < 1.0) {
                            var86 = 0.008168376;
                        } else {
                            var86 = -0.015357471;
                        }
                    } else {
                        if (input[0] < 21.0) {
                            var86 = 0.011228087;
                        } else {
                            var86 = -0.0002598428;
                        }
                    }
                } else {
                    if (input[0] < 31.0) {
                        if (input[16] < 2.0) {
                            var86 = 0.012846651;
                        } else {
                            var86 = 0.08433179;
                        }
                    } else {
                        if (input[5] < 27.33) {
                            var86 = -0.005934575;
                        } else {
                            var86 = 0.027756194;
                        }
                    }
                }
            } else {
                if (input[8] < 267.0) {
                    if (input[8] < 231.4) {
                        if (input[9] < 93.0) {
                            var86 = 0.05443595;
                        } else {
                            var86 = -0.009345953;
                        }
                    } else {
                        if (input[10] < 126.0) {
                            var86 = -0.030814532;
                        } else {
                            var86 = 0.022956269;
                        }
                    }
                } else {
                    if (input[16] < 2.0) {
                        if (input[5] < 34.36) {
                            var86 = 0.036982004;
                        } else {
                            var86 = -0.029269248;
                        }
                    } else {
                        if (input[10] < 99.0) {
                            var86 = 0.010815347;
                        } else {
                            var86 = -0.03994605;
                        }
                    }
                }
            }
        } else {
            if (input[0] < 89.0) {
                if (input[12] < 2.0) {
                    if (input[13] < 3.0) {
                        if (input[10] < 94.0) {
                            var86 = -0.008271506;
                        } else {
                            var86 = 0.0015185981;
                        }
                    } else {
                        if (input[8] < 256.1) {
                            var86 = 0.013494811;
                        } else {
                            var86 = -0.0074773654;
                        }
                    }
                } else {
                    if (input[16] < 2.0) {
                        if (input[10] < 88.0) {
                            var86 = 0.0074169063;
                        } else {
                            var86 = -0.002455305;
                        }
                    } else {
                        if (input[9] < 93.0) {
                            var86 = 0.054624584;
                        } else {
                            var86 = 0.008873123;
                        }
                    }
                }
            } else {
                if (input[18] < 107.0) {
                    var86 = 0.0751209;
                } else {
                    if (input[9] < 169.0) {
                        if (input[10] < 124.0) {
                            var86 = -0.04356044;
                        } else {
                            var86 = 0.04209632;
                        }
                    } else {
                        if (input[5] < 37.1) {
                            var86 = 0.0819846;
                        } else {
                            var86 = -0.03788429;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] < 37.61) {
            if (input[18] < 198.0) {
                if (input[18] < 194.0) {
                    if (input[5] < 37.1) {
                        if (input[5] < 36.82) {
                            var86 = -0.00049883843;
                        } else {
                            var86 = -0.022487044;
                        }
                    } else {
                        if (input[10] < 82.0) {
                            var86 = -0.021177417;
                        } else {
                            var86 = 0.034988564;
                        }
                    }
                } else {
                    if (input[9] < 163.0) {
                        if (input[9] < 129.0) {
                            var86 = -0.021141702;
                        } else {
                            var86 = 0.008693181;
                        }
                    } else {
                        if (input[0] < 66.0) {
                            var86 = -0.053599324;
                        } else {
                            var86 = -0.0074221403;
                        }
                    }
                }
            } else {
                if (input[16] < 1.0) {
                    if (input[14] < 1.0) {
                        if (input[18] < 199.0) {
                            var86 = -0.049047347;
                        } else {
                            var86 = 0.042965468;
                        }
                    } else {
                        if (input[10] < 101.0) {
                            var86 = 0.031174747;
                        } else {
                            var86 = 0.09706436;
                        }
                    }
                } else {
                    if (input[5] < 33.36) {
                        if (input[8] < 265.3) {
                            var86 = -0.0010271245;
                        } else {
                            var86 = 0.053864606;
                        }
                    } else {
                        if (input[0] < 74.0) {
                            var86 = -0.060718786;
                        } else {
                            var86 = 0.007866481;
                        }
                    }
                }
            }
        } else {
            if (input[10] < 62.0) {
                if (input[0] < 70.0) {
                    if (input[9] < 125.0) {
                        var86 = 0.108159;
                    } else {
                        if (input[1] < 1.0) {
                            var86 = 0.05450788;
                        } else {
                            var86 = -0.039572082;
                        }
                    }
                } else {
                    var86 = -0.04992364;
                }
            } else {
                if (input[18] < 177.0) {
                    if (input[9] < 164.0) {
                        if (input[16] < 1.0) {
                            var86 = 0.013764332;
                        } else {
                            var86 = -0.009732563;
                        }
                    } else {
                        if (input[10] < 125.0) {
                            var86 = -0.03244001;
                        } else {
                            var86 = 0.03263814;
                        }
                    }
                } else {
                    if (input[9] < 92.0) {
                        if (input[0] < 60.0) {
                            var86 = 0.0046731075;
                        } else {
                            var86 = 0.092139386;
                        }
                    } else {
                        if (input[10] < 119.0) {
                            var86 = -0.03362443;
                        } else {
                            var86 = 0.025945498;
                        }
                    }
                }
            }
        }
    }
    double var87;
    if (input[15] < 1.0) {
        if (input[0] < 87.0) {
            if (input[0] < 84.0) {
                if (input[0] < 74.0) {
                    if (input[9] < 156.0) {
                        if (input[9] < 154.0) {
                            var87 = 0.00032282012;
                        } else {
                            var87 = 0.009704413;
                        }
                    } else {
                        if (input[5] < 16.27) {
                            var87 = 0.015306264;
                        } else {
                            var87 = -0.0037470663;
                        }
                    }
                } else {
                    if (input[9] < 161.0) {
                        if (input[8] < 185.9) {
                            var87 = -0.00986257;
                        } else {
                            var87 = 0.0032404165;
                        }
                    } else {
                        if (input[8] < 163.7) {
                            var87 = 0.040741038;
                        } else {
                            var87 = 0.008476521;
                        }
                    }
                }
            } else {
                if (input[9] < 168.0) {
                    if (input[8] < 160.0) {
                        if (input[8] < 153.6) {
                            var87 = -0.011611118;
                        } else {
                            var87 = -0.048253093;
                        }
                    } else {
                        if (input[8] < 257.9) {
                            var87 = 0.0061708977;
                        } else {
                            var87 = -0.01613486;
                        }
                    }
                } else {
                    if (input[8] < 290.1) {
                        if (input[4] < 1.0) {
                            var87 = -0.00040553408;
                        } else {
                            var87 = -0.035379022;
                        }
                    } else {
                        if (input[12] < 2.0) {
                            var87 = 0.11052676;
                        } else {
                            var87 = -0.003205834;
                        }
                    }
                }
            }
        } else {
            if (input[3] < 1.0) {
                if (input[6] < 1.0) {
                    if (input[9] < 96.0) {
                        if (input[10] < 64.0) {
                            var87 = 0.040852096;
                        } else {
                            var87 = -0.035168353;
                        }
                    } else {
                        if (input[18] < 195.0) {
                            var87 = 0.0029065006;
                        } else {
                            var87 = 0.055369284;
                        }
                    }
                } else {
                    if (input[5] < 37.41) {
                        if (input[5] < 15.68) {
                            var87 = 0.031840887;
                        } else {
                            var87 = -0.03236701;
                        }
                    } else {
                        if (input[14] < 2.0) {
                            var87 = 0.060434647;
                        } else {
                            var87 = -0.024778625;
                        }
                    }
                }
            } else {
                if (input[6] < 1.0) {
                    if (input[16] < 1.0) {
                        if (input[12] < 2.0) {
                            var87 = -0.001109962;
                        } else {
                            var87 = 0.05200097;
                        }
                    } else {
                        if (input[8] < 291.3) {
                            var87 = 0.0009555446;
                        } else {
                            var87 = -0.06184811;
                        }
                    }
                } else {
                    if (input[18] < 131.0) {
                        if (input[9] < 114.0) {
                            var87 = 0.012042588;
                        } else {
                            var87 = 0.10036633;
                        }
                    } else {
                        if (input[9] < 145.0) {
                            var87 = -0.0050092763;
                        } else {
                            var87 = 0.061652113;
                        }
                    }
                }
            }
        }
    } else {
        if (input[1] < 1.0) {
            if (input[5] < 23.44) {
                if (input[10] < 112.0) {
                    if (input[5] < 22.12) {
                        if (input[0] < 37.0) {
                            var87 = 0.008944418;
                        } else {
                            var87 = -0.011801901;
                        }
                    } else {
                        if (input[0] < 84.0) {
                            var87 = 0.004832293;
                        } else {
                            var87 = 0.10615702;
                        }
                    }
                } else {
                    if (input[10] < 114.0) {
                        if (input[5] < 18.43) {
                            var87 = 0.039048117;
                        } else {
                            var87 = 0.102822974;
                        }
                    } else {
                        if (input[0] < 37.0) {
                            var87 = 0.035241988;
                        } else {
                            var87 = -0.003277979;
                        }
                    }
                }
            } else {
                if (input[5] < 25.94) {
                    if (input[17] < 1.0) {
                        if (input[10] < 122.0) {
                            var87 = -0.019485395;
                        } else {
                            var87 = 0.021344675;
                        }
                    } else {
                        if (input[9] < 101.0) {
                            var87 = 0.007914421;
                        } else {
                            var87 = -0.055887025;
                        }
                    }
                } else {
                    if (input[0] < 65.0) {
                        if (input[0] < 63.0) {
                            var87 = -0.0031181283;
                        } else {
                            var87 = 0.049967345;
                        }
                    } else {
                        if (input[5] < 26.42) {
                            var87 = 0.038007468;
                        } else {
                            var87 = -0.0153127825;
                        }
                    }
                }
            }
        } else {
            if (input[5] < 35.36) {
                if (input[5] < 33.46) {
                    if (input[5] < 20.08) {
                        if (input[12] < 1.0) {
                            var87 = 0.009595788;
                        } else {
                            var87 = -0.011921718;
                        }
                    } else {
                        if (input[5] < 21.15) {
                            var87 = 0.031512924;
                        } else {
                            var87 = 0.0007405043;
                        }
                    }
                } else {
                    if (input[10] < 106.0) {
                        if (input[10] < 71.0) {
                            var87 = 0.005096914;
                        } else {
                            var87 = -0.03873622;
                        }
                    } else {
                        if (input[3] < 1.0) {
                            var87 = 0.025141617;
                        } else {
                            var87 = -0.029455692;
                        }
                    }
                }
            } else {
                if (input[9] < 119.0) {
                    if (input[0] < 49.0) {
                        if (input[5] < 35.66) {
                            var87 = 0.041104466;
                        } else {
                            var87 = -0.03557558;
                        }
                    } else {
                        if (input[16] < 2.0) {
                            var87 = -0.009139524;
                        } else {
                            var87 = 0.032559443;
                        }
                    }
                } else {
                    if (input[18] < 137.0) {
                        if (input[0] < 51.0) {
                            var87 = -0.01942689;
                        } else {
                            var87 = 0.02390073;
                        }
                    } else {
                        if (input[8] < 173.5) {
                            var87 = -0.014342102;
                        } else {
                            var87 = 0.0351137;
                        }
                    }
                }
            }
        }
    }
    double sm[3] = {
      (var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21 + var22 + var23 + var24 + var25 + var26 + var27 + var28 + var29),
      (var30 + var31 + var32 + var33 + var34 + var35 + var36 + var37 + var38 + var39 + var40 + var41 + var42 + var43 + var44 + var45 + var46 + var47 + var48 + var49 + var50 + var51 + var52 + var53 + var54 + var55 + var56 + var57 + var58),
      (var59 + var60 + var61 + var62 + var63 + var64 + var65 + var66 + var67 + var68 + var69 + var70 + var71 + var72 + var73 + var74 + var75 + var76 + var77 + var78 + var79 + var80 + var81 + var82 + var83 + var84 + var85 + var86 + var87)
    };
    softmax(sm, 3, var0);
    memcpy(output, var0, 3 * sizeof(double));
}

// Funcs
void printScoreCSV(double input[], int length) { // Format: Score0, Score1\n
    int precision = 4;

    int x0 = input[0];
    int x1 = input[1];
    int x2 = input[2];

    for(int i = 0; i < 3; i++) {
        Serial.print(input[i],precision);
        if(i!=2) {
        Serial.print(",");
        }
    }
    Serial.println();
}
void changeColor() { // Changes status LED color on every func-call
  switch(color) {
    case 0: // GREEN
      digitalWrite(LEDR, HIGH);
      digitalWrite(LEDG, LOW);
      digitalWrite(LEDB, HIGH);
      color = 1;
      break;
    case 1: // YELLOW
      digitalWrite(LEDR, LOW);
      digitalWrite(LEDG, LOW);
      digitalWrite(LEDB, HIGH);
      color = 2;
      break;
    case 2: // RED
      digitalWrite(LEDR, LOW);
      digitalWrite(LEDG, HIGH);
      digitalWrite(LEDB, HIGH);
      color = 3;
      break;
    case 3: // RGB OFF
      digitalWrite(LEDR, HIGH);
      digitalWrite(LEDG, HIGH);
      digitalWrite(LEDB, HIGH);
      color = 0;
      break;
  }
}
void repeat(int repeatTime){  // Pauses for repeatTime between program-loops - prints message as indicator for each cycle
	Serial.println();
	Serial.println("##### REPEATING... #####");
	Serial.println();
	delay(repeatTime);
}

void infer(int time, int csv) {
	if(csv==1){
		Serial.println("aScore0,aScore1,aScore2");        // Printing header to name columns in csv
	} else {
		Serial.println("Start: 0 | End: 100");    // Printing Range:
	}
	// Declarations:
	int length = 2;
	double result[length];
	// Model Inference
	double x_0[] = {73.0, 0.0, 1.0, 1.0, 0.0, 35.67, 0.0, 0.0, 241.3, 144.0, 127.0, 0.0, 2.0, 1.0, 2.0, 0.0, 1.0, 1.0, 175.0};
	score(x_0, result);
	printScoreCSV(result, length);
	delay(time);

	double x_1[] = {82.0, 0.0, 0.0, 1.0, 1.0, 24.59, 1.0, 0.0, 174.4, 131.0, 73.0, 1.0, 2.0, 2.0, 0.0, 0.0, 2.0, 0.0, 160.0};
	score(x_1, result);
	printScoreCSV(result, length);
	delay(time);

	double x_2[] = {72.0, 0.0, 0.0, 1.0, 2.0, 27.4, 0.0, 0.0, 151.8, 147.0, 100.0, 1.0, 2.0, 2.0, 2.0, 0.0, 2.0, 0.0, 197.0};
	score(x_2, result);
	printScoreCSV(result, length);
	delay(time);

	double x_3[] = {82.0, 0.0, 0.0, 0.0, 1.0, 28.67, 0.0, 0.0, 174.2, 156.0, 95.0, 1.0, 1.0, 1.0, 2.0, 0.0, 2.0, 0.0, 191.0};
	score(x_3, result);
	printScoreCSV(result, length);
	delay(time);

	double x_4[] = {62.0, 1.0, 0.0, 1.0, 1.0, 18.74, 0.0, 0.0, 233.9, 125.0, 91.0, 1.0, 1.0, 3.0, 1.0, 0.0, 2.0, 1.0, 106.0};
	score(x_4, result);
	printScoreCSV(result, length);
	delay(time);

	double x_5[] = {83.0, 0.0, 0.0, 1.0, 0.0, 36.93, 0.0, 1.0, 199.2, 158.0, 89.0, 0.0, 2.0, 3.0, 2.0, 0.0, 1.0, 0.0, 173.0};
	score(x_5, result);
	printScoreCSV(result, length);
	delay(time);

	double x_6[] = {51.0, 1.0, 0.0, 0.0, 2.0, 30.08, 0.0, 0.0, 198.3, 142.0, 87.0, 0.0, 1.0, 2.0, 0.0, 0.0, 0.0, 0.0, 166.0};
	score(x_6, result);
	printScoreCSV(result, length);
	delay(time);

	double x_7[] = {45.0, 0.0, 0.0, 0.0, 2.0, 17.3, 0.0, 0.0, 170.3, 159.0, 65.0, 0.0, 2.0, 1.0, 2.0, 0.0, 1.0, 0.0, 125.0};
	score(x_7, result);
	printScoreCSV(result, length);
	delay(time);

	double x_8[] = {65.0, 1.0, 0.0, 0.0, 2.0, 20.65, 0.0, 1.0, 206.9, 163.0, 84.0, 0.0, 1.0, 0.0, 2.0, 0.0, 2.0, 0.0, 164.0};
	score(x_8, result);
	printScoreCSV(result, length);
	delay(time);

	double x_9[] = {57.0, 1.0, 0.0, 1.0, 2.0, 35.2, 0.0, 0.0, 240.3, 119.0, 99.0, 1.0, 2.0, 1.0, 1.0, 0.0, 0.0, 0.0, 186.0};
	score(x_9, result);
	printScoreCSV(result, length);
	delay(time);

	double x_10[] = {31.0, 0.0, 0.0, 0.0, 1.0, 27.6, 0.0, 0.0, 277.2, 171.0, 82.0, 0.0, 1.0, 3.0, 2.0, 0.0, 1.0, 0.0, 111.0};
	score(x_10, result);
	printScoreCSV(result, length);
	delay(time);

	double x_11[] = {82.0, 0.0, 0.0, 1.0, 2.0, 16.16, 1.0, 1.0, 176.4, 130.0, 111.0, 1.0, 1.0, 2.0, 1.0, 0.0, 2.0, 0.0, 121.0};
	score(x_11, result);
	printScoreCSV(result, length);
	delay(time);

	double x_12[] = {46.0, 1.0, 0.0, 0.0, 1.0, 16.08, 1.0, 0.0, 233.1, 107.0, 73.0, 1.0, 2.0, 3.0, 1.0, 0.0, 1.0, 0.0, 136.0};
	score(x_12, result);
	printScoreCSV(result, length);
	delay(time);

	double x_13[] = {38.0, 1.0, 0.0, 0.0, 1.0, 23.48, 1.0, 0.0, 170.4, 107.0, 68.0, 1.0, 2.0, 0.0, 1.0, 0.0, 1.0, 0.0, 113.0};
	score(x_13, result);
	printScoreCSV(result, length);
	delay(time);

	double x_14[] = {63.0, 1.0, 0.0, 0.0, 1.0, 30.37, 0.0, 1.0, 179.8, 118.0, 81.0, 0.0, 2.0, 0.0, 1.0, 0.0, 0.0, 0.0, 121.0};
	score(x_14, result);
	printScoreCSV(result, length);
	delay(time);

	double x_15[] = {22.0, 1.0, 1.0, 1.0, 1.0, 31.21, 0.0, 0.0, 270.3, 167.0, 63.0, 0.0, 1.0, 2.0, 0.0, 0.0, 0.0, 1.0, 113.0};
	score(x_15, result);
	printScoreCSV(result, length);
	delay(time);

	double x_16[] = {38.0, 0.0, 0.0, 1.0, 1.0, 33.33, 0.0, 0.0, 159.3, 160.0, 91.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 104.0};
	score(x_16, result);
	printScoreCSV(result, length);
	delay(time);

	double x_17[] = {56.0, 0.0, 1.0, 1.0, 2.0, 21.38, 0.0, 0.0, 272.0, 134.0, 97.0, 0.0, 2.0, 0.0, 0.0, 0.0, 1.0, 0.0, 137.0};
	score(x_17, result);
	printScoreCSV(result, length);
	delay(time);

	double x_18[] = {21.0, 0.0, 0.0, 0.0, 1.0, 29.51, 0.0, 0.0, 239.5, 148.0, 106.0, 0.0, 0.0, 3.0, 2.0, 0.0, 1.0, 0.0, 115.0};
	score(x_18, result);
	printScoreCSV(result, length);
	delay(time);

	double x_19[] = {27.0, 1.0, 1.0, 0.0, 2.0, 16.36, 1.0, 1.0, 248.4, 140.0, 93.0, 1.0, 2.0, 3.0, 2.0, 0.0, 1.0, 1.0, 187.0};
	score(x_19, result);
	printScoreCSV(result, length);
	delay(time);

	double x_20[] = {30.0, 0.0, 0.0, 0.0, 2.0, 33.83, 0.0, 0.0, 259.8, 120.0, 76.0, 0.0, 2.0, 3.0, 2.0, 0.0, 2.0, 0.0, 183.0};
	score(x_20, result);
	printScoreCSV(result, length);
	delay(time);

	double x_21[] = {25.0, 1.0, 0.0, 0.0, 1.0, 36.53, 0.0, 0.0, 204.2, 114.0, 81.0, 1.0, 1.0, 1.0, 0.0, 0.0, 1.0, 0.0, 164.0};
	score(x_21, result);
	printScoreCSV(result, length);
	delay(time);

	double x_22[] = {25.0, 0.0, 1.0, 0.0, 2.0, 26.46, 0.0, 1.0, 201.6, 172.0, 129.0, 0.0, 1.0, 2.0, 1.0, 1.0, 1.0, 1.0, 156.0};
	score(x_22, result);
	printScoreCSV(result, length);
	delay(time);

	double x_23[] = {33.0, 1.0, 1.0, 0.0, 0.0, 26.04, 0.0, 0.0, 168.4, 106.0, 119.0, 0.0, 2.0, 3.0, 0.0, 0.0, 0.0, 0.0, 159.0};
	score(x_23, result);
	printScoreCSV(result, length);
	delay(time);

	double x_24[] = {82.0, 0.0, 1.0, 0.0, 0.0, 23.14, 0.0, 0.0, 197.5, 155.0, 122.0, 0.0, 0.0, 2.0, 1.0, 0.0, 2.0, 0.0, 163.0};
	score(x_24, result);
	printScoreCSV(result, length);
	delay(time);

	double x_25[] = {56.0, 1.0, 1.0, 0.0, 2.0, 26.58, 0.0, 0.0, 246.6, 172.0, 101.0, 0.0, 2.0, 3.0, 2.0, 0.0, 2.0, 0.0, 138.0};
	score(x_25, result);
	printScoreCSV(result, length);
	delay(time);

	double x_26[] = {40.0, 1.0, 1.0, 1.0, 1.0, 18.97, 0.0, 0.0, 249.5, 92.0, 71.0, 0.0, 0.0, 2.0, 2.0, 0.0, 0.0, 0.0, 198.0};
	score(x_26, result);
	printScoreCSV(result, length);
	delay(time);

	double x_27[] = {86.0, 1.0, 0.0, 1.0, 2.0, 25.74, 0.0, 0.0, 158.7, 98.0, 60.0, 0.0, 2.0, 2.0, 2.0, 1.0, 2.0, 0.0, 176.0};
	score(x_27, result);
	printScoreCSV(result, length);
	delay(time);

	double x_28[] = {37.0, 1.0, 1.0, 0.0, 2.0, 22.27, 0.0, 1.0, 235.0, 117.0, 105.0, 0.0, 1.0, 3.0, 2.0, 0.0, 0.0, 0.0, 184.0};
	score(x_28, result);
	printScoreCSV(result, length);
	delay(time);

	double x_29[] = {27.0, 0.0, 0.0, 0.0, 1.0, 32.62, 0.0, 0.0, 284.9, 179.0, 67.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 109.0};
	score(x_29, result);
	printScoreCSV(result, length);
	delay(time);

	double x_30[] = {32.0, 1.0, 1.0, 0.0, 0.0, 18.59, 1.0, 0.0, 294.3, 136.0, 83.0, 1.0, 2.0, 0.0, 1.0, 0.0, 1.0, 0.0, 167.0};
	score(x_30, result);
	printScoreCSV(result, length);
	delay(time);

	double x_31[] = {36.0, 0.0, 1.0, 0.0, 1.0, 39.85, 0.0, 0.0, 276.3, 103.0, 92.0, 0.0, 0.0, 0.0, 2.0, 0.0, 2.0, 0.0, 147.0};
	score(x_31, result);
	printScoreCSV(result, length);
	delay(time);

	double x_32[] = {80.0, 0.0, 0.0, 0.0, 2.0, 26.56, 0.0, 0.0, 179.2, 174.0, 85.0, 1.0, 0.0, 1.0, 2.0, 0.0, 2.0, 0.0, 141.0};
	score(x_32, result);
	printScoreCSV(result, length);
	delay(time);

	double x_33[] = {27.0, 1.0, 1.0, 1.0, 1.0, 17.59, 0.0, 0.0, 216.6, 114.0, 96.0, 1.0, 1.0, 2.0, 2.0, 0.0, 0.0, 0.0, 110.0};
	score(x_33, result);
	printScoreCSV(result, length);
	delay(time);

	double x_34[] = {63.0, 1.0, 0.0, 1.0, 1.0, 20.9, 0.0, 0.0, 161.5, 146.0, 122.0, 0.0, 2.0, 2.0, 0.0, 1.0, 1.0, 0.0, 139.0};
	score(x_34, result);
	printScoreCSV(result, length);
	delay(time);

	double x_35[] = {37.0, 0.0, 0.0, 1.0, 2.0, 22.2, 0.0, 0.0, 151.0, 104.0, 89.0, 0.0, 2.0, 2.0, 2.0, 0.0, 0.0, 0.0, 190.0};
	score(x_35, result);
	printScoreCSV(result, length);
	delay(time);

	double x_36[] = {78.0, 0.0, 1.0, 1.0, 0.0, 34.25, 0.0, 0.0, 271.5, 138.0, 91.0, 0.0, 0.0, 3.0, 1.0, 0.0, 0.0, 0.0, 154.0};
	score(x_36, result);
	printScoreCSV(result, length);
	delay(time);

	double x_37[] = {35.0, 0.0, 0.0, 0.0, 2.0, 38.73, 0.0, 0.0, 186.6, 123.0, 123.0, 0.0, 2.0, 3.0, 0.0, 1.0, 0.0, 0.0, 150.0};
	score(x_37, result);
	printScoreCSV(result, length);
	delay(time);

	double x_38[] = {89.0, 0.0, 0.0, 1.0, 0.0, 26.21, 0.0, 1.0, 244.6, 172.0, 89.0, 0.0, 1.0, 2.0, 0.0, 1.0, 0.0, 0.0, 100.0};
	score(x_38, result);
	printScoreCSV(result, length);
	delay(time);

	double x_39[] = {22.0, 1.0, 1.0, 1.0, 2.0, 23.93, 0.0, 0.0, 243.8, 138.0, 123.0, 1.0, 2.0, 2.0, 1.0, 0.0, 1.0, 0.0, 165.0};
	score(x_39, result);
	printScoreCSV(result, length);
	delay(time);

	double x_40[] = {23.0, 1.0, 0.0, 1.0, 0.0, 31.79, 0.0, 1.0, 175.8, 158.0, 115.0, 0.0, 1.0, 3.0, 1.0, 0.0, 2.0, 1.0, 168.0};
	score(x_40, result);
	printScoreCSV(result, length);
	delay(time);

	double x_41[] = {46.0, 0.0, 1.0, 1.0, 2.0, 19.47, 0.0, 0.0, 220.3, 170.0, 63.0, 0.0, 0.0, 2.0, 2.0, 1.0, 2.0, 0.0, 152.0};
	score(x_41, result);
	printScoreCSV(result, length);
	delay(time);

	double x_42[] = {39.0, 0.0, 0.0, 0.0, 0.0, 29.83, 1.0, 0.0, 174.9, 151.0, 101.0, 0.0, 2.0, 3.0, 2.0, 0.0, 1.0, 0.0, 186.0};
	score(x_42, result);
	printScoreCSV(result, length);
	delay(time);

	double x_43[] = {69.0, 1.0, 0.0, 1.0, 0.0, 22.88, 0.0, 1.0, 174.4, 166.0, 114.0, 0.0, 2.0, 3.0, 2.0, 1.0, 1.0, 0.0, 151.0};
	score(x_43, result);
	printScoreCSV(result, length);
	delay(time);

	double x_44[] = {85.0, 1.0, 0.0, 0.0, 2.0, 23.52, 0.0, 1.0, 283.7, 94.0, 60.0, 0.0, 2.0, 1.0, 0.0, 0.0, 1.0, 0.0, 139.0};
	score(x_44, result);
	printScoreCSV(result, length);
	delay(time);

	double x_45[] = {50.0, 1.0, 1.0, 1.0, 0.0, 15.13, 0.0, 0.0, 200.4, 131.0, 98.0, 0.0, 2.0, 3.0, 0.0, 0.0, 0.0, 0.0, 128.0};
	score(x_45, result);
	printScoreCSV(result, length);
	delay(time);

	double x_46[] = {25.0, 1.0, 0.0, 1.0, 0.0, 22.17, 0.0, 1.0, 183.2, 163.0, 76.0, 1.0, 2.0, 2.0, 1.0, 1.0, 1.0, 0.0, 141.0};
	score(x_46, result);
	printScoreCSV(result, length);
	delay(time);

	double x_47[] = {83.0, 1.0, 0.0, 0.0, 1.0, 16.17, 0.0, 1.0, 278.4, 93.0, 119.0, 0.0, 2.0, 3.0, 1.0, 0.0, 1.0, 0.0, 192.0};
	score(x_47, result);
	printScoreCSV(result, length);
	delay(time);

	double x_48[] = {87.0, 1.0, 0.0, 1.0, 0.0, 39.77, 0.0, 0.0, 162.1, 106.0, 111.0, 0.0, 2.0, 0.0, 2.0, 0.0, 1.0, 0.0, 175.0};
	score(x_48, result);
	printScoreCSV(result, length);
	delay(time);

	double x_49[] = {83.0, 0.0, 0.0, 0.0, 1.0, 38.84, 1.0, 0.0, 237.9, 120.0, 90.0, 0.0, 1.0, 0.0, 0.0, 0.0, 2.0, 1.0, 194.0};
	score(x_49, result);
	printScoreCSV(result, length);
	delay(time);

	double x_50[] = {44.0, 1.0, 0.0, 0.0, 1.0, 35.55, 0.0, 0.0, 247.0, 171.0, 122.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.0, 150.0};
	score(x_50, result);
	printScoreCSV(result, length);
	delay(time);

	double x_51[] = {48.0, 1.0, 0.0, 1.0, 1.0, 26.14, 0.0, 0.0, 227.8, 139.0, 104.0, 0.0, 2.0, 3.0, 2.0, 0.0, 2.0, 0.0, 110.0};
	score(x_51, result);
	printScoreCSV(result, length);
	delay(time);

	double x_52[] = {63.0, 1.0, 0.0, 0.0, 0.0, 27.36, 0.0, 1.0, 231.0, 149.0, 123.0, 1.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 100.0};
	score(x_52, result);
	printScoreCSV(result, length);
	delay(time);

	double x_53[] = {58.0, 1.0, 1.0, 1.0, 0.0, 21.63, 0.0, 0.0, 297.4, 132.0, 85.0, 0.0, 2.0, 3.0, 1.0, 0.0, 0.0, 1.0, 136.0};
	score(x_53, result);
	printScoreCSV(result, length);
	delay(time);

	double x_54[] = {47.0, 1.0, 0.0, 1.0, 1.0, 17.21, 0.0, 1.0, 188.8, 137.0, 83.0, 1.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 178.0};
	score(x_54, result);
	printScoreCSV(result, length);
	delay(time);

	double x_55[] = {83.0, 0.0, 0.0, 1.0, 0.0, 24.61, 0.0, 0.0, 194.5, 131.0, 69.0, 1.0, 2.0, 3.0, 0.0, 0.0, 1.0, 0.0, 172.0};
	score(x_55, result);
	printScoreCSV(result, length);
	delay(time);

	double x_56[] = {25.0, 1.0, 0.0, 1.0, 1.0, 18.24, 1.0, 0.0, 215.3, 177.0, 90.0, 0.0, 1.0, 1.0, 0.0, 1.0, 1.0, 0.0, 185.0};
	score(x_56, result);
	printScoreCSV(result, length);
	delay(time);

	double x_57[] = {43.0, 0.0, 0.0, 1.0, 1.0, 25.49, 0.0, 0.0, 246.7, 116.0, 68.0, 0.0, 1.0, 2.0, 0.0, 0.0, 2.0, 0.0, 162.0};
	score(x_57, result);
	printScoreCSV(result, length);
	delay(time);

	double x_58[] = {65.0, 0.0, 1.0, 0.0, 0.0, 35.4, 0.0, 0.0, 158.3, 179.0, 93.0, 0.0, 0.0, 0.0, 1.0, 0.0, 2.0, 1.0, 101.0};
	score(x_58, result);
	printScoreCSV(result, length);
	delay(time);

	double x_59[] = {58.0, 1.0, 0.0, 0.0, 1.0, 33.6, 0.0, 0.0, 233.9, 147.0, 96.0, 0.0, 0.0, 3.0, 2.0, 0.0, 0.0, 0.0, 138.0};
	score(x_59, result);
	printScoreCSV(result, length);
	delay(time);

	double x_60[] = {79.0, 0.0, 0.0, 1.0, 0.0, 23.25, 0.0, 0.0, 255.1, 179.0, 72.0, 0.0, 1.0, 3.0, 1.0, 0.0, 2.0, 1.0, 186.0};
	score(x_60, result);
	printScoreCSV(result, length);
	delay(time);

	double x_61[] = {35.0, 1.0, 0.0, 1.0, 2.0, 16.52, 1.0, 0.0, 244.2, 113.0, 113.0, 0.0, 0.0, 1.0, 2.0, 0.0, 2.0, 0.0, 131.0};
	score(x_61, result);
	printScoreCSV(result, length);
	delay(time);

	double x_62[] = {24.0, 1.0, 0.0, 1.0, 1.0, 30.02, 0.0, 1.0, 166.9, 98.0, 85.0, 0.0, 1.0, 3.0, 2.0, 0.0, 0.0, 0.0, 117.0};
	score(x_62, result);
	printScoreCSV(result, length);
	delay(time);

	double x_63[] = {35.0, 1.0, 0.0, 0.0, 2.0, 37.86, 0.0, 1.0, 245.1, 133.0, 112.0, 0.0, 2.0, 1.0, 0.0, 0.0, 0.0, 0.0, 136.0};
	score(x_63, result);
	printScoreCSV(result, length);
	delay(time);

	double x_64[] = {44.0, 1.0, 0.0, 0.0, 0.0, 34.72, 1.0, 0.0, 271.4, 157.0, 81.0, 0.0, 2.0, 1.0, 1.0, 0.0, 1.0, 0.0, 116.0};
	score(x_64, result);
	printScoreCSV(result, length);
	delay(time);

	double x_65[] = {28.0, 0.0, 0.0, 0.0, 1.0, 35.31, 0.0, 0.0, 234.7, 165.0, 82.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 126.0};
	score(x_65, result);
	printScoreCSV(result, length);
	delay(time);

	double x_66[] = {28.0, 1.0, 0.0, 0.0, 2.0, 32.1, 0.0, 0.0, 171.5, 125.0, 99.0, 1.0, 2.0, 2.0, 2.0, 0.0, 1.0, 0.0, 182.0};
	score(x_66, result);
	printScoreCSV(result, length);
	delay(time);

	double x_67[] = {28.0, 1.0, 0.0, 0.0, 2.0, 35.4, 0.0, 1.0, 298.7, 97.0, 81.0, 0.0, 2.0, 2.0, 0.0, 1.0, 1.0, 0.0, 113.0};
	score(x_67, result);
	printScoreCSV(result, length);
	delay(time);

	double x_68[] = {72.0, 1.0, 0.0, 0.0, 1.0, 23.38, 0.0, 0.0, 241.4, 109.0, 76.0, 0.0, 2.0, 2.0, 2.0, 1.0, 2.0, 1.0, 165.0};
	score(x_68, result);
	printScoreCSV(result, length);
	delay(time);

	double x_69[] = {28.0, 0.0, 0.0, 1.0, 1.0, 23.62, 0.0, 0.0, 294.1, 175.0, 91.0, 0.0, 2.0, 0.0, 1.0, 0.0, 1.0, 0.0, 139.0};
	score(x_69, result);
	printScoreCSV(result, length);
	delay(time);

	double x_70[] = {85.0, 0.0, 0.0, 1.0, 2.0, 21.37, 0.0, 1.0, 241.0, 175.0, 104.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 109.0};
	score(x_70, result);
	printScoreCSV(result, length);
	delay(time);

	double x_71[] = {60.0, 1.0, 0.0, 1.0, 1.0, 17.14, 1.0, 0.0, 297.7, 144.0, 73.0, 0.0, 1.0, 2.0, 2.0, 0.0, 2.0, 0.0, 126.0};
	score(x_71, result);
	printScoreCSV(result, length);
	delay(time);

	double x_72[] = {30.0, 1.0, 0.0, 0.0, 1.0, 23.86, 0.0, 0.0, 259.4, 102.0, 90.0, 1.0, 0.0, 0.0, 1.0, 0.0, 1.0, 1.0, 175.0};
	score(x_72, result);
	printScoreCSV(result, length);
	delay(time);

	double x_73[] = {46.0, 1.0, 0.0, 1.0, 0.0, 35.88, 1.0, 0.0, 280.6, 173.0, 78.0, 0.0, 2.0, 3.0, 1.0, 0.0, 2.0, 0.0, 132.0};
	score(x_73, result);
	printScoreCSV(result, length);
	delay(time);

	double x_74[] = {18.0, 0.0, 0.0, 1.0, 2.0, 20.58, 0.0, 0.0, 165.6, 161.0, 117.0, 0.0, 2.0, 3.0, 2.0, 1.0, 0.0, 0.0, 151.0};
	score(x_74, result);
	printScoreCSV(result, length);
	delay(time);

	double x_75[] = {71.0, 1.0, 1.0, 0.0, 2.0, 32.36, 0.0, 0.0, 199.3, 111.0, 121.0, 0.0, 1.0, 3.0, 1.0, 0.0, 2.0, 0.0, 106.0};
	score(x_75, result);
	printScoreCSV(result, length);
	delay(time);

	double x_76[] = {87.0, 1.0, 0.0, 0.0, 1.0, 33.04, 1.0, 1.0, 212.6, 166.0, 77.0, 0.0, 1.0, 0.0, 1.0, 0.0, 2.0, 0.0, 177.0};
	score(x_76, result);
	printScoreCSV(result, length);
	delay(time);

	double x_77[] = {38.0, 0.0, 0.0, 1.0, 1.0, 36.02, 0.0, 1.0, 232.2, 143.0, 98.0, 1.0, 0.0, 2.0, 2.0, 1.0, 2.0, 0.0, 152.0};
	score(x_77, result);
	printScoreCSV(result, length);
	delay(time);

	double x_78[] = {58.0, 0.0, 0.0, 1.0, 1.0, 26.43, 0.0, 1.0, 272.1, 141.0, 84.0, 0.0, 2.0, 1.0, 0.0, 0.0, 1.0, 0.0, 177.0};
	score(x_78, result);
	printScoreCSV(result, length);
	delay(time);

	double x_79[] = {41.0, 1.0, 1.0, 0.0, 1.0, 22.25, 0.0, 0.0, 176.4, 156.0, 94.0, 1.0, 2.0, 3.0, 0.0, 1.0, 2.0, 0.0, 103.0};
	score(x_79, result);
	printScoreCSV(result, length);
	delay(time);

	double x_80[] = {19.0, 1.0, 1.0, 0.0, 1.0, 32.34, 0.0, 0.0, 276.3, 102.0, 94.0, 0.0, 0.0, 3.0, 2.0, 0.0, 1.0, 0.0, 160.0};
	score(x_80, result);
	printScoreCSV(result, length);
	delay(time);

	double x_81[] = {47.0, 0.0, 0.0, 0.0, 1.0, 32.64, 0.0, 0.0, 263.3, 136.0, 96.0, 1.0, 1.0, 2.0, 2.0, 0.0, 2.0, 0.0, 188.0};
	score(x_81, result);
	printScoreCSV(result, length);
	delay(time);

	double x_82[] = {42.0, 1.0, 0.0, 0.0, 2.0, 26.94, 0.0, 1.0, 283.3, 175.0, 89.0, 0.0, 0.0, 0.0, 1.0, 0.0, 2.0, 1.0, 184.0};
	score(x_82, result);
	printScoreCSV(result, length);
	delay(time);

	double x_83[] = {37.0, 0.0, 0.0, 0.0, 0.0, 20.46, 0.0, 0.0, 245.3, 136.0, 125.0, 1.0, 1.0, 2.0, 1.0, 0.0, 2.0, 0.0, 155.0};
	score(x_83, result);
	printScoreCSV(result, length);
	delay(time);

	double x_84[] = {34.0, 1.0, 0.0, 0.0, 1.0, 32.22, 0.0, 0.0, 217.6, 145.0, 68.0, 0.0, 2.0, 0.0, 1.0, 1.0, 2.0, 0.0, 140.0};
	score(x_84, result);
	printScoreCSV(result, length);
	delay(time);

	double x_85[] = {59.0, 1.0, 1.0, 0.0, 1.0, 24.32, 0.0, 0.0, 270.1, 157.0, 81.0, 1.0, 2.0, 0.0, 0.0, 0.0, 0.0, 1.0, 195.0};
	score(x_85, result);
	printScoreCSV(result, length);
	delay(time);

	double x_86[] = {77.0, 1.0, 1.0, 1.0, 1.0, 25.57, 0.0, 0.0, 271.7, 146.0, 96.0, 1.0, 1.0, 1.0, 2.0, 1.0, 2.0, 1.0, 142.0};
	score(x_86, result);
	printScoreCSV(result, length);
	delay(time);

	double x_87[] = {78.0, 0.0, 1.0, 0.0, 2.0, 15.67, 0.0, 0.0, 175.2, 167.0, 122.0, 0.0, 0.0, 2.0, 1.0, 1.0, 2.0, 0.0, 129.0};
	score(x_87, result);
	printScoreCSV(result, length);
	delay(time);

	double x_88[] = {74.0, 1.0, 0.0, 0.0, 1.0, 28.22, 0.0, 0.0, 242.0, 128.0, 81.0, 1.0, 2.0, 3.0, 0.0, 0.0, 1.0, 0.0, 114.0};
	score(x_88, result);
	printScoreCSV(result, length);
	delay(time);

	double x_89[] = {54.0, 1.0, 0.0, 1.0, 0.0, 20.51, 0.0, 0.0, 296.1, 134.0, 79.0, 0.0, 2.0, 2.0, 1.0, 0.0, 1.0, 0.0, 179.0};
	score(x_89, result);
	printScoreCSV(result, length);
	delay(time);

	double x_90[] = {55.0, 1.0, 0.0, 0.0, 1.0, 33.17, 0.0, 0.0, 291.9, 178.0, 108.0, 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 194.0};
	score(x_90, result);
	printScoreCSV(result, length);
	delay(time);

	double x_91[] = {54.0, 1.0, 1.0, 1.0, 1.0, 20.4, 0.0, 0.0, 218.1, 116.0, 72.0, 0.0, 2.0, 1.0, 0.0, 0.0, 1.0, 1.0, 150.0};
	score(x_91, result);
	printScoreCSV(result, length);
	delay(time);

	double x_92[] = {87.0, 0.0, 0.0, 0.0, 1.0, 18.49, 0.0, 0.0, 189.0, 132.0, 93.0, 0.0, 2.0, 0.0, 2.0, 0.0, 2.0, 0.0, 100.0};
	score(x_92, result);
	printScoreCSV(result, length);
	delay(time);

	double x_93[] = {46.0, 0.0, 0.0, 0.0, 2.0, 32.05, 0.0, 1.0, 151.7, 101.0, 114.0, 1.0, 1.0, 2.0, 2.0, 0.0, 2.0, 0.0, 173.0};
	score(x_93, result);
	printScoreCSV(result, length);
	delay(time);

	double x_94[] = {37.0, 0.0, 0.0, 0.0, 1.0, 39.02, 0.0, 0.0, 174.8, 92.0, 109.0, 0.0, 2.0, 2.0, 2.0, 0.0, 0.0, 0.0, 100.0};
	score(x_94, result);
	printScoreCSV(result, length);
	delay(time);

	double x_95[] = {37.0, 0.0, 0.0, 0.0, 2.0, 31.52, 0.0, 1.0, 217.4, 147.0, 104.0, 0.0, 2.0, 0.0, 1.0, 0.0, 2.0, 0.0, 136.0};
	score(x_95, result);
	printScoreCSV(result, length);
	delay(time);

	double x_96[] = {55.0, 0.0, 0.0, 1.0, 0.0, 28.97, 0.0, 0.0, 226.3, 141.0, 77.0, 0.0, 0.0, 2.0, 1.0, 0.0, 0.0, 0.0, 161.0};
	score(x_96, result);
	printScoreCSV(result, length);
	delay(time);

	double x_97[] = {54.0, 1.0, 1.0, 1.0, 0.0, 38.59, 0.0, 0.0, 278.4, 163.0, 126.0, 0.0, 1.0, 0.0, 2.0, 0.0, 1.0, 0.0, 142.0};
	score(x_97, result);
	printScoreCSV(result, length);
	delay(time);

	double x_98[] = {64.0, 1.0, 0.0, 0.0, 2.0, 26.54, 0.0, 0.0, 194.1, 150.0, 95.0, 0.0, 2.0, 3.0, 2.0, 0.0, 2.0, 0.0, 190.0};
	score(x_98, result);
	printScoreCSV(result, length);
	delay(time);

	double x_99[] = {18.0, 1.0, 0.0, 0.0, 0.0, 21.7, 0.0, 1.0, 199.3, 151.0, 84.0, 0.0, 2.0, 0.0, 1.0, 0.0, 2.0, 1.0, 126.0};
	score(x_99, result);
	printScoreCSV(result, length);
	delay(time);
}

// Main
void setup() {
  // changeColor - Initialize pins as outputs
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);

  // Serial Output
  Serial.begin(115200);
}

void loop() {
  changeColor();

  infer(10, 1);

	repeat(2500);
}