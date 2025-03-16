#include <math.h>
#include <string.h>
double sigmoid(double x) {
    if (x < 0.0) {
        double z = exp(x);
        return z / (1.0 + z);
    }
    return 1.0 / (1.0 + exp(-x));
}
void score(double * input, double * output) {
    double var0;
    if (input[2] >= 8.505) {
        if (input[67] >= 1.0) {
            var0 = 0.53540176;
        } else {
            if (input[63] >= 1.0) {
                var0 = 0.53491986;
            } else {
                if (input[106] >= 1.0) {
                    var0 = 0.534126;
                } else {
                    if (input[30] >= 1.0) {
                        if (input[17] >= 1.0) {
                            var0 = -0.5858741;
                        } else {
                            if (input[56] >= 1.0) {
                                var0 = -0.37228486;
                            } else {
                                var0 = 0.53508973;
                            }
                        }
                    } else {
                        if (input[71] >= 1.0) {
                            var0 = -0.66985357;
                        } else {
                            if (input[61] >= 1.0) {
                                var0 = 0.5315056;
                            } else {
                                if (input[40] >= 1.0) {
                                    if (input[11] >= 1.0) {
                                        var0 = 0.5209249;
                                    } else {
                                        if (input[127] >= 1.0) {
                                            var0 = 0.5071612;
                                        } else {
                                            var0 = -0.6250272;
                                        }
                                    }
                                } else {
                                    if (input[17] >= 1.0) {
                                        if (input[59] >= 1.0) {
                                            var0 = 0.0945591;
                                        } else {
                                            var0 = -0.6033567;
                                        }
                                    } else {
                                        if (input[74] >= 1.0) {
                                            var0 = -0.16299257;
                                        } else {
                                            var0 = 0.21154182;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[45] >= 1.0) {
            if (input[1] >= 3.6950002) {
                if (input[16] >= 1.0) {
                    var0 = 0.52423966;
                } else {
                    if (input[10] >= 1.0) {
                        var0 = 0.49221748;
                    } else {
                        var0 = -0.6691063;
                    }
                }
            } else {
                if (input[2] >= 3.025) {
                    var0 = -0.6373783;
                } else {
                    if (input[0] >= 3.255) {
                        if (input[1] >= 3.52) {
                            var0 = 0.03039383;
                        } else {
                            var0 = 0.322927;
                        }
                    } else {
                        var0 = 0.5294378;
                    }
                }
            }
        } else {
            if (input[86] >= 1.0) {
                if (input[117] >= 1.0) {
                    if (input[16] >= 1.0) {
                        var0 = -0.5648314;
                    } else {
                        if (input[21] >= 1.0) {
                            var0 = -0.46469024;
                        } else {
                            var0 = 0.5345118;
                        }
                    }
                } else {
                    if (input[97] >= 1.0) {
                        if (input[4] >= 1.0) {
                            var0 = 0.52423966;
                        } else {
                            if (input[64] >= 1.0) {
                                var0 = 0.52317035;
                            } else {
                                if (input[58] >= 1.0) {
                                    if (input[0] >= 4.435) {
                                        if (input[44] >= 1.0) {
                                            var0 = -0.64532447;
                                        } else {
                                            var0 = -0.06324989;
                                        }
                                    } else {
                                        if (input[41] >= 1.0) {
                                            var0 = -0.447341;
                                        } else {
                                            var0 = 0.44177777;
                                        }
                                    }
                                } else {
                                    if (input[2] >= 0.94) {
                                        if (input[55] >= 1.0) {
                                            var0 = 0.2704307;
                                        } else {
                                            var0 = -0.6403507;
                                        }
                                    } else {
                                        var0 = 0.49875414;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[1] >= 7.09) {
                            var0 = -0.51373434;
                        } else {
                            var0 = 0.5300904;
                        }
                    }
                }
            } else {
                if (input[4] >= 1.0) {
                    if (input[2] >= 2.06) {
                        var0 = 0.5120299;
                    } else {
                        var0 = -0.6563546;
                    }
                } else {
                    if (input[34] >= 1.0) {
                        if (input[2] >= 5.245) {
                            if (input[21] >= 1.0) {
                                if (input[31] >= 1.0) {
                                    var0 = 0.503741;
                                } else {
                                    if (input[0] >= 5.3900003) {
                                        var0 = 0.03039383;
                                    } else {
                                        var0 = -0.64820033;
                                    }
                                }
                            } else {
                                if (input[105] >= 1.0) {
                                    var0 = -0.6504194;
                                } else {
                                    if (input[54] >= 1.0) {
                                        if (input[1] >= 4.105) {
                                            var0 = -0.5883229;
                                        } else {
                                            var0 = 0.40327376;
                                        }
                                    } else {
                                        if (input[49] >= 1.0) {
                                            var0 = 0.016727073;
                                        } else {
                                            var0 = 0.52938765;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[72] >= 1.0) {
                                if (input[9] >= 1.0) {
                                    var0 = -0.6532217;
                                } else {
                                    var0 = 0.53130317;
                                }
                            } else {
                                if (input[13] >= 1.0) {
                                    if (input[0] >= 4.41) {
                                        var0 = -0.42685115;
                                    } else {
                                        var0 = 0.4668977;
                                    }
                                } else {
                                    var0 = 0.5393218;
                                }
                            }
                        }
                    } else {
                        if (input[55] >= 1.0) {
                            if (input[21] >= 1.0) {
                                var0 = 0.48008302;
                            } else {
                                var0 = -0.6584886;
                            }
                        } else {
                            if (input[0] >= 1.89) {
                                var0 = 0.5332979;
                            } else {
                                var0 = -0.605616;
                            }
                        }
                    }
                }
            }
        }
    }
    double var1;
    if (input[2] >= 8.505) {
        if (input[67] >= 1.0) {
            var1 = 0.43597332;
        } else {
            if (input[63] >= 1.0) {
                var1 = 0.43559632;
            } else {
                if (input[37] >= 1.0) {
                    if (input[86] >= 1.0) {
                        if (input[15] >= 1.0) {
                            var1 = 0.56430817;
                        } else {
                            if (input[97] >= 1.0) {
                                if (input[0] >= 3.92) {
                                    var1 = -0.6010003;
                                } else {
                                    var1 = 0.45536897;
                                }
                            } else {
                                var1 = 0.52453154;
                            }
                        }
                    } else {
                        if (input[45] >= 1.0) {
                            var1 = -0.47370633;
                        } else {
                            if (input[0] >= 4.685) {
                                if (input[30] >= 1.0) {
                                    if (input[0] >= 6.17) {
                                        var1 = 0.4257376;
                                    } else {
                                        var1 = 0.115710035;
                                    }
                                } else {
                                    if (input[74] >= 1.0) {
                                        var1 = 0.5793478;
                                    } else {
                                        if (input[0] >= 6.59) {
                                            var1 = 0.4887404;
                                        } else {
                                            var1 = 0.13253546;
                                        }
                                    }
                                }
                            } else {
                                if (input[18] >= 1.0) {
                                    var1 = -0.55167973;
                                } else {
                                    var1 = -0.076154396;
                                }
                            }
                        }
                    }
                } else {
                    if (input[106] >= 1.0) {
                        var1 = 0.43497565;
                    } else {
                        if (input[116] >= 1.0) {
                            if (input[1] >= 9.145) {
                                if (input[0] >= 15.17) {
                                    if (input[88] >= 1.0) {
                                        var1 = 0.45927757;
                                    } else {
                                        if (input[61] >= 1.0) {
                                            var1 = 0.3680605;
                                        } else {
                                            var1 = -0.5253685;
                                        }
                                    }
                                } else {
                                    if (input[34] >= 1.0) {
                                        if (input[71] >= 1.0) {
                                            var1 = -0.47898054;
                                        } else {
                                            var1 = 0.38570294;
                                        }
                                    } else {
                                        if (input[86] >= 1.0) {
                                            var1 = -0.5555847;
                                        } else {
                                            var1 = 0.23858924;
                                        }
                                    }
                                }
                            } else {
                                if (input[1] >= 3.355) {
                                    if (input[41] >= 1.0) {
                                        if (input[59] >= 1.0) {
                                            var1 = 0.34787977;
                                        } else {
                                            var1 = -0.18626301;
                                        }
                                    } else {
                                        if (input[12] >= 1.0) {
                                            var1 = 0.5057623;
                                        } else {
                                            var1 = -0.32047507;
                                        }
                                    }
                                } else {
                                    if (input[44] >= 1.0) {
                                        if (input[36] >= 1.0) {
                                            var1 = -0.34666848;
                                        } else {
                                            var1 = 0.53655046;
                                        }
                                    } else {
                                        if (input[1] >= 3.2350001) {
                                            var1 = -0.096728444;
                                        } else {
                                            var1 = -0.44775218;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[64] >= 1.0) {
                                if (input[2] >= 16.27) {
                                    if (input[0] >= 9.52) {
                                        if (input[0] >= 9.65) {
                                            var1 = -0.53545535;
                                        } else {
                                            var1 = -0.15382746;
                                        }
                                    } else {
                                        if (input[17] >= 1.0) {
                                            var1 = -0.3565032;
                                        } else {
                                            var1 = 0.4460852;
                                        }
                                    }
                                } else {
                                    if (input[17] >= 1.0) {
                                        var1 = -0.27566767;
                                    } else {
                                        var1 = 0.5631429;
                                    }
                                }
                            } else {
                                if (input[33] >= 1.0) {
                                    var1 = 0.52356815;
                                } else {
                                    if (input[4] >= 1.0) {
                                        if (input[2] >= 14.975) {
                                            var1 = -0.5377784;
                                        } else {
                                            var1 = 0.4819152;
                                        }
                                    } else {
                                        if (input[3] >= 1.0) {
                                            var1 = 0.34102365;
                                        } else {
                                            var1 = -0.5648192;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[45] >= 1.0) {
            if (input[1] >= 3.6950002) {
                if (input[16] >= 1.0) {
                    var1 = 0.42728022;
                } else {
                    if (input[10] >= 1.0) {
                        var1 = 0.40272355;
                    } else {
                        if (input[2] >= 7.94) {
                            var1 = -0.12986249;
                        } else {
                            var1 = -0.48897433;
                        }
                    }
                }
            } else {
                if (input[2] >= 3.025) {
                    var1 = -0.46993172;
                } else {
                    if (input[1] >= 3.605) {
                        if (input[10] >= 1.0) {
                            var1 = 0.3016059;
                        } else {
                            var1 = -0.022562267;
                        }
                    } else {
                        var1 = 0.43177554;
                    }
                }
            }
        } else {
            if (input[86] >= 1.0) {
                if (input[117] >= 1.0) {
                    if (input[16] >= 1.0) {
                        var1 = -0.42839232;
                    } else {
                        if (input[21] >= 1.0) {
                            var1 = -0.36855078;
                        } else {
                            var1 = 0.43527725;
                        }
                    }
                } else {
                    if (input[97] >= 1.0) {
                        if (input[4] >= 1.0) {
                            var1 = 0.42728022;
                        } else {
                            if (input[64] >= 1.0) {
                                var1 = 0.42645144;
                            } else {
                                if (input[36] >= 1.0) {
                                    if (input[33] >= 1.0) {
                                        var1 = -0.4529642;
                                    } else {
                                        if (input[56] >= 1.0) {
                                            var1 = -0.4144962;
                                        } else {
                                            var1 = 0.48809865;
                                        }
                                    }
                                } else {
                                    if (input[42] >= 1.0) {
                                        if (input[2] >= 4.815) {
                                            var1 = 0.46438527;
                                        } else {
                                            var1 = -0.520354;
                                        }
                                    } else {
                                        if (input[2] >= 0.94) {
                                            var1 = -0.5077024;
                                        } else {
                                            var1 = 0.40769604;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[1] >= 7.09) {
                            var1 = -0.3983462;
                        } else {
                            var1 = 0.431827;
                        }
                    }
                }
            } else {
                if (input[4] >= 1.0) {
                    if (input[2] >= 2.06) {
                        var1 = 0.41785553;
                    } else {
                        var1 = -0.48068863;
                    }
                } else {
                    if (input[2] >= 5.125) {
                        if (input[105] >= 1.0) {
                            var1 = -0.47904533;
                        } else {
                            if (input[55] >= 1.0) {
                                if (input[10] >= 1.0) {
                                    var1 = -0.47730115;
                                } else {
                                    if (input[0] >= 6.4049997) {
                                        var1 = 0.0896488;
                                    } else {
                                        var1 = 0.3939121;
                                    }
                                }
                            } else {
                                if (input[21] >= 1.0) {
                                    if (input[58] >= 1.0) {
                                        if (input[42] >= 1.0) {
                                            var1 = -0.3100333;
                                        } else {
                                            var1 = 0.4296001;
                                        }
                                    } else {
                                        if (input[34] >= 1.0) {
                                            var1 = -0.4751791;
                                        } else {
                                            var1 = 0.3913385;
                                        }
                                    }
                                } else {
                                    if (input[54] >= 1.0) {
                                        if (input[1] >= 4.01) {
                                            var1 = -0.41129702;
                                        } else {
                                            var1 = 0.33368978;
                                        }
                                    } else {
                                        if (input[49] >= 1.0) {
                                            var1 = 0.011217321;
                                        } else {
                                            var1 = 0.43174538;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[34] >= 1.0) {
                            if (input[72] >= 1.0) {
                                if (input[9] >= 1.0) {
                                    var1 = -0.4789138;
                                } else {
                                    var1 = 0.4327338;
                                }
                            } else {
                                var1 = 0.43773735;
                            }
                        } else {
                            if (input[0] >= 1.89) {
                                if (input[55] >= 1.0) {
                                    var1 = -0.11320454;
                                } else {
                                    var1 = 0.37037924;
                                }
                            } else {
                                var1 = -0.47417676;
                            }
                        }
                    }
                }
            }
        }
    }
    double var2;
    if (input[2] >= 8.215) {
        if (input[23] >= 1.0) {
            if (input[99] >= 1.0) {
                var2 = -0.48795012;
            } else {
                if (input[74] >= 1.0) {
                    if (input[34] >= 1.0) {
                        if (input[2] >= 11.445) {
                            var2 = 0.6552501;
                        } else {
                            var2 = 0.38152233;
                        }
                    } else {
                        if (input[2] >= 11.21) {
                            var2 = -0.3865542;
                        } else {
                            var2 = 0.43105036;
                        }
                    }
                } else {
                    if (input[71] >= 1.0) {
                        var2 = -0.39286005;
                    } else {
                        if (input[17] >= 1.0) {
                            var2 = -0.41396058;
                        } else {
                            if (input[2] >= 29.895) {
                                var2 = -0.38516364;
                            } else {
                                var2 = 0.4028432;
                            }
                        }
                    }
                }
            }
        } else {
            if (input[30] >= 1.0) {
                if (input[47] >= 1.0) {
                    if (input[34] >= 1.0) {
                        var2 = -0.40176496;
                    } else {
                        var2 = 0.36539778;
                    }
                } else {
                    var2 = 0.4081304;
                }
            } else {
                if (input[83] >= 1.0) {
                    if (input[17] >= 1.0) {
                        var2 = -0.3860874;
                    } else {
                        if (input[1] >= 5.9750004) {
                            var2 = 0.44457406;
                        } else {
                            var2 = 0.6100855;
                        }
                    }
                } else {
                    if (input[67] >= 1.0) {
                        var2 = 0.38506627;
                    } else {
                        if (input[15] >= 1.0) {
                            if (input[2] >= 11.4) {
                                var2 = 0.4714141;
                            } else {
                                if (input[0] >= 4.5550003) {
                                    var2 = 0.11749115;
                                } else {
                                    var2 = -0.38803995;
                                }
                            }
                        } else {
                            if (input[63] >= 1.0) {
                                var2 = 0.3844828;
                            } else {
                                if (input[93] >= 1.0) {
                                    var2 = 0.59585077;
                                } else {
                                    if (input[61] >= 1.0) {
                                        var2 = 0.42626646;
                                    } else {
                                        if (input[106] >= 1.0) {
                                            var2 = 0.38325748;
                                        } else {
                                            var2 = -0.19720283;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[45] >= 1.0) {
            if (input[1] >= 3.6950002) {
                if (input[16] >= 1.0) {
                    var2 = 0.3767015;
                } else {
                    if (input[10] >= 1.0) {
                        var2 = 0.35221836;
                    } else {
                        var2 = -0.41502354;
                    }
                }
            } else {
                if (input[2] >= 3.025) {
                    var2 = -0.3964637;
                } else {
                    if (input[0] >= 3.1350002) {
                        if (input[1] >= 3.5349998) {
                            var2 = -0.024965469;
                        } else {
                            if (input[2] >= 2.395) {
                                var2 = 0.27996236;
                            } else {
                                var2 = 0.07215036;
                            }
                        }
                    } else {
                        var2 = 0.38561544;
                    }
                }
            }
        } else {
            if (input[86] >= 1.0) {
                if (input[117] >= 1.0) {
                    if (input[16] >= 1.0) {
                        var2 = -0.3294843;
                    } else {
                        if (input[21] >= 1.0) {
                            var2 = -0.26708797;
                        } else {
                            var2 = 0.38485005;
                        }
                    }
                } else {
                    if (input[97] >= 1.0) {
                        if (input[4] >= 1.0) {
                            var2 = 0.37580022;
                        } else {
                            if (input[64] >= 1.0) {
                                var2 = 0.37584868;
                            } else {
                                if (input[36] >= 1.0) {
                                    if (input[33] >= 1.0) {
                                        var2 = -0.36644626;
                                    } else {
                                        if (input[56] >= 1.0) {
                                            var2 = -0.34050223;
                                        } else {
                                            var2 = 0.41431174;
                                        }
                                    }
                                } else {
                                    if (input[2] >= 0.94) {
                                        if (input[42] >= 1.0) {
                                            var2 = -0.030745618;
                                        } else {
                                            var2 = -0.4242317;
                                        }
                                    } else {
                                        var2 = 0.35705206;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[1] >= 7.09) {
                            var2 = -0.31045288;
                        } else {
                            var2 = 0.38069943;
                        }
                    }
                }
            } else {
                if (input[4] >= 1.0) {
                    if (input[2] >= 2.06) {
                        var2 = 0.36711782;
                    } else {
                        var2 = -0.40684208;
                    }
                } else {
                    if (input[115] >= 1.0) {
                        if (input[49] >= 1.0) {
                            var2 = -0.63794065;
                        } else {
                            if (input[9] >= 1.0) {
                                if (input[72] >= 1.0) {
                                    var2 = -0.41007823;
                                } else {
                                    if (input[13] >= 1.0) {
                                        if (input[105] >= 1.0) {
                                            var2 = -0.41509005;
                                        } else {
                                            var2 = 0.23705469;
                                        }
                                    } else {
                                        if (input[56] >= 1.0) {
                                            var2 = -0.39309987;
                                        } else {
                                            var2 = 0.28773215;
                                        }
                                    }
                                }
                            } else {
                                if (input[55] >= 1.0) {
                                    if (input[10] >= 1.0) {
                                        var2 = -0.40640137;
                                    } else {
                                        if (input[0] >= 1.6850001) {
                                            var2 = 0.38296068;
                                        } else {
                                            var2 = -0.34920883;
                                        }
                                    }
                                } else {
                                    if (input[21] >= 1.0) {
                                        if (input[39] >= 1.0) {
                                            var2 = -0.40230402;
                                        } else {
                                            var2 = 0.3845765;
                                        }
                                    } else {
                                        if (input[82] >= 1.0) {
                                            var2 = 0.26070076;
                                        } else {
                                            var2 = 0.38200587;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        var2 = 0.40043545;
                    }
                }
            }
        }
    }
    double var3;
    if (input[2] >= 7.965) {
        if (input[71] >= 1.0) {
            if (input[43] >= 1.0) {
                var3 = 0.34300813;
            } else {
                var3 = -0.4032003;
            }
        } else {
            if (input[3] >= 1.0) {
                var3 = 0.46620202;
            } else {
                if (input[23] >= 1.0) {
                    if (input[99] >= 1.0) {
                        var3 = -0.40003675;
                    } else {
                        if (input[69] >= 1.0) {
                            var3 = -0.35888767;
                        } else {
                            if (input[40] >= 1.0) {
                                if (input[81] >= 1.0) {
                                    var3 = 0.44469243;
                                } else {
                                    var3 = -0.36561504;
                                }
                            } else {
                                if (input[45] >= 1.0) {
                                    var3 = 0.48331222;
                                } else {
                                    var3 = 0.38318583;
                                }
                            }
                        }
                    }
                } else {
                    if (input[60] >= 1.0) {
                        if (input[37] >= 1.0) {
                            var3 = 0.48681793;
                        } else {
                            var3 = -0.46432143;
                        }
                    } else {
                        if (input[88] >= 1.0) {
                            if (input[38] >= 1.0) {
                                var3 = 0.4794103;
                            } else {
                                var3 = 0.34489787;
                            }
                        } else {
                            if (input[38] >= 1.0) {
                                if (input[73] >= 1.0) {
                                    var3 = -0.55405194;
                                } else {
                                    if (input[2] >= 9.125) {
                                        var3 = -0.42761004;
                                    } else {
                                        if (input[1] >= 6.5600004) {
                                            var3 = 0.36849517;
                                        } else {
                                            var3 = -0.31267288;
                                        }
                                    }
                                }
                            } else {
                                if (input[55] >= 1.0) {
                                    if (input[37] >= 1.0) {
                                        if (input[18] >= 1.0) {
                                            var3 = 0.3869882;
                                        } else {
                                            var3 = -0.42168328;
                                        }
                                    } else {
                                        if (input[17] >= 1.0) {
                                            var3 = 0.83849233;
                                        } else {
                                            var3 = 0.49381718;
                                        }
                                    }
                                } else {
                                    if (input[74] >= 1.0) {
                                        if (input[34] >= 1.0) {
                                            var3 = -0.17319441;
                                        } else {
                                            var3 = 0.094375074;
                                        }
                                    } else {
                                        if (input[47] >= 1.0) {
                                            var3 = -0.18551962;
                                        } else {
                                            var3 = 0.35055065;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[45] >= 1.0) {
            if (input[1] >= 3.6950002) {
                if (input[16] >= 1.0) {
                    var3 = 0.34515962;
                } else {
                    if (input[10] >= 1.0) {
                        var3 = 0.31822684;
                    } else {
                        var3 = -0.37479174;
                    }
                }
            } else {
                if (input[2] >= 3.025) {
                    var3 = -0.3529551;
                } else {
                    if (input[0] >= 3.1350002) {
                        if (input[9] >= 1.0) {
                            var3 = 0.2661393;
                        } else {
                            if (input[37] >= 1.0) {
                                var3 = 0.19966877;
                            } else {
                                var3 = -0.17257899;
                            }
                        }
                    } else {
                        var3 = 0.35466748;
                    }
                }
            }
        } else {
            if (input[86] >= 1.0) {
                if (input[116] >= 1.0) {
                    if (input[58] >= 1.0) {
                        if (input[41] >= 1.0) {
                            var3 = -0.36706707;
                        } else {
                            if (input[44] >= 1.0) {
                                if (input[42] >= 1.0) {
                                    var3 = -0.45024064;
                                } else {
                                    if (input[0] >= 4.8) {
                                        var3 = -0.24201512;
                                    } else {
                                        var3 = 0.33903167;
                                    }
                                }
                            } else {
                                if (input[1] >= 3.455) {
                                    var3 = 0.3913508;
                                } else {
                                    var3 = -0.14778692;
                                }
                            }
                        }
                    } else {
                        if (input[4] >= 1.0) {
                            var3 = 0.33589625;
                        } else {
                            if (input[64] >= 1.0) {
                                var3 = 0.33214054;
                            } else {
                                if (input[97] >= 1.0) {
                                    if (input[2] >= 0.94) {
                                        if (input[55] >= 1.0) {
                                            var3 = 0.1722723;
                                        } else {
                                            var3 = -0.36831334;
                                        }
                                    } else {
                                        var3 = 0.32337704;
                                    }
                                } else {
                                    if (input[1] >= 6.085) {
                                        var3 = -0.015530406;
                                    } else {
                                        var3 = 0.32999;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] >= 4.6400003) {
                        if (input[3] >= 1.0) {
                            var3 = 0.2562115;
                        } else {
                            var3 = -0.3413306;
                        }
                    } else {
                        if (input[56] >= 1.0) {
                            var3 = -0.24542297;
                        } else {
                            var3 = 0.35222527;
                        }
                    }
                }
            } else {
                if (input[34] >= 1.0) {
                    if (input[4] >= 1.0) {
                        if (input[2] >= 2.06) {
                            var3 = 0.33435804;
                        } else {
                            var3 = -0.36135748;
                        }
                    } else {
                        if (input[2] >= 5.475) {
                            if (input[21] >= 1.0) {
                                if (input[31] >= 1.0) {
                                    var3 = 0.32044607;
                                } else {
                                    var3 = -0.37253726;
                                }
                            } else {
                                if (input[105] >= 1.0) {
                                    var3 = -0.3575382;
                                } else {
                                    if (input[54] >= 1.0) {
                                        if (input[8] >= 1.0) {
                                            var3 = 0.394051;
                                        } else {
                                            var3 = -0.3586486;
                                        }
                                    } else {
                                        if (input[49] >= 1.0) {
                                            var3 = -0.010610329;
                                        } else {
                                            var3 = 0.35985732;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[72] >= 1.0) {
                                if (input[9] >= 1.0) {
                                    var3 = -0.36322743;
                                } else {
                                    var3 = 0.3519304;
                                }
                            } else {
                                if (input[13] >= 1.0) {
                                    if (input[42] >= 1.0) {
                                        var3 = -0.3413017;
                                    } else {
                                        if (input[2] >= 5.1549997) {
                                            var3 = 0.05803997;
                                        } else {
                                            var3 = 0.31504756;
                                        }
                                    }
                                } else {
                                    var3 = 0.36127627;
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] >= 2.1950002) {
                        if (input[10] >= 1.0) {
                            if (input[55] >= 1.0) {
                                var3 = -0.36400342;
                            } else {
                                var3 = 0.29994395;
                            }
                        } else {
                            var3 = 0.3550468;
                        }
                    } else {
                        var3 = -0.41470802;
                    }
                }
            }
        }
    }
    double var4;
    if (input[86] >= 1.0) {
        if (input[4] >= 1.0) {
            if (input[1] >= 9.705) {
                var4 = -0.29907516;
            } else {
                if (input[2] >= 8.245) {
                    var4 = 0.5239277;
                } else {
                    var4 = 0.32728302;
                }
            }
        } else {
            if (input[44] >= 1.0) {
                if (input[2] >= 13.985) {
                    if (input[88] >= 1.0) {
                        var4 = 0.31319028;
                    } else {
                        var4 = -0.4392281;
                    }
                } else {
                    if (input[18] >= 1.0) {
                        if (input[33] >= 1.0) {
                            var4 = -0.3853395;
                        } else {
                            var4 = 0.37311822;
                        }
                    } else {
                        if (input[9] >= 1.0) {
                            if (input[1] >= 8.985) {
                                if (input[1] >= 9.43) {
                                    var4 = 0.30025014;
                                } else {
                                    var4 = 0.08107021;
                                }
                            } else {
                                if (input[37] >= 1.0) {
                                    var4 = 0.3388754;
                                } else {
                                    if (input[41] >= 1.0) {
                                        var4 = 0.25682372;
                                    } else {
                                        if (input[1] >= 8.53) {
                                            var4 = -0.100894995;
                                        } else {
                                            var4 = -0.4034653;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[42] >= 1.0) {
                                if (input[0] >= 5.615) {
                                    if (input[33] >= 1.0) {
                                        var4 = 0.81055224;
                                    } else {
                                        if (input[1] >= 5.71) {
                                            var4 = 0.38473406;
                                        } else {
                                            var4 = 0.061518714;
                                        }
                                    }
                                } else {
                                    var4 = -0.37312293;
                                }
                            } else {
                                if (input[0] >= 4.6949997) {
                                    if (input[30] >= 1.0) {
                                        var4 = 0.23165621;
                                    } else {
                                        var4 = -0.37427425;
                                    }
                                } else {
                                    if (input[43] >= 1.0) {
                                        if (input[64] >= 1.0) {
                                            var4 = 0.3223825;
                                        } else {
                                            var4 = -0.33934638;
                                        }
                                    } else {
                                        if (input[2] >= 9.825001) {
                                            var4 = -0.20654358;
                                        } else {
                                            var4 = 0.36328945;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[17] >= 1.0) {
                    if (input[74] >= 1.0) {
                        var4 = -0.38460168;
                    } else {
                        var4 = 0.3205602;
                    }
                } else {
                    if (input[40] >= 1.0) {
                        var4 = -0.37403208;
                    } else {
                        if (input[2] >= 23.974998) {
                            if (input[114] >= 1.0) {
                                var4 = -0.36285764;
                            } else {
                                if (input[18] >= 1.0) {
                                    var4 = 0.60332745;
                                } else {
                                    var4 = 0.36192214;
                                }
                            }
                        } else {
                            if (input[64] >= 1.0) {
                                if (input[0] >= 10.22) {
                                    var4 = 0.3618865;
                                } else {
                                    var4 = 0.5468702;
                                }
                            } else {
                                if (input[42] >= 1.0) {
                                    var4 = 0.3946751;
                                } else {
                                    if (input[1] >= 10.645) {
                                        if (input[34] >= 1.0) {
                                            var4 = 0.37845585;
                                        } else {
                                            var4 = -0.37081409;
                                        }
                                    } else {
                                        if (input[8] >= 1.0) {
                                            var4 = 0.15265024;
                                        } else {
                                            var4 = -0.17417556;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[87] >= 1.0) {
                if (input[42] >= 1.0) {
                    var4 = 0.8283438;
                } else {
                    if (input[21] >= 1.0) {
                        if (input[23] >= 1.0) {
                            var4 = 0.3554135;
                        } else {
                            var4 = 0.6888783;
                        }
                    } else {
                        var4 = 0.3827526;
                    }
                }
            } else {
                if (input[37] >= 1.0) {
                    if (input[0] >= 4.46) {
                        var4 = 0.40787932;
                    } else {
                        if (input[55] >= 1.0) {
                            if (input[1] >= 5.33) {
                                var4 = -0.09779264;
                            } else {
                                var4 = -0.33579552;
                            }
                        } else {
                            var4 = 0.32633844;
                        }
                    }
                } else {
                    if (input[2] >= 5.1549997) {
                        if (input[21] >= 1.0) {
                            var4 = -0.43218622;
                        } else {
                            if (input[58] >= 1.0) {
                                var4 = -0.4056305;
                            } else {
                                if (input[38] >= 1.0) {
                                    var4 = -0.42835012;
                                } else {
                                    if (input[2] >= 7.21) {
                                        if (input[10] >= 1.0) {
                                            var4 = -0.15979421;
                                        } else {
                                            var4 = 0.3926288;
                                        }
                                    } else {
                                        if (input[74] >= 1.0) {
                                            var4 = -0.5058742;
                                        } else {
                                            var4 = 0.20599058;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[105] >= 1.0) {
                            var4 = -0.24090612;
                        } else {
                            var4 = 0.33978993;
                        }
                    }
                }
            }
        } else {
            if (input[2] >= 8.705) {
                if (input[11] >= 1.0) {
                    if (input[97] >= 1.0) {
                        var4 = 0.5086374;
                    } else {
                        var4 = 0.33197334;
                    }
                } else {
                    if (input[65] >= 1.0) {
                        if (input[74] >= 1.0) {
                            if (input[0] >= 14.27) {
                                if (input[1] >= 8.014999) {
                                    var4 = -0.37106836;
                                } else {
                                    if (input[23] >= 1.0) {
                                        var4 = 0.36674517;
                                    } else {
                                        if (input[124] >= 1.0) {
                                            var4 = 0.8397602;
                                        } else {
                                            var4 = 0.50742126;
                                        }
                                    }
                                }
                            } else {
                                if (input[38] >= 1.0) {
                                    var4 = 0.29253173;
                                } else {
                                    if (input[23] >= 1.0) {
                                        if (input[0] >= 8.605) {
                                            var4 = 0.11833565;
                                        } else {
                                            var4 = -0.29804957;
                                        }
                                    } else {
                                        if (input[2] >= 8.8) {
                                            var4 = -0.42855233;
                                        } else {
                                            var4 = -0.07163128;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[1] >= 8.055) {
                                if (input[2] >= 17.16) {
                                    if (input[41] >= 1.0) {
                                        var4 = 0.46376246;
                                    } else {
                                        var4 = -0.38194865;
                                    }
                                } else {
                                    if (input[41] >= 1.0) {
                                        var4 = -0.6403973;
                                    } else {
                                        var4 = -0.40379903;
                                    }
                                }
                            } else {
                                if (input[40] >= 1.0) {
                                    var4 = -0.37196267;
                                } else {
                                    if (input[71] >= 1.0) {
                                        var4 = -0.36527368;
                                    } else {
                                        if (input[97] >= 1.0) {
                                            var4 = 0.391795;
                                        } else {
                                            var4 = -0.37827513;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[97] >= 1.0) {
                            if (input[64] >= 1.0) {
                                var4 = 0.49314213;
                            } else {
                                var4 = 0.37023738;
                            }
                        } else {
                            if (input[36] >= 1.0) {
                                var4 = 0.3501191;
                            } else {
                                var4 = -0.42059028;
                            }
                        }
                    }
                }
            } else {
                if (input[1] >= 4.535) {
                    if (input[47] >= 1.0) {
                        if (input[12] >= 1.0) {
                            if (input[0] >= 2.005) {
                                var4 = 0.3023326;
                            } else {
                                if (input[79] >= 1.0) {
                                    var4 = 0.18785839;
                                } else {
                                    var4 = -0.36305842;
                                }
                            }
                        } else {
                            if (input[37] >= 1.0) {
                                if (input[0] >= 1.095) {
                                    var4 = -0.36694717;
                                } else {
                                    var4 = 0.29975662;
                                }
                            } else {
                                if (input[119] >= 1.0) {
                                    var4 = -0.27787665;
                                } else {
                                    if (input[72] >= 1.0) {
                                        if (input[9] >= 1.0) {
                                            var4 = -0.3043217;
                                        } else {
                                            var4 = 0.32466593;
                                        }
                                    } else {
                                        if (input[56] >= 1.0) {
                                            var4 = -0.21418531;
                                        } else {
                                            var4 = 0.36040556;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[16] >= 1.0) {
                            var4 = 0.32266927;
                        } else {
                            if (input[0] >= 1.715) {
                                var4 = -0.35132048;
                            } else {
                                var4 = -0.093885906;
                            }
                        }
                    }
                } else {
                    if (input[42] >= 1.0) {
                        var4 = -0.31071454;
                    } else {
                        if (input[78] >= 1.0) {
                            if (input[3] >= 1.0) {
                                var4 = -0.0721041;
                            } else {
                                var4 = -0.29974672;
                            }
                        } else {
                            if (input[51] >= 1.0) {
                                if (input[12] >= 1.0) {
                                    var4 = -0.19924787;
                                } else {
                                    var4 = 0.1876783;
                                }
                            } else {
                                if (input[2] >= 8.055) {
                                    var4 = -0.043390576;
                                } else {
                                    var4 = 0.3393849;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var5;
    if (input[2] >= 7.605) {
        if (input[40] >= 1.0) {
            if (input[2] >= 23.875) {
                if (input[74] >= 1.0) {
                    if (input[2] >= 56.13) {
                        var5 = -0.35605568;
                    } else {
                        if (input[19] >= 1.0) {
                            var5 = -0.21591364;
                        } else {
                            if (input[1] >= 9.145) {
                                if (input[2] >= 26.105) {
                                    if (input[2] >= 37.394997) {
                                        var5 = 0.04671211;
                                    } else {
                                        var5 = 0.33196002;
                                    }
                                } else {
                                    var5 = -0.080977656;
                                }
                            } else {
                                var5 = 0.44617465;
                            }
                        }
                    }
                } else {
                    var5 = -0.3538236;
                }
            } else {
                if (input[11] >= 1.0) {
                    var5 = 0.35786927;
                } else {
                    if (input[9] >= 1.0) {
                        var5 = -0.37455434;
                    } else {
                        var5 = 0.014994995;
                    }
                }
            }
        } else {
            if (input[87] >= 1.0) {
                if (input[39] >= 1.0) {
                    var5 = -0.38982132;
                } else {
                    if (input[60] >= 1.0) {
                        var5 = -0.34817314;
                    } else {
                        if (input[42] >= 1.0) {
                            var5 = 0.5269006;
                        } else {
                            var5 = 0.40555236;
                        }
                    }
                }
            } else {
                if (input[53] >= 1.0) {
                    if (input[17] >= 1.0) {
                        if (input[2] >= 9.625) {
                            var5 = -0.34863776;
                        } else {
                            var5 = 0.19221298;
                        }
                    } else {
                        if (input[38] >= 1.0) {
                            var5 = -0.3308746;
                        } else {
                            if (input[28] >= 1.0) {
                                var5 = -0.4249478;
                            } else {
                                if (input[60] >= 1.0) {
                                    var5 = -0.32711613;
                                } else {
                                    if (input[72] >= 1.0) {
                                        var5 = -0.35316932;
                                    } else {
                                        if (input[69] >= 1.0) {
                                            var5 = 0.06059413;
                                        } else {
                                            var5 = 0.41910312;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[1] >= 10.265) {
                        if (input[1] >= 19.255001) {
                            var5 = -0.35887754;
                        } else {
                            if (input[34] >= 1.0) {
                                if (input[71] >= 1.0) {
                                    if (input[38] >= 1.0) {
                                        var5 = -0.34290573;
                                    } else {
                                        var5 = 0.28848347;
                                    }
                                } else {
                                    if (input[37] >= 1.0) {
                                        var5 = -0.26883554;
                                    } else {
                                        if (input[81] >= 1.0) {
                                            var5 = 0.19333279;
                                        } else {
                                            var5 = 0.38832548;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] >= 21.810001) {
                                    var5 = -0.022725785;
                                } else {
                                    var5 = -0.3507648;
                                }
                            }
                        }
                    } else {
                        if (input[34] >= 1.0) {
                            if (input[67] >= 1.0) {
                                var5 = 0.32130966;
                            } else {
                                if (input[59] >= 1.0) {
                                    if (input[36] >= 1.0) {
                                        if (input[97] >= 1.0) {
                                            var5 = -0.40433544;
                                        } else {
                                            var5 = 0.30109635;
                                        }
                                    } else {
                                        if (input[1] >= 8.370001) {
                                            var5 = -0.37994978;
                                        } else {
                                            var5 = 0.26263615;
                                        }
                                    }
                                } else {
                                    if (input[12] >= 1.0) {
                                        var5 = 0.38913748;
                                    } else {
                                        if (input[18] >= 1.0) {
                                            var5 = 0.16078562;
                                        } else {
                                            var5 = -0.26078808;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[2] >= 14.845) {
                                if (input[86] >= 1.0) {
                                    if (input[45] >= 1.0) {
                                        var5 = 0.3297549;
                                    } else {
                                        if (input[64] >= 1.0) {
                                            var5 = 0.099529706;
                                        } else {
                                            var5 = -0.39970285;
                                        }
                                    }
                                } else {
                                    var5 = 0.36979738;
                                }
                            } else {
                                if (input[59] >= 1.0) {
                                    if (input[9] >= 1.0) {
                                        var5 = -0.4000539;
                                    } else {
                                        var5 = 0.379324;
                                    }
                                } else {
                                    if (input[60] >= 1.0) {
                                        var5 = -0.29173884;
                                    } else {
                                        var5 = 0.40549186;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[45] >= 1.0) {
            if (input[1] >= 3.6950002) {
                if (input[16] >= 1.0) {
                    var5 = 0.30666423;
                } else {
                    if (input[10] >= 1.0) {
                        var5 = 0.2938159;
                    } else {
                        var5 = -0.33732936;
                    }
                }
            } else {
                if (input[2] >= 3.025) {
                    var5 = -0.29812142;
                } else {
                    if (input[1] >= 3.605) {
                        var5 = 0.09594332;
                    } else {
                        var5 = 0.31745172;
                    }
                }
            }
        } else {
            if (input[115] >= 1.0) {
                if (input[74] >= 1.0) {
                    if (input[36] >= 1.0) {
                        if (input[44] >= 1.0) {
                            var5 = -0.42892668;
                        } else {
                            if (input[2] >= 1.96) {
                                if (input[56] >= 1.0) {
                                    var5 = -0.26885757;
                                } else {
                                    var5 = 0.33843166;
                                }
                            } else {
                                var5 = -0.3414301;
                            }
                        }
                    } else {
                        if (input[86] >= 1.0) {
                            if (input[2] >= 4.815) {
                                if (input[20] >= 1.0) {
                                    var5 = -0.3191933;
                                } else {
                                    if (input[16] >= 1.0) {
                                        var5 = -0.24082313;
                                    } else {
                                        if (input[119] >= 1.0) {
                                            var5 = -0.17967698;
                                        } else {
                                            var5 = 0.31159794;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] >= 0.94) {
                                    var5 = -0.3448378;
                                } else {
                                    var5 = 0.31122723;
                                }
                            }
                        } else {
                            if (input[78] >= 1.0) {
                                var5 = -0.29766527;
                            } else {
                                if (input[2] >= 6.325) {
                                    if (input[0] >= 4.585) {
                                        if (input[0] >= 4.8199997) {
                                            var5 = 0.31443566;
                                        } else {
                                            var5 = 0.067670755;
                                        }
                                    } else {
                                        if (input[1] >= 4.3900003) {
                                            var5 = -0.27993155;
                                        } else {
                                            var5 = 0.237693;
                                        }
                                    }
                                } else {
                                    if (input[10] >= 1.0) {
                                        if (input[34] >= 1.0) {
                                            var5 = 0.27736667;
                                        } else {
                                            var5 = -0.2710783;
                                        }
                                    } else {
                                        if (input[2] >= 6.045) {
                                            var5 = 0.18638264;
                                        } else {
                                            var5 = 0.32617322;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[37] >= 1.0) {
                        if (input[69] >= 1.0) {
                            var5 = 0.26824948;
                        } else {
                            var5 = -0.33475024;
                        }
                    } else {
                        if (input[105] >= 1.0) {
                            if (input[2] >= 4.2) {
                                var5 = -0.34045252;
                            } else {
                                var5 = 0.3035097;
                            }
                        } else {
                            if (input[87] >= 1.0) {
                                if (input[58] >= 1.0) {
                                    var5 = -0.29546484;
                                } else {
                                    var5 = 0.31047678;
                                }
                            } else {
                                var5 = 0.33102527;
                            }
                        }
                    }
                }
            } else {
                if (input[13] >= 1.0) {
                    if (input[71] >= 1.0) {
                        var5 = -0.30868766;
                    } else {
                        var5 = 0.30796704;
                    }
                } else {
                    var5 = 0.3408242;
                }
            }
        }
    }
    double var6;
    if (input[2] >= 17.665) {
        if (input[2] >= 26.345001) {
            if (input[1] >= 13.245) {
                if (input[0] >= 11.985) {
                    var6 = -0.32696676;
                } else {
                    var6 = -0.039182864;
                }
            } else {
                if (input[16] >= 1.0) {
                    var6 = -0.35292253;
                } else {
                    if (input[20] >= 1.0) {
                        var6 = -0.33077615;
                    } else {
                        if (input[41] >= 1.0) {
                            var6 = -0.34237996;
                        } else {
                            if (input[64] >= 1.0) {
                                var6 = -0.29720482;
                            } else {
                                if (input[42] >= 1.0) {
                                    var6 = -0.23873566;
                                } else {
                                    if (input[2] >= 54.445) {
                                        if (input[1] >= 11.24) {
                                            var6 = -0.23305722;
                                        } else {
                                            var6 = 0.036282677;
                                        }
                                    } else {
                                        if (input[21] >= 1.0) {
                                            var6 = 0.14615287;
                                        } else {
                                            var6 = 0.3672322;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[93] >= 1.0) {
                var6 = 0.34485078;
            } else {
                if (input[74] >= 1.0) {
                    if (input[63] >= 1.0) {
                        var6 = 0.30888417;
                    } else {
                        if (input[18] >= 1.0) {
                            if (input[58] >= 1.0) {
                                var6 = 0.4330948;
                            } else {
                                if (input[1] >= 5.58) {
                                    if (input[87] >= 1.0) {
                                        var6 = 0.23360954;
                                    } else {
                                        if (input[53] >= 1.0) {
                                            var6 = -0.050600145;
                                        } else {
                                            var6 = -0.35973975;
                                        }
                                    }
                                } else {
                                    if (input[86] >= 1.0) {
                                        var6 = -0.242668;
                                    } else {
                                        var6 = 0.30340487;
                                    }
                                }
                            }
                        } else {
                            if (input[54] >= 1.0) {
                                var6 = 0.32219684;
                            } else {
                                if (input[49] >= 1.0) {
                                    var6 = 0.31095397;
                                } else {
                                    if (input[3] >= 1.0) {
                                        var6 = 0.27686504;
                                    } else {
                                        if (input[45] >= 1.0) {
                                            var6 = -0.047506075;
                                        } else {
                                            var6 = -0.3356043;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[34] >= 1.0) {
                        if (input[42] >= 1.0) {
                            var6 = -0.26828748;
                        } else {
                            if (input[0] >= 30.985) {
                                var6 = -0.20745543;
                            } else {
                                if (input[45] >= 1.0) {
                                    var6 = -0.2220497;
                                } else {
                                    var6 = 0.36639702;
                                }
                            }
                        }
                    } else {
                        var6 = -0.32855606;
                    }
                }
            }
        }
    } else {
        if (input[40] >= 1.0) {
            if (input[2] >= 7.83) {
                var6 = -0.34418166;
            } else {
                var6 = 0.2874076;
            }
        } else {
            if (input[86] >= 1.0) {
                if (input[1] >= 9.6) {
                    if (input[34] >= 1.0) {
                        if (input[71] >= 1.0) {
                            if (input[38] >= 1.0) {
                                var6 = -0.32292017;
                            } else {
                                var6 = 0.299439;
                            }
                        } else {
                            var6 = 0.35307193;
                        }
                    } else {
                        if (input[27] >= 1.0) {
                            var6 = -0.32294923;
                        } else {
                            var6 = 0.025948549;
                        }
                    }
                } else {
                    if (input[4] >= 1.0) {
                        var6 = 0.38083777;
                    } else {
                        if (input[64] >= 1.0) {
                            if (input[17] >= 1.0) {
                                var6 = -0.28540888;
                            } else {
                                var6 = 0.37523052;
                            }
                        } else {
                            if (input[0] >= 3.755) {
                                if (input[12] >= 1.0) {
                                    var6 = 0.3501425;
                                } else {
                                    if (input[42] >= 1.0) {
                                        if (input[5] >= 1.0) {
                                            var6 = 0.256676;
                                        } else {
                                            var6 = -0.1918405;
                                        }
                                    } else {
                                        if (input[97] >= 1.0) {
                                            var6 = -0.3179832;
                                        } else {
                                            var6 = -0.09042047;
                                        }
                                    }
                                }
                            } else {
                                if (input[43] >= 1.0) {
                                    if (input[2] >= 0.94) {
                                        if (input[97] >= 1.0) {
                                            var6 = -0.3229116;
                                        } else {
                                            var6 = 0.25458196;
                                        }
                                    } else {
                                        var6 = 0.28815874;
                                    }
                                } else {
                                    if (input[33] >= 1.0) {
                                        if (input[2] >= 7.6499996) {
                                            var6 = -0.3078185;
                                        } else {
                                            var6 = -0.05133336;
                                        }
                                    } else {
                                        if (input[127] >= 1.0) {
                                            var6 = -0.27372873;
                                        } else {
                                            var6 = 0.2963975;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[58] >= 1.0) {
                    if (input[37] >= 1.0) {
                        if (input[17] >= 1.0) {
                            var6 = -0.330159;
                        } else {
                            if (input[0] >= 2.505) {
                                var6 = 0.36272055;
                            } else {
                                var6 = -0.24589293;
                            }
                        }
                    } else {
                        if (input[1] >= 4.245) {
                            if (input[63] >= 1.0) {
                                var6 = 0.30115566;
                            } else {
                                if (input[105] >= 1.0) {
                                    if (input[2] >= 4.535) {
                                        var6 = -0.25794792;
                                    } else {
                                        var6 = 0.28804642;
                                    }
                                } else {
                                    if (input[31] >= 1.0) {
                                        var6 = 0.31187168;
                                    } else {
                                        if (input[10] >= 1.0) {
                                            var6 = 0.23880595;
                                        } else {
                                            var6 = -0.32685933;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[3] >= 1.0) {
                                var6 = -0.28197983;
                            } else {
                                if (input[13] >= 1.0) {
                                    var6 = -0.19451188;
                                } else {
                                    if (input[27] >= 1.0) {
                                        if (input[2] >= 5.3199997) {
                                            var6 = -0.26978883;
                                        } else {
                                            var6 = 0.23104395;
                                        }
                                    } else {
                                        var6 = 0.34301054;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[82] >= 1.0) {
                        if (input[116] >= 1.0) {
                            if (input[44] >= 1.0) {
                                var6 = 0.29621437;
                            } else {
                                var6 = -0.409751;
                            }
                        } else {
                            if (input[49] >= 1.0) {
                                var6 = -0.31795666;
                            } else {
                                if (input[127] >= 1.0) {
                                    var6 = -0.31172734;
                                } else {
                                    if (input[13] >= 1.0) {
                                        if (input[1] >= 5.645) {
                                            var6 = 0.22167797;
                                        } else {
                                            var6 = -0.1156971;
                                        }
                                    } else {
                                        if (input[23] >= 1.0) {
                                            var6 = 0.10536646;
                                        } else {
                                            var6 = 0.30023944;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[78] >= 1.0) {
                            if (input[21] >= 1.0) {
                                var6 = 0.29893407;
                            } else {
                                if (input[18] >= 1.0) {
                                    if (input[9] >= 1.0) {
                                        var6 = -0.22153695;
                                    } else {
                                        var6 = 0.2823217;
                                    }
                                } else {
                                    if (input[2] >= 11.395) {
                                        var6 = 0.11617922;
                                    } else {
                                        var6 = -0.32600775;
                                    }
                                }
                            }
                        } else {
                            if (input[39] >= 1.0) {
                                if (input[2] >= 6.4) {
                                    if (input[67] >= 1.0) {
                                        var6 = 0.26136488;
                                    } else {
                                        var6 = -0.34744832;
                                    }
                                } else {
                                    if (input[1] >= 4.7749996) {
                                        var6 = -0.12908173;
                                    } else {
                                        var6 = 0.30828425;
                                    }
                                }
                            } else {
                                if (input[38] >= 1.0) {
                                    if (input[27] >= 1.0) {
                                        var6 = -0.35303432;
                                    } else {
                                        var6 = 0.30359596;
                                    }
                                } else {
                                    if (input[105] >= 1.0) {
                                        var6 = -0.30972782;
                                    } else {
                                        if (input[0] >= 5.315) {
                                            var6 = 0.3350129;
                                        } else {
                                            var6 = 0.20271052;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var7;
    if (input[106] >= 1.0) {
        var7 = 0.32157117;
    } else {
        if (input[1] >= 2.1550002) {
            if (input[63] >= 1.0) {
                var7 = 0.31790596;
            } else {
                if (input[0] >= 3.375) {
                    if (input[71] >= 1.0) {
                        if (input[65] >= 1.0) {
                            if (input[19] >= 1.0) {
                                var7 = 0.25983533;
                            } else {
                                var7 = -0.33036348;
                            }
                        } else {
                            var7 = 0.2682699;
                        }
                    } else {
                        if (input[23] >= 1.0) {
                            if (input[36] >= 1.0) {
                                var7 = -0.32930624;
                            } else {
                                if (input[2] >= 22.535) {
                                    if (input[65] >= 1.0) {
                                        var7 = 0.2834576;
                                    } else {
                                        var7 = -0.28134805;
                                    }
                                } else {
                                    if (input[40] >= 1.0) {
                                        var7 = -0.22308724;
                                    } else {
                                        if (input[69] >= 1.0) {
                                            var7 = -0.17172825;
                                        } else {
                                            var7 = 0.34430513;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[15] >= 1.0) {
                                if (input[49] >= 1.0) {
                                    var7 = -0.03516702;
                                } else {
                                    if (input[0] >= 3.975) {
                                        var7 = 0.3121786;
                                    } else {
                                        if (input[2] >= 7.08) {
                                            var7 = -0.11292132;
                                        } else {
                                            var7 = 0.23134793;
                                        }
                                    }
                                }
                            } else {
                                if (input[3] >= 1.0) {
                                    if (input[12] >= 1.0) {
                                        var7 = -0.2701192;
                                    } else {
                                        if (input[2] >= 3.415) {
                                            var7 = 0.317914;
                                        } else {
                                            var7 = 0.02142079;
                                        }
                                    }
                                } else {
                                    if (input[86] >= 1.0) {
                                        if (input[4] >= 1.0) {
                                            var7 = 0.35941312;
                                        } else {
                                            var7 = -0.13450035;
                                        }
                                    } else {
                                        if (input[44] >= 1.0) {
                                            var7 = 0.12900533;
                                        } else {
                                            var7 = -0.084681086;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[45] >= 1.0) {
                        if (input[1] >= 4.08) {
                            if (input[32] >= 1.0) {
                                var7 = -0.029414056;
                            } else {
                                var7 = -0.31281364;
                            }
                        } else {
                            if (input[2] >= 2.835) {
                                var7 = -0.26940158;
                            } else {
                                if (input[32] >= 1.0) {
                                    if (input[1] >= 3.7) {
                                        var7 = 0.122846566;
                                    } else {
                                        var7 = 0.29896927;
                                    }
                                } else {
                                    if (input[1] >= 2.605) {
                                        var7 = -0.19768764;
                                    } else {
                                        var7 = 0.20754121;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[34] >= 1.0) {
                            if (input[40] >= 1.0) {
                                var7 = -0.27731502;
                            } else {
                                if (input[81] >= 1.0) {
                                    if (input[2] >= 18.295) {
                                        var7 = -0.20611452;
                                    } else {
                                        var7 = 0.31178224;
                                    }
                                } else {
                                    if (input[27] >= 1.0) {
                                        if (input[97] >= 1.0) {
                                            var7 = -0.07235804;
                                        } else {
                                            var7 = 0.28635788;
                                        }
                                    } else {
                                        if (input[51] >= 1.0) {
                                            var7 = -0.14019325;
                                        } else {
                                            var7 = 0.21735543;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[19] >= 1.0) {
                                var7 = 0.27692857;
                            } else {
                                if (input[0] >= 3.245) {
                                    var7 = -0.08055987;
                                } else {
                                    var7 = -0.32135212;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            var7 = 0.33372122;
        }
    }
    double var8;
    if (input[106] >= 1.0) {
        var8 = 0.3121351;
    } else {
        if (input[1] >= 2.1550002) {
            if (input[67] >= 1.0) {
                var8 = 0.3061055;
            } else {
                if (input[39] >= 1.0) {
                    if (input[0] >= 1.825) {
                        var8 = -0.3381301;
                    } else {
                        var8 = 0.26686147;
                    }
                } else {
                    if (input[87] >= 1.0) {
                        if (input[40] >= 1.0) {
                            if (input[2] >= 21.345001) {
                                var8 = 0.2986373;
                            } else {
                                var8 = -0.32355288;
                            }
                        } else {
                            if (input[58] >= 1.0) {
                                if (input[43] >= 1.0) {
                                    var8 = 0.33746657;
                                } else {
                                    if (input[31] >= 1.0) {
                                        var8 = 0.2988437;
                                    } else {
                                        if (input[20] >= 1.0) {
                                            var8 = 0.2406327;
                                        } else {
                                            var8 = -0.31390533;
                                        }
                                    }
                                }
                            } else {
                                var8 = 0.34546536;
                            }
                        }
                    } else {
                        if (input[3] >= 1.0) {
                            if (input[45] >= 1.0) {
                                var8 = -0.28452212;
                            } else {
                                if (input[2] >= 3.8649998) {
                                    var8 = 0.314011;
                                } else {
                                    if (input[86] >= 1.0) {
                                        if (input[38] >= 1.0) {
                                            var8 = 0.22469066;
                                        } else {
                                            var8 = -0.28899252;
                                        }
                                    } else {
                                        var8 = 0.30135375;
                                    }
                                }
                            }
                        } else {
                            if (input[15] >= 1.0) {
                                if (input[40] >= 1.0) {
                                    if (input[2] >= 8.08) {
                                        var8 = -0.20767967;
                                    } else {
                                        var8 = 0.2581317;
                                    }
                                } else {
                                    var8 = 0.30969605;
                                }
                            } else {
                                if (input[30] >= 1.0) {
                                    if (input[56] >= 1.0) {
                                        if (input[21] >= 1.0) {
                                            var8 = -0.27190018;
                                        } else {
                                            var8 = 0.17637637;
                                        }
                                    } else {
                                        if (input[17] >= 1.0) {
                                            var8 = -0.071409985;
                                        } else {
                                            var8 = 0.32744044;
                                        }
                                    }
                                } else {
                                    if (input[47] >= 1.0) {
                                        if (input[115] >= 1.0) {
                                            var8 = -0.014247703;
                                        } else {
                                            var8 = 0.3237469;
                                        }
                                    } else {
                                        if (input[83] >= 1.0) {
                                            var8 = 0.329569;
                                        } else {
                                            var8 = -0.111655205;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            var8 = 0.31906617;
        }
    }
    double var9;
    if (input[2] >= 17.575) {
        if (input[9] >= 1.0) {
            if (input[45] >= 1.0) {
                if (input[114] >= 1.0) {
                    var9 = -0.309861;
                } else {
                    var9 = 0.41456363;
                }
            } else {
                if (input[86] >= 1.0) {
                    if (input[88] >= 1.0) {
                        if (input[34] >= 1.0) {
                            var9 = 0.26933274;
                        } else {
                            var9 = -0.21509434;
                        }
                    } else {
                        var9 = -0.33009905;
                    }
                } else {
                    if (input[94] >= 1.0) {
                        var9 = -0.31615078;
                    } else {
                        if (input[18] >= 1.0) {
                            if (input[40] >= 1.0) {
                                var9 = -0.31786606;
                            } else {
                                var9 = 0.28124493;
                            }
                        } else {
                            if (input[44] >= 1.0) {
                                var9 = -0.2772665;
                            } else {
                                if (input[19] >= 1.0) {
                                    var9 = -0.26004085;
                                } else {
                                    if (input[13] >= 1.0) {
                                        if (input[2] >= 19.295) {
                                            var9 = -0.16653669;
                                        } else {
                                            var9 = 0.32559055;
                                        }
                                    } else {
                                        if (input[53] >= 1.0) {
                                            var9 = 0.20779313;
                                        } else {
                                            var9 = 0.34885803;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[74] >= 1.0) {
                if (input[40] >= 1.0) {
                    if (input[1] >= 11.76) {
                        var9 = -0.25430888;
                    } else {
                        var9 = 0.37719682;
                    }
                } else {
                    if (input[15] >= 1.0) {
                        var9 = 0.2580487;
                    } else {
                        if (input[18] >= 1.0) {
                            if (input[86] >= 1.0) {
                                if (input[23] >= 1.0) {
                                    var9 = 0.17580597;
                                } else {
                                    var9 = -0.33477697;
                                }
                            } else {
                                var9 = 0.31853107;
                            }
                        } else {
                            if (input[1] >= 11.174999) {
                                if (input[65] >= 1.0) {
                                    var9 = 0.3706386;
                                } else {
                                    var9 = -0.31607598;
                                }
                            } else {
                                if (input[13] >= 1.0) {
                                    var9 = 0.25647196;
                                } else {
                                    if (input[1] >= 2.79) {
                                        var9 = -0.34086135;
                                    } else {
                                        var9 = -0.09925784;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[40] >= 1.0) {
                    var9 = -0.3069983;
                } else {
                    if (input[34] >= 1.0) {
                        if (input[42] >= 1.0) {
                            var9 = -0.17406249;
                        } else {
                            var9 = 0.3038532;
                        }
                    } else {
                        var9 = -0.26717806;
                    }
                }
            }
        }
    } else {
        if (input[40] >= 1.0) {
            if (input[2] >= 7.83) {
                var9 = -0.31854317;
            } else {
                var9 = 0.24504352;
            }
        } else {
            if (input[64] >= 1.0) {
                if (input[120] >= 1.0) {
                    var9 = -0.2786076;
                } else {
                    if (input[1] >= 17.82) {
                        var9 = -0.05410332;
                    } else {
                        var9 = 0.3757197;
                    }
                }
            } else {
                if (input[38] >= 1.0) {
                    if (input[88] >= 1.0) {
                        if (input[60] >= 1.0) {
                            var9 = -0.32237193;
                        } else {
                            if (input[71] >= 1.0) {
                                var9 = -0.28683656;
                            } else {
                                var9 = 0.34591246;
                            }
                        }
                    } else {
                        if (input[2] >= 8.71) {
                            if (input[2] >= 9.12) {
                                var9 = -0.33502787;
                            } else {
                                if (input[1] >= 5.415) {
                                    var9 = 0.09965121;
                                } else {
                                    var9 = -0.22166005;
                                }
                            }
                        } else {
                            if (input[0] >= 6.17) {
                                var9 = -0.08451733;
                            } else {
                                var9 = 0.28314283;
                            }
                        }
                    }
                } else {
                    if (input[73] >= 1.0) {
                        if (input[42] >= 1.0) {
                            var9 = -0.27387577;
                        } else {
                            var9 = 0.3382625;
                        }
                    } else {
                        if (input[36] >= 1.0) {
                            if (input[2] >= 10.655001) {
                                if (input[23] >= 1.0) {
                                    var9 = -0.04194182;
                                } else {
                                    var9 = -0.34115595;
                                }
                            } else {
                                if (input[31] >= 1.0) {
                                    if (input[2] >= 8.195) {
                                        var9 = 0.6004574;
                                    } else {
                                        var9 = 0.31826186;
                                    }
                                } else {
                                    if (input[2] >= 2.86) {
                                        if (input[96] >= 1.0) {
                                            var9 = -0.19105943;
                                        } else {
                                            var9 = 0.27912444;
                                        }
                                    } else {
                                        if (input[34] >= 1.0) {
                                            var9 = 0.18268275;
                                        } else {
                                            var9 = -0.29990196;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[86] >= 1.0) {
                                if (input[97] >= 1.0) {
                                    if (input[42] >= 1.0) {
                                        if (input[2] >= 4.815) {
                                            var9 = 0.18800735;
                                        } else {
                                            var9 = -0.31821;
                                        }
                                    } else {
                                        if (input[33] >= 1.0) {
                                            var9 = 0.32749626;
                                        } else {
                                            var9 = -0.19260672;
                                        }
                                    }
                                } else {
                                    if (input[60] >= 1.0) {
                                        var9 = -0.31512958;
                                    } else {
                                        if (input[2] >= 15.25) {
                                            var9 = 0.058296412;
                                        } else {
                                            var9 = 0.36342314;
                                        }
                                    }
                                }
                            } else {
                                if (input[1] >= 7.745) {
                                    if (input[5] >= 1.0) {
                                        if (input[2] >= 10.25) {
                                            var9 = -0.44193834;
                                        } else {
                                            var9 = 0.22122471;
                                        }
                                    } else {
                                        if (input[107] >= 1.0) {
                                            var9 = -0.306352;
                                        } else {
                                            var9 = 0.2894617;
                                        }
                                    }
                                } else {
                                    if (input[59] >= 1.0) {
                                        var9 = 0.338784;
                                    } else {
                                        if (input[43] >= 1.0) {
                                            var9 = 0.32057092;
                                        } else {
                                            var9 = 0.07447816;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var10;
    if (input[2] >= 17.575) {
        if (input[2] >= 27.365002) {
            if (input[1] >= 13.26) {
                if (input[0] >= 12.74) {
                    var10 = -0.29883873;
                } else {
                    var10 = -0.03426181;
                }
            } else {
                if (input[16] >= 1.0) {
                    var10 = -0.2866775;
                } else {
                    if (input[20] >= 1.0) {
                        var10 = -0.28225505;
                    } else {
                        if (input[41] >= 1.0) {
                            var10 = -0.27914622;
                        } else {
                            if (input[2] >= 54.445) {
                                if (input[1] >= 11.705) {
                                    var10 = -0.16752483;
                                } else {
                                    var10 = 0.01622413;
                                }
                            } else {
                                if (input[2] >= 29.1) {
                                    if (input[2] >= 51.585) {
                                        var10 = 0.07933283;
                                    } else {
                                        var10 = 0.33924365;
                                    }
                                } else {
                                    if (input[8] >= 1.0) {
                                        if (input[21] >= 1.0) {
                                            var10 = -0.17470008;
                                        } else {
                                            var10 = 0.042062867;
                                        }
                                    } else {
                                        if (input[0] >= 12.49) {
                                            var10 = 0.10044084;
                                        } else {
                                            var10 = 0.2637111;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[93] >= 1.0) {
                var10 = 0.31111458;
            } else {
                if (input[69] >= 1.0) {
                    if (input[1] >= 9.065001) {
                        var10 = -0.0937672;
                    } else {
                        var10 = 0.3448415;
                    }
                } else {
                    if (input[23] >= 1.0) {
                        if (input[43] >= 1.0) {
                            var10 = -0.20403615;
                        } else {
                            if (input[44] >= 1.0) {
                                var10 = -0.0026484937;
                            } else {
                                var10 = 0.2986099;
                            }
                        }
                    } else {
                        if (input[18] >= 1.0) {
                            if (input[58] >= 1.0) {
                                var10 = 0.38093996;
                            } else {
                                if (input[1] >= 5.58) {
                                    if (input[44] >= 1.0) {
                                        if (input[86] >= 1.0) {
                                            var10 = -0.2686088;
                                        } else {
                                            var10 = 0.22779109;
                                        }
                                    } else {
                                        var10 = -0.32119632;
                                    }
                                } else {
                                    if (input[86] >= 1.0) {
                                        var10 = -0.17198312;
                                    } else {
                                        var10 = 0.2565605;
                                    }
                                }
                            }
                        } else {
                            if (input[54] >= 1.0) {
                                var10 = 0.28890136;
                            } else {
                                if (input[28] >= 1.0) {
                                    var10 = 0.27985835;
                                } else {
                                    if (input[49] >= 1.0) {
                                        var10 = 0.27214676;
                                    } else {
                                        if (input[61] >= 1.0) {
                                            var10 = 0.24331234;
                                        } else {
                                            var10 = -0.25598547;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[40] >= 1.0) {
            if (input[2] >= 7.83) {
                var10 = -0.30792814;
            } else {
                var10 = 0.23087709;
            }
        } else {
            if (input[64] >= 1.0) {
                if (input[120] >= 1.0) {
                    var10 = -0.2611757;
                } else {
                    if (input[1] >= 17.82) {
                        var10 = -0.045757405;
                    } else {
                        var10 = 0.35026258;
                    }
                }
            } else {
                if (input[71] >= 1.0) {
                    if (input[0] >= 2.4850001) {
                        if (input[106] >= 1.0) {
                            var10 = 0.2614079;
                        } else {
                            if (input[19] >= 1.0) {
                                var10 = 0.25054184;
                            } else {
                                if (input[10] >= 1.0) {
                                    var10 = 0.21972007;
                                } else {
                                    var10 = -0.32037458;
                                }
                            }
                        }
                    } else {
                        if (input[2] >= 2.7649999) {
                            var10 = 0.06728842;
                        } else {
                            var10 = 0.27987653;
                        }
                    }
                } else {
                    if (input[1] >= 10.505) {
                        if (input[34] >= 1.0) {
                            if (input[69] >= 1.0) {
                                var10 = -0.03714875;
                            } else {
                                var10 = 0.325554;
                            }
                        } else {
                            var10 = -0.20366497;
                        }
                    } else {
                        if (input[38] >= 1.0) {
                            if (input[12] >= 1.0) {
                                var10 = 0.3131597;
                            } else {
                                if (input[2] >= 8.639999) {
                                    if (input[24] >= 1.0) {
                                        var10 = 0.19973415;
                                    } else {
                                        if (input[2] >= 9.12) {
                                            var10 = -0.318842;
                                        } else {
                                            var10 = -0.07990219;
                                        }
                                    }
                                } else {
                                    if (input[0] >= 6.1400003) {
                                        var10 = -0.031055076;
                                    } else {
                                        var10 = 0.27915457;
                                    }
                                }
                            }
                        } else {
                            if (input[73] >= 1.0) {
                                if (input[42] >= 1.0) {
                                    var10 = -0.2556048;
                                } else {
                                    var10 = 0.32787368;
                                }
                            } else {
                                if (input[20] >= 1.0) {
                                    if (input[28] >= 1.0) {
                                        var10 = 0.24627313;
                                    } else {
                                        var10 = -0.3172741;
                                    }
                                } else {
                                    if (input[36] >= 1.0) {
                                        if (input[2] >= 11.43) {
                                            var10 = -0.32265943;
                                        } else {
                                            var10 = 0.028695004;
                                        }
                                    } else {
                                        if (input[1] >= 7.665) {
                                            var10 = -0.11421337;
                                        } else {
                                            var10 = 0.10860785;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var11;
    if (input[63] >= 1.0) {
        var11 = 0.30115223;
    } else {
        if (input[106] >= 1.0) {
            var11 = 0.29356125;
        } else {
            if (input[127] >= 1.0) {
                if (input[81] >= 1.0) {
                    if (input[1] >= 6.475) {
                        if (input[59] >= 1.0) {
                            var11 = 0.06588924;
                        } else {
                            var11 = -0.29391792;
                        }
                    } else {
                        if (input[97] >= 1.0) {
                            if (input[71] >= 1.0) {
                                var11 = -0.17509644;
                            } else {
                                if (input[115] >= 1.0) {
                                    var11 = 0.3208984;
                                } else {
                                    var11 = -0.16724655;
                                }
                            }
                        } else {
                            var11 = -0.23058578;
                        }
                    }
                } else {
                    if (input[83] >= 1.0) {
                        if (input[0] >= 8.665) {
                            var11 = -0.033518873;
                        } else {
                            var11 = 0.27041268;
                        }
                    } else {
                        if (input[1] >= 1.955) {
                            if (input[73] >= 1.0) {
                                var11 = 0.21077035;
                            } else {
                                if (input[79] >= 1.0) {
                                    var11 = 0.18150173;
                                } else {
                                    if (input[15] >= 1.0) {
                                        var11 = 0.17699963;
                                    } else {
                                        if (input[107] >= 1.0) {
                                            var11 = 0.16012631;
                                        } else {
                                            var11 = -0.33568606;
                                        }
                                    }
                                }
                            }
                        } else {
                            var11 = 0.23106599;
                        }
                    }
                }
            } else {
                if (input[40] >= 1.0) {
                    if (input[11] >= 1.0) {
                        var11 = 0.30752563;
                    } else {
                        if (input[61] >= 1.0) {
                            var11 = 0.2866348;
                        } else {
                            if (input[5] >= 1.0) {
                                var11 = 0.3203423;
                            } else {
                                if (input[12] >= 1.0) {
                                    var11 = 0.21590225;
                                } else {
                                    if (input[2] >= 7.7699995) {
                                        if (input[17] >= 1.0) {
                                            var11 = -0.14183564;
                                        } else {
                                            var11 = -0.3087576;
                                        }
                                    } else {
                                        var11 = 0.16508523;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[53] >= 1.0) {
                        if (input[97] >= 1.0) {
                            if (input[41] >= 1.0) {
                                if (input[1] >= 7.4849997) {
                                    var11 = -0.3354348;
                                } else {
                                    var11 = 0.07809985;
                                }
                            } else {
                                if (input[17] >= 1.0) {
                                    var11 = -0.25838727;
                                } else {
                                    if (input[20] >= 1.0) {
                                        var11 = -0.16978346;
                                    } else {
                                        if (input[94] >= 1.0) {
                                            var11 = -0.04709229;
                                        } else {
                                            var11 = 0.31343874;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[20] >= 1.0) {
                                if (input[123] >= 1.0) {
                                    var11 = -0.17233394;
                                } else {
                                    if (input[38] >= 1.0) {
                                        if (input[2] >= 3.625) {
                                            var11 = -0.09178947;
                                        } else {
                                            var11 = 0.18169144;
                                        }
                                    } else {
                                        var11 = 0.2823137;
                                    }
                                }
                            } else {
                                if (input[87] >= 1.0) {
                                    var11 = 0.20287059;
                                } else {
                                    if (input[115] >= 1.0) {
                                        if (input[69] >= 1.0) {
                                            var11 = 0.16931452;
                                        } else {
                                            var11 = -0.30781472;
                                        }
                                    } else {
                                        var11 = 0.1901827;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[59] >= 1.0) {
                            if (input[86] >= 1.0) {
                                if (input[5] >= 1.0) {
                                    if (input[42] >= 1.0) {
                                        var11 = 0.38852555;
                                    } else {
                                        var11 = -0.29547644;
                                    }
                                } else {
                                    if (input[0] >= 1.815) {
                                        if (input[4] >= 1.0) {
                                            var11 = 0.23821299;
                                        } else {
                                            var11 = -0.34412572;
                                        }
                                    } else {
                                        var11 = 0.24401815;
                                    }
                                }
                            } else {
                                if (input[1] >= 7.74) {
                                    if (input[5] >= 1.0) {
                                        if (input[2] >= 14.895) {
                                            var11 = 0.194051;
                                        } else {
                                            var11 = -0.38271144;
                                        }
                                    } else {
                                        if (input[0] >= 6.58) {
                                            var11 = 0.30285132;
                                        } else {
                                            var11 = 0.03332273;
                                        }
                                    }
                                } else {
                                    if (input[71] >= 1.0) {
                                        var11 = 0.03680132;
                                    } else {
                                        var11 = 0.31488088;
                                    }
                                }
                            }
                        } else {
                            if (input[27] >= 1.0) {
                                if (input[18] >= 1.0) {
                                    if (input[54] >= 1.0) {
                                        var11 = -0.32492825;
                                    } else {
                                        if (input[71] >= 1.0) {
                                            var11 = -0.22819994;
                                        } else {
                                            var11 = 0.29850358;
                                        }
                                    }
                                } else {
                                    if (input[88] >= 1.0) {
                                        if (input[34] >= 1.0) {
                                            var11 = 0.25156584;
                                        } else {
                                            var11 = -0.28467116;
                                        }
                                    } else {
                                        if (input[38] >= 1.0) {
                                            var11 = -0.31048456;
                                        } else {
                                            var11 = -0.116131306;
                                        }
                                    }
                                }
                            } else {
                                if (input[47] >= 1.0) {
                                    if (input[16] >= 1.0) {
                                        var11 = -0.32728612;
                                    } else {
                                        if (input[60] >= 1.0) {
                                            var11 = -0.2949867;
                                        } else {
                                            var11 = 0.18694851;
                                        }
                                    }
                                } else {
                                    if (input[1] >= 3.8449998) {
                                        if (input[60] >= 1.0) {
                                            var11 = 0.21479346;
                                        } else {
                                            var11 = -0.13656476;
                                        }
                                    } else {
                                        if (input[54] >= 1.0) {
                                            var11 = -0.051204566;
                                        } else {
                                            var11 = 0.19779193;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var12;
    if (input[67] >= 1.0) {
        var12 = 0.29130483;
    } else {
        if (input[39] >= 1.0) {
            if (input[2] >= 6.04) {
                if (input[0] >= 2.63) {
                    var12 = -0.31762815;
                } else {
                    var12 = 0.027181186;
                }
            } else {
                if (input[1] >= 3.795) {
                    var12 = 0.044890583;
                } else {
                    var12 = 0.26241782;
                }
            }
        } else {
            if (input[22] >= 1.0) {
                if (input[2] >= 7.165) {
                    var12 = -0.31501982;
                } else {
                    if (input[42] >= 1.0) {
                        var12 = 0.24917223;
                    } else {
                        var12 = -0.2151363;
                    }
                }
            } else {
                if (input[15] >= 1.0) {
                    if (input[40] >= 1.0) {
                        if (input[124] >= 1.0) {
                            var12 = -0.113055415;
                        } else {
                            var12 = 0.21429655;
                        }
                    } else {
                        var12 = 0.2938723;
                    }
                } else {
                    if (input[14] >= 1.0) {
                        if (input[38] >= 1.0) {
                            if (input[2] >= 10.04) {
                                var12 = -0.2694522;
                            } else {
                                var12 = 0.24581675;
                            }
                        } else {
                            var12 = 0.31600803;
                        }
                    } else {
                        if (input[83] >= 1.0) {
                            if (input[17] >= 1.0) {
                                var12 = -0.1995363;
                            } else {
                                var12 = 0.30745405;
                            }
                        } else {
                            if (input[87] >= 1.0) {
                                if (input[44] >= 1.0) {
                                    var12 = 0.31524765;
                                } else {
                                    if (input[58] >= 1.0) {
                                        if (input[31] >= 1.0) {
                                            var12 = 0.22247282;
                                        } else {
                                            var12 = -0.2567262;
                                        }
                                    } else {
                                        if (input[40] >= 1.0) {
                                            var12 = -0.15756005;
                                        } else {
                                            var12 = 0.2952359;
                                        }
                                    }
                                }
                            } else {
                                if (input[3] >= 1.0) {
                                    if (input[45] >= 1.0) {
                                        var12 = -0.24652563;
                                    } else {
                                        if (input[1] >= 3.3049998) {
                                            var12 = 0.24447076;
                                        } else {
                                            var12 = -0.083003834;
                                        }
                                    }
                                } else {
                                    if (input[68] >= 1.0) {
                                        var12 = 0.29765368;
                                    } else {
                                        if (input[63] >= 1.0) {
                                            var12 = 0.28779075;
                                        } else {
                                            var12 = -0.036857046;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var13;
    if (input[106] >= 1.0) {
        var13 = 0.2840549;
    } else {
        if (input[127] >= 1.0) {
            if (input[81] >= 1.0) {
                if (input[97] >= 1.0) {
                    if (input[71] >= 1.0) {
                        var13 = -0.2209491;
                    } else {
                        if (input[115] >= 1.0) {
                            if (input[53] >= 1.0) {
                                if (input[2] >= 8.469999) {
                                    var13 = -0.050569795;
                                } else {
                                    var13 = 0.16246784;
                                }
                            } else {
                                if (input[2] >= 8.345) {
                                    var13 = 0.32263047;
                                } else {
                                    var13 = 0.053066935;
                                }
                            }
                        } else {
                            var13 = -0.20549357;
                        }
                    }
                } else {
                    var13 = -0.27778423;
                }
            } else {
                if (input[83] >= 1.0) {
                    if (input[2] >= 10.705) {
                        var13 = 0.0010898098;
                    } else {
                        var13 = 0.22462574;
                    }
                } else {
                    if (input[97] >= 1.0) {
                        if (input[2] >= 1.21) {
                            if (input[15] >= 1.0) {
                                var13 = 0.17031276;
                            } else {
                                if (input[1] >= 2.26) {
                                    var13 = -0.32230398;
                                } else {
                                    var13 = -0.028009769;
                                }
                            }
                        } else {
                            var13 = 0.1709648;
                        }
                    } else {
                        if (input[47] >= 1.0) {
                            var13 = 0.23304631;
                        } else {
                            if (input[1] >= 5.725) {
                                var13 = -0.1843931;
                            } else {
                                var13 = -0.036360905;
                            }
                        }
                    }
                }
            }
        } else {
            if (input[67] >= 1.0) {
                var13 = 0.28367552;
            } else {
                if (input[39] >= 1.0) {
                    if (input[2] >= 6.04) {
                        if (input[0] >= 2.63) {
                            var13 = -0.30737132;
                        } else {
                            var13 = 0.023102274;
                        }
                    } else {
                        if (input[1] >= 3.7849998) {
                            var13 = 0.040796585;
                        } else {
                            var13 = 0.24149695;
                        }
                    }
                } else {
                    if (input[40] >= 1.0) {
                        if (input[11] >= 1.0) {
                            var13 = 0.2940107;
                        } else {
                            if (input[61] >= 1.0) {
                                var13 = 0.27740812;
                            } else {
                                if (input[5] >= 1.0) {
                                    var13 = 0.2968867;
                                } else {
                                    if (input[12] >= 1.0) {
                                        var13 = 0.19943903;
                                    } else {
                                        if (input[2] >= 8.735001) {
                                            var13 = -0.2757302;
                                        } else {
                                            var13 = 0.08134303;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] >= 18.994999) {
                            if (input[18] >= 1.0) {
                                if (input[114] >= 1.0) {
                                    var13 = -0.27053103;
                                } else {
                                    var13 = 0.32872286;
                                }
                            } else {
                                if (input[74] >= 1.0) {
                                    if (input[93] >= 1.0) {
                                        var13 = 0.2683116;
                                    } else {
                                        if (input[15] >= 1.0) {
                                            var13 = 0.22380634;
                                        } else {
                                            var13 = -0.29475868;
                                        }
                                    }
                                } else {
                                    if (input[86] >= 1.0) {
                                        var13 = -0.07002964;
                                    } else {
                                        var13 = 0.27418974;
                                    }
                                }
                            }
                        } else {
                            if (input[78] >= 1.0) {
                                if (input[72] >= 1.0) {
                                    if (input[2] >= 8.84) {
                                        var13 = 0.27781934;
                                    } else {
                                        var13 = -0.15634118;
                                    }
                                } else {
                                    if (input[42] >= 1.0) {
                                        var13 = 0.2246438;
                                    } else {
                                        if (input[3] >= 1.0) {
                                            var13 = 0.018352995;
                                        } else {
                                            var13 = -0.31234193;
                                        }
                                    }
                                }
                            } else {
                                if (input[8] >= 1.0) {
                                    if (input[2] >= 16.305) {
                                        if (input[86] >= 1.0) {
                                            var13 = -0.2933494;
                                        } else {
                                            var13 = 0.057992794;
                                        }
                                    } else {
                                        if (input[16] >= 1.0) {
                                            var13 = -0.2915122;
                                        } else {
                                            var13 = 0.24897662;
                                        }
                                    }
                                } else {
                                    if (input[72] >= 1.0) {
                                        if (input[36] >= 1.0) {
                                            var13 = 0.03502018;
                                        } else {
                                            var13 = -0.3415174;
                                        }
                                    } else {
                                        if (input[87] >= 1.0) {
                                            var13 = 0.2045237;
                                        } else {
                                            var13 = 0.030781338;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var14;
    if (input[1] >= 2.005) {
        if (input[63] >= 1.0) {
            var14 = 0.28207472;
        } else {
            if (input[14] >= 1.0) {
                if (input[97] >= 1.0) {
                    var14 = 0.3099997;
                } else {
                    if (input[2] >= 10.280001) {
                        var14 = -0.25650612;
                    } else {
                        var14 = 0.17812729;
                    }
                }
            } else {
                if (input[83] >= 1.0) {
                    if (input[17] >= 1.0) {
                        var14 = -0.17227513;
                    } else {
                        var14 = 0.29277632;
                    }
                } else {
                    if (input[127] >= 1.0) {
                        if (input[81] >= 1.0) {
                            if (input[1] >= 6.475) {
                                if (input[0] >= 12.139999) {
                                    var14 = 0.009268415;
                                } else {
                                    var14 = -0.2555638;
                                }
                            } else {
                                if (input[42] >= 1.0) {
                                    var14 = -0.19267572;
                                } else {
                                    if (input[0] >= 4.535) {
                                        if (input[2] >= 12.395) {
                                            var14 = 0.1258891;
                                        } else {
                                            var14 = 0.28341883;
                                        }
                                    } else {
                                        var14 = -0.047174662;
                                    }
                                }
                            }
                        } else {
                            if (input[97] >= 1.0) {
                                if (input[2] >= 1.405) {
                                    if (input[2] >= 26.445) {
                                        var14 = -0.024580145;
                                    } else {
                                        var14 = -0.30701613;
                                    }
                                } else {
                                    var14 = 0.09476865;
                                }
                            } else {
                                if (input[47] >= 1.0) {
                                    var14 = 0.21912348;
                                } else {
                                    if (input[44] >= 1.0) {
                                        var14 = -0.01225538;
                                    } else {
                                        var14 = -0.17343926;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[23] >= 1.0) {
                            if (input[36] >= 1.0) {
                                if (input[1] >= 6.165) {
                                    if (input[2] >= 10.345) {
                                        var14 = 0.026078597;
                                    } else {
                                        if (input[2] >= 2.47) {
                                            var14 = 0.22221033;
                                        } else {
                                            var14 = 0.058256973;
                                        }
                                    }
                                } else {
                                    if (input[116] >= 1.0) {
                                        if (input[34] >= 1.0) {
                                            var14 = 0.17052607;
                                        } else {
                                            var14 = -0.22861618;
                                        }
                                    } else {
                                        var14 = -0.29926476;
                                    }
                                }
                            } else {
                                if (input[71] >= 1.0) {
                                    var14 = -0.19166023;
                                } else {
                                    if (input[40] >= 1.0) {
                                        if (input[81] >= 1.0) {
                                            var14 = 0.17219856;
                                        } else {
                                            var14 = -0.1531811;
                                        }
                                    } else {
                                        if (input[97] >= 1.0) {
                                            var14 = 0.31106266;
                                        } else {
                                            var14 = 0.08719401;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[60] >= 1.0) {
                                if (input[37] >= 1.0) {
                                    var14 = 0.2956476;
                                } else {
                                    if (input[2] >= 5.23) {
                                        var14 = -0.32244137;
                                    } else {
                                        var14 = 0.2364271;
                                    }
                                }
                            } else {
                                if (input[88] >= 1.0) {
                                    if (input[71] >= 1.0) {
                                        var14 = -0.25688392;
                                    } else {
                                        var14 = 0.3135918;
                                    }
                                } else {
                                    if (input[38] >= 1.0) {
                                        if (input[2] >= 8.045) {
                                            var14 = -0.3042311;
                                        } else {
                                            var14 = 0.23884915;
                                        }
                                    } else {
                                        if (input[53] >= 1.0) {
                                            var14 = 0.10891888;
                                        } else {
                                            var14 = -0.014072341;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        var14 = 0.2855936;
    }
    double var15;
    if (input[15] >= 1.0) {
        if (input[40] >= 1.0) {
            if (input[124] >= 1.0) {
                var15 = -0.08597208;
            } else {
                var15 = 0.17955092;
            }
        } else {
            var15 = 0.28114158;
        }
    } else {
        if (input[67] >= 1.0) {
            var15 = 0.2747095;
        } else {
            if (input[39] >= 1.0) {
                if (input[2] >= 6.5950003) {
                    var15 = -0.29593587;
                } else {
                    if (input[1] >= 4.7749996) {
                        var15 = -0.1344714;
                    } else {
                        var15 = 0.24694109;
                    }
                }
            } else {
                if (input[106] >= 1.0) {
                    var15 = 0.27254856;
                } else {
                    if (input[71] >= 1.0) {
                        if (input[0] >= 4.185) {
                            var15 = -0.2948026;
                        } else {
                            if (input[13] >= 1.0) {
                                var15 = -0.2298395;
                            } else {
                                if (input[45] >= 1.0) {
                                    if (input[0] >= 2.095) {
                                        var15 = -0.23427609;
                                    } else {
                                        var15 = 0.20091964;
                                    }
                                } else {
                                    var15 = 0.27893463;
                                }
                            }
                        }
                    } else {
                        if (input[1] >= 10.235) {
                            if (input[0] >= 14.165) {
                                if (input[88] >= 1.0) {
                                    var15 = 0.21697567;
                                } else {
                                    var15 = -0.28262776;
                                }
                            } else {
                                if (input[34] >= 1.0) {
                                    if (input[81] >= 1.0) {
                                        if (input[36] >= 1.0) {
                                            var15 = 0.24280588;
                                        } else {
                                            var15 = -0.1629717;
                                        }
                                    } else {
                                        var15 = 0.3305984;
                                    }
                                } else {
                                    if (input[86] >= 1.0) {
                                        var15 = -0.26024053;
                                    } else {
                                        var15 = 0.061440524;
                                    }
                                }
                            }
                        } else {
                            if (input[86] >= 1.0) {
                                if (input[0] >= 10.375) {
                                    if (input[2] >= 28.740002) {
                                        var15 = 0.053359013;
                                    } else {
                                        if (input[2] >= 13.67) {
                                            var15 = -0.2923906;
                                        } else {
                                            var15 = 0.030162172;
                                        }
                                    }
                                } else {
                                    if (input[4] >= 1.0) {
                                        var15 = 0.3114332;
                                    } else {
                                        if (input[23] >= 1.0) {
                                            var15 = 0.2971133;
                                        } else {
                                            var15 = -0.049115032;
                                        }
                                    }
                                }
                            } else {
                                if (input[0] >= 11.325) {
                                    if (input[20] >= 1.0) {
                                        var15 = -0.2492396;
                                    } else {
                                        if (input[1] >= 8.675) {
                                            var15 = -0.0039909817;
                                        } else {
                                            var15 = 0.30586243;
                                        }
                                    }
                                } else {
                                    if (input[1] >= 3.5549998) {
                                        if (input[64] >= 1.0) {
                                            var15 = 0.29362816;
                                        } else {
                                            var15 = -0.025764553;
                                        }
                                    } else {
                                        if (input[2] >= 17.26) {
                                            var15 = -0.108480476;
                                        } else {
                                            var15 = 0.24100527;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var16;
    if (input[68] >= 1.0) {
        var16 = 0.28116047;
    } else {
        if (input[63] >= 1.0) {
            var16 = 0.27064338;
        } else {
            if (input[15] >= 1.0) {
                if (input[40] >= 1.0) {
                    if (input[124] >= 1.0) {
                        var16 = -0.07420748;
                    } else {
                        var16 = 0.16617703;
                    }
                } else {
                    var16 = 0.27154487;
                }
            } else {
                if (input[45] >= 1.0) {
                    if (input[2] >= 15.895) {
                        if (input[114] >= 1.0) {
                            var16 = -0.2872836;
                        } else {
                            var16 = 0.31856704;
                        }
                    } else {
                        if (input[33] >= 1.0) {
                            if (input[17] >= 1.0) {
                                var16 = -0.19657151;
                            } else {
                                var16 = 0.26673856;
                            }
                        } else {
                            if (input[2] >= 2.025) {
                                if (input[16] >= 1.0) {
                                    var16 = 0.21537322;
                                } else {
                                    if (input[1] >= 2.74) {
                                        var16 = -0.30816448;
                                    } else {
                                        var16 = 0.06121937;
                                    }
                                }
                            } else {
                                var16 = 0.2214378;
                            }
                        }
                    }
                } else {
                    if (input[16] >= 1.0) {
                        if (input[1] >= 3.2150002) {
                            var16 = -0.29695293;
                        } else {
                            var16 = 0.061471097;
                        }
                    } else {
                        if (input[37] >= 1.0) {
                            if (input[56] >= 1.0) {
                                var16 = -0.3144521;
                            } else {
                                if (input[55] >= 1.0) {
                                    if (input[10] >= 1.0) {
                                        var16 = -0.2984855;
                                    } else {
                                        if (input[2] >= 19.505) {
                                            var16 = -0.14710139;
                                        } else {
                                            var16 = 0.24783279;
                                        }
                                    }
                                } else {
                                    if (input[2] >= 14.63) {
                                        if (input[86] >= 1.0) {
                                            var16 = -0.2959172;
                                        } else {
                                            var16 = 0.2870508;
                                        }
                                    } else {
                                        if (input[74] >= 1.0) {
                                            var16 = 0.305385;
                                        } else {
                                            var16 = -0.04276914;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[60] >= 1.0) {
                                if (input[2] >= 5.23) {
                                    var16 = -0.3122669;
                                } else {
                                    var16 = 0.21567558;
                                }
                            } else {
                                if (input[88] >= 1.0) {
                                    if (input[71] >= 1.0) {
                                        var16 = -0.2249053;
                                    } else {
                                        var16 = 0.30028266;
                                    }
                                } else {
                                    if (input[38] >= 1.0) {
                                        if (input[2] >= 9.12) {
                                            var16 = -0.2952926;
                                        } else {
                                            var16 = 0.13904515;
                                        }
                                    } else {
                                        if (input[55] >= 1.0) {
                                            var16 = 0.26984572;
                                        } else {
                                            var16 = -0.019431297;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var17;
    if (input[14] >= 1.0) {
        if (input[97] >= 1.0) {
            var17 = 0.29178014;
        } else {
            if (input[36] >= 1.0) {
                var17 = 0.16406764;
            } else {
                var17 = -0.21817523;
            }
        }
    } else {
        if (input[73] >= 1.0) {
            if (input[55] >= 1.0) {
                var17 = -0.2604386;
            } else {
                if (input[40] >= 1.0) {
                    var17 = -0.24966156;
                } else {
                    if (input[42] >= 1.0) {
                        var17 = -0.21584092;
                    } else {
                        if (input[38] >= 1.0) {
                            if (input[20] >= 1.0) {
                                var17 = -0.23410313;
                            } else {
                                var17 = 0.2791905;
                            }
                        } else {
                            var17 = 0.30898386;
                        }
                    }
                }
            }
        } else {
            if (input[26] >= 1.0) {
                var17 = -0.30747306;
            } else {
                if (input[67] >= 1.0) {
                    var17 = 0.26532993;
                } else {
                    if (input[61] >= 1.0) {
                        var17 = 0.2682774;
                    } else {
                        if (input[68] >= 1.0) {
                            var17 = 0.26818013;
                        } else {
                            if (input[31] >= 1.0) {
                                if (input[36] >= 1.0) {
                                    if (input[2] >= 10.635) {
                                        var17 = -0.20801632;
                                    } else {
                                        var17 = 0.35862613;
                                    }
                                } else {
                                    if (input[64] >= 1.0) {
                                        var17 = 0.17583567;
                                    } else {
                                        var17 = -0.2725117;
                                    }
                                }
                            } else {
                                if (input[36] >= 1.0) {
                                    if (input[1] >= 8.01) {
                                        if (input[114] >= 1.0) {
                                            var17 = -0.23889218;
                                        } else {
                                            var17 = 0.19035992;
                                        }
                                    } else {
                                        if (input[0] >= 3.0549998) {
                                            var17 = -0.25015128;
                                        } else {
                                            var17 = -0.038571134;
                                        }
                                    }
                                } else {
                                    if (input[94] >= 1.0) {
                                        if (input[1] >= 10.195) {
                                            var17 = 0.074195415;
                                        } else {
                                            var17 = -0.28439862;
                                        }
                                    } else {
                                        if (input[34] >= 1.0) {
                                            var17 = -0.015939482;
                                        } else {
                                            var17 = 0.0922312;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var18;
    if (input[1] >= 2.005) {
        if (input[106] >= 1.0) {
            var18 = 0.26101363;
        } else {
            if (input[127] >= 1.0) {
                if (input[81] >= 1.0) {
                    if (input[97] >= 1.0) {
                        if (input[42] >= 1.0) {
                            var18 = -0.17376566;
                        } else {
                            if (input[0] >= 5.395) {
                                if (input[1] >= 6.42) {
                                    var18 = 0.07253146;
                                } else {
                                    var18 = 0.26383638;
                                }
                            } else {
                                var18 = -0.026134614;
                            }
                        }
                    } else {
                        var18 = -0.22650453;
                    }
                } else {
                    if (input[29] >= 1.0) {
                        if (input[0] >= 7.49) {
                            var18 = 0.15575676;
                        } else {
                            var18 = 0.027297435;
                        }
                    } else {
                        if (input[97] >= 1.0) {
                            if (input[2] >= 2.475) {
                                if (input[0] >= 15.365) {
                                    var18 = -0.06480521;
                                } else {
                                    var18 = -0.29268253;
                                }
                            } else {
                                var18 = -0.047425486;
                            }
                        } else {
                            if (input[1] >= 9.85) {
                                var18 = 0.06341378;
                            } else {
                                var18 = -0.031839292;
                            }
                        }
                    }
                }
            } else {
                if (input[40] >= 1.0) {
                    if (input[2] >= 23.875) {
                        if (input[74] >= 1.0) {
                            if (input[2] >= 56.13) {
                                var18 = -0.22717814;
                            } else {
                                if (input[1] >= 10.49) {
                                    var18 = 0.056224138;
                                } else {
                                    var18 = 0.30090684;
                                }
                            }
                        } else {
                            var18 = -0.25793093;
                        }
                    } else {
                        if (input[11] >= 1.0) {
                            var18 = 0.20624349;
                        } else {
                            if (input[9] >= 1.0) {
                                var18 = -0.29804122;
                            } else {
                                var18 = 0.13357198;
                            }
                        }
                    }
                } else {
                    if (input[2] >= 18.955) {
                        if (input[18] >= 1.0) {
                            if (input[114] >= 1.0) {
                                var18 = -0.18678546;
                            } else {
                                var18 = 0.2891464;
                            }
                        } else {
                            if (input[74] >= 1.0) {
                                if (input[93] >= 1.0) {
                                    var18 = 0.22636531;
                                } else {
                                    if (input[15] >= 1.0) {
                                        var18 = 0.15617578;
                                    } else {
                                        if (input[1] >= 9.845) {
                                            var18 = -0.15154012;
                                        } else {
                                            var18 = -0.29896846;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] >= 21.58) {
                                    var18 = 0.24913926;
                                } else {
                                    var18 = 0.052409884;
                                }
                            }
                        }
                    } else {
                        if (input[64] >= 1.0) {
                            if (input[120] >= 1.0) {
                                var18 = -0.2377524;
                            } else {
                                if (input[1] >= 18.369999) {
                                    var18 = -0.15091132;
                                } else {
                                    var18 = 0.31178668;
                                }
                            }
                        } else {
                            if (input[1] >= 13.515) {
                                if (input[2] >= 15.215) {
                                    var18 = 0.32939795;
                                } else {
                                    var18 = -0.043507747;
                                }
                            } else {
                                if (input[8] >= 1.0) {
                                    if (input[47] >= 1.0) {
                                        if (input[16] >= 1.0) {
                                            var18 = -0.24947384;
                                        } else {
                                            var18 = 0.31523284;
                                        }
                                    } else {
                                        if (input[1] >= 3.875) {
                                            var18 = -0.04351573;
                                        } else {
                                            var18 = 0.23963326;
                                        }
                                    }
                                } else {
                                    if (input[34] >= 1.0) {
                                        if (input[59] >= 1.0) {
                                            var18 = 0.15100792;
                                        } else {
                                            var18 = -0.021622013;
                                        }
                                    } else {
                                        if (input[37] >= 1.0) {
                                            var18 = 0.117710836;
                                        } else {
                                            var18 = -0.19942023;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        var18 = 0.26603222;
    }
    double var19;
    if (input[63] >= 1.0) {
        var19 = 0.26000485;
    } else {
        if (input[15] >= 1.0) {
            if (input[40] >= 1.0) {
                var19 = 0.057784136;
            } else {
                var19 = 0.26047164;
            }
        } else {
            if (input[83] >= 1.0) {
                if (input[2] >= 17.75) {
                    var19 = -0.08905085;
                } else {
                    var19 = 0.2713806;
                }
            } else {
                if (input[14] >= 1.0) {
                    if (input[97] >= 1.0) {
                        var19 = 0.2787225;
                    } else {
                        if (input[2] >= 12.535) {
                            var19 = -0.17563407;
                        } else {
                            var19 = 0.032109227;
                        }
                    }
                } else {
                    if (input[73] >= 1.0) {
                        if (input[55] >= 1.0) {
                            var19 = -0.24098684;
                        } else {
                            if (input[40] >= 1.0) {
                                var19 = -0.22063845;
                            } else {
                                if (input[42] >= 1.0) {
                                    var19 = -0.19666316;
                                } else {
                                    if (input[1] >= 4.725) {
                                        if (input[38] >= 1.0) {
                                            var19 = 0.17809463;
                                        } else {
                                            var19 = 0.29735357;
                                        }
                                    } else {
                                        var19 = -0.028833304;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[26] >= 1.0) {
                            var19 = -0.28865898;
                        } else {
                            if (input[41] >= 1.0) {
                                if (input[9] >= 1.0) {
                                    if (input[69] >= 1.0) {
                                        var19 = 0.3372717;
                                    } else {
                                        if (input[0] >= 4.315) {
                                            var19 = -0.26168472;
                                        } else {
                                            var19 = 0.07857299;
                                        }
                                    }
                                } else {
                                    if (input[33] >= 1.0) {
                                        var19 = 0.16754165;
                                    } else {
                                        var19 = -0.3409949;
                                    }
                                }
                            } else {
                                if (input[9] >= 1.0) {
                                    if (input[64] >= 1.0) {
                                        if (input[0] >= 10.82) {
                                            var19 = -0.16111529;
                                        } else {
                                            var19 = 0.28773943;
                                        }
                                    } else {
                                        if (input[2] >= 24.395) {
                                            var19 = 0.19637476;
                                        } else {
                                            var19 = -0.11264946;
                                        }
                                    }
                                } else {
                                    if (input[12] >= 1.0) {
                                        if (input[44] >= 1.0) {
                                            var19 = 0.17740166;
                                        } else {
                                            var19 = -0.28763658;
                                        }
                                    } else {
                                        if (input[2] >= 13.785) {
                                            var19 = -0.06747998;
                                        } else {
                                            var19 = 0.12845035;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var20;
    if (input[22] >= 1.0) {
        if (input[47] >= 1.0) {
            var20 = 0.20791659;
        } else {
            if (input[2] >= 4.525) {
                var20 = -0.2903275;
            } else {
                var20 = 0.043535527;
            }
        }
    } else {
        if (input[43] >= 1.0) {
            if (input[2] >= 18.955) {
                if (input[2] >= 19.945) {
                    var20 = -0.26945055;
                } else {
                    if (input[65] >= 1.0) {
                        var20 = 0.029718196;
                    } else {
                        var20 = -0.1628048;
                    }
                }
            } else {
                if (input[0] >= 3.795) {
                    if (input[0] >= 10.09) {
                        var20 = -0.16961484;
                    } else {
                        if (input[94] >= 1.0) {
                            if (input[27] >= 1.0) {
                                var20 = -0.1797524;
                            } else {
                                var20 = 0.17785293;
                            }
                        } else {
                            if (input[81] >= 1.0) {
                                if (input[1] >= 2.215) {
                                    var20 = -0.17712063;
                                } else {
                                    var20 = 0.1936852;
                                }
                            } else {
                                var20 = 0.3163077;
                            }
                        }
                    }
                } else {
                    if (input[86] >= 1.0) {
                        if (input[2] >= 0.94) {
                            if (input[2] >= 4.09) {
                                if (input[3] >= 1.0) {
                                    var20 = 0.18541399;
                                } else {
                                    var20 = -0.19679864;
                                }
                            } else {
                                var20 = -0.28068575;
                            }
                        } else {
                            var20 = 0.23166017;
                        }
                    } else {
                        var20 = 0.27109292;
                    }
                }
            }
        } else {
            if (input[0] >= 3.2150002) {
                if (input[71] >= 1.0) {
                    if (input[19] >= 1.0) {
                        var20 = 0.17353606;
                    } else {
                        if (input[2] >= 4.225) {
                            var20 = -0.28793624;
                        } else {
                            var20 = -0.047424946;
                        }
                    }
                } else {
                    if (input[23] >= 1.0) {
                        if (input[36] >= 1.0) {
                            if (input[11] >= 1.0) {
                                var20 = 0.16227327;
                            } else {
                                var20 = -0.21250898;
                            }
                        } else {
                            if (input[40] >= 1.0) {
                                var20 = 0.025939213;
                            } else {
                                if (input[1] >= 7.95) {
                                    var20 = 0.07943393;
                                } else {
                                    var20 = 0.28356928;
                                }
                            }
                        }
                    } else {
                        if (input[118] >= 1.0) {
                            var20 = 0.25399604;
                        } else {
                            if (input[88] >= 1.0) {
                                if (input[60] >= 1.0) {
                                    var20 = -0.2195369;
                                } else {
                                    var20 = 0.28151965;
                                }
                            } else {
                                if (input[86] >= 1.0) {
                                    if (input[9] >= 1.0) {
                                        if (input[45] >= 1.0) {
                                            var20 = 0.11467348;
                                        } else {
                                            var20 = -0.2399933;
                                        }
                                    } else {
                                        if (input[2] >= 13.85) {
                                            var20 = -0.2238111;
                                        } else {
                                            var20 = 0.09138401;
                                        }
                                    }
                                } else {
                                    if (input[0] >= 5.385) {
                                        if (input[37] >= 1.0) {
                                            var20 = 0.2569779;
                                        } else {
                                            var20 = -0.0048809694;
                                        }
                                    } else {
                                        if (input[2] >= 5.245) {
                                            var20 = -0.16051508;
                                        } else {
                                            var20 = 0.13506706;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[34] >= 1.0) {
                    if (input[86] >= 1.0) {
                        if (input[45] >= 1.0) {
                            if (input[2] >= 3.6750002) {
                                var20 = -0.17469342;
                            } else {
                                var20 = 0.20998953;
                            }
                        } else {
                            if (input[21] >= 1.0) {
                                if (input[2] >= 7.67) {
                                    var20 = -0.12503411;
                                } else {
                                    var20 = 0.23432732;
                                }
                            } else {
                                var20 = 0.3041355;
                            }
                        }
                    } else {
                        if (input[0] >= 1.205) {
                            if (input[53] >= 1.0) {
                                var20 = 0.23965244;
                            } else {
                                if (input[45] >= 1.0) {
                                    var20 = -0.25826508;
                                } else {
                                    if (input[0] >= 1.785) {
                                        if (input[76] >= 1.0) {
                                            var20 = -0.29283106;
                                        } else {
                                            var20 = 0.178047;
                                        }
                                    } else {
                                        if (input[47] >= 1.0) {
                                            var20 = -0.24676462;
                                        } else {
                                            var20 = 0.19780661;
                                        }
                                    }
                                }
                            }
                        } else {
                            var20 = 0.25596765;
                        }
                    }
                } else {
                    if (input[19] >= 1.0) {
                        var20 = 0.16034624;
                    } else {
                        var20 = -0.2806542;
                    }
                }
            }
        }
    }
    double var21;
    if (input[67] >= 1.0) {
        var21 = 0.2540707;
    } else {
        if (input[39] >= 1.0) {
            if (input[17] >= 1.0) {
                var21 = 0.20916115;
            } else {
                if (input[2] >= 6.175) {
                    var21 = -0.28407773;
                } else {
                    var21 = -0.04615609;
                }
            }
        } else {
            if (input[87] >= 1.0) {
                if (input[44] >= 1.0) {
                    var21 = 0.29591164;
                } else {
                    if (input[5] >= 1.0) {
                        var21 = 0.24811903;
                    } else {
                        if (input[58] >= 1.0) {
                            if (input[2] >= 3.275) {
                                if (input[36] >= 1.0) {
                                    var21 = 0.15852828;
                                } else {
                                    var21 = -0.16983967;
                                }
                            } else {
                                var21 = -0.26671588;
                            }
                        } else {
                            if (input[40] >= 1.0) {
                                if (input[2] >= 21.345001) {
                                    var21 = 0.18418388;
                                } else {
                                    var21 = -0.24931094;
                                }
                            } else {
                                var21 = 0.24478051;
                            }
                        }
                    }
                }
            } else {
                if (input[2] >= 3.6750002) {
                    if (input[4] >= 1.0) {
                        if (input[1] >= 8.190001) {
                            var21 = -0.07289356;
                        } else {
                            var21 = 0.28133702;
                        }
                    } else {
                        if (input[3] >= 1.0) {
                            if (input[13] >= 1.0) {
                                var21 = 0.04767999;
                            } else {
                                if (input[2] >= 4.455) {
                                    var21 = 0.25525692;
                                } else {
                                    var21 = 0.05987548;
                                }
                            }
                        } else {
                            if (input[71] >= 1.0) {
                                if (input[19] >= 1.0) {
                                    var21 = 0.16742036;
                                } else {
                                    if (input[47] >= 1.0) {
                                        var21 = -0.07195268;
                                    } else {
                                        var21 = -0.28698286;
                                    }
                                }
                            } else {
                                if (input[0] >= 6.605) {
                                    if (input[58] >= 1.0) {
                                        if (input[18] >= 1.0) {
                                            var21 = 0.23085593;
                                        } else {
                                            var21 = -0.11862635;
                                        }
                                    } else {
                                        if (input[18] >= 1.0) {
                                            var21 = -0.096951455;
                                        } else {
                                            var21 = 0.088360384;
                                        }
                                    }
                                } else {
                                    if (input[58] >= 1.0) {
                                        if (input[2] >= 5.755) {
                                            var21 = 0.12237142;
                                        } else {
                                            var21 = -0.18443835;
                                        }
                                    } else {
                                        if (input[115] >= 1.0) {
                                            var21 = -0.15215944;
                                        } else {
                                            var21 = 0.22311762;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[34] >= 1.0) {
                        if (input[51] >= 1.0) {
                            if (input[21] >= 1.0) {
                                var21 = 0.14357832;
                            } else {
                                if (input[12] >= 1.0) {
                                    var21 = -0.25730473;
                                } else {
                                    var21 = -0.06953984;
                                }
                            }
                        } else {
                            if (input[20] >= 1.0) {
                                if (input[97] >= 1.0) {
                                    var21 = -0.25767288;
                                } else {
                                    var21 = 0.21362108;
                                }
                            } else {
                                if (input[78] >= 1.0) {
                                    if (input[0] >= 1.6800001) {
                                        var21 = 0.10842645;
                                    } else {
                                        var21 = -0.17997193;
                                    }
                                } else {
                                    if (input[0] >= 3.745) {
                                        if (input[21] >= 1.0) {
                                            var21 = -0.17888644;
                                        } else {
                                            var21 = 0.17214847;
                                        }
                                    } else {
                                        if (input[52] >= 1.0) {
                                            var21 = 0.0693392;
                                        } else {
                                            var21 = 0.29585606;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        var21 = -0.25202018;
                    }
                }
            }
        }
    }
    double var22;
    if (input[30] >= 1.0) {
        if (input[56] >= 1.0) {
            if (input[119] >= 1.0) {
                var22 = -0.17825942;
            } else {
                var22 = -0.0035070041;
            }
        } else {
            if (input[2] >= 17.880001) {
                var22 = -0.0025130978;
            } else {
                var22 = 0.2768339;
            }
        }
    } else {
        if (input[106] >= 1.0) {
            var22 = 0.24561036;
        } else {
            if (input[83] >= 1.0) {
                if (input[2] >= 16.235) {
                    var22 = -0.0051259436;
                } else {
                    var22 = 0.25341293;
                }
            } else {
                if (input[67] >= 1.0) {
                    var22 = 0.2422627;
                } else {
                    if (input[47] >= 1.0) {
                        if (input[18] >= 1.0) {
                            if (input[1] >= 5.365) {
                                if (input[117] >= 1.0) {
                                    var22 = 0.06627055;
                                } else {
                                    if (input[1] >= 5.815) {
                                        var22 = -0.28577054;
                                    } else {
                                        var22 = -0.08418652;
                                    }
                                }
                            } else {
                                if (input[0] >= 5.35) {
                                    var22 = 0.19372578;
                                } else {
                                    var22 = 0.033634987;
                                }
                            }
                        } else {
                            if (input[54] >= 1.0) {
                                var22 = 0.2964152;
                            } else {
                                if (input[16] >= 1.0) {
                                    var22 = -0.27087817;
                                } else {
                                    if (input[52] >= 1.0) {
                                        var22 = 0.29165962;
                                    } else {
                                        if (input[31] >= 1.0) {
                                            var22 = 0.27833292;
                                        } else {
                                            var22 = 0.012061122;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[18] >= 1.0) {
                            if (input[86] >= 1.0) {
                                if (input[58] >= 1.0) {
                                    var22 = 0.26728576;
                                } else {
                                    var22 = -0.27201155;
                                }
                            } else {
                                if (input[44] >= 1.0) {
                                    var22 = 0.2900234;
                                } else {
                                    var22 = -0.17942965;
                                }
                            }
                        } else {
                            if (input[2] >= 13.875) {
                                if (input[45] >= 1.0) {
                                    if (input[114] >= 1.0) {
                                        var22 = -0.24829695;
                                    } else {
                                        var22 = 0.24969521;
                                    }
                                } else {
                                    if (input[74] >= 1.0) {
                                        if (input[1] >= 2.24) {
                                            var22 = -0.28843623;
                                        } else {
                                            var22 = 0.14181337;
                                        }
                                    } else {
                                        if (input[71] >= 1.0) {
                                            var22 = -0.18797854;
                                        } else {
                                            var22 = 0.22681607;
                                        }
                                    }
                                }
                            } else {
                                if (input[13] >= 1.0) {
                                    if (input[41] >= 1.0) {
                                        var22 = -0.054639425;
                                    } else {
                                        var22 = -0.29125178;
                                    }
                                } else {
                                    if (input[59] >= 1.0) {
                                        if (input[1] >= 4.4049997) {
                                            var22 = 0.28537062;
                                        } else {
                                            var22 = -0.08712556;
                                        }
                                    } else {
                                        if (input[1] >= 3.5549998) {
                                            var22 = -0.06513251;
                                        } else {
                                            var22 = 0.1310759;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var23;
    if (input[42] >= 1.0) {
        if (input[9] >= 1.0) {
            if (input[44] >= 1.0) {
                if (input[55] >= 1.0) {
                    var23 = 0.20567004;
                } else {
                    if (input[63] >= 1.0) {
                        var23 = 0.16814256;
                    } else {
                        if (input[87] >= 1.0) {
                            var23 = 0.16316473;
                        } else {
                            var23 = -0.2969914;
                        }
                    }
                }
            } else {
                if (input[17] >= 1.0) {
                    var23 = -0.16550846;
                } else {
                    var23 = 0.29548618;
                }
            }
        } else {
            if (input[2] >= 4.575) {
                if (input[17] >= 1.0) {
                    var23 = -0.23180707;
                } else {
                    if (input[74] >= 1.0) {
                        var23 = 0.32196003;
                    } else {
                        if (input[2] >= 11.950001) {
                            var23 = -0.10184877;
                        } else {
                            var23 = 0.16517514;
                        }
                    }
                }
            } else {
                if (input[81] >= 1.0) {
                    var23 = 0.22284;
                } else {
                    if (input[86] >= 1.0) {
                        var23 = -0.28653288;
                    } else {
                        if (input[2] >= 3.33) {
                            var23 = 0.03876176;
                        } else {
                            var23 = -0.19393624;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] >= 1.0) {
            if (input[41] >= 1.0) {
                if (input[73] >= 1.0) {
                    var23 = 0.17894128;
                } else {
                    if (input[55] >= 1.0) {
                        var23 = 0.15646976;
                    } else {
                        if (input[45] >= 1.0) {
                            var23 = 0.053113565;
                        } else {
                            var23 = -0.32633588;
                        }
                    }
                }
            } else {
                if (input[45] >= 1.0) {
                    if (input[2] >= 18.045) {
                        var23 = -0.044546895;
                    } else {
                        var23 = -0.2811424;
                    }
                } else {
                    if (input[2] >= 11.445) {
                        if (input[2] >= 25.755001) {
                            var23 = 0.21576487;
                        } else {
                            if (input[88] >= 1.0) {
                                if (input[65] >= 1.0) {
                                    var23 = 0.22040318;
                                } else {
                                    var23 = -0.04227052;
                                }
                            } else {
                                if (input[18] >= 1.0) {
                                    var23 = 0.17634727;
                                } else {
                                    var23 = -0.29060292;
                                }
                            }
                        }
                    } else {
                        if (input[55] >= 1.0) {
                            var23 = -0.2418368;
                        } else {
                            if (input[54] >= 1.0) {
                                if (input[0] >= 3.455) {
                                    var23 = -0.22846675;
                                } else {
                                    var23 = 0.11412514;
                                }
                            } else {
                                if (input[43] >= 1.0) {
                                    var23 = 0.0034083677;
                                } else {
                                    if (input[0] >= 1.915) {
                                        if (input[2] >= 10.505) {
                                            var23 = 0.083600044;
                                        } else {
                                            var23 = 0.30365857;
                                        }
                                    } else {
                                        var23 = 0.055935238;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[41] >= 1.0) {
                if (input[74] >= 1.0) {
                    if (input[55] >= 1.0) {
                        if (input[2] >= 10.280001) {
                            var23 = 0.0020323412;
                        } else {
                            var23 = 0.17309846;
                        }
                    } else {
                        if (input[0] >= 4.545) {
                            var23 = -0.24899445;
                        } else {
                            var23 = 0.017232617;
                        }
                    }
                } else {
                    if (input[45] >= 1.0) {
                        if (input[2] >= 12.7) {
                            var23 = 0.17649047;
                        } else {
                            var23 = -0.008429559;
                        }
                    } else {
                        var23 = 0.3164557;
                    }
                }
            } else {
                if (input[43] >= 1.0) {
                    if (input[2] >= 18.955) {
                        if (input[2] >= 19.945) {
                            var23 = -0.23957023;
                        } else {
                            var23 = -0.038269214;
                        }
                    } else {
                        if (input[2] >= 5.1400003) {
                            if (input[81] >= 1.0) {
                                if (input[1] >= 2.22) {
                                    var23 = -0.20392203;
                                } else {
                                    var23 = 0.16332985;
                                }
                            } else {
                                if (input[94] >= 1.0) {
                                    var23 = -0.01484378;
                                } else {
                                    var23 = 0.29794002;
                                }
                            }
                        } else {
                            if (input[86] >= 1.0) {
                                if (input[2] >= 0.94) {
                                    if (input[2] >= 4.09) {
                                        var23 = -0.008528771;
                                    } else {
                                        var23 = -0.25665262;
                                    }
                                } else {
                                    var23 = 0.19240901;
                                }
                            } else {
                                var23 = 0.24030663;
                            }
                        }
                    }
                } else {
                    if (input[37] >= 1.0) {
                        if (input[34] >= 1.0) {
                            if (input[44] >= 1.0) {
                                if (input[71] >= 1.0) {
                                    var23 = -0.1674858;
                                } else {
                                    if (input[2] >= 11.15) {
                                        var23 = 0.074252374;
                                    } else {
                                        var23 = 0.30297756;
                                    }
                                }
                            } else {
                                if (input[2] >= 2.855) {
                                    if (input[0] >= 3.145) {
                                        var23 = -0.29792458;
                                    } else {
                                        var23 = -0.07779391;
                                    }
                                } else {
                                    if (input[72] >= 1.0) {
                                        var23 = -0.16566624;
                                    } else {
                                        var23 = 0.20497505;
                                    }
                                }
                            }
                        } else {
                            if (input[2] >= 15.719999) {
                                if (input[86] >= 1.0) {
                                    if (input[0] >= 12.57) {
                                        var23 = 0.020681737;
                                    } else {
                                        var23 = -0.23657246;
                                    }
                                } else {
                                    var23 = 0.19884515;
                                }
                            } else {
                                if (input[0] >= 4.38) {
                                    var23 = 0.2924473;
                                } else {
                                    if (input[55] >= 1.0) {
                                        var23 = -0.21835192;
                                    } else {
                                        var23 = 0.15491512;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] >= 3.8850002) {
                            if (input[11] >= 1.0) {
                                if (input[86] >= 1.0) {
                                    var23 = -0.16054356;
                                } else {
                                    var23 = 0.26661447;
                                }
                            } else {
                                if (input[12] >= 1.0) {
                                    var23 = 0.2402884;
                                } else {
                                    if (input[61] >= 1.0) {
                                        var23 = 0.2325686;
                                    } else {
                                        if (input[67] >= 1.0) {
                                            var23 = 0.22649671;
                                        } else {
                                            var23 = -0.16631266;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] >= 1.875) {
                                if (input[45] >= 1.0) {
                                    var23 = 0.03421496;
                                } else {
                                    var23 = 0.27899477;
                                }
                            } else {
                                if (input[1] >= 4.535) {
                                    if (input[12] >= 1.0) {
                                        var23 = -0.24299954;
                                    } else {
                                        if (input[58] >= 1.0) {
                                            var23 = -0.17178239;
                                        } else {
                                            var23 = 0.12715144;
                                        }
                                    }
                                } else {
                                    if (input[9] >= 1.0) {
                                        var23 = 0.21445467;
                                    } else {
                                        var23 = 0.05146729;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var24;
    if (input[63] >= 1.0) {
        var24 = 0.2380265;
    } else {
        if (input[106] >= 1.0) {
            var24 = 0.22981133;
        } else {
            if (input[15] >= 1.0) {
                var24 = 0.20117356;
            } else {
                if (input[27] >= 1.0) {
                    if (input[82] >= 1.0) {
                        var24 = -0.2603357;
                    } else {
                        if (input[37] >= 1.0) {
                            if (input[74] >= 1.0) {
                                if (input[55] >= 1.0) {
                                    var24 = -0.084173165;
                                } else {
                                    var24 = 0.2725128;
                                }
                            } else {
                                if (input[34] >= 1.0) {
                                    if (input[2] >= 16.845) {
                                        var24 = 0.09907277;
                                    } else {
                                        if (input[1] >= 4.915) {
                                            var24 = -0.22044232;
                                        } else {
                                            var24 = -0.041704252;
                                        }
                                    }
                                } else {
                                    var24 = 0.16371599;
                                }
                            }
                        } else {
                            if (input[34] >= 1.0) {
                                if (input[1] >= 7.2650003) {
                                    if (input[5] >= 1.0) {
                                        if (input[21] >= 1.0) {
                                            var24 = 0.08036613;
                                        } else {
                                            var24 = -0.22694106;
                                        }
                                    } else {
                                        if (input[2] >= 42.06) {
                                            var24 = -0.22347438;
                                        } else {
                                            var24 = 0.14664672;
                                        }
                                    }
                                } else {
                                    if (input[18] >= 1.0) {
                                        if (input[36] >= 1.0) {
                                            var24 = -0.025402961;
                                        } else {
                                            var24 = 0.20704256;
                                        }
                                    } else {
                                        if (input[47] >= 1.0) {
                                            var24 = -0.010806335;
                                        } else {
                                            var24 = -0.18776324;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] >= 24.66) {
                                    var24 = 0.13090973;
                                } else {
                                    if (input[64] >= 1.0) {
                                        var24 = 0.033257965;
                                    } else {
                                        if (input[11] >= 1.0) {
                                            var24 = -0.008609313;
                                        } else {
                                            var24 = -0.28131703;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[74] >= 1.0) {
                        if (input[36] >= 1.0) {
                            if (input[44] >= 1.0) {
                                var24 = -0.30416498;
                            } else {
                                if (input[1] >= 5.2650003) {
                                    if (input[0] >= 4.37) {
                                        var24 = -0.26193082;
                                    } else {
                                        if (input[2] >= 2.315) {
                                            var24 = 0.085291915;
                                        } else {
                                            var24 = -0.112376295;
                                        }
                                    }
                                } else {
                                    if (input[2] >= 1.51) {
                                        var24 = 0.28690544;
                                    } else {
                                        var24 = 0.0019695521;
                                    }
                                }
                            }
                        } else {
                            if (input[32] >= 1.0) {
                                if (input[43] >= 1.0) {
                                    if (input[0] >= 10.725) {
                                        var24 = -0.18877234;
                                    } else {
                                        if (input[2] >= 11.305) {
                                            var24 = 0.27744982;
                                        } else {
                                            var24 = -0.072302856;
                                        }
                                    }
                                } else {
                                    if (input[4] >= 1.0) {
                                        var24 = 0.18214989;
                                    } else {
                                        if (input[0] >= 3.455) {
                                            var24 = -0.27419496;
                                        } else {
                                            var24 = 0.023822112;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] >= 13.005) {
                                    if (input[2] >= 29.130001) {
                                        var24 = 0.2559218;
                                    } else {
                                        if (input[1] >= 10.059999) {
                                            var24 = 0.2265582;
                                        } else {
                                            var24 = -0.08284644;
                                        }
                                    }
                                } else {
                                    if (input[10] >= 1.0) {
                                        if (input[82] >= 1.0) {
                                            var24 = 0.17998075;
                                        } else {
                                            var24 = -0.1795;
                                        }
                                    } else {
                                        if (input[20] >= 1.0) {
                                            var24 = -0.18205605;
                                        } else {
                                            var24 = 0.1647824;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[28] >= 1.0) {
                            if (input[41] >= 1.0) {
                                var24 = -0.2802969;
                            } else {
                                if (input[2] >= 8.09) {
                                    var24 = 0.05684739;
                                } else {
                                    var24 = -0.06730844;
                                }
                            }
                        } else {
                            if (input[40] >= 1.0) {
                                var24 = -0.21114647;
                            } else {
                                if (input[58] >= 1.0) {
                                    if (input[1] >= 5.005) {
                                        if (input[73] >= 1.0) {
                                            var24 = 0.15746263;
                                        } else {
                                            var24 = -0.23927775;
                                        }
                                    } else {
                                        var24 = 0.2059077;
                                    }
                                } else {
                                    if (input[45] >= 1.0) {
                                        if (input[24] >= 1.0) {
                                            var24 = -0.1728411;
                                        } else {
                                            var24 = 0.18576457;
                                        }
                                    } else {
                                        if (input[1] >= 8.965) {
                                            var24 = 0.060441975;
                                        } else {
                                            var24 = 0.2987362;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var25;
    if (input[42] >= 1.0) {
        if (input[9] >= 1.0) {
            if (input[44] >= 1.0) {
                if (input[55] >= 1.0) {
                    var25 = 0.19091654;
                } else {
                    if (input[1] >= 8.88) {
                        var25 = 0.07165834;
                    } else {
                        if (input[1] >= 5.575) {
                            var25 = -0.26999772;
                        } else {
                            var25 = -0.03363194;
                        }
                    }
                }
            } else {
                if (input[0] >= 9.525) {
                    var25 = -0.10502951;
                } else {
                    var25 = 0.27367035;
                }
            }
        } else {
            if (input[2] >= 4.675) {
                if (input[17] >= 1.0) {
                    var25 = -0.20558171;
                } else {
                    if (input[74] >= 1.0) {
                        var25 = 0.30935535;
                    } else {
                        var25 = 0.035168648;
                    }
                }
            } else {
                if (input[81] >= 1.0) {
                    var25 = 0.21273562;
                } else {
                    if (input[86] >= 1.0) {
                        var25 = -0.2637839;
                    } else {
                        if (input[2] >= 3.2649999) {
                            var25 = 0.03784192;
                        } else {
                            var25 = -0.16763982;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] >= 1.0) {
            if (input[41] >= 1.0) {
                if (input[55] >= 1.0) {
                    var25 = 0.1275544;
                } else {
                    if (input[2] >= 14.105) {
                        if (input[74] >= 1.0) {
                            var25 = -0.18445721;
                        } else {
                            var25 = 0.11575362;
                        }
                    } else {
                        var25 = -0.27542505;
                    }
                }
            } else {
                if (input[45] >= 1.0) {
                    if (input[0] >= 11.59) {
                        var25 = -0.061395895;
                    } else {
                        var25 = -0.2630833;
                    }
                } else {
                    if (input[2] >= 11.445) {
                        if (input[2] >= 25.665) {
                            var25 = 0.18707705;
                        } else {
                            if (input[88] >= 1.0) {
                                if (input[27] >= 1.0) {
                                    var25 = 0.011072527;
                                } else {
                                    var25 = 0.18337812;
                                }
                            } else {
                                if (input[34] >= 1.0) {
                                    var25 = -0.27371073;
                                } else {
                                    var25 = 0.08222309;
                                }
                            }
                        }
                    } else {
                        if (input[55] >= 1.0) {
                            var25 = -0.21497457;
                        } else {
                            if (input[54] >= 1.0) {
                                if (input[0] >= 3.685) {
                                    var25 = -0.18164872;
                                } else {
                                    var25 = 0.051345896;
                                }
                            } else {
                                if (input[2] >= 9.5) {
                                    if (input[1] >= 5.55) {
                                        var25 = 0.15748687;
                                    } else {
                                        var25 = -0.017349914;
                                    }
                                } else {
                                    if (input[2] >= 3.3049998) {
                                        var25 = 0.2695335;
                                    } else {
                                        var25 = 0.06563505;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[74] >= 1.0) {
                if (input[1] >= 7.3050003) {
                    if (input[0] >= 13.595) {
                        if (input[34] >= 1.0) {
                            var25 = -0.20757799;
                        } else {
                            if (input[2] >= 18.555) {
                                var25 = 0.04398178;
                            } else {
                                var25 = -0.15132804;
                            }
                        }
                    } else {
                        if (input[59] >= 1.0) {
                            if (input[27] >= 1.0) {
                                var25 = -0.21716739;
                            } else {
                                var25 = 0.045809258;
                            }
                        } else {
                            if (input[21] >= 1.0) {
                                if (input[1] >= 9.265) {
                                    if (input[65] >= 1.0) {
                                        var25 = 0.20332357;
                                    } else {
                                        var25 = 0.053552486;
                                    }
                                } else {
                                    if (input[115] >= 1.0) {
                                        var25 = -0.2357244;
                                    } else {
                                        var25 = 0.15832123;
                                    }
                                }
                            } else {
                                if (input[17] >= 1.0) {
                                    var25 = -0.065046854;
                                } else {
                                    if (input[94] >= 1.0) {
                                        var25 = 0.048590895;
                                    } else {
                                        if (input[0] >= 11.98) {
                                            var25 = 0.05127063;
                                        } else {
                                            var25 = 0.27964574;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[37] >= 1.0) {
                        if (input[32] >= 1.0) {
                            if (input[0] >= 3.42) {
                                if (input[0] >= 10.805) {
                                    var25 = -0.045837138;
                                } else {
                                    var25 = -0.24924417;
                                }
                            } else {
                                var25 = 0.05732653;
                            }
                        } else {
                            if (input[45] >= 1.0) {
                                var25 = -0.20162494;
                            } else {
                                if (input[56] >= 1.0) {
                                    var25 = -0.19790985;
                                } else {
                                    if (input[55] >= 1.0) {
                                        if (input[1] >= 5.085) {
                                            var25 = 0.07398453;
                                        } else {
                                            var25 = -0.18717553;
                                        }
                                    } else {
                                        if (input[2] >= 15.49) {
                                            var25 = -0.027293215;
                                        } else {
                                            var25 = 0.29022333;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] >= 14.355) {
                            var25 = 0.19044845;
                        } else {
                            if (input[1] >= 4.165) {
                                if (input[14] >= 1.0) {
                                    var25 = 0.15908343;
                                } else {
                                    if (input[31] >= 1.0) {
                                        if (input[1] >= 5.225) {
                                            var25 = -0.03236348;
                                        } else {
                                            var25 = 0.11318811;
                                        }
                                    } else {
                                        if (input[55] >= 1.0) {
                                            var25 = 0.0103979325;
                                        } else {
                                            var25 = -0.20941924;
                                        }
                                    }
                                }
                            } else {
                                if (input[87] >= 1.0) {
                                    if (input[39] >= 1.0) {
                                        var25 = -0.0062214406;
                                    } else {
                                        var25 = 0.20940527;
                                    }
                                } else {
                                    if (input[2] >= 5.145) {
                                        if (input[1] >= 2.74) {
                                            var25 = -0.20353515;
                                        } else {
                                            var25 = 0.14712313;
                                        }
                                    } else {
                                        if (input[51] >= 1.0) {
                                            var25 = -0.16028951;
                                        } else {
                                            var25 = 0.2288409;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[41] >= 1.0) {
                    if (input[45] >= 1.0) {
                        var25 = 0.079947874;
                    } else {
                        var25 = 0.29396507;
                    }
                } else {
                    if (input[1] >= 5.245) {
                        if (input[97] >= 1.0) {
                            if (input[3] >= 1.0) {
                                var25 = 0.13955227;
                            } else {
                                if (input[117] >= 1.0) {
                                    var25 = 0.008688106;
                                } else {
                                    if (input[8] >= 1.0) {
                                        var25 = -0.061473627;
                                    } else {
                                        var25 = -0.2797199;
                                    }
                                }
                            }
                        } else {
                            if (input[45] >= 1.0) {
                                var25 = -0.20128997;
                            } else {
                                if (input[55] >= 1.0) {
                                    var25 = -0.16283011;
                                } else {
                                    var25 = 0.2629778;
                                }
                            }
                        }
                    } else {
                        if (input[20] >= 1.0) {
                            if (input[0] >= 5.2200003) {
                                var25 = -0.17918395;
                            } else {
                                var25 = 0.036552764;
                            }
                        } else {
                            if (input[86] >= 1.0) {
                                if (input[2] >= 3.73) {
                                    var25 = -0.07790574;
                                } else {
                                    var25 = 0.19210254;
                                }
                            } else {
                                var25 = 0.2516709;
                            }
                        }
                    }
                }
            }
        }
    }
    double var26;
    if (input[63] >= 1.0) {
        var26 = 0.22004756;
    } else {
        if (input[106] >= 1.0) {
            var26 = 0.21260893;
        } else {
            if (input[61] >= 1.0) {
                var26 = 0.20854391;
            } else {
                if (input[114] >= 1.0) {
                    if (input[1] >= 6.8050003) {
                        var26 = -0.22529702;
                    } else {
                        var26 = -0.015004206;
                    }
                } else {
                    if (input[27] >= 1.0) {
                        if (input[36] >= 1.0) {
                            if (input[9] >= 1.0) {
                                if (input[0] >= 1.915) {
                                    var26 = 0.19650276;
                                } else {
                                    var26 = -0.085249975;
                                }
                            } else {
                                if (input[3] >= 1.0) {
                                    var26 = 0.15453605;
                                } else {
                                    if (input[74] >= 1.0) {
                                        var26 = -0.23036171;
                                    } else {
                                        var26 = -0.055309903;
                                    }
                                }
                            }
                        } else {
                            if (input[37] >= 1.0) {
                                if (input[0] >= 4.8) {
                                    if (input[34] >= 1.0) {
                                        if (input[81] >= 1.0) {
                                            var26 = 0.19546941;
                                        } else {
                                            var26 = -0.0753789;
                                        }
                                    } else {
                                        var26 = 0.25992522;
                                    }
                                } else {
                                    if (input[1] >= 4.4449997) {
                                        if (input[74] >= 1.0) {
                                            var26 = -0.026871916;
                                        } else {
                                            var26 = -0.23774165;
                                        }
                                    } else {
                                        var26 = 0.047253273;
                                    }
                                }
                            } else {
                                if (input[2] >= 5.3100004) {
                                    if (input[0] >= 6.6549997) {
                                        if (input[34] >= 1.0) {
                                            var26 = -0.01762842;
                                        } else {
                                            var26 = -0.187011;
                                        }
                                    } else {
                                        if (input[18] >= 1.0) {
                                            var26 = -0.041815456;
                                        } else {
                                            var26 = -0.24082236;
                                        }
                                    }
                                } else {
                                    if (input[86] >= 1.0) {
                                        if (input[74] >= 1.0) {
                                            var26 = -0.20856906;
                                        } else {
                                            var26 = 0.15594274;
                                        }
                                    } else {
                                        if (input[58] >= 1.0) {
                                            var26 = -0.02561699;
                                        } else {
                                            var26 = 0.24256277;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[74] >= 1.0) {
                            if (input[36] >= 1.0) {
                                if (input[44] >= 1.0) {
                                    var26 = -0.28626573;
                                } else {
                                    if (input[1] >= 5.035) {
                                        if (input[0] >= 4.385) {
                                            var26 = -0.20519106;
                                        } else {
                                            var26 = 0.018027285;
                                        }
                                    } else {
                                        if (input[2] >= 1.71) {
                                            var26 = 0.26509765;
                                        } else {
                                            var26 = 0.054825153;
                                        }
                                    }
                                }
                            } else {
                                if (input[23] >= 1.0) {
                                    var26 = 0.22830896;
                                } else {
                                    if (input[45] >= 1.0) {
                                        if (input[0] >= 8.285) {
                                            var26 = 0.10835525;
                                        } else {
                                            var26 = -0.22672206;
                                        }
                                    } else {
                                        if (input[28] >= 1.0) {
                                            var26 = 0.18782331;
                                        } else {
                                            var26 = 0.007077415;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[28] >= 1.0) {
                                if (input[41] >= 1.0) {
                                    var26 = -0.24147858;
                                } else {
                                    var26 = 0.005222554;
                                }
                            } else {
                                if (input[71] >= 1.0) {
                                    if (input[0] >= 4.575) {
                                        var26 = -0.21934311;
                                    } else {
                                        var26 = 0.13117993;
                                    }
                                } else {
                                    if (input[40] >= 1.0) {
                                        var26 = -0.12755215;
                                    } else {
                                        if (input[0] >= 1.795) {
                                            var26 = 0.2726578;
                                        } else {
                                            var26 = -0.10314977;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var27;
    if (input[42] >= 1.0) {
        if (input[17] >= 1.0) {
            var27 = -0.22350834;
        } else {
            if (input[2] >= 4.615) {
                if (input[9] >= 1.0) {
                    if (input[44] >= 1.0) {
                        if (input[1] >= 8.809999) {
                            var27 = 0.032124802;
                        } else {
                            if (input[1] >= 6.1800003) {
                                var27 = -0.2525868;
                            } else {
                                var27 = -0.009082747;
                            }
                        }
                    } else {
                        var27 = 0.26295394;
                    }
                } else {
                    if (input[74] >= 1.0) {
                        var27 = 0.29398742;
                    } else {
                        var27 = 0.02235794;
                    }
                }
            } else {
                if (input[81] >= 1.0) {
                    var27 = 0.20862558;
                } else {
                    if (input[86] >= 1.0) {
                        var27 = -0.25573754;
                    } else {
                        var27 = -0.057867046;
                    }
                }
            }
        }
    } else {
        if (input[5] >= 1.0) {
            if (input[41] >= 1.0) {
                if (input[55] >= 1.0) {
                    var27 = 0.11098086;
                } else {
                    if (input[47] >= 1.0) {
                        var27 = -0.27730694;
                    } else {
                        if (input[59] >= 1.0) {
                            var27 = 0.16355394;
                        } else {
                            var27 = -0.23002774;
                        }
                    }
                }
            } else {
                if (input[45] >= 1.0) {
                    if (input[0] >= 9.719999) {
                        var27 = -0.063587725;
                    } else {
                        var27 = -0.23966794;
                    }
                } else {
                    if (input[55] >= 1.0) {
                        var27 = -0.20874026;
                    } else {
                        if (input[2] >= 10.93) {
                            if (input[40] >= 1.0) {
                                var27 = 0.20370544;
                            } else {
                                if (input[88] >= 1.0) {
                                    if (input[27] >= 1.0) {
                                        var27 = 0.021526571;
                                    } else {
                                        var27 = 0.16815591;
                                    }
                                } else {
                                    if (input[34] >= 1.0) {
                                        if (input[27] >= 1.0) {
                                            var27 = -0.03967413;
                                        } else {
                                            var27 = -0.25874677;
                                        }
                                    } else {
                                        var27 = 0.08127694;
                                    }
                                }
                            }
                        } else {
                            if (input[18] >= 1.0) {
                                var27 = -0.08695924;
                            } else {
                                if (input[2] >= 9.5) {
                                    var27 = 0.08155756;
                                } else {
                                    if (input[1] >= 5.335) {
                                        var27 = 0.07724494;
                                    } else {
                                        var27 = 0.2585321;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[41] >= 1.0) {
                if (input[74] >= 1.0) {
                    if (input[2] >= 13.325) {
                        var27 = -0.2064234;
                    } else {
                        if (input[20] >= 1.0) {
                            var27 = -0.16425298;
                        } else {
                            var27 = 0.19473031;
                        }
                    }
                } else {
                    if (input[45] >= 1.0) {
                        var27 = 0.058518197;
                    } else {
                        var27 = 0.27654156;
                    }
                }
            } else {
                if (input[3] >= 1.0) {
                    if (input[12] >= 1.0) {
                        var27 = -0.03322411;
                    } else {
                        if (input[20] >= 1.0) {
                            if (input[2] >= 3.775) {
                                var27 = 0.15531464;
                            } else {
                                var27 = -0.104102634;
                            }
                        } else {
                            var27 = 0.24500804;
                        }
                    }
                } else {
                    if (input[11] >= 1.0) {
                        if (input[58] >= 1.0) {
                            var27 = -0.11662754;
                        } else {
                            var27 = 0.2520128;
                        }
                    } else {
                        if (input[40] >= 1.0) {
                            if (input[61] >= 1.0) {
                                var27 = 0.19011919;
                            } else {
                                if (input[0] >= 12.5) {
                                    if (input[1] >= 6.9449997) {
                                        var27 = -0.2207385;
                                    } else {
                                        if (input[0] >= 21.884998) {
                                            var27 = -0.01086235;
                                        } else {
                                            var27 = 0.21346524;
                                        }
                                    }
                                } else {
                                    if (input[2] >= 10.1) {
                                        var27 = -0.26599234;
                                    } else {
                                        var27 = -0.036649812;
                                    }
                                }
                            }
                        } else {
                            if (input[1] >= 7.135) {
                                if (input[69] >= 1.0) {
                                    var27 = -0.1362215;
                                } else {
                                    if (input[21] >= 1.0) {
                                        if (input[38] >= 1.0) {
                                            var27 = 0.19400585;
                                        } else {
                                            var27 = -0.21456285;
                                        }
                                    } else {
                                        if (input[0] >= 12.68) {
                                            var27 = -0.12045505;
                                        } else {
                                            var27 = 0.18352352;
                                        }
                                    }
                                }
                            } else {
                                if (input[1] >= 4.665) {
                                    if (input[34] >= 1.0) {
                                        if (input[59] >= 1.0) {
                                            var27 = 0.10058371;
                                        } else {
                                            var27 = -0.141077;
                                        }
                                    } else {
                                        if (input[0] >= 4.38) {
                                            var27 = 0.09840191;
                                        } else {
                                            var27 = -0.15816233;
                                        }
                                    }
                                } else {
                                    if (input[74] >= 1.0) {
                                        if (input[87] >= 1.0) {
                                            var27 = 0.14172426;
                                        } else {
                                            var27 = -0.0691389;
                                        }
                                    } else {
                                        if (input[44] >= 1.0) {
                                            var27 = -0.0039548;
                                        } else {
                                            var27 = 0.22442377;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var28;
    if (input[63] >= 1.0) {
        var28 = 0.20221697;
    } else {
        if (input[45] >= 1.0) {
            if (input[2] >= 15.66) {
                if (input[114] >= 1.0) {
                    var28 = -0.18756036;
                } else {
                    var28 = 0.24418314;
                }
            } else {
                if (input[33] >= 1.0) {
                    var28 = 0.12497262;
                } else {
                    if (input[2] >= 2.7849998) {
                        if (input[42] >= 1.0) {
                            var28 = -0.03236472;
                        } else {
                            var28 = -0.2700878;
                        }
                    } else {
                        if (input[32] >= 1.0) {
                            var28 = 0.1576601;
                        } else {
                            var28 = -0.13507316;
                        }
                    }
                }
            }
        } else {
            if (input[3] >= 1.0) {
                if (input[86] >= 1.0) {
                    if (input[2] >= 3.775) {
                        var28 = 0.18955122;
                    } else {
                        var28 = -0.13345076;
                    }
                } else {
                    var28 = 0.233371;
                }
            } else {
                if (input[16] >= 1.0) {
                    var28 = -0.1993664;
                } else {
                    if (input[2] >= 11.785) {
                        if (input[58] >= 1.0) {
                            if (input[88] >= 1.0) {
                                if (input[60] >= 1.0) {
                                    var28 = -0.19001043;
                                } else {
                                    if (input[0] >= 6.8900003) {
                                        var28 = 0.24184993;
                                    } else {
                                        var28 = -0.061952956;
                                    }
                                }
                            } else {
                                if (input[34] >= 1.0) {
                                    if (input[40] >= 1.0) {
                                        var28 = 0.009601255;
                                    } else {
                                        if (input[0] >= 6.2650003) {
                                            var28 = -0.28076854;
                                        } else {
                                            var28 = -0.01433903;
                                        }
                                    }
                                } else {
                                    if (input[0] >= 9.33) {
                                        var28 = -0.09506466;
                                    } else {
                                        var28 = 0.16101778;
                                    }
                                }
                            }
                        } else {
                            if (input[38] >= 1.0) {
                                var28 = -0.23397797;
                            } else {
                                if (input[19] >= 1.0) {
                                    var28 = -0.20850773;
                                } else {
                                    if (input[13] >= 1.0) {
                                        if (input[74] >= 1.0) {
                                            var28 = -0.20546328;
                                        } else {
                                            var28 = 0.07773502;
                                        }
                                    } else {
                                        if (input[41] >= 1.0) {
                                            var28 = -0.06508308;
                                        } else {
                                            var28 = 0.09886423;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[56] >= 1.0) {
                            if (input[119] >= 1.0) {
                                var28 = -0.2093527;
                            } else {
                                if (input[2] >= 7.645) {
                                    var28 = 0.008506376;
                                } else {
                                    var28 = -0.053107347;
                                }
                            }
                        } else {
                            if (input[72] >= 1.0) {
                                if (input[1] >= 5.575) {
                                    if (input[36] >= 1.0) {
                                        var28 = -0.055837832;
                                    } else {
                                        var28 = -0.21662721;
                                    }
                                } else {
                                    var28 = 0.0013681354;
                                }
                            } else {
                                if (input[37] >= 1.0) {
                                    if (input[55] >= 1.0) {
                                        if (input[1] >= 5.085) {
                                            var28 = 0.009696632;
                                        } else {
                                            var28 = -0.21963164;
                                        }
                                    } else {
                                        if (input[21] >= 1.0) {
                                            var28 = 0.15509656;
                                        } else {
                                            var28 = 0.2851637;
                                        }
                                    }
                                } else {
                                    if (input[47] >= 1.0) {
                                        if (input[2] >= 1.845) {
                                            var28 = 0.16454367;
                                        } else {
                                            var28 = -0.09127845;
                                        }
                                    } else {
                                        if (input[55] >= 1.0) {
                                            var28 = 0.120735765;
                                        } else {
                                            var28 = -0.061097138;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var29;
    if (input[106] >= 1.0) {
        var29 = 0.19201714;
    } else {
        if (input[63] >= 1.0) {
            var29 = 0.18810657;
        } else {
            if (input[15] >= 1.0) {
                var29 = 0.15551963;
            } else {
                if (input[45] >= 1.0) {
                    if (input[2] >= 16.27) {
                        if (input[114] >= 1.0) {
                            var29 = -0.16751376;
                        } else {
                            var29 = 0.21482019;
                        }
                    } else {
                        if (input[16] >= 1.0) {
                            var29 = 0.15980463;
                        } else {
                            if (input[2] >= 2.7849998) {
                                if (input[33] >= 1.0) {
                                    var29 = 0.045195155;
                                } else {
                                    var29 = -0.25866902;
                                }
                            } else {
                                if (input[1] >= 3.665) {
                                    var29 = -0.09449738;
                                } else {
                                    var29 = 0.15146987;
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] >= 3.4250002) {
                        if (input[86] >= 1.0) {
                            if (input[44] >= 1.0) {
                                if (input[2] >= 14.595) {
                                    if (input[1] >= 8.775) {
                                        var29 = -0.04025221;
                                    } else {
                                        var29 = -0.27239016;
                                    }
                                } else {
                                    if (input[9] >= 1.0) {
                                        if (input[97] >= 1.0) {
                                            var29 = -0.23700476;
                                        } else {
                                            var29 = -0.06242605;
                                        }
                                    } else {
                                        if (input[33] >= 1.0) {
                                            var29 = 0.19054426;
                                        } else {
                                            var29 = -0.1041805;
                                        }
                                    }
                                }
                            } else {
                                if (input[41] >= 1.0) {
                                    var29 = -0.22240065;
                                } else {
                                    if (input[116] >= 1.0) {
                                        if (input[60] >= 1.0) {
                                            var29 = -0.17252941;
                                        } else {
                                            var29 = 0.12987983;
                                        }
                                    } else {
                                        if (input[97] >= 1.0) {
                                            var29 = -0.19125079;
                                        } else {
                                            var29 = -0.033256505;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[44] >= 1.0) {
                                if (input[38] >= 1.0) {
                                    var29 = -0.2169043;
                                } else {
                                    if (input[41] >= 1.0) {
                                        if (input[21] >= 1.0) {
                                            var29 = -0.21161567;
                                        } else {
                                            var29 = 0.10510384;
                                        }
                                    } else {
                                        if (input[0] >= 4.915) {
                                            var29 = 0.23720147;
                                        } else {
                                            var29 = 0.029939124;
                                        }
                                    }
                                }
                            } else {
                                if (input[9] >= 1.0) {
                                    if (input[41] >= 1.0) {
                                        var29 = 0.25817543;
                                    } else {
                                        if (input[11] >= 1.0) {
                                            var29 = 0.21664856;
                                        } else {
                                            var29 = -0.08654253;
                                        }
                                    }
                                } else {
                                    if (input[34] >= 1.0) {
                                        if (input[40] >= 1.0) {
                                            var29 = 0.04105031;
                                        } else {
                                            var29 = -0.24128799;
                                        }
                                    } else {
                                        var29 = 0.16143747;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[34] >= 1.0) {
                            if (input[76] >= 1.0) {
                                var29 = -0.14386605;
                            } else {
                                if (input[2] >= 2.225) {
                                    if (input[82] >= 1.0) {
                                        var29 = -0.028956225;
                                    } else {
                                        if (input[116] >= 1.0) {
                                            var29 = 0.11056558;
                                        } else {
                                            var29 = 0.25000167;
                                        }
                                    }
                                } else {
                                    if (input[2] >= 1.165) {
                                        if (input[3] >= 1.0) {
                                            var29 = 0.035484638;
                                        } else {
                                            var29 = -0.2020495;
                                        }
                                    } else {
                                        var29 = 0.19851577;
                                    }
                                }
                            }
                        } else {
                            if (input[55] >= 1.0) {
                                var29 = -0.19965833;
                            } else {
                                var29 = -0.024607543;
                            }
                        }
                    }
                }
            }
        }
    }
    double var30;
    if (input[14] >= 1.0) {
        if (input[38] >= 1.0) {
            var30 = -0.0069956277;
        } else {
            var30 = 0.1992615;
        }
    } else {
        if (input[61] >= 1.0) {
            var30 = 0.18093288;
        } else {
            if (input[42] >= 1.0) {
                if (input[17] >= 1.0) {
                    var30 = -0.20964685;
                } else {
                    if (input[97] >= 1.0) {
                        if (input[2] >= 4.675) {
                            if (input[9] >= 1.0) {
                                if (input[44] >= 1.0) {
                                    if (input[34] >= 1.0) {
                                        if (input[2] >= 14.8) {
                                            var30 = -0.06343536;
                                        } else {
                                            var30 = 0.11059055;
                                        }
                                    } else {
                                        var30 = -0.21742627;
                                    }
                                } else {
                                    var30 = 0.23659806;
                                }
                            } else {
                                if (input[58] >= 1.0) {
                                    var30 = 0.088485226;
                                } else {
                                    var30 = 0.2792833;
                                }
                            }
                        } else {
                            if (input[81] >= 1.0) {
                                var30 = 0.19757962;
                            } else {
                                if (input[86] >= 1.0) {
                                    var30 = -0.2376661;
                                } else {
                                    var30 = -0.040118717;
                                }
                            }
                        }
                    } else {
                        var30 = -0.1982151;
                    }
                }
            } else {
                if (input[97] >= 1.0) {
                    if (input[17] >= 1.0) {
                        if (input[47] >= 1.0) {
                            if (input[0] >= 4.9449997) {
                                var30 = 0.22472891;
                            } else {
                                var30 = -0.03306012;
                            }
                        } else {
                            if (input[0] >= 3.5549998) {
                                if (input[2] >= 13.635) {
                                    var30 = -0.021909513;
                                } else {
                                    if (input[0] >= 5.335) {
                                        var30 = -0.20747757;
                                    } else {
                                        var30 = -0.028778946;
                                    }
                                }
                            } else {
                                if (input[2] >= 7.005) {
                                    var30 = 0.21509075;
                                } else {
                                    if (input[116] >= 1.0) {
                                        var30 = 0.16174814;
                                    } else {
                                        var30 = -0.10938088;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[31] >= 1.0) {
                            if (input[36] >= 1.0) {
                                var30 = 0.23881811;
                            } else {
                                var30 = -0.089850955;
                            }
                        } else {
                            if (input[2] >= 5.135) {
                                if (input[86] >= 1.0) {
                                    if (input[43] >= 1.0) {
                                        if (input[1] >= 13.995) {
                                            var30 = 0.18225461;
                                        } else {
                                            var30 = -0.033305105;
                                        }
                                    } else {
                                        if (input[45] >= 1.0) {
                                            var30 = 0.065263174;
                                        } else {
                                            var30 = -0.28775963;
                                        }
                                    }
                                } else {
                                    if (input[37] >= 1.0) {
                                        if (input[0] >= 4.955) {
                                            var30 = 0.24750279;
                                        } else {
                                            var30 = -0.12076491;
                                        }
                                    } else {
                                        if (input[11] >= 1.0) {
                                            var30 = 0.21319231;
                                        } else {
                                            var30 = -0.12901916;
                                        }
                                    }
                                }
                            } else {
                                if (input[51] >= 1.0) {
                                    if (input[3] >= 1.0) {
                                        var30 = -0.027186835;
                                    } else {
                                        var30 = -0.18434095;
                                    }
                                } else {
                                    if (input[1] >= 4.435) {
                                        if (input[0] >= 1.745) {
                                            var30 = 0.07982448;
                                        } else {
                                            var30 = -0.12595893;
                                        }
                                    } else {
                                        var30 = 0.22096227;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] >= 16.285) {
                        if (input[88] >= 1.0) {
                            var30 = 0.13290165;
                        } else {
                            if (input[0] >= 8.715) {
                                var30 = -0.21416181;
                            } else {
                                var30 = 0.0008243685;
                            }
                        }
                    } else {
                        if (input[45] >= 1.0) {
                            var30 = -0.17569134;
                        } else {
                            if (input[60] >= 1.0) {
                                var30 = -0.160121;
                            } else {
                                if (input[55] >= 1.0) {
                                    var30 = 0.0014141513;
                                } else {
                                    if (input[59] >= 1.0) {
                                        var30 = 0.0493288;
                                    } else {
                                        if (input[32] >= 1.0) {
                                            var30 = 0.07486817;
                                        } else {
                                            var30 = 0.25882724;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var31;
    if (input[83] >= 1.0) {
        var31 = 0.16108109;
    } else {
        if (input[67] >= 1.0) {
            var31 = 0.18012281;
        } else {
            if (input[39] >= 1.0) {
                if (input[17] >= 1.0) {
                    var31 = 0.15693542;
                } else {
                    var31 = -0.22760291;
                }
            } else {
                if (input[87] >= 1.0) {
                    if (input[44] >= 1.0) {
                        var31 = 0.24103977;
                    } else {
                        if (input[5] >= 1.0) {
                            var31 = 0.16711435;
                        } else {
                            if (input[58] >= 1.0) {
                                if (input[2] >= 3.065) {
                                    var31 = -0.04385884;
                                } else {
                                    var31 = -0.19073218;
                                }
                            } else {
                                if (input[40] >= 1.0) {
                                    if (input[0] >= 7.685) {
                                        var31 = -0.0068951785;
                                    } else {
                                        var31 = -0.15388012;
                                    }
                                } else {
                                    var31 = 0.15759942;
                                }
                            }
                        }
                    }
                } else {
                    if (input[47] >= 1.0) {
                        if (input[2] >= 6.755) {
                            if (input[18] >= 1.0) {
                                if (input[1] >= 5.815) {
                                    var31 = -0.20445184;
                                } else {
                                    var31 = -0.0010993538;
                                }
                            } else {
                                if (input[56] >= 1.0) {
                                    var31 = -0.21358871;
                                } else {
                                    if (input[1] >= 3.995) {
                                        if (input[60] >= 1.0) {
                                            var31 = -0.18022789;
                                        } else {
                                            var31 = 0.05782097;
                                        }
                                    } else {
                                        var31 = -0.15898603;
                                    }
                                }
                            }
                        } else {
                            if (input[2] >= 1.795) {
                                if (input[0] >= 3.8449998) {
                                    var31 = 0.094592504;
                                } else {
                                    var31 = 0.24733377;
                                }
                            } else {
                                if (input[0] >= 0.805) {
                                    if (input[0] >= 1.355) {
                                        var31 = -0.025808308;
                                    } else {
                                        var31 = -0.16334759;
                                    }
                                } else {
                                    var31 = 0.10920609;
                                }
                            }
                        }
                    } else {
                        if (input[30] >= 1.0) {
                            var31 = 0.19359;
                        } else {
                            if (input[4] >= 1.0) {
                                var31 = 0.19373503;
                            } else {
                                if (input[53] >= 1.0) {
                                    if (input[13] >= 1.0) {
                                        var31 = -0.13012445;
                                    } else {
                                        if (input[2] >= 5.0150003) {
                                            var31 = 0.15756306;
                                        } else {
                                            var31 = -0.02245829;
                                        }
                                    }
                                } else {
                                    if (input[65] >= 1.0) {
                                        if (input[2] >= 23.974998) {
                                            var31 = 0.07605451;
                                        } else {
                                            var31 = -0.10892991;
                                        }
                                    } else {
                                        if (input[41] >= 1.0) {
                                            var31 = -0.14032574;
                                        } else {
                                            var31 = 0.15741473;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var32;
    if (input[27] >= 1.0) {
        if (input[38] >= 1.0) {
            if (input[88] >= 1.0) {
                if (input[1] >= 11.195) {
                    var32 = -0.089592345;
                } else {
                    var32 = 0.1490223;
                }
            } else {
                var32 = -0.21634217;
            }
        } else {
            if (input[94] >= 1.0) {
                var32 = -0.2001416;
            } else {
                if (input[9] >= 1.0) {
                    if (input[40] >= 1.0) {
                        if (input[2] >= 23.970001) {
                            if (input[1] >= 10.49) {
                                var32 = -0.10051559;
                            } else {
                                var32 = 0.1524855;
                            }
                        } else {
                            var32 = -0.19012986;
                        }
                    } else {
                        if (input[0] >= 6.295) {
                            if (input[21] >= 1.0) {
                                var32 = 0.006773181;
                            } else {
                                var32 = 0.19855323;
                            }
                        } else {
                            if (input[0] >= 4.165) {
                                if (input[2] >= 6.525) {
                                    var32 = 0.015445586;
                                } else {
                                    var32 = -0.08187042;
                                }
                            } else {
                                if (input[0] >= 1.81) {
                                    var32 = 0.15505436;
                                } else {
                                    var32 = 0.002781023;
                                }
                            }
                        }
                    }
                } else {
                    if (input[41] >= 1.0) {
                        var32 = -0.22415511;
                    } else {
                        if (input[44] >= 1.0) {
                            if (input[86] >= 1.0) {
                                if (input[74] >= 1.0) {
                                    var32 = -0.18139589;
                                } else {
                                    var32 = -0.023055598;
                                }
                            } else {
                                if (input[55] >= 1.0) {
                                    var32 = 0.06806825;
                                } else {
                                    var32 = 0.23110066;
                                }
                            }
                        } else {
                            if (input[40] >= 1.0) {
                                var32 = 0.10566288;
                            } else {
                                if (input[58] >= 1.0) {
                                    var32 = -0.21268159;
                                } else {
                                    if (input[43] >= 1.0) {
                                        var32 = 0.15388767;
                                    } else {
                                        if (input[1] >= 4.875) {
                                            var32 = -0.16077513;
                                        } else {
                                            var32 = 0.055996906;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[43] >= 1.0) {
                if (input[5] >= 1.0) {
                    var32 = -0.10178787;
                } else {
                    if (input[2] >= 5.24) {
                        if (input[2] >= 17.49) {
                            var32 = 0.03829177;
                        } else {
                            var32 = 0.23752584;
                        }
                    } else {
                        if (input[51] >= 1.0) {
                            var32 = -0.13522603;
                        } else {
                            var32 = 0.0746432;
                        }
                    }
                }
            } else {
                if (input[2] >= 30.494999) {
                    var32 = 0.1814429;
                } else {
                    if (input[2] >= 11.985) {
                        if (input[42] >= 1.0) {
                            if (input[21] >= 1.0) {
                                var32 = 0.21179546;
                            } else {
                                if (input[1] >= 6.3199997) {
                                    if (input[0] >= 6.825) {
                                        var32 = -0.18906769;
                                    } else {
                                        var32 = -0.025528619;
                                    }
                                } else {
                                    var32 = 0.071902424;
                                }
                            }
                        } else {
                            if (input[34] >= 1.0) {
                                if (input[1] >= 8.825) {
                                    var32 = 0.082533844;
                                } else {
                                    var32 = -0.25122428;
                                }
                            } else {
                                if (input[32] >= 1.0) {
                                    var32 = -0.1079674;
                                } else {
                                    if (input[97] >= 1.0) {
                                        if (input[2] >= 18.34) {
                                            var32 = 0.11361943;
                                        } else {
                                            var32 = -0.13823357;
                                        }
                                    } else {
                                        var32 = 0.17510858;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[56] >= 1.0) {
                            var32 = -0.18497327;
                        } else {
                            if (input[10] >= 1.0) {
                                if (input[0] >= 4.585) {
                                    var32 = 0.08494938;
                                } else {
                                    var32 = -0.21301304;
                                }
                            } else {
                                if (input[32] >= 1.0) {
                                    if (input[0] >= 3.9250002) {
                                        var32 = -0.18295777;
                                    } else {
                                        if (input[45] >= 1.0) {
                                            var32 = -0.05611086;
                                        } else {
                                            var32 = 0.16226996;
                                        }
                                    }
                                } else {
                                    if (input[0] >= 5.885) {
                                        var32 = 0.20420125;
                                    } else {
                                        if (input[58] >= 1.0) {
                                            var32 = 0.1721595;
                                        } else {
                                            var32 = -0.03250544;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[40] >= 1.0) {
                var32 = -0.1457532;
            } else {
                if (input[28] >= 1.0) {
                    if (input[81] >= 1.0) {
                        var32 = -0.14776625;
                    } else {
                        var32 = 0.00838142;
                    }
                } else {
                    if (input[71] >= 1.0) {
                        if (input[0] >= 4.575) {
                            var32 = -0.15284416;
                        } else {
                            var32 = 0.10515342;
                        }
                    } else {
                        if (input[0] >= 2.4650002) {
                            if (input[115] >= 1.0) {
                                var32 = 0.24974935;
                            } else {
                                var32 = 0.025116777;
                            }
                        } else {
                            var32 = -0.021847013;
                        }
                    }
                }
            }
        }
    }
    double var33;
    if (input[86] >= 1.0) {
        if (input[58] >= 1.0) {
            if (input[0] >= 4.455) {
                if (input[45] >= 1.0) {
                    var33 = 0.19972646;
                } else {
                    if (input[97] >= 1.0) {
                        if (input[0] >= 5.0600004) {
                            if (input[65] >= 1.0) {
                                var33 = -0.24215673;
                            } else {
                                var33 = -0.028525123;
                            }
                        } else {
                            var33 = 0.01709339;
                        }
                    } else {
                        if (input[34] >= 1.0) {
                            if (input[2] >= 13.434999) {
                                var33 = 0.20513527;
                            } else {
                                var33 = 0.019829132;
                            }
                        } else {
                            var33 = -0.069101624;
                        }
                    }
                }
            } else {
                if (input[45] >= 1.0) {
                    var33 = -0.08180373;
                } else {
                    if (input[1] >= 5.855) {
                        var33 = -0.027761206;
                    } else {
                        var33 = 0.23282501;
                    }
                }
            }
        } else {
            if (input[4] >= 1.0) {
                var33 = 0.16463506;
            } else {
                if (input[21] >= 1.0) {
                    if (input[0] >= 5.615) {
                        if (input[0] >= 9.32) {
                            var33 = -0.080197826;
                        } else {
                            if (input[42] >= 1.0) {
                                var33 = 0.23244923;
                            } else {
                                var33 = 0.047730744;
                            }
                        }
                    } else {
                        var33 = -0.18232064;
                    }
                } else {
                    if (input[43] >= 1.0) {
                        if (input[1] >= 7.355) {
                            var33 = 0.19836329;
                        } else {
                            if (input[2] >= 1.505) {
                                var33 = -0.15959017;
                            } else {
                                var33 = 0.01886636;
                            }
                        }
                    } else {
                        if (input[0] >= 4.5600004) {
                            var33 = -0.24783204;
                        } else {
                            var33 = 0.0743068;
                        }
                    }
                }
            }
        }
    } else {
        if (input[58] >= 1.0) {
            if (input[37] >= 1.0) {
                if (input[44] >= 1.0) {
                    var33 = 0.20004626;
                } else {
                    var33 = -0.077148534;
                }
            } else {
                if (input[0] >= 5.135) {
                    if (input[2] >= 25.720001) {
                        var33 = -0.030267347;
                    } else {
                        var33 = -0.2060748;
                    }
                } else {
                    if (input[1] >= 4.165) {
                        if (input[0] >= 2.075) {
                            if (input[36] >= 1.0) {
                                var33 = 0.13377923;
                            } else {
                                var33 = -0.099338196;
                            }
                        } else {
                            var33 = -0.18182784;
                        }
                    } else {
                        var33 = 0.09096499;
                    }
                }
            }
        } else {
            if (input[43] >= 1.0) {
                var33 = 0.22008622;
            } else {
                if (input[56] >= 1.0) {
                    var33 = -0.13347392;
                } else {
                    if (input[40] >= 1.0) {
                        if (input[2] >= 23.505001) {
                            if (input[0] >= 23.885) {
                                var33 = -0.07543567;
                            } else {
                                if (input[1] >= 9.43) {
                                    var33 = -0.04603381;
                                } else {
                                    var33 = 0.22511016;
                                }
                            }
                        } else {
                            if (input[59] >= 1.0) {
                                var33 = -0.21336864;
                            } else {
                                if (input[0] >= 4.875) {
                                    var33 = 0.028360093;
                                } else {
                                    var33 = -0.1475625;
                                }
                            }
                        }
                    } else {
                        if (input[59] >= 1.0) {
                            if (input[1] >= 7.7349997) {
                                if (input[0] >= 7.765) {
                                    var33 = 0.03056329;
                                } else {
                                    var33 = -0.122703545;
                                }
                            } else {
                                var33 = 0.23850282;
                            }
                        } else {
                            if (input[10] >= 1.0) {
                                if (input[0] >= 4.4049997) {
                                    var33 = 0.123650946;
                                } else {
                                    var33 = -0.21617323;
                                }
                            } else {
                                if (input[39] >= 1.0) {
                                    if (input[2] >= 6.5950003) {
                                        if (input[87] >= 1.0) {
                                            var33 = -0.1805369;
                                        } else {
                                            var33 = -0.038190596;
                                        }
                                    } else {
                                        var33 = 0.094682746;
                                    }
                                } else {
                                    if (input[12] >= 1.0) {
                                        if (input[9] >= 1.0) {
                                            var33 = 0.06512586;
                                        } else {
                                            var33 = -0.16260837;
                                        }
                                    } else {
                                        if (input[34] >= 1.0) {
                                            var33 = 0.061749317;
                                        } else {
                                            var33 = 0.23201717;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var34;
    if (input[63] >= 1.0) {
        var34 = 0.16019434;
    } else {
        if (input[61] >= 1.0) {
            var34 = 0.15773623;
        } else {
            if (input[27] >= 1.0) {
                if (input[2] >= 5.705) {
                    if (input[36] >= 1.0) {
                        if (input[53] >= 1.0) {
                            var34 = 0.1497539;
                        } else {
                            if (input[2] >= 20.365) {
                                var34 = 0.06724974;
                            } else {
                                var34 = -0.067414016;
                            }
                        }
                    } else {
                        if (input[0] >= 6.645) {
                            if (input[1] >= 7.565) {
                                if (input[88] >= 1.0) {
                                    var34 = 0.048824504;
                                } else {
                                    if (input[0] >= 9.184999) {
                                        var34 = -0.17944227;
                                    } else {
                                        if (input[74] >= 1.0) {
                                            var34 = 0.07666799;
                                        } else {
                                            var34 = -0.14074452;
                                        }
                                    }
                                }
                            } else {
                                if (input[58] >= 1.0) {
                                    var34 = -0.09144855;
                                } else {
                                    if (input[81] >= 1.0) {
                                        if (input[1] >= 6.685) {
                                            var34 = 0.028803892;
                                        } else {
                                            var34 = 0.15914905;
                                        }
                                    } else {
                                        var34 = -0.0036761325;
                                    }
                                }
                            }
                        } else {
                            if (input[34] >= 1.0) {
                                if (input[97] >= 1.0) {
                                    var34 = -0.21422912;
                                } else {
                                    var34 = -0.039105505;
                                }
                            } else {
                                var34 = 0.03429706;
                            }
                        }
                    }
                } else {
                    if (input[45] >= 1.0) {
                        var34 = -0.11098014;
                    } else {
                        if (input[74] >= 1.0) {
                            if (input[2] >= 1.845) {
                                if (input[86] >= 1.0) {
                                    var34 = -0.05193797;
                                } else {
                                    var34 = 0.16220689;
                                }
                            } else {
                                var34 = -0.12715967;
                            }
                        } else {
                            if (input[9] >= 1.0) {
                                var34 = 0.021163331;
                            } else {
                                var34 = 0.19853535;
                            }
                        }
                    }
                }
            } else {
                if (input[73] >= 1.0) {
                    var34 = 0.13527702;
                } else {
                    if (input[107] >= 1.0) {
                        var34 = -0.1524998;
                    } else {
                        if (input[43] >= 1.0) {
                            if (input[5] >= 1.0) {
                                var34 = -0.0824289;
                            } else {
                                if (input[0] >= 3.295) {
                                    if (input[2] >= 16.935001) {
                                        var34 = 0.047215603;
                                    } else {
                                        var34 = 0.2168526;
                                    }
                                } else {
                                    if (input[0] >= 0.96500003) {
                                        var34 = -0.0767547;
                                    } else {
                                        var34 = 0.052744336;
                                    }
                                }
                            }
                        } else {
                            if (input[0] >= 3.4850001) {
                                if (input[23] >= 1.0) {
                                    var34 = 0.13641751;
                                } else {
                                    if (input[20] >= 1.0) {
                                        if (input[2] >= 8.17) {
                                            var34 = -0.17838249;
                                        } else {
                                            var34 = -0.045966756;
                                        }
                                    } else {
                                        if (input[2] >= 29.3) {
                                            var34 = 0.14490618;
                                        } else {
                                            var34 = -0.02344695;
                                        }
                                    }
                                }
                            } else {
                                if (input[34] >= 1.0) {
                                    if (input[33] >= 1.0) {
                                        if (input[0] >= 1.505) {
                                            var34 = -0.10174908;
                                        } else {
                                            var34 = 0.08255037;
                                        }
                                    } else {
                                        if (input[120] >= 1.0) {
                                            var34 = -0.046701446;
                                        } else {
                                            var34 = 0.16512519;
                                        }
                                    }
                                } else {
                                    var34 = -0.11504051;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var35;
    if (input[15] >= 1.0) {
        var35 = 0.13446239;
    } else {
        if (input[45] >= 1.0) {
            if (input[2] >= 13.469999) {
                if (input[0] >= 10.01) {
                    var35 = -0.06703213;
                } else {
                    var35 = 0.123261385;
                }
            } else {
                if (input[2] >= 2.7849998) {
                    if (input[42] >= 1.0) {
                        var35 = 0.042546578;
                    } else {
                        var35 = -0.19082105;
                    }
                } else {
                    var35 = 0.021859154;
                }
            }
        } else {
            if (input[60] >= 1.0) {
                if (input[96] >= 1.0) {
                    if (input[0] >= 6.315) {
                        var35 = -0.077444576;
                    } else {
                        var35 = 0.10133299;
                    }
                } else {
                    var35 = -0.19917114;
                }
            } else {
                if (input[97] >= 1.0) {
                    if (input[65] >= 1.0) {
                        if (input[11] >= 1.0) {
                            if (input[42] >= 1.0) {
                                var35 = 0.03458676;
                            } else {
                                var35 = 0.16962343;
                            }
                        } else {
                            if (input[34] >= 1.0) {
                                if (input[55] >= 1.0) {
                                    if (input[1] >= 4.335) {
                                        var35 = 0.18739495;
                                    } else {
                                        var35 = 0.03711699;
                                    }
                                } else {
                                    if (input[59] >= 1.0) {
                                        if (input[1] >= 7.74) {
                                            var35 = -0.11043717;
                                        } else {
                                            var35 = 0.15035953;
                                        }
                                    } else {
                                        if (input[2] >= 9.135) {
                                            var35 = -0.15845546;
                                        } else {
                                            var35 = -0.011696989;
                                        }
                                    }
                                }
                            } else {
                                if (input[37] >= 1.0) {
                                    if (input[86] >= 1.0) {
                                        var35 = -0.16863598;
                                    } else {
                                        if (input[55] >= 1.0) {
                                            var35 = -0.11649912;
                                        } else {
                                            var35 = 0.22558971;
                                        }
                                    }
                                } else {
                                    var35 = -0.24226823;
                                }
                            }
                        }
                    } else {
                        if (input[0] >= 11.08) {
                            var35 = -0.053311665;
                        } else {
                            var35 = 0.21579947;
                        }
                    }
                } else {
                    if (input[2] >= 15.905) {
                        if (input[94] >= 1.0) {
                            var35 = 0.062480364;
                        } else {
                            if (input[0] >= 9.565001) {
                                var35 = -0.1594106;
                            } else {
                                var35 = 0.012950977;
                            }
                        }
                    } else {
                        if (input[105] >= 1.0) {
                            var35 = -0.0689477;
                        } else {
                            if (input[32] >= 1.0) {
                                var35 = 0.035390787;
                            } else {
                                var35 = 0.21774669;
                            }
                        }
                    }
                }
            }
        }
    }
    double var36;
    if (input[31] >= 1.0) {
        if (input[36] >= 1.0) {
            var36 = 0.18802793;
        } else {
            var36 = -0.07986424;
        }
    } else {
        if (input[83] >= 1.0) {
            var36 = 0.1246511;
        } else {
            if (input[19] >= 1.0) {
                if (input[2] >= 10.030001) {
                    var36 = -0.16105253;
                } else {
                    var36 = -0.028432798;
                }
            } else {
                if (input[2] >= 27.015) {
                    if (input[74] >= 1.0) {
                        if (input[40] >= 1.0) {
                            var36 = 0.17659831;
                        } else {
                            var36 = -0.0053239544;
                        }
                    } else {
                        var36 = -0.07259592;
                    }
                } else {
                    if (input[40] >= 1.0) {
                        if (input[2] >= 18.95) {
                            var36 = 0.014423449;
                        } else {
                            var36 = -0.16931869;
                        }
                    } else {
                        if (input[87] >= 1.0) {
                            if (input[58] >= 1.0) {
                                if (input[2] >= 3.1550002) {
                                    var36 = 0.03760699;
                                } else {
                                    var36 = -0.1717446;
                                }
                            } else {
                                if (input[39] >= 1.0) {
                                    var36 = 0.046056576;
                                } else {
                                    var36 = 0.22374909;
                                }
                            }
                        } else {
                            if (input[2] >= 3.6750002) {
                                if (input[71] >= 1.0) {
                                    var36 = -0.1736909;
                                } else {
                                    if (input[42] >= 1.0) {
                                        if (input[9] >= 1.0) {
                                            var36 = -0.036431074;
                                        } else {
                                            var36 = 0.13829185;
                                        }
                                    } else {
                                        if (input[5] >= 1.0) {
                                            var36 = -0.13572386;
                                        } else {
                                            var36 = 0.003006777;
                                        }
                                    }
                                }
                            } else {
                                if (input[9] >= 1.0) {
                                    if (input[2] >= 1.1800001) {
                                        var36 = 0.19537616;
                                    } else {
                                        var36 = 0.061989773;
                                    }
                                } else {
                                    if (input[12] >= 1.0) {
                                        var36 = -0.14707826;
                                    } else {
                                        if (input[20] >= 1.0) {
                                            var36 = -0.07800677;
                                        } else {
                                            var36 = 0.16879244;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var37;
    if (input[67] >= 1.0) {
        var37 = 0.15066107;
    } else {
        if (input[15] >= 1.0) {
            var37 = 0.12429762;
        } else {
            if (input[125] >= 1.0) {
                var37 = -0.11122523;
            } else {
                if (input[43] >= 1.0) {
                    if (input[2] >= 18.365002) {
                        var37 = -0.12156945;
                    } else {
                        if (input[0] >= 3.4650002) {
                            if (input[0] >= 8.275) {
                                var37 = 0.036993217;
                            } else {
                                var37 = 0.1806679;
                            }
                        } else {
                            if (input[47] >= 1.0) {
                                var37 = 0.065715015;
                            } else {
                                var37 = -0.06197746;
                            }
                        }
                    }
                } else {
                    if (input[31] >= 1.0) {
                        if (input[0] >= 4.995) {
                            var37 = -0.0052194656;
                        } else {
                            var37 = 0.1440449;
                        }
                    } else {
                        if (input[86] >= 1.0) {
                            if (input[0] >= 3.545) {
                                if (input[88] >= 1.0) {
                                    if (input[0] >= 8.205) {
                                        var37 = 0.17067347;
                                    } else {
                                        var37 = -0.017235786;
                                    }
                                } else {
                                    if (input[42] >= 1.0) {
                                        if (input[2] >= 5.2) {
                                            var37 = 0.0997739;
                                        } else {
                                            var37 = -0.2091055;
                                        }
                                    } else {
                                        if (input[97] >= 1.0) {
                                            var37 = -0.20801377;
                                        } else {
                                            var37 = -0.045150112;
                                        }
                                    }
                                }
                            } else {
                                if (input[117] >= 1.0) {
                                    var37 = 0.16097692;
                                } else {
                                    var37 = 0.050490722;
                                }
                            }
                        } else {
                            if (input[0] >= 9.045) {
                                if (input[1] >= 7.0150003) {
                                    if (input[55] >= 1.0) {
                                        var37 = 0.1282826;
                                    } else {
                                        if (input[81] >= 1.0) {
                                            var37 = -0.07651076;
                                        } else {
                                            var37 = 0.06780917;
                                        }
                                    }
                                } else {
                                    if (input[124] >= 1.0) {
                                        var37 = 0.17997225;
                                    } else {
                                        var37 = 0.054968886;
                                    }
                                }
                            } else {
                                if (input[40] >= 1.0) {
                                    var37 = -0.15475243;
                                } else {
                                    if (input[59] >= 1.0) {
                                        if (input[1] >= 7.7349997) {
                                            var37 = -0.09385522;
                                        } else {
                                            var37 = 0.20610623;
                                        }
                                    } else {
                                        if (input[83] >= 1.0) {
                                            var37 = 0.13900292;
                                        } else {
                                            var37 = -0.027904535;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var38;
    if (input[14] >= 1.0) {
        var38 = 0.10897634;
    } else {
        if (input[73] >= 1.0) {
            if (input[41] >= 1.0) {
                var38 = 0.18006605;
            } else {
                if (input[97] >= 1.0) {
                    var38 = -0.16627172;
                } else {
                    var38 = 0.110280804;
                }
            }
        } else {
            if (input[127] >= 1.0) {
                if (input[81] >= 1.0) {
                    var38 = 0.024609102;
                } else {
                    var38 = -0.13421248;
                }
            } else {
                if (input[107] >= 1.0) {
                    if (input[2] >= 9.575001) {
                        var38 = -0.16053374;
                    } else {
                        var38 = 0.018146956;
                    }
                } else {
                    if (input[65] >= 1.0) {
                        if (input[97] >= 1.0) {
                            if (input[11] >= 1.0) {
                                var38 = 0.10145501;
                            } else {
                                if (input[40] >= 1.0) {
                                    if (input[2] >= 24.42) {
                                        if (input[1] >= 6.2349997) {
                                            var38 = -0.12348171;
                                        } else {
                                            var38 = 0.087713726;
                                        }
                                    } else {
                                        var38 = -0.19869594;
                                    }
                                } else {
                                    if (input[86] >= 1.0) {
                                        if (input[1] >= 8.895) {
                                            var38 = 0.11546562;
                                        } else {
                                            var38 = -0.06016835;
                                        }
                                    } else {
                                        if (input[44] >= 1.0) {
                                            var38 = 0.076493464;
                                        } else {
                                            var38 = -0.015309361;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[21] >= 1.0) {
                                var38 = 0.20010583;
                            } else {
                                if (input[0] >= 4.665) {
                                    if (input[1] >= 7.275) {
                                        var38 = 0.0392154;
                                    } else {
                                        var38 = -0.13379028;
                                    }
                                } else {
                                    var38 = 0.12689896;
                                }
                            }
                        }
                    } else {
                        if (input[100] >= 1.0) {
                            if (input[116] >= 1.0) {
                                var38 = 0.1820752;
                            } else {
                                var38 = 0.014067417;
                            }
                        } else {
                            if (input[20] >= 1.0) {
                                var38 = 0.02643178;
                            } else {
                                var38 = -0.14506625;
                            }
                        }
                    }
                }
            }
        }
    }
    double var39;
    if (input[15] >= 1.0) {
        var39 = 0.119954094;
    } else {
        if (input[78] >= 1.0) {
            if (input[74] >= 1.0) {
                var39 = -0.12326855;
            } else {
                var39 = 0.016341269;
            }
        } else {
            if (input[72] >= 1.0) {
                if (input[1] >= 5.435) {
                    var39 = -0.17162988;
                } else {
                    var39 = 0.09635005;
                }
            } else {
                if (input[13] >= 1.0) {
                    if (input[2] >= 15.48) {
                        var39 = 0.08415508;
                    } else {
                        var39 = -0.15650618;
                    }
                } else {
                    if (input[2] >= 14.855) {
                        if (input[44] >= 1.0) {
                            if (input[86] >= 1.0) {
                                var39 = -0.21888058;
                            } else {
                                if (input[21] >= 1.0) {
                                    var39 = -0.1535003;
                                } else {
                                    var39 = 0.16652349;
                                }
                            }
                        } else {
                            if (input[100] >= 1.0) {
                                if (input[53] >= 1.0) {
                                    var39 = -0.103620134;
                                } else {
                                    if (input[6] >= 1.0) {
                                        var39 = -0.06472572;
                                    } else {
                                        if (input[2] >= 47.87) {
                                            var39 = -0.04845362;
                                        } else {
                                            var39 = 0.14603448;
                                        }
                                    }
                                }
                            } else {
                                if (input[81] >= 1.0) {
                                    var39 = -0.16084285;
                                } else {
                                    if (input[58] >= 1.0) {
                                        var39 = 0.046262573;
                                    } else {
                                        var39 = -0.071622685;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[45] >= 1.0) {
                            if (input[1] >= 3.5749998) {
                                if (input[0] >= 3.4650002) {
                                    if (input[5] >= 1.0) {
                                        var39 = 0.072563834;
                                    } else {
                                        var39 = -0.07170772;
                                    }
                                } else {
                                    var39 = -0.14967309;
                                }
                            } else {
                                var39 = 0.05265025;
                            }
                        } else {
                            if (input[56] >= 1.0) {
                                var39 = -0.09802487;
                            } else {
                                if (input[37] >= 1.0) {
                                    if (input[55] >= 1.0) {
                                        var39 = -0.07399303;
                                    } else {
                                        if (input[1] >= 2.995) {
                                            var39 = 0.20799546;
                                        } else {
                                            var39 = -0.0005968036;
                                        }
                                    }
                                } else {
                                    if (input[60] >= 1.0) {
                                        var39 = -0.13962021;
                                    } else {
                                        if (input[76] >= 1.0) {
                                            var39 = -0.1218358;
                                        } else {
                                            var39 = 0.062287208;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var40;
    if (input[27] >= 1.0) {
        if (input[38] >= 1.0) {
            if (input[88] >= 1.0) {
                var40 = 0.040620197;
            } else {
                var40 = -0.18834913;
            }
        } else {
            if (input[94] >= 1.0) {
                var40 = -0.14846289;
            } else {
                if (input[9] >= 1.0) {
                    if (input[40] >= 1.0) {
                        if (input[2] >= 24.66) {
                            var40 = 0.021348493;
                        } else {
                            var40 = -0.1173706;
                        }
                    } else {
                        if (input[42] >= 1.0) {
                            var40 = -0.012239044;
                        } else {
                            if (input[81] >= 1.0) {
                                var40 = 0.17165488;
                            } else {
                                if (input[47] >= 1.0) {
                                    var40 = -0.029188218;
                                } else {
                                    var40 = 0.09263745;
                                }
                            }
                        }
                    }
                } else {
                    if (input[41] >= 1.0) {
                        var40 = -0.16850165;
                    } else {
                        if (input[58] >= 1.0) {
                            if (input[44] >= 1.0) {
                                var40 = 0.013816697;
                            } else {
                                var40 = -0.12529738;
                            }
                        } else {
                            if (input[0] >= 4.275) {
                                if (input[1] >= 6.455) {
                                    var40 = 0.03160236;
                                } else {
                                    var40 = 0.14931402;
                                }
                            } else {
                                if (input[20] >= 1.0) {
                                    var40 = -0.11982781;
                                } else {
                                    if (input[2] >= 5.185) {
                                        var40 = -0.0902737;
                                    } else {
                                        var40 = 0.09629285;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[47] >= 1.0) {
                if (input[56] >= 1.0) {
                    var40 = -0.1701346;
                } else {
                    if (input[24] >= 1.0) {
                        if (input[1] >= 5.295) {
                            var40 = 0.013124461;
                        } else {
                            var40 = -0.15565121;
                        }
                    } else {
                        if (input[53] >= 1.0) {
                            var40 = -0.11853311;
                        } else {
                            if (input[32] >= 1.0) {
                                if (input[20] >= 1.0) {
                                    var40 = 0.09674582;
                                } else {
                                    var40 = -0.14889875;
                                }
                            } else {
                                if (input[34] >= 1.0) {
                                    if (input[2] >= 10.735) {
                                        var40 = 0.047839493;
                                    } else {
                                        var40 = 0.25943866;
                                    }
                                } else {
                                    var40 = 0.03986171;
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[36] >= 1.0) {
                    if (input[0] >= 2.9099998) {
                        var40 = -0.22051449;
                    } else {
                        var40 = -0.056426685;
                    }
                } else {
                    if (input[2] >= 4.455) {
                        if (input[2] >= 14.845) {
                            if (input[58] >= 1.0) {
                                var40 = 0.018911919;
                            } else {
                                if (input[37] >= 1.0) {
                                    var40 = -0.03654228;
                                } else {
                                    var40 = -0.15023205;
                                }
                            }
                        } else {
                            if (input[44] >= 1.0) {
                                if (input[34] >= 1.0) {
                                    if (input[32] >= 1.0) {
                                        var40 = 0.0112321135;
                                    } else {
                                        if (input[0] >= 8.295) {
                                            var40 = 0.028108336;
                                        } else {
                                            var40 = 0.23669687;
                                        }
                                    }
                                } else {
                                    if (input[0] >= 4.46) {
                                        var40 = 0.051934775;
                                    } else {
                                        var40 = -0.07916218;
                                    }
                                }
                            } else {
                                if (input[2] >= 6.435) {
                                    var40 = -0.17212394;
                                } else {
                                    var40 = 0.03651725;
                                }
                            }
                        }
                    } else {
                        if (input[0] >= 3.6750002) {
                            var40 = -0.1465222;
                        } else {
                            var40 = -0.012631782;
                        }
                    }
                }
            }
        } else {
            if (input[0] >= 4.865) {
                if (input[9] >= 1.0) {
                    if (input[41] >= 1.0) {
                        var40 = 0.15874735;
                    } else {
                        var40 = -0.035806127;
                    }
                } else {
                    if (input[1] >= 6.215) {
                        var40 = -0.11364335;
                    } else {
                        var40 = -0.000029062245;
                    }
                }
            } else {
                if (input[2] >= 2.6550002) {
                    var40 = 0.19277321;
                } else {
                    var40 = 0.02591344;
                }
            }
        }
    }
    double var41;
    if (input[15] >= 1.0) {
        var41 = 0.10659773;
    } else {
        if (input[65] >= 1.0) {
            if (input[97] >= 1.0) {
                if (input[86] >= 1.0) {
                    if (input[117] >= 1.0) {
                        if (input[44] >= 1.0) {
                            var41 = 0.16908526;
                        } else {
                            var41 = -0.054946512;
                        }
                    } else {
                        if (input[37] >= 1.0) {
                            var41 = -0.21659699;
                        } else {
                            if (input[44] >= 1.0) {
                                if (input[9] >= 1.0) {
                                    var41 = -0.21992178;
                                } else {
                                    if (input[2] >= 7.1949997) {
                                        var41 = 0.15067081;
                                    } else {
                                        var41 = -0.1568476;
                                    }
                                }
                            } else {
                                if (input[24] >= 1.0) {
                                    var41 = -0.17126846;
                                } else {
                                    if (input[58] >= 1.0) {
                                        if (input[2] >= 9.835) {
                                            var41 = 0.025851412;
                                        } else {
                                            var41 = 0.16077837;
                                        }
                                    } else {
                                        if (input[43] >= 1.0) {
                                            var41 = 0.07877438;
                                        } else {
                                            var41 = -0.10121064;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[58] >= 1.0) {
                        if (input[37] >= 1.0) {
                            var41 = 0.092432134;
                        } else {
                            if (input[1] >= 4.245) {
                                var41 = -0.17393515;
                            } else {
                                var41 = 0.010077924;
                            }
                        }
                    } else {
                        if (input[2] >= 5.135) {
                            if (input[0] >= 4.7349997) {
                                if (input[1] >= 8.055) {
                                    if (input[9] >= 1.0) {
                                        var41 = -0.00012495353;
                                    } else {
                                        var41 = -0.15075077;
                                    }
                                } else {
                                    if (input[20] >= 1.0) {
                                        var41 = -0.091444895;
                                    } else {
                                        if (input[53] >= 1.0) {
                                            var41 = -0.04252971;
                                        } else {
                                            var41 = 0.12140391;
                                        }
                                    }
                                }
                            } else {
                                if (input[74] >= 1.0) {
                                    if (input[17] >= 1.0) {
                                        var41 = 0.026964264;
                                    } else {
                                        if (input[1] >= 4.075) {
                                            var41 = -0.17505038;
                                        } else {
                                            var41 = -0.049906112;
                                        }
                                    }
                                } else {
                                    var41 = 0.065012716;
                                }
                            }
                        } else {
                            if (input[36] >= 1.0) {
                                if (input[81] >= 1.0) {
                                    var41 = -0.074429594;
                                } else {
                                    var41 = 0.065164454;
                                }
                            } else {
                                var41 = 0.18686083;
                            }
                        }
                    }
                }
            } else {
                if (input[21] >= 1.0) {
                    var41 = 0.17445195;
                } else {
                    if (input[2] >= 11.365) {
                        if (input[94] >= 1.0) {
                            var41 = 0.014619147;
                        } else {
                            var41 = -0.14112926;
                        }
                    } else {
                        if (input[0] >= 4.675) {
                            var41 = 0.010783287;
                        } else {
                            var41 = 0.15866417;
                        }
                    }
                }
            }
        } else {
            if (input[100] >= 1.0) {
                if (input[0] >= 9.635) {
                    var41 = -0.0031991298;
                } else {
                    if (input[60] >= 1.0) {
                        var41 = 0.04578725;
                    } else {
                        var41 = 0.19392896;
                    }
                }
            } else {
                if (input[60] >= 1.0) {
                    var41 = -0.16248076;
                } else {
                    var41 = 0.032349396;
                }
            }
        }
    }
    double var42;
    if (input[27] >= 1.0) {
        if (input[38] >= 1.0) {
            if (input[88] >= 1.0) {
                var42 = 0.03011665;
            } else {
                var42 = -0.16584472;
            }
        } else {
            if (input[94] >= 1.0) {
                var42 = -0.12564138;
            } else {
                if (input[65] >= 1.0) {
                    if (input[44] >= 1.0) {
                        if (input[86] >= 1.0) {
                            var42 = -0.122776605;
                        } else {
                            if (input[42] >= 1.0) {
                                var42 = -0.0026232102;
                            } else {
                                var42 = 0.13947202;
                            }
                        }
                    } else {
                        if (input[9] >= 1.0) {
                            if (input[40] >= 1.0) {
                                var42 = -0.09944181;
                            } else {
                                if (input[2] >= 16.060001) {
                                    var42 = 0.11927798;
                                } else {
                                    if (input[2] >= 3.955) {
                                        var42 = -0.071606524;
                                    } else {
                                        var42 = 0.073773056;
                                    }
                                }
                            }
                        } else {
                            if (input[58] >= 1.0) {
                                var42 = -0.13387111;
                            } else {
                                if (input[1] >= 4.885) {
                                    if (input[74] >= 1.0) {
                                        var42 = 0.0044593588;
                                    } else {
                                        var42 = -0.12699395;
                                    }
                                } else {
                                    var42 = 0.047865648;
                                }
                            }
                        }
                    }
                } else {
                    if (input[44] >= 1.0) {
                        var42 = 0.010191368;
                    } else {
                        var42 = 0.12454852;
                    }
                }
            }
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[28] >= 1.0) {
                if (input[47] >= 1.0) {
                    var42 = 0.16032419;
                } else {
                    var42 = -0.047484886;
                }
            } else {
                if (input[1] >= 7.495) {
                    if (input[0] >= 10.635) {
                        var42 = -0.04464796;
                    } else {
                        if (input[43] >= 1.0) {
                            var42 = 0.15166506;
                        } else {
                            if (input[2] >= 14.6) {
                                var42 = -0.042420007;
                            } else {
                                var42 = 0.09395798;
                            }
                        }
                    }
                } else {
                    if (input[58] >= 1.0) {
                        if (input[0] >= 5.675) {
                            if (input[2] >= 14.245) {
                                var42 = -0.018414969;
                            } else {
                                var42 = -0.07996921;
                            }
                        } else {
                            if (input[2] >= 6.205) {
                                var42 = 0.15486926;
                            } else {
                                if (input[0] >= 3.0749998) {
                                    var42 = -0.12181571;
                                } else {
                                    var42 = 0.021956295;
                                }
                            }
                        }
                    } else {
                        if (input[36] >= 1.0) {
                            var42 = -0.19385011;
                        } else {
                            if (input[24] >= 1.0) {
                                var42 = -0.1560353;
                            } else {
                                if (input[37] >= 1.0) {
                                    if (input[34] >= 1.0) {
                                        var42 = -0.12929782;
                                    } else {
                                        var42 = -0.00018202222;
                                    }
                                } else {
                                    if (input[2] >= 13.575) {
                                        var42 = -0.07324378;
                                    } else {
                                        if (input[2] >= 4.6000004) {
                                            var42 = 0.09449304;
                                        } else {
                                            var42 = -0.039359197;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (input[28] >= 1.0) {
                var42 = -0.08321297;
            } else {
                if (input[71] >= 1.0) {
                    var42 = -0.04008804;
                } else {
                    if (input[2] >= 18.165) {
                        var42 = -0.03023411;
                    } else {
                        if (input[72] >= 1.0) {
                            var42 = 0.0064995536;
                        } else {
                            var42 = 0.2053072;
                        }
                    }
                }
            }
        }
    }
    double var43;
    if (input[73] >= 1.0) {
        if (input[27] >= 1.0) {
            if (input[38] >= 1.0) {
                var43 = -0.039482675;
            } else {
                var43 = 0.04192292;
            }
        } else {
            var43 = 0.10593678;
        }
    } else {
        if (input[41] >= 1.0) {
            if (input[9] >= 1.0) {
                if (input[69] >= 1.0) {
                    var43 = 0.16608009;
                } else {
                    var43 = -0.028375152;
                }
            } else {
                var43 = -0.1763959;
            }
        } else {
            if (input[65] >= 1.0) {
                if (input[9] >= 1.0) {
                    if (input[12] >= 1.0) {
                        if (input[2] >= 1.1800001) {
                            var43 = 0.15031965;
                        } else {
                            var43 = 0.023072975;
                        }
                    } else {
                        if (input[2] >= 23.814999) {
                            var43 = 0.05817699;
                        } else {
                            if (input[43] >= 1.0) {
                                var43 = 0.0560297;
                            } else {
                                if (input[2] >= 9.375) {
                                    if (input[2] >= 18.695) {
                                        var43 = -0.034422398;
                                    } else {
                                        if (input[0] >= 9.115) {
                                            var43 = -0.05616987;
                                        } else {
                                            var43 = -0.20735513;
                                        }
                                    }
                                } else {
                                    if (input[36] >= 1.0) {
                                        if (input[28] >= 1.0) {
                                            var43 = -0.006011344;
                                        } else {
                                            var43 = -0.14203887;
                                        }
                                    } else {
                                        if (input[37] >= 1.0) {
                                            var43 = -0.06506728;
                                        } else {
                                            var43 = 0.077315316;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[12] >= 1.0) {
                        var43 = -0.13846192;
                    } else {
                        if (input[39] >= 1.0) {
                            var43 = -0.068197675;
                        } else {
                            if (input[2] >= 18.485) {
                                if (input[47] >= 1.0) {
                                    var43 = -0.0916536;
                                } else {
                                    var43 = 0.007975209;
                                }
                            } else {
                                if (input[47] >= 1.0) {
                                    if (input[58] >= 1.0) {
                                        var43 = 0.057944756;
                                    } else {
                                        var43 = 0.17370912;
                                    }
                                } else {
                                    if (input[86] >= 1.0) {
                                        if (input[33] >= 1.0) {
                                            var43 = 0.084142886;
                                        } else {
                                            var43 = -0.07942557;
                                        }
                                    } else {
                                        if (input[55] >= 1.0) {
                                            var43 = -0.040312394;
                                        } else {
                                            var43 = 0.15481338;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[100] >= 1.0) {
                    var43 = 0.18590707;
                } else {
                    if (input[20] >= 1.0) {
                        var43 = 0.001245759;
                    } else {
                        var43 = -0.13225271;
                    }
                }
            }
        }
    }
    double var44;
    if (input[27] >= 1.0) {
        if (input[36] >= 1.0) {
            if (input[9] >= 1.0) {
                if (input[2] >= 6.135) {
                    var44 = 0.087676495;
                } else {
                    var44 = 0.024483688;
                }
            } else {
                var44 = -0.055545047;
            }
        } else {
            if (input[2] >= 5.4449997) {
                if (input[0] >= 6.5550003) {
                    if (input[1] >= 7.0150003) {
                        if (input[21] >= 1.0) {
                            var44 = 0.040305216;
                        } else {
                            if (input[81] >= 1.0) {
                                var44 = -0.12279351;
                            } else {
                                var44 = 0.0073800753;
                            }
                        }
                    } else {
                        if (input[0] >= 9.635) {
                            var44 = 0.101103604;
                        } else {
                            if (input[44] >= 1.0) {
                                var44 = -0.057508357;
                            } else {
                                var44 = 0.034086816;
                            }
                        }
                    }
                } else {
                    if (input[97] >= 1.0) {
                        if (input[37] >= 1.0) {
                            var44 = -0.04648388;
                        } else {
                            var44 = -0.15655863;
                        }
                    } else {
                        var44 = -0.020559482;
                    }
                }
            } else {
                if (input[86] >= 1.0) {
                    var44 = -0.04399451;
                } else {
                    var44 = 0.07170283;
                }
            }
        }
    } else {
        if (input[7] >= 1.0) {
            var44 = -0.093407124;
        } else {
            if (input[43] >= 1.0) {
                if (input[2] >= 5.3) {
                    var44 = 0.11880534;
                } else {
                    var44 = 0.014543745;
                }
            } else {
                if (input[74] >= 1.0) {
                    if (input[47] >= 1.0) {
                        if (input[54] >= 1.0) {
                            var44 = 0.17102629;
                        } else {
                            if (input[53] >= 1.0) {
                                var44 = -0.10977255;
                            } else {
                                if (input[0] >= 9.745) {
                                    var44 = 0.1368896;
                                } else {
                                    if (input[2] >= 9.360001) {
                                        var44 = -0.09724518;
                                    } else {
                                        if (input[58] >= 1.0) {
                                            var44 = 0.07348817;
                                        } else {
                                            var44 = -0.0362346;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[36] >= 1.0) {
                            var44 = -0.16039562;
                        } else {
                            if (input[2] >= 4.4449997) {
                                if (input[2] >= 11.875) {
                                    if (input[42] >= 1.0) {
                                        if (input[2] >= 14.115) {
                                            var44 = -0.012882997;
                                        } else {
                                            var44 = 0.06733315;
                                        }
                                    } else {
                                        if (input[34] >= 1.0) {
                                            var44 = -0.17971556;
                                        } else {
                                            var44 = 0.04277586;
                                        }
                                    }
                                } else {
                                    if (input[44] >= 1.0) {
                                        if (input[2] >= 6.825) {
                                            var44 = 0.16355082;
                                        } else {
                                            var44 = -0.012813319;
                                        }
                                    } else {
                                        var44 = -0.04165624;
                                    }
                                }
                            } else {
                                var44 = -0.113328084;
                            }
                        }
                    }
                } else {
                    if (input[0] >= 4.865) {
                        if (input[9] >= 1.0) {
                            var44 = 0.0452824;
                        } else {
                            if (input[1] >= 6.335) {
                                var44 = -0.07673073;
                            } else {
                                var44 = -0.011526809;
                            }
                        }
                    } else {
                        if (input[2] >= 2.775) {
                            var44 = 0.15849823;
                        } else {
                            var44 = 0.023528721;
                        }
                    }
                }
            }
        }
    }
    double var45;
    if (input[72] >= 1.0) {
        if (input[1] >= 5.365) {
            var45 = -0.15112431;
        } else {
            var45 = 0.07078052;
        }
    } else {
        if (input[13] >= 1.0) {
            if (input[2] >= 15.305) {
                var45 = 0.061324622;
            } else {
                var45 = -0.13623825;
            }
        } else {
            if (input[74] >= 1.0) {
                if (input[28] >= 1.0) {
                    if (input[1] >= 4.3450003) {
                        var45 = 0.012412077;
                    } else {
                        var45 = 0.12084991;
                    }
                } else {
                    if (input[76] >= 1.0) {
                        var45 = 0.10476129;
                    } else {
                        if (input[1] >= 7.045) {
                            if (input[0] >= 10.355) {
                                if (input[2] >= 18.665) {
                                    if (input[2] >= 27.035) {
                                        var45 = -0.021013573;
                                    } else {
                                        var45 = -0.122499675;
                                    }
                                } else {
                                    var45 = 0.010626747;
                                }
                            } else {
                                if (input[58] >= 1.0) {
                                    var45 = -0.017852506;
                                } else {
                                    if (input[1] >= 7.5950003) {
                                        var45 = 0.13812959;
                                    } else {
                                        var45 = 0.023018034;
                                    }
                                }
                            }
                        } else {
                            if (input[18] >= 1.0) {
                                var45 = 0.068202;
                            } else {
                                if (input[81] >= 1.0) {
                                    if (input[34] >= 1.0) {
                                        if (input[2] >= 15.805) {
                                            var45 = -0.043208577;
                                        } else {
                                            var45 = 0.15554643;
                                        }
                                    } else {
                                        var45 = -0.100671835;
                                    }
                                } else {
                                    if (input[17] >= 1.0) {
                                        if (input[0] >= 3.4450002) {
                                            var45 = -0.075977415;
                                        } else {
                                            var45 = 0.10282544;
                                        }
                                    } else {
                                        if (input[42] >= 1.0) {
                                            var45 = 0.004895391;
                                        } else {
                                            var45 = -0.1326937;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[2] >= 7.185) {
                    if (input[41] >= 1.0) {
                        if (input[2] >= 12.775) {
                            var45 = 0.11467992;
                        } else {
                            var45 = 0.02395215;
                        }
                    } else {
                        if (input[97] >= 1.0) {
                            var45 = -0.12846571;
                        } else {
                            var45 = 0.042317264;
                        }
                    }
                } else {
                    if (input[45] >= 1.0) {
                        var45 = -0.04587516;
                    } else {
                        var45 = 0.21728308;
                    }
                }
            }
        }
    }
    double var46;
    if (input[60] >= 1.0) {
        if (input[1] >= 6.115) {
            var46 = -0.1262099;
        } else {
            var46 = 0.020557348;
        }
    } else {
        if (input[88] >= 1.0) {
            var46 = 0.11228711;
        } else {
            if (input[65] >= 1.0) {
                if (input[24] >= 1.0) {
                    if (input[2] >= 8.535) {
                        var46 = -0.017291933;
                    } else {
                        var46 = -0.11881004;
                    }
                } else {
                    if (input[27] >= 1.0) {
                        if (input[38] >= 1.0) {
                            var46 = -0.12855057;
                        } else {
                            if (input[0] >= 6.565) {
                                if (input[21] >= 1.0) {
                                    var46 = -0.09718568;
                                } else {
                                    if (input[40] >= 1.0) {
                                        var46 = -0.037410945;
                                    } else {
                                        if (input[0] >= 10.395) {
                                            var46 = 0.02640699;
                                        } else {
                                            var46 = 0.12468886;
                                        }
                                    }
                                }
                            } else {
                                if (input[97] >= 1.0) {
                                    if (input[2] >= 2.815) {
                                        if (input[44] >= 1.0) {
                                            var46 = -0.009296998;
                                        } else {
                                            var46 = -0.14201026;
                                        }
                                    } else {
                                        if (input[0] >= 1.615) {
                                            var46 = 0.0698062;
                                        } else {
                                            var46 = -0.04328957;
                                        }
                                    }
                                } else {
                                    var46 = 0.044014655;
                                }
                            }
                        }
                    } else {
                        if (input[13] >= 1.0) {
                            var46 = -0.07874197;
                        } else {
                            if (input[17] >= 1.0) {
                                if (input[2] >= 9.275) {
                                    var46 = -0.12449887;
                                } else {
                                    if (input[124] >= 1.0) {
                                        var46 = -0.0013056601;
                                    } else {
                                        var46 = 0.07690943;
                                    }
                                }
                            } else {
                                if (input[39] >= 1.0) {
                                    var46 = -0.0991708;
                                } else {
                                    if (input[86] >= 1.0) {
                                        if (input[44] >= 1.0) {
                                            var46 = -0.061870743;
                                        } else {
                                            var46 = 0.11086753;
                                        }
                                    } else {
                                        if (input[10] >= 1.0) {
                                            var46 = -0.048326995;
                                        } else {
                                            var46 = 0.11276224;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[0] >= 11.605) {
                    var46 = -0.09995506;
                } else {
                    var46 = 0.1660021;
                }
            }
        }
    }
    double var47;
    if (input[45] >= 1.0) {
        if (input[2] >= 15.565001) {
            var47 = 0.070051335;
        } else {
            if (input[2] >= 2.7849998) {
                if (input[5] >= 1.0) {
                    var47 = -0.017366976;
                } else {
                    var47 = -0.16268891;
                }
            } else {
                var47 = 0.024529263;
            }
        }
    } else {
        if (input[3] >= 1.0) {
            var47 = 0.10568513;
        } else {
            if (input[71] >= 1.0) {
                var47 = -0.090208225;
            } else {
                if (input[60] >= 1.0) {
                    var47 = -0.0956395;
                } else {
                    if (input[88] >= 1.0) {
                        var47 = 0.15662354;
                    } else {
                        if (input[2] >= 2.225) {
                            if (input[0] >= 2.9450002) {
                                if (input[86] >= 1.0) {
                                    if (input[0] >= 9.305) {
                                        var47 = -0.16475123;
                                    } else {
                                        if (input[2] >= 5.725) {
                                            var47 = 0.030730704;
                                        } else {
                                            var47 = -0.11408325;
                                        }
                                    }
                                } else {
                                    if (input[44] >= 1.0) {
                                        if (input[0] >= 4.08) {
                                            var47 = 0.123904996;
                                        } else {
                                            var47 = -0.04044752;
                                        }
                                    } else {
                                        if (input[9] >= 1.0) {
                                            var47 = 0.036912948;
                                        } else {
                                            var47 = -0.0840955;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] >= 5.825) {
                                    var47 = 0.020839507;
                                } else {
                                    var47 = 0.12101934;
                                }
                            }
                        } else {
                            if (input[1] >= 4.875) {
                                var47 = -0.1412933;
                            } else {
                                var47 = 0.010119637;
                            }
                        }
                    }
                }
            }
        }
    }
    double var48;
    if (input[1] >= 4.935) {
        if (input[0] >= 1.725) {
            if (input[12] >= 1.0) {
                var48 = 0.094025664;
            } else {
                if (input[117] >= 1.0) {
                    if (input[2] >= 8.805) {
                        var48 = -0.014643164;
                    } else {
                        var48 = 0.11776504;
                    }
                } else {
                    if (input[76] >= 1.0) {
                        var48 = 0.08688165;
                    } else {
                        if (input[55] >= 1.0) {
                            if (input[1] >= 6.835) {
                                var48 = 0.09315398;
                            } else {
                                var48 = -0.04683865;
                            }
                        } else {
                            if (input[65] >= 1.0) {
                                if (input[10] >= 1.0) {
                                    var48 = 0.06425313;
                                } else {
                                    if (input[73] >= 1.0) {
                                        var48 = 0.054782696;
                                    } else {
                                        if (input[86] >= 1.0) {
                                            var48 = -0.02776363;
                                        } else {
                                            var48 = -0.11276826;
                                        }
                                    }
                                }
                            } else {
                                if (input[97] >= 1.0) {
                                    if (input[21] >= 1.0) {
                                        var48 = 0.1400298;
                                    } else {
                                        var48 = 0.026030848;
                                    }
                                } else {
                                    var48 = -0.081823185;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            var48 = -0.12210394;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[28] >= 1.0) {
                var48 = 0.07010334;
            } else {
                if (input[17] >= 1.0) {
                    var48 = 0.046134163;
                } else {
                    if (input[21] >= 1.0) {
                        var48 = -0.004178616;
                    } else {
                        if (input[0] >= 6.295) {
                            var48 = 0.018392218;
                        } else {
                            if (input[0] >= 2.47) {
                                var48 = -0.14422457;
                            } else {
                                var48 = -0.01506296;
                            }
                        }
                    }
                }
            }
        } else {
            if (input[44] >= 1.0) {
                var48 = 0.029232811;
            } else {
                var48 = 0.1374013;
            }
        }
    }
    double var49;
    if (input[71] >= 1.0) {
        if (input[0] >= 4.205) {
            var49 = -0.13761857;
        } else {
            var49 = 0.06918606;
        }
    } else {
        if (input[88] >= 1.0) {
            var49 = 0.09656577;
        } else {
            if (input[94] >= 1.0) {
                var49 = -0.091446206;
            } else {
                if (input[24] >= 1.0) {
                    if (input[37] >= 1.0) {
                        var49 = 0.059830416;
                    } else {
                        var49 = -0.12163588;
                    }
                } else {
                    if (input[27] >= 1.0) {
                        if (input[38] >= 1.0) {
                            var49 = -0.11951814;
                        } else {
                            if (input[0] >= 5.545) {
                                if (input[58] >= 1.0) {
                                    if (input[47] >= 1.0) {
                                        var49 = -0.075251326;
                                    } else {
                                        var49 = 0.041939177;
                                    }
                                } else {
                                    if (input[1] >= 7.0200005) {
                                        if (input[2] >= 18.98) {
                                            var49 = -0.056226272;
                                        } else {
                                            var49 = 0.064681;
                                        }
                                    } else {
                                        var49 = 0.10968078;
                                    }
                                }
                            } else {
                                if (input[44] >= 1.0) {
                                    if (input[2] >= 4.745) {
                                        var49 = 0.038788386;
                                    } else {
                                        var49 = -0.022042673;
                                    }
                                } else {
                                    if (input[1] >= 6.1549997) {
                                        var49 = -0.00094402186;
                                    } else {
                                        var49 = -0.08831102;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[37] >= 1.0) {
                            if (input[34] >= 1.0) {
                                if (input[0] >= 3.8) {
                                    var49 = -0.12737298;
                                } else {
                                    var49 = 0.0070230975;
                                }
                            } else {
                                var49 = 0.05645183;
                            }
                        } else {
                            if (input[55] >= 1.0) {
                                var49 = 0.13263038;
                            } else {
                                if (input[0] >= 9.305) {
                                    if (input[59] >= 1.0) {
                                        var49 = 0.031033691;
                                    } else {
                                        var49 = -0.11605884;
                                    }
                                } else {
                                    if (input[20] >= 1.0) {
                                        var49 = 0.1551402;
                                    } else {
                                        if (input[9] >= 1.0) {
                                            var49 = -0.02500295;
                                        } else {
                                            var49 = 0.06642155;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var50;
    if (input[60] >= 1.0) {
        var50 = -0.055577327;
    } else {
        if (input[65] >= 1.0) {
            if (input[45] >= 1.0) {
                if (input[2] >= 17.439999) {
                    var50 = 0.052384835;
                } else {
                    if (input[2] >= 2.705) {
                        if (input[5] >= 1.0) {
                            var50 = -0.012200907;
                        } else {
                            var50 = -0.15615821;
                        }
                    } else {
                        var50 = 0.019937996;
                    }
                }
            } else {
                if (input[97] >= 1.0) {
                    if (input[11] >= 1.0) {
                        var50 = 0.09615607;
                    } else {
                        if (input[34] >= 1.0) {
                            if (input[59] >= 1.0) {
                                if (input[1] >= 7.74) {
                                    var50 = -0.041859046;
                                } else {
                                    if (input[1] >= 4.745) {
                                        var50 = 0.14667404;
                                    } else {
                                        var50 = 0.014019435;
                                    }
                                }
                            } else {
                                if (input[55] >= 1.0) {
                                    if (input[0] >= 5.26) {
                                        var50 = 0.039535735;
                                    } else {
                                        var50 = 0.14666095;
                                    }
                                } else {
                                    if (input[1] >= 5.3050003) {
                                        if (input[2] >= 3.355) {
                                            var50 = -0.12028092;
                                        } else {
                                            var50 = 0.008318967;
                                        }
                                    } else {
                                        if (input[21] >= 1.0) {
                                            var50 = 0.079961985;
                                        } else {
                                            var50 = -0.037098754;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[37] >= 1.0) {
                                if (input[55] >= 1.0) {
                                    var50 = -0.06916333;
                                } else {
                                    var50 = 0.09741026;
                                }
                            } else {
                                var50 = -0.18770936;
                            }
                        }
                    }
                } else {
                    if (input[2] >= 15.385) {
                        var50 = -0.011089525;
                    } else {
                        if (input[44] >= 1.0) {
                            if (input[0] >= 5.3450003) {
                                var50 = -0.013806782;
                            } else {
                                var50 = 0.07626633;
                            }
                        } else {
                            var50 = 0.14586562;
                        }
                    }
                }
            }
        } else {
            if (input[0] >= 11.035) {
                var50 = -0.043995593;
            } else {
                var50 = 0.15086871;
            }
        }
    }
    double var51;
    if (input[20] >= 1.0) {
        if (input[81] >= 1.0) {
            var51 = -0.12876931;
        } else {
            if (input[1] >= 6.885) {
                var51 = 0.08028314;
            } else {
                var51 = -0.035269022;
            }
        }
    } else {
        if (input[2] >= 23.92) {
            if (input[1] >= 7.005) {
                if (input[0] >= 12.625) {
                    var51 = -0.06263564;
                } else {
                    var51 = 0.033434704;
                }
            } else {
                var51 = 0.13389286;
            }
        } else {
            if (input[40] >= 1.0) {
                var51 = -0.09775603;
            } else {
                if (input[2] >= 18.474998) {
                    var51 = -0.07161645;
                } else {
                    if (input[78] >= 1.0) {
                        var51 = -0.068700686;
                    } else {
                        if (input[54] >= 1.0) {
                            if (input[0] >= 4.365) {
                                var51 = 0.010346262;
                            } else {
                                var51 = -0.09167527;
                            }
                        } else {
                            if (input[86] >= 1.0) {
                                if (input[2] >= 5.995) {
                                    if (input[42] >= 1.0) {
                                        if (input[9] >= 1.0) {
                                            var51 = -0.020015337;
                                        } else {
                                            var51 = 0.17039207;
                                        }
                                    } else {
                                        if (input[0] >= 5.105) {
                                            var51 = -0.08707245;
                                        } else {
                                            var51 = 0.078641064;
                                        }
                                    }
                                } else {
                                    if (input[2] >= 3.21) {
                                        var51 = -0.12805586;
                                    } else {
                                        var51 = 0.043337464;
                                    }
                                }
                            } else {
                                if (input[58] >= 1.0) {
                                    if (input[74] >= 1.0) {
                                        var51 = 0.066090636;
                                    } else {
                                        var51 = -0.12389576;
                                    }
                                } else {
                                    if (input[39] >= 1.0) {
                                        var51 = -0.03570148;
                                    } else {
                                        if (input[28] >= 1.0) {
                                            var51 = -0.023038007;
                                        } else {
                                            var51 = 0.1081377;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var52;
    if (input[125] >= 1.0) {
        var52 = -0.06451903;
    } else {
        if (input[72] >= 1.0) {
            var52 = -0.046883084;
        } else {
            if (input[74] >= 1.0) {
                if (input[1] >= 8.665) {
                    if (input[0] >= 12.505) {
                        var52 = -0.055312976;
                    } else {
                        var52 = 0.114443526;
                    }
                } else {
                    if (input[0] >= 14.195) {
                        var52 = 0.08918039;
                    } else {
                        if (input[2] >= 14.735) {
                            if (input[40] >= 1.0) {
                                var52 = 0.016342996;
                            } else {
                                if (input[18] >= 1.0) {
                                    var52 = 0.022320215;
                                } else {
                                    var52 = -0.16176291;
                                }
                            }
                        } else {
                            if (input[10] >= 1.0) {
                                var52 = -0.09683871;
                            } else {
                                if (input[32] >= 1.0) {
                                    if (input[9] >= 1.0) {
                                        var52 = 0.007546148;
                                    } else {
                                        var52 = -0.10205473;
                                    }
                                } else {
                                    if (input[36] >= 1.0) {
                                        if (input[58] >= 1.0) {
                                            var52 = 0.014557489;
                                        } else {
                                            var52 = -0.07357593;
                                        }
                                    } else {
                                        if (input[2] >= 4.545) {
                                            var52 = 0.087146215;
                                        } else {
                                            var52 = -0.04341709;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[0] >= 4.855) {
                    if (input[41] >= 1.0) {
                        if (input[2] >= 13.085) {
                            var52 = 0.12201285;
                        } else {
                            var52 = -0.022748053;
                        }
                    } else {
                        if (input[97] >= 1.0) {
                            var52 = -0.12533896;
                        } else {
                            var52 = 0.016367432;
                        }
                    }
                } else {
                    if (input[81] >= 1.0) {
                        var52 = 0.0140877655;
                    } else {
                        var52 = 0.15017049;
                    }
                }
            }
        }
    }
    double var53;
    if (input[1] >= 4.495) {
        if (input[0] >= 1.745) {
            if (input[23] >= 1.0) {
                var53 = 0.09420605;
            } else {
                if (input[47] >= 1.0) {
                    if (input[2] >= 6.9449997) {
                        if (input[53] >= 1.0) {
                            var53 = -0.09683102;
                        } else {
                            if (input[59] >= 1.0) {
                                if (input[0] >= 10.545) {
                                    var53 = 0.015201485;
                                } else {
                                    var53 = -0.11458511;
                                }
                            } else {
                                if (input[116] >= 1.0) {
                                    if (input[0] >= 7.205) {
                                        if (input[58] >= 1.0) {
                                            var53 = 0.0113560315;
                                        } else {
                                            var53 = 0.1557495;
                                        }
                                    } else {
                                        var53 = -0.010691955;
                                    }
                                } else {
                                    var53 = -0.050353542;
                                }
                            }
                        }
                    } else {
                        var53 = 0.11966714;
                    }
                } else {
                    if (input[59] >= 1.0) {
                        if (input[86] >= 1.0) {
                            var53 = -0.035101417;
                        } else {
                            var53 = 0.10760588;
                        }
                    } else {
                        if (input[34] >= 1.0) {
                            if (input[1] >= 8.485) {
                                var53 = 0.030044796;
                            } else {
                                if (input[53] >= 1.0) {
                                    if (input[2] >= 6.255) {
                                        var53 = 0.047095217;
                                    } else {
                                        var53 = -0.07414099;
                                    }
                                } else {
                                    if (input[2] >= 5.325) {
                                        var53 = -0.13558863;
                                    } else {
                                        var53 = -0.031543337;
                                    }
                                }
                            }
                        } else {
                            if (input[1] >= 5.6949997) {
                                var53 = 0.09124757;
                            } else {
                                var53 = -0.010533604;
                            }
                        }
                    }
                }
            }
        } else {
            var53 = -0.07879554;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[28] >= 1.0) {
                var53 = 0.08812864;
            } else {
                if (input[0] >= 2.455) {
                    if (input[44] >= 1.0) {
                        if (input[1] >= 3.7849998) {
                            var53 = -0.05668959;
                        } else {
                            var53 = 0.038788542;
                        }
                    } else {
                        var53 = -0.12609752;
                    }
                } else {
                    var53 = 0.05867226;
                }
            }
        } else {
            var53 = 0.10463414;
        }
    }
    double var54;
    if (input[20] >= 1.0) {
        if (input[81] >= 1.0) {
            var54 = -0.11023184;
        } else {
            if (input[1] >= 6.885) {
                var54 = 0.05880646;
            } else {
                var54 = -0.037327588;
            }
        }
    } else {
        if (input[71] >= 1.0) {
            var54 = -0.060527503;
        } else {
            if (input[88] >= 1.0) {
                var54 = 0.084790565;
            } else {
                if (input[100] >= 1.0) {
                    if (input[81] >= 1.0) {
                        if (input[34] >= 1.0) {
                            if (input[2] >= 7.6549997) {
                                if (input[0] >= 8.965) {
                                    if (input[1] >= 7.0) {
                                        var54 = 0.023756268;
                                    } else {
                                        var54 = 0.11121264;
                                    }
                                } else {
                                    if (input[2] >= 11.51) {
                                        var54 = -0.057947297;
                                    } else {
                                        var54 = 0.0034217476;
                                    }
                                }
                            } else {
                                var54 = 0.16737637;
                            }
                        } else {
                            var54 = -0.037837565;
                        }
                    } else {
                        if (input[34] >= 1.0) {
                            if (input[59] >= 1.0) {
                                if (input[0] >= 6.6549997) {
                                    var54 = 0.015511912;
                                } else {
                                    var54 = 0.095541745;
                                }
                            } else {
                                if (input[1] >= 5.025) {
                                    if (input[42] >= 1.0) {
                                        if (input[2] >= 6.63) {
                                            var54 = 0.06422806;
                                        } else {
                                            var54 = -0.075610474;
                                        }
                                    } else {
                                        if (input[21] >= 1.0) {
                                            var54 = -0.1450021;
                                        } else {
                                            var54 = -0.037134804;
                                        }
                                    }
                                } else {
                                    if (input[21] >= 1.0) {
                                        var54 = 0.09425549;
                                    } else {
                                        if (input[17] >= 1.0) {
                                            var54 = 0.052210186;
                                        } else {
                                            var54 = -0.067451246;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[44] >= 1.0) {
                                var54 = -0.029963082;
                            } else {
                                var54 = 0.119917445;
                            }
                        }
                    }
                } else {
                    if (input[2] >= 10.805) {
                        var54 = -0.12771703;
                    } else {
                        var54 = -0.00869123;
                    }
                }
            }
        }
    }
    double var55;
    if (input[40] >= 1.0) {
        if (input[2] >= 18.95) {
            if (input[1] >= 8.265) {
                var55 = -0.051181182;
            } else {
                var55 = 0.055740222;
            }
        } else {
            var55 = -0.116018645;
        }
    } else {
        if (input[126] >= 1.0) {
            if (input[74] >= 1.0) {
                if (input[36] >= 1.0) {
                    if (input[1] >= 5.4449997) {
                        var55 = 0.0059993938;
                    } else {
                        var55 = -0.06866799;
                    }
                } else {
                    if (input[2] >= 15.675) {
                        var55 = -0.05995738;
                    } else {
                        if (input[2] >= 4.475) {
                            if (input[9] >= 1.0) {
                                var55 = 0.011569881;
                            } else {
                                if (input[1] >= 5.365) {
                                    var55 = 0.14817482;
                                } else {
                                    var55 = 0.025116181;
                                }
                            }
                        } else {
                            var55 = -0.02882568;
                        }
                    }
                }
            } else {
                if (input[58] >= 1.0) {
                    var55 = 0.010060171;
                } else {
                    var55 = 0.106816165;
                }
            }
        } else {
            if (input[5] >= 1.0) {
                if (input[42] >= 1.0) {
                    var55 = 0.03876142;
                } else {
                    if (input[44] >= 1.0) {
                        var55 = -0.008245866;
                    } else {
                        var55 = -0.11151337;
                    }
                }
            } else {
                if (input[47] >= 1.0) {
                    if (input[0] >= 1.785) {
                        if (input[0] >= 9.275) {
                            var55 = -0.0011478019;
                        } else {
                            if (input[21] >= 1.0) {
                                var55 = -0.0010120824;
                            } else {
                                var55 = 0.12837665;
                            }
                        }
                    } else {
                        var55 = -0.03869085;
                    }
                } else {
                    if (input[1] >= 3.5549998) {
                        if (input[2] >= 8.115) {
                            if (input[0] >= 8.125) {
                                var55 = -0.053193424;
                            } else {
                                if (input[1] >= 6.225) {
                                    var55 = -0.0012737;
                                } else {
                                    var55 = 0.051436264;
                                }
                            }
                        } else {
                            var55 = -0.08809728;
                        }
                    } else {
                        var55 = 0.061602734;
                    }
                }
            }
        }
    }
    double var56;
    if (input[20] >= 1.0) {
        if (input[97] >= 1.0) {
            var56 = -0.0822332;
        } else {
            var56 = 0.024923777;
        }
    } else {
        if (input[86] >= 1.0) {
            if (input[58] >= 1.0) {
                if (input[44] >= 1.0) {
                    if (input[2] >= 11.205) {
                        var56 = -0.08227459;
                    } else {
                        var56 = 0.021127447;
                    }
                } else {
                    if (input[2] >= 14.945) {
                        var56 = 0.11780427;
                    } else {
                        if (input[0] >= 4.745) {
                            var56 = -0.02434481;
                        } else {
                            var56 = 0.066062376;
                        }
                    }
                }
            } else {
                if (input[2] >= 14.625) {
                    var56 = -0.14185955;
                } else {
                    if (input[2] >= 10.055) {
                        var56 = 0.053717416;
                    } else {
                        if (input[2] >= 3.5949998) {
                            var56 = -0.09422758;
                        } else {
                            var56 = -0.0018320385;
                        }
                    }
                }
            }
        } else {
            if (input[100] >= 1.0) {
                if (input[36] >= 1.0) {
                    if (input[74] >= 1.0) {
                        if (input[2] >= 5.13) {
                            var56 = -0.09987613;
                        } else {
                            var56 = -0.007813401;
                        }
                    } else {
                        var56 = 0.02762573;
                    }
                } else {
                    if (input[44] >= 1.0) {
                        if (input[55] >= 1.0) {
                            var56 = 0.016346078;
                        } else {
                            if (input[37] >= 1.0) {
                                var56 = 0.17790294;
                            } else {
                                var56 = 0.05239345;
                            }
                        }
                    } else {
                        if (input[58] >= 1.0) {
                            var56 = -0.057664003;
                        } else {
                            if (input[2] >= 6.4049997) {
                                if (input[2] >= 15.365) {
                                    if (input[124] >= 1.0) {
                                        var56 = 0.09529703;
                                    } else {
                                        var56 = 0.026390048;
                                    }
                                } else {
                                    if (input[2] >= 9.375) {
                                        var56 = -0.12816444;
                                    } else {
                                        var56 = 0.0050682295;
                                    }
                                }
                            } else {
                                var56 = 0.14416794;
                            }
                        }
                    }
                }
            } else {
                var56 = -0.07075017;
            }
        }
    }
    double var57;
    if (input[40] >= 1.0) {
        if (input[2] >= 23.485) {
            var57 = 0.005941233;
        } else {
            var57 = -0.085788116;
        }
    } else {
        if (input[127] >= 1.0) {
            var57 = -0.052239355;
        } else {
            if (input[60] >= 1.0) {
                var57 = -0.0587907;
            } else {
                if (input[96] >= 1.0) {
                    if (input[24] >= 1.0) {
                        var57 = -0.05512548;
                    } else {
                        if (input[27] >= 1.0) {
                            if (input[18] >= 1.0) {
                                var57 = 0.055648185;
                            } else {
                                if (input[2] >= 5.4449997) {
                                    if (input[34] >= 1.0) {
                                        if (input[58] >= 1.0) {
                                            var57 = -0.1245459;
                                        } else {
                                            var57 = -0.019624958;
                                        }
                                    } else {
                                        var57 = -0.0043985173;
                                    }
                                } else {
                                    if (input[47] >= 1.0) {
                                        var57 = 0.05016678;
                                    } else {
                                        var57 = -0.02445935;
                                    }
                                }
                            }
                        } else {
                            if (input[37] >= 1.0) {
                                if (input[44] >= 1.0) {
                                    var57 = 0.01783075;
                                } else {
                                    var57 = -0.056392167;
                                }
                            } else {
                                if (input[47] >= 1.0) {
                                    if (input[0] >= 6.895) {
                                        var57 = -0.0040394873;
                                    } else {
                                        if (input[2] >= 4.935) {
                                            var57 = 0.1703251;
                                        } else {
                                            var57 = -0.0014985475;
                                        }
                                    }
                                } else {
                                    if (input[74] >= 1.0) {
                                        if (input[0] >= 2.605) {
                                            var57 = -0.057773117;
                                        } else {
                                            var57 = 0.07959186;
                                        }
                                    } else {
                                        var57 = 0.10495228;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    var57 = 0.09956124;
                }
            }
        }
    }
    double var58;
    if (input[20] >= 1.0) {
        if (input[124] >= 1.0) {
            var58 = 0.015138025;
        } else {
            var58 = -0.07729603;
        }
    } else {
        if (input[71] >= 1.0) {
            var58 = -0.058915086;
        } else {
            if (input[74] >= 1.0) {
                if (input[5] >= 1.0) {
                    if (input[2] >= 6.9049997) {
                        if (input[2] >= 12.065001) {
                            var58 = 0.01762474;
                        } else {
                            var58 = 0.116660066;
                        }
                    } else {
                        var58 = -0.032595117;
                    }
                } else {
                    if (input[11] >= 1.0) {
                        var58 = 0.06623639;
                    } else {
                        if (input[58] >= 1.0) {
                            if (input[9] >= 1.0) {
                                if (input[21] >= 1.0) {
                                    var58 = 0.015496263;
                                } else {
                                    var58 = 0.09632303;
                                }
                            } else {
                                var58 = -0.02234966;
                            }
                        } else {
                            if (input[43] >= 1.0) {
                                var58 = 0.05678534;
                            } else {
                                if (input[2] >= 5.7299995) {
                                    if (input[0] >= 5.085) {
                                        if (input[2] >= 11.225) {
                                            var58 = -0.08091115;
                                        } else {
                                            var58 = 0.0743778;
                                        }
                                    } else {
                                        if (input[2] >= 6.565) {
                                            var58 = -0.15088005;
                                        } else {
                                            var58 = -0.04111784;
                                        }
                                    }
                                } else {
                                    var58 = 0.027391935;
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[1] >= 5.635) {
                    if (input[2] >= 14.385) {
                        var58 = 0.055038936;
                    } else {
                        if (input[47] >= 1.0) {
                            var58 = -0.09018621;
                        } else {
                            var58 = -0.009586052;
                        }
                    }
                } else {
                    if (input[9] >= 1.0) {
                        var58 = 0.01399299;
                    } else {
                        var58 = 0.14861646;
                    }
                }
            }
        }
    }
    double var59;
    if (input[86] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[117] >= 1.0) {
                var59 = 0.04791044;
            } else {
                if (input[42] >= 1.0) {
                    if (input[9] >= 1.0) {
                        var59 = -0.042323466;
                    } else {
                        var59 = 0.050264478;
                    }
                } else {
                    if (input[36] >= 1.0) {
                        var59 = 0.013946181;
                    } else {
                        if (input[43] >= 1.0) {
                            var59 = -0.020828802;
                        } else {
                            var59 = -0.1614153;
                        }
                    }
                }
            }
        } else {
            if (input[116] >= 1.0) {
                var59 = 0.078604534;
            } else {
                var59 = -0.026620995;
            }
        }
    } else {
        if (input[58] >= 1.0) {
            if (input[44] >= 1.0) {
                var59 = 0.031774472;
            } else {
                if (input[1] >= 5.0950003) {
                    var59 = -0.094734624;
                } else {
                    var59 = -0.009398207;
                }
            }
        } else {
            if (input[13] >= 1.0) {
                var59 = -0.03545275;
            } else {
                if (input[10] >= 1.0) {
                    var59 = -0.029265445;
                } else {
                    if (input[44] >= 1.0) {
                        if (input[9] >= 1.0) {
                            var59 = 0.032729015;
                        } else {
                            var59 = 0.148827;
                        }
                    } else {
                        if (input[9] >= 1.0) {
                            if (input[0] >= 5.495) {
                                var59 = 0.09666018;
                            } else {
                                if (input[1] >= 4.895) {
                                    var59 = -0.079594634;
                                } else {
                                    var59 = 0.08889573;
                                }
                            }
                        } else {
                            if (input[2] >= 6.9849997) {
                                var59 = -0.08823107;
                            } else {
                                var59 = 0.024899386;
                            }
                        }
                    }
                }
            }
        }
    }
    double var60;
    if (input[60] >= 1.0) {
        var60 = -0.049808662;
    } else {
        if (input[65] >= 1.0) {
            if (input[97] >= 1.0) {
                if (input[86] >= 1.0) {
                    if (input[117] >= 1.0) {
                        var60 = 0.041507006;
                    } else {
                        if (input[44] >= 1.0) {
                            if (input[5] >= 1.0) {
                                var60 = -0.031626217;
                            } else {
                                var60 = -0.1352368;
                            }
                        } else {
                            if (input[58] >= 1.0) {
                                var60 = 0.05423675;
                            } else {
                                var60 = -0.053623315;
                            }
                        }
                    }
                } else {
                    if (input[36] >= 1.0) {
                        if (input[47] >= 1.0) {
                            if (input[0] >= 1.795) {
                                var60 = 0.076360404;
                            } else {
                                var60 = -0.060092807;
                            }
                        } else {
                            var60 = -0.09425918;
                        }
                    } else {
                        if (input[1] >= 8.455) {
                            var60 = -0.067243285;
                        } else {
                            if (input[0] >= 4.475) {
                                if (input[37] >= 1.0) {
                                    var60 = 0.12055791;
                                } else {
                                    if (input[9] >= 1.0) {
                                        if (input[27] >= 1.0) {
                                            var60 = 0.0025783512;
                                        } else {
                                            var60 = 0.10639506;
                                        }
                                    } else {
                                        if (input[5] >= 1.0) {
                                            var60 = 0.034069538;
                                        } else {
                                            var60 = -0.06965136;
                                        }
                                    }
                                }
                            } else {
                                if (input[2] >= 6.385) {
                                    var60 = -0.09731093;
                                } else {
                                    if (input[37] >= 1.0) {
                                        var60 = -0.02214911;
                                    } else {
                                        var60 = 0.09832883;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[0] >= 4.855) {
                    if (input[96] >= 1.0) {
                        var60 = -0.039587248;
                    } else {
                        var60 = 0.053266253;
                    }
                } else {
                    var60 = 0.10643633;
                }
            }
        } else {
            var60 = 0.09671041;
        }
    }
    double var61;
    if (input[38] >= 1.0) {
        if (input[2] >= 11.065001) {
            var61 = -0.06915597;
        } else {
            var61 = 0.021460665;
        }
    } else {
        if (input[24] >= 1.0) {
            if (input[86] >= 1.0) {
                var61 = -0.071023874;
            } else {
                var61 = 0.007378739;
            }
        } else {
            if (input[17] >= 1.0) {
                if (input[58] >= 1.0) {
                    var61 = -0.09307143;
                } else {
                    var61 = 0.014701637;
                }
            } else {
                if (input[40] >= 1.0) {
                    if (input[59] >= 1.0) {
                        var61 = -0.08519152;
                    } else {
                        var61 = 0.03463603;
                    }
                } else {
                    if (input[2] >= 8.895) {
                        if (input[58] >= 1.0) {
                            if (input[47] >= 1.0) {
                                var61 = -0.06904065;
                            } else {
                                var61 = 0.055851933;
                            }
                        } else {
                            if (input[18] >= 1.0) {
                                var61 = -0.016264452;
                            } else {
                                if (input[41] >= 1.0) {
                                    var61 = 0.020503653;
                                } else {
                                    if (input[1] >= 5.575) {
                                        var61 = 0.15138805;
                                    } else {
                                        var61 = 0.018948307;
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[47] >= 1.0) {
                            if (input[0] >= 1.815) {
                                if (input[2] >= 6.7349997) {
                                    var61 = -0.016227221;
                                } else {
                                    var61 = 0.1304479;
                                }
                            } else {
                                var61 = -0.021390235;
                            }
                        } else {
                            if (input[86] >= 1.0) {
                                var61 = -0.08059376;
                            } else {
                                if (input[44] >= 1.0) {
                                    if (input[9] >= 1.0) {
                                        var61 = -0.039703835;
                                    } else {
                                        var61 = 0.101326466;
                                    }
                                } else {
                                    var61 = -0.05503916;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var62;
    if (input[27] >= 1.0) {
        if (input[2] >= 4.995) {
            if (input[2] >= 22.535) {
                var62 = 0.025658144;
            } else {
                if (input[37] >= 1.0) {
                    var62 = 0.012300887;
                } else {
                    if (input[41] >= 1.0) {
                        var62 = 0.008915884;
                    } else {
                        if (input[1] >= 9.075) {
                            var62 = 0.0015353005;
                        } else {
                            var62 = -0.1033015;
                        }
                    }
                }
            }
        } else {
            if (input[74] >= 1.0) {
                var62 = -0.017305216;
            } else {
                var62 = 0.059896328;
            }
        }
    } else {
        if (input[51] >= 1.0) {
            var62 = -0.04973936;
        } else {
            if (input[43] >= 1.0) {
                var62 = 0.08690668;
            } else {
                if (input[74] >= 1.0) {
                    if (input[0] >= 2.4650002) {
                        if (input[9] >= 1.0) {
                            if (input[2] >= 16.455) {
                                var62 = 0.04080478;
                            } else {
                                if (input[58] >= 1.0) {
                                    var62 = -0.0066258614;
                                } else {
                                    var62 = -0.10871987;
                                }
                            }
                        } else {
                            if (input[42] >= 1.0) {
                                var62 = 0.0650308;
                            } else {
                                if (input[47] >= 1.0) {
                                    var62 = 0.06782331;
                                } else {
                                    if (input[2] >= 10.505) {
                                        var62 = -0.08756314;
                                    } else {
                                        var62 = 0.004562622;
                                    }
                                }
                            }
                        }
                    } else {
                        var62 = 0.06513123;
                    }
                } else {
                    if (input[1] >= 5.965) {
                        var62 = -0.013853893;
                    } else {
                        var62 = 0.095205225;
                    }
                }
            }
        }
    }
    double var63;
    if (input[78] >= 1.0) {
        var63 = -0.04699216;
    } else {
        if (input[86] >= 1.0) {
            if (input[58] >= 1.0) {
                if (input[0] >= 4.475) {
                    if (input[44] >= 1.0) {
                        var63 = -0.08733176;
                    } else {
                        if (input[2] >= 14.15) {
                            var63 = 0.08468492;
                        } else {
                            var63 = -0.028344484;
                        }
                    }
                } else {
                    var63 = 0.06667611;
                }
            } else {
                if (input[33] >= 1.0) {
                    var63 = 0.024587763;
                } else {
                    if (input[0] >= 8.705) {
                        var63 = -0.101216964;
                    } else {
                        if (input[1] >= 6.435) {
                            var63 = 0.043731105;
                        } else {
                            if (input[0] >= 4.3450003) {
                                var63 = -0.081406675;
                            } else {
                                var63 = -0.024112461;
                            }
                        }
                    }
                }
            }
        } else {
            if (input[1] >= 3.6750002) {
                if (input[58] >= 1.0) {
                    if (input[44] >= 1.0) {
                        var63 = 0.028727403;
                    } else {
                        var63 = -0.085331544;
                    }
                } else {
                    if (input[40] >= 1.0) {
                        if (input[2] >= 24.66) {
                            var63 = 0.031509615;
                        } else {
                            var63 = -0.06971365;
                        }
                    } else {
                        if (input[59] >= 1.0) {
                            var63 = 0.0949946;
                        } else {
                            if (input[2] >= 5.4449997) {
                                if (input[21] >= 1.0) {
                                    var63 = -0.09009051;
                                } else {
                                    if (input[0] >= 5.065) {
                                        if (input[53] >= 1.0) {
                                            var63 = -0.016075583;
                                        } else {
                                            var63 = 0.09476538;
                                        }
                                    } else {
                                        var63 = -0.039105386;
                                    }
                                }
                            } else {
                                if (input[55] >= 1.0) {
                                    var63 = -0.0011552153;
                                } else {
                                    var63 = 0.094702356;
                                }
                            }
                        }
                    }
                }
            } else {
                var63 = 0.09164156;
            }
        }
    }
    double var64;
    if (input[60] >= 1.0) {
        var64 = -0.04390132;
    } else {
        if (input[65] >= 1.0) {
            if (input[97] >= 1.0) {
                if (input[20] >= 1.0) {
                    var64 = -0.07480864;
                } else {
                    if (input[1] >= 8.815001) {
                        var64 = -0.086079195;
                    } else {
                        if (input[0] >= 13.184999) {
                            var64 = 0.0921839;
                        } else {
                            if (input[74] >= 1.0) {
                                if (input[2] >= 13.875) {
                                    if (input[9] >= 1.0) {
                                        var64 = -0.023894018;
                                    } else {
                                        var64 = -0.08616421;
                                    }
                                } else {
                                    if (input[1] >= 6.995) {
                                        var64 = 0.08856802;
                                    } else {
                                        if (input[10] >= 1.0) {
                                            var64 = -0.09166138;
                                        } else {
                                            var64 = 0.0016244515;
                                        }
                                    }
                                }
                            } else {
                                if (input[1] >= 5.4449997) {
                                    var64 = -0.041420646;
                                } else {
                                    var64 = 0.089688435;
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[2] >= 14.765) {
                    var64 = -0.011917717;
                } else {
                    if (input[53] >= 1.0) {
                        var64 = 0.0062089832;
                    } else {
                        var64 = 0.09539575;
                    }
                }
            }
        } else {
            var64 = 0.0809284;
        }
    }
    double var65;
    if (input[45] >= 1.0) {
        if (input[2] >= 12.775) {
            var65 = 0.059002478;
        } else {
            if (input[1] >= 4.415) {
                var65 = -0.09555451;
            } else {
                var65 = -0.022480518;
            }
        }
    } else {
        if (input[115] >= 1.0) {
            if (input[74] >= 1.0) {
                if (input[28] >= 1.0) {
                    var65 = 0.06640711;
                } else {
                    if (input[36] >= 1.0) {
                        if (input[58] >= 1.0) {
                            var65 = -0.021251028;
                        } else {
                            var65 = -0.10308359;
                        }
                    } else {
                        if (input[100] >= 1.0) {
                            if (input[116] >= 1.0) {
                                if (input[2] >= 4.715) {
                                    if (input[21] >= 1.0) {
                                        if (input[0] >= 7.335) {
                                            var65 = -0.0017863772;
                                        } else {
                                            var65 = 0.08613865;
                                        }
                                    } else {
                                        if (input[86] >= 1.0) {
                                            var65 = -0.070081495;
                                        } else {
                                            var65 = 0.009408829;
                                        }
                                    }
                                } else {
                                    var65 = -0.09497786;
                                }
                            } else {
                                var65 = 0.09220825;
                            }
                        } else {
                            var65 = -0.07324495;
                        }
                    }
                }
            } else {
                if (input[36] >= 1.0) {
                    var65 = 0.12964068;
                } else {
                    if (input[1] >= 4.885) {
                        if (input[41] >= 1.0) {
                            var65 = 0.030312197;
                        } else {
                            if (input[86] >= 1.0) {
                                var65 = -0.0014243276;
                            } else {
                                var65 = -0.10456095;
                            }
                        }
                    } else {
                        var65 = 0.050892767;
                    }
                }
            }
        } else {
            var65 = 0.07555362;
        }
    }
    double var66;
    if (input[17] >= 1.0) {
        if (input[2] >= 9.065001) {
            var66 = -0.0854135;
        } else {
            var66 = 0.035698283;
        }
    } else {
        if (input[24] >= 1.0) {
            var66 = -0.056228552;
        } else {
            if (input[53] >= 1.0) {
                if (input[100] >= 1.0) {
                    var66 = 0.08185415;
                } else {
                    var66 = -0.0017067487;
                }
            } else {
                if (input[0] >= 12.725) {
                    var66 = -0.04866651;
                } else {
                    if (input[0] >= 3.625) {
                        if (input[38] >= 1.0) {
                            var66 = -0.035846468;
                        } else {
                            if (input[37] >= 1.0) {
                                if (input[34] >= 1.0) {
                                    var66 = -0.0740492;
                                } else {
                                    var66 = 0.05262752;
                                }
                            } else {
                                if (input[33] >= 1.0) {
                                    if (input[86] >= 1.0) {
                                        var66 = -0.024696534;
                                    } else {
                                        var66 = 0.018829381;
                                    }
                                } else {
                                    if (input[59] >= 1.0) {
                                        var66 = -0.014385364;
                                    } else {
                                        if (input[21] >= 1.0) {
                                            var66 = 0.010569891;
                                        } else {
                                            var66 = 0.12961476;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[2] >= 4.4849997) {
                            var66 = -0.07951556;
                        } else {
                            if (input[9] >= 1.0) {
                                var66 = 0.06284697;
                            } else {
                                var66 = -0.05033976;
                            }
                        }
                    }
                }
            }
        }
    }
    double var67;
    if (input[72] >= 1.0) {
        var67 = -0.04630229;
    } else {
        if (input[13] >= 1.0) {
            var67 = -0.048078924;
        } else {
            if (input[74] >= 1.0) {
                if (input[28] >= 1.0) {
                    var67 = 0.06423665;
                } else {
                    if (input[1] >= 7.535) {
                        if (input[0] >= 12.025) {
                            var67 = -0.046312533;
                        } else {
                            if (input[1] >= 8.275) {
                                var67 = 0.075409934;
                            } else {
                                var67 = 0.013730691;
                            }
                        }
                    } else {
                        if (input[2] >= 4.545) {
                            if (input[42] >= 1.0) {
                                var67 = 0.0830223;
                            } else {
                                if (input[2] >= 22.535) {
                                    var67 = 0.04683204;
                                } else {
                                    if (input[44] >= 1.0) {
                                        if (input[58] >= 1.0) {
                                            var67 = 0.09825858;
                                        } else {
                                            var67 = -0.04664618;
                                        }
                                    } else {
                                        var67 = -0.08799563;
                                    }
                                }
                            }
                        } else {
                            if (input[9] >= 1.0) {
                                var67 = 0.029232355;
                            } else {
                                var67 = -0.1289637;
                            }
                        }
                    }
                }
            } else {
                if (input[0] >= 6.4449997) {
                    if (input[9] >= 1.0) {
                        var67 = 0.01609482;
                    } else {
                        var67 = -0.043453705;
                    }
                } else {
                    if (input[81] >= 1.0) {
                        var67 = -0.000013545733;
                    } else {
                        var67 = 0.12426726;
                    }
                }
            }
        }
    }
    double var68;
    if (input[71] >= 1.0) {
        var68 = -0.045109928;
    } else {
        if (input[60] >= 1.0) {
            var68 = -0.0529772;
        } else {
            if (input[96] >= 1.0) {
                if (input[1] >= 4.605) {
                    if (input[0] >= 1.875) {
                        if (input[2] >= 11.785) {
                            if (input[32] >= 1.0) {
                                var68 = 0.052952882;
                            } else {
                                if (input[86] >= 1.0) {
                                    if (input[2] >= 16.025002) {
                                        var68 = -0.097610556;
                                    } else {
                                        var68 = -0.01295186;
                                    }
                                } else {
                                    if (input[34] >= 1.0) {
                                        if (input[59] >= 1.0) {
                                            var68 = 0.047188472;
                                        } else {
                                            var68 = -0.10009706;
                                        }
                                    } else {
                                        var68 = 0.06808824;
                                    }
                                }
                            }
                        } else {
                            if (input[47] >= 1.0) {
                                if (input[2] >= 7.5550003) {
                                    var68 = 0.0129139265;
                                } else {
                                    var68 = 0.083338454;
                                }
                            } else {
                                if (input[2] >= 8.115) {
                                    var68 = 0.05969796;
                                } else {
                                    if (input[81] >= 1.0) {
                                        var68 = 0.0060674925;
                                    } else {
                                        var68 = -0.07505142;
                                    }
                                }
                            }
                        }
                    } else {
                        var68 = -0.084397376;
                    }
                } else {
                    if (input[74] >= 1.0) {
                        if (input[0] >= 2.165) {
                            if (input[44] >= 1.0) {
                                if (input[2] >= 7.8) {
                                    var68 = 0.036939405;
                                } else {
                                    var68 = -0.02909606;
                                }
                            } else {
                                var68 = -0.05852182;
                            }
                        } else {
                            var68 = 0.060595084;
                        }
                    } else {
                        var68 = 0.09331412;
                    }
                }
            } else {
                var68 = 0.10620978;
            }
        }
    }
    double var69;
    if (input[71] >= 1.0) {
        var69 = -0.037436023;
    } else {
        if (input[20] >= 1.0) {
            if (input[1] >= 6.825) {
                var69 = 0.0146153495;
            } else {
                var69 = -0.06594578;
            }
        } else {
            if (input[72] >= 1.0) {
                var69 = -0.040094703;
            } else {
                if (input[74] >= 1.0) {
                    if (input[32] >= 1.0) {
                        if (input[44] >= 1.0) {
                            var69 = 0.013373967;
                        } else {
                            var69 = -0.06883456;
                        }
                    } else {
                        if (input[2] >= 11.315001) {
                            if (input[2] >= 23.915) {
                                var69 = 0.037592687;
                            } else {
                                if (input[1] >= 8.215) {
                                    var69 = 0.018288575;
                                } else {
                                    if (input[42] >= 1.0) {
                                        var69 = 0.0065415544;
                                    } else {
                                        if (input[0] >= 8.675) {
                                            var69 = -0.024824826;
                                        } else {
                                            var69 = -0.098562576;
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[0] >= 4.225) {
                                if (input[0] >= 4.935) {
                                    var69 = 0.11966928;
                                } else {
                                    var69 = 0.034532875;
                                }
                            } else {
                                if (input[47] >= 1.0) {
                                    var69 = 0.03981564;
                                } else {
                                    if (input[126] >= 1.0) {
                                        var69 = -0.006597944;
                                    } else {
                                        var69 = -0.06512995;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[1] >= 8.075) {
                        var69 = -0.014584263;
                    } else {
                        if (input[44] >= 1.0) {
                            var69 = 0.0010530439;
                        } else {
                            var69 = 0.11675018;
                        }
                    }
                }
            }
        }
    }
    double var70;
    if (input[17] >= 1.0) {
        if (input[0] >= 3.4850001) {
            if (input[47] >= 1.0) {
                var70 = 0.004590494;
            } else {
                var70 = -0.10675816;
            }
        } else {
            var70 = 0.051401924;
        }
    } else {
        if (input[53] >= 1.0) {
            if (input[100] >= 1.0) {
                var70 = 0.07521144;
            } else {
                var70 = -0.008684536;
            }
        } else {
            if (input[97] >= 1.0) {
                if (input[65] >= 1.0) {
                    if (input[42] >= 1.0) {
                        if (input[0] >= 5.435) {
                            var70 = -0.012492616;
                        } else {
                            var70 = 0.04893547;
                        }
                    } else {
                        if (input[2] >= 16.345001) {
                            if (input[124] >= 1.0) {
                                var70 = 0.04642427;
                            } else {
                                var70 = -0.02519303;
                            }
                        } else {
                            if (input[8] >= 1.0) {
                                var70 = 0.021836359;
                            } else {
                                if (input[2] >= 4.025) {
                                    var70 = -0.10211794;
                                } else {
                                    if (input[1] >= 4.565) {
                                        var70 = -0.041529506;
                                    } else {
                                        var70 = 0.029816423;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    var70 = 0.089303076;
                }
            } else {
                if (input[2] >= 16.275002) {
                    var70 = -0.008115956;
                } else {
                    var70 = 0.06688075;
                }
            }
        }
    }
    double var71;
    if (input[60] >= 1.0) {
        var71 = -0.042451475;
    } else {
        if (input[65] >= 1.0) {
            if (input[97] >= 1.0) {
                if (input[1] >= 4.935) {
                    if (input[55] >= 1.0) {
                        var71 = 0.02863085;
                    } else {
                        if (input[0] >= 13.865) {
                            var71 = 0.018635957;
                        } else {
                            if (input[116] >= 1.0) {
                                if (input[36] >= 1.0) {
                                    var71 = 0.015881665;
                                } else {
                                    if (input[33] >= 1.0) {
                                        var71 = -0.0076313727;
                                    } else {
                                        var71 = -0.089888014;
                                    }
                                }
                            } else {
                                var71 = 0.0054909894;
                            }
                        }
                    }
                } else {
                    if (input[86] >= 1.0) {
                        if (input[0] >= 3.71) {
                            var71 = -0.05943426;
                        } else {
                            var71 = 0.019481247;
                        }
                    } else {
                        if (input[2] >= 11.145) {
                            var71 = 0.09103264;
                        } else {
                            if (input[0] >= 1.99) {
                                if (input[0] >= 3.665) {
                                    var71 = 0.014685455;
                                } else {
                                    var71 = -0.06444011;
                                }
                            } else {
                                var71 = 0.07927389;
                            }
                        }
                    }
                }
            } else {
                if (input[9] >= 1.0) {
                    var71 = -0.005980799;
                } else {
                    var71 = 0.07267166;
                }
            }
        } else {
            var71 = 0.06072046;
        }
    }
    double var72;
    if (input[27] >= 1.0) {
        if (input[38] >= 1.0) {
            var72 = -0.057829674;
        } else {
            if (input[58] >= 1.0) {
                if (input[47] >= 1.0) {
                    var72 = -0.051769774;
                } else {
                    var72 = -0.003605807;
                }
            } else {
                if (input[0] >= 5.5950003) {
                    if (input[1] >= 7.0200005) {
                        var72 = -0.013864268;
                    } else {
                        var72 = 0.07760518;
                    }
                } else {
                    if (input[2] >= 5.705) {
                        var72 = -0.039772734;
                    } else {
                        var72 = 0.019055117;
                    }
                }
            }
        }
    } else {
        if (input[82] >= 1.0) {
            var72 = 0.053367652;
        } else {
            if (input[43] >= 1.0) {
                var72 = 0.045876987;
            } else {
                if (input[9] >= 1.0) {
                    if (input[81] >= 1.0) {
                        var72 = 0.053597167;
                    } else {
                        if (input[0] >= 3.415) {
                            if (input[58] >= 1.0) {
                                var72 = -0.016080555;
                            } else {
                                var72 = -0.08207221;
                            }
                        } else {
                            var72 = 0.0104898885;
                        }
                    }
                } else {
                    if (input[21] >= 1.0) {
                        if (input[1] >= 6.145) {
                            var72 = 0.0000021820954;
                        } else {
                            var72 = 0.07676437;
                        }
                    } else {
                        if (input[44] >= 1.0) {
                            var72 = 0.037373383;
                        } else {
                            var72 = -0.049326446;
                        }
                    }
                }
            }
        }
    }
    double var73;
    if (input[60] >= 1.0) {
        var73 = -0.03630237;
    } else {
        if (input[96] >= 1.0) {
            if (input[24] >= 1.0) {
                var73 = -0.046605133;
            } else {
                if (input[43] >= 1.0) {
                    var73 = 0.05143901;
                } else {
                    if (input[41] >= 1.0) {
                        var73 = 0.051420245;
                    } else {
                        if (input[9] >= 1.0) {
                            if (input[2] >= 4.315) {
                                if (input[2] >= 18.69) {
                                    var73 = 0.014150568;
                                } else {
                                    if (input[2] >= 8.095) {
                                        var73 = -0.109450065;
                                    } else {
                                        if (input[2] >= 6.355) {
                                            var73 = 0.01794646;
                                        } else {
                                            var73 = -0.07064942;
                                        }
                                    }
                                }
                            } else {
                                var73 = 0.027259352;
                            }
                        } else {
                            if (input[2] >= 4.4449997) {
                                if (input[2] >= 15.675) {
                                    var73 = -0.025345135;
                                } else {
                                    if (input[42] >= 1.0) {
                                        var73 = 0.11771967;
                                    } else {
                                        if (input[47] >= 1.0) {
                                            var73 = 0.09036897;
                                        } else {
                                            var73 = -0.02065615;
                                        }
                                    }
                                }
                            } else {
                                var73 = -0.03884158;
                            }
                        }
                    }
                }
            }
        } else {
            var73 = 0.059810743;
        }
    }
    double var74;
    if (input[86] >= 1.0) {
        if (input[44] >= 1.0) {
            if (input[0] >= 3.915) {
                if (input[1] >= 6.875) {
                    var74 = -0.020771;
                } else {
                    var74 = -0.099381775;
                }
            } else {
                var74 = 0.053617887;
            }
        } else {
            if (input[1] >= 4.335) {
                if (input[58] >= 1.0) {
                    var74 = 0.076832235;
                } else {
                    var74 = -0.014262307;
                }
            } else {
                var74 = -0.05335426;
            }
        }
    } else {
        if (input[58] >= 1.0) {
            if (input[74] >= 1.0) {
                var74 = 0.0024942358;
            } else {
                var74 = -0.0666654;
            }
        } else {
            if (input[55] >= 1.0) {
                if (input[0] >= 3.915) {
                    var74 = 0.037677154;
                } else {
                    var74 = -0.060658883;
                }
            } else {
                if (input[13] >= 1.0) {
                    var74 = -0.03522544;
                } else {
                    if (input[1] >= 6.925) {
                        if (input[81] >= 1.0) {
                            var74 = -0.040890656;
                        } else {
                            var74 = 0.030216541;
                        }
                    } else {
                        if (input[81] >= 1.0) {
                            var74 = 0.117080145;
                        } else {
                            if (input[2] >= 6.895) {
                                var74 = -0.008362101;
                            } else {
                                var74 = 0.05764495;
                            }
                        }
                    }
                }
            }
        }
    }
    double var75;
    if (input[27] >= 1.0) {
        if (input[2] >= 4.995) {
            if (input[37] >= 1.0) {
                var75 = 0.026314141;
            } else {
                if (input[44] >= 1.0) {
                    var75 = -0.06912777;
                } else {
                    if (input[59] >= 1.0) {
                        var75 = -0.04316313;
                    } else {
                        if (input[9] >= 1.0) {
                            var75 = 0.032876782;
                        } else {
                            var75 = -0.023559483;
                        }
                    }
                }
            }
        } else {
            if (input[74] >= 1.0) {
                var75 = -0.012869363;
            } else {
                var75 = 0.038527023;
            }
        }
    } else {
        if (input[2] >= 5.585) {
            if (input[2] >= 10.655) {
                if (input[34] >= 1.0) {
                    if (input[59] >= 1.0) {
                        var75 = 0.038325004;
                    } else {
                        if (input[21] >= 1.0) {
                            var75 = -0.0031919356;
                        } else {
                            var75 = -0.083511405;
                        }
                    }
                } else {
                    var75 = 0.06721837;
                }
            } else {
                if (input[37] >= 1.0) {
                    var75 = -0.007086634;
                } else {
                    if (input[47] >= 1.0) {
                        var75 = 0.10449317;
                    } else {
                        var75 = -0.0014219873;
                    }
                }
            }
        } else {
            if (input[116] >= 1.0) {
                var75 = -0.046020746;
            } else {
                var75 = 0.02946893;
            }
        }
    }
    double var76;
    if (input[45] >= 1.0) {
        if (input[2] >= 10.895) {
            var76 = 0.054301087;
        } else {
            var76 = -0.07596101;
        }
    } else {
        if (input[2] >= 9.405) {
            if (input[38] >= 1.0) {
                var76 = -0.06321724;
            } else {
                if (input[58] >= 1.0) {
                    if (input[2] >= 14.075) {
                        var76 = -0.10311848;
                    } else {
                        var76 = 0.026826093;
                    }
                } else {
                    if (input[40] >= 1.0) {
                        var76 = -0.032415196;
                    } else {
                        if (input[5] >= 1.0) {
                            var76 = -0.024496086;
                        } else {
                            if (input[47] >= 1.0) {
                                var76 = 0.11137398;
                            } else {
                                var76 = 0.028943373;
                            }
                        }
                    }
                }
            }
        } else {
            if (input[34] >= 1.0) {
                if (input[42] >= 1.0) {
                    var76 = -0.031973254;
                } else {
                    if (input[21] >= 1.0) {
                        var76 = -0.003441681;
                    } else {
                        if (input[2] >= 2.375) {
                            if (input[27] >= 1.0) {
                                var76 = 0.031506162;
                            } else {
                                if (input[36] >= 1.0) {
                                    var76 = 0.031085389;
                                } else {
                                    var76 = 0.12895675;
                                }
                            }
                        } else {
                            var76 = -0.0087300055;
                        }
                    }
                }
            } else {
                var76 = -0.049419876;
            }
        }
    }
    double var77;
    if (input[17] >= 1.0) {
        if (input[2] >= 9.065001) {
            var77 = -0.07071241;
        } else {
            var77 = 0.02349176;
        }
    } else {
        if (input[24] >= 1.0) {
            var77 = -0.043197926;
        } else {
            if (input[0] >= 12.725) {
                var77 = -0.034055598;
            } else {
                if (input[13] >= 1.0) {
                    var77 = -0.043567028;
                } else {
                    if (input[0] >= 1.815) {
                        if (input[36] >= 1.0) {
                            if (input[47] >= 1.0) {
                                var77 = 0.101332635;
                            } else {
                                var77 = 0.015998514;
                            }
                        } else {
                            if (input[44] >= 1.0) {
                                if (input[86] >= 1.0) {
                                    if (input[2] >= 12.085) {
                                        var77 = -0.059542082;
                                    } else {
                                        var77 = 0.011609609;
                                    }
                                } else {
                                    if (input[55] >= 1.0) {
                                        var77 = 0.032663204;
                                    } else {
                                        var77 = 0.11978578;
                                    }
                                }
                            } else {
                                if (input[2] >= 15.555) {
                                    var77 = 0.052586604;
                                } else {
                                    if (input[2] >= 6.7349997) {
                                        if (input[0] >= 6.2650003) {
                                            var77 = -0.014892836;
                                        } else {
                                            var77 = -0.07533553;
                                        }
                                    } else {
                                        var77 = 0.0039587966;
                                    }
                                }
                            }
                        }
                    } else {
                        var77 = -0.020977557;
                    }
                }
            }
        }
    }
    double var78;
    if (input[17] >= 1.0) {
        if (input[2] >= 9.065001) {
            var78 = -0.0590641;
        } else {
            var78 = 0.019401921;
        }
    } else {
        if (input[53] >= 1.0) {
            if (input[9] >= 1.0) {
                var78 = 0.011674812;
            } else {
                var78 = 0.054639935;
            }
        } else {
            if (input[42] >= 1.0) {
                if (input[58] >= 1.0) {
                    var78 = -0.017296376;
                } else {
                    var78 = 0.09207557;
                }
            } else {
                if (input[97] >= 1.0) {
                    if (input[43] >= 1.0) {
                        var78 = 0.024722766;
                    } else {
                        if (input[58] >= 1.0) {
                            if (input[47] >= 1.0) {
                                var78 = -0.036865097;
                            } else {
                                var78 = 0.06383499;
                            }
                        } else {
                            if (input[47] >= 1.0) {
                                if (input[0] >= 8.934999) {
                                    var78 = 0.03693101;
                                } else {
                                    if (input[2] >= 6.825) {
                                        var78 = -0.08786356;
                                    } else {
                                        var78 = 0.021854125;
                                    }
                                }
                            } else {
                                if (input[74] >= 1.0) {
                                    var78 = -0.114345394;
                                } else {
                                    var78 = -0.0053641605;
                                }
                            }
                        }
                    }
                } else {
                    if (input[2] >= 15.405) {
                        var78 = -0.005755133;
                    } else {
                        var78 = 0.08162598;
                    }
                }
            }
        }
    }
    double var79;
    if (input[20] >= 1.0) {
        if (input[1] >= 6.6549997) {
            var79 = 0.002833892;
        } else {
            var79 = -0.050049882;
        }
    } else {
        if (input[0] >= 11.765) {
            if (input[1] >= 8.265) {
                var79 = -0.0013364768;
            } else {
                var79 = 0.06788869;
            }
        } else {
            if (input[126] >= 1.0) {
                if (input[9] >= 1.0) {
                    if (input[0] >= 3.495) {
                        if (input[1] >= 6.745) {
                            var79 = 0.0064029293;
                        } else {
                            var79 = -0.05219519;
                        }
                    } else {
                        var79 = 0.028152796;
                    }
                } else {
                    if (input[58] >= 1.0) {
                        var79 = 0.0024063028;
                    } else {
                        var79 = 0.07221809;
                    }
                }
            } else {
                if (input[65] >= 1.0) {
                    if (input[44] >= 1.0) {
                        if (input[86] >= 1.0) {
                            var79 = -0.040805787;
                        } else {
                            if (input[2] >= 7.425) {
                                var79 = 0.060869824;
                            } else {
                                var79 = 0.000924949;
                            }
                        }
                    } else {
                        if (input[1] >= 5.745) {
                            var79 = -0.06558986;
                        } else {
                            if (input[47] >= 1.0) {
                                var79 = 0.011320159;
                            } else {
                                var79 = -0.04107526;
                            }
                        }
                    }
                } else {
                    var79 = 0.03717982;
                }
            }
        }
    }
    double var80;
    if (input[60] >= 1.0) {
        var80 = -0.035649084;
    } else {
        if (input[96] >= 1.0) {
            if (input[86] >= 1.0) {
                if (input[0] >= 9.155) {
                    var80 = -0.07640194;
                } else {
                    if (input[2] >= 6.495) {
                        if (input[9] >= 1.0) {
                            var80 = -0.02458012;
                        } else {
                            if (input[1] >= 5.785) {
                                var80 = 0.093930006;
                            } else {
                                var80 = 0.0026310948;
                            }
                        }
                    } else {
                        if (input[2] >= 3.5949998) {
                            var80 = -0.06969889;
                        } else {
                            var80 = 0.011302845;
                        }
                    }
                }
            } else {
                if (input[58] >= 1.0) {
                    if (input[1] >= 5.185) {
                        var80 = -0.05158669;
                    } else {
                        var80 = -0.0018041154;
                    }
                } else {
                    if (input[87] >= 1.0) {
                        var80 = 0.073647566;
                    } else {
                        if (input[0] >= 4.375) {
                            if (input[1] >= 6.925) {
                                var80 = -0.0075560953;
                            } else {
                                if (input[74] >= 1.0) {
                                    var80 = 0.07936669;
                                } else {
                                    var80 = 0.0039773597;
                                }
                            }
                        } else {
                            if (input[2] >= 5.725) {
                                var80 = -0.06636061;
                            } else {
                                var80 = 0.027150517;
                            }
                        }
                    }
                }
            }
        } else {
            var80 = 0.057502765;
        }
    }
    double var81;
    if (input[51] >= 1.0) {
        var81 = -0.035389606;
    } else {
        if (input[1] >= 4.085) {
            if (input[17] >= 1.0) {
                var81 = -0.050068658;
            } else {
                if (input[0] >= 2.255) {
                    if (input[20] >= 1.0) {
                        var81 = -0.034334432;
                    } else {
                        if (input[58] >= 1.0) {
                            if (input[44] >= 1.0) {
                                var81 = -0.010412189;
                            } else {
                                var81 = 0.072894685;
                            }
                        } else {
                            if (input[18] >= 1.0) {
                                var81 = -0.042700186;
                            } else {
                                if (input[13] >= 1.0) {
                                    var81 = -0.039650355;
                                } else {
                                    if (input[42] >= 1.0) {
                                        var81 = 0.08913533;
                                    } else {
                                        if (input[0] >= 4.475) {
                                            var81 = 0.03382469;
                                        } else {
                                            var81 = -0.033828408;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    var81 = -0.057744313;
                }
            }
        } else {
            if (input[0] >= 3.9250002) {
                var81 = -0.033477698;
            } else {
                var81 = 0.07748432;
            }
        }
    }
    double var82;
    if (input[74] >= 1.0) {
        if (input[37] >= 1.0) {
            if (input[86] >= 1.0) {
                var82 = -0.026366701;
            } else {
                var82 = 0.06013668;
            }
        } else {
            if (input[44] >= 1.0) {
                if (input[116] >= 1.0) {
                    if (input[1] >= 6.1549997) {
                        var82 = -0.044850424;
                    } else {
                        var82 = 0.033514567;
                    }
                } else {
                    var82 = -0.099995725;
                }
            } else {
                if (input[81] >= 1.0) {
                    if (input[2] >= 22.775002) {
                        var82 = -0.0025636593;
                    } else {
                        var82 = -0.059984393;
                    }
                } else {
                    if (input[9] >= 1.0) {
                        if (input[2] >= 8.025) {
                            var82 = 0.017425222;
                        } else {
                            var82 = 0.09148598;
                        }
                    } else {
                        if (input[1] >= 5.425) {
                            var82 = 0.007659082;
                        } else {
                            var82 = -0.049133446;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] >= 1.0) {
            var82 = -0.02951041;
        } else {
            if (input[58] >= 1.0) {
                var82 = -0.0052303844;
            } else {
                if (input[0] >= 4.635) {
                    if (input[47] >= 1.0) {
                        var82 = 0.037325043;
                    } else {
                        var82 = -0.004916838;
                    }
                } else {
                    var82 = 0.07557162;
                }
            }
        }
    }
    double var83;
    if (input[74] >= 1.0) {
        if (input[2] >= 26.985) {
            var83 = 0.0377119;
        } else {
            if (input[1] >= 8.665) {
                var83 = 0.03009232;
            } else {
                if (input[86] >= 1.0) {
                    if (input[2] >= 5.995) {
                        if (input[0] >= 5.0150003) {
                            if (input[1] >= 5.815) {
                                var83 = -0.011573035;
                            } else {
                                var83 = -0.06932354;
                            }
                        } else {
                            var83 = 0.053060204;
                        }
                    } else {
                        var83 = -0.08945962;
                    }
                } else {
                    if (input[36] >= 1.0) {
                        var83 = -0.048647687;
                    } else {
                        if (input[44] >= 1.0) {
                            if (input[0] >= 4.6549997) {
                                var83 = 0.09761616;
                            } else {
                                var83 = 0.01193449;
                            }
                        } else {
                            if (input[2] >= 7.875) {
                                var83 = -0.08077801;
                            } else {
                                var83 = 0.044424057;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[1] >= 5.915) {
            if (input[9] >= 1.0) {
                var83 = 0.023523942;
            } else {
                var83 = -0.049254347;
            }
        } else {
            if (input[0] >= 4.635) {
                var83 = -0.0063316245;
            } else {
                var83 = 0.07035339;
            }
        }
    }
    double var84;
    if (input[60] >= 1.0) {
        var84 = -0.03771776;
    } else {
        if (input[65] >= 1.0) {
            if (input[97] >= 1.0) {
                if (input[86] >= 1.0) {
                    if (input[36] >= 1.0) {
                        var84 = 0.018520592;
                    } else {
                        if (input[2] >= 6.495) {
                            if (input[42] >= 1.0) {
                                var84 = 0.02698731;
                            } else {
                                var84 = -0.02894994;
                            }
                        } else {
                            var84 = -0.10271834;
                        }
                    }
                } else {
                    if (input[36] >= 1.0) {
                        if (input[47] >= 1.0) {
                            var84 = -0.0026634217;
                        } else {
                            var84 = -0.061139286;
                        }
                    } else {
                        if (input[2] >= 6.4049997) {
                            if (input[0] >= 5.1549997) {
                                if (input[1] >= 7.545) {
                                    var84 = -0.047803774;
                                } else {
                                    if (input[124] >= 1.0) {
                                        var84 = 0.076907225;
                                    } else {
                                        var84 = 0.011408007;
                                    }
                                }
                            } else {
                                var84 = -0.06329638;
                            }
                        } else {
                            var84 = 0.05712986;
                        }
                    }
                }
            } else {
                if (input[9] >= 1.0) {
                    var84 = 0.00657254;
                } else {
                    var84 = 0.06534855;
                }
            }
        } else {
            var84 = 0.060883828;
        }
    }
    double var85;
    if (input[27] >= 1.0) {
        if (input[2] >= 4.995) {
            if (input[0] >= 6.475) {
                if (input[86] >= 1.0) {
                    var85 = -0.031099014;
                } else {
                    if (input[1] >= 7.0150003) {
                        var85 = -0.010243725;
                    } else {
                        var85 = 0.03898469;
                    }
                }
            } else {
                var85 = -0.050172824;
            }
        } else {
            var85 = 0.012720972;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[0] >= 2.165) {
                if (input[47] >= 1.0) {
                    if (input[2] >= 9.135) {
                        var85 = -0.0056366986;
                    } else {
                        var85 = 0.05398941;
                    }
                } else {
                    if (input[2] >= 7.125) {
                        if (input[37] >= 1.0) {
                            var85 = 0.052009;
                        } else {
                            if (input[42] >= 1.0) {
                                var85 = 0.03193455;
                            } else {
                                var85 = -0.059270706;
                            }
                        }
                    } else {
                        var85 = -0.08479683;
                    }
                }
            } else {
                var85 = 0.03908465;
            }
        } else {
            if (input[47] >= 1.0) {
                var85 = -0.0073546697;
            } else {
                var85 = 0.055736195;
            }
        }
    }
    double var86;
    if (input[71] >= 1.0) {
        var86 = -0.03297581;
    } else {
        if (input[20] >= 1.0) {
            var86 = -0.03138283;
        } else {
            if (input[74] >= 1.0) {
                if (input[2] >= 12.075) {
                    if (input[2] >= 23.92) {
                        var86 = 0.026391855;
                    } else {
                        if (input[1] >= 7.5950003) {
                            var86 = -0.010403833;
                        } else {
                            var86 = -0.056517255;
                        }
                    }
                } else {
                    if (input[32] >= 1.0) {
                        var86 = -0.041811116;
                    } else {
                        if (input[36] >= 1.0) {
                            var86 = -0.030161196;
                        } else {
                            if (input[2] >= 4.975) {
                                if (input[0] >= 4.495) {
                                    var86 = 0.10387694;
                                } else {
                                    var86 = 0.0137731815;
                                }
                            } else {
                                var86 = 0.00288091;
                            }
                        }
                    }
                }
            } else {
                if (input[2] >= 6.075) {
                    if (input[1] >= 7.745) {
                        var86 = -0.0031849341;
                    } else {
                        var86 = 0.089631595;
                    }
                } else {
                    var86 = -0.023017552;
                }
            }
        }
    }
    double var87;
    if (input[27] >= 1.0) {
        if (input[2] >= 4.995) {
            if (input[0] >= 6.605) {
                if (input[74] >= 1.0) {
                    if (input[40] >= 1.0) {
                        var87 = 0.013808841;
                    } else {
                        var87 = -0.039909806;
                    }
                } else {
                    var87 = 0.020666402;
                }
            } else {
                var87 = -0.045501933;
            }
        } else {
            var87 = 0.014549703;
        }
    } else {
        if (input[43] >= 1.0) {
            var87 = 0.04382552;
        } else {
            if (input[0] >= 2.935) {
                if (input[74] >= 1.0) {
                    if (input[5] >= 1.0) {
                        var87 = 0.019395432;
                    } else {
                        if (input[34] >= 1.0) {
                            if (input[2] >= 9.280001) {
                                var87 = -0.076700784;
                            } else {
                                var87 = -0.010592259;
                            }
                        } else {
                            var87 = 0.01046131;
                        }
                    }
                } else {
                    if (input[0] >= 6.815) {
                        var87 = -0.005047706;
                    } else {
                        var87 = 0.047181983;
                    }
                }
            } else {
                var87 = 0.03754176;
            }
        }
    }
    double var88;
    if (input[51] >= 1.0) {
        var88 = -0.03347811;
    } else {
        if (input[1] >= 4.075) {
            if (input[0] >= 2.1550002) {
                if (input[17] >= 1.0) {
                    var88 = -0.048679877;
                } else {
                    if (input[40] >= 1.0) {
                        var88 = -0.03347494;
                    } else {
                        if (input[2] >= 7.935) {
                            if (input[116] >= 1.0) {
                                if (input[2] >= 18.935001) {
                                    var88 = 0.0053545367;
                                } else {
                                    if (input[34] >= 1.0) {
                                        if (input[0] >= 6.955) {
                                            var88 = 0.08636145;
                                        } else {
                                            var88 = 0.010761999;
                                        }
                                    } else {
                                        var88 = 0.0046963547;
                                    }
                                }
                            } else {
                                var88 = -0.023919573;
                            }
                        } else {
                            if (input[2] >= 4.115) {
                                if (input[9] >= 1.0) {
                                    var88 = -0.059386414;
                                } else {
                                    var88 = 0.0057826177;
                                }
                            } else {
                                var88 = 0.04691418;
                            }
                        }
                    }
                }
            } else {
                var88 = -0.05052784;
            }
        } else {
            if (input[2] >= 7.4799995) {
                var88 = -0.018415166;
            } else {
                var88 = 0.07227904;
            }
        }
    }
    double var89;
    if (input[20] >= 1.0) {
        var89 = -0.02361066;
    } else {
        if (input[69] >= 1.0) {
            var89 = 0.041683737;
        } else {
            if (input[86] >= 1.0) {
                if (input[97] >= 1.0) {
                    if (input[45] >= 1.0) {
                        var89 = 0.016722146;
                    } else {
                        if (input[0] >= 5.0550003) {
                            var89 = -0.109009914;
                        } else {
                            var89 = 0.027610533;
                        }
                    }
                } else {
                    var89 = 0.032757636;
                }
            } else {
                if (input[0] >= 5.5150003) {
                    if (input[1] >= 6.925) {
                        var89 = -0.011591675;
                    } else {
                        var89 = 0.07010484;
                    }
                } else {
                    if (input[2] >= 5.725) {
                        if (input[1] >= 4.875) {
                            var89 = -0.054460317;
                        } else {
                            var89 = -0.0064697945;
                        }
                    } else {
                        if (input[12] >= 1.0) {
                            var89 = -0.042934332;
                        } else {
                            var89 = 0.05915339;
                        }
                    }
                }
            }
        }
    }
    double var90;
    if (input[27] >= 1.0) {
        if (input[65] >= 1.0) {
            if (input[97] >= 1.0) {
                if (input[2] >= 16.065) {
                    var90 = 0.00997235;
                } else {
                    if (input[74] >= 1.0) {
                        var90 = -0.0132964915;
                    } else {
                        var90 = -0.0733016;
                    }
                }
            } else {
                var90 = 0.020551773;
            }
        } else {
            var90 = 0.015392613;
        }
    } else {
        if (input[2] >= 6.205) {
            if (input[34] >= 1.0) {
                if (input[2] >= 9.280001) {
                    if (input[59] >= 1.0) {
                        var90 = 0.030259958;
                    } else {
                        if (input[1] >= 7.585) {
                            var90 = -0.006583744;
                        } else {
                            var90 = -0.053619448;
                        }
                    }
                } else {
                    var90 = 0.043716196;
                }
            } else {
                var90 = 0.044516496;
            }
        } else {
            if (input[1] >= 4.5550003) {
                var90 = -0.039700042;
            } else {
                var90 = 0.01625233;
            }
        }
    }
    double var91;
    if (input[51] >= 1.0) {
        var91 = -0.028834743;
    } else {
        if (input[2] >= 3.6750002) {
            if (input[87] >= 1.0) {
                var91 = 0.04598561;
            } else {
                if (input[34] >= 1.0) {
                    if (input[1] >= 8.245) {
                        if (input[86] >= 1.0) {
                            var91 = 0.060575806;
                        } else {
                            var91 = -0.025088416;
                        }
                    } else {
                        if (input[59] >= 1.0) {
                            var91 = 0.032120895;
                        } else {
                            if (input[0] >= 4.535) {
                                var91 = -0.0704363;
                            } else {
                                if (input[9] >= 1.0) {
                                    var91 = -0.0430585;
                                } else {
                                    var91 = 0.03541965;
                                }
                            }
                        }
                    }
                } else {
                    if (input[86] >= 1.0) {
                        var91 = -0.016637161;
                    } else {
                        var91 = 0.04244615;
                    }
                }
            }
        } else {
            if (input[1] >= 4.8450003) {
                var91 = -0.009371395;
            } else {
                var91 = 0.072594166;
            }
        }
    }
    double var92;
    if (input[40] >= 1.0) {
        var92 = -0.024673982;
    } else {
        if (input[59] >= 1.0) {
            var92 = 0.043794718;
        } else {
            if (input[18] >= 1.0) {
                var92 = 0.04315566;
            } else {
                if (input[27] >= 1.0) {
                    if (input[2] >= 5.395) {
                        if (input[44] >= 1.0) {
                            var92 = -0.06630202;
                        } else {
                            var92 = -0.020701345;
                        }
                    } else {
                        var92 = 0.0089482;
                    }
                } else {
                    if (input[2] >= 6.705) {
                        if (input[86] >= 1.0) {
                            if (input[44] >= 1.0) {
                                var92 = 0.0142233;
                            } else {
                                var92 = 0.06943055;
                            }
                        } else {
                            if (input[1] >= 5.6549997) {
                                var92 = -0.041102592;
                            } else {
                                var92 = 0.017482309;
                            }
                        }
                    } else {
                        if (input[86] >= 1.0) {
                            var92 = -0.0542033;
                        } else {
                            if (input[36] >= 1.0) {
                                var92 = -0.011281748;
                            } else {
                                var92 = 0.026353806;
                            }
                        }
                    }
                }
            }
        }
    }
    double var93;
    if (input[45] >= 1.0) {
        if (input[2] >= 6.185) {
            var93 = 0.030232491;
        } else {
            var93 = -0.061182935;
        }
    } else {
        if (input[2] >= 11.795) {
            if (input[86] >= 1.0) {
                if (input[97] >= 1.0) {
                    var93 = -0.070206255;
                } else {
                    var93 = 0.006242458;
                }
            } else {
                if (input[9] >= 1.0) {
                    var93 = 0.037323873;
                } else {
                    var93 = -0.026140826;
                }
            }
        } else {
            if (input[2] >= 2.125) {
                if (input[36] >= 1.0) {
                    var93 = 0.0760006;
                } else {
                    if (input[116] >= 1.0) {
                        if (input[0] >= 6.1949997) {
                            var93 = 0.015279603;
                        } else {
                            if (input[126] >= 1.0) {
                                var93 = -0.0012697265;
                            } else {
                                var93 = -0.04640601;
                            }
                        }
                    } else {
                        var93 = 0.07398338;
                    }
                }
            } else {
                var93 = -0.040780272;
            }
        }
    }
    double var94;
    if (input[38] >= 1.0) {
        var94 = -0.024304954;
    } else {
        if (input[65] >= 1.0) {
            if (input[97] >= 1.0) {
                if (input[32] >= 1.0) {
                    var94 = 0.023451032;
                } else {
                    if (input[1] >= 3.6750002) {
                        if (input[0] >= 6.295) {
                            if (input[1] >= 7.0150003) {
                                if (input[2] >= 20.415) {
                                    var94 = -0.050022844;
                                } else {
                                    var94 = -0.009534085;
                                }
                            } else {
                                if (input[2] >= 16.57) {
                                    var94 = 0.006236109;
                                } else {
                                    var94 = 0.056075368;
                                }
                            }
                        } else {
                            if (input[21] >= 1.0) {
                                var94 = 0.011013421;
                            } else {
                                if (input[1] >= 5.5950003) {
                                    var94 = -0.012917806;
                                } else {
                                    var94 = -0.08147304;
                                }
                            }
                        }
                    } else {
                        var94 = 0.028926458;
                    }
                }
            } else {
                var94 = 0.045731895;
            }
        } else {
            var94 = 0.03493895;
        }
    }
    double var95;
    if (input[45] >= 1.0) {
        if (input[0] >= 4.295) {
            var95 = 0.022679681;
        } else {
            var95 = -0.054017346;
        }
    } else {
        if (input[2] >= 9.375) {
            if (input[38] >= 1.0) {
                var95 = -0.055778496;
            } else {
                if (input[58] >= 1.0) {
                    var95 = -0.045129746;
                } else {
                    if (input[40] >= 1.0) {
                        var95 = -0.028742796;
                    } else {
                        if (input[5] >= 1.0) {
                            var95 = -0.019324461;
                        } else {
                            if (input[47] >= 1.0) {
                                var95 = 0.102383964;
                            } else {
                                var95 = 0.01333491;
                            }
                        }
                    }
                }
            }
        } else {
            if (input[2] >= 2.1750002) {
                if (input[42] >= 1.0) {
                    var95 = -0.023106726;
                } else {
                    if (input[37] >= 1.0) {
                        var95 = -0.006203537;
                    } else {
                        if (input[1] >= 4.625) {
                            var95 = 0.08992523;
                        } else {
                            var95 = 0.006135888;
                        }
                    }
                }
            } else {
                var95 = -0.02835444;
            }
        }
    }
    double var96;
    if (input[17] >= 1.0) {
        if (input[2] >= 9.065001) {
            var96 = -0.042653847;
        } else {
            var96 = 0.012822857;
        }
    } else {
        if (input[24] >= 1.0) {
            var96 = -0.039307937;
        } else {
            if (input[0] >= 12.725) {
                var96 = -0.03838415;
            } else {
                if (input[13] >= 1.0) {
                    var96 = -0.036642235;
                } else {
                    if (input[87] >= 1.0) {
                        var96 = -0.02493479;
                    } else {
                        if (input[21] >= 1.0) {
                            if (input[9] >= 1.0) {
                                var96 = -0.051505465;
                            } else {
                                if (input[2] >= 11.965) {
                                    var96 = 0.0026461466;
                                } else {
                                    var96 = 0.051356573;
                                }
                            }
                        } else {
                            if (input[55] >= 1.0) {
                                var96 = -0.032004416;
                            } else {
                                if (input[18] >= 1.0) {
                                    var96 = -0.016212912;
                                } else {
                                    if (input[86] >= 1.0) {
                                        var96 = 0.035697285;
                                    } else {
                                        var96 = 0.11687312;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var97;
    if (input[20] >= 1.0) {
        var97 = -0.025199493;
    } else {
        if (input[0] >= 11.765) {
            var97 = 0.036637723;
        } else {
            if (input[126] >= 1.0) {
                if (input[9] >= 1.0) {
                    if (input[86] >= 1.0) {
                        var97 = 0.015408155;
                    } else {
                        var97 = -0.023611633;
                    }
                } else {
                    if (input[1] >= 5.4449997) {
                        var97 = 0.04980269;
                    } else {
                        var97 = 0.011048084;
                    }
                }
            } else {
                if (input[5] >= 1.0) {
                    var97 = -0.046397228;
                } else {
                    if (input[2] >= 6.975) {
                        if (input[1] >= 5.875) {
                            if (input[27] >= 1.0) {
                                var97 = 0.004264325;
                            } else {
                                var97 = -0.023957115;
                            }
                        } else {
                            var97 = 0.041657448;
                        }
                    } else {
                        if (input[2] >= 4.115) {
                            var97 = -0.040955644;
                        } else {
                            var97 = 0.009295216;
                        }
                    }
                }
            }
        }
    }
    double var98;
    if (input[73] >= 1.0) {
        var98 = 0.025147932;
    } else {
        if (input[42] >= 1.0) {
            if (input[5] >= 1.0) {
                var98 = 0.049189974;
            } else {
                var98 = -0.011250585;
            }
        } else {
            if (input[2] >= 22.535) {
                var98 = 0.027281096;
            } else {
                if (input[5] >= 1.0) {
                    if (input[0] >= 5.255) {
                        var98 = -0.08333044;
                    } else {
                        var98 = -0.010366436;
                    }
                } else {
                    if (input[43] >= 1.0) {
                        var98 = 0.046344828;
                    } else {
                        if (input[74] >= 1.0) {
                            if (input[2] >= 10.765) {
                                var98 = -0.07238448;
                            } else {
                                if (input[1] >= 5.425) {
                                    var98 = 0.038618926;
                                } else {
                                    if (input[1] >= 4.1549997) {
                                        var98 = -0.049357895;
                                    } else {
                                        var98 = 0.008447861;
                                    }
                                }
                            }
                        } else {
                            if (input[1] >= 5.625) {
                                var98 = -0.015130108;
                            } else {
                                var98 = 0.050774354;
                            }
                        }
                    }
                }
            }
        }
    }
    double var99;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[86] >= 1.0) {
                if (input[58] >= 1.0) {
                    var99 = -0.0048253424;
                } else {
                    if (input[2] >= 10.255) {
                        var99 = 0.00022748981;
                    } else {
                        var99 = -0.07352525;
                    }
                }
            } else {
                if (input[41] >= 1.0) {
                    var99 = 0.044613756;
                } else {
                    if (input[44] >= 1.0) {
                        if (input[1] >= 5.0950003) {
                            var99 = 0.07508673;
                        } else {
                            var99 = -0.033217672;
                        }
                    } else {
                        if (input[1] >= 4.875) {
                            var99 = -0.0678319;
                        } else {
                            var99 = 0.036259383;
                        }
                    }
                }
            }
        } else {
            if (input[2] >= 12.125) {
                var99 = 0.0042777667;
            } else {
                var99 = 0.052409913;
            }
        }
    } else {
        if (input[0] >= 8.025) {
            var99 = -0.009365431;
        } else {
            var99 = 0.041563664;
        }
    }
    double var100;
    if (input[20] >= 1.0) {
        var100 = -0.023946492;
    } else {
        if (input[0] >= 11.365) {
            var100 = 0.031596333;
        } else {
            if (input[100] >= 1.0) {
                if (input[42] >= 1.0) {
                    if (input[21] >= 1.0) {
                        var100 = 0.062258556;
                    } else {
                        var100 = 0.0037721598;
                    }
                } else {
                    if (input[5] >= 1.0) {
                        var100 = -0.054210335;
                    } else {
                        if (input[0] >= 8.675) {
                            var100 = 0.047642864;
                        } else {
                            if (input[81] >= 1.0) {
                                var100 = 0.033789318;
                            } else {
                                if (input[1] >= 4.895) {
                                    if (input[21] >= 1.0) {
                                        var100 = -0.067695245;
                                    } else {
                                        var100 = -0.00085564726;
                                    }
                                } else {
                                    if (input[1] >= 3.725) {
                                        var100 = 0.024450382;
                                    } else {
                                        var100 = -0.006951303;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                var100 = -0.034794666;
            }
        }
    }
    double var101;
    if (input[20] >= 1.0) {
        var101 = -0.019533534;
    } else {
        if (input[69] >= 1.0) {
            var101 = 0.030908307;
        } else {
            if (input[9] >= 1.0) {
                if (input[2] >= 4.115) {
                    if (input[58] >= 1.0) {
                        var101 = 0.013412005;
                    } else {
                        if (input[0] >= 8.934999) {
                            var101 = 0.0004611327;
                        } else {
                            var101 = -0.060111705;
                        }
                    }
                } else {
                    var101 = 0.035934404;
                }
            } else {
                if (input[2] >= 4.4449997) {
                    if (input[2] >= 15.805) {
                        var101 = -0.019109527;
                    } else {
                        if (input[1] >= 4.475) {
                            if (input[0] >= 4.9049997) {
                                var101 = 0.07981666;
                            } else {
                                var101 = 0.014023615;
                            }
                        } else {
                            var101 = 0.0077120755;
                        }
                    }
                } else {
                    var101 = -0.03849991;
                }
            }
        }
    }
    double var102;
    if (input[45] >= 1.0) {
        if (input[0] >= 4.6549997) {
            var102 = 0.019940423;
        } else {
            var102 = -0.0469259;
        }
    } else {
        if (input[0] >= 3.8049998) {
            if (input[86] >= 1.0) {
                if (input[97] >= 1.0) {
                    if (input[42] >= 1.0) {
                        var102 = -0.0011417597;
                    } else {
                        var102 = -0.09380867;
                    }
                } else {
                    var102 = 0.022076635;
                }
            } else {
                if (input[34] >= 1.0) {
                    if (input[59] >= 1.0) {
                        var102 = 0.040596437;
                    } else {
                        if (input[2] >= 11.799999) {
                            var102 = -0.049749013;
                        } else {
                            if (input[27] >= 1.0) {
                                var102 = -0.023483682;
                            } else {
                                var102 = 0.029279606;
                            }
                        }
                    }
                } else {
                    var102 = 0.057758357;
                }
            }
        } else {
            if (input[2] >= 2.2350001) {
                if (input[2] >= 5.245) {
                    var102 = 0.01739639;
                } else {
                    var102 = 0.074463785;
                }
            } else {
                var102 = -0.025948906;
            }
        }
    }
    double var103;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[1] >= 4.4049997) {
                if (input[0] >= 8.535) {
                    if (input[2] >= 21.244999) {
                        var103 = -0.019260315;
                    } else {
                        var103 = 0.032746017;
                    }
                } else {
                    if (input[42] >= 1.0) {
                        var103 = 0.020012068;
                    } else {
                        if (input[47] >= 1.0) {
                            if (input[9] >= 1.0) {
                                var103 = -0.050093904;
                            } else {
                                var103 = 0.02085472;
                            }
                        } else {
                            if (input[0] >= 4.375) {
                                var103 = -0.011760243;
                            } else {
                                var103 = -0.078486994;
                            }
                        }
                    }
                }
            } else {
                if (input[9] >= 1.0) {
                    var103 = 0.039144192;
                } else {
                    var103 = -0.012250832;
                }
            }
        } else {
            if (input[2] >= 12.105) {
                var103 = 0.0007684001;
            } else {
                var103 = 0.05046833;
            }
        }
    } else {
        var103 = 0.020436231;
    }
    double var104;
    if (input[47] >= 1.0) {
        if (input[2] >= 9.135) {
            if (input[2] >= 16.035) {
                if (input[124] >= 1.0) {
                    var104 = 0.029155532;
                } else {
                    var104 = -0.020833798;
                }
            } else {
                var104 = -0.041071538;
            }
        } else {
            if (input[0] >= 1.815) {
                var104 = 0.080419734;
            } else {
                var104 = -0.033253063;
            }
        }
    } else {
        if (input[37] >= 1.0) {
            if (input[2] >= 7.6549997) {
                var104 = 0.04504666;
            } else {
                var104 = -0.005242184;
            }
        } else {
            if (input[2] >= 10.225) {
                if (input[2] >= 14.855) {
                    var104 = -0.017386591;
                } else {
                    var104 = 0.031777818;
                }
            } else {
                if (input[0] >= 4.635) {
                    var104 = -0.06547678;
                } else {
                    if (input[2] >= 5.1549997) {
                        var104 = -0.03728246;
                    } else {
                        var104 = 0.017627819;
                    }
                }
            }
        }
    }
    double var105;
    if (input[43] >= 1.0) {
        var105 = 0.020058451;
    } else {
        if (input[65] >= 1.0) {
            if (input[41] >= 1.0) {
                var105 = 0.033751223;
            } else {
                if (input[9] >= 1.0) {
                    if (input[2] >= 4.315) {
                        if (input[58] >= 1.0) {
                            var105 = 0.0012777587;
                        } else {
                            var105 = -0.07432734;
                        }
                    } else {
                        var105 = 0.023252467;
                    }
                } else {
                    if (input[47] >= 1.0) {
                        var105 = 0.038317136;
                    } else {
                        if (input[44] >= 1.0) {
                            if (input[86] >= 1.0) {
                                var105 = -0.016016314;
                            } else {
                                var105 = 0.048126694;
                            }
                        } else {
                            var105 = -0.041708194;
                        }
                    }
                }
            }
        } else {
            var105 = 0.032581575;
        }
    }
    double var106;
    if (input[20] >= 1.0) {
        var106 = -0.018963471;
    } else {
        if (input[86] >= 1.0) {
            if (input[58] >= 1.0) {
                if (input[21] >= 1.0) {
                    var106 = -0.012236189;
                } else {
                    var106 = 0.039862916;
                }
            } else {
                if (input[2] >= 12.735) {
                    var106 = -0.061437353;
                } else {
                    var106 = -0.005084909;
                }
            }
        } else {
            if (input[12] >= 1.0) {
                var106 = -0.03948281;
            } else {
                if (input[2] >= 5.135) {
                    if (input[0] >= 4.925) {
                        if (input[1] >= 6.925) {
                            if (input[0] >= 9.805) {
                                var106 = 0.012939979;
                            } else {
                                var106 = -0.01570127;
                            }
                        } else {
                            var106 = 0.051494874;
                        }
                    } else {
                        if (input[2] >= 6.415) {
                            var106 = -0.04623203;
                        } else {
                            var106 = -0.0033250514;
                        }
                    }
                } else {
                    var106 = 0.06967532;
                }
            }
        }
    }
    double var107;
    if (input[27] >= 1.0) {
        if (input[36] >= 1.0) {
            var107 = 0.013129446;
        } else {
            if (input[21] >= 1.0) {
                var107 = 0.007584387;
            } else {
                if (input[81] >= 1.0) {
                    var107 = -0.046763252;
                } else {
                    var107 = 0.0054267286;
                }
            }
        }
    } else {
        if (input[43] >= 1.0) {
            var107 = 0.04162705;
        } else {
            if (input[0] >= 2.935) {
                if (input[1] >= 3.9650002) {
                    if (input[44] >= 1.0) {
                        if (input[86] >= 1.0) {
                            var107 = -0.05169461;
                        } else {
                            var107 = 0.033782598;
                        }
                    } else {
                        if (input[86] >= 1.0) {
                            var107 = 0.047138363;
                        } else {
                            if (input[1] >= 6.455) {
                                var107 = -0.0006785556;
                            } else {
                                var107 = -0.02163201;
                            }
                        }
                    }
                } else {
                    var107 = -0.039362103;
                }
            } else {
                var107 = 0.032638106;
            }
        }
    }
    double var108;
    if (input[73] >= 1.0) {
        var108 = 0.024351913;
    } else {
        if (input[100] >= 1.0) {
            if (input[65] >= 1.0) {
                if (input[58] >= 1.0) {
                    if (input[36] >= 1.0) {
                        var108 = 0.017616393;
                    } else {
                        var108 = -0.05784517;
                    }
                } else {
                    if (input[116] >= 1.0) {
                        if (input[2] >= 10.225) {
                            if (input[59] >= 1.0) {
                                var108 = -0.023044847;
                            } else {
                                var108 = 0.048962776;
                            }
                        } else {
                            if (input[0] >= 2.935) {
                                var108 = -0.0723943;
                            } else {
                                var108 = 0.026849357;
                            }
                        }
                    } else {
                        var108 = 0.038525317;
                    }
                }
            } else {
                var108 = 0.07455424;
            }
        } else {
            var108 = -0.028401373;
        }
    }
    double var109;
    if (input[27] >= 1.0) {
        if (input[116] >= 1.0) {
            if (input[1] >= 8.815001) {
                var109 = -0.019641757;
            } else {
                if (input[47] >= 1.0) {
                    var109 = 0.026600095;
                } else {
                    if (input[1] >= 5.755) {
                        var109 = -0.020999214;
                    } else {
                        var109 = 0.008771401;
                    }
                }
            }
        } else {
            var109 = -0.031523935;
        }
    } else {
        if (input[43] >= 1.0) {
            var109 = 0.035735417;
        } else {
            if (input[0] >= 2.935) {
                if (input[74] >= 1.0) {
                    if (input[32] >= 1.0) {
                        var109 = -0.05523771;
                    } else {
                        if (input[47] >= 1.0) {
                            var109 = 0.046278723;
                        } else {
                            if (input[0] >= 5.3050003) {
                                var109 = 0.005662921;
                            } else {
                                var109 = -0.05527415;
                            }
                        }
                    }
                } else {
                    var109 = 0.018687021;
                }
            } else {
                var109 = 0.025292778;
            }
        }
    }
    double var110;
    if (input[0] >= 9.155) {
        if (input[9] >= 1.0) {
            var110 = 0.011659756;
        } else {
            var110 = -0.033960238;
        }
    } else {
        if (input[13] >= 1.0) {
            var110 = -0.03385829;
        } else {
            if (input[44] >= 1.0) {
                if (input[37] >= 1.0) {
                    var110 = 0.05677746;
                } else {
                    if (input[74] >= 1.0) {
                        if (input[2] >= 9.035) {
                            var110 = 0.02638055;
                        } else {
                            var110 = -0.05106518;
                        }
                    } else {
                        var110 = 0.04525897;
                    }
                }
            } else {
                if (input[2] >= 14.375) {
                    var110 = 0.030321766;
                } else {
                    if (input[126] >= 1.0) {
                        var110 = 0.011795262;
                    } else {
                        if (input[9] >= 1.0) {
                            var110 = -0.0024427806;
                        } else {
                            var110 = -0.054149363;
                        }
                    }
                }
            }
        }
    }
    double var111;
    if (input[20] >= 1.0) {
        var111 = -0.018133134;
    } else {
        if (input[0] >= 12.945) {
            var111 = 0.03019514;
        } else {
            if (input[17] >= 1.0) {
                var111 = -0.030807713;
            } else {
                if (input[53] >= 1.0) {
                    var111 = 0.038842693;
                } else {
                    if (input[42] >= 1.0) {
                        var111 = 0.042869203;
                    } else {
                        if (input[58] >= 1.0) {
                            if (input[21] >= 1.0) {
                                var111 = -0.0050098402;
                            } else {
                                var111 = 0.040520713;
                            }
                        } else {
                            if (input[74] >= 1.0) {
                                if (input[1] >= 6.605) {
                                    var111 = -0.009759095;
                                } else {
                                    if (input[0] >= 4.395) {
                                        var111 = -0.017877668;
                                    } else {
                                        var111 = -0.08627416;
                                    }
                                }
                            } else {
                                var111 = 0.031403616;
                            }
                        }
                    }
                }
            }
        }
    }
    double var112;
    if (input[0] >= 4.5550003) {
        if (input[34] >= 1.0) {
            if (input[59] >= 1.0) {
                var112 = 0.026923921;
            } else {
                if (input[1] >= 8.015) {
                    var112 = 0.026723647;
                } else {
                    var112 = -0.05851287;
                }
            }
        } else {
            if (input[1] >= 7.215) {
                var112 = -0.017668683;
            } else {
                var112 = 0.051649988;
            }
        }
    } else {
        if (input[1] >= 4.3050003) {
            if (input[0] >= 2.335) {
                if (input[2] >= 5.5550003) {
                    var112 = -0.016880734;
                } else {
                    var112 = 0.041420765;
                }
            } else {
                var112 = -0.03486287;
            }
        } else {
            var112 = 0.03574921;
        }
    }
    double var113;
    if (input[0] >= 9.155) {
        if (input[86] >= 1.0) {
            var113 = -0.038336266;
        } else {
            if (input[1] >= 7.545) {
                var113 = -0.009429688;
            } else {
                var113 = 0.02482721;
            }
        }
    } else {
        if (input[43] >= 1.0) {
            var113 = 0.037299182;
        } else {
            if (input[2] >= 10.485) {
                if (input[47] >= 1.0) {
                    var113 = -0.044145107;
                } else {
                    var113 = 0.005838067;
                }
            } else {
                if (input[45] >= 1.0) {
                    var113 = -0.038072973;
                } else {
                    if (input[42] >= 1.0) {
                        var113 = -0.02478202;
                    } else {
                        if (input[0] >= 2.335) {
                            if (input[1] >= 4.8050003) {
                                var113 = 0.06323089;
                            } else {
                                var113 = 0.0065913424;
                            }
                        } else {
                            var113 = -0.004905708;
                        }
                    }
                }
            }
        }
    }
    double var114;
    if (input[27] >= 1.0) {
        if (input[36] >= 1.0) {
            var114 = 0.009989141;
        } else {
            if (input[9] >= 1.0) {
                if (input[81] >= 1.0) {
                    var114 = -0.04532209;
                } else {
                    var114 = 0.003180726;
                }
            } else {
                if (input[81] >= 1.0) {
                    var114 = 0.023890154;
                } else {
                    var114 = -0.017760571;
                }
            }
        }
    } else {
        if (input[43] >= 1.0) {
            var114 = 0.033058792;
        } else {
            if (input[1] >= 4.935) {
                if (input[5] >= 1.0) {
                    var114 = 0.015533113;
                } else {
                    if (input[33] >= 1.0) {
                        var114 = -0.052381612;
                    } else {
                        if (input[1] >= 6.615) {
                            var114 = 0.018256431;
                        } else {
                            var114 = -0.015256741;
                        }
                    }
                }
            } else {
                if (input[0] >= 3.8649998) {
                    var114 = -0.002979597;
                } else {
                    var114 = 0.03130554;
                }
            }
        }
    }
    double var115;
    if (input[20] >= 1.0) {
        var115 = -0.019448165;
    } else {
        if (input[0] >= 11.365) {
            var115 = 0.02312694;
        } else {
            if (input[126] >= 1.0) {
                if (input[34] >= 1.0) {
                    if (input[0] >= 5.225) {
                        var115 = -0.005659004;
                    } else {
                        var115 = 0.041907903;
                    }
                } else {
                    var115 = -0.016029729;
                }
            } else {
                if (input[5] >= 1.0) {
                    var115 = -0.034830123;
                } else {
                    if (input[116] >= 1.0) {
                        if (input[1] >= 5.495) {
                            if (input[27] >= 1.0) {
                                var115 = 0.00949847;
                            } else {
                                var115 = -0.019223848;
                            }
                        } else {
                            var115 = 0.027532877;
                        }
                    } else {
                        var115 = -0.023283742;
                    }
                }
            }
        }
    }
    double var116;
    if (input[0] >= 12.725) {
        var116 = -0.019825224;
    } else {
        if (input[17] >= 1.0) {
            var116 = -0.026167637;
        } else {
            if (input[0] >= 7.165) {
                if (input[21] >= 1.0) {
                    var116 = 0.0016050703;
                } else {
                    if (input[86] >= 1.0) {
                        var116 = 0.009863971;
                    } else {
                        var116 = 0.051906418;
                    }
                }
            } else {
                if (input[44] >= 1.0) {
                    if (input[42] >= 1.0) {
                        var116 = -0.029785547;
                    } else {
                        if (input[0] >= 3.8850002) {
                            var116 = 0.072783105;
                        } else {
                            var116 = -0.009866064;
                        }
                    }
                } else {
                    if (input[36] >= 1.0) {
                        var116 = 0.008375128;
                    } else {
                        if (input[2] >= 6.565) {
                            var116 = -0.051883187;
                        } else {
                            var116 = 0.0006900477;
                        }
                    }
                }
            }
        }
    }
    double var117;
    if (input[27] >= 1.0) {
        if (input[58] >= 1.0) {
            var117 = -0.02221025;
        } else {
            if (input[47] >= 1.0) {
                var117 = 0.019525403;
            } else {
                var117 = -0.018980835;
            }
        }
    } else {
        if (input[2] >= 5.585) {
            if (input[81] >= 1.0) {
                var117 = -0.013351554;
            } else {
                if (input[42] >= 1.0) {
                    var117 = 0.051629845;
                } else {
                    if (input[21] >= 1.0) {
                        var117 = -0.040702023;
                    } else {
                        if (input[1] >= 5.565) {
                            var117 = 0.05647529;
                        } else {
                            var117 = -0.006127724;
                        }
                    }
                }
            }
        } else {
            var117 = -0.016577847;
        }
    }
    double var118;
    if (input[0] >= 9.155) {
        if (input[86] >= 1.0) {
            var118 = -0.034193438;
        } else {
            if (input[1] >= 7.545) {
                var118 = -0.009322706;
            } else {
                var118 = 0.021449316;
            }
        }
    } else {
        if (input[12] >= 1.0) {
            var118 = -0.022037035;
        } else {
            if (input[9] >= 1.0) {
                if (input[2] >= 6.355) {
                    if (input[47] >= 1.0) {
                        var118 = -0.016248217;
                    } else {
                        var118 = 0.01509879;
                    }
                } else {
                    var118 = -0.043491893;
                }
            } else {
                if (input[5] >= 1.0) {
                    if (input[0] >= 4.565) {
                        var118 = -0.016900992;
                    } else {
                        var118 = 0.031078639;
                    }
                } else {
                    if (input[8] >= 1.0) {
                        var118 = 0.0056123477;
                    } else {
                        var118 = 0.07435146;
                    }
                }
            }
        }
    }
    double var119;
    if (input[20] >= 1.0) {
        var119 = -0.021035513;
    } else {
        if (input[10] >= 1.0) {
            var119 = -0.017882764;
        } else {
            if (input[55] >= 1.0) {
                var119 = 0.057099927;
            } else {
                if (input[2] >= 5.375) {
                    if (input[1] >= 6.925) {
                        if (input[81] >= 1.0) {
                            var119 = -0.057884473;
                        } else {
                            if (input[0] >= 8.695) {
                                var119 = 0.027035838;
                            } else {
                                var119 = -0.009897971;
                            }
                        }
                    } else {
                        if (input[27] >= 1.0) {
                            var119 = -0.00043869627;
                        } else {
                            if (input[0] >= 5.255) {
                                var119 = 0.008286774;
                            } else {
                                var119 = 0.050291937;
                            }
                        }
                    }
                } else {
                    if (input[0] >= 2.3049998) {
                        var119 = -0.05572411;
                    } else {
                        var119 = 0.00082143856;
                    }
                }
            }
        }
    }
    double var120;
    if (input[20] >= 1.0) {
        var120 = -0.017337095;
    } else {
        if (input[86] >= 1.0) {
            if (input[58] >= 1.0) {
                if (input[21] >= 1.0) {
                    var120 = -0.006518924;
                } else {
                    var120 = 0.03451337;
                }
            } else {
                if (input[2] >= 12.575) {
                    var120 = -0.053136833;
                } else {
                    var120 = -0.0068815458;
                }
            }
        } else {
            if (input[58] >= 1.0) {
                var120 = -0.025253793;
            } else {
                if (input[2] >= 5.045) {
                    if (input[0] >= 9.605) {
                        var120 = 0.049805414;
                    } else {
                        if (input[2] >= 9.4) {
                            var120 = -0.037318554;
                        } else {
                            if (input[0] >= 4.455) {
                                var120 = 0.048597228;
                            } else {
                                var120 = -0.034120616;
                            }
                        }
                    }
                } else {
                    var120 = 0.05880521;
                }
            }
        }
    }
    double var121;
    if (input[0] >= 9.155) {
        if (input[86] >= 1.0) {
            var121 = -0.029911855;
        } else {
            var121 = 0.0047045127;
        }
    } else {
        if (input[65] >= 1.0) {
            if (input[97] >= 1.0) {
                if (input[42] >= 1.0) {
                    var121 = 0.029852945;
                } else {
                    if (input[1] >= 4.535) {
                        var121 = -0.04656796;
                    } else {
                        if (input[0] >= 3.065) {
                            var121 = -0.009328406;
                        } else {
                            var121 = 0.0324614;
                        }
                    }
                }
            } else {
                var121 = 0.0475183;
            }
        } else {
            var121 = 0.035152156;
        }
    }
    double var122;
    if (input[40] >= 1.0) {
        var122 = -0.016959902;
    } else {
        if (input[59] >= 1.0) {
            var122 = 0.04216648;
        } else {
            if (input[1] >= 9.665) {
                var122 = 0.03214916;
            } else {
                if (input[2] >= 13.975) {
                    var122 = -0.04088618;
                } else {
                    if (input[45] >= 1.0) {
                        var122 = -0.04160161;
                    } else {
                        if (input[2] >= 2.5349998) {
                            if (input[47] >= 1.0) {
                                var122 = 0.048549116;
                            } else {
                                if (input[42] >= 1.0) {
                                    var122 = -0.028603643;
                                } else {
                                    if (input[1] >= 4.835) {
                                        var122 = 0.033988457;
                                    } else {
                                        var122 = 0.0010854482;
                                    }
                                }
                            }
                        } else {
                            var122 = -0.02935826;
                        }
                    }
                }
            }
        }
    }
    double var123;
    if (input[20] >= 1.0) {
        var123 = -0.017414572;
    } else {
        if (input[86] >= 1.0) {
            if (input[58] >= 1.0) {
                if (input[21] >= 1.0) {
                    var123 = -0.007083375;
                } else {
                    var123 = 0.031585045;
                }
            } else {
                if (input[2] >= 12.505) {
                    var123 = -0.043268032;
                } else {
                    var123 = -0.009486971;
                }
            }
        } else {
            if (input[58] >= 1.0) {
                var123 = -0.018494181;
            } else {
                if (input[2] >= 5.045) {
                    if (input[0] >= 4.375) {
                        if (input[1] >= 6.925) {
                            var123 = -0.01306208;
                        } else {
                            var123 = 0.050370447;
                        }
                    } else {
                        var123 = -0.031485833;
                    }
                } else {
                    var123 = 0.054448925;
                }
            }
        }
    }
    double var124;
    if (input[21] >= 1.0) {
        if (input[9] >= 1.0) {
            var124 = -0.012064914;
        } else {
            if (input[2] >= 12.485) {
                var124 = -0.007415362;
            } else {
                var124 = 0.0485803;
            }
        }
    } else {
        if (input[81] >= 1.0) {
            if (input[1] >= 6.9449997) {
                var124 = -0.044846736;
            } else {
                if (input[74] >= 1.0) {
                    var124 = 0.0103250425;
                } else {
                    var124 = -0.02290654;
                }
            }
        } else {
            if (input[2] >= 3.3850002) {
                if (input[86] >= 1.0) {
                    if (input[0] >= 8.725) {
                        var124 = -0.040250603;
                    } else {
                        if (input[1] >= 5.5950003) {
                            var124 = 0.04918785;
                        } else {
                            var124 = -0.025333969;
                        }
                    }
                } else {
                    if (input[0] >= 4.925) {
                        var124 = 0.049534872;
                    } else {
                        var124 = 0.01301716;
                    }
                }
            } else {
                var124 = -0.020498585;
            }
        }
    }
    double var125;
    if (input[0] >= 3.9850001) {
        if (input[45] >= 1.0) {
            var125 = 0.029613629;
        } else {
            if (input[86] >= 1.0) {
                if (input[97] >= 1.0) {
                    if (input[42] >= 1.0) {
                        var125 = 0.0029124822;
                    } else {
                        var125 = -0.08535901;
                    }
                } else {
                    var125 = 0.014541256;
                }
            } else {
                if (input[44] >= 1.0) {
                    var125 = 0.025530007;
                } else {
                    if (input[9] >= 1.0) {
                        var125 = 0.019164316;
                    } else {
                        var125 = -0.038559534;
                    }
                }
            }
        }
    } else {
        if (input[12] >= 1.0) {
            var125 = -0.016163455;
        } else {
            if (input[9] >= 1.0) {
                var125 = -0.009978557;
            } else {
                var125 = 0.042494696;
            }
        }
    }
    double var126;
    if (input[1] >= 7.035) {
        if (input[2] >= 20.415) {
            var126 = -0.016413452;
        } else {
            if (input[100] >= 1.0) {
                var126 = 0.036498483;
            } else {
                var126 = -0.004395116;
            }
        }
    } else {
        if (input[55] >= 1.0) {
            var126 = -0.0351751;
        } else {
            if (input[81] >= 1.0) {
                if (input[2] >= 7.6549997) {
                    var126 = 0.010827079;
                } else {
                    var126 = 0.05175266;
                }
            } else {
                if (input[2] >= 5.4849997) {
                    if (input[0] >= 5.355) {
                        if (input[1] >= 5.6949997) {
                            var126 = -0.005242485;
                        } else {
                            var126 = -0.021943357;
                        }
                    } else {
                        var126 = 0.023755249;
                    }
                } else {
                    var126 = -0.04647439;
                }
            }
        }
    }
    double var127;
    if (input[0] >= 3.8049998) {
        if (input[17] >= 1.0) {
            var127 = -0.0358712;
        } else {
            if (input[59] >= 1.0) {
                var127 = -0.035188045;
            } else {
                if (input[34] >= 1.0) {
                    if (input[1] >= 8.665) {
                        var127 = 0.04661623;
                    } else {
                        if (input[81] >= 1.0) {
                            var127 = 0.017192394;
                        } else {
                            if (input[21] >= 1.0) {
                                var127 = -0.06188442;
                            } else {
                                var127 = -0.007865385;
                            }
                        }
                    }
                } else {
                    var127 = 0.06094398;
                }
            }
        }
    } else {
        if (input[1] >= 4.3050003) {
            if (input[0] >= 2.545) {
                var127 = 0.004427402;
            } else {
                var127 = -0.018421298;
            }
        } else {
            var127 = 0.029428612;
        }
    }
    double var128;
    if (input[21] >= 1.0) {
        if (input[2] >= 14.184999) {
            var128 = -0.0132350465;
        } else {
            if (input[9] >= 1.0) {
                var128 = -0.010730106;
            } else {
                var128 = 0.04980315;
            }
        }
    } else {
        if (input[41] >= 1.0) {
            var128 = 0.03346627;
        } else {
            if (input[55] >= 1.0) {
                var128 = -0.06898341;
            } else {
                if (input[42] >= 1.0) {
                    var128 = -0.0431171;
                } else {
                    if (input[40] >= 1.0) {
                        var128 = -0.03254232;
                    } else {
                        if (input[45] >= 1.0) {
                            var128 = -0.020144403;
                        } else {
                            if (input[2] >= 9.355) {
                                var128 = 0.000019028263;
                            } else {
                                if (input[2] >= 4.185) {
                                    var128 = 0.08780342;
                                } else {
                                    var128 = -0.007590913;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var129;
    if (input[2] >= 3.6750002) {
        if (input[116] >= 1.0) {
            if (input[2] >= 5.835) {
                if (input[59] >= 1.0) {
                    var129 = -0.014354538;
                } else {
                    if (input[5] >= 1.0) {
                        var129 = -0.020205678;
                    } else {
                        if (input[8] >= 1.0) {
                            var129 = -0.008622186;
                        } else {
                            if (input[2] >= 12.684999) {
                                if (input[58] >= 1.0) {
                                    var129 = 0.017124569;
                                } else {
                                    var129 = 0.0722181;
                                }
                            } else {
                                var129 = 0.0036559314;
                            }
                        }
                    }
                }
            } else {
                var129 = -0.035070647;
            }
        } else {
            if (input[0] >= 4.875) {
                var129 = -0.0407419;
            } else {
                var129 = 0.00053490966;
            }
        }
    } else {
        var129 = 0.016358456;
    }
    double var130;
    if (input[21] >= 1.0) {
        if (input[1] >= 5.615) {
            if (input[0] >= 6.915) {
                var130 = 0.031695932;
            } else {
                var130 = -0.039865132;
            }
        } else {
            var130 = 0.032128997;
        }
    } else {
        if (input[41] >= 1.0) {
            var130 = 0.028508922;
        } else {
            if (input[55] >= 1.0) {
                var130 = -0.05994485;
            } else {
                if (input[5] >= 1.0) {
                    var130 = 0.037690677;
                } else {
                    if (input[0] >= 10.375) {
                        var130 = -0.056171186;
                    } else {
                        if (input[1] >= 7.315) {
                            var130 = 0.047934502;
                        } else {
                            if (input[9] >= 1.0) {
                                if (input[0] >= 3.415) {
                                    var130 = -0.04794356;
                                } else {
                                    var130 = 0.011724859;
                                }
                            } else {
                                var130 = 0.014242302;
                            }
                        }
                    }
                }
            }
        }
    }
    double var131;
    if (input[2] >= 26.985) {
        var131 = 0.019271558;
    } else {
        if (input[17] >= 1.0) {
            var131 = -0.028664498;
        } else {
            if (input[53] >= 1.0) {
                var131 = 0.031923354;
            } else {
                if (input[42] >= 1.0) {
                    var131 = 0.03924809;
                } else {
                    if (input[97] >= 1.0) {
                        if (input[2] >= 15.595) {
                            var131 = 0.008478321;
                        } else {
                            if (input[44] >= 1.0) {
                                var131 = 0.0032182473;
                            } else {
                                if (input[2] >= 2.955) {
                                    var131 = -0.085529804;
                                } else {
                                    var131 = 0.0072803716;
                                }
                            }
                        }
                    } else {
                        var131 = 0.024155844;
                    }
                }
            }
        }
    }
    double var132;
    if (input[44] >= 1.0) {
        if (input[2] >= 13.715) {
            var132 = -0.050629415;
        } else {
            if (input[2] >= 8.125) {
                var132 = 0.03253652;
            } else {
                if (input[2] >= 5.5150003) {
                    var132 = -0.027493108;
                } else {
                    var132 = 0.0032431989;
                }
            }
        }
    } else {
        if (input[100] >= 1.0) {
            if (input[2] >= 15.285) {
                if (input[0] >= 12.559999) {
                    var132 = 0.01284242;
                } else {
                    var132 = 0.06174493;
                }
            } else {
                if (input[1] >= 5.745) {
                    var132 = -0.04547999;
                } else {
                    if (input[36] >= 1.0) {
                        var132 = 0.04482533;
                    } else {
                        var132 = -0.010783227;
                    }
                }
            }
        } else {
            var132 = -0.028861023;
        }
    }
    double var133;
    if (input[27] >= 1.0) {
        if (input[2] >= 5.4449997) {
            if (input[2] >= 22.535) {
                var133 = 0.010307564;
            } else {
                if (input[1] >= 6.0150003) {
                    var133 = -0.0073039834;
                } else {
                    var133 = -0.041493926;
                }
            }
        } else {
            var133 = 0.009250312;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[86] >= 1.0) {
                var133 = -0.026543584;
            } else {
                var133 = 0.02378714;
            }
        } else {
            if (input[9] >= 1.0) {
                if (input[1] >= 5.295) {
                    var133 = 0.009123401;
                } else {
                    var133 = 0.0458802;
                }
            } else {
                if (input[2] >= 10.805) {
                    var133 = 0.002961381;
                } else {
                    var133 = -0.02152143;
                }
            }
        }
    }
    double var134;
    if (input[27] >= 1.0) {
        if (input[36] >= 1.0) {
            var134 = 0.010161031;
        } else {
            if (input[9] >= 1.0) {
                var134 = -0.027678411;
            } else {
                if (input[81] >= 1.0) {
                    var134 = 0.023046754;
                } else {
                    var134 = -0.016939843;
                }
            }
        }
    } else {
        if (input[36] >= 1.0) {
            var134 = -0.008739815;
        } else {
            if (input[32] >= 1.0) {
                var134 = -0.015365993;
            } else {
                if (input[2] >= 16.935001) {
                    var134 = -0.015188558;
                } else {
                    if (input[1] >= 4.9049997) {
                        if (input[9] >= 1.0) {
                            var134 = -0.010570969;
                        } else {
                            var134 = 0.02958163;
                        }
                    } else {
                        var134 = 0.045666397;
                    }
                }
            }
        }
    }
    double var135;
    if (input[44] >= 1.0) {
        if (input[37] >= 1.0) {
            var135 = 0.028757894;
        } else {
            if (input[9] >= 1.0) {
                var135 = -0.05067793;
            } else {
                var135 = 0.010026016;
            }
        }
    } else {
        if (input[9] >= 1.0) {
            if (input[1] >= 4.895) {
                if (input[0] >= 5.495) {
                    if (input[1] >= 8.225) {
                        var135 = -0.003363108;
                    } else {
                        var135 = 0.038452886;
                    }
                } else {
                    var135 = -0.029704422;
                }
            } else {
                var135 = 0.046027303;
            }
        } else {
            if (input[86] >= 1.0) {
                var135 = 0.016296105;
            } else {
                if (input[2] >= 9.37) {
                    var135 = -0.04373049;
                } else {
                    var135 = -0.00045086714;
                }
            }
        }
    }
    double var136;
    if (input[21] >= 1.0) {
        if (input[2] >= 14.085) {
            var136 = -0.017720519;
        } else {
            if (input[86] >= 1.0) {
                var136 = -0.0022860004;
            } else {
                var136 = 0.04637854;
            }
        }
    } else {
        if (input[41] >= 1.0) {
            var136 = 0.030244205;
        } else {
            if (input[81] >= 1.0) {
                if (input[9] >= 1.0) {
                    var136 = -0.059432518;
                } else {
                    var136 = -0.0051616626;
                }
            } else {
                if (input[1] >= 6.125) {
                    if (input[0] >= 9.155) {
                        var136 = -0.011322815;
                    } else {
                        var136 = 0.042947643;
                    }
                } else {
                    if (input[126] >= 1.0) {
                        var136 = 0.0033767773;
                    } else {
                        var136 = -0.01643422;
                    }
                }
            }
        }
    }
    double var137;
    if (input[2] >= 26.985) {
        var137 = 0.017475948;
    } else {
        if (input[74] >= 1.0) {
            if (input[2] >= 14.845) {
                if (input[86] >= 1.0) {
                    var137 = -0.0077315336;
                } else {
                    var137 = -0.044278543;
                }
            } else {
                if (input[1] >= 5.995) {
                    if (input[1] >= 6.895) {
                        var137 = 0.03902418;
                    } else {
                        var137 = 0.010262938;
                    }
                } else {
                    if (input[21] >= 1.0) {
                        var137 = 0.024559336;
                    } else {
                        if (input[1] >= 3.665) {
                            var137 = -0.04829615;
                        } else {
                            var137 = 0.002401895;
                        }
                    }
                }
            }
        } else {
            if (input[2] >= 12.215) {
                var137 = 0.04293348;
            } else {
                if (input[0] >= 4.635) {
                    var137 = -0.03663545;
                } else {
                    var137 = 0.029572222;
                }
            }
        }
    }
    double var138;
    if (input[20] >= 1.0) {
        var138 = -0.014204835;
    } else {
        if (input[0] >= 11.765) {
            var138 = 0.03381005;
        } else {
            if (input[100] >= 1.0) {
                if (input[42] >= 1.0) {
                    var138 = 0.03067892;
                } else {
                    if (input[5] >= 1.0) {
                        var138 = -0.052826114;
                    } else {
                        if (input[74] >= 1.0) {
                            if (input[1] >= 5.995) {
                                var138 = 0.040226586;
                            } else {
                                if (input[44] >= 1.0) {
                                    var138 = -0.002373383;
                                } else {
                                    var138 = -0.043557465;
                                }
                            }
                        } else {
                            var138 = 0.038363323;
                        }
                    }
                }
            } else {
                var138 = -0.030218238;
            }
        }
    }
    double var139;
    if (input[86] >= 1.0) {
        if (input[44] >= 1.0) {
            if (input[2] >= 10.684999) {
                var139 = -0.0548099;
            } else {
                var139 = 0.0039997995;
            }
        } else {
            if (input[2] >= 11.725) {
                var139 = 0.033392843;
            } else {
                var139 = -0.008469255;
            }
        }
    } else {
        if (input[58] >= 1.0) {
            var139 = -0.027833223;
        } else {
            if (input[40] >= 1.0) {
                var139 = -0.010653874;
            } else {
                if (input[55] >= 1.0) {
                    var139 = -0.008961448;
                } else {
                    if (input[81] >= 1.0) {
                        var139 = 0.059848342;
                    } else {
                        if (input[2] >= 6.895) {
                            var139 = -0.010271264;
                        } else {
                            var139 = 0.023525506;
                        }
                    }
                }
            }
        }
    }
    double var140;
    if (input[27] >= 1.0) {
        if (input[86] >= 1.0) {
            var140 = -0.020750366;
        } else {
            if (input[0] >= 9.345) {
                var140 = 0.018195283;
            } else {
                if (input[2] >= 7.6549997) {
                    var140 = -0.024420718;
                } else {
                    var140 = 0.010491469;
                }
            }
        }
    } else {
        if (input[2] >= 6.125) {
            if (input[34] >= 1.0) {
                if (input[2] >= 9.325) {
                    if (input[124] >= 1.0) {
                        var140 = 0.0049748747;
                    } else {
                        var140 = -0.040559985;
                    }
                } else {
                    var140 = 0.033175085;
                }
            } else {
                var140 = 0.0299783;
            }
        } else {
            if (input[1] >= 4.4049997) {
                var140 = -0.02199545;
            } else {
                var140 = 0.01077028;
            }
        }
    }
    double var141;
    if (input[13] >= 1.0) {
        var141 = -0.015746254;
    } else {
        if (input[2] >= 14.855) {
            if (input[40] >= 1.0) {
                var141 = 0.0134675875;
            } else {
                if (input[1] >= 7.705) {
                    var141 = -0.0071166283;
                } else {
                    var141 = -0.03418761;
                }
            }
        } else {
            if (input[44] >= 1.0) {
                if (input[2] >= 8.125) {
                    var141 = 0.044732627;
                } else {
                    var141 = 0.0012842526;
                }
            } else {
                if (input[9] >= 1.0) {
                    if (input[0] >= 2.93) {
                        var141 = -0.013704254;
                    } else {
                        var141 = 0.040907495;
                    }
                } else {
                    var141 = -0.026524283;
                }
            }
        }
    }
    double var142;
    if (input[116] >= 1.0) {
        if (input[2] >= 5.365) {
            if (input[59] >= 1.0) {
                var142 = -0.012311723;
            } else {
                if (input[81] >= 1.0) {
                    var142 = -0.012153513;
                } else {
                    if (input[34] >= 1.0) {
                        if (input[86] >= 1.0) {
                            if (input[1] >= 6.665) {
                                var142 = 0.042505722;
                            } else {
                                var142 = 0.0068071345;
                            }
                        } else {
                            var142 = -0.022757256;
                        }
                    } else {
                        var142 = 0.05257653;
                    }
                }
            }
        } else {
            var142 = -0.021008011;
        }
    } else {
        if (input[2] >= 5.1549997) {
            var142 = -0.031679872;
        } else {
            var142 = 0.025737246;
        }
    }
    double var143;
    if (input[86] >= 1.0) {
        if (input[44] >= 1.0) {
            if (input[2] >= 10.684999) {
                var143 = -0.05034297;
            } else {
                var143 = 0.0034962785;
            }
        } else {
            if (input[58] >= 1.0) {
                var143 = 0.028103737;
            } else {
                var143 = -0.008319055;
            }
        }
    } else {
        if (input[58] >= 1.0) {
            var143 = -0.022948105;
        } else {
            if (input[40] >= 1.0) {
                var143 = -0.011196858;
            } else {
                if (input[55] >= 1.0) {
                    var143 = -0.0092004845;
                } else {
                    if (input[81] >= 1.0) {
                        var143 = 0.054160703;
                    } else {
                        if (input[2] >= 6.895) {
                            var143 = -0.0044858265;
                        } else {
                            var143 = 0.022226527;
                        }
                    }
                }
            }
        }
    }
    double var144;
    if (input[27] >= 1.0) {
        if (input[86] >= 1.0) {
            var144 = -0.020564524;
        } else {
            if (input[9] >= 1.0) {
                var144 = -0.010381337;
            } else {
                var144 = 0.014183339;
            }
        }
    } else {
        if (input[2] >= 6.375) {
            if (input[34] >= 1.0) {
                if (input[2] >= 9.375) {
                    if (input[44] >= 1.0) {
                        var144 = 0.009282904;
                    } else {
                        var144 = -0.031442627;
                    }
                } else {
                    var144 = 0.029230114;
                }
            } else {
                var144 = 0.028349793;
            }
        } else {
            if (input[1] >= 4.5550003) {
                var144 = -0.020278513;
            } else {
                var144 = 0.010167701;
            }
        }
    }
    double var145;
    if (input[34] >= 1.0) {
        if (input[59] >= 1.0) {
            var145 = 0.040747486;
        } else {
            if (input[1] >= 8.265) {
                var145 = 0.03290465;
            } else {
                if (input[0] >= 4.685) {
                    if (input[1] >= 6.0950003) {
                        var145 = -0.0155433435;
                    } else {
                        var145 = -0.053394675;
                    }
                } else {
                    if (input[1] >= 5.785) {
                        var145 = -0.023443038;
                    } else {
                        if (input[1] >= 3.835) {
                            var145 = 0.034870144;
                        } else {
                            var145 = -0.00349786;
                        }
                    }
                }
            }
        }
    } else {
        if (input[9] >= 1.0) {
            var145 = -0.038127303;
        } else {
            var145 = 0.017903274;
        }
    }
    double var146;
    if (input[10] >= 1.0) {
        var146 = -0.01622719;
    } else {
        if (input[55] >= 1.0) {
            var146 = 0.03738914;
        } else {
            if (input[34] >= 1.0) {
                if (input[97] >= 1.0) {
                    if (input[81] >= 1.0) {
                        var146 = 0.020214044;
                    } else {
                        if (input[42] >= 1.0) {
                            var146 = 0.013522276;
                        } else {
                            if (input[27] >= 1.0) {
                                var146 = -0.07645406;
                            } else {
                                if (input[0] >= 5.0150003) {
                                    var146 = -0.043948986;
                                } else {
                                    if (input[1] >= 4.085) {
                                        var146 = -0.010818103;
                                    } else {
                                        var146 = 0.01202326;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    var146 = 0.020327814;
                }
            } else {
                var146 = 0.025829123;
            }
        }
    }
    double var147;
    if (input[34] >= 1.0) {
        if (input[59] >= 1.0) {
            var147 = 0.033991307;
        } else {
            if (input[1] >= 8.265) {
                var147 = 0.027849581;
            } else {
                if (input[0] >= 4.685) {
                    if (input[2] >= 11.139999) {
                        var147 = -0.046110652;
                    } else {
                        var147 = -0.013005715;
                    }
                } else {
                    if (input[1] >= 5.785) {
                        var147 = -0.019118404;
                    } else {
                        if (input[1] >= 3.835) {
                            var147 = 0.029630523;
                        } else {
                            var147 = -0.004451586;
                        }
                    }
                }
            }
        }
    } else {
        if (input[9] >= 1.0) {
            var147 = -0.03586368;
        } else {
            var147 = 0.012362543;
        }
    }
    double var148;
    if (input[1] >= 8.345) {
        if (input[0] >= 10.425) {
            var148 = -0.030463561;
        } else {
            var148 = 0.005331534;
        }
    } else {
        if (input[2] >= 22.535) {
            var148 = 0.035393078;
        } else {
            if (input[41] >= 1.0) {
                var148 = 0.029821606;
            } else {
                if (input[9] >= 1.0) {
                    if (input[2] >= 4.365) {
                        if (input[47] >= 1.0) {
                            var148 = -0.013528778;
                        } else {
                            var148 = -0.059539825;
                        }
                    } else {
                        var148 = 0.031496298;
                    }
                } else {
                    if (input[2] >= 4.4449997) {
                        if (input[1] >= 5.375) {
                            var148 = 0.05359992;
                        } else {
                            var148 = 0.002434066;
                        }
                    } else {
                        var148 = -0.040688433;
                    }
                }
            }
        }
    }
    double var149;
    if (input[34] >= 1.0) {
        if (input[2] >= 18.785) {
            var149 = -0.027835662;
        } else {
            if (input[45] >= 1.0) {
                var149 = -0.03445045;
            } else {
                if (input[1] >= 6.6549997) {
                    if (input[9] >= 1.0) {
                        var149 = 0.05587478;
                    } else {
                        var149 = 0.01011211;
                    }
                } else {
                    if (input[0] >= 3.9250002) {
                        if (input[86] >= 1.0) {
                            var149 = -0.045859836;
                        } else {
                            var149 = 0.013429293;
                        }
                    } else {
                        var149 = 0.03543605;
                    }
                }
            }
        }
    } else {
        if (input[9] >= 1.0) {
            var149 = -0.029147428;
        } else {
            var149 = 0.007676145;
        }
    }
    double var150;
    if (input[1] >= 8.345) {
        if (input[0] >= 10.345) {
            var150 = -0.024427751;
        } else {
            var150 = 0.0028980605;
        }
    } else {
        if (input[2] >= 21.825) {
            var150 = 0.03319854;
        } else {
            if (input[74] >= 1.0) {
                if (input[58] >= 1.0) {
                    var150 = 0.016798059;
                } else {
                    if (input[33] >= 1.0) {
                        var150 = 0.022458972;
                    } else {
                        if (input[1] >= 6.0150003) {
                            var150 = 0.004408891;
                        } else {
                            var150 = -0.05908416;
                        }
                    }
                }
            } else {
                if (input[27] >= 1.0) {
                    var150 = -0.0023243874;
                } else {
                    var150 = 0.027530257;
                }
            }
        }
    }
    double var151;
    if (input[1] >= 6.2650003) {
        if (input[59] >= 1.0) {
            var151 = -0.034354918;
        } else {
            if (input[74] >= 1.0) {
                if (input[21] >= 1.0) {
                    var151 = -0.018250635;
                } else {
                    var151 = 0.046843383;
                }
            } else {
                var151 = -0.028846467;
            }
        }
    } else {
        if (input[2] >= 8.365) {
            if (input[86] >= 1.0) {
                var151 = 0.0016079063;
            } else {
                var151 = 0.029583042;
            }
        } else {
            if (input[37] >= 1.0) {
                var151 = -0.024960535;
            } else {
                if (input[47] >= 1.0) {
                    var151 = 0.032747593;
                } else {
                    var151 = -0.016742257;
                }
            }
        }
    }
    double var152;
    if (input[1] >= 6.2650003) {
        if (input[59] >= 1.0) {
            var152 = -0.028874116;
        } else {
            if (input[74] >= 1.0) {
                if (input[47] >= 1.0) {
                    var152 = 0.039460883;
                } else {
                    var152 = -0.015050329;
                }
            } else {
                var152 = -0.024314575;
            }
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[0] >= 4.225) {
                if (input[86] >= 1.0) {
                    var152 = -0.013086865;
                } else {
                    var152 = 0.03443258;
                }
            } else {
                if (input[1] >= 4.085) {
                    var152 = -0.03748553;
                } else {
                    var152 = 0.0066229417;
                }
            }
        } else {
            var152 = 0.020978736;
        }
    }
    double var153;
    if (input[17] >= 1.0) {
        var153 = -0.012746152;
    } else {
        if (input[53] >= 1.0) {
            var153 = 0.030295407;
        } else {
            if (input[42] >= 1.0) {
                var153 = 0.036438517;
            } else {
                if (input[97] >= 1.0) {
                    if (input[58] >= 1.0) {
                        var153 = 0.0068922383;
                    } else {
                        if (input[47] >= 1.0) {
                            if (input[124] >= 1.0) {
                                var153 = 0.017903281;
                            } else {
                                var153 = -0.022828292;
                            }
                        } else {
                            if (input[0] >= 4.385) {
                                var153 = -0.019343283;
                            } else {
                                var153 = -0.079753585;
                            }
                        }
                    }
                } else {
                    var153 = 0.027449943;
                }
            }
        }
    }
    double var154;
    if (input[1] >= 6.145) {
        if (input[34] >= 1.0) {
            if (input[2] >= 20.415) {
                var154 = -0.039174818;
            } else {
                if (input[0] >= 5.325) {
                    if (input[86] >= 1.0) {
                        var154 = 0.06944243;
                    } else {
                        var154 = -0.012489543;
                    }
                } else {
                    var154 = -0.016693242;
                }
            }
        } else {
            var154 = -0.025125867;
        }
    } else {
        if (input[116] >= 1.0) {
            if (input[2] >= 5.365) {
                if (input[81] >= 1.0) {
                    var154 = 0.0044514113;
                } else {
                    if (input[86] >= 1.0) {
                        var154 = 0.005142347;
                    } else {
                        var154 = 0.035863858;
                    }
                }
            } else {
                var154 = -0.011076262;
            }
        } else {
            var154 = -0.009926906;
        }
    }
    double var155;
    if (input[1] >= 8.345) {
        if (input[0] >= 9.825) {
            var155 = -0.020744864;
        } else {
            var155 = -0.00018288453;
        }
    } else {
        if (input[2] >= 22.535) {
            var155 = 0.03012528;
        } else {
            if (input[74] >= 1.0) {
                if (input[2] >= 11.315001) {
                    var155 = -0.03434473;
                } else {
                    if (input[0] >= 4.675) {
                        var155 = 0.03614839;
                    } else {
                        if (input[0] >= 2.7350001) {
                            var155 = -0.027191637;
                        } else {
                            var155 = 0.016227266;
                        }
                    }
                }
            } else {
                if (input[27] >= 1.0) {
                    var155 = -0.0022150357;
                } else {
                    var155 = 0.025260696;
                }
            }
        }
    }
    double var156;
    if (input[1] >= 8.345) {
        if (input[0] >= 9.975) {
            var156 = -0.017662497;
        } else {
            var156 = -0.00023692744;
        }
    } else {
        if (input[59] >= 1.0) {
            var156 = 0.023019325;
        } else {
            if (input[34] >= 1.0) {
                if (input[0] >= 4.685) {
                    if (input[9] >= 1.0) {
                        var156 = -0.013932157;
                    } else {
                        var156 = -0.046401516;
                    }
                } else {
                    if (input[1] >= 5.725) {
                        var156 = -0.012826968;
                    } else {
                        if (input[126] >= 1.0) {
                            var156 = 0.031340055;
                        } else {
                            var156 = 0.0051283133;
                        }
                    }
                }
            } else {
                var156 = 0.0350615;
            }
        }
    }
    double var157;
    if (input[2] >= 2.3850002) {
        if (input[1] >= 6.2650003) {
            if (input[59] >= 1.0) {
                var157 = -0.024079042;
            } else {
                if (input[9] >= 1.0) {
                    var157 = 0.02130739;
                } else {
                    var157 = -0.015595541;
                }
            }
        } else {
            if (input[124] >= 1.0) {
                if (input[86] >= 1.0) {
                    var157 = -0.0049705766;
                } else {
                    var157 = 0.030298576;
                }
            } else {
                if (input[9] >= 1.0) {
                    var157 = -0.026240984;
                } else {
                    var157 = 0.016904892;
                }
            }
        }
    } else {
        var157 = -0.015663538;
    }
    double var158;
    if (input[34] >= 1.0) {
        if (input[59] >= 1.0) {
            var158 = 0.029096656;
        } else {
            if (input[36] >= 1.0) {
                var158 = 0.020794082;
            } else {
                if (input[1] >= 8.265) {
                    var158 = 0.018010281;
                } else {
                    if (input[58] >= 1.0) {
                        var158 = -0.039830618;
                    } else {
                        if (input[86] >= 1.0) {
                            var158 = -0.03247563;
                        } else {
                            var158 = 0.012289534;
                        }
                    }
                }
            }
        }
    } else {
        if (input[47] >= 1.0) {
            var158 = -0.029780535;
        } else {
            var158 = 0.01168475;
        }
    }
    double var159;
    if (input[1] >= 8.345) {
        if (input[0] >= 9.975) {
            var159 = -0.016278952;
        } else {
            var159 = -0.0013432372;
        }
    } else {
        if (input[2] >= 21.825) {
            var159 = 0.02300254;
        } else {
            if (input[74] >= 1.0) {
                if (input[42] >= 1.0) {
                    var159 = 0.019506209;
                } else {
                    if (input[58] >= 1.0) {
                        var159 = 0.025411943;
                    } else {
                        if (input[47] >= 1.0) {
                            var159 = -0.0074419277;
                        } else {
                            var159 = -0.04779752;
                        }
                    }
                }
            } else {
                if (input[81] >= 1.0) {
                    var159 = -0.0056714052;
                } else {
                    var159 = 0.0203148;
                }
            }
        }
    }
    double var160;
    if (input[12] >= 1.0) {
        var160 = -0.015030286;
    } else {
        if (input[1] >= 5.785) {
            if (input[58] >= 1.0) {
                var160 = -0.027370991;
            } else {
                if (input[2] >= 20.525002) {
                    var160 = -0.025654862;
                } else {
                    if (input[126] >= 1.0) {
                        var160 = 0.035369363;
                    } else {
                        var160 = -0.0005652757;
                    }
                }
            }
        } else {
            if (input[2] >= 5.675) {
                if (input[126] >= 1.0) {
                    var160 = -0.012943101;
                } else {
                    if (input[9] >= 1.0) {
                        var160 = 0.027636796;
                    } else {
                        var160 = -0.005101209;
                    }
                }
            } else {
                var160 = 0.03620381;
            }
        }
    }
    double var161;
    if (input[20] >= 1.0) {
        var161 = -0.013877579;
    } else {
        if (input[0] >= 10.555) {
            var161 = 0.024144521;
        } else {
            if (input[100] >= 1.0) {
                if (input[42] >= 1.0) {
                    var161 = 0.034515277;
                } else {
                    if (input[5] >= 1.0) {
                        var161 = -0.042181738;
                    } else {
                        if (input[36] >= 1.0) {
                            var161 = -0.021884529;
                        } else {
                            if (input[44] >= 1.0) {
                                var161 = 0.04813064;
                            } else {
                                if (input[0] >= 5.5150003) {
                                    var161 = 0.029815868;
                                } else {
                                    var161 = -0.034623805;
                                }
                            }
                        }
                    }
                }
            } else {
                var161 = -0.026584314;
            }
        }
    }
    double var162;
    if (input[41] >= 1.0) {
        var162 = 0.015132849;
    } else {
        if (input[5] >= 1.0) {
            if (input[2] >= 7.425) {
                var162 = 0.036711093;
            } else {
                var162 = -0.0013494082;
            }
        } else {
            if (input[43] >= 1.0) {
                var162 = 0.024917154;
            } else {
                if (input[58] >= 1.0) {
                    if (input[0] >= 7.0150003) {
                        var162 = 0.020535287;
                    } else {
                        var162 = -0.002791741;
                    }
                } else {
                    if (input[2] >= 6.725) {
                        if (input[34] >= 1.0) {
                            var162 = -0.068827845;
                        } else {
                            var162 = -0.009457667;
                        }
                    } else {
                        var162 = 0.0092929965;
                    }
                }
            }
        }
    }
    double var163;
    if (input[34] >= 1.0) {
        if (input[2] >= 18.795) {
            var163 = -0.021589715;
        } else {
            if (input[45] >= 1.0) {
                var163 = -0.029556332;
            } else {
                if (input[21] >= 1.0) {
                    if (input[58] >= 1.0) {
                        var163 = 0.016805617;
                    } else {
                        var163 = -0.02166458;
                    }
                } else {
                    if (input[58] >= 1.0) {
                        var163 = -0.013861974;
                    } else {
                        if (input[2] >= 9.875) {
                            var163 = 0.0010949257;
                        } else {
                            if (input[1] >= 4.825) {
                                var163 = 0.07555117;
                            } else {
                                var163 = 0.016510494;
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[9] >= 1.0) {
            var163 = -0.026037995;
        } else {
            var163 = 0.008061966;
        }
    }
    double var164;
    if (input[1] >= 4.495) {
        if (input[2] >= 4.615) {
            if (input[74] >= 1.0) {
                if (input[5] >= 1.0) {
                    var164 = 0.046705022;
                } else {
                    if (input[2] >= 11.085) {
                        if (input[1] >= 7.715) {
                            var164 = 0.014169889;
                        } else {
                            var164 = -0.041422285;
                        }
                    } else {
                        var164 = 0.022704225;
                    }
                }
            } else {
                if (input[9] >= 1.0) {
                    var164 = 0.019771282;
                } else {
                    var164 = -0.040670555;
                }
            }
        } else {
            var164 = -0.024355369;
        }
    } else {
        if (input[9] >= 1.0) {
            var164 = 0.029622221;
        } else {
            var164 = -0.010812458;
        }
    }
    double var165;
    if (input[87] >= 1.0) {
        var165 = 0.013949475;
    } else {
        if (input[2] >= 3.6750002) {
            if (input[2] >= 6.705) {
                if (input[1] >= 8.135) {
                    if (input[0] >= 9.975) {
                        var165 = -0.022363566;
                    } else {
                        var165 = -0.005235723;
                    }
                } else {
                    if (input[34] >= 1.0) {
                        if (input[1] >= 5.395) {
                            if (input[124] >= 1.0) {
                                var165 = 0.019204678;
                            } else {
                                var165 = -0.007200135;
                            }
                        } else {
                            var165 = -0.025623778;
                        }
                    } else {
                        var165 = 0.042545393;
                    }
                }
            } else {
                var165 = -0.030879663;
            }
        } else {
            var165 = 0.03150815;
        }
    }
    double var166;
    if (input[34] >= 1.0) {
        if (input[59] >= 1.0) {
            var166 = 0.029842619;
        } else {
            if (input[1] >= 8.015) {
                var166 = 0.024297548;
            } else {
                if (input[0] >= 4.685) {
                    var166 = -0.03570455;
                } else {
                    if (input[1] >= 5.2349997) {
                        var166 = -0.008020394;
                    } else {
                        if (input[1] >= 4.0550003) {
                            var166 = 0.027565261;
                        } else {
                            var166 = 0.006018906;
                        }
                    }
                }
            }
        }
    } else {
        if (input[0] >= 7.675) {
            var166 = 0.003876603;
        } else {
            var166 = -0.02256887;
        }
    }
    double var167;
    if (input[12] >= 1.0) {
        var167 = -0.013578608;
    } else {
        if (input[1] >= 6.145) {
            if (input[86] >= 1.0) {
                if (input[44] >= 1.0) {
                    var167 = -0.03709772;
                } else {
                    var167 = -0.005044331;
                }
            } else {
                if (input[2] >= 16.035) {
                    var167 = 0.019533442;
                } else {
                    var167 = -0.0065621063;
                }
            }
        } else {
            if (input[9] >= 1.0) {
                if (input[2] >= 6.705) {
                    var167 = 0.019180732;
                } else {
                    var167 = -0.031142535;
                }
            } else {
                if (input[0] >= 5.325) {
                    var167 = -0.01029185;
                } else {
                    var167 = 0.050776433;
                }
            }
        }
    }
    double var168;
    if (input[34] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[81] >= 1.0) {
                if (input[9] >= 1.0) {
                    var168 = 0.040570572;
                } else {
                    var168 = 0.00795528;
                }
            } else {
                if (input[27] >= 1.0) {
                    var168 = -0.051685125;
                } else {
                    if (input[0] >= 6.6549997) {
                        var168 = -0.022143027;
                    } else {
                        if (input[2] >= 5.495) {
                            var168 = 0.02938888;
                        } else {
                            var168 = -0.021571863;
                        }
                    }
                }
            }
        } else {
            var168 = 0.026727146;
        }
    } else {
        if (input[0] >= 7.725) {
            var168 = 0.0030485636;
        } else {
            var168 = -0.021164332;
        }
    }
    double var169;
    if (input[20] >= 1.0) {
        var169 = -0.0133878095;
    } else {
        if (input[1] >= 8.345) {
            var169 = -0.015075967;
        } else {
            if (input[2] >= 21.235) {
                var169 = 0.039702725;
            } else {
                if (input[126] >= 1.0) {
                    if (input[44] >= 1.0) {
                        var169 = -0.013389085;
                    } else {
                        var169 = 0.026030533;
                    }
                } else {
                    if (input[2] >= 6.875) {
                        if (input[0] >= 6.895) {
                            var169 = -0.015612449;
                        } else {
                            var169 = 0.021894699;
                        }
                    } else {
                        if (input[0] >= 3.0949998) {
                            var169 = -0.02913322;
                        } else {
                            var169 = -0.0024081145;
                        }
                    }
                }
            }
        }
    }
    double var170;
    if (input[17] >= 1.0) {
        var170 = -0.012260334;
    } else {
        if (input[53] >= 1.0) {
            var170 = 0.027994769;
        } else {
            if (input[42] >= 1.0) {
                var170 = 0.032752797;
            } else {
                if (input[97] >= 1.0) {
                    if (input[58] >= 1.0) {
                        var170 = 0.005811318;
                    } else {
                        if (input[47] >= 1.0) {
                            if (input[1] >= 6.395) {
                                var170 = 0.008325785;
                            } else {
                                var170 = -0.014969345;
                            }
                        } else {
                            if (input[0] >= 4.4049997) {
                                var170 = -0.016652364;
                            } else {
                                var170 = -0.0669664;
                            }
                        }
                    }
                } else {
                    var170 = 0.027822623;
                }
            }
        }
    }
    double var171;
    if (input[1] >= 4.275) {
        if (input[17] >= 1.0) {
            var171 = -0.02465582;
        } else {
            if (input[59] >= 1.0) {
                var171 = -0.026235137;
            } else {
                if (input[2] >= 8.005) {
                    if (input[21] >= 1.0) {
                        var171 = -0.0033537254;
                    } else {
                        if (input[1] >= 8.345) {
                            var171 = -0.006457416;
                        } else {
                            var171 = 0.060612522;
                        }
                    }
                } else {
                    if (input[1] >= 5.425) {
                        var171 = 0.0015154099;
                    } else {
                        var171 = -0.025083646;
                    }
                }
            }
        }
    } else {
        if (input[0] >= 3.375) {
            var171 = 0.00018380997;
        } else {
            var171 = 0.017040433;
        }
    }
    double var172;
    if (input[34] >= 1.0) {
        if (input[0] >= 3.9250002) {
            if (input[59] >= 1.0) {
                var172 = 0.020131376;
            } else {
                if (input[1] >= 8.615) {
                    var172 = 0.021588795;
                } else {
                    if (input[2] >= 7.5550003) {
                        if (input[1] >= 6.0950003) {
                            var172 = -0.012057858;
                        } else {
                            var172 = -0.04274519;
                        }
                    } else {
                        var172 = -0.004104901;
                    }
                }
            }
        } else {
            if (input[126] >= 1.0) {
                var172 = 0.0335621;
            } else {
                var172 = 0.003597713;
            }
        }
    } else {
        var172 = -0.011985823;
    }
    double var173;
    if (input[0] >= 12.725) {
        var173 = -0.014739379;
    } else {
        if (input[65] >= 1.0) {
            if (input[97] >= 1.0) {
                if (input[1] >= 4.275) {
                    if (input[58] >= 1.0) {
                        var173 = -0.04406688;
                    } else {
                        if (input[2] >= 5.975) {
                            if (input[0] >= 5.725) {
                                var173 = 0.0027194181;
                            } else {
                                var173 = -0.039689306;
                            }
                        } else {
                            var173 = 0.017947681;
                        }
                    }
                } else {
                    var173 = 0.012189883;
                }
            } else {
                var173 = 0.034054402;
            }
        } else {
            var173 = 0.028546775;
        }
    }
    double var174;
    if (input[100] >= 1.0) {
        if (input[21] >= 1.0) {
            if (input[86] >= 1.0) {
                var174 = -0.0021753642;
            } else {
                var174 = 0.041887596;
            }
        } else {
            if (input[2] >= 14.085) {
                if (input[2] >= 22.545) {
                    var174 = -0.008917273;
                } else {
                    var174 = 0.04429842;
                }
            } else {
                if (input[74] >= 1.0) {
                    if (input[86] >= 1.0) {
                        var174 = -0.023299778;
                    } else {
                        var174 = 0.014268362;
                    }
                } else {
                    var174 = -0.042713944;
                }
            }
        }
    } else {
        var174 = -0.016199067;
    }
    double var175;
    if (input[100] >= 1.0) {
        if (input[21] >= 1.0) {
            if (input[86] >= 1.0) {
                var175 = -0.0018314156;
            } else {
                var175 = 0.03502477;
            }
        } else {
            if (input[2] >= 14.085) {
                if (input[2] >= 22.545) {
                    var175 = -0.007488254;
                } else {
                    var175 = 0.03768465;
                }
            } else {
                if (input[1] >= 4.535) {
                    if (input[74] >= 1.0) {
                        var175 = 0.0009607944;
                    } else {
                        var175 = -0.051898498;
                    }
                } else {
                    var175 = 0.0049485094;
                }
            }
        }
    } else {
        var175 = -0.013076732;
    }
    double var176;
    if (input[0] >= 8.184999) {
        if (input[9] >= 1.0) {
            var176 = 0.0053052553;
        } else {
            var176 = -0.02205997;
        }
    } else {
        if (input[12] >= 1.0) {
            var176 = -0.016694067;
        } else {
            if (input[9] >= 1.0) {
                if (input[124] >= 1.0) {
                    var176 = 0.0010046939;
                } else {
                    var176 = -0.02966269;
                }
            } else {
                if (input[5] >= 1.0) {
                    var176 = 0.008804688;
                } else {
                    var176 = 0.045267254;
                }
            }
        }
    }
    double var177;
    if (input[34] >= 1.0) {
        if (input[2] >= 18.814999) {
            var177 = -0.0215779;
        } else {
            if (input[45] >= 1.0) {
                var177 = -0.025906064;
            } else {
                if (input[21] >= 1.0) {
                    var177 = -0.00568717;
                } else {
                    if (input[2] >= 9.375) {
                        var177 = -0.0041459184;
                    } else {
                        if (input[1] >= 5.415) {
                            var177 = 0.05780939;
                        } else {
                            var177 = 0.019160658;
                        }
                    }
                }
            }
        }
    } else {
        var177 = -0.013050425;
    }
    double var178;
    if (input[20] >= 1.0) {
        var178 = -0.013583294;
    } else {
        if (input[0] >= 11.765) {
            var178 = 0.02468714;
        } else {
            if (input[100] >= 1.0) {
                if (input[42] >= 1.0) {
                    var178 = 0.026817543;
                } else {
                    if (input[5] >= 1.0) {
                        var178 = -0.034141216;
                    } else {
                        if (input[0] >= 4.745) {
                            var178 = 0.025341814;
                        } else {
                            if (input[2] >= 4.025) {
                                var178 = -0.033599123;
                            } else {
                                var178 = 0.01839603;
                            }
                        }
                    }
                }
            } else {
                var178 = -0.029024458;
            }
        }
    }
    double var179;
    if (input[41] >= 1.0) {
        var179 = 0.014530813;
    } else {
        if (input[5] >= 1.0) {
            var179 = 0.023629483;
        } else {
            if (input[81] >= 1.0) {
                if (input[47] >= 1.0) {
                    var179 = -0.039518747;
                } else {
                    var179 = -0.008597301;
                }
            } else {
                if (input[33] >= 1.0) {
                    var179 = -0.028389385;
                } else {
                    if (input[2] >= 7.715) {
                        if (input[0] >= 8.115) {
                            var179 = 0.0008476034;
                        } else {
                            var179 = 0.04429751;
                        }
                    } else {
                        var179 = -0.01480377;
                    }
                }
            }
        }
    }
    double var180;
    if (input[1] >= 5.005) {
        if (input[34] >= 1.0) {
            if (input[2] >= 18.814999) {
                var180 = -0.0248799;
            } else {
                if (input[21] >= 1.0) {
                    var180 = -0.0114092035;
                } else {
                    if (input[74] >= 1.0) {
                        var180 = 0.055352688;
                    } else {
                        var180 = -0.007967784;
                    }
                }
            }
        } else {
            var180 = -0.019907106;
        }
    } else {
        if (input[86] >= 1.0) {
            var180 = -0.0063942107;
        } else {
            if (input[2] >= 6.375) {
                var180 = 0.030854754;
            } else {
                var180 = -0.0050612884;
            }
        }
    }
    double var181;
    if (input[20] >= 1.0) {
        var181 = -0.01220251;
    } else {
        if (input[0] >= 11.765) {
            var181 = 0.024214083;
        } else {
            if (input[100] >= 1.0) {
                if (input[21] >= 1.0) {
                    if (input[86] >= 1.0) {
                        var181 = 0.0010273425;
                    } else {
                        var181 = 0.028315738;
                    }
                } else {
                    if (input[9] >= 1.0) {
                        if (input[2] >= 9.275) {
                            var181 = -0.006406158;
                        } else {
                            var181 = 0.018626489;
                        }
                    } else {
                        if (input[44] >= 1.0) {
                            var181 = 0.026721103;
                        } else {
                            var181 = -0.05500329;
                        }
                    }
                }
            } else {
                var181 = -0.025310405;
            }
        }
    }
    double var182;
    if (input[74] >= 1.0) {
        if (input[5] >= 1.0) {
            var182 = 0.020734567;
        } else {
            if (input[1] >= 8.055) {
                var182 = 0.016711464;
            } else {
                if (input[58] >= 1.0) {
                    var182 = 0.010208497;
                } else {
                    if (input[2] >= 6.1949997) {
                        var182 = -0.04032296;
                    } else {
                        var182 = -0.009980234;
                    }
                }
            }
        }
    } else {
        if (input[1] >= 5.915) {
            var182 = -0.01298592;
        } else {
            var182 = 0.027155962;
        }
    }
    double var183;
    if (input[41] >= 1.0) {
        var183 = 0.013627515;
    } else {
        if (input[5] >= 1.0) {
            var183 = 0.016923184;
        } else {
            if (input[81] >= 1.0) {
                if (input[47] >= 1.0) {
                    var183 = -0.03368012;
                } else {
                    var183 = -0.0072565232;
                }
            } else {
                if (input[33] >= 1.0) {
                    var183 = -0.021811571;
                } else {
                    if (input[2] >= 8.975) {
                        if (input[0] >= 8.895) {
                            var183 = 0.0016832434;
                        } else {
                            var183 = 0.040625405;
                        }
                    } else {
                        if (input[47] >= 1.0) {
                            var183 = 0.006021652;
                        } else {
                            var183 = -0.021273598;
                        }
                    }
                }
            }
        }
    }
    double var184;
    if (input[9] >= 1.0) {
        if (input[44] >= 1.0) {
            var184 = -0.018550947;
        } else {
            if (input[2] >= 16.345001) {
                var184 = 0.032997202;
            } else {
                if (input[0] >= 3.705) {
                    var184 = -0.026149413;
                } else {
                    var184 = 0.033065245;
                }
            }
        }
    } else {
        if (input[2] >= 4.4449997) {
            if (input[2] >= 14.635) {
                var184 = -0.021698186;
            } else {
                if (input[5] >= 1.0) {
                    var184 = -0.003527249;
                } else {
                    var184 = 0.04058381;
                }
            }
        } else {
            var184 = -0.032528892;
        }
    }
    double var185;
    if (input[34] >= 1.0) {
        if (input[59] >= 1.0) {
            var185 = 0.03013916;
        } else {
            if (input[36] >= 1.0) {
                var185 = 0.0230093;
            } else {
                if (input[1] >= 8.265) {
                    var185 = 0.014224555;
                } else {
                    if (input[0] >= 4.685) {
                        if (input[1] >= 5.935) {
                            var185 = -0.009692416;
                        } else {
                            var185 = -0.046461817;
                        }
                    } else {
                        if (input[1] >= 5.0150003) {
                            var185 = -0.019556776;
                        } else {
                            var185 = 0.013424298;
                        }
                    }
                }
            }
        }
    } else {
        var185 = -0.010375876;
    }
    double var186;
    if (input[1] >= 6.9049997) {
        if (input[0] >= 11.545) {
            var186 = -0.022338754;
        } else {
            if (input[2] >= 16.205) {
                var186 = 0.015996728;
            } else {
                var186 = -0.010174315;
            }
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[2] >= 4.605) {
                if (input[2] >= 10.715) {
                    var186 = -0.011311048;
                } else {
                    if (input[9] >= 1.0) {
                        var186 = -0.009333684;
                    } else {
                        var186 = 0.04153336;
                    }
                }
            } else {
                var186 = -0.03096205;
            }
        } else {
            if (input[0] >= 4.565) {
                var186 = -0.0016675696;
            } else {
                var186 = 0.031825494;
            }
        }
    }
    double var187;
    if (input[9] >= 1.0) {
        if (input[44] >= 1.0) {
            var187 = -0.013623253;
        } else {
            if (input[1] >= 5.455) {
                if (input[2] >= 16.345001) {
                    var187 = 0.019785175;
                } else {
                    var187 = -0.01565114;
                }
            } else {
                var187 = 0.029765135;
            }
        }
    } else {
        if (input[21] >= 1.0) {
            var187 = 0.016224382;
        } else {
            if (input[44] >= 1.0) {
                var187 = 0.020876978;
            } else {
                var187 = -0.04251745;
            }
        }
    }
    double var188;
    if (input[41] >= 1.0) {
        var188 = 0.014298019;
    } else {
        if (input[65] >= 1.0) {
            if (input[97] >= 1.0) {
                if (input[32] >= 1.0) {
                    var188 = 0.01606067;
                } else {
                    if (input[74] >= 1.0) {
                        if (input[5] >= 1.0) {
                            var188 = 0.037332874;
                        } else {
                            if (input[2] >= 9.135) {
                                var188 = -0.053442538;
                            } else {
                                var188 = 0.012462785;
                            }
                        }
                    } else {
                        var188 = -0.055807568;
                    }
                }
            } else {
                var188 = 0.024692375;
            }
        } else {
            var188 = 0.022225985;
        }
    }
    double var189;
    if (input[9] >= 1.0) {
        if (input[21] >= 1.0) {
            var189 = -0.01414791;
        } else {
            if (input[44] >= 1.0) {
                var189 = -0.0137589015;
            } else {
                if (input[27] >= 1.0) {
                    var189 = 0.005367025;
                } else {
                    var189 = 0.035725433;
                }
            }
        }
    } else {
        if (input[2] >= 4.4849997) {
            if (input[1] >= 7.635) {
                var189 = -0.022054382;
            } else {
                if (input[1] >= 5.415) {
                    var189 = 0.03191644;
                } else {
                    var189 = -0.0058942726;
                }
            }
        } else {
            var189 = -0.025714243;
        }
    }
    double var190;
    if (input[74] >= 1.0) {
        if (input[2] >= 23.92) {
            var190 = 0.022566224;
        } else {
            if (input[34] >= 1.0) {
                if (input[21] >= 1.0) {
                    var190 = -0.022673761;
                } else {
                    if (input[1] >= 5.3450003) {
                        var190 = 0.04951164;
                    } else {
                        var190 = -0.011418218;
                    }
                }
            } else {
                var190 = -0.038199004;
            }
        }
    } else {
        if (input[58] >= 1.0) {
            var190 = -0.018371271;
        } else {
            var190 = 0.025313541;
        }
    }
    double var191;
    if (input[1] >= 5.005) {
        if (input[2] >= 11.785) {
            if (input[1] >= 8.345) {
                var191 = -0.020470427;
            } else {
                if (input[124] >= 1.0) {
                    var191 = 0.01255101;
                } else {
                    var191 = -0.0119379675;
                }
            }
        } else {
            if (input[0] >= 5.085) {
                var191 = 0.025140237;
            } else {
                if (input[2] >= 5.245) {
                    var191 = -0.01235029;
                } else {
                    var191 = -0.0019948368;
                }
            }
        }
    } else {
        if (input[86] >= 1.0) {
            var191 = -0.0067459713;
        } else {
            if (input[0] >= 3.6750002) {
                var191 = 0.031081775;
            } else {
                var191 = -0.0064799325;
            }
        }
    }
    double var192;
    if (input[20] >= 1.0) {
        var192 = -0.011643494;
    } else {
        if (input[0] >= 10.745) {
            var192 = 0.018767992;
        } else {
            if (input[100] >= 1.0) {
                if (input[42] >= 1.0) {
                    var192 = 0.032600254;
                } else {
                    if (input[5] >= 1.0) {
                        var192 = -0.036387604;
                    } else {
                        if (input[81] >= 1.0) {
                            var192 = 0.026527228;
                        } else {
                            if (input[47] >= 1.0) {
                                var192 = -0.02426411;
                            } else {
                                var192 = 0.010850178;
                            }
                        }
                    }
                }
            } else {
                var192 = -0.022798391;
            }
        }
    }
    double var193;
    if (input[117] >= 1.0) {
        var193 = 0.012660704;
    } else {
        if (input[116] >= 1.0) {
            if (input[2] >= 5.365) {
                if (input[59] >= 1.0) {
                    var193 = -0.013905226;
                } else {
                    if (input[81] >= 1.0) {
                        var193 = -0.012046048;
                    } else {
                        if (input[21] >= 1.0) {
                            var193 = 0.005190435;
                        } else {
                            if (input[9] >= 1.0) {
                                var193 = 0.044283886;
                            } else {
                                var193 = 0.0066313297;
                            }
                        }
                    }
                }
            } else {
                var193 = -0.01745559;
            }
        } else {
            var193 = -0.021545853;
        }
    }
    double var194;
    if (input[0] >= 9.155) {
        if (input[86] >= 1.0) {
            var194 = -0.027335148;
        } else {
            var194 = 0.0099929795;
        }
    } else {
        if (input[97] >= 1.0) {
            if (input[42] >= 1.0) {
                var194 = 0.037937477;
            } else {
                if (input[1] >= 4.535) {
                    if (input[0] >= 4.745) {
                        var194 = -0.007571327;
                    } else {
                        var194 = -0.036185596;
                    }
                } else {
                    var194 = 0.007466921;
                }
            }
        } else {
            var194 = 0.019272381;
        }
    }
    double var195;
    if (input[42] >= 1.0) {
        var195 = -0.014061042;
    } else {
        if (input[97] >= 1.0) {
            if (input[17] >= 1.0) {
                var195 = 0.031180207;
            } else {
                if (input[2] >= 2.815) {
                    if (input[34] >= 1.0) {
                        if (input[81] >= 1.0) {
                            var195 = 0.0020681566;
                        } else {
                            var195 = -0.051135834;
                        }
                    } else {
                        var195 = 0.020944595;
                    }
                } else {
                    var195 = 0.019347597;
                }
            }
        } else {
            var195 = 0.028750358;
        }
    }
    double var196;
    if (input[17] >= 1.0) {
        var196 = -0.014020533;
    } else {
        if (input[40] >= 1.0) {
            var196 = -0.018630203;
        } else {
            if (input[74] >= 1.0) {
                if (input[9] >= 1.0) {
                    if (input[124] >= 1.0) {
                        var196 = 0.02662815;
                    } else {
                        var196 = -0.004224783;
                    }
                } else {
                    if (input[0] >= 4.225) {
                        var196 = 0.003691536;
                    } else {
                        var196 = -0.043524172;
                    }
                }
            } else {
                if (input[1] >= 5.975) {
                    var196 = 0.009953055;
                } else {
                    var196 = 0.038204454;
                }
            }
        }
    }
    double var197;
    if (input[42] >= 1.0) {
        var197 = -0.012113326;
    } else {
        if (input[9] >= 1.0) {
            if (input[116] >= 1.0) {
                if (input[47] >= 1.0) {
                    var197 = 0.0053813886;
                } else {
                    var197 = 0.04033829;
                }
            } else {
                var197 = -0.011456603;
            }
        } else {
            if (input[21] >= 1.0) {
                var197 = 0.020541323;
            } else {
                if (input[44] >= 1.0) {
                    var197 = 0.0070455126;
                } else {
                    var197 = -0.034953382;
                }
            }
        }
    }
    double var198;
    if (input[100] >= 1.0) {
        if (input[86] >= 1.0) {
            if (input[44] >= 1.0) {
                var198 = -0.04258621;
            } else {
                var198 = 0.017975694;
            }
        } else {
            if (input[36] >= 1.0) {
                var198 = -0.02624529;
            } else {
                if (input[2] >= 6.455) {
                    if (input[2] >= 12.345) {
                        var198 = 0.027501151;
                    } else {
                        var198 = -0.013413164;
                    }
                } else {
                    var198 = 0.05249862;
                }
            }
        }
    } else {
        var198 = -0.011921224;
    }
    double var199;
    if (input[0] >= 4.415) {
        if (input[100] >= 1.0) {
            if (input[34] >= 1.0) {
                if (input[58] >= 1.0) {
                    var199 = -0.028656047;
                } else {
                    if (input[1] >= 6.8050003) {
                        var199 = -0.022745702;
                    } else {
                        var199 = 0.021154847;
                    }
                }
            } else {
                var199 = 0.044152837;
            }
        } else {
            var199 = -0.024695806;
        }
    } else {
        if (input[2] >= 5.135) {
            var199 = -0.0019293453;
        } else {
            var199 = 0.017204303;
        }
    }
    double var200;
    if (input[34] >= 1.0) {
        if (input[0] >= 4.505) {
            if (input[1] >= 5.935) {
                if (input[2] >= 19.994999) {
                    var200 = -0.026509754;
                } else {
                    if (input[86] >= 1.0) {
                        var200 = 0.05081931;
                    } else {
                        var200 = -0.0097598545;
                    }
                }
            } else {
                var200 = -0.027086297;
            }
        } else {
            if (input[2] >= 5.1549997) {
                var200 = 0.0033336235;
            } else {
                var200 = 0.030275421;
            }
        }
    } else {
        var200 = -0.013324761;
    }
    double var201;
    if (input[34] >= 1.0) {
        if (input[32] >= 1.0) {
            var201 = -0.023057789;
        } else {
            if (input[100] >= 1.0) {
                if (input[74] >= 1.0) {
                    if (input[0] >= 8.805) {
                        var201 = -0.032580774;
                    } else {
                        if (input[47] >= 1.0) {
                            var201 = 0.04969341;
                        } else {
                            var201 = 0.0054074;
                        }
                    }
                } else {
                    var201 = -0.030193452;
                }
            } else {
                var201 = 0.0500152;
            }
        }
    } else {
        var201 = -0.010754143;
    }
    double var202;
    if (input[100] >= 1.0) {
        if (input[86] >= 1.0) {
            if (input[44] >= 1.0) {
                var202 = -0.036617372;
            } else {
                var202 = 0.012899539;
            }
        } else {
            if (input[36] >= 1.0) {
                var202 = -0.024446195;
            } else {
                if (input[0] >= 4.4849997) {
                    if (input[1] >= 7.0150003) {
                        var202 = 0.008972524;
                    } else {
                        var202 = 0.043719355;
                    }
                } else {
                    var202 = 0.003936921;
                }
            }
        }
    } else {
        var202 = -0.012156495;
    }
    double var203;
    if (input[36] >= 1.0) {
        if (input[47] >= 1.0) {
            var203 = 0.025104979;
        } else {
            var203 = -0.0072004506;
        }
    } else {
        if (input[100] >= 1.0) {
            if (input[86] >= 1.0) {
                if (input[2] >= 8.565001) {
                    var203 = 0.009353974;
                } else {
                    var203 = -0.04673051;
                }
            } else {
                if (input[44] >= 1.0) {
                    var203 = 0.038721595;
                } else {
                    if (input[0] >= 8.995) {
                        var203 = 0.025021309;
                    } else {
                        var203 = -0.008257167;
                    }
                }
            }
        } else {
            var203 = -0.03294414;
        }
    }
    double var204;
    if (input[74] >= 1.0) {
        if (input[5] >= 1.0) {
            var204 = 0.017545266;
        } else {
            if (input[1] >= 7.725) {
                var204 = 0.01560728;
            } else {
                if (input[58] >= 1.0) {
                    var204 = 0.0076919002;
                } else {
                    var204 = -0.033327382;
                }
            }
        }
    } else {
        if (input[0] >= 4.635) {
            var204 = -0.00797902;
        } else {
            var204 = 0.02926358;
        }
    }
    double var205;
    if (input[117] >= 1.0) {
        var205 = 0.013361199;
    } else {
        if (input[65] >= 1.0) {
            if (input[97] >= 1.0) {
                if (input[1] >= 4.935) {
                    if (input[0] >= 8.735) {
                        var205 = -0.0026773906;
                    } else {
                        var205 = -0.037175544;
                    }
                } else {
                    if (input[1] >= 4.085) {
                        var205 = -0.002011293;
                    } else {
                        var205 = 0.0118553275;
                    }
                }
            } else {
                var205 = 0.030613495;
            }
        } else {
            var205 = 0.019794585;
        }
    }
    double var206;
    if (input[2] >= 14.645) {
        if (input[2] >= 22.535) {
            var206 = 0.005599655;
        } else {
            var206 = -0.015700854;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[2] >= 8.125) {
                var206 = 0.037952706;
            } else {
                var206 = -0.0026955095;
            }
        } else {
            if (input[47] >= 1.0) {
                if (input[2] >= 8.205) {
                    var206 = -0.01565932;
                } else {
                    var206 = 0.025797362;
                }
            } else {
                var206 = -0.032766543;
            }
        }
    }
    double var207;
    if (input[100] >= 1.0) {
        if (input[32] >= 1.0) {
            var207 = 0.025902482;
        } else {
            if (input[2] >= 4.375) {
                if (input[44] >= 1.0) {
                    if (input[1] >= 5.395) {
                        var207 = 0.013722034;
                    } else {
                        var207 = -0.034494862;
                    }
                } else {
                    if (input[2] >= 9.135) {
                        if (input[0] >= 8.955) {
                            var207 = 0.013087514;
                        } else {
                            var207 = -0.022381233;
                        }
                    } else {
                        var207 = 0.045560714;
                    }
                }
            } else {
                var207 = -0.024853956;
            }
        }
    } else {
        var207 = -0.009870282;
    }
    double var208;
    if (input[0] >= 9.155) {
        if (input[2] >= 23.335) {
            var208 = 0.005349869;
        } else {
            var208 = -0.018793343;
        }
    } else {
        if (input[34] >= 1.0) {
            if (input[0] >= 4.505) {
                if (input[1] >= 5.535) {
                    if (input[0] >= 6.9449997) {
                        var208 = 0.02073809;
                    } else {
                        var208 = 0.0017112977;
                    }
                } else {
                    var208 = -0.031423822;
                }
            } else {
                if (input[2] >= 5.1549997) {
                    var208 = 0.0037800379;
                } else {
                    var208 = 0.029021766;
                }
            }
        } else {
            var208 = -0.009646226;
        }
    }
    double var209;
    if (input[42] >= 1.0) {
        var209 = -0.009824155;
    } else {
        if (input[97] >= 1.0) {
            if (input[17] >= 1.0) {
                var209 = 0.029143615;
            } else {
                if (input[86] >= 1.0) {
                    var209 = -0.029924795;
                } else {
                    if (input[44] >= 1.0) {
                        var209 = 0.02909051;
                    } else {
                        if (input[0] >= 7.8050003) {
                            var209 = 0.014584889;
                        } else {
                            var209 = -0.037632305;
                        }
                    }
                }
            }
        } else {
            var209 = 0.025621744;
        }
    }
    double var210;
    if (input[17] >= 1.0) {
        var210 = -0.013606783;
    } else {
        if (input[36] >= 1.0) {
            var210 = 0.02192123;
        } else {
            if (input[100] >= 1.0) {
                if (input[42] >= 1.0) {
                    var210 = 0.0440283;
                } else {
                    if (input[86] >= 1.0) {
                        var210 = -0.044430804;
                    } else {
                        if (input[0] >= 5.275) {
                            var210 = 0.022892706;
                        } else {
                            var210 = -0.014901134;
                        }
                    }
                }
            } else {
                var210 = -0.024354834;
            }
        }
    }
    double var211;
    if (input[42] >= 1.0) {
        var211 = -0.013324347;
    } else {
        if (input[97] >= 1.0) {
            if (input[17] >= 1.0) {
                var211 = 0.026844937;
            } else {
                if (input[2] >= 4.705) {
                    if (input[34] >= 1.0) {
                        if (input[2] >= 16.025002) {
                            var211 = -0.0076669496;
                        } else {
                            var211 = -0.03932176;
                        }
                    } else {
                        var211 = 0.01610927;
                    }
                } else {
                    var211 = 0.013090803;
                }
            }
        } else {
            var211 = 0.023819515;
        }
    }
    double var212;
    if (input[17] >= 1.0) {
        var212 = -0.014941059;
    } else {
        if (input[0] >= 11.615) {
            var212 = -0.01529658;
        } else {
            if (input[34] >= 1.0) {
                if (input[36] >= 1.0) {
                    var212 = 0.03796197;
                } else {
                    if (input[44] >= 1.0) {
                        var212 = 0.017725924;
                    } else {
                        if (input[1] >= 5.505) {
                            var212 = 0.020367738;
                        } else {
                            var212 = -0.03848072;
                        }
                    }
                }
            } else {
                var212 = -0.017543003;
            }
        }
    }
    double var213;
    if (input[100] >= 1.0) {
        if (input[36] >= 1.0) {
            var213 = -0.012228351;
        } else {
            if (input[86] >= 1.0) {
                if (input[2] >= 8.565001) {
                    var213 = 0.011582888;
                } else {
                    var213 = -0.036219202;
                }
            } else {
                if (input[2] >= 7.2650003) {
                    if (input[9] >= 1.0) {
                        var213 = 0.021741247;
                    } else {
                        var213 = -0.009003488;
                    }
                } else {
                    var213 = 0.039808743;
                }
            }
        }
    } else {
        var213 = -0.013347874;
    }
    double var214;
    if (input[0] >= 8.184999) {
        if (input[2] >= 23.92) {
            var214 = 0.0024011189;
        } else {
            var214 = -0.014593897;
        }
    } else {
        if (input[2] >= 6.105) {
            if (input[21] >= 1.0) {
                var214 = -0.0056135254;
            } else {
                if (input[1] >= 5.565) {
                    var214 = 0.033670608;
                } else {
                    var214 = -0.0020194615;
                }
            }
        } else {
            if (input[1] >= 4.495) {
                var214 = -0.014667625;
            } else {
                var214 = 0.008244224;
            }
        }
    }
    double var215;
    if (input[17] >= 1.0) {
        var215 = -0.013079421;
    } else {
        if (input[45] >= 1.0) {
            var215 = 0.02208684;
        } else {
            if (input[74] >= 1.0) {
                if (input[47] >= 1.0) {
                    if (input[27] >= 1.0) {
                        var215 = -0.01903221;
                    } else {
                        var215 = 0.024403423;
                    }
                } else {
                    if (input[86] >= 1.0) {
                        var215 = -0.048772737;
                    } else {
                        var215 = -0.005026456;
                    }
                }
            } else {
                var215 = 0.029860534;
            }
        }
    }
    double var216;
    if (input[43] >= 1.0) {
        var216 = 0.014619756;
    } else {
        if (input[21] >= 1.0) {
            if (input[44] >= 1.0) {
                var216 = -0.017683905;
            } else {
                var216 = 0.04442495;
            }
        } else {
            if (input[1] >= 8.305) {
                var216 = -0.042622447;
            } else {
                if (input[2] >= 15.605) {
                    var216 = 0.022896124;
                } else {
                    if (input[86] >= 1.0) {
                        var216 = 0.01734163;
                    } else {
                        if (input[2] >= 5.995) {
                            var216 = 0.00051789766;
                        } else {
                            var216 = -0.037175998;
                        }
                    }
                }
            }
        }
    }
    double var217;
    if (input[40] >= 1.0) {
        var217 = -0.014087084;
    } else {
        if (input[17] >= 1.0) {
            var217 = -0.019853162;
        } else {
            if (input[74] >= 1.0) {
                if (input[21] >= 1.0) {
                    var217 = -0.022316;
                } else {
                    if (input[1] >= 5.5950003) {
                        var217 = 0.04468064;
                    } else {
                        var217 = -0.020885453;
                    }
                }
            } else {
                if (input[2] >= 6.825) {
                    var217 = 0.035274208;
                } else {
                    var217 = 0.0054901857;
                }
            }
        }
    }
    double var218;
    if (input[1] >= 5.5150003) {
        if (input[2] >= 11.315001) {
            if (input[1] >= 7.285) {
                if (input[86] >= 1.0) {
                    var218 = 0.0051678205;
                } else {
                    var218 = -0.011826493;
                }
            } else {
                var218 = -0.023784205;
            }
        } else {
            var218 = 0.006690338;
        }
    } else {
        if (input[116] >= 1.0) {
            if (input[9] >= 1.0) {
                var218 = 0.025637819;
            } else {
                var218 = 0.0026208628;
            }
        } else {
            var218 = -0.0051481663;
        }
    }
    double var219;
    if (input[100] >= 1.0) {
        if (input[21] >= 1.0) {
            if (input[1] >= 5.935) {
                var219 = 0.0050688004;
            } else {
                var219 = 0.02382657;
            }
        } else {
            if (input[2] >= 14.085) {
                var219 = 0.017146824;
            } else {
                if (input[27] >= 1.0) {
                    var219 = -0.034374095;
                } else {
                    if (input[116] >= 1.0) {
                        var219 = -0.01699535;
                    } else {
                        var219 = 0.023476409;
                    }
                }
            }
        }
    } else {
        var219 = -0.013920442;
    }
    double var220;
    if (input[1] >= 5.5150003) {
        if (input[2] >= 11.315001) {
            if (input[1] >= 7.285) {
                if (input[86] >= 1.0) {
                    var220 = 0.0044509154;
                } else {
                    var220 = -0.010679388;
                }
            } else {
                var220 = -0.021238148;
            }
        } else {
            var220 = 0.006946891;
        }
    } else {
        if (input[116] >= 1.0) {
            if (input[9] >= 1.0) {
                var220 = 0.022991955;
            } else {
                var220 = 0.00277987;
            }
        } else {
            var220 = -0.0062880525;
        }
    }
    double var221;
    if (input[100] >= 1.0) {
        if (input[36] >= 1.0) {
            var221 = -0.011480486;
        } else {
            if (input[86] >= 1.0) {
                if (input[2] >= 8.635) {
                    var221 = 0.008013146;
                } else {
                    var221 = -0.031593844;
                }
            } else {
                if (input[2] >= 6.7349997) {
                    if (input[2] >= 12.275) {
                        var221 = 0.020699888;
                    } else {
                        var221 = -0.013597334;
                    }
                } else {
                    var221 = 0.038524177;
                }
            }
        }
    } else {
        var221 = -0.011918609;
    }
    double var222;
    if (input[2] >= 13.934999) {
        if (input[1] >= 7.285) {
            var222 = -0.0010175428;
        } else {
            var222 = -0.01479741;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[9] >= 1.0) {
                var222 = -0.0044122012;
            } else {
                var222 = 0.030872537;
            }
        } else {
            if (input[47] >= 1.0) {
                if (input[2] >= 7.5550003) {
                    var222 = -0.011341272;
                } else {
                    var222 = 0.023761792;
                }
            } else {
                var222 = -0.03176528;
            }
        }
    }
    double var223;
    if (input[1] >= 3.6750002) {
        if (input[116] >= 1.0) {
            if (input[81] >= 1.0) {
                if (input[124] >= 1.0) {
                    var223 = 0.002582982;
                } else {
                    var223 = -0.026543045;
                }
            } else {
                if (input[1] >= 5.455) {
                    if (input[21] >= 1.0) {
                        var223 = -0.02422728;
                    } else {
                        if (input[2] >= 16.805) {
                            var223 = 0.03173538;
                        } else {
                            var223 = -0.0119736185;
                        }
                    }
                } else {
                    var223 = 0.03320824;
                }
            }
        } else {
            var223 = -0.018783642;
        }
    } else {
        var223 = 0.014670553;
    }
    double var224;
    if (input[2] >= 14.855) {
        if (input[9] >= 1.0) {
            var224 = 0.00057093444;
        } else {
            var224 = -0.01522077;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[2] >= 6.825) {
                var224 = 0.029584225;
            } else {
                var224 = -0.0053383205;
            }
        } else {
            if (input[47] >= 1.0) {
                if (input[2] >= 7.5550003) {
                    var224 = -0.011707516;
                } else {
                    var224 = 0.020003714;
                }
            } else {
                var224 = -0.027225783;
            }
        }
    }
    double var225;
    if (input[1] >= 3.6750002) {
        if (input[17] >= 1.0) {
            var225 = -0.020674912;
        } else {
            if (input[9] >= 1.0) {
                if (input[0] >= 6.505) {
                    var225 = 0.0049248845;
                } else {
                    var225 = -0.02287907;
                }
            } else {
                if (input[2] >= 16.634998) {
                    var225 = -0.01047405;
                } else {
                    if (input[0] >= 4.0950003) {
                        var225 = 0.03659068;
                    } else {
                        var225 = -0.0051376335;
                    }
                }
            }
        }
    } else {
        var225 = 0.012450085;
    }
    double var226;
    if (input[0] >= 3.8049998) {
        if (input[44] >= 1.0) {
            if (input[86] >= 1.0) {
                var226 = -0.043804944;
            } else {
                var226 = 0.020214226;
            }
        } else {
            if (input[86] >= 1.0) {
                var226 = 0.02156188;
            } else {
                if (input[27] >= 1.0) {
                    var226 = 0.012383493;
                } else {
                    var226 = -0.0308378;
                }
            }
        }
    } else {
        if (input[126] >= 1.0) {
            var226 = 0.021713676;
        } else {
            var226 = -0.0054194564;
        }
    }
    double var227;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[27] >= 1.0) {
                if (input[2] >= 14.469999) {
                    var227 = -0.0011596765;
                } else {
                    var227 = -0.03564823;
                }
            } else {
                if (input[1] >= 4.935) {
                    if (input[9] >= 1.0) {
                        var227 = -0.022250744;
                    } else {
                        var227 = 0.0041077007;
                    }
                } else {
                    if (input[2] >= 6.335) {
                        var227 = 0.020398036;
                    } else {
                        var227 = 0.00027240504;
                    }
                }
            }
        } else {
            var227 = 0.025479125;
        }
    } else {
        var227 = 0.010621684;
    }
    double var228;
    if (input[100] >= 1.0) {
        if (input[21] >= 1.0) {
            if (input[0] >= 5.5950003) {
                var228 = 0.0047955257;
            } else {
                var228 = 0.019074596;
            }
        } else {
            if (input[2] >= 14.475) {
                var228 = 0.014050647;
            } else {
                if (input[58] >= 1.0) {
                    var228 = -0.030697836;
                } else {
                    if (input[2] >= 7.075) {
                        var228 = -0.012684242;
                    } else {
                        var228 = 0.011808514;
                    }
                }
            }
        }
    } else {
        var228 = -0.012114613;
    }
    double var229;
    if (input[2] >= 14.855) {
        if (input[2] >= 25.055) {
            var229 = 0.00065218325;
        } else {
            var229 = -0.013843231;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[1] >= 5.215) {
                var229 = 0.028393969;
            } else {
                var229 = -0.008122867;
            }
        } else {
            if (input[47] >= 1.0) {
                if (input[2] >= 7.5550003) {
                    var229 = -0.009772293;
                } else {
                    var229 = 0.020059591;
                }
            } else {
                var229 = -0.022290856;
            }
        }
    }
    double var230;
    if (input[117] >= 1.0) {
        var230 = 0.012338138;
    } else {
        if (input[65] >= 1.0) {
            if (input[97] >= 1.0) {
                if (input[1] >= 4.935) {
                    if (input[5] >= 1.0) {
                        var230 = 0.0006016121;
                    } else {
                        if (input[2] >= 9.135) {
                            var230 = -0.042599335;
                        } else {
                            var230 = -0.0052068965;
                        }
                    }
                } else {
                    if (input[0] >= 3.645) {
                        var230 = 0.008672397;
                    } else {
                        var230 = -0.0011266965;
                    }
                }
            } else {
                var230 = 0.0226656;
            }
        } else {
            var230 = 0.01695388;
        }
    }
    double var231;
    if (input[100] >= 1.0) {
        if (input[45] >= 1.0) {
            var231 = 0.02110529;
        } else {
            if (input[86] >= 1.0) {
                if (input[0] >= 5.0550003) {
                    var231 = -0.046608534;
                } else {
                    var231 = 0.016005069;
                }
            } else {
                if (input[0] >= 4.455) {
                    if (input[9] >= 1.0) {
                        var231 = 0.029679624;
                    } else {
                        var231 = 0.004368835;
                    }
                } else {
                    var231 = -0.00806615;
                }
            }
        }
    } else {
        var231 = -0.013414365;
    }
    double var232;
    if (input[100] >= 1.0) {
        if (input[36] >= 1.0) {
            var232 = -0.0104381675;
        } else {
            if (input[86] >= 1.0) {
                if (input[2] >= 8.735) {
                    var232 = 0.010652442;
                } else {
                    var232 = -0.030983005;
                }
            } else {
                if (input[0] >= 4.475) {
                    if (input[1] >= 7.0150003) {
                        var232 = 0.0030531276;
                    } else {
                        var232 = 0.033842977;
                    }
                } else {
                    var232 = 0.0004771334;
                }
            }
        }
    } else {
        var232 = -0.010989226;
    }
    double var233;
    if (input[0] >= 3.8049998) {
        if (input[100] >= 1.0) {
            if (input[34] >= 1.0) {
                if (input[81] >= 1.0) {
                    var233 = 0.0066783866;
                } else {
                    if (input[47] >= 1.0) {
                        var233 = -0.042705208;
                    } else {
                        var233 = 0.003907359;
                    }
                }
            } else {
                var233 = 0.033757523;
            }
        } else {
            var233 = -0.018189255;
        }
    } else {
        if (input[126] >= 1.0) {
            var233 = 0.020014407;
        } else {
            var233 = -0.0025697704;
        }
    }
    double var234;
    if (input[40] >= 1.0) {
        var234 = -0.014517145;
    } else {
        if (input[2] >= 18.365002) {
            var234 = -0.019011917;
        } else {
            if (input[34] >= 1.0) {
                if (input[47] >= 1.0) {
                    if (input[1] >= 6.365) {
                        var234 = 0.04318008;
                    } else {
                        var234 = 0.010927536;
                    }
                } else {
                    if (input[27] >= 1.0) {
                        var234 = -0.024333114;
                    } else {
                        if (input[86] >= 1.0) {
                            var234 = -0.000026830987;
                        } else {
                            var234 = 0.020283485;
                        }
                    }
                }
            } else {
                var234 = -0.017855069;
            }
        }
    }
    double var235;
    if (input[40] >= 1.0) {
        var235 = -0.0122776525;
    } else {
        if (input[74] >= 1.0) {
            if (input[2] >= 15.675) {
                var235 = -0.039403513;
            } else {
                if (input[2] >= 6.705) {
                    if (input[9] >= 1.0) {
                        var235 = -0.00015242663;
                    } else {
                        var235 = 0.039717007;
                    }
                } else {
                    var235 = -0.0066707903;
                }
            }
        } else {
            if (input[2] >= 10.175) {
                var235 = 0.03602334;
            } else {
                var235 = -0.0054553966;
            }
        }
    }
    double var236;
    if (input[43] >= 1.0) {
        var236 = 0.013273748;
    } else {
        if (input[44] >= 1.0) {
            if (input[0] >= 4.725) {
                var236 = -0.03108518;
            } else {
                var236 = 0.008885893;
            }
        } else {
            if (input[21] >= 1.0) {
                var236 = 0.03993451;
            } else {
                if (input[9] >= 1.0) {
                    if (input[2] >= 15.895) {
                        var236 = 0.018160796;
                    } else {
                        var236 = -0.0012117305;
                    }
                } else {
                    var236 = -0.030146157;
                }
            }
        }
    }
    double var237;
    if (input[40] >= 1.0) {
        var237 = -0.011707851;
    } else {
        if (input[74] >= 1.0) {
            if (input[2] >= 15.675) {
                var237 = -0.032746032;
            } else {
                if (input[0] >= 4.615) {
                    var237 = 0.025299868;
                } else {
                    if (input[9] >= 1.0) {
                        var237 = 0.017509427;
                    } else {
                        var237 = -0.024385797;
                    }
                }
            }
        } else {
            if (input[2] >= 9.934999) {
                var237 = 0.031349957;
            } else {
                var237 = -0.0018618223;
            }
        }
    }
    double var238;
    if (input[43] >= 1.0) {
        var238 = 0.012814888;
    } else {
        if (input[2] >= 18.075) {
            var238 = 0.015281273;
        } else {
            if (input[0] >= 3.8049998) {
                if (input[42] >= 1.0) {
                    var238 = 0.0068113306;
                } else {
                    if (input[74] >= 1.0) {
                        var238 = -0.041868582;
                    } else {
                        var238 = 0.00036170025;
                    }
                }
            } else {
                if (input[1] >= 4.295) {
                    var238 = -0.004647535;
                } else {
                    var238 = 0.023714915;
                }
            }
        }
    }
    double var239;
    if (input[40] >= 1.0) {
        var239 = -0.010939331;
    } else {
        if (input[17] >= 1.0) {
            var239 = -0.01520735;
        } else {
            if (input[21] >= 1.0) {
                if (input[1] >= 6.085) {
                    var239 = -0.019053519;
                } else {
                    var239 = 0.005870532;
                }
            } else {
                if (input[1] >= 5.295) {
                    if (input[74] >= 1.0) {
                        var239 = 0.047112904;
                    } else {
                        var239 = -0.0012112672;
                    }
                } else {
                    if (input[0] >= 3.5149999) {
                        var239 = 0.0012992956;
                    } else {
                        var239 = -0.015037997;
                    }
                }
            }
        }
    }
    double var240;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[58] >= 1.0) {
                var240 = -0.02364841;
            } else {
                if (input[34] >= 1.0) {
                    if (input[124] >= 1.0) {
                        if (input[1] >= 5.815) {
                            var240 = 0.005633675;
                        } else {
                            var240 = 0.027114807;
                        }
                    } else {
                        var240 = -0.008945434;
                    }
                } else {
                    var240 = -0.023559326;
                }
            }
        } else {
            var240 = 0.024928523;
        }
    } else {
        var240 = 0.010549195;
    }
    double var241;
    if (input[100] >= 1.0) {
        if (input[45] >= 1.0) {
            var241 = 0.020352932;
        } else {
            if (input[86] >= 1.0) {
                if (input[0] >= 5.0550003) {
                    var241 = -0.039843053;
                } else {
                    var241 = 0.015609144;
                }
            } else {
                if (input[0] >= 4.925) {
                    if (input[1] >= 6.9449997) {
                        var241 = -0.0004299688;
                    } else {
                        var241 = 0.02550458;
                    }
                } else {
                    var241 = -0.0056695407;
                }
            }
        }
    } else {
        var241 = -0.010313516;
    }
    double var242;
    if (input[81] >= 1.0) {
        if (input[2] >= 7.975) {
            var242 = -0.01712347;
        } else {
            var242 = 0.008256107;
        }
    } else {
        if (input[21] >= 1.0) {
            var242 = -0.015483004;
        } else {
            if (input[2] >= 5.4849997) {
                if (input[86] >= 1.0) {
                    var242 = 0.0015590733;
                } else {
                    var242 = 0.037624218;
                }
            } else {
                var242 = -0.009840644;
            }
        }
    }
    double var243;
    if (input[86] >= 1.0) {
        if (input[58] >= 1.0) {
            var243 = 0.024069224;
        } else {
            var243 = -0.012421535;
        }
    } else {
        if (input[58] >= 1.0) {
            var243 = -0.028905911;
        } else {
            if (input[2] >= 6.035) {
                if (input[0] >= 9.005) {
                    var243 = 0.02237492;
                } else {
                    var243 = -0.018919863;
                }
            } else {
                var243 = 0.022094471;
            }
        }
    }
    double var244;
    if (input[40] >= 1.0) {
        var244 = -0.010883326;
    } else {
        if (input[126] >= 1.0) {
            if (input[44] >= 1.0) {
                var244 = -0.002772391;
            } else {
                var244 = 0.025654443;
            }
        } else {
            if (input[0] >= 8.184999) {
                var244 = -0.020482074;
            } else {
                if (input[2] >= 9.095) {
                    var244 = 0.017145121;
                } else {
                    if (input[0] >= 3.225) {
                        var244 = -0.011013353;
                    } else {
                        var244 = 0.00045889098;
                    }
                }
            }
        }
    }
    double var245;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[27] >= 1.0) {
                if (input[2] >= 14.05) {
                    var245 = -0.0000069034886;
                } else {
                    var245 = -0.029473629;
                }
            } else {
                if (input[116] >= 1.0) {
                    if (input[0] >= 6.975) {
                        var245 = 0.0037866777;
                    } else {
                        var245 = -0.013694782;
                    }
                } else {
                    var245 = 0.0133020105;
                }
            }
        } else {
            var245 = 0.022910262;
        }
    } else {
        var245 = 0.010933208;
    }
    double var246;
    if (input[100] >= 1.0) {
        if (input[42] >= 1.0) {
            var246 = 0.021002889;
        } else {
            if (input[2] >= 15.595) {
                var246 = 0.020049054;
            } else {
                if (input[1] >= 4.535) {
                    if (input[1] >= 5.925) {
                        var246 = -0.032349486;
                    } else {
                        var246 = -0.008427025;
                    }
                } else {
                    var246 = 0.0070516206;
                }
            }
        }
    } else {
        var246 = -0.0120153045;
    }
    double var247;
    if (input[40] >= 1.0) {
        var247 = -0.012136743;
    } else {
        if (input[17] >= 1.0) {
            var247 = -0.015277765;
        } else {
            if (input[74] >= 1.0) {
                if (input[1] >= 5.225) {
                    if (input[21] >= 1.0) {
                        var247 = -0.018895814;
                    } else {
                        var247 = 0.039185487;
                    }
                } else {
                    var247 = -0.023334121;
                }
            } else {
                var247 = 0.023520553;
            }
        }
    }
    double var248;
    if (input[100] >= 1.0) {
        if (input[21] >= 1.0) {
            var248 = 0.01915948;
        } else {
            if (input[2] >= 14.475) {
                var248 = 0.012313509;
            } else {
                if (input[1] >= 4.085) {
                    if (input[124] >= 1.0) {
                        var248 = -0.030676106;
                    } else {
                        var248 = -0.0027570613;
                    }
                } else {
                    var248 = 0.0076531535;
                }
            }
        }
    } else {
        var248 = -0.011964778;
    }
    double var249;
    if (input[2] >= 9.285) {
        if (input[34] >= 1.0) {
            if (input[21] >= 1.0) {
                var249 = 0.015367676;
            } else {
                if (input[27] >= 1.0) {
                    var249 = -0.0039704707;
                } else {
                    var249 = -0.039043188;
                }
            }
        } else {
            var249 = 0.011560079;
        }
    } else {
        if (input[47] >= 1.0) {
            var249 = 0.023162412;
        } else {
            if (input[126] >= 1.0) {
                var249 = 0.011584191;
            } else {
                var249 = -0.018672269;
            }
        }
    }
    double var250;
    if (input[124] >= 1.0) {
        if (input[1] >= 7.575) {
            var250 = -0.008466779;
        } else {
            if (input[58] >= 1.0) {
                var250 = -0.0018762687;
            } else {
                if (input[0] >= 5.0950003) {
                    var250 = 0.023777707;
                } else {
                    var250 = 0.0029062512;
                }
            }
        }
    } else {
        if (input[1] >= 7.575) {
            var250 = 0.006582783;
        } else {
            if (input[0] >= 5.225) {
                var250 = -0.020855617;
            } else {
                var250 = 0.0013751006;
            }
        }
    }
    double var251;
    if (input[2] >= 13.934999) {
        if (input[1] >= 7.135) {
            var251 = 0.0006707745;
        } else {
            var251 = -0.014582792;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[1] >= 5.0950003) {
                var251 = 0.028125854;
            } else {
                var251 = -0.008541533;
            }
        } else {
            if (input[1] >= 5.215) {
                var251 = -0.017966066;
            } else {
                var251 = 0.008186006;
            }
        }
    }
    double var252;
    if (input[0] >= 4.415) {
        if (input[100] >= 1.0) {
            if (input[86] >= 1.0) {
                var252 = -0.013544857;
            } else {
                if (input[1] >= 6.925) {
                    var252 = -0.0017568764;
                } else {
                    var252 = 0.022131616;
                }
            }
        } else {
            var252 = -0.021160489;
        }
    } else {
        if (input[86] >= 1.0) {
            var252 = 0.017892629;
        } else {
            if (input[9] >= 1.0) {
                var252 = -0.013546007;
            } else {
                var252 = 0.008020559;
            }
        }
    }
    double var253;
    if (input[40] >= 1.0) {
        var253 = -0.010669276;
    } else {
        if (input[74] >= 1.0) {
            if (input[2] >= 15.675) {
                var253 = -0.034579348;
            } else {
                if (input[0] >= 4.675) {
                    var253 = 0.026049899;
                } else {
                    if (input[9] >= 1.0) {
                        var253 = 0.014018294;
                    } else {
                        var253 = -0.020257069;
                    }
                }
            }
        } else {
            if (input[2] >= 9.425) {
                var253 = 0.0243166;
            } else {
                var253 = -0.00002851813;
            }
        }
    }
    double var254;
    if (input[43] >= 1.0) {
        var254 = 0.010662267;
    } else {
        if (input[21] >= 1.0) {
            var254 = 0.013937682;
        } else {
            if (input[1] >= 8.155) {
                var254 = -0.0390466;
            } else {
                if (input[2] >= 15.365) {
                    var254 = 0.022291716;
                } else {
                    if (input[0] >= 4.335) {
                        var254 = -0.019206962;
                    } else {
                        if (input[1] >= 4.3050003) {
                            var254 = -0.009202818;
                        } else {
                            var254 = 0.018854938;
                        }
                    }
                }
            }
        }
    }
    double var255;
    if (input[1] >= 7.035) {
        if (input[126] >= 1.0) {
            var255 = 0.015855385;
        } else {
            var255 = -0.0017232245;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[58] >= 1.0) {
                var255 = 0.012454912;
            } else {
                if (input[0] >= 5.165) {
                    var255 = 0.00062924204;
                } else {
                    var255 = -0.031229546;
                }
            }
        } else {
            var255 = 0.0106820725;
        }
    }
    double var256;
    if (input[42] >= 1.0) {
        var256 = -0.010545317;
    } else {
        if (input[97] >= 1.0) {
            if (input[2] >= 15.595) {
                var256 = 0.016887527;
            } else {
                if (input[1] >= 5.0150003) {
                    var256 = -0.028141137;
                } else {
                    if (input[0] >= 3.165) {
                        var256 = -0.0074335504;
                    } else {
                        var256 = 0.009658225;
                    }
                }
            }
        } else {
            var256 = 0.024507442;
        }
    }
    double var257;
    if (input[2] >= 9.375) {
        if (input[34] >= 1.0) {
            if (input[1] >= 8.615) {
                var257 = 0.0146869635;
            } else {
                if (input[124] >= 1.0) {
                    var257 = -0.0028467956;
                } else {
                    var257 = -0.037959017;
                }
            }
        } else {
            var257 = 0.010408522;
        }
    } else {
        if (input[47] >= 1.0) {
            var257 = 0.022058615;
        } else {
            if (input[126] >= 1.0) {
                var257 = 0.01005663;
            } else {
                var257 = -0.016546983;
            }
        }
    }
    double var258;
    if (input[0] >= 4.415) {
        if (input[100] >= 1.0) {
            if (input[86] >= 1.0) {
                var258 = -0.011754881;
            } else {
                if (input[1] >= 6.925) {
                    var258 = -0.0010746481;
                } else {
                    var258 = 0.019676302;
                }
            }
        } else {
            var258 = -0.020930482;
        }
    } else {
        if (input[124] >= 1.0) {
            var258 = 0.013649601;
        } else {
            var258 = -0.0026063803;
        }
    }
    double var259;
    if (input[40] >= 1.0) {
        var259 = -0.011985793;
    } else {
        if (input[2] >= 17.195) {
            var259 = -0.0117270565;
        } else {
            if (input[58] >= 1.0) {
                if (input[1] >= 5.275) {
                    var259 = -0.021922387;
                } else {
                    var259 = 0.013797573;
                }
            } else {
                if (input[1] >= 4.825) {
                    if (input[44] >= 1.0) {
                        var259 = 0.035375576;
                    } else {
                        var259 = 0.004647444;
                    }
                } else {
                    var259 = -0.009847952;
                }
            }
        }
    }
    double var260;
    if (input[1] >= 7.035) {
        if (input[126] >= 1.0) {
            var260 = 0.014597217;
        } else {
            var260 = -0.00111455;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[58] >= 1.0) {
                var260 = 0.010698693;
            } else {
                if (input[0] >= 5.5550003) {
                    var260 = 0.0013359662;
                } else {
                    var260 = -0.0261894;
                }
            }
        } else {
            var260 = 0.008296345;
        }
    }
    double var261;
    if (input[0] >= 4.415) {
        if (input[100] >= 1.0) {
            if (input[74] >= 1.0) {
                if (input[9] >= 1.0) {
                    var261 = -0.007883911;
                } else {
                    var261 = 0.025524456;
                }
            } else {
                var261 = -0.016424764;
            }
        } else {
            var261 = -0.01783684;
        }
    } else {
        if (input[86] >= 1.0) {
            var261 = 0.013919976;
        } else {
            var261 = -0.0004768107;
        }
    }
    double var262;
    if (input[1] >= 7.035) {
        if (input[2] >= 18.705) {
            var262 = -0.0026671966;
        } else {
            var262 = 0.011860071;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[2] >= 11.845) {
                var262 = -0.025411155;
            } else {
                if (input[2] >= 5.365) {
                    var262 = 0.016955959;
                } else {
                    var262 = -0.020035528;
                }
            }
        } else {
            var262 = 0.008077913;
        }
    }
    double var263;
    if (input[116] >= 1.0) {
        if (input[2] >= 5.365) {
            if (input[59] >= 1.0) {
                var263 = -0.011235815;
            } else {
                if (input[81] >= 1.0) {
                    var263 = -0.013035383;
                } else {
                    if (input[21] >= 1.0) {
                        var263 = 0.0015165457;
                    } else {
                        if (input[2] >= 14.095) {
                            var263 = 0.040751535;
                        } else {
                            var263 = 0.009963291;
                        }
                    }
                }
            }
        } else {
            var263 = -0.013219918;
        }
    } else {
        if (input[117] >= 1.0) {
            var263 = 0.0053569856;
        } else {
            var263 = -0.018497776;
        }
    }
    double var264;
    if (input[0] >= 4.415) {
        if (input[44] >= 1.0) {
            var264 = -0.0140441945;
        } else {
            if (input[2] >= 16.244999) {
                if (input[0] >= 11.495) {
                    var264 = 0.0039820303;
                } else {
                    var264 = 0.017827643;
                }
            } else {
                var264 = -0.011761562;
            }
        }
    } else {
        if (input[2] >= 5.135) {
            var264 = -0.00375366;
        } else {
            var264 = 0.014212905;
        }
    }
    double var265;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[58] >= 1.0) {
                var265 = -0.026617369;
            } else {
                if (input[86] >= 1.0) {
                    var265 = -0.02025663;
                } else {
                    if (input[2] >= 7.525) {
                        var265 = -0.0070373337;
                    } else {
                        var265 = 0.026147746;
                    }
                }
            }
        } else {
            var265 = 0.024456667;
        }
    } else {
        var265 = 0.009804306;
    }
    double var266;
    if (input[116] >= 1.0) {
        if (input[2] >= 5.365) {
            if (input[81] >= 1.0) {
                var266 = -0.006186481;
            } else {
                if (input[47] >= 1.0) {
                    var266 = 0.000002038164;
                } else {
                    var266 = 0.02310691;
                }
            }
        } else {
            var266 = -0.012427453;
        }
    } else {
        if (input[117] >= 1.0) {
            var266 = 0.005098312;
        } else {
            var266 = -0.016963227;
        }
    }
    double var267;
    if (input[59] >= 1.0) {
        var267 = 0.008993149;
    } else {
        if (input[44] >= 1.0) {
            if (input[0] >= 4.705) {
                var267 = -0.02835136;
            } else {
                var267 = 0.004610407;
            }
        } else {
            if (input[0] >= 6.275) {
                var267 = 0.022484701;
            } else {
                if (input[0] >= 3.025) {
                    var267 = -0.014101761;
                } else {
                    var267 = 0.0012897715;
                }
            }
        }
    }
    double var268;
    if (input[2] >= 13.934999) {
        if (input[1] >= 7.135) {
            var268 = -0.00036761395;
        } else {
            var268 = -0.014477556;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[9] >= 1.0) {
                var268 = -0.007883545;
            } else {
                var268 = 0.025675112;
            }
        } else {
            if (input[126] >= 1.0) {
                var268 = 0.009892566;
            } else {
                var268 = -0.013066295;
            }
        }
    }
    double var269;
    if (input[124] >= 1.0) {
        if (input[36] >= 1.0) {
            var269 = 0.0176111;
        } else {
            if (input[58] >= 1.0) {
                var269 = -0.012364639;
            } else {
                if (input[1] >= 5.875) {
                    var269 = -0.0022489405;
                } else {
                    var269 = 0.013083649;
                }
            }
        }
    } else {
        if (input[44] >= 1.0) {
            var269 = -0.0135950325;
        } else {
            if (input[9] >= 1.0) {
                var269 = 0.006745379;
            } else {
                var269 = -0.0059980596;
            }
        }
    }
    double var270;
    if (input[2] >= 14.645) {
        if (input[2] >= 23.92) {
            var270 = 0.001879509;
        } else {
            var270 = -0.011240527;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[9] >= 1.0) {
                var270 = -0.006818115;
            } else {
                var270 = 0.02442401;
            }
        } else {
            if (input[2] >= 8.215) {
                var270 = -0.018921616;
            } else {
                if (input[2] >= 4.25) {
                    var270 = 0.012819822;
                } else {
                    var270 = -0.004192858;
                }
            }
        }
    }
    double var271;
    if (input[124] >= 1.0) {
        if (input[36] >= 1.0) {
            var271 = 0.015258145;
        } else {
            if (input[58] >= 1.0) {
                var271 = -0.010301976;
            } else {
                if (input[1] >= 5.875) {
                    var271 = -0.0015010111;
                } else {
                    var271 = 0.010584893;
                }
            }
        }
    } else {
        if (input[44] >= 1.0) {
            var271 = -0.012935891;
        } else {
            if (input[0] >= 5.975) {
                var271 = 0.0067554857;
            } else {
                var271 = -0.004568894;
            }
        }
    }
    double var272;
    if (input[34] >= 1.0) {
        if (input[59] >= 1.0) {
            var272 = 0.027090317;
        } else {
            if (input[1] >= 8.265) {
                var272 = 0.027259633;
            } else {
                if (input[0] >= 4.685) {
                    if (input[2] >= 11.105) {
                        var272 = -0.045494124;
                    } else {
                        var272 = -0.011862401;
                    }
                } else {
                    if (input[2] >= 5.1549997) {
                        var272 = -0.0060962015;
                    } else {
                        var272 = 0.018401507;
                    }
                }
            }
        }
    } else {
        var272 = -0.008527051;
    }
    double var273;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[27] >= 1.0) {
                if (input[0] >= 6.645) {
                    var273 = -0.0028052349;
                } else {
                    var273 = -0.026061675;
                }
            } else {
                if (input[36] >= 1.0) {
                    var273 = -0.013561153;
                } else {
                    if (input[44] >= 1.0) {
                        var273 = 0.019690104;
                    } else {
                        var273 = -0.00830615;
                    }
                }
            }
        } else {
            var273 = 0.021971056;
        }
    } else {
        var273 = 0.009635667;
    }
    double var274;
    if (input[100] >= 1.0) {
        if (input[81] >= 1.0) {
            if (input[1] >= 5.935) {
                var274 = 0.019471973;
            } else {
                var274 = 0.004177325;
            }
        } else {
            if (input[2] >= 5.365) {
                if (input[2] >= 13.225) {
                    var274 = -0.008609979;
                } else {
                    if (input[44] >= 1.0) {
                        var274 = 0.0347836;
                    } else {
                        var274 = -0.012046917;
                    }
                }
            } else {
                var274 = -0.020779643;
            }
        }
    } else {
        var274 = -0.01059327;
    }
    double var275;
    if (input[100] >= 1.0) {
        if (input[44] >= 1.0) {
            if (input[86] >= 1.0) {
                var275 = -0.0270645;
            } else {
                var275 = 0.011664745;
            }
        } else {
            if (input[2] >= 15.345) {
                var275 = 0.026781347;
            } else {
                if (input[2] >= 7.065) {
                    var275 = -0.022089966;
                } else {
                    var275 = 0.009833027;
                }
            }
        }
    } else {
        var275 = -0.008735213;
    }
    double var276;
    if (input[2] >= 14.645) {
        if (input[27] >= 1.0) {
            var276 = -0.014409569;
        } else {
            var276 = 0.00043444967;
        }
    } else {
        if (input[21] >= 1.0) {
            var276 = 0.015552832;
        } else {
            if (input[1] >= 5.5950003) {
                var276 = 0.012100368;
            } else {
                if (input[0] >= 3.1350002) {
                    var276 = -0.016826656;
                } else {
                    var276 = 0.0040907417;
                }
            }
        }
    }
    double var277;
    if (input[2] >= 14.645) {
        if (input[124] >= 1.0) {
            var277 = 0.00055049855;
        } else {
            var277 = -0.013050451;
        }
    } else {
        if (input[47] >= 1.0) {
            if (input[1] >= 5.455) {
                var277 = -0.00019874572;
            } else {
                var277 = 0.018304138;
            }
        } else {
            if (input[2] >= 8.375) {
                var277 = 0.015027792;
            } else {
                if (input[2] >= 5.475) {
                    var277 = -0.020965952;
                } else {
                    var277 = 0.0009868055;
                }
            }
        }
    }
    double var278;
    if (input[0] >= 9.155) {
        if (input[1] >= 8.115) {
            var278 = -0.010895116;
        } else {
            var278 = -0.00045616724;
        }
    } else {
        if (input[34] >= 1.0) {
            if (input[21] >= 1.0) {
                var278 = -0.014111321;
            } else {
                if (input[74] >= 1.0) {
                    if (input[1] >= 4.675) {
                        var278 = 0.05806966;
                    } else {
                        var278 = -0.0030356247;
                    }
                } else {
                    var278 = -0.01207451;
                }
            }
        } else {
            var278 = -0.009192239;
        }
    }
    double var279;
    if (input[2] >= 14.645) {
        if (input[27] >= 1.0) {
            var279 = -0.01056285;
        } else {
            var279 = 0.0012637423;
        }
    } else {
        if (input[21] >= 1.0) {
            var279 = 0.014073678;
        } else {
            if (input[2] >= 9.375) {
                var279 = -0.016618235;
            } else {
                if (input[1] >= 5.425) {
                    var279 = 0.029681707;
                } else {
                    if (input[1] >= 4.085) {
                        var279 = -0.02624776;
                    } else {
                        var279 = 0.009027007;
                    }
                }
            }
        }
    }
    double var280;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[1] >= 5.005) {
                if (input[2] >= 9.635) {
                    if (input[0] >= 9.585) {
                        var280 = -0.0021719597;
                    } else {
                        var280 = -0.03153595;
                    }
                } else {
                    var280 = -0.0031507513;
                }
            } else {
                if (input[2] >= 6.705) {
                    var280 = 0.014030872;
                } else {
                    var280 = -0.007523755;
                }
            }
        } else {
            var280 = 0.023200346;
        }
    } else {
        var280 = 0.009779862;
    }
    double var281;
    if (input[100] >= 1.0) {
        if (input[36] >= 1.0) {
            var281 = -0.011792504;
        } else {
            if (input[86] >= 1.0) {
                if (input[2] >= 9.625) {
                    var281 = 0.010451285;
                } else {
                    var281 = -0.03041322;
                }
            } else {
                if (input[2] >= 7.2650003) {
                    if (input[9] >= 1.0) {
                        var281 = 0.019346224;
                    } else {
                        var281 = -0.009017684;
                    }
                } else {
                    var281 = 0.03348083;
                }
            }
        }
    } else {
        var281 = -0.0087476475;
    }
    double var282;
    if (input[0] >= 9.155) {
        if (input[1] >= 8.135) {
            var282 = -0.009744877;
        } else {
            var282 = -0.00041422158;
        }
    } else {
        if (input[86] >= 1.0) {
            if (input[44] >= 1.0) {
                var282 = -0.0026001467;
            } else {
                var282 = 0.018866297;
            }
        } else {
            if (input[1] >= 4.6549997) {
                if (input[81] >= 1.0) {
                    var282 = 0.006142741;
                } else {
                    var282 = -0.019860221;
                }
            } else {
                var282 = 0.00834884;
            }
        }
    }
    double var283;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[27] >= 1.0) {
                if (input[0] >= 6.645) {
                    var283 = -0.002057223;
                } else {
                    var283 = -0.025074782;
                }
            } else {
                if (input[116] >= 1.0) {
                    if (input[86] >= 1.0) {
                        var283 = -0.014561877;
                    } else {
                        var283 = 0.0020899484;
                    }
                } else {
                    var283 = 0.011422169;
                }
            }
        } else {
            var283 = 0.020799803;
        }
    } else {
        var283 = 0.008516834;
    }
    double var284;
    if (input[100] >= 1.0) {
        if (input[42] >= 1.0) {
            var284 = 0.01864614;
        } else {
            if (input[2] >= 15.595) {
                var284 = 0.014985131;
            } else {
                if (input[1] >= 4.535) {
                    if (input[0] >= 4.605) {
                        var284 = -0.0039294893;
                    } else {
                        var284 = -0.026873613;
                    }
                } else {
                    var284 = 0.0054657655;
                }
            }
        }
    } else {
        var284 = -0.0101643065;
    }
    double var285;
    if (input[2] >= 14.645) {
        if (input[124] >= 1.0) {
            var285 = -0.0009137079;
        } else {
            var285 = -0.011782299;
        }
    } else {
        if (input[47] >= 1.0) {
            if (input[1] >= 5.455) {
                var285 = 0.00016657346;
            } else {
                var285 = 0.0189572;
            }
        } else {
            if (input[2] >= 8.375) {
                var285 = 0.012582915;
            } else {
                if (input[2] >= 5.475) {
                    var285 = -0.018003145;
                } else {
                    var285 = 0.00048665385;
                }
            }
        }
    }
    double var286;
    if (input[2] >= 9.135) {
        if (input[34] >= 1.0) {
            if (input[1] >= 6.0950003) {
                if (input[86] >= 1.0) {
                    var286 = 0.032051362;
                } else {
                    var286 = -0.023630904;
                }
            } else {
                var286 = -0.0315208;
            }
        } else {
            var286 = 0.011317896;
        }
    } else {
        if (input[47] >= 1.0) {
            var286 = 0.021104489;
        } else {
            if (input[126] >= 1.0) {
                var286 = 0.008903801;
            } else {
                var286 = -0.01785058;
            }
        }
    }
    double var287;
    if (input[42] >= 1.0) {
        var287 = -0.00912512;
    } else {
        if (input[97] >= 1.0) {
            if (input[2] >= 15.595) {
                var287 = 0.014275049;
            } else {
                if (input[44] >= 1.0) {
                    var287 = 0.005184437;
                } else {
                    if (input[1] >= 5.175) {
                        var287 = -0.04361211;
                    } else {
                        var287 = 0.007444317;
                    }
                }
            }
        } else {
            var287 = 0.018762821;
        }
    }
    double var288;
    if (input[2] >= 14.645) {
        if (input[1] >= 8.355) {
            var288 = -0.013121606;
        } else {
            var288 = -0.0015051067;
        }
    } else {
        if (input[1] >= 4.0550003) {
            if (input[9] >= 1.0) {
                if (input[1] >= 5.955) {
                    var288 = 0.005069644;
                } else {
                    var288 = -0.015737308;
                }
            } else {
                if (input[5] >= 1.0) {
                    var288 = 0.002278999;
                } else {
                    var288 = 0.030257545;
                }
            }
        } else {
            var288 = -0.006878693;
        }
    }
    double var289;
    if (input[100] >= 1.0) {
        if (input[86] >= 1.0) {
            if (input[44] >= 1.0) {
                var289 = -0.024188502;
            } else {
                var289 = 0.010252263;
            }
        } else {
            if (input[36] >= 1.0) {
                var289 = -0.019990202;
            } else {
                if (input[2] >= 7.2650003) {
                    if (input[9] >= 1.0) {
                        var289 = 0.018274454;
                    } else {
                        var289 = -0.0060324958;
                    }
                } else {
                    var289 = 0.030976214;
                }
            }
        }
    } else {
        var289 = -0.010451559;
    }
    double var290;
    if (input[2] >= 14.645) {
        if (input[27] >= 1.0) {
            var290 = -0.011558753;
        } else {
            var290 = 0.0003660877;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[1] >= 5.0950003) {
                var290 = 0.021428106;
            } else {
                var290 = -0.006562968;
            }
        } else {
            if (input[36] >= 1.0) {
                var290 = 0.010050285;
            } else {
                var290 = -0.011541891;
            }
        }
    }
    double var291;
    if (input[34] >= 1.0) {
        if (input[2] >= 19.925) {
            var291 = -0.020154417;
        } else {
            if (input[47] >= 1.0) {
                if (input[1] >= 6.245) {
                    var291 = 0.040723994;
                } else {
                    var291 = 0.0016520767;
                }
            } else {
                if (input[44] >= 1.0) {
                    if (input[124] >= 1.0) {
                        var291 = 0.021834679;
                    } else {
                        var291 = -0.010299252;
                    }
                } else {
                    var291 = -0.022596514;
                }
            }
        }
    } else {
        var291 = -0.009116712;
    }
    double var292;
    if (input[100] >= 1.0) {
        if (input[86] >= 1.0) {
            if (input[44] >= 1.0) {
                var292 = -0.02204763;
            } else {
                var292 = 0.009812062;
            }
        } else {
            if (input[36] >= 1.0) {
                var292 = -0.018505787;
            } else {
                if (input[0] >= 4.475) {
                    if (input[2] >= 18.994999) {
                        var292 = 0.005969915;
                    } else {
                        var292 = 0.031117788;
                    }
                } else {
                    var292 = 0.0005411343;
                }
            }
        }
    } else {
        var292 = -0.010245574;
    }
    double var293;
    if (input[36] >= 1.0) {
        var293 = 0.0093771415;
    } else {
        if (input[100] >= 1.0) {
            if (input[86] >= 1.0) {
                var293 = -0.01242908;
            } else {
                if (input[2] >= 7.2650003) {
                    if (input[0] >= 9.005) {
                        var293 = 0.01611676;
                    } else {
                        var293 = -0.0071726595;
                    }
                } else {
                    var293 = 0.027251506;
                }
            }
        } else {
            var293 = -0.029131452;
        }
    }
    double var294;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[5] >= 1.0) {
                var294 = 0.007508151;
            } else {
                if (input[1] >= 4.085) {
                    if (input[2] >= 9.285) {
                        var294 = -0.029539164;
                    } else {
                        var294 = -0.005199954;
                    }
                } else {
                    var294 = 0.008287931;
                }
            }
        } else {
            var294 = 0.020845871;
        }
    } else {
        var294 = 0.00981818;
    }
    double var295;
    if (input[116] >= 1.0) {
        if (input[58] >= 1.0) {
            var295 = 0.01695606;
        } else {
            if (input[2] >= 9.625) {
                if (input[1] >= 7.0150003) {
                    var295 = -0.009085758;
                } else {
                    var295 = 0.024383131;
                }
            } else {
                var295 = -0.019264463;
            }
        }
    } else {
        var295 = -0.0072573023;
    }
    double var296;
    if (input[0] >= 3.8049998) {
        if (input[100] >= 1.0) {
            if (input[86] >= 1.0) {
                var296 = -0.011918411;
            } else {
                if (input[124] >= 1.0) {
                    var296 = 0.015523171;
                } else {
                    var296 = 0.0032387914;
                }
            }
        } else {
            var296 = -0.015407857;
        }
    } else {
        if (input[1] >= 4.275) {
            var296 = -0.0010716537;
        } else {
            var296 = 0.013253448;
        }
    }
    double var297;
    if (input[36] >= 1.0) {
        var297 = 0.008578339;
    } else {
        if (input[100] >= 1.0) {
            if (input[21] >= 1.0) {
                var297 = 0.023559835;
            } else {
                if (input[74] >= 1.0) {
                    if (input[0] >= 4.675) {
                        var297 = 0.018267166;
                    } else {
                        var297 = -0.012610754;
                    }
                } else {
                    var297 = -0.020638183;
                }
            }
        } else {
            var297 = -0.025665497;
        }
    }
    double var298;
    if (input[2] >= 14.765) {
        if (input[1] >= 7.135) {
            var298 = 0.0005636954;
        } else {
            var298 = -0.012805409;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[1] >= 5.0950003) {
                var298 = 0.020743743;
            } else {
                var298 = -0.0055390457;
            }
        } else {
            if (input[0] >= 3.025) {
                var298 = -0.011467475;
            } else {
                var298 = 0.008828123;
            }
        }
    }
    double var299;
    if (input[42] >= 1.0) {
        var299 = -0.008697818;
    } else {
        if (input[97] >= 1.0) {
            if (input[2] >= 15.595) {
                var299 = 0.011928535;
            } else {
                if (input[2] >= 4.705) {
                    if (input[44] >= 1.0) {
                        var299 = -0.0041641197;
                    } else {
                        var299 = -0.028500263;
                    }
                } else {
                    var299 = 0.007085052;
                }
            }
        } else {
            var299 = 0.023008466;
        }
    }
    double var300;
    if (input[2] >= 14.765) {
        if (input[27] >= 1.0) {
            var300 = -0.012025363;
        } else {
            var300 = -0.00035640306;
        }
    } else {
        if (input[2] >= 6.105) {
            if (input[86] >= 1.0) {
                var300 = 0.015536156;
            } else {
                var300 = 0.00055879034;
            }
        } else {
            if (input[124] >= 1.0) {
                var300 = 0.004427638;
            } else {
                var300 = -0.009593522;
            }
        }
    }
    double var301;
    if (input[2] >= 9.285) {
        if (input[34] >= 1.0) {
            if (input[21] >= 1.0) {
                var301 = 0.010571694;
            } else {
                if (input[27] >= 1.0) {
                    var301 = -0.0014495662;
                } else {
                    var301 = -0.033043448;
                }
            }
        } else {
            var301 = 0.011846944;
        }
    } else {
        if (input[47] >= 1.0) {
            var301 = 0.019298112;
        } else {
            if (input[126] >= 1.0) {
                var301 = 0.008759499;
            } else {
                var301 = -0.015424595;
            }
        }
    }
    double var302;
    if (input[34] >= 1.0) {
        if (input[0] >= 4.505) {
            if (input[1] >= 5.935) {
                if (input[2] >= 18.814999) {
                    var302 = -0.019598186;
                } else {
                    var302 = 0.023597736;
                }
            } else {
                var302 = -0.02819073;
            }
        } else {
            if (input[2] >= 5.1549997) {
                var302 = 0.004211923;
            } else {
                var302 = 0.02366568;
            }
        }
    } else {
        var302 = -0.008590674;
    }
    double var303;
    if (input[116] >= 1.0) {
        if (input[2] >= 5.365) {
            if (input[59] >= 1.0) {
                var303 = -0.010095775;
            } else {
                if (input[44] >= 1.0) {
                    var303 = -0.0059078205;
                } else {
                    if (input[86] >= 1.0) {
                        var303 = 0.03558474;
                    } else {
                        var303 = 0.0055727325;
                    }
                }
            }
        } else {
            var303 = -0.015185465;
        }
    } else {
        var303 = -0.008644607;
    }
    double var304;
    if (input[59] >= 1.0) {
        var304 = 0.0083434805;
    } else {
        if (input[116] >= 1.0) {
            if (input[5] >= 1.0) {
                var304 = -0.025835698;
            } else {
                if (input[2] >= 11.355) {
                    var304 = 0.02312674;
                } else {
                    if (input[1] >= 5.245) {
                        var304 = 0.017095385;
                    } else {
                        var304 = -0.009776774;
                    }
                }
            }
        } else {
            var304 = -0.016964423;
        }
    }
    double var305;
    if (input[2] >= 9.375) {
        if (input[47] >= 1.0) {
            if (input[0] >= 10.225) {
                var305 = 0.00044591402;
            } else {
                var305 = -0.022161424;
            }
        } else {
            var305 = 0.004930885;
        }
    } else {
        if (input[47] >= 1.0) {
            var305 = 0.015696349;
        } else {
            if (input[126] >= 1.0) {
                var305 = 0.009386516;
            } else {
                var305 = -0.010994555;
            }
        }
    }
    double var306;
    if (input[1] >= 5.5150003) {
        if (input[0] >= 10.265) {
            var306 = -0.015122597;
        } else {
            if (input[21] >= 1.0) {
                var306 = -0.019824112;
            } else {
                if (input[2] >= 10.385) {
                    var306 = -0.0010076073;
                } else {
                    var306 = 0.025271423;
                }
            }
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[9] >= 1.0) {
                var306 = 0.010824453;
            } else {
                var306 = -0.019339273;
            }
        } else {
            var306 = 0.024414843;
        }
    }
    double var307;
    if (input[1] >= 5.5150003) {
        if (input[74] >= 1.0) {
            if (input[44] >= 1.0) {
                var307 = -0.0166725;
            } else {
                if (input[2] >= 18.125) {
                    var307 = 0.022128211;
                } else {
                    var307 = 0.00034217426;
                }
            }
        } else {
            var307 = -0.015013739;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[9] >= 1.0) {
                var307 = 0.009101934;
            } else {
                var307 = -0.016009815;
            }
        } else {
            var307 = 0.020776082;
        }
    }
    double var308;
    if (input[5] >= 1.0) {
        var308 = 0.008293522;
    } else {
        if (input[74] >= 1.0) {
            if (input[58] >= 1.0) {
                var308 = 0.009642212;
            } else {
                if (input[0] >= 5.085) {
                    var308 = -0.0053304518;
                } else {
                    var308 = -0.028144078;
                }
            }
        } else {
            var308 = 0.012977341;
        }
    }
    double var309;
    if (input[0] >= 8.825) {
        if (input[1] >= 7.9049997) {
            var309 = -0.012962079;
        } else {
            var309 = 0.001348349;
        }
    } else {
        if (input[9] >= 1.0) {
            if (input[1] >= 4.895) {
                var309 = -0.012490577;
            } else {
                var309 = 0.008259333;
            }
        } else {
            if (input[1] >= 4.575) {
                var309 = 0.021016221;
            } else {
                var309 = -0.010052704;
            }
        }
    }
    double var310;
    if (input[0] >= 5.995) {
        if (input[44] >= 1.0) {
            var310 = -0.015235481;
        } else {
            if (input[1] >= 8.345) {
                var310 = -0.012514264;
            } else {
                var310 = 0.014682718;
            }
        }
    } else {
        if (input[86] >= 1.0) {
            var310 = 0.013154013;
        } else {
            if (input[9] >= 1.0) {
                var310 = -0.012380437;
            } else {
                var310 = 0.008001893;
            }
        }
    }
    double var311;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[5] >= 1.0) {
                var311 = 0.008138252;
            } else {
                if (input[1] >= 4.885) {
                    if (input[2] >= 9.285) {
                        var311 = -0.03818569;
                    } else {
                        var311 = 0.003364205;
                    }
                } else {
                    var311 = 0.0038891614;
                }
            }
        } else {
            var311 = 0.018880509;
        }
    } else {
        var311 = 0.009120331;
    }
    double var312;
    if (input[59] >= 1.0) {
        var312 = 0.009283661;
    } else {
        if (input[116] >= 1.0) {
            if (input[5] >= 1.0) {
                var312 = -0.024038969;
            } else {
                if (input[2] >= 11.355) {
                    var312 = 0.022954725;
                } else {
                    if (input[1] >= 5.245) {
                        var312 = 0.0139539335;
                    } else {
                        var312 = -0.01008887;
                    }
                }
            }
        } else {
            var312 = -0.016000694;
        }
    }
    double var313;
    if (input[100] >= 1.0) {
        if (input[42] >= 1.0) {
            var313 = 0.01741542;
        } else {
            if (input[0] >= 9.005) {
                var313 = 0.014624654;
            } else {
                if (input[1] >= 4.535) {
                    if (input[0] >= 4.605) {
                        var313 = -0.004320522;
                    } else {
                        var313 = -0.027388351;
                    }
                } else {
                    var313 = 0.007208143;
                }
            }
        }
    } else {
        var313 = -0.008069294;
    }
    double var314;
    if (input[0] >= 4.885) {
        if (input[34] >= 1.0) {
            if (input[1] >= 6.0150003) {
                if (input[2] >= 18.485) {
                    var314 = -0.018067252;
                } else {
                    var314 = 0.022888826;
                }
            } else {
                var314 = -0.02905159;
            }
        } else {
            var314 = 0.009802243;
        }
    } else {
        if (input[86] >= 1.0) {
            var314 = 0.014102486;
        } else {
            if (input[9] >= 1.0) {
                var314 = -0.013321421;
            } else {
                var314 = 0.010719547;
            }
        }
    }
    double var315;
    if (input[1] >= 5.5150003) {
        if (input[74] >= 1.0) {
            if (input[44] >= 1.0) {
                var315 = -0.015116577;
            } else {
                if (input[2] >= 18.904999) {
                    var315 = 0.020567387;
                } else {
                    var315 = 0.00012502205;
                }
            }
        } else {
            var315 = -0.015376996;
        }
    } else {
        if (input[0] >= 3.795) {
            var315 = -0.0027826938;
        } else {
            var315 = 0.011414364;
        }
    }
    double var316;
    if (input[0] >= 8.825) {
        if (input[1] >= 8.025) {
            var316 = -0.011254133;
        } else {
            var316 = -0.0006737212;
        }
    } else {
        if (input[2] >= 5.835) {
            if (input[21] >= 1.0) {
                var316 = -0.010798777;
            } else {
                if (input[1] >= 5.565) {
                    var316 = 0.024017194;
                } else {
                    var316 = 0.0035552008;
                }
            }
        } else {
            var316 = -0.00543262;
        }
    }
    double var317;
    if (input[0] >= 5.995) {
        if (input[86] >= 1.0) {
            var317 = -0.012330649;
        } else {
            if (input[1] >= 7.0150003) {
                var317 = -0.01021514;
            } else {
                var317 = 0.014286967;
            }
        }
    } else {
        if (input[2] >= 5.365) {
            if (input[9] >= 1.0) {
                var317 = -0.005022561;
            } else {
                var317 = 0.020744182;
            }
        } else {
            var317 = -0.003555996;
        }
    }
    double var318;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[27] >= 1.0) {
                if (input[0] >= 6.645) {
                    var318 = -0.004938653;
                } else {
                    var318 = -0.02369047;
                }
            } else {
                if (input[2] >= 6.125) {
                    if (input[9] >= 1.0) {
                        var318 = -0.0074730525;
                    } else {
                        var318 = 0.019598477;
                    }
                } else {
                    var318 = -0.011466642;
                }
            }
        } else {
            var318 = 0.017249165;
        }
    } else {
        var318 = 0.009241898;
    }
    double var319;
    if (input[2] >= 9.375) {
        if (input[47] >= 1.0) {
            if (input[0] >= 10.225) {
                var319 = 0.0011626824;
            } else {
                var319 = -0.022503218;
            }
        } else {
            var319 = 0.0060614613;
        }
    } else {
        if (input[47] >= 1.0) {
            var319 = 0.016508827;
        } else {
            if (input[0] >= 3.8049998) {
                var319 = -0.0135107925;
            } else {
                var319 = 0.006292972;
            }
        }
    }
    double var320;
    if (input[2] >= 9.375) {
        if (input[47] >= 1.0) {
            if (input[0] >= 10.225) {
                var320 = 0.0009828714;
            } else {
                var320 = -0.018970279;
            }
        } else {
            var320 = 0.004875923;
        }
    } else {
        if (input[47] >= 1.0) {
            var320 = 0.01359184;
        } else {
            if (input[126] >= 1.0) {
                var320 = 0.0077060903;
            } else {
                var320 = -0.01076724;
            }
        }
    }
    double var321;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[58] >= 1.0) {
                var321 = -0.020093128;
            } else {
                if (input[86] >= 1.0) {
                    var321 = -0.022107208;
                } else {
                    if (input[2] >= 6.725) {
                        var321 = -0.001675682;
                    } else {
                        var321 = 0.02320498;
                    }
                }
            }
        } else {
            var321 = 0.015954733;
        }
    } else {
        var321 = 0.00912706;
    }
    double var322;
    if (input[100] >= 1.0) {
        if (input[42] >= 1.0) {
            var322 = 0.016853511;
        } else {
            if (input[2] >= 16.345001) {
                var322 = 0.014064937;
            } else {
                if (input[1] >= 5.0150003) {
                    var322 = -0.022840327;
                } else {
                    if (input[2] >= 6.285) {
                        var322 = 0.0076907575;
                    } else {
                        var322 = -0.0013823085;
                    }
                }
            }
        }
    } else {
        var322 = -0.009000018;
    }
    double var323;
    if (input[0] >= 9.155) {
        var323 = -0.008007805;
    } else {
        if (input[21] >= 1.0) {
            var323 = -0.005102212;
        } else {
            if (input[81] >= 1.0) {
                var323 = -0.0118605625;
            } else {
                if (input[2] >= 5.4849997) {
                    if (input[1] >= 5.2650003) {
                        var323 = 0.037592746;
                    } else {
                        var323 = 0.0027400425;
                    }
                } else {
                    var323 = -0.010203516;
                }
            }
        }
    }
    double var324;
    if (input[2] >= 9.375) {
        if (input[126] >= 1.0) {
            var324 = -0.013789853;
        } else {
            if (input[1] >= 7.545) {
                var324 = -0.01632397;
            } else {
                var324 = 0.018032888;
            }
        }
    } else {
        if (input[47] >= 1.0) {
            var324 = 0.014175414;
        } else {
            if (input[0] >= 3.8049998) {
                var324 = -0.010899503;
            } else {
                var324 = 0.006437098;
            }
        }
    }
    double var325;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[5] >= 1.0) {
                var325 = 0.00647481;
            } else {
                if (input[1] >= 4.085) {
                    if (input[2] >= 9.135) {
                        var325 = -0.024920573;
                    } else {
                        var325 = -0.0031206054;
                    }
                } else {
                    var325 = 0.006733735;
                }
            }
        } else {
            var325 = 0.01542958;
        }
    } else {
        var325 = 0.009264866;
    }
    double var326;
    if (input[100] >= 1.0) {
        if (input[81] >= 1.0) {
            var326 = 0.013803683;
        } else {
            if (input[2] >= 5.365) {
                if (input[9] >= 1.0) {
                    var326 = -0.0073249554;
                } else {
                    var326 = 0.015281666;
                }
            } else {
                var326 = -0.01889452;
            }
        }
    } else {
        var326 = -0.008688114;
    }
    double var327;
    if (input[36] >= 1.0) {
        var327 = 0.0071726283;
    } else {
        if (input[100] >= 1.0) {
            if (input[86] >= 1.0) {
                var327 = -0.013984726;
            } else {
                if (input[2] >= 7.2650003) {
                    if (input[9] >= 1.0) {
                        var327 = 0.01753501;
                    } else {
                        var327 = -0.008757202;
                    }
                } else {
                    var327 = 0.02786767;
                }
            }
        } else {
            var327 = -0.026804546;
        }
    }
    double var328;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[27] >= 1.0) {
                if (input[0] >= 6.645) {
                    var328 = -0.0014388198;
                } else {
                    var328 = -0.022362351;
                }
            } else {
                if (input[116] >= 1.0) {
                    if (input[86] >= 1.0) {
                        var328 = -0.016310612;
                    } else {
                        var328 = 0.0022973309;
                    }
                } else {
                    var328 = 0.012337235;
                }
            }
        } else {
            var328 = 0.016889807;
        }
    } else {
        var328 = 0.009537006;
    }
    double var329;
    if (input[65] >= 1.0) {
        if (input[97] >= 1.0) {
            if (input[5] >= 1.0) {
                var329 = 0.0050005866;
            } else {
                if (input[74] >= 1.0) {
                    if (input[58] >= 1.0) {
                        var329 = 0.009917919;
                    } else {
                        if (input[0] >= 4.4849997) {
                            var329 = -0.0096821645;
                        } else {
                            var329 = -0.03140537;
                        }
                    }
                } else {
                    var329 = 0.007171104;
                }
            }
        } else {
            var329 = 0.014349564;
        }
    } else {
        var329 = 0.008106277;
    }
    double var330;
    if (input[100] >= 1.0) {
        if (input[42] >= 1.0) {
            var330 = 0.016105847;
        } else {
            if (input[2] >= 15.595) {
                var330 = 0.01296146;
            } else {
                if (input[2] >= 4.705) {
                    if (input[44] >= 1.0) {
                        var330 = -0.0006431384;
                    } else {
                        var330 = -0.025405206;
                    }
                } else {
                    var330 = 0.007953288;
                }
            }
        }
    } else {
        var330 = -0.008456441;
    }
    double var331;
    if (input[2] >= 14.765) {
        if (input[1] >= 7.285) {
            var331 = 0.002078345;
        } else {
            var331 = -0.013866587;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[9] >= 1.0) {
                var331 = -0.004096089;
            } else {
                var331 = 0.020228421;
            }
        } else {
            if (input[9] >= 1.0) {
                var331 = 0.0059410892;
            } else {
                var331 = -0.013802289;
            }
        }
    }
    double var332;
    if (input[42] >= 1.0) {
        var332 = -0.008797886;
    } else {
        if (input[9] >= 1.0) {
            if (input[47] >= 1.0) {
                var332 = -0.004005105;
            } else {
                var332 = 0.025407081;
            }
        } else {
            if (input[2] >= 9.405) {
                var332 = -0.019297084;
            } else {
                var332 = 0.009342892;
            }
        }
    }
    double var333;
    if (input[116] >= 1.0) {
        if (input[58] >= 1.0) {
            var333 = 0.012829992;
        } else {
            if (input[2] >= 9.625) {
                if (input[1] >= 7.0150003) {
                    var333 = -0.005869921;
                } else {
                    var333 = 0.020324871;
                }
            } else {
                var333 = -0.01618634;
            }
        }
    } else {
        var333 = -0.006577061;
    }
    double var334;
    if (input[2] >= 9.375) {
        if (input[126] >= 1.0) {
            var334 = -0.011330912;
        } else {
            if (input[1] >= 7.545) {
                var334 = -0.0131648285;
            } else {
                var334 = 0.014505802;
            }
        }
    } else {
        if (input[47] >= 1.0) {
            var334 = 0.015916597;
        } else {
            if (input[0] >= 3.8049998) {
                var334 = -0.011833535;
            } else {
                var334 = 0.0035459313;
            }
        }
    }
    double var335;
    if (input[1] >= 7.035) {
        if (input[0] >= 8.745) {
            var335 = -0.000450809;
        } else {
            var335 = 0.011551047;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[58] >= 1.0) {
                var335 = 0.011103998;
            } else {
                if (input[0] >= 5.165) {
                    var335 = -0.0024331447;
                } else {
                    var335 = -0.024449708;
                }
            }
        } else {
            var335 = 0.009215637;
        }
    }
    double var336;
    if (input[0] >= 4.885) {
        if (input[44] >= 1.0) {
            var336 = -0.014104554;
        } else {
            if (input[86] >= 1.0) {
                var336 = 0.013277642;
            } else {
                var336 = -0.0043601887;
            }
        }
    } else {
        if (input[86] >= 1.0) {
            var336 = 0.015286804;
        } else {
            if (input[9] >= 1.0) {
                var336 = -0.011995121;
            } else {
                var336 = 0.0064948187;
            }
        }
    }
    double var337;
    if (input[58] >= 1.0) {
        if (input[86] >= 1.0) {
            var337 = 0.013633602;
        } else {
            var337 = -0.026645225;
        }
    } else {
        if (input[86] >= 1.0) {
            var337 = -0.014861015;
        } else {
            if (input[74] >= 1.0) {
                if (input[2] >= 6.875) {
                    var337 = -0.011940503;
                } else {
                    var337 = 0.018768694;
                }
            } else {
                var337 = 0.025102373;
            }
        }
    }
    double var338;
    if (input[58] >= 1.0) {
        if (input[86] >= 1.0) {
            var338 = 0.0111614065;
        } else {
            var338 = -0.022517882;
        }
    } else {
        if (input[86] >= 1.0) {
            var338 = -0.012138209;
        } else {
            if (input[126] >= 1.0) {
                var338 = -0.0028056558;
            } else {
                if (input[47] >= 1.0) {
                    var338 = 0.026879398;
                } else {
                    var338 = 0.0012815315;
                }
            }
        }
    }
    double var339;
    if (input[65] >= 1.0) {
        if (input[42] >= 1.0) {
            var339 = -0.01522757;
        } else {
            if (input[0] >= 9.605) {
                var339 = 0.019741032;
            } else {
                if (input[44] >= 1.0) {
                    var339 = 0.015905915;
                } else {
                    if (input[0] >= 3.025) {
                        var339 = -0.03093905;
                    } else {
                        var339 = 0.009261902;
                    }
                }
            }
        }
    } else {
        var339 = 0.008061429;
    }
    double var340;
    if (input[0] >= 9.184999) {
        var340 = -0.007895321;
    } else {
        if (input[5] >= 1.0) {
            var340 = -0.007897845;
        } else {
            if (input[21] >= 1.0) {
                var340 = -0.013146271;
            } else {
                if (input[2] >= 6.705) {
                    var340 = 0.040407434;
                } else {
                    var340 = -0.014245622;
                }
            }
        }
    }
    double var341;
    if (input[100] >= 1.0) {
        if (input[21] >= 1.0) {
            var341 = 0.015038525;
        } else {
            if (input[74] >= 1.0) {
                if (input[44] >= 1.0) {
                    var341 = -0.011283951;
                } else {
                    if (input[1] >= 5.605) {
                        var341 = 0.032114096;
                    } else {
                        var341 = -0.00878124;
                    }
                }
            } else {
                var341 = -0.018507645;
            }
        }
    } else {
        var341 = -0.008113113;
    }
    double var342;
    if (input[2] >= 14.765) {
        if (input[1] >= 7.285) {
            var342 = 0.0016468747;
        } else {
            var342 = -0.014781153;
        }
    } else {
        if (input[58] >= 1.0) {
            var342 = -0.006162497;
        } else {
            if (input[1] >= 4.4449997) {
                if (input[44] >= 1.0) {
                    var342 = 0.030369688;
                } else {
                    var342 = -0.00072857406;
                }
            } else {
                var342 = -0.011651206;
            }
        }
    }
    double var343;
    if (input[0] >= 5.995) {
        if (input[44] >= 1.0) {
            var343 = -0.016226834;
        } else {
            if (input[1] >= 8.345) {
                var343 = -0.007576421;
            } else {
                var343 = 0.01060695;
            }
        }
    } else {
        if (input[124] >= 1.0) {
            var343 = 0.010112254;
        } else {
            var343 = -0.0019270319;
        }
    }
    double var344;
    if (input[2] >= 20.525002) {
        var344 = -0.00844511;
    } else {
        if (input[34] >= 1.0) {
            if (input[1] >= 7.585) {
                var344 = 0.03391288;
            } else {
                if (input[0] >= 5.255) {
                    var344 = -0.027203133;
                } else {
                    if (input[36] >= 1.0) {
                        var344 = 0.02071424;
                    } else {
                        var344 = 0.00458721;
                    }
                }
            }
        } else {
            var344 = -0.018319579;
        }
    }
    double var345;
    if (input[100] >= 1.0) {
        if (input[36] >= 1.0) {
            var345 = -0.011603942;
        } else {
            if (input[86] >= 1.0) {
                var345 = -0.011536993;
            } else {
                if (input[2] >= 17.195) {
                    var345 = 0.003779923;
                } else {
                    if (input[0] >= 4.565) {
                        var345 = 0.03183461;
                    } else {
                        var345 = 0.003532453;
                    }
                }
            }
        }
    } else {
        var345 = -0.008438359;
    }
    double var346;
    if (input[0] >= 10.285) {
        var346 = -0.00712267;
    } else {
        if (input[34] >= 1.0) {
            if (input[21] >= 1.0) {
                var346 = -0.011006464;
            } else {
                if (input[74] >= 1.0) {
                    if (input[1] >= 4.675) {
                        var346 = 0.048726376;
                    } else {
                        var346 = 0.0019140833;
                    }
                } else {
                    var346 = -0.013269694;
                }
            }
        } else {
            var346 = -0.009640579;
        }
    }
    double var347;
    if (input[0] >= 8.825) {
        var347 = -0.005330347;
    } else {
        if (input[5] >= 1.0) {
            var347 = -0.0063824723;
        } else {
            if (input[74] >= 1.0) {
                if (input[1] >= 5.995) {
                    var347 = 0.013933373;
                } else {
                    var347 = -0.015507937;
                }
            } else {
                var347 = 0.023071326;
            }
        }
    }
    double var348;
    if (input[1] >= 5.5150003) {
        if (input[74] >= 1.0) {
            if (input[9] >= 1.0) {
                var348 = -0.011854798;
            } else {
                var348 = 0.020240303;
            }
        } else {
            var348 = -0.014978166;
        }
    } else {
        if (input[116] >= 1.0) {
            if (input[1] >= 4.5150003) {
                var348 = 0.015851475;
            } else {
                var348 = 0.0006985938;
            }
        } else {
            var348 = -0.004741239;
        }
    }
    double var349;
    if (input[1] >= 5.005) {
        if (input[74] >= 1.0) {
            if (input[2] >= 13.135) {
                var349 = -0.008934792;
            } else {
                var349 = 0.014942906;
            }
        } else {
            var349 = -0.010667483;
        }
    } else {
        if (input[0] >= 3.995) {
            var349 = -0.0030087384;
        } else {
            var349 = 0.011026571;
        }
    }
    double var350;
    if (input[59] >= 1.0) {
        var350 = 0.007697438;
    } else {
        if (input[44] >= 1.0) {
            if (input[0] >= 4.705) {
                var350 = -0.02170742;
            } else {
                var350 = -0.000033000124;
            }
        } else {
            if (input[0] >= 6.275) {
                var350 = 0.022999568;
            } else {
                if (input[2] >= 5.375) {
                    var350 = -0.0017161776;
                } else {
                    var350 = -0.010635182;
                }
            }
        }
    }
    double var351;
    if (input[1] >= 5.005) {
        if (input[2] >= 20.525002) {
            var351 = -0.011392782;
        } else {
            if (input[58] >= 1.0) {
                var351 = -0.014512544;
            } else {
                if (input[44] >= 1.0) {
                    var351 = 0.01799093;
                } else {
                    var351 = 0.00009897607;
                }
            }
        }
    } else {
        if (input[0] >= 3.995) {
            var351 = -0.0022733514;
        } else {
            var351 = 0.009716841;
        }
    }
    double var352;
    if (input[100] >= 1.0) {
        if (input[21] >= 1.0) {
            var352 = 0.013733692;
        } else {
            if (input[2] >= 14.085) {
                var352 = 0.010884923;
            } else {
                if (input[1] >= 4.5550003) {
                    var352 = -0.022192573;
                } else {
                    var352 = 0.005707708;
                }
            }
        }
    } else {
        var352 = -0.0062693493;
    }
    double var353;
    if (input[2] >= 14.765) {
        if (input[1] >= 7.285) {
            var353 = 0.002809892;
        } else {
            var353 = -0.012058428;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[9] >= 1.0) {
                var353 = -0.006930287;
            } else {
                var353 = 0.019300912;
            }
        } else {
            if (input[126] >= 1.0) {
                var353 = 0.009611995;
            } else {
                var353 = -0.012007588;
            }
        }
    }
    double var354;
    if (input[42] >= 1.0) {
        var354 = -0.006991599;
    } else {
        if (input[97] >= 1.0) {
            if (input[2] >= 16.345001) {
                var354 = 0.012695786;
            } else {
                if (input[1] >= 5.0150003) {
                    var354 = -0.023759194;
                } else {
                    if (input[0] >= 3.255) {
                        var354 = -0.0025565473;
                    } else {
                        var354 = 0.0065680444;
                    }
                }
            }
        } else {
            var354 = 0.018309988;
        }
    }
    double var355;
    if (input[2] >= 14.765) {
        if (input[27] >= 1.0) {
            var355 = -0.012419389;
        } else {
            var355 = 0.002895588;
        }
    } else {
        if (input[21] >= 1.0) {
            var355 = 0.011801051;
        } else {
            if (input[36] >= 1.0) {
                var355 = 0.0128820175;
            } else {
                if (input[74] >= 1.0) {
                    var355 = 0.004728142;
                } else {
                    var355 = -0.020761203;
                }
            }
        }
    }
    double var356;
    if (input[100] >= 1.0) {
        if (input[36] >= 1.0) {
            var356 = -0.00978248;
        } else {
            if (input[86] >= 1.0) {
                var356 = -0.012303652;
            } else {
                if (input[0] >= 4.5950003) {
                    if (input[2] >= 17.195) {
                        var356 = 0.004012947;
                    } else {
                        var356 = 0.031840947;
                    }
                } else {
                    var356 = 0.0017143063;
                }
            }
        }
    } else {
        var356 = -0.007588658;
    }
    double var357;
    if (input[2] >= 14.765) {
        if (input[27] >= 1.0) {
            var357 = -0.010350976;
        } else {
            var357 = 0.0028179951;
        }
    } else {
        if (input[5] >= 1.0) {
            var357 = -0.0052186735;
        } else {
            if (input[74] >= 1.0) {
                if (input[1] >= 5.425) {
                    var357 = 0.008126585;
                } else {
                    var357 = -0.011137649;
                }
            } else {
                var357 = 0.019558752;
            }
        }
    }
    double var358;
    if (input[100] >= 1.0) {
        if (input[42] >= 1.0) {
            var358 = 0.015239019;
        } else {
            if (input[0] >= 9.005) {
                var358 = 0.014089824;
            } else {
                if (input[2] >= 4.705) {
                    if (input[9] >= 1.0) {
                        var358 = -0.025175173;
                    } else {
                        var358 = -0.0010962379;
                    }
                } else {
                    var358 = 0.008890886;
                }
            }
        }
    } else {
        var358 = -0.0071974;
    }
    double var359;
    if (input[42] >= 1.0) {
        var359 = -0.007879159;
    } else {
        if (input[9] >= 1.0) {
            if (input[47] >= 1.0) {
                var359 = -0.001788251;
            } else {
                var359 = 0.023022981;
            }
        } else {
            if (input[58] >= 1.0) {
                var359 = 0.012656317;
            } else {
                if (input[2] >= 7.415) {
                    var359 = -0.022193082;
                } else {
                    var359 = -0.0033318675;
                }
            }
        }
    }
    double var360;
    if (input[2] >= 20.525002) {
        var360 = -0.0066051874;
    } else {
        if (input[34] >= 1.0) {
            if (input[1] >= 7.455) {
                var360 = 0.030157771;
            } else {
                if (input[0] >= 4.635) {
                    var360 = -0.022255925;
                } else {
                    if (input[2] >= 5.1549997) {
                        var360 = 0.0041617462;
                    } else {
                        var360 = 0.019682562;
                    }
                }
            }
        } else {
            var360 = -0.01646426;
        }
    }
    double var361;
    if (input[100] >= 1.0) {
        if (input[36] >= 1.0) {
            var361 = -0.01016287;
        } else {
            if (input[86] >= 1.0) {
                var361 = -0.010226606;
            } else {
                if (input[0] >= 4.645) {
                    if (input[2] >= 17.195) {
                        var361 = 0.004770255;
                    } else {
                        var361 = 0.02993697;
                    }
                } else {
                    var361 = 0.0019007205;
                }
            }
        }
    } else {
        var361 = -0.0074935243;
    }
    double var362;
    if (input[100] >= 1.0) {
        if (input[42] >= 1.0) {
            var362 = 0.015126752;
        } else {
            if (input[2] >= 15.595) {
                var362 = 0.012181055;
            } else {
                if (input[1] >= 4.535) {
                    if (input[0] >= 4.275) {
                        var362 = -0.0047575133;
                    } else {
                        var362 = -0.023576511;
                    }
                } else {
                    var362 = 0.00608051;
                }
            }
        }
    } else {
        var362 = -0.0062467856;
    }
    double var363;
    if (input[2] >= 14.625) {
        if (input[1] >= 7.285) {
            var363 = 0.0010793816;
        } else {
            var363 = -0.011153709;
        }
    } else {
        if (input[21] >= 1.0) {
            var363 = 0.011747669;
        } else {
            if (input[36] >= 1.0) {
                var363 = 0.012179812;
            } else {
                if (input[74] >= 1.0) {
                    var363 = 0.0055673914;
                } else {
                    var363 = -0.021644708;
                }
            }
        }
    }
    double var364;
    if (input[42] >= 1.0) {
        var364 = -0.008097659;
    } else {
        if (input[97] >= 1.0) {
            if (input[2] >= 15.595) {
                var364 = 0.010866454;
            } else {
                if (input[2] >= 4.705) {
                    if (input[44] >= 1.0) {
                        var364 = -0.002533885;
                    } else {
                        var364 = -0.023747917;
                    }
                } else {
                    var364 = 0.00628348;
                }
            }
        } else {
            var364 = 0.018289842;
        }
    }
    double var365;
    if (input[2] >= 14.765) {
        if (input[27] >= 1.0) {
            var365 = -0.011632625;
        } else {
            var365 = 0.0012735641;
        }
    } else {
        if (input[47] >= 1.0) {
            var365 = 0.0109701;
        } else {
            if (input[2] >= 8.375) {
                var365 = 0.011113001;
            } else {
                if (input[124] >= 1.0) {
                    var365 = -0.0012589035;
                } else {
                    var365 = -0.013391922;
                }
            }
        }
    }
    double var366;
    if (input[0] >= 8.825) {
        var366 = -0.0069843614;
    } else {
        if (input[5] >= 1.0) {
            var366 = -0.0056970757;
        } else {
            if (input[74] >= 1.0) {
                if (input[1] >= 5.395) {
                    var366 = 0.009758393;
                } else {
                    var366 = -0.015984787;
                }
            } else {
                var366 = 0.023171755;
            }
        }
    }
    double var367;
    if (input[100] >= 1.0) {
        if (input[36] >= 1.0) {
            var367 = -0.009256201;
        } else {
            if (input[58] >= 1.0) {
                var367 = -0.012526953;
            } else {
                if (input[47] >= 1.0) {
                    var367 = 0.0023262915;
                } else {
                    var367 = 0.022494676;
                }
            }
        }
    } else {
        var367 = -0.008538394;
    }
    double var368;
    if (input[1] >= 5.5150003) {
        if (input[0] >= 10.265) {
            var368 = -0.013109713;
        } else {
            if (input[21] >= 1.0) {
                var368 = -0.014872026;
            } else {
                var368 = 0.01248568;
            }
        }
    } else {
        if (input[116] >= 1.0) {
            if (input[1] >= 4.5150003) {
                var368 = 0.0164472;
            } else {
                var368 = -0.0029401141;
            }
        } else {
            var368 = -0.00341955;
        }
    }
    double var369;
    if (input[100] >= 1.0) {
        if (input[2] >= 3.935) {
            if (input[9] >= 1.0) {
                if (input[2] >= 14.355) {
                    var369 = 0.0020376502;
                } else {
                    var369 = -0.014665281;
                }
            } else {
                if (input[2] >= 13.845) {
                    var369 = -0.003011666;
                } else {
                    var369 = 0.026652569;
                }
            }
        } else {
            var369 = -0.010010051;
        }
    } else {
        var369 = -0.0074256295;
    }
    double var370;
    if (input[42] >= 1.0) {
        var370 = -0.008045258;
    } else {
        if (input[9] >= 1.0) {
            if (input[47] >= 1.0) {
                var370 = -0.00049093785;
            } else {
                var370 = 0.020902818;
            }
        } else {
            if (input[58] >= 1.0) {
                var370 = 0.011616146;
            } else {
                if (input[2] >= 7.415) {
                    var370 = -0.02166034;
                } else {
                    var370 = -0.00563546;
                }
            }
        }
    }
    double var371;
    if (input[47] >= 1.0) {
        if (input[2] >= 9.135) {
            if (input[0] >= 10.225) {
                var371 = 0.0022303285;
            } else {
                var371 = -0.014499147;
            }
        } else {
            var371 = 0.01886465;
        }
    } else {
        if (input[37] >= 1.0) {
            var371 = 0.017567832;
        } else {
            if (input[2] >= 11.434999) {
                var371 = 0.0037469624;
            } else {
                if (input[124] >= 1.0) {
                    var371 = -0.005473772;
                } else {
                    var371 = -0.026836714;
                }
            }
        }
    }
    double var372;
    if (input[47] >= 1.0) {
        if (input[58] >= 1.0) {
            var372 = -0.010808431;
        } else {
            if (input[0] >= 7.715) {
                var372 = 0.0021861694;
            } else {
                var372 = 0.016747966;
            }
        }
    } else {
        if (input[37] >= 1.0) {
            var372 = 0.014938257;
        } else {
            if (input[0] >= 4.635) {
                var372 = -0.019443821;
            } else {
                var372 = 0.0025509638;
            }
        }
    }
    double var373;
    if (input[34] >= 1.0) {
        if (input[0] >= 4.505) {
            if (input[1] >= 8.265) {
                var373 = 0.011683288;
            } else {
                if (input[81] >= 1.0) {
                    var373 = 0.006697111;
                } else {
                    var373 = -0.028000621;
                }
            }
        } else {
            if (input[2] >= 5.1549997) {
                var373 = 0.002144182;
            } else {
                var373 = 0.020471193;
            }
        }
    } else {
        var373 = -0.0066017257;
    }
    double var374;
    if (input[2] >= 6.105) {
        if (input[81] >= 1.0) {
            var374 = -0.009408602;
        } else {
            if (input[21] >= 1.0) {
                var374 = -0.009514901;
            } else {
                if (input[86] >= 1.0) {
                    var374 = -0.0010113337;
                } else {
                    var374 = 0.033552103;
                }
            }
        }
    } else {
        var374 = -0.006984267;
    }
    double var375;
    if (input[2] >= 6.105) {
        if (input[81] >= 1.0) {
            var375 = -0.007657583;
        } else {
            if (input[58] >= 1.0) {
                var375 = 0.02195393;
            } else {
                if (input[1] >= 5.885) {
                    var375 = 0.008433015;
                } else {
                    var375 = -0.0158629;
                }
            }
        }
    } else {
        var375 = -0.005569958;
    }
    double var376;
    if (input[34] >= 1.0) {
        if (input[2] >= 19.994999) {
            var376 = -0.017207986;
        } else {
            if (input[47] >= 1.0) {
                if (input[1] >= 5.925) {
                    var376 = 0.029222535;
                } else {
                    var376 = 0.0026397442;
                }
            } else {
                if (input[0] >= 4.755) {
                    var376 = -0.013026653;
                } else {
                    var376 = 0.007829882;
                }
            }
        }
    } else {
        var376 = -0.006202764;
    }
    double var377;
    if (input[116] >= 1.0) {
        if (input[2] >= 5.835) {
            if (input[59] >= 1.0) {
                var377 = -0.008937237;
            } else {
                if (input[44] >= 1.0) {
                    var377 = -0.0029512467;
                } else {
                    if (input[86] >= 1.0) {
                        var377 = 0.030726748;
                    } else {
                        var377 = 0.0031146277;
                    }
                }
            }
        } else {
            var377 = -0.0117640775;
        }
    } else {
        var377 = -0.006212053;
    }
    double var378;
    if (input[59] >= 1.0) {
        var378 = 0.008529227;
    } else {
        if (input[116] >= 1.0) {
            if (input[2] >= 5.795) {
                if (input[44] >= 1.0) {
                    var378 = -0.0029010074;
                } else {
                    if (input[2] >= 14.945) {
                        var378 = 0.026456842;
                    } else {
                        var378 = 0.00074582367;
                    }
                }
            } else {
                var378 = -0.015795615;
            }
        } else {
            var378 = -0.014153252;
        }
    }
    double var379;
    if (input[1] >= 6.925) {
        if (input[2] >= 18.415) {
            var379 = -0.01314866;
        } else {
            var379 = 0.0012880244;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[58] >= 1.0) {
                var379 = 0.013608017;
            } else {
                if (input[0] >= 4.475) {
                    var379 = 0.00911076;
                } else {
                    var379 = -0.023578195;
                }
            }
        } else {
            var379 = 0.013666019;
        }
    }
    double var380;
    if (input[1] >= 5.875) {
        if (input[74] >= 1.0) {
            if (input[9] >= 1.0) {
                var380 = -0.011652353;
            } else {
                var380 = 0.019119028;
            }
        } else {
            var380 = -0.01571272;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[9] >= 1.0) {
                var380 = 0.013491927;
            } else {
                var380 = -0.015533127;
            }
        } else {
            var380 = 0.01513457;
        }
    }
    double var381;
    if (input[59] >= 1.0) {
        var381 = 0.007707334;
    } else {
        if (input[5] >= 1.0) {
            var381 = -0.0152032785;
        } else {
            if (input[116] >= 1.0) {
                if (input[27] >= 1.0) {
                    var381 = 0.01873695;
                } else {
                    var381 = 0.0041273017;
                }
            } else {
                var381 = -0.01786946;
            }
        }
    }
    double var382;
    if (input[2] >= 14.595) {
        if (input[27] >= 1.0) {
            var382 = -0.009560272;
        } else {
            var382 = 0.00012162588;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[2] >= 8.125) {
                var382 = 0.02124241;
            } else {
                var382 = -0.0006568335;
            }
        } else {
            if (input[1] >= 5.635) {
                var382 = -0.016625298;
            } else {
                var382 = 0.0052898326;
            }
        }
    }
    double var383;
    if (input[2] >= 13.934999) {
        if (input[1] >= 7.285) {
            var383 = 0.0010538301;
        } else {
            var383 = -0.010115301;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[1] >= 5.0950003) {
                var383 = 0.01724808;
            } else {
                var383 = -0.0037008107;
            }
        } else {
            if (input[0] >= 3.0349998) {
                var383 = -0.010198375;
            } else {
                var383 = 0.0069518923;
            }
        }
    }
    double var384;
    if (input[1] >= 5.5150003) {
        if (input[2] >= 9.285) {
            if (input[9] >= 1.0) {
                var384 = -0.0139261475;
            } else {
                var384 = 0.001367749;
            }
        } else {
            var384 = 0.006172935;
        }
    } else {
        if (input[0] >= 3.995) {
            var384 = -0.0014976629;
        } else {
            var384 = 0.008522872;
        }
    }
    double var385;
    if (input[59] >= 1.0) {
        var385 = 0.0075903907;
    } else {
        if (input[44] >= 1.0) {
            if (input[1] >= 5.505) {
                var385 = -0.018100766;
            } else {
                var385 = -0.0010728068;
            }
        } else {
            if (input[2] >= 5.375) {
                if (input[124] >= 1.0) {
                    var385 = 0.0007915718;
                } else {
                    var385 = 0.022461621;
                }
            } else {
                var385 = -0.012645139;
            }
        }
    }
    double var386;
    if (input[5] >= 1.0) {
        var386 = 0.005815082;
    } else {
        if (input[0] >= 8.235) {
            var386 = -0.015759408;
        } else {
            if (input[74] >= 1.0) {
                if (input[1] >= 5.715) {
                    var386 = 0.012171678;
                } else {
                    var386 = -0.012855147;
                }
            } else {
                var386 = 0.017401075;
            }
        }
    }
    double var387;
    if (input[1] >= 5.5150003) {
        if (input[74] >= 1.0) {
            if (input[2] >= 13.135) {
                var387 = -0.007900542;
            } else {
                var387 = 0.015268431;
            }
        } else {
            var387 = -0.012125684;
        }
    } else {
        if (input[0] >= 3.795) {
            var387 = -0.0014648663;
        } else {
            var387 = 0.0084132375;
        }
    }
    double var388;
    if (input[59] >= 1.0) {
        var388 = 0.0076575154;
    } else {
        if (input[1] >= 6.6549997) {
            if (input[0] >= 8.895) {
                var388 = -0.0010143603;
            } else {
                var388 = 0.0142300045;
            }
        } else {
            if (input[74] >= 1.0) {
                if (input[58] >= 1.0) {
                    var388 = 0.0099177845;
                } else {
                    var388 = -0.025735447;
                }
            } else {
                var388 = 0.0052614734;
            }
        }
    }
    double var389;
    if (input[1] >= 5.925) {
        if (input[74] >= 1.0) {
            if (input[9] >= 1.0) {
                var389 = -0.008491427;
            } else {
                var389 = 0.015247943;
            }
        } else {
            var389 = -0.013672898;
        }
    } else {
        if (input[27] >= 1.0) {
            var389 = -0.0028417802;
        } else {
            if (input[44] >= 1.0) {
                var389 = -0.0028548432;
            } else {
                var389 = 0.012988378;
            }
        }
    }
    double var390;
    if (input[58] >= 1.0) {
        if (input[86] >= 1.0) {
            var390 = 0.0098602455;
        } else {
            var390 = -0.019955844;
        }
    } else {
        if (input[86] >= 1.0) {
            var390 = -0.012611366;
        } else {
            if (input[126] >= 1.0) {
                var390 = -0.0023940147;
            } else {
                if (input[47] >= 1.0) {
                    var390 = 0.025624633;
                } else {
                    var390 = 0.0014141497;
                }
            }
        }
    }
    double var391;
    if (input[1] >= 5.5150003) {
        if (input[74] >= 1.0) {
            if (input[9] >= 1.0) {
                var391 = -0.00834459;
            } else {
                var391 = 0.012336774;
            }
        } else {
            var391 = -0.009664882;
        }
    } else {
        if (input[116] >= 1.0) {
            if (input[1] >= 4.435) {
                var391 = 0.012434203;
            } else {
                var391 = -0.0018462854;
            }
        } else {
            var391 = -0.0024209563;
        }
    }
    double var392;
    if (input[58] >= 1.0) {
        if (input[86] >= 1.0) {
            var392 = 0.008337836;
        } else {
            var392 = -0.01702801;
        }
    } else {
        if (input[86] >= 1.0) {
            var392 = -0.010846383;
        } else {
            if (input[0] >= 8.535) {
                var392 = 0.01911145;
            } else {
                if (input[2] >= 6.725) {
                    var392 = -0.015757956;
                } else {
                    var392 = 0.01618527;
                }
            }
        }
    }
    double var393;
    if (input[1] >= 6.925) {
        if (input[0] >= 10.095) {
            var393 = -0.0092431;
        } else {
            var393 = 0.0022139116;
        }
    } else {
        if (input[2] >= 5.365) {
            if (input[1] >= 4.575) {
                if (input[2] >= 11.355) {
                    var393 = -0.0007381099;
                } else {
                    var393 = 0.017713185;
                }
            } else {
                var393 = -0.0027946257;
            }
        } else {
            var393 = -0.0070727845;
        }
    }
    double var394;
    if (input[1] >= 5.005) {
        if (input[58] >= 1.0) {
            var394 = -0.007899418;
        } else {
            if (input[44] >= 1.0) {
                var394 = 0.015018961;
            } else {
                var394 = -0.009306;
            }
        }
    } else {
        if (input[9] >= 1.0) {
            var394 = 0.00868308;
        } else {
            var394 = -0.000866513;
        }
    }
    double var395;
    if (input[59] >= 1.0) {
        var395 = 0.005958337;
    } else {
        if (input[5] >= 1.0) {
            var395 = -0.015605378;
        } else {
            if (input[116] >= 1.0) {
                if (input[2] >= 10.585) {
                    var395 = 0.022390978;
                } else {
                    var395 = -0.0005458194;
                }
            } else {
                var395 = -0.01506246;
            }
        }
    }
    double var396;
    if (input[1] >= 5.005) {
        if (input[2] >= 10.405) {
            if (input[47] >= 1.0) {
                var396 = -0.011231116;
            } else {
                var396 = 0.0024405322;
            }
        } else {
            var396 = 0.0037516824;
        }
    } else {
        if (input[0] >= 3.995) {
            var396 = -0.0017825209;
        } else {
            var396 = 0.008030458;
        }
    }
    double var397;
    if (input[5] >= 1.0) {
        var397 = 0.005007291;
    } else {
        if (input[0] >= 10.285) {
            var397 = -0.014720883;
        } else {
            if (input[21] >= 1.0) {
                var397 = -0.014280749;
            } else {
                if (input[2] >= 6.705) {
                    var397 = 0.027988793;
                } else {
                    var397 = -0.012578794;
                }
            }
        }
    }
    double var398;
    if (input[0] >= 2.7350001) {
        if (input[116] >= 1.0) {
            if (input[0] >= 6.965) {
                if (input[9] >= 1.0) {
                    var398 = -0.00046408863;
                } else {
                    var398 = 0.011695736;
                }
            } else {
                if (input[44] >= 1.0) {
                    var398 = -0.0043650228;
                } else {
                    var398 = -0.027957495;
                }
            }
        } else {
            var398 = 0.010611128;
        }
    } else {
        var398 = 0.00694612;
    }
    double var399;
    if (input[36] >= 1.0) {
        var399 = 0.005448293;
    } else {
        if (input[97] >= 1.0) {
            if (input[86] >= 1.0) {
                var399 = -0.017603006;
            } else {
                if (input[0] >= 4.9049997) {
                    var399 = 0.019531528;
                } else {
                    var399 = 0.0038339095;
                }
            }
        } else {
            var399 = -0.017527169;
        }
    }
    double var400;
    if (input[0] >= 5.995) {
        if (input[74] >= 1.0) {
            if (input[47] >= 1.0) {
                var400 = -0.0073933625;
            } else {
                var400 = 0.011868847;
            }
        } else {
            var400 = -0.0115946345;
        }
    } else {
        if (input[86] >= 1.0) {
            var400 = 0.010282801;
        } else {
            if (input[2] >= 6.035) {
                var400 = -0.0112898005;
            } else {
                var400 = 0.0057575004;
            }
        }
    }
    double var401;
    if (input[34] >= 1.0) {
        if (input[2] >= 7.615) {
            if (input[1] >= 6.0950003) {
                if (input[27] >= 1.0) {
                    var401 = 0.01263008;
                } else {
                    var401 = -0.004044909;
                }
            } else {
                var401 = -0.024418816;
            }
        } else {
            if (input[1] >= 5.2349997) {
                var401 = 0.0016704254;
            } else {
                var401 = 0.018465333;
            }
        }
    } else {
        var401 = -0.005337723;
    }
    double var402;
    if (input[5] >= 1.0) {
        var402 = 0.0042826235;
    } else {
        if (input[0] >= 8.235) {
            var402 = -0.012063977;
        } else {
            if (input[74] >= 1.0) {
                if (input[1] >= 5.425) {
                    var402 = 0.008643354;
                } else {
                    var402 = -0.012610997;
                }
            } else {
                var402 = 0.014690845;
            }
        }
    }
    double var403;
    if (input[1] >= 5.925) {
        if (input[47] >= 1.0) {
            var403 = 0.0040324535;
        } else {
            var403 = -0.010222966;
        }
    } else {
        if (input[2] >= 9.665) {
            var403 = 0.009162833;
        } else {
            if (input[126] >= 1.0) {
                var403 = 0.00770814;
            } else {
                var403 = -0.007835175;
            }
        }
    }
    double var404;
    if (input[59] >= 1.0) {
        var404 = 0.0051733903;
    } else {
        if (input[1] >= 6.6549997) {
            if (input[58] >= 1.0) {
                var404 = 0.0012603619;
            } else {
                var404 = 0.013175221;
            }
        } else {
            if (input[86] >= 1.0) {
                var404 = 0.0043272935;
            } else {
                if (input[1] >= 4.535) {
                    var404 = -0.026467517;
                } else {
                    var404 = 0.008499238;
                }
            }
        }
    }
    double var405;
    if (input[1] >= 6.145) {
        if (input[47] >= 1.0) {
            var405 = 0.004537782;
        } else {
            var405 = -0.01206997;
        }
    } else {
        if (input[0] >= 3.6750002) {
            if (input[0] >= 5.325) {
                var405 = -0.0030805105;
            } else {
                var405 = 0.016256861;
            }
        } else {
            var405 = -0.0031335878;
        }
    }
    double var406;
    if (input[1] >= 6.145) {
        if (input[47] >= 1.0) {
            var406 = 0.003650517;
        } else {
            var406 = -0.00997089;
        }
    } else {
        if (input[2] >= 8.365) {
            var406 = 0.008268709;
        } else {
            if (input[1] >= 4.275) {
                var406 = -0.006654384;
            } else {
                var406 = 0.0056200265;
            }
        }
    }
    double var407;
    if (input[1] >= 6.925) {
        if (input[27] >= 1.0) {
            var407 = -0.0077894274;
        } else {
            var407 = 0.0028135588;
        }
    } else {
        if (input[81] >= 1.0) {
            var407 = 0.010684674;
        } else {
            if (input[44] >= 1.0) {
                var407 = 0.007087285;
            } else {
                if (input[1] >= 4.865) {
                    var407 = -0.013609937;
                } else {
                    var407 = -0.0011857079;
                }
            }
        }
    }
    double var408;
    if (input[21] >= 1.0) {
        var408 = 0.0043892097;
    } else {
        if (input[81] >= 1.0) {
            var408 = -0.018340226;
        } else {
            if (input[74] >= 1.0) {
                if (input[9] >= 1.0) {
                    var408 = 0.029694809;
                } else {
                    var408 = -0.010098109;
                }
            } else {
                var408 = -0.006300977;
            }
        }
    }
    double var409;
    if (input[5] >= 1.0) {
        var409 = 0.004986799;
    } else {
        if (input[74] >= 1.0) {
            if (input[58] >= 1.0) {
                var409 = 0.009715151;
            } else {
                if (input[47] >= 1.0) {
                    var409 = -0.0016078113;
                } else {
                    var409 = -0.024171706;
                }
            }
        } else {
            var409 = 0.00955768;
        }
    }
    double var410;
    if (input[58] >= 1.0) {
        if (input[86] >= 1.0) {
            var410 = 0.007060245;
        } else {
            var410 = -0.014893365;
        }
    } else {
        if (input[86] >= 1.0) {
            var410 = -0.009871412;
        } else {
            if (input[126] >= 1.0) {
                var410 = -0.0035144503;
            } else {
                if (input[47] >= 1.0) {
                    var410 = 0.021110488;
                } else {
                    var410 = 0.00041837335;
                }
            }
        }
    }
    double var411;
    if (input[1] >= 6.925) {
        if (input[1] >= 8.675) {
            var411 = 0.0015017139;
        } else {
            var411 = -0.0074999123;
        }
    } else {
        if (input[81] >= 1.0) {
            var411 = 0.010972095;
        } else {
            if (input[44] >= 1.0) {
                var411 = 0.0069589256;
            } else {
                if (input[0] >= 3.8449998) {
                    var411 = -0.013099304;
                } else {
                    var411 = -0.0020063187;
                }
            }
        }
    }
    double var412;
    if (input[0] >= 2.7350001) {
        if (input[1] >= 4.375) {
            if (input[2] >= 12.025) {
                if (input[1] >= 7.035) {
                    var412 = 0.00064225687;
                } else {
                    var412 = -0.009124221;
                }
            } else {
                if (input[2] >= 7.375) {
                    var412 = 0.017457152;
                } else {
                    var412 = 0.000071756884;
                }
            }
        } else {
            var412 = -0.014323944;
        }
    } else {
        var412 = 0.0048620226;
    }
    double var413;
    if (input[1] >= 6.925) {
        if (input[27] >= 1.0) {
            var413 = -0.0071262983;
        } else {
            var413 = 0.0014900232;
        }
    } else {
        if (input[2] >= 4.375) {
            if (input[1] >= 4.575) {
                if (input[0] >= 5.995) {
                    var413 = -0.0007368149;
                } else {
                    var413 = 0.024530409;
                }
            } else {
                var413 = -0.011061639;
            }
        } else {
            var413 = -0.0075236987;
        }
    }
    double var414;
    if (input[1] >= 5.005) {
        if (input[21] >= 1.0) {
            var414 = 0.0041920287;
        } else {
            if (input[2] >= 9.565001) {
                if (input[2] >= 17.615002) {
                    var414 = -0.003333683;
                } else {
                    var414 = -0.02184963;
                }
            } else {
                var414 = 0.013145974;
            }
        }
    } else {
        if (input[2] >= 6.705) {
            var414 = 0.0074654245;
        } else {
            var414 = -0.0013660095;
        }
    }
    double var415;
    if (input[59] >= 1.0) {
        var415 = 0.005024006;
    } else {
        if (input[1] >= 6.615) {
            if (input[58] >= 1.0) {
                var415 = 0.0009782625;
            } else {
                var415 = 0.013417199;
            }
        } else {
            if (input[74] >= 1.0) {
                if (input[58] >= 1.0) {
                    var415 = 0.0071742074;
                } else {
                    var415 = -0.022562103;
                }
            } else {
                var415 = 0.0035422877;
            }
        }
    }
    double var416;
    if (input[1] >= 5.005) {
        if (input[74] >= 1.0) {
            if (input[44] >= 1.0) {
                var416 = -0.011402986;
            } else {
                if (input[1] >= 7.135) {
                    var416 = 0.01873612;
                } else {
                    var416 = -0.0040754587;
                }
            }
        } else {
            var416 = -0.008118523;
        }
    } else {
        if (input[0] >= 3.9850001) {
            var416 = -0.00122437;
        } else {
            var416 = 0.0070252493;
        }
    }
    double var417;
    if (input[1] >= 6.925) {
        if (input[27] >= 1.0) {
            var417 = -0.007404595;
        } else {
            var417 = 0.0010949691;
        }
    } else {
        if (input[2] >= 8.365) {
            var417 = 0.009644243;
        } else {
            if (input[1] >= 4.275) {
                var417 = -0.00884891;
            } else {
                var417 = 0.006194944;
            }
        }
    }
    double var418;
    if (input[58] >= 1.0) {
        if (input[47] >= 1.0) {
            var418 = -0.013896696;
        } else {
            var418 = 0.00762244;
        }
    } else {
        if (input[86] >= 1.0) {
            var418 = -0.0075469855;
        } else {
            if (input[2] >= 7.525) {
                var418 = -0.0015718117;
            } else {
                var418 = 0.014951483;
            }
        }
    }
    double var419;
    if (input[58] >= 1.0) {
        if (input[47] >= 1.0) {
            var419 = -0.011622611;
        } else {
            var419 = 0.0063638557;
        }
    } else {
        if (input[34] >= 1.0) {
            if (input[2] >= 8.035) {
                var419 = -0.00943896;
            } else {
                var419 = 0.020780835;
            }
        } else {
            var419 = -0.008341442;
        }
    }
    double var420;
    if (input[2] >= 8.365) {
        if (input[47] >= 1.0) {
            if (input[0] >= 10.065001) {
                var420 = 0.0037591413;
            } else {
                var420 = -0.011822287;
            }
        } else {
            var420 = 0.011589145;
        }
    } else {
        if (input[47] >= 1.0) {
            var420 = 0.010866515;
        } else {
            if (input[2] >= 5.475) {
                var420 = -0.016963834;
            } else {
                var420 = -0.0020684497;
            }
        }
    }
    double var421;
    if (input[2] >= 6.105) {
        if (input[34] >= 1.0) {
            if (input[1] >= 5.085) {
                if (input[86] >= 1.0) {
                    var421 = 0.028120633;
                } else {
                    var421 = -0.014419725;
                }
            } else {
                var421 = -0.016024947;
            }
        } else {
            var421 = 0.011281056;
        }
    } else {
        var421 = -0.0047336346;
    }
    double var422;
    if (input[42] >= 1.0) {
        var422 = -0.0054411814;
    } else {
        if (input[97] >= 1.0) {
            if (input[2] >= 16.345001) {
                var422 = 0.014706333;
            } else {
                if (input[1] >= 4.5550003) {
                    var422 = -0.024457136;
                } else {
                    var422 = 0.002828668;
                }
            }
        } else {
            var422 = 0.02040381;
        }
    }
    double var423;
    if (input[1] >= 6.925) {
        if (input[0] >= 10.095) {
            var423 = -0.008865405;
        } else {
            var423 = 0.0009135833;
        }
    } else {
        if (input[2] >= 5.365) {
            if (input[1] >= 4.475) {
                if (input[44] >= 1.0) {
                    var423 = 0.0016270814;
                } else {
                    var423 = 0.016110005;
                }
            } else {
                var423 = -0.002948703;
            }
        } else {
            var423 = -0.006319141;
        }
    }
    double var424;
    if (input[100] >= 1.0) {
        if (input[86] >= 1.0) {
            if (input[44] >= 1.0) {
                var424 = -0.017530143;
            } else {
                var424 = 0.001979607;
            }
        } else {
            if (input[0] >= 3.645) {
                var424 = 0.018417193;
            } else {
                var424 = -0.0095723225;
            }
        }
    } else {
        var424 = -0.006171419;
    }
    double var425;
    if (input[0] >= 2.7350001) {
        if (input[9] >= 1.0) {
            if (input[0] >= 9.045) {
                var425 = 0.0053389412;
            } else {
                var425 = -0.017628126;
            }
        } else {
            if (input[2] >= 14.605) {
                var425 = -0.0076900017;
            } else {
                if (input[5] >= 1.0) {
                    var425 = -0.005856485;
                } else {
                    var425 = 0.026292227;
                }
            }
        }
    } else {
        var425 = 0.0070407535;
    }
    double var426;
    if (input[2] >= 20.415) {
        var426 = -0.0065436466;
    } else {
        if (input[34] >= 1.0) {
            if (input[1] >= 7.1949997) {
                var426 = 0.024107803;
            } else {
                if (input[0] >= 5.255) {
                    var426 = -0.021674568;
                } else {
                    if (input[1] >= 4.675) {
                        var426 = 0.015480052;
                    } else {
                        var426 = 0.0033718417;
                    }
                }
            }
        } else {
            var426 = -0.0147979455;
        }
    }
    double var427;
    if (input[1] >= 6.925) {
        if (input[0] >= 9.965) {
            var427 = -0.00867964;
        } else {
            var427 = -0.00024303707;
        }
    } else {
        if (input[2] >= 5.365) {
            if (input[1] >= 4.575) {
                if (input[2] >= 11.145) {
                    var427 = 0.0013164151;
                } else {
                    var427 = 0.015047683;
                }
            } else {
                var427 = -0.001213376;
            }
        } else {
            var427 = -0.0062741325;
        }
    }
    double var428;
    if (input[1] >= 6.925) {
        if (input[0] >= 9.965) {
            var428 = -0.007364034;
        } else {
            var428 = -0.00020135131;
        }
    } else {
        if (input[2] >= 8.365) {
            var428 = 0.009330966;
        } else {
            if (input[47] >= 1.0) {
                var428 = 0.005780923;
            } else {
                var428 = -0.008092325;
            }
        }
    }
    double var429;
    if (input[1] >= 5.005) {
        if (input[2] >= 20.525002) {
            var429 = -0.009134895;
        } else {
            if (input[58] >= 1.0) {
                var429 = -0.0128368335;
            } else {
                if (input[44] >= 1.0) {
                    var429 = 0.016236383;
                } else {
                    var429 = -0.0004333227;
                }
            }
        }
    } else {
        if (input[2] >= 6.705) {
            var429 = 0.0076169097;
        } else {
            var429 = -0.0008749447;
        }
    }
    double var430;
    if (input[0] >= 2.7350001) {
        if (input[9] >= 1.0) {
            if (input[0] >= 9.005) {
                var430 = 0.007003329;
            } else {
                var430 = -0.015661592;
            }
        } else {
            if (input[58] >= 1.0) {
                var430 = -0.005392845;
            } else {
                if (input[0] >= 6.365) {
                    var430 = 0.001505144;
                } else {
                    var430 = 0.013984009;
                }
            }
        }
    } else {
        var430 = 0.0059602703;
    }
    double var431;
    if (input[0] >= 2.7350001) {
        if (input[74] >= 1.0) {
            if (input[0] >= 4.615) {
                if (input[2] >= 14.595) {
                    var431 = -0.006845111;
                } else {
                    var431 = 0.018794816;
                }
            } else {
                var431 = -0.022156958;
            }
        } else {
            var431 = 0.007367509;
        }
    } else {
        var431 = 0.0050584;
    }
    double var432;
    if (input[0] >= 3.705) {
        if (input[34] >= 1.0) {
            if (input[1] >= 8.265) {
                var432 = 0.010451045;
            } else {
                if (input[81] >= 1.0) {
                    var432 = 0.010337639;
                } else {
                    if (input[0] >= 5.675) {
                        var432 = -0.0328706;
                    } else {
                        var432 = -0.001567526;
                    }
                }
            }
        } else {
            var432 = 0.008095768;
        }
    } else {
        var432 = 0.0044699432;
    }
    double var433;
    if (input[1] >= 6.2650003) {
        if (input[47] >= 1.0) {
            var433 = 0.004546236;
        } else {
            var433 = -0.011154994;
        }
    } else {
        if (input[47] >= 1.0) {
            var433 = -0.0059917993;
        } else {
            if (input[2] >= 8.135) {
                var433 = 0.017484717;
            } else {
                var433 = -0.0025580795;
            }
        }
    }
    double var434;
    if (input[74] >= 1.0) {
        if (input[5] >= 1.0) {
            var434 = 0.01806929;
        } else {
            if (input[58] >= 1.0) {
                var434 = 0.010686671;
            } else {
                if (input[2] >= 7.4849997) {
                    var434 = -0.017548487;
                } else {
                    var434 = -0.0020189928;
                }
            }
        }
    } else {
        if (input[1] >= 5.915) {
            var434 = -0.011035767;
        } else {
            var434 = 0.0053936006;
        }
    }
    double var435;
    if (input[59] >= 1.0) {
        var435 = 0.0053784335;
    } else {
        if (input[5] >= 1.0) {
            var435 = -0.015665967;
        } else {
            if (input[116] >= 1.0) {
                if (input[2] >= 11.355) {
                    var435 = 0.020876687;
                } else {
                    var435 = 0.0019487297;
                }
            } else {
                var435 = -0.014896231;
            }
        }
    }
    double var436;
    if (input[0] >= 3.705) {
        if (input[34] >= 1.0) {
            if (input[1] >= 8.265) {
                var436 = 0.008597001;
            } else {
                if (input[81] >= 1.0) {
                    var436 = 0.008088295;
                } else {
                    if (input[0] >= 5.675) {
                        var436 = -0.029053701;
                    } else {
                        var436 = -0.000795212;
                    }
                }
            }
        } else {
            var436 = 0.006350256;
        }
    } else {
        var436 = 0.00485056;
    }
    double var437;
    if (input[27] >= 1.0) {
        if (input[2] >= 7.6549997) {
            var437 = -0.0089182295;
        } else {
            var437 = 0.0049659186;
        }
    } else {
        if (input[2] >= 6.165) {
            if (input[2] >= 10.655) {
                var437 = -0.00057295046;
            } else {
                var437 = 0.01459794;
            }
        } else {
            var437 = -0.0069964794;
        }
    }
    double var438;
    if (input[5] >= 1.0) {
        var438 = 0.004870852;
    } else {
        if (input[0] >= 8.235) {
            var438 = -0.012858927;
        } else {
            if (input[1] >= 5.425) {
                var438 = 0.012206458;
            } else {
                if (input[1] >= 4.285) {
                    var438 = -0.009319362;
                } else {
                    var438 = 0.0035781949;
                }
            }
        }
    }
    double var439;
    if (input[59] >= 1.0) {
        var439 = 0.005339043;
    } else {
        if (input[34] >= 1.0) {
            if (input[0] >= 4.505) {
                if (input[1] >= 7.605) {
                    var439 = 0.007746944;
                } else {
                    var439 = -0.030245647;
                }
            } else {
                if (input[2] >= 5.1549997) {
                    var439 = -0.0015785812;
                } else {
                    var439 = 0.01582127;
                }
            }
        } else {
            var439 = 0.0123204775;
        }
    }
    double var440;
    if (input[1] >= 7.605) {
        var440 = -0.004779255;
    } else {
        if (input[2] >= 6.105) {
            if (input[126] >= 1.0) {
                var440 = -0.0065773847;
            } else {
                var440 = 0.016857179;
            }
        } else {
            var440 = -0.007622236;
        }
    }
    double var441;
    if (input[34] >= 1.0) {
        if (input[2] >= 18.955) {
            var441 = -0.014410297;
        } else {
            if (input[58] >= 1.0) {
                var441 = -0.006019211;
            } else {
                if (input[1] >= 4.825) {
                    var441 = 0.023736078;
                } else {
                    var441 = -0.004267695;
                }
            }
        }
    } else {
        var441 = -0.0053849556;
    }
    double var442;
    if (input[1] >= 5.005) {
        if (input[0] >= 5.085) {
            if (input[74] >= 1.0) {
                if (input[9] >= 1.0) {
                    var442 = -0.00844738;
                } else {
                    var442 = 0.021653863;
                }
            } else {
                var442 = -0.008165353;
            }
        } else {
            var442 = -0.009929193;
        }
    } else {
        if (input[9] >= 1.0) {
            var442 = 0.009064027;
        } else {
            var442 = -0.0014864318;
        }
    }
    double var443;
    if (input[1] >= 5.005) {
        if (input[0] >= 5.085) {
            if (input[2] >= 20.525002) {
                var443 = -0.0069715763;
            } else {
                if (input[86] >= 1.0) {
                    var443 = 0.015164185;
                } else {
                    var443 = -0.0053541637;
                }
            }
        } else {
            var443 = -0.00821368;
        }
    } else {
        if (input[2] >= 6.705) {
            var443 = 0.0076992847;
        } else {
            var443 = -0.0012706663;
        }
    }
    double var444;
    if (input[34] >= 1.0) {
        if (input[2] >= 7.615) {
            if (input[1] >= 6.005) {
                if (input[27] >= 1.0) {
                    var444 = 0.013482282;
                } else {
                    var444 = -0.00440991;
                }
            } else {
                var444 = -0.021388376;
            }
        } else {
            if (input[1] >= 5.175) {
                var444 = 0.001794743;
            } else {
                var444 = 0.015245041;
            }
        }
    } else {
        var444 = -0.0045041246;
    }
    double var445;
    if (input[1] >= 6.925) {
        if (input[2] >= 16.244999) {
            var445 = 0.0012893864;
        } else {
            var445 = -0.007834581;
        }
    } else {
        if (input[2] >= 8.365) {
            var445 = 0.010201758;
        } else {
            if (input[1] >= 4.275) {
                var445 = -0.008740962;
            } else {
                var445 = 0.0040407698;
            }
        }
    }
    double var446;
    if (input[1] >= 6.145) {
        if (input[47] >= 1.0) {
            var446 = 0.0030104367;
        } else {
            var446 = -0.008495488;
        }
    } else {
        if (input[0] >= 3.3249998) {
            if (input[126] >= 1.0) {
                var446 = -0.002702349;
            } else {
                var446 = 0.010843998;
            }
        } else {
            var446 = -0.0052468437;
        }
    }
    double var447;
    if (input[59] >= 1.0) {
        var447 = 0.0041633053;
    } else {
        if (input[9] >= 1.0) {
            if (input[2] >= 10.585) {
                var447 = 0.019627951;
            } else {
                var447 = -0.0050291456;
            }
        } else {
            if (input[126] >= 1.0) {
                var447 = 0.0008245073;
            } else {
                var447 = -0.013596763;
            }
        }
    }
    double var448;
    if (input[1] >= 6.925) {
        if (input[27] >= 1.0) {
            var448 = -0.0071654837;
        } else {
            var448 = 0.0015829221;
        }
    } else {
        if (input[2] >= 4.375) {
            if (input[9] >= 1.0) {
                var448 = -0.007259214;
            } else {
                var448 = 0.015404864;
            }
        } else {
            var448 = -0.0058856253;
        }
    }
    double var449;
    if (input[34] >= 1.0) {
        if (input[0] >= 4.505) {
            if (input[1] >= 6.0150003) {
                if (input[27] >= 1.0) {
                    var449 = 0.0121044535;
                } else {
                    var449 = -0.0057292026;
                }
            } else {
                var449 = -0.018975507;
            }
        } else {
            if (input[2] >= 5.1549997) {
                var449 = -0.0012879637;
            } else {
                var449 = 0.020598661;
            }
        }
    } else {
        var449 = -0.005195777;
    }
    double var450;
    if (input[1] >= 6.145) {
        if (input[2] >= 16.244999) {
            var450 = 0.0023277695;
        } else {
            var450 = -0.0070611225;
        }
    } else {
        if (input[0] >= 3.3249998) {
            if (input[126] >= 1.0) {
                var450 = -0.002359324;
            } else {
                var450 = 0.01087569;
            }
        } else {
            var450 = -0.004797578;
        }
    }
    double var451;
    if (input[27] >= 1.0) {
        if (input[2] >= 7.6549997) {
            var451 = -0.007718971;
        } else {
            var451 = 0.004331294;
        }
    } else {
        if (input[2] >= 6.165) {
            if (input[2] >= 10.655) {
                var451 = -0.00064994616;
            } else {
                var451 = 0.01351682;
            }
        } else {
            var451 = -0.0068378374;
        }
    }
    double var452;
    if (input[34] >= 1.0) {
        if (input[2] >= 18.955) {
            var452 = -0.013549706;
        } else {
            if (input[1] >= 4.675) {
                if (input[86] >= 1.0) {
                    var452 = 0.024847278;
                } else {
                    var452 = -0.00090105674;
                }
            } else {
                var452 = -0.006445202;
            }
        }
    } else {
        var452 = -0.0041204384;
    }
    double var453;
    if (input[86] >= 1.0) {
        if (input[126] >= 1.0) {
            var453 = 0.008415316;
        } else {
            var453 = -0.012362576;
        }
    } else {
        if (input[44] >= 1.0) {
            var453 = 0.01493585;
        } else {
            if (input[9] >= 1.0) {
                var453 = 0.00753812;
            } else {
                var453 = -0.018893175;
            }
        }
    }
    double var454;
    if (input[2] >= 18.105) {
        var454 = 0.004490414;
    } else {
        if (input[44] >= 1.0) {
            if (input[124] >= 1.0) {
                var454 = 0.010856009;
            } else {
                var454 = -0.0035024786;
            }
        } else {
            if (input[126] >= 1.0) {
                var454 = 0.0077134664;
            } else {
                var454 = -0.0148416655;
            }
        }
    }
    double var455;
    if (input[1] >= 5.005) {
        if (input[74] >= 1.0) {
            if (input[44] >= 1.0) {
                var455 = -0.01206493;
            } else {
                if (input[2] >= 17.415) {
                    var455 = 0.01906804;
                } else {
                    var455 = -0.0036577692;
                }
            }
        } else {
            var455 = -0.0072622495;
        }
    } else {
        if (input[9] >= 1.0) {
            var455 = 0.0075236596;
        } else {
            var455 = -0.0011729408;
        }
    }
    double var456;
    if (input[27] >= 1.0) {
        if (input[2] >= 7.6549997) {
            var456 = -0.0067432933;
        } else {
            var456 = 0.003949926;
        }
    } else {
        if (input[2] >= 6.705) {
            if (input[2] >= 11.115) {
                var456 = 0.0008079492;
            } else {
                var456 = 0.010570705;
            }
        } else {
            var456 = -0.004286166;
        }
    }
    double var457;
    if (input[34] >= 1.0) {
        if (input[2] >= 7.615) {
            if (input[1] >= 6.0950003) {
                if (input[27] >= 1.0) {
                    var457 = 0.012549688;
                } else {
                    var457 = -0.004055229;
                }
            } else {
                var457 = -0.019733166;
            }
        } else {
            if (input[124] >= 1.0) {
                var457 = 0.0154319145;
            } else {
                var457 = 0.0021156906;
            }
        }
    } else {
        var457 = -0.004091675;
    }
    double var458;
    if (input[1] >= 6.145) {
        if (input[47] >= 1.0) {
            var458 = 0.002201622;
        } else {
            var458 = -0.0076244776;
        }
    } else {
        if (input[2] >= 8.135) {
            var458 = 0.009260459;
        } else {
            if (input[1] >= 4.495) {
                var458 = -0.009735635;
            } else {
                var458 = 0.0061350074;
            }
        }
    }
    double var459;
    if (input[5] >= 1.0) {
        var459 = 0.0044096108;
    } else {
        if (input[2] >= 20.53) {
            var459 = -0.012841638;
        } else {
            if (input[74] >= 1.0) {
                if (input[2] >= 10.795) {
                    var459 = -0.017940566;
                } else {
                    var459 = 0.004239463;
                }
            } else {
                var459 = 0.01742311;
            }
        }
    }
    double var460;
    if (input[0] >= 5.495) {
        if (input[86] >= 1.0) {
            var460 = -0.0077044875;
        } else {
            if (input[1] >= 6.9449997) {
                var460 = -0.003254806;
            } else {
                var460 = 0.019382976;
            }
        }
    } else {
        if (input[86] >= 1.0) {
            var460 = 0.004701353;
        } else {
            if (input[2] >= 5.7349997) {
                var460 = -0.018405143;
            } else {
                var460 = 0.0059386413;
            }
        }
    }
    double var461;
    if (input[2] >= 5.365) {
        if (input[81] >= 1.0) {
            var461 = -0.008853393;
        } else {
            if (input[21] >= 1.0) {
                var461 = -0.008881794;
            } else {
                if (input[86] >= 1.0) {
                    var461 = -0.005105184;
                } else {
                    var461 = 0.03049548;
                }
            }
        }
    } else {
        var461 = -0.005039463;
    }
    double var462;
    if (input[21] >= 1.0) {
        var462 = 0.005781182;
    } else {
        if (input[81] >= 1.0) {
            var462 = -0.016485581;
        } else {
            if (input[2] >= 6.705) {
                if (input[9] >= 1.0) {
                    var462 = 0.021715956;
                } else {
                    var462 = 0.0010061918;
                }
            } else {
                var462 = -0.008002329;
            }
        }
    }
    double var463;
    if (input[5] >= 1.0) {
        var463 = 0.004836631;
    } else {
        if (input[2] >= 20.53) {
            var463 = -0.011621447;
        } else {
            if (input[74] >= 1.0) {
                if (input[2] >= 6.2349997) {
                    if (input[86] >= 1.0) {
                        var463 = 0.0032061639;
                    } else {
                        var463 = -0.023210846;
                    }
                } else {
                    var463 = 0.008271842;
                }
            } else {
                var463 = 0.015466838;
            }
        }
    }
    double var464;
    if (input[74] >= 1.0) {
        if (input[5] >= 1.0) {
            var464 = 0.016086286;
        } else {
            if (input[58] >= 1.0) {
                var464 = 0.011044854;
            } else {
                if (input[0] >= 5.085) {
                    var464 = 0.00049683097;
                } else {
                    var464 = -0.01976125;
                }
            }
        }
    } else {
        if (input[1] >= 5.915) {
            var464 = -0.011081196;
        } else {
            var464 = 0.0035814038;
        }
    }
    double var465;
    if (input[74] >= 1.0) {
        if (input[86] >= 1.0) {
            if (input[2] >= 11.745) {
                var465 = 0.0053967303;
            } else {
                var465 = -0.016087092;
            }
        } else {
            if (input[2] >= 11.785) {
                var465 = -0.0104531525;
            } else {
                var465 = 0.022717282;
            }
        }
    } else {
        if (input[1] >= 5.915) {
            var465 = -0.009414323;
        } else {
            var465 = 0.003032837;
        }
    }
    double var466;
    if (input[2] >= 12.825) {
        if (input[1] >= 8.345) {
            var466 = -0.003691746;
        } else {
            var466 = 0.008843749;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[86] >= 1.0) {
                var466 = -0.011754722;
            } else {
                var466 = 0.016326614;
            }
        } else {
            var466 = -0.013571333;
        }
    }
    double var467;
    if (input[2] >= 7.705) {
        if (input[47] >= 1.0) {
            if (input[0] >= 9.615) {
                var467 = 0.0020550755;
            } else {
                var467 = -0.008427889;
            }
        } else {
            var467 = 0.009515675;
        }
    } else {
        if (input[1] >= 4.4049997) {
            var467 = -0.008516878;
        } else {
            var467 = 0.0035632032;
        }
    }
    double var468;
    if (input[1] >= 7.035) {
        if (input[2] >= 17.175) {
            var468 = 0.008384563;
        } else {
            var468 = -0.0021924244;
        }
    } else {
        if (input[81] >= 1.0) {
            var468 = 0.0039083;
        } else {
            if (input[44] >= 1.0) {
                var468 = 0.0045735254;
            } else {
                var468 = -0.012046217;
            }
        }
    }
    double var469;
    if (input[21] >= 1.0) {
        var469 = 0.0044156793;
    } else {
        if (input[81] >= 1.0) {
            var469 = -0.015061787;
        } else {
            if (input[2] >= 15.285) {
                var469 = 0.018168034;
            } else {
                if (input[44] >= 1.0) {
                    var469 = 0.017685985;
                } else {
                    var469 = -0.017606162;
                }
            }
        }
    }
    double var470;
    if (input[34] >= 1.0) {
        if (input[81] >= 1.0) {
            var470 = 0.016386425;
        } else {
            if (input[5] >= 1.0) {
                var470 = 0.008078606;
            } else {
                if (input[86] >= 1.0) {
                    var470 = 0.0048606344;
                } else {
                    var470 = -0.024156956;
                }
            }
        }
    } else {
        var470 = -0.0050741765;
    }
    double var471;
    if (input[59] >= 1.0) {
        var471 = 0.0053113047;
    } else {
        if (input[44] >= 1.0) {
            if (input[1] >= 5.505) {
                var471 = -0.01666596;
            } else {
                var471 = -0.0029541946;
            }
        } else {
            if (input[0] >= 6.275) {
                var471 = 0.018254047;
            } else {
                var471 = -0.0052168826;
            }
        }
    }
    double var472;
    if (input[2] >= 13.934999) {
        if (input[27] >= 1.0) {
            var472 = -0.006978254;
        } else {
            var472 = 0.00095106737;
        }
    } else {
        if (input[21] >= 1.0) {
            var472 = 0.0117281;
        } else {
            if (input[74] >= 1.0) {
                if (input[9] >= 1.0) {
                    var472 = 0.021534147;
                } else {
                    var472 = -0.010546322;
                }
            } else {
                var472 = -0.013842202;
            }
        }
    }
    double var473;
    if (input[34] >= 1.0) {
        if (input[2] >= 8.705) {
            if (input[1] >= 6.125) {
                var473 = 0.002942446;
            } else {
                var473 = -0.02135541;
            }
        } else {
            if (input[47] >= 1.0) {
                var473 = 0.027276091;
            } else {
                var473 = -0.0035876103;
            }
        }
    } else {
        var473 = -0.004808233;
    }
    double var474;
    if (input[86] >= 1.0) {
        if (input[0] >= 5.025) {
            var474 = -0.012227985;
        } else {
            var474 = 0.009420403;
        }
    } else {
        if (input[0] >= 4.125) {
            if (input[1] >= 6.9449997) {
                var474 = -0.004543996;
            } else {
                var474 = 0.016903697;
            }
        } else {
            var474 = -0.008494478;
        }
    }
    double var475;
    if (input[59] >= 1.0) {
        var475 = 0.004718064;
    } else {
        if (input[5] >= 1.0) {
            var475 = -0.014671714;
        } else {
            if (input[116] >= 1.0) {
                if (input[2] >= 10.585) {
                    var475 = 0.018535996;
                } else {
                    var475 = 0.0022332596;
                }
            } else {
                var475 = -0.013993905;
            }
        }
    }
    double var476;
    if (input[2] >= 14.855) {
        if (input[9] >= 1.0) {
            var476 = -0.000035001074;
        } else {
            var476 = -0.0066045173;
        }
    } else {
        if (input[44] >= 1.0) {
            if (input[2] >= 7.665) {
                var476 = 0.017671421;
            } else {
                var476 = -0.0026613092;
            }
        } else {
            if (input[2] >= 6.7349997) {
                var476 = -0.0141200675;
            } else {
                var476 = 0.0047585056;
            }
        }
    }
    double var477;
    if (input[0] >= 3.705) {
        if (input[9] >= 1.0) {
            if (input[0] >= 8.655) {
                var477 = 0.0034981081;
            } else {
                var477 = -0.014284324;
            }
        } else {
            if (input[2] >= 14.605) {
                var477 = -0.0065972474;
            } else {
                var477 = 0.011532972;
            }
        }
    } else {
        var477 = 0.0038972353;
    }
    double var478;
    if (input[86] >= 1.0) {
        if (input[44] >= 1.0) {
            var478 = -0.014445178;
        } else {
            var478 = 0.00784731;
        }
    } else {
        if (input[44] >= 1.0) {
            var478 = 0.012027855;
        } else {
            if (input[1] >= 5.215) {
                var478 = -0.0141888345;
            } else {
                var478 = 0.010490986;
            }
        }
    }
    double var479;
    if (input[59] >= 1.0) {
        var479 = 0.005042515;
    } else {
        if (input[44] >= 1.0) {
            if (input[0] >= 4.885) {
                var479 = -0.014638786;
            } else {
                var479 = -0.0013271993;
            }
        } else {
            if (input[0] >= 6.275) {
                var479 = 0.016159417;
            } else {
                var479 = -0.0063157203;
            }
        }
    }
    double var480;
    if (input[34] >= 1.0) {
        if (input[2] >= 8.705) {
            if (input[1] >= 6.4049997) {
                var480 = 0.002378798;
            } else {
                var480 = -0.018286126;
            }
        } else {
            if (input[47] >= 1.0) {
                var480 = 0.024583414;
            } else {
                var480 = -0.0024925007;
            }
        }
    } else {
        var480 = -0.00520249;
    }
    double var481;
    if (input[58] >= 1.0) {
        if (input[47] >= 1.0) {
            var481 = -0.01394579;
        } else {
            var481 = 0.008385761;
        }
    } else {
        if (input[86] >= 1.0) {
            var481 = -0.010383993;
        } else {
            if (input[0] >= 4.455) {
                var481 = 0.015029629;
            } else {
                var481 = -0.003265515;
            }
        }
    }
    double var482;
    if (input[0] >= 9.184999) {
        var482 = -0.0046640243;
    } else {
        if (input[37] >= 1.0) {
            var482 = -0.0060114344;
        } else {
            if (input[1] >= 4.625) {
                if (input[2] >= 9.285) {
                    var482 = -0.0048810937;
                } else {
                    var482 = 0.024863759;
                }
            } else {
                var482 = -0.013222267;
            }
        }
    }
    double var483;
    if (input[27] >= 1.0) {
        if (input[0] >= 8.235) {
            var483 = -0.009241405;
        } else {
            var483 = 0.0021236192;
        }
    } else {
        if (input[2] >= 6.165) {
            if (input[86] >= 1.0) {
                var483 = 0.010360836;
            } else {
                var483 = -0.00068395515;
            }
        } else {
            var483 = -0.005744298;
        }
    }
    double var484;
    if (input[59] >= 1.0) {
        var484 = 0.0043031205;
    } else {
        if (input[34] >= 1.0) {
            if (input[0] >= 4.505) {
                if (input[1] >= 7.495) {
                    var484 = 0.0059780297;
                } else {
                    var484 = -0.02775506;
                }
            } else {
                if (input[2] >= 5.0950003) {
                    var484 = -0.0015316424;
                } else {
                    var484 = 0.014428964;
                }
            }
        } else {
            var484 = 0.011556959;
        }
    }
    double var485;
    if (input[34] >= 1.0) {
        if (input[2] >= 19.325) {
            var485 = -0.013605642;
        } else {
            if (input[58] >= 1.0) {
                var485 = -0.005561239;
            } else {
                if (input[1] >= 4.825) {
                    var485 = 0.022605307;
                } else {
                    var485 = -0.0046447576;
                }
            }
        }
    } else {
        var485 = -0.005205706;
    }
    double var486;
    if (input[1] >= 5.005) {
        if (input[0] >= 5.085) {
            if (input[2] >= 13.135) {
                if (input[124] >= 1.0) {
                    var486 = 0.0006903702;
                } else {
                    var486 = -0.0091130035;
                }
            } else {
                var486 = 0.011365636;
            }
        } else {
            var486 = -0.008767506;
        }
    } else {
        if (input[2] >= 6.705) {
            var486 = 0.008865553;
        } else {
            var486 = -0.0021976607;
        }
    }
    double var487;
    if (input[1] >= 6.145) {
        if (input[47] >= 1.0) {
            var487 = 0.0021683653;
        } else {
            var487 = -0.008223432;
        }
    } else {
        if (input[2] >= 9.91) {
            var487 = 0.0102724135;
        } else {
            if (input[126] >= 1.0) {
                var487 = 0.0056039463;
            } else {
                var487 = -0.007630586;
            }
        }
    }
    double var488;
    if (input[34] >= 1.0) {
        if (input[81] >= 1.0) {
            var488 = 0.013261438;
        } else {
            if (input[5] >= 1.0) {
                var488 = 0.0096548265;
            } else {
                if (input[86] >= 1.0) {
                    var488 = 0.0030013619;
                } else {
                    var488 = -0.021481004;
                }
            }
        }
    } else {
        var488 = -0.004377857;
    }
    double var489;
    if (input[27] >= 1.0) {
        if (input[1] >= 5.955) {
            var489 = 0.0012169401;
        } else {
            var489 = -0.007997481;
        }
    } else {
        if (input[1] >= 4.875) {
            if (input[86] >= 1.0) {
                var489 = 0.009573497;
            } else {
                var489 = -0.012987031;
            }
        } else {
            var489 = 0.008703831;
        }
    }
    double var490;
    if (input[86] >= 1.0) {
        if (input[44] >= 1.0) {
            var490 = -0.012919388;
        } else {
            var490 = 0.005354197;
        }
    } else {
        if (input[1] >= 4.495) {
            if (input[1] >= 7.135) {
                var490 = 0.006668532;
            } else {
                if (input[47] >= 1.0) {
                    var490 = -0.015786204;
                } else {
                    var490 = 0.0015105301;
                }
            }
        } else {
            var490 = 0.014735903;
        }
    }
    double var491;
    if (input[1] >= 7.605) {
        var491 = -0.0051027434;
    } else {
        if (input[2] >= 8.545) {
            if (input[0] >= 7.865) {
                var491 = 0.0010253949;
            } else {
                var491 = 0.012647823;
            }
        } else {
            if (input[47] >= 1.0) {
                var491 = 0.0061469236;
            } else {
                var491 = -0.009734803;
            }
        }
    }
    double var492;
    if (input[86] >= 1.0) {
        if (input[0] >= 5.025) {
            var492 = -0.010544935;
        } else {
            var492 = 0.0071947067;
        }
    } else {
        if (input[44] >= 1.0) {
            var492 = 0.012237525;
        } else {
            if (input[9] >= 1.0) {
                var492 = 0.007359974;
            } else {
                var492 = -0.016139943;
            }
        }
    }
    double var493;
    if (input[27] >= 1.0) {
        if (input[1] >= 7.025) {
            var493 = -0.0070320717;
        } else {
            var493 = 0.0018983148;
        }
    } else {
        if (input[2] >= 5.835) {
            if (input[9] >= 1.0) {
                var493 = -0.0008934443;
            } else {
                var493 = 0.0095246555;
            }
        } else {
            var493 = -0.0056342855;
        }
    }
    double var494;
    if (input[86] >= 1.0) {
        if (input[58] >= 1.0) {
            var494 = 0.0067554037;
        } else {
            var494 = -0.011212312;
        }
    } else {
        if (input[1] >= 4.495) {
            if (input[1] >= 7.135) {
                var494 = 0.0064562275;
            } else {
                if (input[47] >= 1.0) {
                    var494 = -0.014332217;
                } else {
                    var494 = 0.00047959053;
                }
            }
        } else {
            var494 = 0.012542791;
        }
    }
    double var495;
    if (input[1] >= 7.605) {
        var495 = -0.0036137213;
    } else {
        if (input[2] >= 10.205) {
            var495 = 0.009477291;
        } else {
            if (input[36] >= 1.0) {
                var495 = 0.005264148;
            } else {
                if (input[0] >= 3.6950002) {
                    var495 = -0.016069092;
                } else {
                    var495 = 0.0043500667;
                }
            }
        }
    }
    double var496;
    if (input[21] >= 1.0) {
        var496 = 0.003457931;
    } else {
        if (input[81] >= 1.0) {
            var496 = -0.015869146;
        } else {
            if (input[47] >= 1.0) {
                var496 = -0.0046783756;
            } else {
                var496 = 0.014582147;
            }
        }
    }
    double var497;
    if (input[86] >= 1.0) {
        if (input[44] >= 1.0) {
            var497 = -0.011860797;
        } else {
            var497 = 0.0049499827;
        }
    } else {
        if (input[0] >= 3.645) {
            if (input[44] >= 1.0) {
                var497 = 0.021000315;
            } else {
                var497 = -0.0037629686;
            }
        } else {
            var497 = -0.008803177;
        }
    }
    double var498;
    if (input[86] >= 1.0) {
        if (input[126] >= 1.0) {
            var498 = 0.006744509;
        } else {
            var498 = -0.009973589;
        }
    } else {
        if (input[0] >= 5.495) {
            if (input[1] >= 6.8050003) {
                var498 = 0.00047705972;
            } else {
                var498 = 0.013391879;
            }
        } else {
            if (input[2] >= 5.7349997) {
                var498 = -0.016381279;
            } else {
                var498 = 0.008303436;
            }
        }
    }
    double var499;
    if (input[59] >= 1.0) {
        var499 = 0.004357415;
    } else {
        if (input[44] >= 1.0) {
            if (input[0] >= 4.885) {
                var499 = -0.014333465;
            } else {
                var499 = -0.0012766091;
            }
        } else {
            if (input[1] >= 6.705) {
                var499 = 0.017269256;
            } else {
                if (input[9] >= 1.0) {
                    var499 = 0.0035691285;
                } else {
                    var499 = -0.010991882;
                }
            }
        }
    }
    double var500;
    if (input[1] >= 6.925) {
        if (input[27] >= 1.0) {
            var500 = -0.006344572;
        } else {
            var500 = 0.0012741096;
        }
    } else {
        if (input[81] >= 1.0) {
            var500 = 0.010465995;
        } else {
            if (input[47] >= 1.0) {
                var500 = -0.011596572;
            } else {
                if (input[2] >= 7.205) {
                    var500 = 0.013999467;
                } else {
                    var500 = -0.007827789;
                }
            }
        }
    }
    double var501;
    if (input[2] >= 7.615) {
        if (input[1] >= 7.605) {
            var501 = -0.007714702;
        } else {
            if (input[9] >= 1.0) {
                var501 = -0.006844675;
            } else {
                var501 = 0.00974823;
            }
        }
    } else {
        if (input[124] >= 1.0) {
            var501 = 0.008491769;
        } else {
            var501 = -0.0037098278;
        }
    }
    double var502;
    if (input[34] >= 1.0) {
        if (input[2] >= 7.615) {
            if (input[1] >= 6.005) {
                if (input[27] >= 1.0) {
                    var502 = 0.012390494;
                } else {
                    var502 = -0.003952495;
                }
            } else {
                var502 = -0.022213424;
            }
        } else {
            if (input[124] >= 1.0) {
                var502 = 0.015048907;
            } else {
                var502 = 0.0032652433;
            }
        }
    } else {
        var502 = -0.004189741;
    }
    double var503;
    if (input[21] >= 1.0) {
        var503 = 0.0035793453;
    } else {
        if (input[81] >= 1.0) {
            var503 = -0.014873071;
        } else {
            if (input[2] >= 6.705) {
                if (input[9] >= 1.0) {
                    var503 = 0.018976154;
                } else {
                    var503 = 0.0002744806;
                }
            } else {
                var503 = -0.004551885;
            }
        }
    }
    double var504;
    if (input[86] >= 1.0) {
        if (input[0] >= 5.025) {
            var504 = -0.0101311095;
        } else {
            var504 = 0.0067716925;
        }
    } else {
        if (input[0] >= 3.645) {
            if (input[44] >= 1.0) {
                var504 = 0.019330818;
            } else {
                var504 = -0.0034234468;
            }
        } else {
            var504 = -0.0074145515;
        }
    }
    double var505;
    if (input[86] >= 1.0) {
        if (input[58] >= 1.0) {
            var505 = 0.0055378494;
        } else {
            var505 = -0.009592456;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[2] >= 6.725) {
                var505 = -0.007848358;
            } else {
                var505 = 0.024505481;
            }
        } else {
            var505 = -0.0070227175;
        }
    }
    double var506;
    if (input[59] >= 1.0) {
        var506 = 0.005610084;
    } else {
        if (input[44] >= 1.0) {
            if (input[86] >= 1.0) {
                var506 = -0.00064509775;
            } else {
                var506 = -0.014340697;
            }
        } else {
            if (input[0] >= 6.045) {
                var506 = 0.016242724;
            } else {
                var506 = -0.006206662;
            }
        }
    }
    double var507;
    if (input[58] >= 1.0) {
        if (input[47] >= 1.0) {
            var507 = -0.0123789385;
        } else {
            var507 = 0.00656401;
        }
    } else {
        if (input[86] >= 1.0) {
            var507 = -0.008455516;
        } else {
            if (input[0] >= 4.455) {
                var507 = 0.013708356;
            } else {
                var507 = -0.0021820301;
            }
        }
    }
    double var508;
    if (input[58] >= 1.0) {
        if (input[47] >= 1.0) {
            var508 = -0.010415212;
        } else {
            var508 = 0.005514616;
        }
    } else {
        if (input[47] >= 1.0) {
            var508 = 0.009597089;
        } else {
            if (input[0] >= 4.005) {
                var508 = 0.00606242;
            } else {
                var508 = -0.016258903;
            }
        }
    }
    double var509;
    if (input[0] >= 3.705) {
        if (input[9] >= 1.0) {
            if (input[0] >= 8.655) {
                var509 = 0.002622611;
            } else {
                var509 = -0.0145889325;
            }
        } else {
            if (input[2] >= 14.135) {
                var509 = -0.005212864;
            } else {
                var509 = 0.0107638575;
            }
        }
    } else {
        var509 = 0.0044820583;
    }
    double var510;
    if (input[0] >= 3.705) {
        if (input[9] >= 1.0) {
            if (input[2] >= 16.305) {
                var510 = 0.0023560687;
            } else {
                var510 = -0.012039231;
            }
        } else {
            if (input[0] >= 6.815) {
                var510 = -0.0037994038;
            } else {
                var510 = 0.010474098;
            }
        }
    } else {
        var510 = 0.0036079949;
    }
    double var511;
    if (input[21] >= 1.0) {
        var511 = 0.0040134382;
    } else {
        if (input[81] >= 1.0) {
            var511 = -0.013476711;
        } else {
            if (input[1] >= 5.565) {
                var511 = 0.013127104;
            } else {
                var511 = -0.0039472003;
            }
        }
    }
    double var512;
    if (input[81] >= 1.0) {
        if (input[124] >= 1.0) {
            var512 = 0.006409084;
        } else {
            var512 = -0.00048363788;
        }
    } else {
        if (input[21] >= 1.0) {
            var512 = -0.014010514;
        } else {
            if (input[47] >= 1.0) {
                var512 = -0.005544613;
            } else {
                if (input[2] >= 7.6549997) {
                    var512 = 0.0131629985;
                } else {
                    var512 = 0.0033823794;
                }
            }
        }
    }
    double var513;
    if (input[21] >= 1.0) {
        var513 = 0.005238675;
    } else {
        if (input[1] >= 8.135) {
            var513 = -0.016373225;
        } else {
            if (input[2] >= 12.755) {
                var513 = 0.012566131;
            } else {
                if (input[1] >= 5.335) {
                    var513 = 0.010123628;
                } else {
                    if (input[0] >= 3.355) {
                        var513 = -0.016181052;
                    } else {
                        var513 = 0.0024096435;
                    }
                }
            }
        }
    }
    double var514;
    if (input[21] >= 1.0) {
        var514 = 0.004259015;
    } else {
        if (input[36] >= 1.0) {
            var514 = 0.010727241;
        } else {
            if (input[1] >= 7.545) {
                var514 = -0.024086213;
            } else {
                if (input[2] >= 11.425) {
                    var514 = 0.01257483;
                } else {
                    var514 = -0.0038143026;
                }
            }
        }
    }
    double var515;
    if (input[97] >= 1.0) {
        if (input[81] >= 1.0) {
            var515 = 0.012958434;
        } else {
            if (input[1] >= 5.025) {
                if (input[2] >= 13.135) {
                    var515 = -0.019848779;
                } else {
                    var515 = -0.00400039;
                }
            } else {
                var515 = 0.0007351051;
            }
        }
    } else {
        var515 = 0.0053503015;
    }
    double var516;
    if (input[1] >= 7.035) {
        if (input[2] >= 17.175) {
            var516 = 0.006693898;
        } else {
            var516 = -0.0012148642;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[2] >= 11.635) {
                var516 = -0.019366492;
            } else {
                if (input[2] >= 6.375) {
                    var516 = 0.015329824;
                } else {
                    var516 = -0.008905224;
                }
            }
        } else {
            var516 = 0.006260879;
        }
    }
    double var517;
    if (input[21] >= 1.0) {
        var517 = 0.0037764143;
    } else {
        if (input[81] >= 1.0) {
            var517 = -0.013588897;
        } else {
            if (input[1] >= 5.565) {
                var517 = 0.0127973715;
            } else {
                var517 = -0.0035979254;
            }
        }
    }
    double var518;
    if (input[1] >= 5.925) {
        if (input[1] >= 7.035) {
            if (input[86] >= 1.0) {
                var518 = -0.0027529034;
            } else {
                var518 = 0.0061258734;
            }
        } else {
            var518 = -0.008190384;
        }
    } else {
        if (input[74] >= 1.0) {
            if (input[9] >= 1.0) {
                var518 = 0.008363813;
            } else {
                var518 = -0.010258739;
            }
        } else {
            var518 = 0.008008009;
        }
    }
    double var519;
    if (input[21] >= 1.0) {
        var519 = 0.0034051277;
    } else {
        if (input[81] >= 1.0) {
            var519 = -0.011232716;
        } else {
            if (input[74] >= 1.0) {
                if (input[1] >= 5.565) {
                    var519 = 0.02624501;
                } else {
                    var519 = -0.009335432;
                }
            } else {
                var519 = -0.006394535;
            }
        }
    }
    double var520;
    if (input[1] >= 6.145) {
        if (input[47] >= 1.0) {
            var520 = 0.0031367019;
        } else {
            var520 = -0.010068214;
        }
    } else {
        if (input[0] >= 5.325) {
            var520 = -0.003540437;
        } else {
            if (input[126] >= 1.0) {
                var520 = 0.01405098;
            } else {
                var520 = -0.0021137826;
            }
        }
    }
    double var521;
    if (input[81] >= 1.0) {
        var521 = 0.004585045;
    } else {
        if (input[21] >= 1.0) {
            var521 = -0.013082629;
        } else {
            if (input[47] >= 1.0) {
                var521 = -0.005047023;
            } else {
                if (input[1] >= 5.035) {
                    var521 = 0.0022834076;
                } else {
                    var521 = 0.012399253;
                }
            }
        }
    }
    double var522;
    if (input[21] >= 1.0) {
        var522 = 0.0047892784;
    } else {
        if (input[1] >= 8.105) {
            var522 = -0.012889522;
        } else {
            if (input[2] >= 12.755) {
                var522 = 0.010817086;
            } else {
                if (input[1] >= 5.335) {
                    var522 = 0.007763504;
                } else {
                    if (input[0] >= 3.3449998) {
                        var522 = -0.013330873;
                    } else {
                        var522 = 0.0012264047;
                    }
                }
            }
        }
    }
    double var523;
    if (input[1] >= 5.5150003) {
        if (input[2] >= 19.974998) {
            var523 = -0.009032448;
        } else {
            if (input[86] >= 1.0) {
                var523 = 0.0094717005;
            } else {
                var523 = -0.0069687744;
            }
        }
    } else {
        if (input[0] >= 3.995) {
            var523 = -0.0022165035;
        } else {
            var523 = 0.0065094302;
        }
    }
    double var524;
    var524 = sigmoid(0.21972994199473891 + (var0 + var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21 + var22 + var23 + var24 + var25 + var26 + var27 + var28 + var29 + var30 + var31 + var32 + var33 + var34 + var35 + var36 + var37 + var38 + var39 + var40 + var41 + var42 + var43 + var44 + var45 + var46 + var47 + var48 + var49 + var50 + var51 + var52 + var53 + var54 + var55 + var56 + var57 + var58 + var59 + var60 + var61 + var62 + var63 + var64 + var65 + var66 + var67 + var68 + var69 + var70 + var71 + var72 + var73 + var74 + var75 + var76 + var77 + var78 + var79 + var80 + var81 + var82 + var83 + var84 + var85 + var86 + var87 + var88 + var89 + var90 + var91 + var92 + var93 + var94 + var95 + var96 + var97 + var98 + var99 + var100 + var101 + var102 + var103 + var104 + var105 + var106 + var107 + var108 + var109 + var110 + var111 + var112 + var113 + var114 + var115 + var116 + var117 + var118 + var119 + var120 + var121 + var122 + var123 + var124 + var125 + var126 + var127 + var128 + var129 + var130 + var131 + var132 + var133 + var134 + var135 + var136 + var137 + var138 + var139 + var140 + var141 + var142 + var143 + var144 + var145 + var146 + var147 + var148 + var149 + var150 + var151 + var152 + var153 + var154 + var155 + var156 + var157 + var158 + var159 + var160 + var161 + var162 + var163 + var164 + var165 + var166 + var167 + var168 + var169 + var170 + var171 + var172 + var173 + var174 + var175 + var176 + var177 + var178 + var179 + var180 + var181 + var182 + var183 + var184 + var185 + var186 + var187 + var188 + var189 + var190 + var191 + var192 + var193 + var194 + var195 + var196 + var197 + var198 + var199 + var200 + var201 + var202 + var203 + var204 + var205 + var206 + var207 + var208 + var209 + var210 + var211 + var212 + var213 + var214 + var215 + var216 + var217 + var218 + var219 + var220 + var221 + var222 + var223 + var224 + var225 + var226 + var227 + var228 + var229 + var230 + var231 + var232 + var233 + var234 + var235 + var236 + var237 + var238 + var239 + var240 + var241 + var242 + var243 + var244 + var245 + var246 + var247 + var248 + var249 + var250 + var251 + var252 + var253 + var254 + var255 + var256 + var257 + var258 + var259 + var260 + var261 + var262 + var263 + var264 + var265 + var266 + var267 + var268 + var269 + var270 + var271 + var272 + var273 + var274 + var275 + var276 + var277 + var278 + var279 + var280 + var281 + var282 + var283 + var284 + var285 + var286 + var287 + var288 + var289 + var290 + var291 + var292 + var293 + var294 + var295 + var296 + var297 + var298 + var299 + var300 + var301 + var302 + var303 + var304 + var305 + var306 + var307 + var308 + var309 + var310 + var311 + var312 + var313 + var314 + var315 + var316 + var317 + var318 + var319 + var320 + var321 + var322 + var323 + var324 + var325 + var326 + var327 + var328 + var329 + var330 + var331 + var332 + var333 + var334 + var335 + var336 + var337 + var338 + var339 + var340 + var341 + var342 + var343 + var344 + var345 + var346 + var347 + var348 + var349 + var350 + var351 + var352 + var353 + var354 + var355 + var356 + var357 + var358 + var359 + var360 + var361 + var362 + var363 + var364 + var365 + var366 + var367 + var368 + var369 + var370 + var371 + var372 + var373 + var374 + var375 + var376 + var377 + var378 + var379 + var380 + var381 + var382 + var383 + var384 + var385 + var386 + var387 + var388 + var389 + var390 + var391 + var392 + var393 + var394 + var395 + var396 + var397 + var398 + var399 + var400 + var401 + var402 + var403 + var404 + var405 + var406 + var407 + var408 + var409 + var410 + var411 + var412 + var413 + var414 + var415 + var416 + var417 + var418 + var419 + var420 + var421 + var422 + var423 + var424 + var425 + var426 + var427 + var428 + var429 + var430 + var431 + var432 + var433 + var434 + var435 + var436 + var437 + var438 + var439 + var440 + var441 + var442 + var443 + var444 + var445 + var446 + var447 + var448 + var449 + var450 + var451 + var452 + var453 + var454 + var455 + var456 + var457 + var458 + var459 + var460 + var461 + var462 + var463 + var464 + var465 + var466 + var467 + var468 + var469 + var470 + var471 + var472 + var473 + var474 + var475 + var476 + var477 + var478 + var479 + var480 + var481 + var482 + var483 + var484 + var485 + var486 + var487 + var488 + var489 + var490 + var491 + var492 + var493 + var494 + var495 + var496 + var497 + var498 + var499 + var500 + var501 + var502 + var503 + var504 + var505 + var506 + var507 + var508 + var509 + var510 + var511 + var512 + var513 + var514 + var515 + var516 + var517 + var518 + var519 + var520 + var521 + var522 + var523));
    memcpy(output, (double[]){1.0 - var524, var524}, 2 * sizeof(double));
}
