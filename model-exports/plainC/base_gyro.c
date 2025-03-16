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
    if (input[0] >= -0.3650905) {
        if (input[0] >= 0.2699635) {
            var0 = 0.5481975;
        } else {
            if (input[1] >= 1.3615685) {
                if (input[1] >= 2.5099053) {
                    var0 = 0.5037783;
                } else {
                    if (input[0] >= 0.2022295) {
                        var0 = -0.098913975;
                    } else {
                        if (input[3] >= 0.24210301) {
                            var0 = -0.0014700666;
                        } else {
                            if (input[5] >= 0.157583) {
                                var0 = 0.13139725;
                            } else {
                                var0 = 0.41188255;
                            }
                        }
                    }
                }
            } else {
                if (input[4] >= 0.050589) {
                    var0 = 0.18270014;
                } else {
                    if (input[4] >= -0.0302925) {
                        var0 = -0.36851895;
                    } else {
                        var0 = 0.13713181;
                    }
                }
            }
        }
    } else {
        if (input[1] >= 2.0670514) {
            if (input[5] >= 0.27117652) {
                var0 = 0.05669712;
            } else {
                var0 = 0.45201036;
            }
        } else {
            if (input[2] >= 10.400147) {
                if (input[0] >= -1.1890526) {
                    if (input[1] >= 0.542921) {
                        var0 = 0.3532515;
                    } else {
                        var0 = -0.12728427;
                    }
                } else {
                    var0 = -0.390609;
                }
            } else {
                if (input[2] >= 8.243657) {
                    if (input[0] >= -0.8274795) {
                        if (input[2] >= 8.915535) {
                            var0 = -0.5166939;
                        } else {
                            var0 = -0.17539951;
                        }
                    } else {
                        if (input[3] >= 0.0167135) {
                            var0 = 0.047241;
                        } else {
                            var0 = -0.36490792;
                        }
                    }
                } else {
                    if (input[0] >= -0.7589965) {
                        var0 = 0.15059061;
                    } else {
                        var0 = -0.27901345;
                    }
                }
            }
        }
    }
    double var1;
    if (input[0] >= -0.3650905) {
        if (input[0] >= 0.2699635) {
            var1 = 0.42586142;
        } else {
            if (input[1] >= 1.3615685) {
                if (input[0] >= 0.2377055) {
                    var1 = -0.035804927;
                } else {
                    if (input[4] >= -0.421497) {
                        if (input[5] >= 0.23199049) {
                            if (input[2] >= 9.140892) {
                                var1 = -0.06619592;
                            } else {
                                var1 = 0.30265915;
                            }
                        } else {
                            var1 = 0.3700428;
                        }
                    } else {
                        var1 = -0.0007313303;
                    }
                }
            } else {
                if (input[4] >= 0.050589) {
                    var1 = 0.15406922;
                } else {
                    if (input[4] >= -0.0302925) {
                        var1 = -0.28878406;
                    } else {
                        var1 = 0.11222185;
                    }
                }
            }
        }
    } else {
        if (input[1] >= 2.1894221) {
            if (input[5] >= 0.27117652) {
                var1 = 0.092416205;
            } else {
                var1 = 0.3775428;
            }
        } else {
            if (input[2] >= 10.400147) {
                if (input[1] >= 1.0843451) {
                    var1 = 0.24728025;
                } else {
                    if (input[0] >= -1.1870315) {
                        var1 = -0.009042394;
                    } else {
                        var1 = -0.34974658;
                    }
                }
            } else {
                if (input[2] >= 7.732994) {
                    if (input[0] >= -0.8274795) {
                        if (input[2] >= 9.028027) {
                            var1 = -0.3983181;
                        } else {
                            if (input[0] >= -0.687595) {
                                var1 = -0.028443433;
                            } else {
                                var1 = -0.19440638;
                            }
                        }
                    } else {
                        if (input[1] >= 1.434692) {
                            var1 = 0.079521015;
                        } else {
                            var1 = -0.3153219;
                        }
                    }
                } else {
                    var1 = 0.018964084;
                }
            }
        }
    }
    double var2;
    if (input[0] >= -0.3921095) {
        if (input[0] >= -0.065863) {
            if (input[1] >= 0.62839353) {
                if (input[5] >= 0.418303) {
                    var2 = 0.10119022;
                } else {
                    var2 = 0.35723677;
                }
            } else {
                if (input[0] >= 0.387245) {
                    var2 = 0.24555157;
                } else {
                    var2 = -0.17657739;
                }
            }
        } else {
            if (input[1] >= 1.9755166) {
                if (input[0] >= -0.097971) {
                    var2 = -0.06884349;
                } else {
                    if (input[4] >= 0.1824835) {
                        var2 = 0.07953675;
                    } else {
                        var2 = 0.35728264;
                    }
                }
            } else {
                if (input[3] >= -0.081002) {
                    if (input[0] >= -0.27408) {
                        if (input[0] >= -0.2514025) {
                            if (input[3] >= 0.033504) {
                                var2 = 0.0513881;
                            } else {
                                var2 = -0.16360739;
                            }
                        } else {
                            var2 = -0.32319948;
                        }
                    } else {
                        var2 = 0.040716313;
                    }
                } else {
                    var2 = 0.09231849;
                }
            }
        }
    } else {
        if (input[1] >= 2.067276) {
            if (input[0] >= -0.44135702) {
                var2 = 0.0045857816;
            } else {
                if (input[5] >= 0.34045547) {
                    var2 = 0.0025627017;
                } else {
                    var2 = 0.32575464;
                }
            }
        } else {
            if (input[2] >= 10.400147) {
                if (input[1] >= 1.0843451) {
                    var2 = 0.18541905;
                } else {
                    if (input[0] >= -1.1870315) {
                        var2 = -0.020804381;
                    } else {
                        var2 = -0.29120556;
                    }
                }
            } else {
                if (input[2] >= 7.732994) {
                    if (input[3] >= 0.3510305) {
                        var2 = -0.08072217;
                    } else {
                        if (input[5] >= 0.4293005) {
                            var2 = -0.08193959;
                        } else {
                            var2 = -0.31239918;
                        }
                    }
                } else {
                    var2 = -0.03236227;
                }
            }
        }
    }
    double var3;
    if (input[1] >= 2.073114) {
        if (input[1] >= 2.6216478) {
            if (input[4] >= 0.24518) {
                if (input[1] >= 2.9981155) {
                    var3 = 0.21480457;
                } else {
                    var3 = -0.0657087;
                }
            } else {
                var3 = 0.36545953;
            }
        } else {
            if (input[2] >= 7.8589573) {
                if (input[2] >= 10.23534) {
                    var3 = 0.26277566;
                } else {
                    if (input[4] >= 0.042177) {
                        var3 = 0.1116194;
                    } else {
                        if (input[2] >= 9.3591385) {
                            var3 = -0.27448982;
                        } else {
                            var3 = 0.014972478;
                        }
                    }
                }
            } else {
                var3 = 0.29962397;
            }
        }
    } else {
        if (input[0] >= -0.1338215) {
            if (input[3] >= 0.022709) {
                var3 = 0.35137072;
            } else {
                if (input[3] >= -0.010426) {
                    var3 = -0.24932824;
                } else {
                    if (input[1] >= 0.4970415) {
                        var3 = 0.3291624;
                    } else {
                        var3 = -0.016960401;
                    }
                }
            }
        } else {
            if (input[2] >= 10.400147) {
                if (input[0] >= -0.902324) {
                    if (input[0] >= -0.3953275) {
                        var3 = 0.003007416;
                    } else {
                        var3 = 0.25350043;
                    }
                } else {
                    if (input[1] >= 1.0741665) {
                        var3 = 0.028817918;
                    } else {
                        var3 = -0.24601178;
                    }
                }
            } else {
                if (input[2] >= 9.028027) {
                    if (input[0] >= -0.82755446) {
                        var3 = -0.29094324;
                    } else {
                        if (input[1] >= 1.3736935) {
                            var3 = 0.12163542;
                        } else {
                            var3 = -0.19153088;
                        }
                    }
                } else {
                    if (input[3] >= 0.0143745) {
                        var3 = 0.19141226;
                    } else {
                        if (input[3] >= -0.1278335) {
                            var3 = -0.27708584;
                        } else {
                            var3 = 0.101241104;
                        }
                    }
                }
            }
        }
    }
    double var4;
    if (input[1] >= 1.992432) {
        if (input[1] >= 2.6216478) {
            if (input[4] >= 0.24518) {
                var4 = 0.09012056;
            } else {
                var4 = 0.331168;
            }
        } else {
            if (input[2] >= 7.7014847) {
                if (input[2] >= 10.23534) {
                    var4 = 0.25208786;
                } else {
                    if (input[4] >= 0.0705175) {
                        var4 = 0.1707806;
                    } else {
                        if (input[4] >= -0.038364) {
                            var4 = -0.26389733;
                        } else {
                            if (input[3] >= 0.12615299) {
                                var4 = -0.073995255;
                            } else {
                                var4 = 0.10340806;
                            }
                        }
                    }
                }
            } else {
                var4 = 0.28041863;
            }
        }
    } else {
        if (input[0] >= -0.1338215) {
            if (input[0] >= 0.3859725) {
                var4 = 0.30231798;
            } else {
                if (input[3] >= 0.022709) {
                    var4 = 0.27218515;
                } else {
                    if (input[3] >= -0.010526) {
                        var4 = -0.24299477;
                    } else {
                        var4 = 0.11701984;
                    }
                }
            }
        } else {
            if (input[5] >= -0.087015495) {
                if (input[5] >= 0.064587) {
                    if (input[0] >= -0.781001) {
                        if (input[2] >= 10.042616) {
                            var4 = 0.081975274;
                        } else {
                            if (input[2] >= 9.026978) {
                                var4 = -0.2526775;
                            } else {
                                var4 = -0.006657355;
                            }
                        }
                    } else {
                        if (input[1] >= 0.869841) {
                            var4 = 0.15644988;
                        } else {
                            var4 = -0.09890054;
                        }
                    }
                } else {
                    if (input[3] >= 0.024713) {
                        if (input[3] >= 0.30073148) {
                            var4 = -0.1331263;
                        } else {
                            var4 = 0.041578554;
                        }
                    } else {
                        if (input[3] >= -0.21984899) {
                            var4 = -0.29366943;
                        } else {
                            var4 = -0.06374142;
                        }
                    }
                }
            } else {
                if (input[2] >= 9.851838) {
                    var4 = 0.15993053;
                } else {
                    if (input[2] >= 9.526489) {
                        if (input[0] >= -0.635279) {
                            var4 = -0.24949013;
                        } else {
                            var4 = -0.052019577;
                        }
                    } else {
                        var4 = 0.046529923;
                    }
                }
            }
        }
    }
    double var5;
    if (input[1] >= 1.992432) {
        if (input[1] >= 2.9715457) {
            var5 = 0.30421937;
        } else {
            if (input[2] >= 7.7014847) {
                if (input[2] >= 9.774748) {
                    var5 = 0.22935273;
                } else {
                    if (input[2] >= 9.366098) {
                        if (input[2] >= 9.414672) {
                            var5 = -0.048698954;
                        } else {
                            var5 = -0.3053787;
                        }
                    } else {
                        if (input[3] >= -0.0030935002) {
                            var5 = 0.2007259;
                        } else {
                            if (input[2] >= 8.295) {
                                var5 = 0.094922915;
                            } else {
                                var5 = -0.16323213;
                            }
                        }
                    }
                }
            } else {
                var5 = 0.27387318;
            }
        }
    } else {
        if (input[0] >= -0.1338215) {
            if (input[0] >= 0.3859725) {
                var5 = 0.27763313;
            } else {
                if (input[3] >= 0.022709) {
                    var5 = 0.242094;
                } else {
                    if (input[3] >= -0.010526) {
                        var5 = -0.20368549;
                    } else {
                        var5 = 0.096555665;
                    }
                }
            }
        } else {
            if (input[2] >= 10.356064) {
                if (input[0] >= -1.1890526) {
                    if (input[5] >= 0.013040001) {
                        var5 = 0.25642776;
                    } else {
                        if (input[5] >= -0.034765) {
                            var5 = -0.15275837;
                        } else {
                            var5 = 0.13466105;
                        }
                    }
                } else {
                    if (input[0] >= -1.7548759) {
                        var5 = -0.056162313;
                    } else {
                        var5 = -0.19836752;
                    }
                }
            } else {
                if (input[2] >= 9.138422) {
                    if (input[0] >= -0.7423065) {
                        if (input[2] >= 9.960512) {
                            var5 = -0.061755106;
                        } else {
                            var5 = -0.2501225;
                        }
                    } else {
                        if (input[3] >= 0.0171845) {
                            var5 = 0.061080348;
                        } else {
                            if (input[3] >= -0.041689) {
                                var5 = -0.15631083;
                            } else {
                                var5 = -0.05054156;
                            }
                        }
                    }
                } else {
                    if (input[4] >= -0.0425685) {
                        if (input[5] >= 0.030957999) {
                            var5 = 0.046545547;
                        } else {
                            if (input[0] >= -0.7500155) {
                                var5 = -0.040402573;
                            } else {
                                var5 = -0.20929486;
                            }
                        }
                    } else {
                        var5 = 0.09535625;
                    }
                }
            }
        }
    }
    double var6;
    if (input[0] >= -0.065863) {
        if (input[1] >= 0.62839353) {
            if (input[0] >= 0.26652098) {
                var6 = 0.28988853;
            } else {
                if (input[0] >= 0.202304) {
                    if (input[2] >= 7.8610525) {
                        var6 = 0.0099337585;
                    } else {
                        var6 = -0.11314146;
                    }
                } else {
                    var6 = 0.25468218;
                }
            }
        } else {
            if (input[0] >= 0.270637) {
                var6 = 0.075065;
            } else {
                var6 = -0.11940586;
            }
        }
    } else {
        if (input[1] >= 1.992432) {
            if (input[1] >= 2.9715457) {
                var6 = 0.25358677;
            } else {
                if (input[2] >= 8.12907) {
                    if (input[3] >= -0.040884) {
                        if (input[0] >= -0.684901) {
                            var6 = -0.20177259;
                        } else {
                            var6 = 0.033958938;
                        }
                    } else {
                        var6 = 0.13378505;
                    }
                } else {
                    var6 = 0.23400088;
                }
            }
        } else {
            if (input[4] >= 0.0505115) {
                if (input[2] >= 10.317519) {
                    var6 = 0.104853645;
                } else {
                    if (input[2] >= 9.036408) {
                        if (input[0] >= -0.73489654) {
                            var6 = -0.15257901;
                        } else {
                            var6 = 0.027324764;
                        }
                    } else {
                        var6 = 0.06505802;
                    }
                }
            } else {
                if (input[3] >= -0.2308315) {
                    if (input[3] >= 0.022609498) {
                        if (input[2] >= 9.07892) {
                            if (input[2] >= 10.62019) {
                                var6 = 0.0709491;
                            } else {
                                if (input[3] >= 0.107700005) {
                                    var6 = -0.19552699;
                                } else {
                                    var6 = -0.050751988;
                                }
                            }
                        } else {
                            var6 = 0.11613008;
                        }
                    } else {
                        if (input[5] >= -0.087015495) {
                            if (input[5] >= 0.158506) {
                                var6 = -0.027777249;
                            } else {
                                if (input[3] >= -0.0815395) {
                                    var6 = -0.25042817;
                                } else {
                                    var6 = -0.072102696;
                                }
                            }
                        } else {
                            var6 = 0.0015514109;
                        }
                    }
                } else {
                    if (input[1] >= 1.7012875) {
                        var6 = -0.054642748;
                    } else {
                        var6 = 0.07737487;
                    }
                }
            }
        }
    }
    double var7;
    if (input[1] >= 2.2510939) {
        if (input[5] >= 0.2319335) {
            if (input[5] >= 0.341088) {
                var7 = 0.09917588;
            } else {
                var7 = -0.077029675;
            }
        } else {
            if (input[1] >= 2.509681) {
                var7 = 0.2813804;
            } else {
                if (input[1] >= 2.425107) {
                    var7 = -0.05023276;
                } else {
                    var7 = 0.19127561;
                }
            }
        }
    } else {
        if (input[0] >= 0.385823) {
            var7 = 0.2510088;
        } else {
            if (input[4] >= 0.0504875) {
                if (input[0] >= -0.2700385) {
                    var7 = 0.20353226;
                } else {
                    if (input[4] >= 0.22077951) {
                        if (input[2] >= 9.833052) {
                            var7 = -0.0010899797;
                        } else {
                            if (input[5] >= -0.186396) {
                                var7 = -0.024384882;
                            } else {
                                var7 = -0.18161967;
                            }
                        }
                    } else {
                        if (input[3] >= -0.0858215) {
                            if (input[1] >= 1.2893441) {
                                var7 = 0.15938802;
                            } else {
                                var7 = 0.01797481;
                            }
                        } else {
                            var7 = -0.04200488;
                        }
                    }
                }
            } else {
                if (input[5] >= -0.14850101) {
                    if (input[5] >= 0.060047) {
                        if (input[2] >= 10.494078) {
                            var7 = 0.12993126;
                        } else {
                            if (input[2] >= 9.3936405) {
                                if (input[0] >= -0.66491747) {
                                    var7 = -0.181908;
                                } else {
                                    var7 = -0.04687692;
                                }
                            } else {
                                if (input[3] >= 0.147111) {
                                    var7 = -0.040645614;
                                } else {
                                    var7 = 0.14197002;
                                }
                            }
                        }
                    } else {
                        if (input[3] >= 0.0498215) {
                            if (input[1] >= 1.8694625) {
                                var7 = -0.10359799;
                            } else {
                                var7 = 0.15084216;
                            }
                        } else {
                            if (input[3] >= -0.0463365) {
                                if (input[4] >= -0.0422005) {
                                    var7 = -0.27234486;
                                } else {
                                    var7 = -0.078256994;
                                }
                            } else {
                                if (input[5] >= -0.0463905) {
                                    var7 = 0.041822873;
                                } else {
                                    var7 = -0.12656702;
                                }
                            }
                        }
                    }
                } else {
                    if (input[1] >= 1.3472735) {
                        var7 = 0.18497828;
                    } else {
                        if (input[3] >= 0.17067051) {
                            var7 = -0.11868628;
                        } else {
                            var7 = 0.045923367;
                        }
                    }
                }
            }
        }
    }
    double var8;
    if (input[0] >= 0.2699635) {
        if (input[2] >= 12.081751) {
            var8 = 0.056010712;
        } else {
            var8 = 0.25725874;
        }
    } else {
        if (input[1] >= 2.6216478) {
            if (input[4] >= 0.24518) {
                var8 = -0.0041871346;
            } else {
                var8 = 0.24996485;
            }
        } else {
            if (input[2] >= 9.019718) {
                if (input[2] >= 10.619741) {
                    if (input[0] >= -1.1890526) {
                        if (input[4] >= 0.019140001) {
                            var8 = 0.24365032;
                        } else {
                            if (input[4] >= -0.0559845) {
                                var8 = -0.076378345;
                            } else {
                                var8 = 0.16861543;
                            }
                        }
                    } else {
                        var8 = -0.13449912;
                    }
                } else {
                    if (input[0] >= -0.912727) {
                        if (input[4] >= 0.0421765) {
                            if (input[2] >= 9.64856) {
                                if (input[3] >= 0.0245305) {
                                    var8 = -0.1282257;
                                } else {
                                    var8 = 0.022461338;
                                }
                            } else {
                                var8 = 0.042932104;
                            }
                        } else {
                            if (input[5] >= -0.004352) {
                                var8 = -0.22024578;
                            } else {
                                if (input[5] >= -0.128937) {
                                    var8 = 0.04131262;
                                } else {
                                    var8 = -0.16302027;
                                }
                            }
                        }
                    } else {
                        if (input[1] >= 1.1437714) {
                            var8 = 0.14887844;
                        } else {
                            var8 = -0.07818319;
                        }
                    }
                }
            } else {
                if (input[3] >= 0.014291) {
                    if (input[1] >= 1.3667331) {
                        var8 = 0.28236765;
                    } else {
                        var8 = -0.00036009893;
                    }
                } else {
                    if (input[3] >= -0.1277775) {
                        if (input[5] >= 0.030977) {
                            var8 = 0.020695956;
                        } else {
                            if (input[3] >= -0.029096) {
                                var8 = -0.19753957;
                            } else {
                                var8 = -0.025320103;
                            }
                        }
                    } else {
                        var8 = 0.12234862;
                    }
                }
            }
        }
    }
    double var9;
    if (input[0] >= 0.385823) {
        var9 = 0.24034087;
    } else {
        if (input[1] >= 2.9715457) {
            var9 = 0.22844763;
        } else {
            if (input[2] >= 9.019718) {
                if (input[5] >= -0.022142) {
                    if (input[2] >= 10.494078) {
                        if (input[1] >= 1.2274475) {
                            var9 = 0.15391159;
                        } else {
                            if (input[3] >= 0.010453001) {
                                var9 = 0.047130533;
                            } else {
                                if (input[3] >= -0.0194935) {
                                    var9 = -0.21896984;
                                } else {
                                    var9 = -0.029361518;
                                }
                            }
                        }
                    } else {
                        if (input[0] >= -0.781001) {
                            if (input[3] >= -0.025259) {
                                var9 = -0.21240935;
                            } else {
                                if (input[3] >= -0.297864) {
                                    var9 = 0.028036501;
                                } else {
                                    var9 = -0.17555818;
                                }
                            }
                        } else {
                            if (input[1] >= 1.3736935) {
                                var9 = 0.09022935;
                            } else {
                                var9 = -0.06431298;
                            }
                        }
                    }
                } else {
                    if (input[4] >= 0.01496) {
                        if (input[2] >= 9.828636) {
                            var9 = 0.24987078;
                        } else {
                            var9 = 0.0010566555;
                        }
                    } else {
                        if (input[1] >= 1.5935115) {
                            var9 = 0.10258259;
                        } else {
                            if (input[2] >= 10.627824) {
                                var9 = 0.010351909;
                            } else {
                                var9 = -0.13512084;
                            }
                        }
                    }
                }
            } else {
                if (input[3] >= 0.014291) {
                    if (input[1] >= 1.3644125) {
                        var9 = 0.26365167;
                    } else {
                        var9 = 0.004578152;
                    }
                } else {
                    if (input[3] >= -0.04065) {
                        if (input[0] >= -0.468301) {
                            var9 = -0.02980068;
                        } else {
                            var9 = -0.15601641;
                        }
                    } else {
                        if (input[0] >= -0.74881804) {
                            if (input[0] >= -0.189955) {
                                var9 = -0.007565664;
                            } else {
                                var9 = 0.24906363;
                            }
                        } else {
                            var9 = -0.052246448;
                        }
                    }
                }
            }
        }
    }
    double var10;
    if (input[0] >= -0.065863) {
        if (input[1] >= 0.62839353) {
            if (input[5] >= 0.0117205) {
                if (input[5] >= 0.0354945) {
                    var10 = 0.19170746;
                } else {
                    var10 = -0.12820233;
                }
            } else {
                var10 = 0.24537122;
            }
        } else {
            var10 = -0.029454593;
        }
    } else {
        if (input[1] >= 1.9770141) {
            if (input[0] >= -0.18015051) {
                var10 = -0.044455882;
            } else {
                if (input[5] >= 0.27117652) {
                    var10 = -0.0041035814;
                } else {
                    if (input[0] >= -0.68422747) {
                        var10 = 0.20513344;
                    } else {
                        var10 = 0.04705594;
                    }
                }
            }
        } else {
            if (input[0] >= -1.7548759) {
                if (input[2] >= 10.211689) {
                    if (input[4] >= -0.19855249) {
                        if (input[1] >= 0.7256905) {
                            var10 = 0.17524335;
                        } else {
                            var10 = 0.019416863;
                        }
                    } else {
                        var10 = -0.05940687;
                    }
                } else {
                    if (input[0] >= -0.81587803) {
                        if (input[2] >= 9.206755) {
                            if (input[2] >= 9.857302) {
                                var10 = -0.031669486;
                            } else {
                                var10 = -0.14256383;
                            }
                        } else {
                            if (input[0] >= -0.2706375) {
                                var10 = -0.13275714;
                            } else {
                                if (input[0] >= -0.688194) {
                                    var10 = 0.18529165;
                                } else {
                                    var10 = -0.102314055;
                                }
                            }
                        }
                    } else {
                        if (input[2] >= 9.247694) {
                            var10 = 0.107978836;
                        } else {
                            var10 = -0.059660114;
                        }
                    }
                }
            } else {
                var10 = -0.15585266;
            }
        }
    }
    double var11;
    if (input[0] >= 0.385823) {
        var11 = 0.2125974;
    } else {
        if (input[1] >= 2.9715457) {
            var11 = 0.20243582;
        } else {
            if (input[5] >= -0.1483165) {
                if (input[2] >= 9.019494) {
                    if (input[2] >= 10.491832) {
                        if (input[5] >= 0.1015915) {
                            var11 = 0.13662055;
                        } else {
                            if (input[5] >= -0.0293075) {
                                if (input[1] >= 0.93794954) {
                                    var11 = -0.0059565455;
                                } else {
                                    var11 = -0.14744228;
                                }
                            } else {
                                var11 = 0.050019547;
                            }
                        }
                    } else {
                        if (input[0] >= -0.781001) {
                            if (input[1] >= 1.7655035) {
                                if (input[0] >= -0.416135) {
                                    var11 = -0.06685928;
                                } else {
                                    var11 = -0.21456589;
                                }
                            } else {
                                if (input[1] >= 1.134042) {
                                    var11 = 0.06467979;
                                } else {
                                    var11 = -0.15416506;
                                }
                            }
                        } else {
                            if (input[1] >= 1.4450951) {
                                var11 = 0.108094245;
                            } else {
                                var11 = -0.0671819;
                            }
                        }
                    }
                } else {
                    if (input[3] >= 0.014291) {
                        var11 = 0.19575757;
                    } else {
                        if (input[3] >= -0.096736506) {
                            if (input[5] >= 0.0189) {
                                var11 = 0.004988151;
                            } else {
                                var11 = -0.15786023;
                            }
                        } else {
                            var11 = 0.08509985;
                        }
                    }
                }
            } else {
                if (input[3] >= 0.29064) {
                    var11 = -0.073448695;
                } else {
                    if (input[3] >= -0.120509) {
                        var11 = 0.2277569;
                    } else {
                        if (input[3] >= -0.218555) {
                            var11 = -0.053775806;
                        } else {
                            var11 = 0.063033655;
                        }
                    }
                }
            }
        }
    }
    double var12;
    if (input[0] >= 0.385823) {
        var12 = 0.19701137;
    } else {
        if (input[1] >= 2.9715457) {
            var12 = 0.18670066;
        } else {
            if (input[2] >= 7.7014847) {
                if (input[2] >= 10.619741) {
                    if (input[0] >= -1.1890526) {
                        if (input[3] >= -0.0264665) {
                            if (input[3] >= 0.0226655) {
                                var12 = 0.15297349;
                            } else {
                                var12 = -0.12792803;
                            }
                        } else {
                            var12 = 0.21524183;
                        }
                    } else {
                        if (input[0] >= -1.7911755) {
                            var12 = -0.028999066;
                        } else {
                            var12 = -0.1204945;
                        }
                    }
                } else {
                    if (input[0] >= -1.0775344) {
                        if (input[5] >= 0.1869705) {
                            if (input[1] >= 2.3978639) {
                                var12 = -0.19643635;
                            } else {
                                if (input[2] >= 9.7496) {
                                    var12 = -0.14515139;
                                } else {
                                    if (input[3] >= 0.059534997) {
                                        var12 = -0.032890927;
                                    } else {
                                        var12 = 0.08274266;
                                    }
                                }
                            }
                        } else {
                            if (input[5] >= 0.060076) {
                                var12 = 0.10004074;
                            } else {
                                if (input[4] >= -0.200473) {
                                    if (input[4] >= 0.042177) {
                                        var12 = -0.01752911;
                                    } else {
                                        var12 = -0.11388738;
                                    }
                                } else {
                                    var12 = 0.02760691;
                                }
                            }
                        }
                    } else {
                        var12 = 0.08795248;
                    }
                }
            } else {
                if (input[1] >= 1.8276246) {
                    var12 = 0.19997974;
                } else {
                    if (input[1] >= 1.629736) {
                        var12 = -0.06659651;
                    } else {
                        var12 = 0.059838448;
                    }
                }
            }
        }
    }
    double var13;
    if (input[0] >= 0.385823) {
        var13 = 0.1821914;
    } else {
        if (input[1] >= 2.9715457) {
            var13 = 0.1720937;
        } else {
            if (input[5] >= -0.1483165) {
                if (input[4] >= 0.093969) {
                    if (input[0] >= -0.542472) {
                        var13 = 0.1339314;
                    } else {
                        if (input[2] >= 9.531504) {
                            var13 = 0.043359883;
                        } else {
                            var13 = -0.08532275;
                        }
                    }
                } else {
                    if (input[3] >= 0.010013) {
                        if (input[1] >= 1.25282) {
                            if (input[2] >= 9.014105) {
                                if (input[4] >= -0.032335) {
                                    var13 = -0.0004266812;
                                } else {
                                    if (input[3] >= 0.235288) {
                                        var13 = -0.16022782;
                                    } else {
                                        var13 = -0.04232943;
                                    }
                                }
                            } else {
                                var13 = 0.06880069;
                            }
                        } else {
                            var13 = 0.10851054;
                        }
                    } else {
                        if (input[3] >= -0.04065) {
                            if (input[5] >= 0.0359895) {
                                var13 = -0.038337607;
                            } else {
                                var13 = -0.17890204;
                            }
                        } else {
                            if (input[5] >= 0.15826151) {
                                if (input[0] >= -0.5154535) {
                                    var13 = -0.14105222;
                                } else {
                                    var13 = 0.04512254;
                                }
                            } else {
                                if (input[5] >= -0.0342395) {
                                    var13 = 0.13424045;
                                } else {
                                    var13 = -0.04895453;
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[4] >= 0.2254445) {
                    var13 = -0.07562058;
                } else {
                    if (input[1] >= 0.753683) {
                        if (input[3] >= -0.120509) {
                            var13 = 0.21673019;
                        } else {
                            var13 = 0.04512328;
                        }
                    } else {
                        var13 = -0.023466764;
                    }
                }
            }
        }
    }
    double var14;
    if (input[1] >= 1.9770141) {
        if (input[2] >= 9.774748) {
            var14 = 0.18180726;
        } else {
            if (input[2] >= 9.366098) {
                var14 = -0.09210563;
            } else {
                if (input[3] >= -0.2268475) {
                    if (input[1] >= 2.2513928) {
                        var14 = 0.19842748;
                    } else {
                        var14 = 0.029026823;
                    }
                } else {
                    var14 = -0.027914144;
                }
            }
        }
    } else {
        if (input[0] >= -0.1338215) {
            if (input[2] >= 10.280546) {
                if (input[2] >= 11.3244) {
                    var14 = 0.047706697;
                } else {
                    var14 = -0.07846583;
                }
            } else {
                var14 = 0.19684534;
            }
        } else {
            if (input[0] >= -0.2738555) {
                if (input[3] >= 0.1422) {
                    var14 = -0.19726697;
                } else {
                    var14 = -0.015408988;
                }
            } else {
                if (input[0] >= -0.447195) {
                    var14 = 0.13322957;
                } else {
                    if (input[3] >= -0.0045555) {
                        if (input[1] >= 1.3736935) {
                            if (input[1] >= 1.794693) {
                                var14 = -0.033372916;
                            } else {
                                var14 = 0.15548395;
                            }
                        } else {
                            if (input[4] >= 0.008313) {
                                var14 = 0.030556135;
                            } else {
                                if (input[0] >= -0.738639) {
                                    var14 = -0.01207096;
                                } else {
                                    var14 = -0.10299111;
                                }
                            }
                        }
                    } else {
                        if (input[1] >= 1.43065) {
                            if (input[1] >= 1.673969) {
                                var14 = -0.039271448;
                            } else {
                                var14 = -0.16142409;
                            }
                        } else {
                            if (input[3] >= -0.058870003) {
                                var14 = -0.10474659;
                            } else {
                                var14 = 0.102321304;
                            }
                        }
                    }
                }
            }
        }
    }
    double var15;
    if (input[0] >= 0.385823) {
        var15 = 0.15964922;
    } else {
        if (input[1] >= 1.9770141) {
            if (input[2] >= 10.23534) {
                var15 = 0.1667334;
            } else {
                if (input[2] >= 7.8591814) {
                    if (input[0] >= -0.684826) {
                        if (input[5] >= 0.2315585) {
                            var15 = -0.14577596;
                        } else {
                            if (input[0] >= -0.08861551) {
                                var15 = -0.03604266;
                            } else {
                                var15 = 0.060857877;
                            }
                        }
                    } else {
                        var15 = 0.07719754;
                    }
                } else {
                    var15 = 0.13476223;
                }
            }
        } else {
            if (input[4] >= -0.40549302) {
                if (input[0] >= -1.7548759) {
                    if (input[4] >= -0.20211351) {
                        if (input[1] >= 0.46298748) {
                            if (input[1] >= 0.7206015) {
                                if (input[2] >= 10.356888) {
                                    var15 = 0.14435689;
                                } else {
                                    if (input[1] >= 1.0318794) {
                                        var15 = -0.045591287;
                                    } else {
                                        var15 = 0.1171865;
                                    }
                                }
                            } else {
                                var15 = -0.16384116;
                            }
                        } else {
                            var15 = 0.12296796;
                        }
                    } else {
                        var15 = 0.17729318;
                    }
                } else {
                    var15 = -0.1303974;
                }
            } else {
                var15 = -0.11950529;
            }
        }
    }
    double var16;
    if (input[2] >= 9.021066) {
        if (input[5] >= -0.0345315) {
            if (input[5] >= 0.0646525) {
                if (input[3] >= 0.1422555) {
                    if (input[3] >= 0.294678) {
                        var16 = 0.01028551;
                    } else {
                        var16 = -0.120432645;
                    }
                } else {
                    if (input[4] >= -0.2669355) {
                        if (input[1] >= 1.1347905) {
                            var16 = 0.17901276;
                        } else {
                            var16 = 0.010137321;
                        }
                    } else {
                        var16 = -0.064482376;
                    }
                }
            } else {
                if (input[3] >= 0.0591395) {
                    var16 = 0.011947686;
                } else {
                    if (input[1] >= 1.225127) {
                        if (input[2] >= 9.472977) {
                            var16 = 0.07829654;
                        } else {
                            var16 = -0.10509989;
                        }
                    } else {
                        var16 = -0.15033436;
                    }
                }
            }
        } else {
            if (input[4] >= -0.0687135) {
                if (input[2] >= 9.774448) {
                    var16 = 0.2209103;
                } else {
                    var16 = 0.024098199;
                }
            } else {
                if (input[4] >= -0.1366795) {
                    var16 = -0.096812986;
                } else {
                    var16 = 0.032053515;
                }
            }
        }
    } else {
        if (input[2] >= 8.557705) {
            var16 = 0.20637481;
        } else {
            if (input[4] >= -0.0340215) {
                if (input[4] >= 0.07027) {
                    var16 = 0.06885733;
                } else {
                    if (input[0] >= -0.1912275) {
                        var16 = -0.13762337;
                    } else {
                        var16 = -0.004599833;
                    }
                }
            } else {
                if (input[5] >= 0.1114415) {
                    var16 = 0.013507373;
                } else {
                    var16 = 0.15821014;
                }
            }
        }
    }
    double var17;
    if (input[0] >= -0.1338215) {
        if (input[4] >= 0.07027) {
            var17 = 0.17786779;
        } else {
            if (input[4] >= -0.030057) {
                if (input[0] >= 0.21151) {
                    var17 = -0.10628743;
                } else {
                    var17 = 0.008525849;
                }
            } else {
                if (input[3] >= -0.0996485) {
                    var17 = 0.14287956;
                } else {
                    var17 = 0.029210795;
                }
            }
        }
    } else {
        if (input[1] >= 1.9770141) {
            if (input[2] >= 9.021066) {
                if (input[2] >= 9.399255) {
                    var17 = 0.09095355;
                } else {
                    var17 = -0.094521485;
                }
            } else {
                var17 = 0.13430735;
            }
        } else {
            if (input[1] >= 1.8269506) {
                if (input[0] >= -0.6629715) {
                    var17 = -0.13217312;
                } else {
                    var17 = -0.008731948;
                }
            } else {
                if (input[1] >= 1.5998731) {
                    if (input[3] >= -0.096583) {
                        var17 = 0.1332124;
                    } else {
                        var17 = -0.022399439;
                    }
                } else {
                    if (input[3] >= -0.21984899) {
                        if (input[1] >= 0.462239) {
                            if (input[2] >= 10.627824) {
                                var17 = 0.022778004;
                            } else {
                                if (input[1] >= 0.66177404) {
                                    if (input[1] >= 1.062191) {
                                        var17 = -0.084355414;
                                    } else {
                                        var17 = 0.067564264;
                                    }
                                } else {
                                    var17 = -0.15284353;
                                }
                            }
                        } else {
                            var17 = 0.056095514;
                        }
                    } else {
                        var17 = 0.092101194;
                    }
                }
            }
        }
    }
    double var18;
    if (input[0] >= -1.7633336) {
        if (input[2] >= 12.32275) {
            var18 = 0.1532801;
        } else {
            if (input[0] >= -0.81550395) {
                if (input[2] >= 9.346714) {
                    if (input[2] >= 9.960512) {
                        if (input[4] >= 0.0192445) {
                            var18 = 0.12881893;
                        } else {
                            if (input[4] >= -0.1124515) {
                                var18 = -0.093196735;
                            } else {
                                var18 = 0.073781446;
                            }
                        }
                    } else {
                        if (input[3] >= 0.0322005) {
                            var18 = -0.13541126;
                        } else {
                            if (input[3] >= -0.0808745) {
                                var18 = 0.0485787;
                            } else {
                                if (input[2] >= 9.7496) {
                                    var18 = -0.10124582;
                                } else {
                                    var18 = -0.017543849;
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] >= -0.74365354) {
                        if (input[5] >= 0.14650649) {
                            if (input[3] >= -0.035434) {
                                var18 = 0.05326705;
                            } else {
                                var18 = -0.071904436;
                            }
                        } else {
                            if (input[4] >= -0.0300655) {
                                if (input[4] >= 0.044228) {
                                    var18 = 0.12800373;
                                } else {
                                    var18 = -0.013500534;
                                }
                            } else {
                                var18 = 0.19960809;
                            }
                        }
                    } else {
                        var18 = -0.0946681;
                    }
                }
            } else {
                if (input[1] >= 1.6726971) {
                    var18 = 0.2004105;
                } else {
                    if (input[3] >= 0.016114) {
                        var18 = 0.08114276;
                    } else {
                        if (input[5] >= -0.020039) {
                            var18 = 0.021099318;
                        } else {
                            var18 = -0.09535013;
                        }
                    }
                }
            }
        }
    } else {
        var18 = -0.11185314;
    }
    double var19;
    if (input[5] >= -0.14825949) {
        if (input[5] >= -0.116819) {
            if (input[5] >= -0.055120997) {
                if (input[5] >= 0.064587) {
                    if (input[3] >= 0.1422555) {
                        if (input[3] >= 0.294527) {
                            var19 = 0.04170098;
                        } else {
                            if (input[5] >= 0.308904) {
                                var19 = -0.12213736;
                            } else {
                                var19 = -0.02606394;
                            }
                        }
                    } else {
                        if (input[3] >= -0.075501) {
                            var19 = 0.16702025;
                        } else {
                            if (input[4] >= -0.1619165) {
                                if (input[2] >= 9.774898) {
                                    var19 = -0.028928466;
                                } else {
                                    var19 = 0.11149845;
                                }
                            } else {
                                var19 = -0.059781216;
                            }
                        }
                    }
                } else {
                    if (input[3] >= 0.049687497) {
                        var19 = 0.059806146;
                    } else {
                        if (input[3] >= -0.0588905) {
                            if (input[4] >= 0.008411) {
                                var19 = 0.007301708;
                            } else {
                                var19 = -0.14190717;
                            }
                        } else {
                            var19 = 0.029363545;
                        }
                    }
                }
            } else {
                var19 = 0.10427439;
            }
        } else {
            var19 = -0.097575195;
        }
    } else {
        if (input[4] >= 0.2254445) {
            var19 = -0.06851955;
        } else {
            if (input[4] >= -0.077497) {
                var19 = 0.18994722;
            } else {
                var19 = 0.029343897;
            }
        }
    }
    double var20;
    if (input[0] >= -1.7633336) {
        if (input[2] >= 10.619368) {
            if (input[5] >= 0.049363002) {
                var20 = 0.15977833;
            } else {
                if (input[5] >= -0.029254) {
                    var20 = -0.07016703;
                } else {
                    var20 = 0.14450417;
                }
            }
        } else {
            if (input[2] >= 9.649159) {
                if (input[4] >= -0.037355) {
                    if (input[0] >= -0.63191104) {
                        if (input[1] >= 1.203647) {
                            var20 = 0.030785153;
                        } else {
                            var20 = -0.095329575;
                        }
                    } else {
                        var20 = 0.09313711;
                    }
                } else {
                    if (input[4] >= -0.115745) {
                        var20 = -0.12764734;
                    } else {
                        if (input[4] >= -0.34490752) {
                            var20 = 0.030692248;
                        } else {
                            var20 = -0.093284845;
                        }
                    }
                }
            } else {
                if (input[1] >= 1.2951815) {
                    if (input[4] >= 0.2209265) {
                        var20 = -0.07684116;
                    } else {
                        if (input[5] >= -0.15743801) {
                            if (input[3] >= -0.003369) {
                                if (input[2] >= 8.916657) {
                                    var20 = 0.003622821;
                                } else {
                                    var20 = 0.08224812;
                                }
                            } else {
                                if (input[2] >= 8.557779) {
                                    var20 = 0.047752;
                                } else {
                                    if (input[3] >= -0.096736506) {
                                        var20 = -0.13992298;
                                    } else {
                                        var20 = 0.005091408;
                                    }
                                }
                            }
                        } else {
                            var20 = 0.13879962;
                        }
                    }
                } else {
                    if (input[4] >= 0.0272975) {
                        var20 = 0.046298895;
                    } else {
                        var20 = 0.17285836;
                    }
                }
            }
        }
    } else {
        var20 = -0.09580868;
    }
    double var21;
    if (input[2] >= 7.7014847) {
        if (input[2] >= 8.01658) {
            if (input[0] >= 0.032332502) {
                if (input[1] >= 0.983979) {
                    var21 = 0.118801266;
                } else {
                    var21 = 0.015113769;
                }
            } else {
                if (input[4] >= -0.40611202) {
                    if (input[2] >= 10.3126545) {
                        if (input[1] >= 1.154624) {
                            var21 = 0.1914996;
                        } else {
                            if (input[0] >= -0.902324) {
                                var21 = 0.07463944;
                            } else {
                                var21 = -0.088744044;
                            }
                        }
                    } else {
                        if (input[0] >= -0.8274795) {
                            if (input[2] >= 9.343794) {
                                if (input[1] >= 1.010623) {
                                    if (input[5] >= 0.0288665) {
                                        var21 = -0.12889363;
                                    } else {
                                        var21 = -0.006128646;
                                    }
                                } else {
                                    var21 = 0.03747024;
                                }
                            } else {
                                if (input[3] >= -0.028199501) {
                                    var21 = 0.08663353;
                                } else {
                                    var21 = -0.040563323;
                                }
                            }
                        } else {
                            if (input[2] >= 9.179136) {
                                var21 = 0.14158021;
                            } else {
                                var21 = -0.034320105;
                            }
                        }
                    }
                } else {
                    var21 = -0.09321745;
                }
            }
        } else {
            var21 = -0.08686226;
        }
    } else {
        if (input[0] >= -0.14025849) {
            var21 = 0.00018774123;
        } else {
            var21 = 0.1514503;
        }
    }
    double var22;
    if (input[0] >= 0.2699635) {
        var22 = 0.104900114;
    } else {
        if (input[0] >= 0.202304) {
            var22 = -0.08262505;
        } else {
            if (input[0] >= -0.065863) {
                var22 = 0.12658387;
            } else {
                if (input[0] >= -0.143776) {
                    var22 = -0.09017765;
                } else {
                    if (input[2] >= 7.732994) {
                        if (input[3] >= 0.332439) {
                            if (input[3] >= 0.41763902) {
                                var22 = 0.003311218;
                            } else {
                                var22 = -0.11732955;
                            }
                        } else {
                            if (input[0] >= -0.3920345) {
                                var22 = 0.10993989;
                            } else {
                                if (input[3] >= 0.0008485) {
                                    if (input[4] >= 0.008520501) {
                                        var22 = 0.10452106;
                                    } else {
                                        var22 = -0.013430484;
                                    }
                                } else {
                                    if (input[5] >= 0.272007) {
                                        var22 = 0.06272532;
                                    } else {
                                        var22 = -0.06555467;
                                    }
                                }
                            }
                        }
                    } else {
                        var22 = 0.13468125;
                    }
                }
            }
        }
    }
    double var23;
    if (input[4] >= 0.4537655) {
        var23 = -0.07065696;
    } else {
        if (input[4] >= 0.2599515) {
            var23 = 0.113318;
        } else {
            if (input[4] >= 0.221315) {
                var23 = -0.08686418;
            } else {
                if (input[5] >= -0.14825949) {
                    if (input[5] >= 0.0576315) {
                        if (input[5] >= 0.343171) {
                            if (input[4] >= 0.047606498) {
                                var23 = -0.10950732;
                            } else {
                                var23 = 0.06080127;
                            }
                        } else {
                            if (input[4] >= -0.0629475) {
                                var23 = 0.15231895;
                            } else {
                                if (input[1] >= 1.7801731) {
                                    var23 = -0.038585987;
                                } else {
                                    var23 = 0.06272377;
                                }
                            }
                        }
                    } else {
                        if (input[3] >= 0.049687497) {
                            if (input[1] >= 1.7660275) {
                                var23 = -0.010149637;
                            } else {
                                var23 = 0.112311885;
                            }
                        } else {
                            if (input[3] >= -0.0463365) {
                                if (input[4] >= 0.014613001) {
                                    var23 = -0.032959584;
                                } else {
                                    var23 = -0.11493347;
                                }
                            } else {
                                if (input[0] >= -0.726065) {
                                    var23 = 0.07565626;
                                } else {
                                    var23 = -0.044947267;
                                }
                            }
                        }
                    }
                } else {
                    if (input[3] >= -0.120509) {
                        var23 = 0.13181777;
                    } else {
                        var23 = 0.004869991;
                    }
                }
            }
        }
    }
    double var24;
    if (input[1] >= 1.9770141) {
        if (input[3] >= -0.04065) {
            if (input[3] >= 0.0495895) {
                var24 = 0.058256492;
            } else {
                var24 = -0.05678125;
            }
        } else {
            var24 = 0.11499774;
        }
    } else {
        if (input[0] >= -0.1338215) {
            if (input[2] >= 10.280546) {
                var24 = -0.03627344;
            } else {
                var24 = 0.14712971;
            }
        } else {
            if (input[0] >= -0.2738555) {
                if (input[3] >= 0.1422) {
                    var24 = -0.13834104;
                } else {
                    var24 = -0.012201488;
                }
            } else {
                if (input[0] >= -0.437016) {
                    var24 = 0.09975172;
                } else {
                    if (input[1] >= 1.43065) {
                        if (input[0] >= -0.8176745) {
                            if (input[0] >= -0.60174847) {
                                var24 = 0.02187902;
                            } else {
                                if (input[3] >= -0.032192) {
                                    var24 = -0.024654942;
                                } else {
                                    var24 = -0.15563513;
                                }
                            }
                        } else {
                            var24 = 0.06943073;
                        }
                    } else {
                        if (input[1] >= 0.7182065) {
                            if (input[0] >= -0.56582296) {
                                var24 = -0.058777366;
                            } else {
                                if (input[2] >= 10.037527) {
                                    var24 = 0.007843942;
                                } else {
                                    var24 = 0.153499;
                                }
                            }
                        } else {
                            if (input[1] >= 0.499511) {
                                var24 = -0.09667751;
                            } else {
                                var24 = 0.0040875305;
                            }
                        }
                    }
                }
            }
        }
    }
    double var25;
    if (input[2] >= 9.021066) {
        if (input[5] >= -0.0345315) {
            if (input[2] >= 9.372759) {
                if (input[1] >= 1.154624) {
                    if (input[3] >= 0.047076) {
                        if (input[0] >= -0.5268295) {
                            var25 = -0.011331872;
                        } else {
                            var25 = -0.081865996;
                        }
                    } else {
                        if (input[4] >= -0.049813002) {
                            var25 = 0.1930187;
                        } else {
                            var25 = 0.040618714;
                        }
                    }
                } else {
                    if (input[3] >= 0.035035998) {
                        var25 = 0.055883635;
                    } else {
                        if (input[3] >= -0.0767515) {
                            var25 = -0.11988639;
                        } else {
                            var25 = -0.0060534147;
                        }
                    }
                }
            } else {
                var25 = -0.09577731;
            }
        } else {
            if (input[4] >= -0.0687135) {
                if (input[5] >= -0.26931548) {
                    var25 = 0.14102416;
                } else {
                    var25 = 0.012511349;
                }
            } else {
                if (input[4] >= -0.20036799) {
                    var25 = -0.076983735;
                } else {
                    var25 = 0.03529915;
                }
            }
        }
    } else {
        if (input[4] >= 0.000444) {
            if (input[4] >= 0.07027) {
                var25 = 0.084559694;
            } else {
                var25 = -0.08603693;
            }
        } else {
            if (input[4] >= -0.074537) {
                var25 = 0.031982157;
            } else {
                var25 = 0.11812549;
            }
        }
    }
    double var26;
    if (input[1] >= 2.073114) {
        if (input[5] >= 0.2319335) {
            var26 = -0.024384955;
        } else {
            if (input[0] >= -0.0755925) {
                var26 = 0.026582045;
            } else {
                var26 = 0.1163103;
            }
        }
    } else {
        if (input[4] >= -0.4069725) {
            if (input[4] >= -0.211312) {
                if (input[1] >= 0.40618002) {
                    if (input[1] >= 0.6613995) {
                        if (input[1] >= 1.0643615) {
                            if (input[2] >= 9.964254) {
                                var26 = 0.06737708;
                            } else {
                                if (input[0] >= -0.82755446) {
                                    if (input[3] >= 0.108669) {
                                        var26 = -0.11132466;
                                    } else {
                                        var26 = -0.01918887;
                                    }
                                } else {
                                    var26 = 0.047751572;
                                }
                            }
                        } else {
                            var26 = 0.08466318;
                        }
                    } else {
                        var26 = -0.11656035;
                    }
                } else {
                    var26 = 0.094624035;
                }
            } else {
                var26 = 0.101984195;
            }
        } else {
            var26 = -0.07848347;
        }
    }
    double var27;
    if (input[4] >= 0.4537655) {
        var27 = -0.06485441;
    } else {
        if (input[4] >= 0.2599515) {
            var27 = 0.09776854;
        } else {
            if (input[4] >= 0.221315) {
                var27 = -0.074283265;
            } else {
                if (input[3] >= 0.0015515) {
                    if (input[4] >= 0.0092885) {
                        if (input[3] >= 0.222656) {
                            var27 = 0.018062089;
                        } else {
                            var27 = 0.13381433;
                        }
                    } else {
                        if (input[2] >= 9.205782) {
                            if (input[2] >= 10.619368) {
                                var27 = 0.03826904;
                            } else {
                                if (input[2] >= 9.703945) {
                                    var27 = -0.06737197;
                                } else {
                                    var27 = -0.00037536336;
                                }
                            }
                        } else {
                            var27 = 0.0930857;
                        }
                    }
                } else {
                    if (input[3] >= -0.04065) {
                        if (input[1] >= 1.6243474) {
                            var27 = -0.0072940732;
                        } else {
                            var27 = -0.098964736;
                        }
                    } else {
                        if (input[4] >= 0.008616) {
                            if (input[4] >= 0.070279) {
                                var27 = 0.033255786;
                            } else {
                                var27 = -0.07200653;
                            }
                        } else {
                            if (input[4] >= -0.1578455) {
                                var27 = 0.14298381;
                            } else {
                                if (input[4] >= -0.2958445) {
                                    var27 = -0.06493804;
                                } else {
                                    var27 = 0.04626682;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    double var28;
    if (input[2] >= 7.7014847) {
        if (input[4] >= 0.4536475) {
            var28 = -0.06441181;
        } else {
            if (input[2] >= 9.856777) {
                if (input[4] >= 0.065858) {
                    var28 = 0.13116772;
                } else {
                    if (input[0] >= -0.902324) {
                        if (input[5] >= -0.029254) {
                            if (input[5] >= 0.009047) {
                                var28 = 0.033404645;
                            } else {
                                var28 = -0.07227879;
                            }
                        } else {
                            var28 = 0.10353198;
                        }
                    } else {
                        var28 = -0.050617214;
                    }
                }
            } else {
                if (input[2] >= 9.649159) {
                    if (input[0] >= -0.6311625) {
                        if (input[1] >= 1.2626995) {
                            var28 = -0.02658689;
                        } else {
                            var28 = -0.12732612;
                        }
                    } else {
                        var28 = 0.003611383;
                    }
                } else {
                    if (input[4] >= -0.079881504) {
                        if (input[2] >= 9.373882) {
                            var28 = 0.08444475;
                        } else {
                            if (input[5] >= 0.0300265) {
                                var28 = 0.017431699;
                            } else {
                                if (input[5] >= -0.1314255) {
                                    var28 = -0.09713305;
                                } else {
                                    var28 = -0.014711188;
                                }
                            }
                        }
                    } else {
                        var28 = 0.095429264;
                    }
                }
            }
        }
    } else {
        var28 = 0.063218586;
    }
    double var29;
    if (input[1] >= 2.6216478) {
        var29 = 0.06826432;
    } else {
        if (input[3] >= 0.0015515) {
            if (input[3] >= 0.108688995) {
                if (input[1] >= 1.091231) {
                    if (input[1] >= 1.372571) {
                        if (input[2] >= 9.67326) {
                            var29 = -0.048316382;
                        } else {
                            var29 = 0.088876486;
                        }
                    } else {
                        var29 = -0.10232609;
                    }
                } else {
                    var29 = 0.053280015;
                }
            } else {
                if (input[5] >= 0.0087675) {
                    var29 = 0.005919752;
                } else {
                    var29 = 0.1257763;
                }
            }
        } else {
            if (input[3] >= -0.04065) {
                if (input[1] >= 1.602118) {
                    var29 = -0.004093112;
                } else {
                    if (input[2] >= 10.18497) {
                        var29 = -0.097654395;
                    } else {
                        var29 = -0.023394672;
                    }
                }
            } else {
                if (input[1] >= 1.4309494) {
                    if (input[0] >= -0.56163204) {
                        var29 = 0.0530771;
                    } else {
                        if (input[5] >= -0.0197665) {
                            var29 = 0.01129839;
                        } else {
                            var29 = -0.12325704;
                        }
                    }
                } else {
                    if (input[0] >= -0.544044) {
                        var29 = -0.021691512;
                    } else {
                        var29 = 0.12081073;
                    }
                }
            }
        }
    }
    double var30;
    if (input[0] >= -1.651067) {
        if (input[2] >= 10.619368) {
            if (input[3] >= 0.010027001) {
                var30 = 0.10910521;
            } else {
                var30 = 0.022100382;
            }
        } else {
            if (input[2] >= 9.355395) {
                if (input[0] >= -0.82755446) {
                    if (input[1] >= 1.7659526) {
                        if (input[0] >= -0.5604345) {
                            var30 = 0.015810806;
                        } else {
                            var30 = -0.1435031;
                        }
                    } else {
                        if (input[0] >= -0.56574845) {
                            if (input[1] >= 1.1592646) {
                                var30 = 0.00836144;
                            } else {
                                var30 = -0.09337799;
                            }
                        } else {
                            var30 = 0.07533559;
                        }
                    }
                } else {
                    var30 = 0.059792824;
                }
            } else {
                if (input[1] >= 1.2528945) {
                    if (input[1] >= 1.7118405) {
                        if (input[3] >= -0.028848998) {
                            var30 = 0.09615883;
                        } else {
                            if (input[5] >= 0.11097) {
                                var30 = -0.057138454;
                            } else {
                                var30 = 0.034121074;
                            }
                        }
                    } else {
                        if (input[4] >= 0.027602) {
                            var30 = -0.07341458;
                        } else {
                            var30 = 0.0009925144;
                        }
                    }
                } else {
                    var30 = 0.09571335;
                }
            }
        }
    } else {
        var30 = -0.069869794;
    }
    double var31;
    if (input[5] >= -0.14825949) {
        if (input[5] >= -0.116819) {
            if (input[4] >= -0.4102365) {
                if (input[5] >= -0.0040800003) {
                    if (input[3] >= -0.0882625) {
                        if (input[0] >= -0.1805245) {
                            if (input[0] >= -0.0656385) {
                                var31 = -0.005951552;
                            } else {
                                var31 = -0.104046084;
                            }
                        } else {
                            if (input[1] >= 1.133443) {
                                if (input[4] >= -0.0325885) {
                                    if (input[1] >= 1.784589) {
                                        var31 = 0.023085833;
                                    } else {
                                        var31 = 0.112220086;
                                    }
                                } else {
                                    var31 = -0.044935122;
                                }
                            } else {
                                if (input[0] >= -1.0752145) {
                                    var31 = 0.02235195;
                                } else {
                                    var31 = -0.10232855;
                                }
                            }
                        }
                    } else {
                        if (input[3] >= -0.29794902) {
                            var31 = 0.101716846;
                        } else {
                            var31 = -0.013434848;
                        }
                    }
                } else {
                    if (input[3] >= 0.0019655) {
                        var31 = 0.14011988;
                    } else {
                        var31 = -0.0030204856;
                    }
                }
            } else {
                var31 = -0.070954956;
            }
        } else {
            var31 = -0.08299186;
        }
    } else {
        if (input[3] >= 0.1601795) {
            var31 = -0.028068656;
        } else {
            if (input[4] >= 0.0146155) {
                var31 = 0.011490074;
            } else {
                var31 = 0.12752607;
            }
        }
    }
    double var32;
    if (input[2] >= 7.7014847) {
        if (input[2] >= 8.572523) {
            if (input[2] >= 9.141789) {
                if (input[4] >= -0.4069725) {
                    if (input[2] >= 10.3126545) {
                        if (input[1] >= 1.0843451) {
                            var32 = 0.14588454;
                        } else {
                            if (input[0] >= -0.902324) {
                                var32 = 0.050979335;
                            } else {
                                var32 = -0.070718;
                            }
                        }
                    } else {
                        if (input[2] >= 10.194775) {
                            var32 = -0.09466976;
                        } else {
                            if (input[1] >= 1.0318794) {
                                if (input[0] >= -0.82755446) {
                                    if (input[3] >= 0.0322005) {
                                        var32 = -0.090188354;
                                    } else {
                                        var32 = 0.016595474;
                                    }
                                } else {
                                    var32 = 0.062834874;
                                }
                            } else {
                                var32 = 0.08841954;
                            }
                        }
                    }
                } else {
                    var32 = -0.06559384;
                }
            } else {
                var32 = 0.08082264;
            }
        } else {
            if (input[5] >= -0.007116) {
                var32 = 0.017773546;
            } else {
                var32 = -0.08787694;
            }
        }
    } else {
        var32 = 0.052728884;
    }
    double var33;
    if (input[5] >= -0.14825949) {
        if (input[4] >= 0.0939405) {
            if (input[0] >= -0.542472) {
                var33 = 0.0949304;
            } else {
                if (input[5] >= 0.101749) {
                    var33 = 0.029690834;
                } else {
                    var33 = -0.046833243;
                }
            }
        } else {
            if (input[4] >= -0.042124502) {
                if (input[0] >= -0.1440005) {
                    var33 = -0.09912046;
                } else {
                    if (input[0] >= -0.761092) {
                        if (input[1] >= 1.157393) {
                            var33 = 0.06631203;
                        } else {
                            var33 = -0.030477867;
                        }
                    } else {
                        if (input[3] >= -0.009274) {
                            var33 = -0.0040252903;
                        } else {
                            var33 = -0.08014557;
                        }
                    }
                }
            } else {
                if (input[1] >= 1.43065) {
                    if (input[1] >= 1.975292) {
                        var33 = 0.059222;
                    } else {
                        if (input[1] >= 1.7991835) {
                            var33 = -0.09542053;
                        } else {
                            var33 = -0.027154839;
                        }
                    }
                } else {
                    if (input[3] >= -0.155426) {
                        var33 = 0.16434148;
                    } else {
                        var33 = -0.048652716;
                    }
                }
            }
        }
    } else {
        if (input[5] >= -0.450311) {
            if (input[1] >= 1.3504915) {
                var33 = 0.13112529;
            } else {
                var33 = -0.004522618;
            }
        } else {
            var33 = -0.027308086;
        }
    }
    double var34;
    if (input[2] >= 9.021066) {
        if (input[5] >= -0.0345315) {
            if (input[2] >= 9.372759) {
                if (input[2] >= 9.7496) {
                    if (input[0] >= -0.560884) {
                        if (input[0] >= -0.254695) {
                            var34 = -0.00663905;
                        } else {
                            if (input[5] >= 0.017915) {
                                var34 = -0.028454551;
                            } else {
                                var34 = -0.11632057;
                            }
                        }
                    } else {
                        if (input[3] >= -0.034644) {
                            var34 = 0.079496674;
                        } else {
                            var34 = -0.048784997;
                        }
                    }
                } else {
                    var34 = 0.066750556;
                }
            } else {
                var34 = -0.08880614;
            }
        } else {
            if (input[0] >= -0.5892495) {
                var34 = 0.106287874;
            } else {
                if (input[4] >= -0.0682865) {
                    var34 = 0.033999566;
                } else {
                    var34 = -0.061527424;
                }
            }
        }
    } else {
        if (input[1] >= 1.3492191) {
            if (input[1] >= 1.5521226) {
                if (input[2] >= 7.8602295) {
                    var34 = 0.09655093;
                } else {
                    var34 = -0.023423927;
                }
            } else {
                var34 = -0.07345272;
            }
        } else {
            var34 = 0.10575336;
        }
    }
    double var35;
    if (input[2] >= 7.7014847) {
        if (input[2] >= 8.572523) {
            if (input[2] >= 9.355395) {
                if (input[2] >= 9.843306) {
                    if (input[1] >= 1.154624) {
                        if (input[5] >= 0.076563) {
                            var35 = -0.0107803615;
                        } else {
                            var35 = 0.114080794;
                        }
                    } else {
                        if (input[0] >= -1.1870315) {
                            if (input[0] >= 0.018786) {
                                var35 = -0.0600391;
                            } else {
                                var35 = 0.058645975;
                            }
                        } else {
                            var35 = -0.06991968;
                        }
                    }
                } else {
                    if (input[0] >= -0.7431295) {
                        if (input[0] >= -0.4584965) {
                            var35 = -0.004141456;
                        } else {
                            if (input[1] >= 1.7123646) {
                                var35 = -0.12107868;
                            } else {
                                var35 = -0.022137677;
                            }
                        }
                    } else {
                        var35 = 0.06443197;
                    }
                }
            } else {
                if (input[3] >= -0.001344) {
                    var35 = 0.017719626;
                } else {
                    var35 = 0.08416568;
                }
            }
        } else {
            if (input[5] >= -0.007116) {
                var35 = 0.010269611;
            } else {
                var35 = -0.07861879;
            }
        }
    } else {
        var35 = 0.050862666;
    }
    double var36;
    if (input[1] >= 0.40618002) {
        if (input[1] >= 0.6613995) {
            if (input[3] >= -0.3084715) {
                if (input[3] >= -0.2100495) {
                    if (input[5] >= -0.15743801) {
                        if (input[4] >= 0.050485) {
                            if (input[2] >= 9.530531) {
                                var36 = -0.018120103;
                            } else {
                                var36 = 0.09927257;
                            }
                        } else {
                            if (input[5] >= 0.1584265) {
                                var36 = 0.040905695;
                            } else {
                                if (input[2] >= 9.373957) {
                                    if (input[0] >= -0.560884) {
                                        var36 = -0.05212019;
                                    } else {
                                        var36 = 0.055347458;
                                    }
                                } else {
                                    if (input[0] >= -0.47241747) {
                                        var36 = -0.010436697;
                                    } else {
                                        var36 = -0.108162515;
                                    }
                                }
                            }
                        }
                    } else {
                        var36 = 0.07787512;
                    }
                } else {
                    var36 = -0.064673826;
                }
            } else {
                var36 = 0.07527441;
            }
        } else {
            var36 = -0.088411644;
        }
    } else {
        var36 = 0.053469133;
    }
    double var37;
    if (input[0] >= -0.1338215) {
        if (input[0] >= 0.202304) {
            var37 = -0.015290323;
        } else {
            var37 = 0.07895435;
        }
    } else {
        if (input[0] >= -0.1892815) {
            var37 = -0.08386971;
        } else {
            if (input[0] >= -0.3650905) {
                var37 = 0.07363189;
            } else {
                if (input[2] >= 9.017997) {
                    if (input[0] >= -0.6384225) {
                        if (input[2] >= 9.95677) {
                            var37 = 0.017981462;
                        } else {
                            if (input[4] >= -0.07663) {
                                var37 = -0.020911768;
                            } else {
                                var37 = -0.118606545;
                            }
                        }
                    } else {
                        if (input[3] >= 0.24019751) {
                            var37 = -0.05842821;
                        } else {
                            if (input[2] >= 11.557615) {
                                var37 = -0.043119546;
                            } else {
                                if (input[2] >= 9.724005) {
                                    var37 = 0.12040775;
                                } else {
                                    if (input[1] >= 1.4458435) {
                                        var37 = 0.033501223;
                                    } else {
                                        var37 = -0.04774795;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[0] >= -0.7506145) {
                        var37 = 0.0897508;
                    } else {
                        var37 = -0.015493491;
                    }
                }
            }
        }
    }
    double var38;
    if (input[2] >= 9.355395) {
        if (input[4] >= -0.4069725) {
            if (input[2] >= 10.3126545) {
                if (input[1] >= 0.9349555) {
                    var38 = 0.113959;
                } else {
                    if (input[2] >= 12.053984) {
                        var38 = -0.051879343;
                    } else {
                        var38 = 0.035398442;
                    }
                }
            } else {
                if (input[4] >= -0.1369805) {
                    if (input[3] >= 0.0322005) {
                        if (input[3] >= 0.2453855) {
                            var38 = -0.013782695;
                        } else {
                            var38 = -0.09326406;
                        }
                    } else {
                        if (input[1] >= 1.1664495) {
                            var38 = 0.057032563;
                        } else {
                            var38 = -0.056837946;
                        }
                    }
                } else {
                    var38 = 0.05532069;
                }
            }
        } else {
            var38 = -0.06909913;
        }
    } else {
        if (input[0] >= -0.7506145) {
            if (input[5] >= 0.14650649) {
                var38 = -0.034308814;
            } else {
                if (input[4] >= 0.027576499) {
                    var38 = 0.024632277;
                } else {
                    var38 = 0.11703147;
                }
            }
        } else {
            if (input[5] >= -0.0201885) {
                var38 = 0.042247135;
            } else {
                var38 = -0.07452312;
            }
        }
    }
    double var39;
    if (input[5] >= -0.073837504) {
        if (input[5] >= 0.064587) {
            if (input[3] >= 0.1422555) {
                if (input[3] >= 0.2608055) {
                    var39 = 0.026271472;
                } else {
                    var39 = -0.083046585;
                }
            } else {
                if (input[3] >= -0.075501) {
                    var39 = 0.11680537;
                } else {
                    if (input[1] >= 1.6540606) {
                        var39 = -0.053875793;
                    } else {
                        var39 = 0.04406963;
                    }
                }
            }
        } else {
            if (input[3] >= 0.049687497) {
                var39 = 0.049836162;
            } else {
                if (input[4] >= 0.0277205) {
                    var39 = 0.015481939;
                } else {
                    if (input[3] >= -0.0356795) {
                        if (input[5] >= 0.011633) {
                            var39 = -0.12179462;
                        } else {
                            var39 = -0.023678225;
                        }
                    } else {
                        var39 = 0.018351978;
                    }
                }
            }
        }
    } else {
        if (input[1] >= 1.1556716) {
            if (input[1] >= 1.5912659) {
                if (input[4] >= 0.090607) {
                    var39 = -0.024082826;
                } else {
                    var39 = 0.08242613;
                }
            } else {
                var39 = -0.05004496;
            }
        } else {
            var39 = 0.07567233;
        }
    }
    double var40;
    if (input[3] >= 0.291249) {
        if (input[2] >= 9.744961) {
            var40 = -0.07801536;
        } else {
            var40 = 0.039247174;
        }
    } else {
        if (input[3] >= 0.0015515) {
            if (input[5] >= -0.0040800003) {
                if (input[2] >= 9.693168) {
                    var40 = 0.047675204;
                } else {
                    if (input[0] >= -0.553998) {
                        var40 = 0.013521883;
                    } else {
                        var40 = -0.08236098;
                    }
                }
            } else {
                var40 = 0.1071654;
            }
        } else {
            if (input[3] >= -0.04065) {
                if (input[2] >= 9.840761) {
                    var40 = -0.07772082;
                } else {
                    var40 = -0.014644133;
                }
            } else {
                if (input[1] >= 1.9525394) {
                    var40 = 0.07684625;
                } else {
                    if (input[1] >= 1.654285) {
                        var40 = -0.075591244;
                    } else {
                        if (input[2] >= 10.280322) {
                            var40 = -0.026411304;
                        } else {
                            if (input[5] >= -0.054422997) {
                                var40 = 0.118543655;
                            } else {
                                var40 = -0.010824132;
                            }
                        }
                    }
                }
            }
        }
    }
    double var41;
    if (input[1] >= 0.40618002) {
        if (input[1] >= 0.6613995) {
            if (input[0] >= -0.81550395) {
                if (input[1] >= 1.03158) {
                    if (input[2] >= 9.961859) {
                        var41 = 0.05546715;
                    } else {
                        if (input[2] >= 9.355395) {
                            if (input[5] >= 0.0288665) {
                                if (input[3] >= -0.029597) {
                                    var41 = -0.10842513;
                                } else {
                                    var41 = -0.029691413;
                                }
                            } else {
                                if (input[5] >= -0.1911855) {
                                    var41 = 0.043592993;
                                } else {
                                    var41 = -0.08098884;
                                }
                            }
                        } else {
                            if (input[5] >= 0.14650649) {
                                var41 = -0.044040505;
                            } else {
                                if (input[0] >= -0.58064246) {
                                    var41 = 0.071090505;
                                } else {
                                    var41 = -0.0151192555;
                                }
                            }
                        }
                    }
                } else {
                    var41 = 0.08899838;
                }
            } else {
                if (input[1] >= 1.434692) {
                    var41 = 0.110095635;
                } else {
                    var41 = -0.017340105;
                }
            }
        } else {
            var41 = -0.075947315;
        }
    } else {
        var41 = 0.04539731;
    }
    double var42;
    if (input[3] >= -0.296566) {
        if (input[1] >= 0.428783) {
            if (input[1] >= 0.7206015) {
                if (input[4] >= 0.050485) {
                    if (input[3] >= 0.3218735) {
                        var42 = -0.037099276;
                    } else {
                        if (input[5] >= 0.17036599) {
                            var42 = -0.001048095;
                        } else {
                            var42 = 0.1261188;
                        }
                    }
                } else {
                    if (input[5] >= -0.157451) {
                        if (input[4] >= 0.026313) {
                            var42 = -0.089860566;
                        } else {
                            if (input[5] >= 0.1584265) {
                                var42 = 0.08789164;
                            } else {
                                if (input[4] >= -0.1620315) {
                                    if (input[1] >= 1.1541746) {
                                        var42 = 0.036116634;
                                    } else {
                                        var42 = -0.0603525;
                                    }
                                } else {
                                    var42 = -0.07854134;
                                }
                            }
                        }
                    } else {
                        var42 = 0.07127402;
                    }
                }
            } else {
                var42 = -0.066764966;
            }
        } else {
            var42 = 0.08210119;
        }
    } else {
        if (input[5] >= 0.2532195) {
            var42 = -0.072952546;
        } else {
            var42 = 0.01149291;
        }
    }
    double var43;
    if (input[4] >= -0.2958085) {
        if (input[2] >= 10.3126545) {
            if (input[1] >= 0.4638855) {
                var43 = 0.0681684;
            } else {
                var43 = -0.032332014;
            }
        } else {
            if (input[2] >= 10.146501) {
                var43 = -0.083081946;
            } else {
                if (input[1] >= 1.3079054) {
                    if (input[0] >= -0.81550395) {
                        if (input[0] >= -0.67562056) {
                            if (input[5] >= 0.010768) {
                                if (input[0] >= -0.1805245) {
                                    var43 = -0.08191372;
                                } else {
                                    var43 = 0.0122264605;
                                }
                            } else {
                                var43 = 0.041542854;
                            }
                        } else {
                            var43 = -0.100082256;
                        }
                    } else {
                        var43 = 0.056662176;
                    }
                } else {
                    if (input[0] >= -0.595237) {
                        var43 = 0.00688687;
                    } else {
                        var43 = 0.08752417;
                    }
                }
            }
        }
    } else {
        var43 = 0.040070068;
    }
    double var44;
    if (input[2] >= 7.7014847) {
        if (input[2] >= 8.572523) {
            if (input[3] >= -0.3831615) {
                if (input[2] >= 9.649159) {
                    if (input[5] >= -0.309776) {
                        if (input[0] >= -0.5605095) {
                            if (input[0] >= -0.254695) {
                                var44 = 0.02852483;
                            } else {
                                if (input[5] >= 0.014582001) {
                                    var44 = 0.00028233315;
                                } else {
                                    var44 = -0.09924631;
                                }
                            }
                        } else {
                            if (input[5] >= 0.0496695) {
                                var44 = -0.034649525;
                            } else {
                                var44 = 0.12236182;
                            }
                        }
                    } else {
                        var44 = -0.0666354;
                    }
                } else {
                    if (input[5] >= 0.231889) {
                        var44 = -0.038635675;
                    } else {
                        var44 = 0.10281535;
                    }
                }
            } else {
                var44 = -0.052528575;
            }
        } else {
            if (input[5] >= -0.007116) {
                var44 = 0.0063168467;
            } else {
                var44 = -0.0833897;
            }
        }
    } else {
        var44 = 0.046128582;
    }
    double var45;
    if (input[5] >= 0.0555285) {
        if (input[2] >= 9.7496) {
            if (input[2] >= 10.48592) {
                var45 = 0.035705727;
            } else {
                if (input[0] >= -0.52361095) {
                    var45 = -0.0799368;
                } else {
                    var45 = -0.0038429077;
                }
            }
        } else {
            if (input[5] >= 0.201525) {
                if (input[5] >= 0.2795645) {
                    var45 = 0.048159618;
                } else {
                    var45 = -0.046218194;
                }
            } else {
                var45 = 0.11742575;
            }
        }
    } else {
        if (input[4] >= 0.0442155) {
            if (input[1] >= 1.660497) {
                var45 = -0.020950118;
            } else {
                var45 = 0.082495205;
            }
        } else {
            if (input[5] >= -0.1572775) {
                if (input[3] >= 0.049687497) {
                    var45 = 0.021753896;
                } else {
                    if (input[4] >= -0.0422005) {
                        if (input[2] >= 9.426199) {
                            var45 = -0.033745125;
                        } else {
                            var45 = -0.11164354;
                        }
                    } else {
                        var45 = -0.0024668793;
                    }
                }
            } else {
                var45 = 0.029016895;
            }
        }
    }
    double var46;
    if (input[1] >= 2.073114) {
        if (input[2] >= 9.399255) {
            var46 = 0.07015386;
        } else {
            var46 = -0.012293294;
        }
    } else {
        if (input[1] >= 1.9521655) {
            var46 = -0.05921092;
        } else {
            if (input[3] >= 0.0019655) {
                if (input[1] >= 1.372571) {
                    var46 = 0.08479166;
                } else {
                    if (input[1] >= 1.253718) {
                        var46 = -0.08771485;
                    } else {
                        if (input[0] >= -0.80263054) {
                            var46 = 0.061176028;
                        } else {
                            var46 = -0.016145907;
                        }
                    }
                }
            } else {
                if (input[5] >= -0.087322995) {
                    if (input[0] >= -0.770523) {
                        if (input[3] >= -0.0812605) {
                            var46 = -0.046712123;
                        } else {
                            var46 = 0.06264305;
                        }
                    } else {
                        if (input[4] >= 0.0289235) {
                            var46 = -0.10936824;
                        } else {
                            var46 = -0.020518709;
                        }
                    }
                } else {
                    var46 = 0.03286154;
                }
            }
        }
    }
    double var47;
    if (input[2] >= 7.7014847) {
        if (input[5] >= 0.085074) {
            if (input[1] >= 2.399136) {
                var47 = -0.05672323;
            } else {
                if (input[2] >= 9.7496) {
                    if (input[5] >= 0.34304053) {
                        var47 = -0.05418141;
                    } else {
                        var47 = 0.03371551;
                    }
                } else {
                    var47 = 0.09676214;
                }
            }
        } else {
            if (input[4] >= 0.0148165) {
                if (input[2] >= 9.774448) {
                    var47 = 0.0730112;
                } else {
                    if (input[3] >= -0.1207995) {
                        var47 = 0.027487231;
                    } else {
                        var47 = -0.08632955;
                    }
                }
            } else {
                if (input[0] >= -0.254695) {
                    var47 = 0.023594718;
                } else {
                    if (input[3] >= -0.040751) {
                        if (input[2] >= 10.196047) {
                            var47 = -0.090798385;
                        } else {
                            if (input[2] >= 9.533226) {
                                var47 = 0.036543243;
                            } else {
                                var47 = -0.07922812;
                            }
                        }
                    } else {
                        var47 = -0.004987075;
                    }
                }
            }
        }
    } else {
        var47 = 0.040950995;
    }
    double var48;
    if (input[1] >= 1.9770141) {
        if (input[3] >= -0.04065) {
            if (input[5] >= 0.0187355) {
                var48 = 0.042120405;
            } else {
                var48 = -0.050032083;
            }
        } else {
            var48 = 0.065634646;
        }
    } else {
        if (input[1] >= 1.8271755) {
            var48 = -0.058156583;
        } else {
            if (input[0] >= -0.8032295) {
                if (input[1] >= 1.5760725) {
                    var48 = 0.07352297;
                } else {
                    if (input[0] >= -0.6384225) {
                        if (input[4] >= -0.106354505) {
                            if (input[2] >= 9.5109215) {
                                if (input[1] >= 0.9193135) {
                                    var48 = -0.08959809;
                                } else {
                                    var48 = -0.015139763;
                                }
                            } else {
                                var48 = 0.008143815;
                            }
                        } else {
                            var48 = 0.03469576;
                        }
                    } else {
                        var48 = 0.09798814;
                    }
                }
            } else {
                if (input[3] >= 0.016114) {
                    var48 = 0.03291369;
                } else {
                    if (input[4] >= -0.0074744998) {
                        var48 = -0.08407445;
                    } else {
                        var48 = -0.009486162;
                    }
                }
            }
        }
    }
    double var49;
    if (input[3] >= 0.108812496) {
        if (input[1] >= 1.1799965) {
            if (input[1] >= 1.372571) {
                if (input[4] >= -0.0609015) {
                    var49 = 0.042057432;
                } else {
                    var49 = -0.049730714;
                }
            } else {
                var49 = -0.09877648;
            }
        } else {
            var49 = 0.031229632;
        }
    } else {
        if (input[0] >= 0.202304) {
            var49 = -0.05149779;
        } else {
            if (input[3] >= 0.0008075) {
                var49 = 0.07645283;
            } else {
                if (input[1] >= 1.9264935) {
                    var49 = 0.059347972;
                } else {
                    if (input[1] >= 1.4309494) {
                        if (input[4] >= -0.0739605) {
                            var49 = -0.0045668357;
                        } else {
                            var49 = -0.09327425;
                        }
                    } else {
                        if (input[0] >= -0.5610335) {
                            var49 = -0.032692015;
                        } else {
                            var49 = 0.07323382;
                        }
                    }
                }
            }
        }
    }
    double var50;
    if (input[3] >= -0.04065) {
        if (input[4] >= 0.2362765) {
            var50 = -0.06027747;
        } else {
            if (input[4] >= 0.050485) {
                var50 = 0.074607156;
            } else {
                if (input[3] >= 0.0018485) {
                    if (input[5] >= -0.0221435) {
                        if (input[5] >= 0.146656) {
                            var50 = 0.04131008;
                        } else {
                            if (input[1] >= 1.6933535) {
                                var50 = -0.08413369;
                            } else {
                                var50 = 0.008586966;
                            }
                        }
                    } else {
                        var50 = 0.045820467;
                    }
                } else {
                    if (input[4] >= -0.0167605) {
                        var50 = -0.07880178;
                    } else {
                        var50 = -0.004627848;
                    }
                }
            }
        }
    } else {
        if (input[3] >= -0.115752) {
            var50 = 0.06612409;
        } else {
            if (input[2] >= 9.94442) {
                var50 = 0.04350748;
            } else {
                if (input[2] >= 9.020243) {
                    if (input[5] >= 0.027882) {
                        var50 = -0.005530656;
                    } else {
                        var50 = -0.08461006;
                    }
                } else {
                    var50 = 0.03700838;
                }
            }
        }
    }
    double var51;
    if (input[3] >= 0.108812496) {
        if (input[4] >= 0.17975199) {
            var51 = -0.06418275;
        } else {
            if (input[4] >= -0.0325885) {
                var51 = 0.086127765;
            } else {
                if (input[0] >= -0.592992) {
                    var51 = 0.011570527;
                } else {
                    var51 = -0.075620584;
                }
            }
        }
    } else {
        if (input[1] >= 1.164354) {
            if (input[1] >= 1.4334195) {
                if (input[0] >= -0.420326) {
                    var51 = 0.04976581;
                } else {
                    if (input[1] >= 1.6732205) {
                        if (input[0] >= -0.707055) {
                            var51 = -0.046067696;
                        } else {
                            var51 = 0.07974808;
                        }
                    } else {
                        var51 = -0.07238706;
                    }
                }
            } else {
                var51 = 0.13623059;
            }
        } else {
            if (input[4] >= -0.025630001) {
                if (input[3] >= -0.0483385) {
                    var51 = -0.07874051;
                } else {
                    var51 = 0.008495805;
                }
            } else {
                var51 = 0.03734895;
            }
        }
    }
    double var52;
    if (input[4] >= -0.4069725) {
        if (input[1] >= 0.40618002) {
            if (input[1] >= 0.7206015) {
                if (input[2] >= 9.8338) {
                    if (input[5] >= 0.020514) {
                        var52 = 0.0022581825;
                    } else {
                        var52 = 0.11422392;
                    }
                } else {
                    if (input[0] >= -0.77703404) {
                        if (input[1] >= 1.6933535) {
                            if (input[0] >= -0.58064246) {
                                if (input[5] >= 0.114183) {
                                    var52 = -0.05195587;
                                } else {
                                    var52 = 0.07466688;
                                }
                            } else {
                                var52 = -0.121134914;
                            }
                        } else {
                            if (input[3] >= 0.0326365) {
                                var52 = -0.032530643;
                            } else {
                                var52 = 0.0641926;
                            }
                        }
                    } else {
                        var52 = 0.064324684;
                    }
                }
            } else {
                var52 = -0.070489675;
            }
        } else {
            var52 = 0.05325664;
        }
    } else {
        var52 = -0.03829107;
    }
    double var53;
    if (input[4] >= 0.0939405) {
        if (input[3] >= 0.260578) {
            var53 = -0.03733094;
        } else {
            if (input[0] >= -0.72516704) {
                var53 = 0.07263623;
            } else {
                var53 = 0.007933843;
            }
        }
    } else {
        if (input[0] >= -0.143776) {
            if (input[4] >= 0.0048905) {
                var53 = -0.0917817;
            } else {
                var53 = 0.00612783;
            }
        } else {
            if (input[0] >= -0.39181) {
                var53 = 0.0670721;
            } else {
                if (input[0] >= -0.4872365) {
                    var53 = -0.06636148;
                } else {
                    if (input[5] >= -0.047032997) {
                        if (input[5] >= 0.028944999) {
                            if (input[5] >= 0.0830385) {
                                var53 = 0.0367927;
                            } else {
                                var53 = -0.056691322;
                            }
                        } else {
                            var53 = 0.07137544;
                        }
                    } else {
                        if (input[5] >= -0.1580055) {
                            var53 = -0.07174984;
                        } else {
                            var53 = 0.034909543;
                        }
                    }
                }
            }
        }
    }
    double var54;
    if (input[2] >= 9.649159) {
        if (input[2] >= 9.856777) {
            if (input[0] >= -1.1890526) {
                if (input[4] >= 0.029079) {
                    var54 = 0.0970787;
                } else {
                    if (input[4] >= -0.1124515) {
                        var54 = -0.039730884;
                    } else {
                        var54 = 0.0457708;
                    }
                }
            } else {
                var54 = -0.045656867;
            }
        } else {
            if (input[0] >= -0.556767) {
                var54 = -0.08853674;
            } else {
                var54 = 0.004308904;
            }
        }
    } else {
        if (input[4] >= -0.079881504) {
            if (input[2] >= 8.544682) {
                if (input[5] >= 0.0104955) {
                    var54 = -0.018915799;
                } else {
                    var54 = 0.06102619;
                }
            } else {
                if (input[2] >= 7.733144) {
                    var54 = -0.068354726;
                } else {
                    var54 = 0.02071777;
                }
            }
        } else {
            var54 = 0.066227764;
        }
    }
    double var55;
    if (input[1] >= 1.9770141) {
        if (input[2] >= 9.399255) {
            var55 = 0.065204926;
        } else {
            var55 = -0.008809523;
        }
    } else {
        if (input[4] >= -0.4069725) {
            if (input[4] >= -0.211312) {
                if (input[1] >= 0.463062) {
                    if (input[1] >= 0.761841) {
                        if (input[1] >= 1.0318794) {
                            if (input[5] >= 0.158068) {
                                if (input[5] >= 0.288757) {
                                    var55 = -0.011093652;
                                } else {
                                    var55 = -0.08455777;
                                }
                            } else {
                                if (input[4] >= 0.090607) {
                                    var55 = -0.05276641;
                                } else {
                                    if (input[1] >= 1.3363465) {
                                        var55 = 0.09519336;
                                    } else {
                                        var55 = -0.024666207;
                                    }
                                }
                            }
                        } else {
                            var55 = 0.06958762;
                        }
                    } else {
                        var55 = -0.07427733;
                    }
                } else {
                    var55 = 0.055104602;
                }
            } else {
                var55 = 0.055065792;
            }
        } else {
            var55 = -0.05807779;
        }
    }
    double var56;
    if (input[4] >= 0.0939405) {
        if (input[3] >= 0.260578) {
            var56 = -0.02918955;
        } else {
            var56 = 0.054367494;
        }
    } else {
        if (input[0] >= -0.143776) {
            if (input[4] >= 0.0006735) {
                var56 = -0.07777443;
            } else {
                var56 = 0.0055577084;
            }
        } else {
            if (input[0] >= -0.39181) {
                var56 = 0.06123599;
            } else {
                if (input[4] >= -0.296119) {
                    if (input[4] >= -0.033845) {
                        if (input[1] >= 1.3181585) {
                            var56 = 0.062378757;
                        } else {
                            if (input[4] >= 0.0080375) {
                                var56 = 0.01672227;
                            } else {
                                var56 = -0.058115024;
                            }
                        }
                    } else {
                        if (input[1] >= 1.2947326) {
                            var56 = -0.07826278;
                        } else {
                            var56 = -0.0040370603;
                        }
                    }
                } else {
                    var56 = 0.04054331;
                }
            }
        }
    }
    double var57;
    if (input[0] >= 0.032257497) {
        var57 = 0.033767335;
    } else {
        if (input[0] >= -0.273556) {
            if (input[3] >= 0.117479) {
                var57 = -0.0712637;
            } else {
                var57 = -0.005446175;
            }
        } else {
            if (input[2] >= 8.485629) {
                if (input[3] >= -0.035361) {
                    if (input[3] >= 0.032563) {
                        if (input[0] >= -0.80345404) {
                            if (input[3] >= 0.197135) {
                                var57 = 0.03139967;
                            } else {
                                var57 = -0.086101495;
                            }
                        } else {
                            var57 = 0.0469924;
                        }
                    } else {
                        var57 = 0.06570033;
                    }
                } else {
                    if (input[3] >= -0.230435) {
                        if (input[4] >= -0.0166455) {
                            var57 = -0.078160495;
                        } else {
                            var57 = -0.011688586;
                        }
                    } else {
                        var57 = 0.014073139;
                    }
                }
            } else {
                var57 = 0.05381688;
            }
        }
    }
    double var58;
    if (input[1] >= 1.9770141) {
        if (input[2] >= 9.399255) {
            var58 = 0.058739435;
        } else {
            var58 = -0.007528545;
        }
    } else {
        if (input[4] >= -0.4069725) {
            if (input[0] >= -0.6822815) {
                if (input[1] >= 1.7991835) {
                    var58 = -0.041937336;
                } else {
                    if (input[0] >= -0.56440103) {
                        if (input[4] >= -0.0250385) {
                            if (input[3] >= -0.02047) {
                                var58 = -0.05917231;
                            } else {
                                var58 = 0.019956985;
                            }
                        } else {
                            var58 = 0.073801234;
                        }
                    } else {
                        var58 = 0.10370914;
                    }
                }
            } else {
                if (input[5] >= 0.197472) {
                    var58 = 0.017288003;
                } else {
                    if (input[5] >= -0.0664785) {
                        if (input[3] >= -0.035569) {
                            var58 = -0.0065748966;
                        } else {
                            var58 = -0.07646815;
                        }
                    } else {
                        var58 = 0.012026069;
                    }
                }
            }
        } else {
            var58 = -0.053759027;
        }
    }
    double var59;
    if (input[4] >= 0.0939405) {
        if (input[0] >= -0.504451) {
            var59 = 0.06650869;
        } else {
            if (input[1] >= 1.6601975) {
                var59 = -0.05139751;
            } else {
                var59 = 0.038465656;
            }
        }
    } else {
        if (input[4] >= 0.03873) {
            var59 = -0.041965507;
        } else {
            if (input[5] >= 0.2795645) {
                var59 = 0.058360238;
            } else {
                if (input[3] >= 0.022609498) {
                    if (input[4] >= -0.0969735) {
                        var59 = 0.08042004;
                    } else {
                        var59 = -0.023374913;
                    }
                } else {
                    if (input[2] >= 8.572523) {
                        if (input[3] >= -0.1798805) {
                            if (input[1] >= 1.1571685) {
                                var59 = 0.101459235;
                            } else {
                                var59 = -0.027111728;
                            }
                        } else {
                            var59 = -0.06866975;
                        }
                    } else {
                        var59 = -0.0636704;
                    }
                }
            }
        }
    }
    double var60;
    if (input[2] >= 9.021066) {
        if (input[3] >= 0.108812496) {
            if (input[2] >= 9.828787) {
                var60 = 0.017001506;
            } else {
                if (input[3] >= 0.1971595) {
                    var60 = -0.0049364045;
                } else {
                    var60 = -0.09287205;
                }
            }
        } else {
            if (input[1] >= 1.1645036) {
                if (input[3] >= -0.081025004) {
                    var60 = 0.087475576;
                } else {
                    if (input[3] >= -0.230435) {
                        var60 = -0.04808416;
                    } else {
                        var60 = 0.030124048;
                    }
                }
            } else {
                if (input[0] >= -0.5476365) {
                    var60 = -0.07522331;
                } else {
                    var60 = 0.02521596;
                }
            }
        }
    } else {
        if (input[3] >= 0.0056225) {
            var60 = 0.06949834;
        } else {
            if (input[3] >= -0.036077) {
                var60 = -0.06247863;
            } else {
                var60 = 0.037160162;
            }
        }
    }
    double var61;
    if (input[4] >= -0.2958085) {
        if (input[4] >= -0.1728875) {
            if (input[2] >= 10.3126545) {
                if (input[2] >= 11.869343) {
                    var61 = -0.0010521207;
                } else {
                    var61 = 0.07404297;
                }
            } else {
                if (input[2] >= 10.104813) {
                    var61 = -0.076348305;
                } else {
                    if (input[5] >= -0.116819) {
                        if (input[3] >= -0.038585) {
                            if (input[5] >= 0.0103325) {
                                if (input[2] >= 9.606797) {
                                    var61 = 0.027543401;
                                } else {
                                    if (input[0] >= -0.56395197) {
                                        var61 = -0.0035179004;
                                    } else {
                                        var61 = -0.07297198;
                                    }
                                }
                            } else {
                                var61 = 0.057341397;
                            }
                        } else {
                            if (input[4] >= 0.050511003) {
                                var61 = 0.020538619;
                            } else {
                                var61 = 0.08284572;
                            }
                        }
                    } else {
                        if (input[2] >= 9.526939) {
                            var61 = -0.06396641;
                        } else {
                            var61 = 0.009304542;
                        }
                    }
                }
            }
        } else {
            var61 = -0.05666045;
        }
    } else {
        var61 = 0.031565018;
    }
    double var62;
    if (input[5] >= -0.14825949) {
        if (input[5] >= -0.020039499) {
            if (input[1] >= 1.1332185) {
                if (input[0] >= -0.691861) {
                    if (input[2] >= 9.534199) {
                        var62 = 0.044293363;
                    } else {
                        if (input[2] >= 9.020018) {
                            var62 = -0.073106505;
                        } else {
                            var62 = -0.007118842;
                        }
                    }
                } else {
                    var62 = 0.086793005;
                }
            } else {
                if (input[4] >= -0.025153998) {
                    if (input[3] >= 0.0099895) {
                        var62 = -0.013264673;
                    } else {
                        var62 = -0.06649839;
                    }
                } else {
                    var62 = 0.037415333;
                }
            }
        } else {
            if (input[1] >= 1.4290035) {
                if (input[0] >= -0.72673845) {
                    var62 = -0.021575157;
                } else {
                    var62 = -0.10528118;
                }
            } else {
                var62 = 0.046389364;
            }
        }
    } else {
        if (input[3] >= 0.1601795) {
            var62 = -0.020584915;
        } else {
            var62 = 0.055843785;
        }
    }
    double var63;
    if (input[2] >= 9.649159) {
        if (input[4] >= -0.037582003) {
            if (input[1] >= 1.2264745) {
                var63 = 0.06291052;
            } else {
                if (input[1] >= 0.9124275) {
                    var63 = -0.06751051;
                } else {
                    var63 = 0.022867804;
                }
            }
        } else {
            if (input[2] >= 10.619368) {
                var63 = 0.0149203595;
            } else {
                if (input[4] >= -0.115745) {
                    var63 = -0.08454646;
                } else {
                    var63 = -0.027276734;
                }
            }
        }
    } else {
        if (input[1] >= 1.2528945) {
            if (input[0] >= -0.7803275) {
                if (input[0] >= -0.554971) {
                    if (input[5] >= 0.1582115) {
                        var63 = -0.035997055;
                    } else {
                        var63 = 0.060498107;
                    }
                } else {
                    if (input[2] >= 9.355695) {
                        var63 = -0.08156869;
                    } else {
                        var63 = -0.012112662;
                    }
                }
            } else {
                var63 = 0.035384238;
            }
        } else {
            var63 = 0.078247026;
        }
    }
    double var64;
    if (input[2] >= 9.649159) {
        if (input[4] >= -0.4069725) {
            if (input[5] >= -0.26587301) {
                if (input[5] >= -0.0328415) {
                    if (input[0] >= -0.560884) {
                        if (input[0] >= -0.3650155) {
                            var64 = 0.020406904;
                        } else {
                            var64 = -0.081216566;
                        }
                    } else {
                        if (input[0] >= -1.1901004) {
                            var64 = 0.065177746;
                        } else {
                            var64 = -0.043015122;
                        }
                    }
                } else {
                    var64 = 0.082901284;
                }
            } else {
                var64 = -0.048791878;
            }
        } else {
            var64 = -0.06336864;
        }
    } else {
        if (input[4] >= -0.079881504) {
            if (input[5] >= 0.0300265) {
                var64 = 0.028622586;
            } else {
                if (input[4] >= 0.044228) {
                    var64 = 0.022914268;
                } else {
                    var64 = -0.063795954;
                }
            }
        } else {
            var64 = 0.067639835;
        }
    }
    double var65;
    if (input[5] >= -0.14825949) {
        if (input[5] >= -0.020039499) {
            if (input[0] >= -0.1440005) {
                if (input[0] >= 0.032257497) {
                    var65 = 0.014370121;
                } else {
                    var65 = -0.061674666;
                }
            } else {
                if (input[2] >= 9.019494) {
                    if (input[5] >= 0.0486765) {
                        if (input[5] >= 0.3447925) {
                            var65 = 0.029963544;
                        } else {
                            if (input[0] >= -0.60257196) {
                                var65 = 0.0067153815;
                            } else {
                                var65 = -0.06789021;
                            }
                        }
                    } else {
                        if (input[0] >= -0.609009) {
                            var65 = -0.009511325;
                        } else {
                            var65 = 0.05666801;
                        }
                    }
                } else {
                    var65 = 0.081939906;
                }
            }
        } else {
            if (input[1] >= 1.4290035) {
                var65 = -0.075790614;
            } else {
                var65 = 0.03324125;
            }
        }
    } else {
        if (input[3] >= -0.120509) {
            var65 = 0.049241148;
        } else {
            var65 = -0.017686777;
        }
    }
    double var66;
    if (input[4] >= -0.2958085) {
        if (input[4] >= -0.157865) {
            if (input[3] >= -0.04065) {
                if (input[2] >= 10.357113) {
                    var66 = 0.042887412;
                } else {
                    if (input[0] >= -0.6831795) {
                        if (input[5] >= 0.2074175) {
                            var66 = -0.05231558;
                        } else {
                            if (input[0] >= -0.270787) {
                                var66 = -0.011280362;
                            } else {
                                var66 = 0.05970019;
                            }
                        }
                    } else {
                        if (input[4] >= 0.008367) {
                            var66 = 0.007494105;
                        } else {
                            var66 = -0.09760676;
                        }
                    }
                }
            } else {
                if (input[4] >= 0.014708) {
                    if (input[0] >= -0.75023997) {
                        var66 = 0.035785258;
                    } else {
                        var66 = -0.06279226;
                    }
                } else {
                    var66 = 0.0947972;
                }
            }
        } else {
            var66 = -0.047846925;
        }
    } else {
        var66 = 0.032910783;
    }
    double var67;
    if (input[1] >= 1.9770141) {
        if (input[0] >= -0.18015051) {
            var67 = -0.004611226;
        } else {
            var67 = 0.04279965;
        }
    } else {
        if (input[3] >= -0.3831045) {
            if (input[1] >= 0.496368) {
                if (input[1] >= 0.6613995) {
                    if (input[1] >= 1.0643615) {
                        if (input[0] >= -0.8438705) {
                            if (input[3] >= 0.108688995) {
                                if (input[5] >= -0.0224855) {
                                    var67 = -0.08068695;
                                } else {
                                    var67 = -0.013786445;
                                }
                            } else {
                                if (input[5] >= 0.029306) {
                                    var67 = -0.036276132;
                                } else {
                                    if (input[5] >= -0.069716) {
                                        var67 = 0.06506627;
                                    } else {
                                        var67 = -0.0020579887;
                                    }
                                }
                            }
                        } else {
                            var67 = 0.037304215;
                        }
                    } else {
                        var67 = 0.045962542;
                    }
                } else {
                    var67 = -0.06370463;
                }
            } else {
                var67 = 0.06057033;
            }
        } else {
            var67 = -0.045401506;
        }
    }
    double var68;
    if (input[5] >= 0.085074) {
        if (input[3] >= -0.29794902) {
            if (input[4] >= 0.028634) {
                var68 = -0.0051544523;
            } else {
                var68 = 0.07631132;
            }
        } else {
            var68 = -0.031409368;
        }
    } else {
        if (input[4] >= 0.0442155) {
            if (input[4] >= 0.17975199) {
                var68 = -0.031754717;
            } else {
                var68 = 0.07806423;
            }
        } else {
            if (input[3] >= 0.022609498) {
                if (input[4] >= -0.112183005) {
                    var68 = 0.04654969;
                } else {
                    var68 = -0.017330118;
                }
            } else {
                if (input[4] >= -0.017129) {
                    if (input[1] >= 1.2558135) {
                        var68 = -0.02239393;
                    } else {
                        var68 = -0.08994773;
                    }
                } else {
                    if (input[0] >= -0.609383) {
                        var68 = 0.03374973;
                    } else {
                        var68 = -0.028212974;
                    }
                }
            }
        }
    }
    double var69;
    if (input[5] >= 0.036604002) {
        if (input[1] >= 1.5521226) {
            if (input[3] >= -0.0806265) {
                var69 = 0.0826531;
            } else {
                var69 = -0.02109755;
            }
        } else {
            if (input[5] >= 0.34170252) {
                var69 = -0.05210526;
            } else {
                if (input[0] >= -0.6349045) {
                    var69 = 0.064716116;
                } else {
                    var69 = -0.027532645;
                }
            }
        }
    } else {
        if (input[5] >= -0.073837504) {
            if (input[1] >= 1.5753989) {
                var69 = -0.054220337;
            } else {
                if (input[3] >= 0.002152) {
                    var69 = 0.047363445;
                } else {
                    var69 = -0.042294387;
                }
            }
        } else {
            if (input[2] >= 9.602606) {
                if (input[2] >= 9.774448) {
                    var69 = 0.04806461;
                } else {
                    var69 = -0.07209439;
                }
            } else {
                var69 = 0.04469737;
            }
        }
    }
    double var70;
    if (input[4] >= -0.2958085) {
        if (input[4] >= -0.1620315) {
            if (input[0] >= 0.202304) {
                var70 = -0.048807647;
            } else {
                if (input[5] >= -0.116744) {
                    if (input[3] >= -0.038585) {
                        if (input[5] >= 0.201525) {
                            var70 = -0.036314078;
                        } else {
                            if (input[4] >= 0.008434501) {
                                var70 = 0.0680642;
                            } else {
                                if (input[4] >= -0.017124001) {
                                    var70 = -0.05340711;
                                } else {
                                    var70 = 0.03295803;
                                }
                            }
                        }
                    } else {
                        if (input[0] >= -0.770523) {
                            var70 = 0.11226714;
                        } else {
                            var70 = -0.008721374;
                        }
                    }
                } else {
                    if (input[1] >= 1.7123646) {
                        var70 = -0.04855429;
                    } else {
                        var70 = 0.0032462906;
                    }
                }
            }
        } else {
            var70 = -0.043624133;
        }
    } else {
        var70 = 0.031528544;
    }
    double var71;
    if (input[2] >= 9.7496) {
        if (input[2] >= 9.856777) {
            if (input[1] >= 0.5257065) {
                if (input[4] >= -0.0410015) {
                    if (input[4] >= 0.029079) {
                        var71 = 0.030040877;
                    } else {
                        var71 = -0.04393436;
                    }
                } else {
                    var71 = 0.085302815;
                }
            } else {
                var71 = -0.03852708;
            }
        } else {
            var71 = -0.061056856;
        }
    } else {
        if (input[5] >= 0.0555285) {
            if (input[2] >= 9.083561) {
                var71 = 0.07848845;
            } else {
                var71 = -0.006773336;
            }
        } else {
            if (input[5] >= 0.010689) {
                var71 = -0.059937235;
            } else {
                if (input[0] >= -0.675321) {
                    var71 = 0.057640444;
                } else {
                    var71 = -0.024715278;
                }
            }
        }
    }
    double var72;
    if (input[0] >= -0.6384225) {
        if (input[1] >= 1.5515985) {
            if (input[1] >= 1.9660865) {
                if (input[3] >= 0.0494385) {
                    var72 = -0.03857745;
                } else {
                    var72 = 0.0045732106;
                }
            } else {
                var72 = 0.056781266;
            }
        } else {
            if (input[5] >= -0.009117) {
                if (input[5] >= 0.2074175) {
                    var72 = -0.042697426;
                } else {
                    var72 = 0.04071123;
                }
            } else {
                if (input[4] >= 0.013851499) {
                    var72 = -0.084169716;
                } else {
                    var72 = -0.0038181192;
                }
            }
        }
    } else {
        if (input[2] >= 8.572523) {
            if (input[2] >= 10.103839) {
                var72 = -0.020850642;
            } else {
                if (input[1] >= 1.6539855) {
                    var72 = -0.0148862135;
                } else {
                    var72 = 0.108603746;
                }
            }
        } else {
            var72 = -0.039109778;
        }
    }
    double var73;
    if (input[1] >= 0.40618002) {
        if (input[3] >= -0.3084715) {
            if (input[1] >= 0.6613995) {
                if (input[3] >= -0.075501) {
                    if (input[0] >= -0.7667805) {
                        if (input[3] >= 0.032702997) {
                            if (input[2] >= 9.366098) {
                                if (input[1] >= 1.7263601) {
                                    var73 = -0.08360596;
                                } else {
                                    var73 = 0.00028152828;
                                }
                            } else {
                                var73 = 0.013464688;
                            }
                        } else {
                            if (input[2] >= 9.454115) {
                                var73 = 0.07612532;
                            } else {
                                var73 = -0.010055973;
                            }
                        }
                    } else {
                        var73 = 0.04513546;
                    }
                } else {
                    if (input[4] >= -0.14124599) {
                        var73 = -0.006739516;
                    } else {
                        var73 = -0.06673997;
                    }
                }
            } else {
                var73 = -0.053935397;
            }
        } else {
            var73 = 0.05360792;
        }
    } else {
        var73 = 0.029821368;
    }
    double var74;
    if (input[1] >= 1.9770141) {
        if (input[1] >= 2.399585) {
            var74 = -0.0037622724;
        } else {
            var74 = 0.044582527;
        }
    } else {
        if (input[4] >= -0.4069725) {
            if (input[3] >= -0.3831045) {
                if (input[3] >= -0.12822449) {
                    if (input[5] >= -0.08272649) {
                        if (input[3] >= 0.024683502) {
                            if (input[3] >= 0.222131) {
                                var74 = -0.024939818;
                            } else {
                                var74 = 0.0569098;
                            }
                        } else {
                            if (input[4] >= 0.019371498) {
                                var74 = -0.006028756;
                            } else {
                                var74 = -0.05644279;
                            }
                        }
                    } else {
                        var74 = 0.03847324;
                    }
                } else {
                    var74 = 0.057941694;
                }
            } else {
                var74 = -0.042617574;
            }
        } else {
            var74 = -0.046674676;
        }
    }
    double var75;
    if (input[5] >= 0.085074) {
        if (input[4] >= 0.028634) {
            if (input[4] >= 0.1359655) {
                var75 = 0.024835361;
            } else {
                var75 = -0.05067985;
            }
        } else {
            if (input[1] >= 1.767674) {
                var75 = -0.013060198;
            } else {
                var75 = 0.073430024;
            }
        }
    } else {
        if (input[0] >= -0.25491953) {
            var75 = 0.025410347;
        } else {
            if (input[4] >= 0.008737) {
                if (input[4] >= 0.090607) {
                    var75 = -0.037191294;
                } else {
                    var75 = 0.066375904;
                }
            } else {
                if (input[5] >= -0.022146) {
                    if (input[0] >= -0.56253004) {
                        var75 = -0.09438848;
                    } else {
                        var75 = -0.0051069525;
                    }
                } else {
                    if (input[0] >= -0.80255604) {
                        var75 = 0.055759925;
                    } else {
                        var75 = -0.05707712;
                    }
                }
            }
        }
    }
    double var76;
    if (input[1] >= 1.5912659) {
        if (input[0] >= -0.76386154) {
            if (input[0] >= -0.6023475) {
                if (input[2] >= 9.368717) {
                    var76 = 0.075240456;
                } else {
                    var76 = -0.012342859;
                }
            } else {
                var76 = -0.055215545;
            }
        } else {
            var76 = 0.06907975;
        }
    } else {
        if (input[1] >= 1.4808705) {
            var76 = -0.057658862;
        } else {
            if (input[0] >= -0.815055) {
                if (input[0] >= -0.56440103) {
                    if (input[2] >= 9.715172) {
                        if (input[0] >= -0.3650155) {
                            var76 = -0.0040934;
                        } else {
                            var76 = -0.064540975;
                        }
                    } else {
                        var76 = 0.023975212;
                    }
                } else {
                    var76 = 0.081080556;
                }
            } else {
                if (input[5] >= 0.0134459995) {
                    var76 = -0.047243547;
                } else {
                    var76 = 0.004396036;
                }
            }
        }
    }
    double var77;
    if (input[4] >= 0.0939405) {
        if (input[3] >= 0.260578) {
            var77 = -0.025528798;
        } else {
            if (input[1] >= 1.660497) {
                var77 = 0.012839905;
            } else {
                var77 = 0.0550901;
            }
        }
    } else {
        if (input[0] >= -0.93143797) {
            if (input[3] >= -0.080745) {
                if (input[4] >= -0.115644) {
                    if (input[2] >= 10.037527) {
                        var77 = -0.0560445;
                    } else {
                        if (input[5] >= 0.0057234997) {
                            if (input[5] >= 0.036723003) {
                                var77 = 0.004746169;
                            } else {
                                var77 = -0.05032883;
                            }
                        } else {
                            var77 = 0.056864426;
                        }
                    }
                } else {
                    var77 = 0.04374143;
                }
            } else {
                if (input[3] >= -0.303054) {
                    var77 = -0.062183987;
                } else {
                    var77 = 0.0012055684;
                }
            }
        } else {
            var77 = 0.029025309;
        }
    }
    double var78;
    if (input[1] >= 1.5912659) {
        if (input[3] >= -0.29653698) {
            if (input[5] >= 0.189115) {
                var78 = 0.07553395;
            } else {
                if (input[5] >= -0.0499715) {
                    if (input[3] >= 0.039359003) {
                        var78 = -0.058097858;
                    } else {
                        var78 = 0.020421546;
                    }
                } else {
                    var78 = 0.04539014;
                }
            }
        } else {
            var78 = -0.031723402;
        }
    } else {
        if (input[1] >= 1.3079054) {
            if (input[5] >= -0.034206003) {
                var78 = 0.019219197;
            } else {
                var78 = -0.08511105;
            }
        } else {
            if (input[2] >= 10.2684965) {
                if (input[2] >= 11.322155) {
                    var78 = 0.004957853;
                } else {
                    var78 = -0.051550455;
                }
            } else {
                if (input[4] >= -0.017268) {
                    if (input[1] >= 0.8846605) {
                        var78 = 0.027931735;
                    } else {
                        var78 = -0.028115897;
                    }
                } else {
                    var78 = 0.061356485;
                }
            }
        }
    }
    double var79;
    if (input[2] >= 9.856777) {
        if (input[0] >= -1.1890526) {
            if (input[0] >= -0.4872365) {
                var79 = 0.0004841243;
            } else {
                var79 = 0.06183563;
            }
        } else {
            var79 = -0.02927309;
        }
    } else {
        if (input[2] >= 9.649159) {
            if (input[0] >= -0.6311625) {
                var79 = -0.06613755;
            } else {
                var79 = 0.00515979;
            }
        } else {
            if (input[4] >= -0.079881504) {
                if (input[4] >= 0.0908125) {
                    var79 = 0.021515602;
                } else {
                    if (input[5] >= 0.030269) {
                        var79 = 0.015587274;
                    } else {
                        if (input[3] >= -0.0033275) {
                            var79 = -0.013645763;
                        } else {
                            var79 = -0.055734284;
                        }
                    }
                }
            } else {
                var79 = 0.05581681;
            }
        }
    }
    double var80;
    if (input[3] >= 0.108812496) {
        if (input[4] >= -0.0325885) {
            if (input[4] >= 0.238921) {
                var80 = -0.044701032;
            } else {
                var80 = 0.06552337;
            }
        } else {
            var80 = -0.04737936;
        }
    } else {
        if (input[0] >= 0.202304) {
            var80 = -0.035984617;
        } else {
            if (input[3] >= -0.0191905) {
                if (input[5] >= 0.0145155005) {
                    var80 = 0.073051475;
                } else {
                    var80 = 0.01127892;
                }
            } else {
                if (input[3] >= -0.04065) {
                    var80 = -0.050649554;
                } else {
                    if (input[4] >= -0.15768349) {
                        if (input[4] >= 0.029023498) {
                            var80 = -0.0020169483;
                        } else {
                            var80 = 0.0760087;
                        }
                    } else {
                        var80 = -0.029674878;
                    }
                }
            }
        }
    }
    double var81;
    if (input[0] >= 0.032257497) {
        var81 = 0.032480713;
    } else {
        if (input[0] >= -0.273556) {
            if (input[3] >= 0.0225455) {
                var81 = -0.055736568;
            } else {
                var81 = -0.002274216;
            }
        } else {
            if (input[4] >= -0.0325885) {
                if (input[3] >= -0.035019003) {
                    if (input[4] >= 0.17975199) {
                        var81 = -0.019882347;
                    } else {
                        if (input[2] >= 9.65395) {
                            var81 = 0.11962591;
                        } else {
                            var81 = 0.00028231443;
                        }
                    }
                } else {
                    if (input[0] >= -0.75023997) {
                        var81 = 0.030817706;
                    } else {
                        var81 = -0.054767564;
                    }
                }
            } else {
                if (input[4] >= -0.296119) {
                    if (input[1] >= 1.2203369) {
                        if (input[1] >= 1.555266) {
                            var81 = -0.011240476;
                        } else {
                            var81 = -0.086798266;
                        }
                    } else {
                        var81 = 0.0066608484;
                    }
                } else {
                    var81 = 0.0432382;
                }
            }
        }
    }
    double var82;
    if (input[4] >= 0.0939405) {
        if (input[3] >= 0.032518) {
            var82 = -0.0069409767;
        } else {
            var82 = 0.0453213;
        }
    } else {
        if (input[4] >= 0.026313) {
            if (input[5] >= 0.017677) {
                var82 = -0.05792947;
            } else {
                var82 = -0.0026977449;
            }
        } else {
            if (input[2] >= 9.653201) {
                if (input[2] >= 9.764494) {
                    if (input[1] >= 0.6282435) {
                        if (input[4] >= -0.049912497) {
                            var82 = -0.0013964488;
                        } else {
                            var82 = 0.06085392;
                        }
                    } else {
                        var82 = -0.03356735;
                    }
                } else {
                    var82 = -0.062485788;
                }
            } else {
                if (input[0] >= -0.554971) {
                    var82 = 0.075007595;
                } else {
                    if (input[3] >= -0.009931499) {
                        var82 = -0.028196769;
                    } else {
                        var82 = 0.00833093;
                    }
                }
            }
        }
    }
    double var83;
    if (input[1] >= 0.40618002) {
        if (input[3] >= -0.3084715) {
            if (input[4] >= 0.093963996) {
                if (input[4] >= 0.245262) {
                    var83 = -0.010926121;
                } else {
                    var83 = 0.04285664;
                }
            } else {
                if (input[3] >= 0.2452455) {
                    var83 = 0.027502956;
                } else {
                    if (input[4] >= -0.042124502) {
                        if (input[1] >= 1.372571) {
                            if (input[2] >= 8.9215975) {
                                var83 = 0.023257215;
                            } else {
                                var83 = -0.051566366;
                            }
                        } else {
                            if (input[5] >= 0.0057695) {
                                var83 = -0.07812001;
                            } else {
                                var83 = -0.015505499;
                            }
                        }
                    } else {
                        if (input[5] >= 0.0516655) {
                            var83 = -0.03492301;
                        } else {
                            var83 = 0.035609026;
                        }
                    }
                }
            }
        } else {
            var83 = 0.04380724;
        }
    } else {
        var83 = 0.03298897;
    }
    double var84;
    if (input[3] >= -0.296566) {
        if (input[1] >= 2.1879249) {
            var84 = 0.049971517;
        } else {
            if (input[3] >= -0.0112945) {
                if (input[3] >= 0.0019655) {
                    if (input[1] >= 1.7263601) {
                        var84 = -0.0394486;
                    } else {
                        if (input[2] >= 9.768237) {
                            var84 = 0.056066386;
                        } else {
                            if (input[4] >= -0.007413) {
                                var84 = 0.0052047023;
                            } else {
                                var84 = -0.033485692;
                            }
                        }
                    }
                } else {
                    var84 = -0.05727804;
                }
            } else {
                if (input[3] >= -0.075316) {
                    var84 = 0.05476095;
                } else {
                    if (input[3] >= -0.129136) {
                        var84 = -0.050666895;
                    } else {
                        var84 = 0.029156668;
                    }
                }
            }
        }
    } else {
        if (input[4] >= -0.090918005) {
            var84 = -0.0081258835;
        } else {
            var84 = -0.035050582;
        }
    }
    double var85;
    if (input[2] >= 9.355395) {
        if (input[2] >= 9.534199) {
            if (input[1] >= 1.2263995) {
                if (input[4] >= -0.03264) {
                    var85 = 0.07254492;
                } else {
                    var85 = -0.027374856;
                }
            } else {
                if (input[1] >= 1.0318794) {
                    var85 = -0.062431134;
                } else {
                    if (input[2] >= 10.27905) {
                        if (input[4] >= -0.055628) {
                            var85 = 0.01192273;
                        } else {
                            var85 = -0.04414475;
                        }
                    } else {
                        var85 = 0.04486494;
                    }
                }
            }
        } else {
            var85 = -0.0506755;
        }
    } else {
        if (input[4] >= -0.074526) {
            if (input[5] >= 0.0300265) {
                var85 = 0.042180136;
            } else {
                if (input[0] >= -0.74455154) {
                    var85 = 0.004879202;
                } else {
                    var85 = -0.051142108;
                }
            }
        } else {
            var85 = 0.048032578;
        }
    }
    double var86;
    if (input[2] >= 9.021066) {
        if (input[3] >= -0.3831615) {
            if (input[3] >= 0.0142645) {
                if (input[2] >= 9.856777) {
                    var86 = 0.016657561;
                } else {
                    if (input[3] >= 0.2078555) {
                        var86 = 0.011570969;
                    } else {
                        var86 = -0.070981845;
                    }
                }
            } else {
                if (input[1] >= 1.1645036) {
                    if (input[3] >= -0.097849) {
                        var86 = 0.09008628;
                    } else {
                        var86 = 0.00026256862;
                    }
                } else {
                    if (input[1] >= 0.824261) {
                        var86 = -0.05634846;
                    } else {
                        var86 = 0.034936465;
                    }
                }
            }
        } else {
            var86 = -0.043386012;
        }
    } else {
        if (input[0] >= -0.2706375) {
            var86 = -0.016601374;
        } else {
            var86 = 0.04627431;
        }
    }
    double var87;
    if (input[2] >= 9.7496) {
        if (input[2] >= 9.960512) {
            if (input[1] >= 0.962199) {
                var87 = 0.044619016;
            } else {
                if (input[2] >= 10.791883) {
                    var87 = 0.002964103;
                } else {
                    var87 = -0.04190719;
                }
            }
        } else {
            if (input[1] >= 1.4061755) {
                var87 = -0.066850394;
            } else {
                var87 = -0.0021867799;
            }
        }
    } else {
        if (input[4] >= -0.1884615) {
            if (input[5] >= 0.0300265) {
                if (input[3] >= 0.108669) {
                    var87 = -0.012909453;
                } else {
                    var87 = 0.052075375;
                }
            } else {
                if (input[0] >= -0.47241747) {
                    var87 = 0.020276561;
                } else {
                    if (input[4] >= 0.008745) {
                        var87 = 0.013943874;
                    } else {
                        var87 = -0.07112633;
                    }
                }
            }
        } else {
            var87 = 0.048934348;
        }
    }
    double var88;
    if (input[1] >= 0.40618002) {
        if (input[3] >= -0.3084715) {
            if (input[1] >= 0.6613995) {
                if (input[3] >= -0.0034765) {
                    if (input[0] >= -0.7667805) {
                        if (input[4] >= 0.179801) {
                            var88 = -0.05314964;
                        } else {
                            if (input[5] >= -0.0040800003) {
                                if (input[5] >= 0.060047) {
                                    var88 = 0.008752455;
                                } else {
                                    var88 = -0.024008965;
                                }
                            } else {
                                var88 = 0.055717867;
                            }
                        }
                    } else {
                        var88 = 0.06618181;
                    }
                } else {
                    if (input[1] >= 1.3308825) {
                        if (input[2] >= 8.557779) {
                            var88 = -0.0039247093;
                        } else {
                            var88 = -0.075830005;
                        }
                    } else {
                        var88 = 0.008463866;
                    }
                }
            } else {
                var88 = -0.049240522;
            }
        } else {
            var88 = 0.046210904;
        }
    } else {
        var88 = 0.029307086;
    }
    double var89;
    if (input[2] >= 9.649159) {
        if (input[4] >= -0.34490752) {
            if (input[1] >= 1.2255759) {
                if (input[5] >= 0.076563) {
                    var89 = -0.025363961;
                } else {
                    var89 = 0.06463171;
                }
            } else {
                if (input[3] >= -0.058870003) {
                    if (input[3] >= 0.035411) {
                        var89 = 0.020753112;
                    } else {
                        var89 = -0.06699521;
                    }
                } else {
                    var89 = 0.024479587;
                }
            }
        } else {
            var89 = -0.049284365;
        }
    } else {
        if (input[1] >= 1.2528945) {
            if (input[0] >= -0.7803275) {
                if (input[0] >= -0.554971) {
                    if (input[4] >= 0.027625) {
                        var89 = -0.021833757;
                    } else {
                        var89 = 0.038955785;
                    }
                } else {
                    var89 = -0.051991705;
                }
            } else {
                var89 = 0.03981674;
            }
        } else {
            var89 = 0.059726726;
        }
    }
    double var90;
    if (input[3] >= -0.296566) {
        if (input[2] >= 9.649159) {
            if (input[0] >= -0.710273) {
                if (input[0] >= -0.5565425) {
                    if (input[5] >= 0.0131575) {
                        var90 = 0.022975784;
                    } else {
                        var90 = -0.053613015;
                    }
                } else {
                    var90 = 0.068228155;
                }
            } else {
                if (input[0] >= -0.931064) {
                    var90 = -0.07217887;
                } else {
                    var90 = 0.016038576;
                }
            }
        } else {
            if (input[2] >= 8.572523) {
                if (input[3] >= 0.021088) {
                    var90 = -0.003854472;
                } else {
                    var90 = 0.08658698;
                }
            } else {
                if (input[2] >= 8.00378) {
                    var90 = -0.041806962;
                } else {
                    var90 = 0.035365816;
                }
            }
        }
    } else {
        var90 = -0.025007779;
    }
    double var91;
    if (input[0] >= -0.1338215) {
        var91 = 0.025462147;
    } else {
        if (input[0] >= -0.273556) {
            var91 = -0.04386843;
        } else {
            if (input[2] >= 8.916359) {
                if (input[0] >= -0.6384225) {
                    if (input[2] >= 9.850716) {
                        var91 = 0.021794714;
                    } else {
                        if (input[1] >= 1.334101) {
                            var91 = -0.0055705677;
                        } else {
                            var91 = -0.0785336;
                        }
                    }
                } else {
                    if (input[3] >= 0.2347025) {
                        var91 = -0.029642526;
                    } else {
                        if (input[0] >= -1.1890526) {
                            if (input[2] >= 9.724379) {
                                var91 = 0.09276097;
                            } else {
                                var91 = -0.008581747;
                            }
                        } else {
                            var91 = -0.020851297;
                        }
                    }
                }
            } else {
                var91 = 0.04586192;
            }
        }
    }
    double var92;
    if (input[0] >= -0.420326) {
        if (input[5] >= 0.024420999) {
            var92 = 0.04110265;
        } else {
            if (input[5] >= -0.030785) {
                var92 = -0.036880996;
            } else {
                var92 = 0.018773818;
            }
        }
    } else {
        if (input[5] >= -0.1577555) {
            if (input[5] >= 0.2795645) {
                var92 = 0.022505924;
            } else {
                if (input[1] >= 1.43065) {
                    if (input[1] >= 1.8111584) {
                        var92 = -0.0065245386;
                    } else {
                        var92 = -0.07049061;
                    }
                } else {
                    if (input[5] >= 0.0480805) {
                        var92 = -0.03876741;
                    } else {
                        var92 = 0.038046394;
                    }
                }
            }
        } else {
            var92 = 0.027739031;
        }
    }
    double var93;
    if (input[4] >= -0.2958085) {
        if (input[2] >= 10.3126545) {
            if (input[2] >= 12.049269) {
                var93 = -0.026287317;
            } else {
                var93 = 0.062397428;
            }
        } else {
            if (input[4] >= 0.2599515) {
                var93 = 0.029173857;
            } else {
                if (input[3] >= -0.080849) {
                    if (input[2] >= 9.920171) {
                        var93 = -0.059335876;
                    } else {
                        if (input[3] >= 0.108787) {
                            var93 = -0.016957985;
                        } else {
                            if (input[2] >= 8.57432) {
                                var93 = 0.06969483;
                            } else {
                                var93 = -0.01907953;
                            }
                        }
                    }
                } else {
                    if (input[0] >= -0.438214) {
                        var93 = -0.07246829;
                    } else {
                        var93 = -0.013779729;
                    }
                }
            }
        }
    } else {
        var93 = 0.027540153;
    }
    double var94;
    if (input[2] >= 9.021066) {
        if (input[2] >= 9.24717) {
            if (input[2] >= 9.649159) {
                if (input[4] >= -0.34490752) {
                    if (input[1] >= 1.2255759) {
                        if (input[5] >= 0.076563) {
                            var94 = -0.022003908;
                        } else {
                            var94 = 0.06013587;
                        }
                    } else {
                        if (input[3] >= -0.058870003) {
                            if (input[3] >= 0.0021385) {
                                var94 = 0.009825613;
                            } else {
                                var94 = -0.07443939;
                            }
                        } else {
                            var94 = 0.024667602;
                        }
                    }
                } else {
                    var94 = -0.04365276;
                }
            } else {
                var94 = 0.034618996;
            }
        } else {
            var94 = -0.0430461;
        }
    } else {
        if (input[5] >= -0.04699) {
            var94 = 0.039193124;
        } else {
            var94 = -0.01889402;
        }
    }
    double var95;
    if (input[4] >= -0.2958085) {
        if (input[2] >= 10.3126545) {
            if (input[0] >= -0.902324) {
                var95 = 0.05353694;
            } else {
                var95 = -0.019722197;
            }
        } else {
            if (input[4] >= 0.2678265) {
                var95 = 0.023514163;
            } else {
                if (input[1] >= 1.2531195) {
                    if (input[5] >= 0.15826151) {
                        var95 = -0.06653851;
                    } else {
                        if (input[4] >= 0.090607) {
                            var95 = -0.048237666;
                        } else {
                            if (input[4] >= -0.0065035) {
                                var95 = 0.0510207;
                            } else {
                                var95 = -0.021279119;
                            }
                        }
                    }
                } else {
                    if (input[3] >= -0.0172275) {
                        var95 = 0.041822076;
                    } else {
                        var95 = -0.027280765;
                    }
                }
            }
        }
    } else {
        var95 = 0.027800623;
    }
    double var96;
    if (input[2] >= 9.346714) {
        if (input[2] >= 9.534199) {
            if (input[5] >= -0.008517) {
                if (input[2] >= 9.920095) {
                    if (input[2] >= 10.356813) {
                        var96 = 0.018936742;
                    } else {
                        var96 = -0.03781693;
                    }
                } else {
                    var96 = 0.049112987;
                }
            } else {
                if (input[2] >= 9.850716) {
                    var96 = 0.0077501163;
                } else {
                    var96 = -0.04557044;
                }
            }
        } else {
            var96 = -0.04344107;
        }
    } else {
        if (input[0] >= -0.7506145) {
            if (input[0] >= -0.2706375) {
                var96 = -0.008559579;
            } else {
                var96 = 0.063918084;
            }
        } else {
            var96 = -0.019749517;
        }
    }
    double var97;
    if (input[1] >= 1.5912659) {
        if (input[1] >= 1.795217) {
            if (input[0] >= -0.68370354) {
                if (input[1] >= 1.9770141) {
                    var97 = 0.009554151;
                } else {
                    var97 = -0.05854001;
                }
            } else {
                var97 = 0.033172254;
            }
        } else {
            var97 = 0.050439645;
        }
    } else {
        if (input[1] >= 1.4808705) {
            var97 = -0.051082965;
        } else {
            if (input[0] >= -0.815055) {
                if (input[0] >= -0.56440103) {
                    if (input[4] >= -0.0250385) {
                        if (input[3] >= 0.009953) {
                            var97 = -0.053101454;
                        } else {
                            var97 = 0.0011499742;
                        }
                    } else {
                        var97 = 0.032332595;
                    }
                } else {
                    var97 = 0.06359381;
                }
            } else {
                if (input[5] >= 0.0134459995) {
                    var97 = -0.0436849;
                } else {
                    var97 = 0.0059405887;
                }
            }
        }
    }
    double var98;
    if (input[0] >= -0.420326) {
        if (input[0] >= -0.1401085) {
            if (input[0] >= 0.053514) {
                var98 = 0.01578401;
            } else {
                var98 = -0.03812603;
            }
        } else {
            var98 = 0.0424694;
        }
    } else {
        if (input[0] >= -0.6384225) {
            if (input[0] >= -0.589399) {
                if (input[5] >= 0.024094) {
                    var98 = -0.04693463;
                } else {
                    var98 = 0.038629856;
                }
            } else {
                var98 = -0.05093738;
            }
        } else {
            if (input[5] >= 0.2016745) {
                var98 = 0.044408597;
            } else {
                if (input[1] >= 1.551224) {
                    if (input[1] >= 1.7960405) {
                        var98 = 0.0053964187;
                    } else {
                        var98 = -0.0542286;
                    }
                } else {
                    if (input[5] >= 0.0057695) {
                        var98 = -0.019142319;
                    } else {
                        var98 = 0.0425745;
                    }
                }
            }
        }
    }
    double var99;
    if (input[2] >= 9.649159) {
        if (input[4] >= -0.037582003) {
            if (input[1] >= 1.334101) {
                var99 = 0.051438544;
            } else {
                if (input[0] >= -0.65878) {
                    var99 = -0.048125353;
                } else {
                    var99 = 0.029797664;
                }
            }
        } else {
            if (input[4] >= -0.115644) {
                var99 = -0.056221142;
            } else {
                if (input[4] >= -0.3413325) {
                    var99 = 0.027030613;
                } else {
                    var99 = -0.034425292;
                }
            }
        }
    } else {
        if (input[4] >= -0.079881504) {
            if (input[3] >= 0.041367) {
                var99 = 0.02731847;
            } else {
                if (input[3] >= -0.04065) {
                    var99 = -0.049592894;
                } else {
                    var99 = 0.013952877;
                }
            }
        } else {
            var99 = 0.049312584;
        }
    }
    double var100;
    if (input[4] >= -0.2958085) {
        if (input[4] >= -0.157865) {
            if (input[5] >= -0.116819) {
                if (input[4] >= -0.042124502) {
                    if (input[1] >= 1.372571) {
                        if (input[5] >= 0.053319998) {
                            var100 = 0.05255662;
                        } else {
                            var100 = -0.003055345;
                        }
                    } else {
                        if (input[5] >= 0.0063300002) {
                            if (input[1] >= 1.0318794) {
                                var100 = -0.061622348;
                            } else {
                                var100 = -0.00024181297;
                            }
                        } else {
                            var100 = 0.014450016;
                        }
                    }
                } else {
                    var100 = 0.060652822;
                }
            } else {
                if (input[4] >= 0.038896002) {
                    var100 = 0.0043377397;
                } else {
                    var100 = -0.049655925;
                }
            }
        } else {
            var100 = -0.03770913;
        }
    } else {
        var100 = 0.026747724;
    }
    double var101;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.207641) {
            var101 = 0.035799164;
        } else {
            if (input[2] >= 9.65148) {
                if (input[0] >= -0.710273) {
                    if (input[0] >= -0.4629125) {
                        var101 = -0.032898664;
                    } else {
                        var101 = 0.04095402;
                    }
                } else {
                    if (input[0] >= -0.903072) {
                        var101 = -0.074127115;
                    } else {
                        var101 = -0.0039627296;
                    }
                }
            } else {
                if (input[2] >= 8.573647) {
                    var101 = 0.055999953;
                } else {
                    var101 = -0.021329366;
                }
            }
        }
    } else {
        var101 = -0.02224569;
    }
    double var102;
    if (input[0] >= -0.3921095) {
        if (input[2] >= 8.129595) {
            if (input[2] >= 10.280546) {
                var102 = -0.007970578;
            } else {
                var102 = 0.05518492;
            }
        } else {
            var102 = -0.015338957;
        }
    } else {
        if (input[2] >= 8.916359) {
            if (input[0] >= -0.6384225) {
                if (input[2] >= 9.8338) {
                    var102 = 0.002479196;
                } else {
                    var102 = -0.060348596;
                }
            } else {
                if (input[3] >= 0.1086545) {
                    var102 = -0.019792574;
                } else {
                    if (input[4] >= 0.026313) {
                        var102 = -0.02332456;
                    } else {
                        var102 = 0.044842534;
                    }
                }
            }
        } else {
            var102 = 0.027628131;
        }
    }
    double var103;
    if (input[5] >= -0.1572775) {
        if (input[5] >= -0.0085285) {
            if (input[1] >= 1.780697) {
                if (input[2] >= 9.366098) {
                    var103 = -0.04394933;
                } else {
                    var103 = 0.010322884;
                }
            } else {
                if (input[0] >= -1.1915225) {
                    if (input[5] >= 0.18711999) {
                        var103 = -0.016845245;
                    } else {
                        if (input[0] >= -0.49883747) {
                            var103 = 0.017377177;
                        } else {
                            var103 = 0.1006333;
                        }
                    }
                } else {
                    var103 = -0.037580363;
                }
            }
        } else {
            if (input[3] >= 0.0019655) {
                var103 = 0.016573252;
            } else {
                var103 = -0.04969929;
            }
        }
    } else {
        if (input[5] >= -0.3228015) {
            var103 = 0.03822196;
        } else {
            var103 = -0.0071423235;
        }
    }
    double var104;
    if (input[4] >= -0.2958085) {
        if (input[2] >= 10.3126545) {
            if (input[2] >= 11.920237) {
                var104 = -0.016654802;
            } else {
                var104 = 0.051266037;
            }
        } else {
            if (input[0] >= -0.1338215) {
                var104 = 0.024974212;
            } else {
                if (input[3] >= -0.165258) {
                    if (input[3] >= 0.2452455) {
                        var104 = 0.014860129;
                    } else {
                        if (input[1] >= 1.552796) {
                            if (input[5] >= 0.0288875) {
                                var104 = -0.03193593;
                            } else {
                                var104 = 0.02893219;
                            }
                        } else {
                            var104 = -0.060446948;
                        }
                    }
                } else {
                    var104 = 0.023540096;
                }
            }
        }
    } else {
        var104 = 0.024142826;
    }
    double var105;
    if (input[4] >= -0.4069725) {
        if (input[4] >= -0.211275) {
            if (input[5] >= -0.116819) {
                if (input[3] >= -0.0882625) {
                    if (input[3] >= 0.0495895) {
                        if (input[5] >= 0.1703565) {
                            var105 = -0.017374774;
                        } else {
                            var105 = 0.057327855;
                        }
                    } else {
                        if (input[2] >= 9.906699) {
                            var105 = -0.053866018;
                        } else {
                            if (input[1] >= 1.5388) {
                                var105 = -0.030448152;
                            } else {
                                var105 = 0.045023456;
                            }
                        }
                    }
                } else {
                    var105 = 0.045558624;
                }
            } else {
                if (input[4] >= 0.038896002) {
                    var105 = 0.0024409457;
                } else {
                    var105 = -0.04335562;
                }
            }
        } else {
            var105 = 0.041698713;
        }
    } else {
        var105 = -0.024427442;
    }
    double var106;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.207641) {
            var106 = 0.039599806;
        } else {
            if (input[4] >= 0.044221) {
                if (input[2] >= 9.745708) {
                    var106 = -0.016329573;
                } else {
                    var106 = 0.06221955;
                }
            } else {
                if (input[3] >= 0.022609498) {
                    if (input[4] >= -0.115525) {
                        var106 = 0.041408625;
                    } else {
                        var106 = -0.02224597;
                    }
                } else {
                    if (input[4] >= -0.017133001) {
                        if (input[5] >= -0.0072505) {
                            var106 = -0.01786235;
                        } else {
                            var106 = -0.068076134;
                        }
                    } else {
                        if (input[5] >= 0.013346501) {
                            var106 = -0.040603857;
                        } else {
                            var106 = 0.048520908;
                        }
                    }
                }
            }
        }
    } else {
        var106 = -0.022274224;
    }
    double var107;
    if (input[2] >= 9.960512) {
        if (input[0] >= -0.902324) {
            if (input[5] >= 0.003188) {
                var107 = 0.062413868;
            } else {
                var107 = 0.0029538048;
            }
        } else {
            var107 = -0.02503735;
        }
    } else {
        if (input[0] >= -0.779654) {
            if (input[1] >= 1.7111671) {
                if (input[0] >= -0.56163204) {
                    var107 = 0.0052428385;
                } else {
                    var107 = -0.08284508;
                }
            } else {
                if (input[3] >= 0.0326365) {
                    var107 = -0.03221327;
                } else {
                    if (input[1] >= 1.1588155) {
                        var107 = 0.07056167;
                    } else {
                        var107 = -0.0076646176;
                    }
                }
            }
        } else {
            var107 = 0.03329801;
        }
    }
    double var108;
    if (input[5] >= -0.1572775) {
        if (input[0] >= -0.1401085) {
            var108 = -0.028075589;
        } else {
            if (input[0] >= -0.420326) {
                var108 = 0.059491053;
            } else {
                if (input[2] >= 9.693466) {
                    if (input[3] >= 0.001928) {
                        var108 = 0.05077969;
                    } else {
                        if (input[3] >= -0.086683005) {
                            var108 = -0.03695934;
                        } else {
                            var108 = 0.012952666;
                        }
                    }
                } else {
                    if (input[1] >= 1.7963395) {
                        var108 = 0.017908227;
                    } else {
                        if (input[5] >= -0.0005685) {
                            var108 = -0.021005515;
                        } else {
                            var108 = -0.07479967;
                        }
                    }
                }
            }
        }
    } else {
        if (input[5] >= -0.32391) {
            var108 = 0.033771686;
        } else {
            var108 = 0.0003783933;
        }
    }
    double var109;
    if (input[2] >= 7.8409944) {
        if (input[1] >= 1.9521655) {
            if (input[2] >= 9.367221) {
                var109 = -0.0028698393;
            } else {
                var109 = -0.04638354;
            }
        } else {
            if (input[1] >= 1.5912659) {
                var109 = 0.0451662;
            } else {
                if (input[1] >= 1.4310989) {
                    var109 = -0.039892636;
                } else {
                    if (input[4] >= -0.017169502) {
                        if (input[4] >= 0.0149365) {
                            if (input[4] >= 0.185146) {
                                var109 = -0.03481161;
                            } else {
                                var109 = 0.045470137;
                            }
                        } else {
                            var109 = -0.04527708;
                        }
                    } else {
                        if (input[0] >= -0.738639) {
                            var109 = 0.04677609;
                        } else {
                            var109 = -0.012468218;
                        }
                    }
                }
            }
        }
    } else {
        var109 = 0.026464492;
    }
    double var110;
    if (input[0] >= -1.2016265) {
        if (input[3] >= -0.3084715) {
            if (input[3] >= -0.2100495) {
                if (input[0] >= -0.6831795) {
                    if (input[3] >= -0.029260501) {
                        if (input[5] >= -0.0292455) {
                            if (input[5] >= 0.014432499) {
                                if (input[4] >= 0.018428002) {
                                    var110 = -0.0342432;
                                } else {
                                    var110 = 0.022588413;
                                }
                            } else {
                                var110 = -0.05518742;
                            }
                        } else {
                            var110 = 0.041824553;
                        }
                    } else {
                        var110 = 0.073410675;
                    }
                } else {
                    if (input[5] >= -0.032108) {
                        var110 = 0.0018428034;
                    } else {
                        var110 = -0.051412668;
                    }
                }
            } else {
                var110 = -0.04912646;
            }
        } else {
            var110 = 0.026669076;
        }
    } else {
        var110 = 0.024572697;
    }
    double var111;
    if (input[0] >= -0.6384225) {
        if (input[2] >= 9.960512) {
            var111 = 0.021819904;
        } else {
            if (input[0] >= -0.1338215) {
                var111 = 0.033078305;
            } else {
                if (input[1] >= 1.5525715) {
                    var111 = 0.0040183747;
                } else {
                    if (input[2] >= 9.715172) {
                        var111 = -0.08005139;
                    } else {
                        var111 = -0.020964613;
                    }
                }
            }
        }
    } else {
        if (input[0] >= -0.710273) {
            var111 = 0.037970483;
        } else {
            if (input[3] >= 0.16330299) {
                var111 = -0.037582293;
            } else {
                if (input[4] >= -0.0074744998) {
                    var111 = -0.01093954;
                } else {
                    var111 = 0.040096737;
                }
            }
        }
    }
    double var112;
    if (input[1] >= 1.8271755) {
        if (input[0] >= -0.65039754) {
            if (input[4] >= -0.0285145) {
                var112 = 0.007923911;
            } else {
                var112 = -0.05913509;
            }
        } else {
            var112 = 0.02175928;
        }
    } else {
        if (input[0] >= -0.76625645) {
            if (input[1] >= 1.5760725) {
                var112 = 0.06278838;
            } else {
                if (input[0] >= -0.56440103) {
                    if (input[0] >= -0.3650155) {
                        var112 = 0.012040869;
                    } else {
                        var112 = -0.044218205;
                    }
                } else {
                    var112 = 0.041696962;
                }
            }
        } else {
            if (input[0] >= -1.2016265) {
                if (input[2] >= 9.6775255) {
                    var112 = -0.010558352;
                } else {
                    var112 = -0.045047402;
                }
            } else {
                var112 = 0.0166689;
            }
        }
    }
    double var113;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.7111671) {
            if (input[0] >= -0.5618565) {
                var113 = 0.0024869002;
            } else {
                var113 = -0.07451067;
            }
        } else {
            if (input[0] >= -0.56440103) {
                if (input[4] >= -0.0133925) {
                    if (input[0] >= -0.3650155) {
                        var113 = 0.006478899;
                    } else {
                        var113 = -0.043160688;
                    }
                } else {
                    var113 = 0.026650734;
                }
            } else {
                var113 = 0.05196063;
            }
        }
    } else {
        if (input[1] >= 0.9900415) {
            var113 = 0.044974197;
        } else {
            var113 = -0.022770215;
        }
    }
    double var114;
    if (input[0] >= -0.273556) {
        if (input[0] >= -0.1338215) {
            var114 = 0.008653006;
        } else {
            var114 = -0.0446031;
        }
    } else {
        if (input[4] >= -0.0325885) {
            if (input[3] >= -0.0191905) {
                if (input[4] >= 0.17419049) {
                    var114 = -0.012557947;
                } else {
                    var114 = 0.072099335;
                }
            } else {
                if (input[0] >= -0.8043525) {
                    var114 = 0.016268028;
                } else {
                    var114 = -0.04285565;
                }
            }
        } else {
            if (input[2] >= 9.65365) {
                if (input[2] >= 9.962907) {
                    var114 = 0.0022697777;
                } else {
                    var114 = -0.053792078;
                }
            } else {
                var114 = 0.020069199;
            }
        }
    }
    double var115;
    if (input[5] >= -0.1572775) {
        if (input[4] >= 0.0939405) {
            var115 = 0.023319101;
        } else {
            if (input[0] >= -0.14385101) {
                var115 = -0.04947905;
            } else {
                if (input[0] >= -0.6349045) {
                    if (input[2] >= 9.822498) {
                        var115 = -0.016282022;
                    } else {
                        var115 = 0.059348866;
                    }
                } else {
                    if (input[2] >= 9.689575) {
                        var115 = 0.008904067;
                    } else {
                        var115 = -0.046593435;
                    }
                }
            }
        }
    } else {
        var115 = 0.020398006;
    }
    double var116;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.7111671) {
            if (input[0] >= -0.5618565) {
                var116 = 0.0024516766;
            } else {
                var116 = -0.065081045;
            }
        } else {
            if (input[1] >= 1.361419) {
                var116 = 0.051110644;
            } else {
                if (input[0] >= -0.56073403) {
                    if (input[0] >= -0.2700385) {
                        var116 = 0.00738916;
                    } else {
                        var116 = -0.037734915;
                    }
                } else {
                    var116 = 0.03038353;
                }
            }
        }
    } else {
        if (input[1] >= 1.3133686) {
            var116 = 0.04633538;
        } else {
            var116 = -0.015586397;
        }
    }
    double var117;
    if (input[5] >= -0.1572775) {
        if (input[4] >= 0.0939405) {
            var117 = 0.021030366;
        } else {
            if (input[1] >= 0.628019) {
                if (input[4] >= 0.041665003) {
                    var117 = -0.06279836;
                } else {
                    if (input[4] >= -0.0064054998) {
                        var117 = 0.024443215;
                    } else {
                        if (input[3] >= -0.097872004) {
                            if (input[0] >= -0.675321) {
                                var117 = -0.009278132;
                            } else {
                                var117 = -0.054703332;
                            }
                        } else {
                            var117 = 0.024315538;
                        }
                    }
                }
            } else {
                var117 = 0.023187121;
            }
        }
    } else {
        var117 = 0.018707981;
    }
    double var118;
    if (input[1] >= 0.6613995) {
        if (input[3] >= -0.3084715) {
            if (input[3] >= 0.2452455) {
                var118 = 0.037362643;
            } else {
                if (input[5] >= 0.0117935) {
                    if (input[1] >= 1.8794914) {
                        var118 = -0.0028000986;
                    } else {
                        if (input[3] >= -0.0110695) {
                            var118 = -0.061381306;
                        } else {
                            var118 = -0.008126277;
                        }
                    }
                } else {
                    if (input[3] >= -0.026375) {
                        var118 = 0.050559826;
                    } else {
                        var118 = -0.027607786;
                    }
                }
            }
        } else {
            var118 = 0.047201745;
        }
    } else {
        if (input[1] >= 0.496368) {
            var118 = -0.05127762;
        } else {
            var118 = 0.017085051;
        }
    }
    double var119;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.207641) {
            var119 = 0.03856992;
        } else {
            if (input[4] >= 0.044221) {
                var119 = 0.027929623;
            } else {
                if (input[3] >= 0.022609498) {
                    if (input[4] >= -0.115525) {
                        var119 = 0.036162373;
                    } else {
                        var119 = -0.022532634;
                    }
                } else {
                    if (input[4] >= -0.0094145) {
                        if (input[0] >= -0.6062395) {
                            var119 = -0.058601778;
                        } else {
                            var119 = -0.015596638;
                        }
                    } else {
                        if (input[5] >= 0.013881) {
                            var119 = -0.035052355;
                        } else {
                            var119 = 0.031839572;
                        }
                    }
                }
            }
        }
    } else {
        var119 = -0.024648782;
    }
    double var120;
    if (input[3] >= 0.108812496) {
        if (input[1] >= 1.372571) {
            var120 = 0.009349787;
        } else {
            var120 = -0.037658427;
        }
    } else {
        if (input[1] >= 1.4310989) {
            if (input[1] >= 1.5912659) {
                if (input[4] >= -0.0377325) {
                    if (input[5] >= -0.0039505) {
                        var120 = 0.010057003;
                    } else {
                        var120 = -0.03431238;
                    }
                } else {
                    var120 = 0.044289365;
                }
            } else {
                var120 = -0.050151512;
            }
        } else {
            if (input[1] >= 1.1390564) {
                var120 = 0.06931857;
            } else {
                if (input[0] >= -0.57031405) {
                    var120 = -0.028157739;
                } else {
                    var120 = 0.026582258;
                }
            }
        }
    }
    double var121;
    if (input[2] >= 9.021066) {
        if (input[2] >= 9.24717) {
            if (input[1] >= 1.713487) {
                if (input[4] >= 0.0906135) {
                    var121 = -0.061499372;
                } else {
                    var121 = 0.019429963;
                }
            } else {
                if (input[4] >= -0.0774975) {
                    if (input[1] >= 1.1808945) {
                        var121 = 0.07546063;
                    } else {
                        if (input[3] >= 0.0021385) {
                            var121 = 0.03585391;
                        } else {
                            var121 = -0.027926954;
                        }
                    }
                } else {
                    if (input[5] >= -0.070695505) {
                        var121 = 0.024566667;
                    } else {
                        var121 = -0.055418413;
                    }
                }
            }
        } else {
            var121 = -0.042363603;
        }
    } else {
        if (input[0] >= -0.2706375) {
            var121 = -0.008249924;
        } else {
            var121 = 0.035464276;
        }
    }
    double var122;
    if (input[4] >= -0.40498102) {
        if (input[4] >= -0.211275) {
            if (input[2] >= 10.356064) {
                var122 = 0.030567441;
            } else {
                if (input[4] >= -0.0285145) {
                    if (input[1] >= 1.361419) {
                        if (input[3] >= -0.0858215) {
                            var122 = 0.03883188;
                        } else {
                            var122 = -0.015114483;
                        }
                    } else {
                        if (input[3] >= -0.0061459998) {
                            var122 = -0.044109594;
                        } else {
                            var122 = 0.022976581;
                        }
                    }
                } else {
                    if (input[2] >= 9.526939) {
                        var122 = -0.049314663;
                    } else {
                        var122 = -0.0044436688;
                    }
                }
            }
        } else {
            var122 = 0.034258455;
        }
    } else {
        var122 = -0.024296487;
    }
    double var123;
    if (input[5] >= -0.1572775) {
        if (input[1] >= 1.460438) {
            if (input[0] >= -0.734373) {
                if (input[0] >= -0.420326) {
                    var123 = 0.0026995812;
                } else {
                    if (input[3] >= 0.017478) {
                        var123 = -0.06155811;
                    } else {
                        var123 = -0.015265405;
                    }
                }
            } else {
                var123 = 0.015937902;
            }
        } else {
            if (input[0] >= -0.8422985) {
                if (input[2] >= 10.280546) {
                    var123 = -0.025714988;
                } else {
                    var123 = 0.05978949;
                }
            } else {
                var123 = -0.030225616;
            }
        }
    } else {
        var123 = 0.019408476;
    }
    double var124;
    if (input[3] >= -0.296566) {
        if (input[3] >= -0.04065) {
            if (input[5] >= 0.0850935) {
                if (input[5] >= 0.27717048) {
                    var124 = -0.011540464;
                } else {
                    var124 = 0.041079786;
                }
            } else {
                if (input[3] >= 0.0496305) {
                    if (input[4] >= -0.060822) {
                        var124 = 0.035083584;
                    } else {
                        var124 = -0.017245881;
                    }
                } else {
                    if (input[3] >= -0.0071305) {
                        if (input[5] >= 0.008911) {
                            var124 = -0.07040502;
                        } else {
                            var124 = -0.0054063974;
                        }
                    } else {
                        var124 = -0.0027298923;
                    }
                }
            }
        } else {
            if (input[2] >= 9.748627) {
                var124 = -0.01058932;
            } else {
                var124 = 0.05486865;
            }
        }
    } else {
        var124 = -0.020902632;
    }
    double var125;
    if (input[0] >= 0.032257497) {
        var125 = 0.023925414;
    } else {
        if (input[3] >= 0.108812496) {
            if (input[3] >= 0.1852735) {
                if (input[2] >= 9.740918) {
                    var125 = -0.0328791;
                } else {
                    var125 = 0.03004688;
                }
            } else {
                var125 = -0.05209385;
            }
        } else {
            if (input[3] >= 0.0008075) {
                var125 = 0.04594616;
            } else {
                if (input[4] >= -0.15768349) {
                    if (input[4] >= 0.0140815005) {
                        if (input[4] >= 0.0912895) {
                            var125 = 0.008921849;
                        } else {
                            var125 = -0.049370512;
                        }
                    } else {
                        var125 = 0.043755203;
                    }
                } else {
                    var125 = -0.038549066;
                }
            }
        }
    }
    double var126;
    if (input[4] >= -0.2958085) {
        if (input[2] >= 10.3126545) {
            var126 = 0.021616612;
        } else {
            if (input[0] >= -0.8274795) {
                if (input[0] >= -0.1338215) {
                    var126 = 0.01930859;
                } else {
                    if (input[3] >= -0.165307) {
                        if (input[5] >= 0.0288875) {
                            var126 = -0.064331;
                        } else {
                            if (input[3] >= 0.0333825) {
                                var126 = -0.04027958;
                            } else {
                                var126 = 0.026892455;
                            }
                        }
                    } else {
                        var126 = 0.013358691;
                    }
                }
            } else {
                var126 = 0.019062268;
            }
        }
    } else {
        var126 = 0.02284642;
    }
    double var127;
    if (input[3] >= 0.0018485) {
        if (input[4] >= 0.2362765) {
            var127 = -0.035450634;
        } else {
            if (input[4] >= 0.0139345005) {
                var127 = 0.066534355;
            } else {
                if (input[4] >= -0.115644) {
                    var127 = -0.022130884;
                } else {
                    var127 = 0.024243632;
                }
            }
        }
    } else {
        if (input[3] >= -0.010882501) {
            var127 = -0.04872324;
        } else {
            if (input[3] >= -0.075501) {
                var127 = 0.03533905;
            } else {
                if (input[2] >= 9.799372) {
                    var127 = 0.017456278;
                } else {
                    if (input[3] >= -0.2197775) {
                        var127 = -0.044786688;
                    } else {
                        var127 = 0.00028441145;
                    }
                }
            }
        }
    }
    double var128;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.207641) {
            var128 = 0.036865585;
        } else {
            if (input[4] >= 0.044221) {
                var128 = 0.023132572;
            } else {
                if (input[3] >= 0.022609498) {
                    if (input[5] >= -0.004102) {
                        var128 = -0.0051671313;
                    } else {
                        var128 = 0.023549898;
                    }
                } else {
                    if (input[4] >= -0.017133001) {
                        if (input[1] >= 1.2558135) {
                            var128 = -0.014824534;
                        } else {
                            var128 = -0.058077563;
                        }
                    } else {
                        var128 = 0.00080417737;
                    }
                }
            }
        }
    } else {
        var128 = -0.020244876;
    }
    double var129;
    if (input[4] >= 0.179801) {
        var129 = -0.017402258;
    } else {
        if (input[3] >= 0.0495895) {
            if (input[4] >= -0.0609165) {
                var129 = 0.06542737;
            } else {
                var129 = -0.013544777;
            }
        } else {
            if (input[1] >= 1.4310989) {
                if (input[0] >= -0.69148695) {
                    if (input[0] >= -0.47249252) {
                        var129 = -0.0042622057;
                    } else {
                        var129 = -0.06013385;
                    }
                } else {
                    var129 = 0.0042531895;
                }
            } else {
                if (input[0] >= -0.4379145) {
                    var129 = -0.020152327;
                } else {
                    if (input[0] >= -0.840652) {
                        var129 = 0.065247685;
                    } else {
                        var129 = -0.005102947;
                    }
                }
            }
        }
    }
    double var130;
    if (input[3] >= 0.108812496) {
        if (input[1] >= 1.2569361) {
            if (input[3] >= 0.2452455) {
                var130 = 0.0035991764;
            } else {
                var130 = -0.046799436;
            }
        } else {
            var130 = 0.015714984;
        }
    } else {
        if (input[3] >= 0.0018485) {
            var130 = 0.029814525;
        } else {
            if (input[3] >= -0.04065) {
                if (input[5] >= -0.002223) {
                    var130 = 0.009076902;
                } else {
                    var130 = -0.05409297;
                }
            } else {
                if (input[5] >= 0.1582765) {
                    var130 = -0.01883336;
                } else {
                    if (input[5] >= -0.1299845) {
                        var130 = 0.047186524;
                    } else {
                        var130 = -0.0073156473;
                    }
                }
            }
        }
    }
    double var131;
    if (input[5] >= -0.14825949) {
        if (input[4] >= -0.2461575) {
            if (input[4] >= -0.064513) {
                if (input[3] >= -0.048334) {
                    if (input[5] >= 0.0187785) {
                        if (input[3] >= 0.108669) {
                            var131 = -0.030072019;
                        } else {
                            var131 = 0.037436362;
                        }
                    } else {
                        if (input[4] >= 0.002525) {
                            var131 = -0.009649629;
                        } else {
                            var131 = -0.06404446;
                        }
                    }
                } else {
                    var131 = 0.028863538;
                }
            } else {
                var131 = 0.03519662;
            }
        } else {
            var131 = -0.030133905;
        }
    } else {
        var131 = 0.017869137;
    }
    double var132;
    if (input[4] >= -0.2958085) {
        if (input[4] >= -0.157865) {
            if (input[2] >= 10.356064) {
                var132 = 0.039581668;
            } else {
                if (input[3] >= 0.0142435) {
                    if (input[1] >= 1.3730199) {
                        var132 = 0.0041046836;
                    } else {
                        var132 = -0.05059667;
                    }
                } else {
                    if (input[5] >= 0.018759001) {
                        var132 = 0.04803219;
                    } else {
                        if (input[0] >= -0.6380485) {
                            var132 = -0.032220908;
                        } else {
                            var132 = 0.0016344892;
                        }
                    }
                }
            }
        } else {
            var132 = -0.0312915;
        }
    } else {
        var132 = 0.02357454;
    }
    double var133;
    if (input[5] >= -0.14825949) {
        if (input[3] >= 0.0495895) {
            if (input[1] >= 1.7991835) {
                var133 = -0.015500583;
            } else {
                var133 = 0.037533812;
            }
        } else {
            if (input[1] >= 1.164354) {
                if (input[2] >= 9.022188) {
                    if (input[0] >= -0.636252) {
                        var133 = 0.05666643;
                    } else {
                        var133 = -0.0038394951;
                    }
                } else {
                    var133 = -0.03977937;
                }
            } else {
                if (input[1] >= 0.627645) {
                    var133 = -0.049767703;
                } else {
                    var133 = 0.0009946455;
                }
            }
        }
    } else {
        var133 = 0.018286891;
    }
    double var134;
    if (input[2] >= 9.346714) {
        if (input[2] >= 9.6779) {
            if (input[1] >= 0.5257065) {
                if (input[3] >= -0.09793) {
                    if (input[5] >= 0.013040001) {
                        var134 = 0.020343022;
                    } else {
                        var134 = -0.02484558;
                    }
                } else {
                    var134 = 0.0488907;
                }
            } else {
                var134 = -0.026318984;
            }
        } else {
            var134 = -0.0326406;
        }
    } else {
        if (input[5] >= 0.14650649) {
            var134 = -0.016266067;
        } else {
            if (input[0] >= -0.7128925) {
                var134 = 0.046786487;
            } else {
                var134 = -0.0044202646;
            }
        }
    }
    double var135;
    if (input[2] >= 9.7496) {
        if (input[5] >= 0.0492865) {
            if (input[5] >= 0.1956585) {
                var135 = -0.0028695655;
            } else {
                var135 = -0.054441277;
            }
        } else {
            if (input[5] >= -0.008517) {
                var135 = 0.042260703;
            } else {
                var135 = -0.011614152;
            }
        }
    } else {
        if (input[5] >= 0.0555285) {
            if (input[2] >= 9.083561) {
                var135 = 0.0588052;
            } else {
                var135 = -0.010158274;
            }
        } else {
            if (input[5] >= 0.010689) {
                var135 = -0.04290166;
            } else {
                if (input[3] >= -0.028051) {
                    var135 = 0.04412599;
                } else {
                    var135 = -0.018910494;
                }
            }
        }
    }
    double var136;
    if (input[4] >= 0.03873) {
        if (input[4] >= 0.2599515) {
            var136 = 0.017774364;
        } else {
            if (input[0] >= -0.6384975) {
                var136 = -0.044556625;
            } else {
                var136 = 0.0038016997;
            }
        }
    } else {
        if (input[0] >= -0.9317375) {
            if (input[2] >= 9.653201) {
                if (input[2] >= 9.764645) {
                    if (input[2] >= 10.234218) {
                        var136 = -0.027518017;
                    } else {
                        var136 = 0.034178045;
                    }
                } else {
                    var136 = -0.051262643;
                }
            } else {
                if (input[0] >= -0.6117775) {
                    var136 = 0.0493501;
                } else {
                    var136 = -0.013067727;
                }
            }
        } else {
            var136 = 0.04005547;
        }
    }
    double var137;
    if (input[1] >= 1.0318794) {
        if (input[0] >= -0.8274795) {
            if (input[3] >= 0.032702997) {
                if (input[1] >= 1.361793) {
                    var137 = -0.00578242;
                } else {
                    var137 = -0.064321995;
                }
            } else {
                if (input[5] >= 0.028947499) {
                    if (input[3] >= -0.0860025) {
                        var137 = -0.045343164;
                    } else {
                        var137 = -0.0022415232;
                    }
                } else {
                    var137 = 0.041346196;
                }
            }
        } else {
            var137 = 0.031074414;
        }
    } else {
        if (input[1] >= 0.7206015) {
            var137 = 0.048049692;
        } else {
            if (input[1] >= 0.496368) {
                var137 = -0.035899878;
            } else {
                var137 = 0.017677188;
            }
        }
    }
    double var138;
    if (input[3] >= -0.075501) {
        if (input[1] >= 1.965862) {
            var138 = -0.024224011;
        } else {
            if (input[1] >= 1.5912659) {
                var138 = 0.056485012;
            } else {
                if (input[1] >= 1.16383) {
                    if (input[5] >= 0.0132369995) {
                        var138 = -0.03198137;
                    } else {
                        var138 = 0.0031975613;
                    }
                } else {
                    if (input[4] >= -0.017169502) {
                        var138 = -0.0109489225;
                    } else {
                        var138 = 0.044240765;
                    }
                }
            }
        }
    } else {
        if (input[0] >= -0.6038445) {
            var138 = 0.01200159;
        } else {
            if (input[3] >= -0.228663) {
                var138 = -0.06043951;
            } else {
                var138 = 0.015298542;
            }
        }
    }
    double var139;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.207641) {
            var139 = 0.034078248;
        } else {
            if (input[5] >= 0.048704) {
                var139 = -0.031402577;
            } else {
                if (input[3] >= -0.0105435) {
                    if (input[3] >= 0.0496305) {
                        var139 = 0.020053992;
                    } else {
                        var139 = -0.035762496;
                    }
                } else {
                    if (input[5] >= -0.055058) {
                        var139 = 0.053730607;
                    } else {
                        var139 = -0.00061806326;
                    }
                }
            }
        }
    } else {
        var139 = -0.021853227;
    }
    double var140;
    if (input[1] >= 1.9770141) {
        var140 = 0.019103272;
    } else {
        if (input[3] >= -0.3831045) {
            if (input[1] >= 1.043405) {
                if (input[5] >= 0.15825) {
                    var140 = -0.0407465;
                } else {
                    if (input[5] >= -0.021799) {
                        var140 = 0.03474011;
                    } else {
                        if (input[4] >= 0.008616) {
                            var140 = -0.033139735;
                        } else {
                            var140 = 0.0027984786;
                        }
                    }
                }
            } else {
                if (input[0] >= -0.851205) {
                    var140 = 0.04416479;
                } else {
                    var140 = -0.011443552;
                }
            }
        } else {
            var140 = -0.033863075;
        }
    }
    double var141;
    if (input[2] >= 9.7496) {
        if (input[2] >= 9.960512) {
            if (input[1] >= 0.5257065) {
                if (input[4] >= -0.017231) {
                    var141 = 0.005208405;
                } else {
                    var141 = 0.048599582;
                }
            } else {
                var141 = -0.032423325;
            }
        } else {
            var141 = -0.03741449;
        }
    } else {
        if (input[5] >= 0.0300265) {
            if (input[1] >= 1.780697) {
                var141 = -0.0039469963;
            } else {
                var141 = 0.054297473;
            }
        } else {
            if (input[5] >= -0.002283) {
                var141 = -0.03713256;
            } else {
                if (input[3] >= -0.028051) {
                    var141 = 0.034251902;
                } else {
                    var141 = -0.01955538;
                }
            }
        }
    }
    double var142;
    if (input[3] >= -0.3084715) {
        if (input[1] >= 0.54217255) {
            if (input[3] >= 0.197135) {
                var142 = 0.016270071;
            } else {
                if (input[4] >= 0.093963996) {
                    var142 = 0.014604864;
                } else {
                    if (input[4] >= -0.042124502) {
                        if (input[5] >= 0.0187785) {
                            var142 = -0.005494017;
                        } else {
                            if (input[0] >= -0.6060145) {
                                var142 = -0.06888382;
                            } else {
                                var142 = -0.011224841;
                            }
                        }
                    } else {
                        if (input[5] >= 0.0554355) {
                            var142 = -0.0371117;
                        } else {
                            var142 = 0.03982477;
                        }
                    }
                }
            }
        } else {
            var142 = 0.030213892;
        }
    } else {
        var142 = 0.021769848;
    }
    double var143;
    if (input[3] >= 0.108812496) {
        if (input[1] >= 1.372571) {
            var143 = 0.0077331346;
        } else {
            var143 = -0.032725815;
        }
    } else {
        if (input[2] >= 10.194251) {
            if (input[5] >= -0.0024805) {
                var143 = 0.0074070315;
            } else {
                var143 = -0.03579706;
            }
        } else {
            if (input[1] >= 1.4310989) {
                if (input[1] >= 1.672547) {
                    if (input[2] >= 9.022188) {
                        var143 = 0.0362663;
                    } else {
                        var143 = -0.012017293;
                    }
                } else {
                    var143 = -0.033938896;
                }
            } else {
                if (input[0] >= -0.5709875) {
                    var143 = -0.005109189;
                } else {
                    var143 = 0.074303254;
                }
            }
        }
    }
    double var144;
    if (input[2] >= 9.021066) {
        if (input[5] >= -0.0345315) {
            if (input[2] >= 9.372759) {
                if (input[2] >= 9.790989) {
                    if (input[5] >= 0.013040001) {
                        if (input[3] >= -0.0104345) {
                            var144 = 0.02600721;
                        } else {
                            var144 = -0.030996474;
                        }
                    } else {
                        var144 = -0.0429205;
                    }
                } else {
                    var144 = 0.036685355;
                }
            } else {
                var144 = -0.051493157;
            }
        } else {
            if (input[4] >= -0.0687135) {
                var144 = 0.04982549;
            } else {
                var144 = -0.02140246;
            }
        }
    } else {
        if (input[5] >= -0.0072170002) {
            var144 = 0.0333192;
        } else {
            var144 = -0.0077789053;
        }
    }
    double var145;
    if (input[2] >= 9.346714) {
        if (input[2] >= 9.6779) {
            if (input[0] >= -0.710273) {
                if (input[0] >= -0.4872365) {
                    var145 = -0.010962831;
                } else {
                    var145 = 0.053085733;
                }
            } else {
                if (input[0] >= -0.9148225) {
                    var145 = -0.038988847;
                } else {
                    var145 = 0.0126455715;
                }
            }
        } else {
            var145 = -0.03579329;
        }
    } else {
        if (input[0] >= -0.7506145) {
            if (input[0] >= -0.2706375) {
                var145 = -0.006933698;
            } else {
                var145 = 0.053741157;
            }
        } else {
            var145 = -0.015475032;
        }
    }
    double var146;
    if (input[0] >= -0.251552) {
        if (input[5] >= 0.035441) {
            var146 = -0.007335753;
        } else {
            var146 = 0.035676494;
        }
    } else {
        if (input[5] >= 0.28882) {
            var146 = 0.028201146;
        } else {
            if (input[4] >= -0.0337785) {
                if (input[4] >= 0.090607) {
                    var146 = -0.030825278;
                } else {
                    if (input[1] >= 1.3363459) {
                        var146 = 0.06449024;
                    } else {
                        var146 = -0.007948643;
                    }
                }
            } else {
                if (input[1] >= 1.43065) {
                    var146 = -0.05263606;
                } else {
                    var146 = 0.003143606;
                }
            }
        }
    }
    double var147;
    if (input[4] >= -0.2958085) {
        if (input[0] >= -0.3921095) {
            if (input[1] >= 1.331032) {
                var147 = -0.009752894;
            } else {
                var147 = 0.038453504;
            }
        } else {
            if (input[4] >= -0.0325885) {
                if (input[3] >= -0.0191905) {
                    if (input[0] >= -0.63864696) {
                        var147 = -0.009529402;
                    } else {
                        var147 = 0.046975624;
                    }
                } else {
                    if (input[0] >= -0.77523804) {
                        var147 = 0.0025506169;
                    } else {
                        var147 = -0.037908234;
                    }
                }
            } else {
                if (input[5] >= 0.051617) {
                    var147 = -0.047396034;
                } else {
                    var147 = -0.0060022757;
                }
            }
        }
    } else {
        var147 = 0.020715589;
    }
    double var148;
    if (input[3] >= -0.04065) {
        if (input[5] >= 0.0850935) {
            var148 = 0.021851214;
        } else {
            if (input[3] >= 0.0496305) {
                var148 = 0.0062436583;
            } else {
                if (input[3] >= -0.0071305) {
                    var148 = -0.04436646;
                } else {
                    var148 = -0.0043867123;
                }
            }
        }
    } else {
        if (input[3] >= -0.197065) {
            var148 = 0.034185894;
        } else {
            if (input[3] >= -0.308789) {
                var148 = -0.036333315;
            } else {
                var148 = 0.021377996;
            }
        }
    }
    double var149;
    if (input[3] >= 0.108812496) {
        if (input[4] >= 0.17975199) {
            var149 = -0.03683832;
        } else {
            if (input[4] >= -0.115452) {
                var149 = 0.028817037;
            } else {
                var149 = -0.0238935;
            }
        }
    } else {
        if (input[3] >= 0.0018485) {
            var149 = 0.03202515;
        } else {
            if (input[2] >= 9.7496) {
                if (input[2] >= 9.94412) {
                    var149 = 0.0009864484;
                } else {
                    var149 = -0.047575;
                }
            } else {
                if (input[2] >= 8.557779) {
                    var149 = 0.042746063;
                } else {
                    var149 = -0.020022582;
                }
            }
        }
    }
    double var150;
    if (input[1] >= 1.9770141) {
        var150 = 0.019709636;
    } else {
        if (input[1] >= 1.8271755) {
            var150 = -0.032509647;
        } else {
            if (input[0] >= -0.8032295) {
                if (input[1] >= 1.5760725) {
                    var150 = 0.045096286;
                } else {
                    if (input[5] >= 0.20134851) {
                        var150 = -0.036486983;
                    } else {
                        if (input[5] >= -0.0084955) {
                            var150 = 0.05430076;
                        } else {
                            var150 = -0.019315764;
                        }
                    }
                }
            } else {
                if (input[0] >= -1.2016265) {
                    var150 = -0.03529493;
                } else {
                    var150 = 0.0061467555;
                }
            }
        }
    }
    double var151;
    if (input[5] >= -0.14825949) {
        if (input[5] >= 0.085074) {
            if (input[4] >= 0.028634) {
                var151 = -0.016483197;
            } else {
                var151 = 0.03283986;
            }
        } else {
            if (input[3] >= -0.0463365) {
                if (input[3] >= 0.049687497) {
                    var151 = 0.018444207;
                } else {
                    if (input[4] >= 0.008411) {
                        var151 = -0.00772466;
                    } else {
                        var151 = -0.05571418;
                    }
                }
            } else {
                var151 = 0.0160134;
            }
        }
    } else {
        var151 = 0.01788991;
    }
    double var152;
    if (input[3] >= 0.108812496) {
        if (input[1] >= 1.2569361) {
            if (input[4] >= -0.0130915) {
                var152 = -0.007748473;
            } else {
                var152 = -0.03518154;
            }
        } else {
            var152 = 0.013190192;
        }
    } else {
        if (input[0] >= 0.019908499) {
            var152 = -0.023044566;
        } else {
            if (input[3] >= -0.0191905) {
                if (input[2] >= 9.603953) {
                    var152 = 0.05268428;
                } else {
                    var152 = 0.0060652336;
                }
            } else {
                if (input[3] >= -0.230435) {
                    if (input[4] >= -0.0171935) {
                        var152 = -0.043560393;
                    } else {
                        var152 = 0.008315253;
                    }
                } else {
                    var152 = 0.02908381;
                }
            }
        }
    }
    double var153;
    if (input[2] >= 9.021066) {
        if (input[3] >= -0.3831615) {
            if (input[3] >= 0.0142645) {
                if (input[2] >= 9.856777) {
                    var153 = 0.01657951;
                } else {
                    if (input[3] >= 0.1971595) {
                        var153 = 0.007327877;
                    } else {
                        var153 = -0.0633873;
                    }
                }
            } else {
                if (input[1] >= 1.1645036) {
                    var153 = 0.0512501;
                } else {
                    var153 = -0.00595842;
                }
            }
        } else {
            var153 = -0.037764363;
        }
    } else {
        if (input[0] >= -0.2706375) {
            var153 = -0.0050815837;
        } else {
            var153 = 0.030426335;
        }
    }
    double var154;
    if (input[3] >= 0.291249) {
        var154 = -0.02033026;
    } else {
        if (input[0] >= -0.3920345) {
            if (input[0] >= 0.019908499) {
                var154 = -0.005936104;
            } else {
                var154 = 0.044849083;
            }
        } else {
            if (input[0] >= -0.69148695) {
                if (input[2] >= 9.757085) {
                    var154 = 0.006396466;
                } else {
                    if (input[4] >= -0.074195996) {
                        var154 = -0.00998638;
                    } else {
                        var154 = -0.056275632;
                    }
                }
            } else {
                if (input[4] >= -0.0563225) {
                    if (input[5] >= 0.0133030005) {
                        var154 = -0.034867167;
                    } else {
                        var154 = 0.02896623;
                    }
                } else {
                    var154 = 0.0431113;
                }
            }
        }
    }
    double var155;
    if (input[5] >= 0.085074) {
        if (input[3] >= -0.197065) {
            if (input[3] >= 0.1422555) {
                var155 = -0.008143891;
            } else {
                var155 = 0.05244497;
            }
        } else {
            var155 = -0.017224845;
        }
    } else {
        if (input[0] >= -0.25491953) {
            var155 = 0.025205553;
        } else {
            if (input[4] >= 0.008737) {
                if (input[4] >= 0.1612495) {
                    var155 = -0.036123566;
                } else {
                    var155 = 0.042742807;
                }
            } else {
                if (input[5] >= -0.022146) {
                    var155 = -0.05103622;
                } else {
                    var155 = 0.004506748;
                }
            }
        }
    }
    double var156;
    if (input[1] >= 1.9770141) {
        var156 = 0.018336792;
    } else {
        if (input[1] >= 1.8271755) {
            var156 = -0.029008877;
        } else {
            if (input[0] >= -0.8032295) {
                if (input[1] >= 1.5760725) {
                    var156 = 0.041431665;
                } else {
                    if (input[1] >= 1.0117459) {
                        if (input[5] >= 0.0553535) {
                            var156 = -0.049929146;
                        } else {
                            var156 = 0.014752477;
                        }
                    } else {
                        var156 = 0.025321754;
                    }
                }
            } else {
                if (input[3] >= -0.0045555) {
                    var156 = 0.005812234;
                } else {
                    var156 = -0.0326604;
                }
            }
        }
    }
    double var157;
    if (input[1] >= 0.6613995) {
        if (input[3] >= -0.230435) {
            if (input[3] >= -0.004659) {
                if (input[0] >= -0.273556) {
                    var157 = -0.025371721;
                } else {
                    if (input[3] >= 0.2072995) {
                        var157 = 0.062315773;
                    } else {
                        if (input[1] >= 1.346974) {
                            var157 = 0.021399897;
                        } else {
                            var157 = -0.019473976;
                        }
                    }
                }
            } else {
                if (input[0] >= -0.603695) {
                    var157 = 0.009480958;
                } else {
                    var157 = -0.050595075;
                }
            }
        } else {
            var157 = 0.036839213;
        }
    } else {
        var157 = -0.017972192;
    }
    double var158;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.7111671) {
            if (input[0] >= -0.580792) {
                var158 = 0.00285912;
            } else {
                var158 = -0.06315626;
            }
        } else {
            if (input[0] >= -0.56440103) {
                if (input[4] >= -0.0250385) {
                    if (input[0] >= -0.3513945) {
                        var158 = 0.0009877469;
                    } else {
                        var158 = -0.038890216;
                    }
                } else {
                    var158 = 0.028615713;
                }
            } else {
                var158 = 0.04187623;
            }
        }
    } else {
        if (input[2] >= 10.118284) {
            var158 = -0.016334334;
        } else {
            var158 = 0.042303577;
        }
    }
    double var159;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.6933535) {
            if (input[0] >= -0.580792) {
                var159 = 0.0052044536;
            } else {
                var159 = -0.055472504;
            }
        } else {
            if (input[5] >= -0.0072505) {
                if (input[5] >= 0.2015385) {
                    var159 = -0.014776394;
                } else {
                    var159 = 0.057444137;
                }
            } else {
                if (input[5] >= -0.13005951) {
                    var159 = -0.0283805;
                } else {
                    var159 = 0.0084015615;
                }
            }
        }
    } else {
        if (input[2] >= 10.118284) {
            var159 = -0.013614058;
        } else {
            var159 = 0.034408025;
        }
    }
    double var160;
    if (input[0] >= -0.273556) {
        if (input[3] >= -0.010410501) {
            var160 = -0.03397459;
        } else {
            var160 = 0.012916947;
        }
    } else {
        if (input[1] >= 1.8110089) {
            var160 = 0.031152396;
        } else {
            if (input[1] >= 1.4861845) {
                var160 = -0.0263835;
            } else {
                if (input[5] >= 0.0480805) {
                    var160 = -0.019417651;
                } else {
                    if (input[2] >= 9.851389) {
                        var160 = 0.06184932;
                    } else {
                        var160 = -0.012621145;
                    }
                }
            }
        }
    }
    double var161;
    if (input[5] >= 0.085074) {
        if (input[0] >= -0.487536) {
            var161 = -0.013434152;
        } else {
            var161 = 0.03284521;
        }
    } else {
        if (input[1] >= 1.736614) {
            var161 = 0.019194819;
        } else {
            if (input[2] >= 9.856777) {
                if (input[1] >= 0.6282435) {
                    var161 = 0.031229222;
                } else {
                    var161 = -0.020529058;
                }
            } else {
                if (input[2] >= 9.141789) {
                    var161 = -0.049419176;
                } else {
                    var161 = 0.005054204;
                }
            }
        }
    }
    double var162;
    if (input[1] >= 0.6613995) {
        if (input[5] >= 0.2887145) {
            var162 = 0.033734396;
        } else {
            if (input[5] >= -0.086994) {
                if (input[0] >= -0.710273) {
                    if (input[1] >= 1.7991835) {
                        var162 = -0.034132004;
                    } else {
                        if (input[3] >= -0.005943) {
                            var162 = 0.054064576;
                        } else {
                            var162 = 0.005471205;
                        }
                    }
                } else {
                    var162 = -0.04577493;
                }
            } else {
                var162 = 0.0260191;
            }
        }
    } else {
        var162 = -0.015826007;
    }
    double var163;
    if (input[0] >= -0.6384225) {
        if (input[2] >= 9.960512) {
            var163 = 0.015867885;
        } else {
            if (input[2] >= 9.743913) {
                var163 = -0.053150002;
            } else {
                if (input[4] >= 0.027625) {
                    var163 = -0.030335097;
                } else {
                    var163 = 0.031154737;
                }
            }
        }
    } else {
        if (input[2] >= 10.103839) {
            var163 = -0.00984685;
        } else {
            if (input[1] >= 1.6539855) {
                var163 = -0.010928055;
            } else {
                var163 = 0.04503063;
            }
        }
    }
    double var164;
    if (input[1] >= 0.496368) {
        if (input[2] >= 10.392962) {
            var164 = 0.038356077;
        } else {
            if (input[1] >= 0.83197) {
                if (input[0] >= -0.781001) {
                    if (input[3] >= 0.0326365) {
                        if (input[3] >= 0.1779595) {
                            var164 = 0.0042178337;
                        } else {
                            var164 = -0.055408183;
                        }
                    } else {
                        if (input[4] >= -0.0248355) {
                            var164 = 0.04269234;
                        } else {
                            var164 = -0.028711779;
                        }
                    }
                } else {
                    var164 = 0.029379444;
                }
            } else {
                var164 = -0.06415294;
            }
        }
    } else {
        var164 = 0.020256896;
    }
    double var165;
    if (input[5] >= 0.0354945) {
        if (input[1] >= 1.5521226) {
            var165 = 0.030024778;
        } else {
            if (input[2] >= 9.920095) {
                var165 = -0.03115479;
            } else {
                var165 = 0.02084909;
            }
        }
    } else {
        if (input[2] >= 9.856777) {
            var165 = 0.013040573;
        } else {
            if (input[1] >= 1.7372875) {
                var165 = 0.01724027;
            } else {
                if (input[5] >= -0.08272649) {
                    var165 = -0.052553847;
                } else {
                    var165 = -0.0001696984;
                }
            }
        }
    }
    double var166;
    if (input[0] >= -0.273556) {
        if (input[0] >= 0.032257497) {
            var166 = 0.013026224;
        } else {
            var166 = -0.031558458;
        }
    } else {
        if (input[3] >= -0.0191905) {
            if (input[4] >= -0.0325885) {
                if (input[4] >= 0.043981) {
                    var166 = 0.00036739843;
                } else {
                    var166 = 0.06125504;
                }
            } else {
                var166 = -0.015825927;
            }
        } else {
            if (input[3] >= -0.230435) {
                if (input[1] >= 1.333128) {
                    var166 = -0.038564973;
                } else {
                    var166 = 0.002031631;
                }
            } else {
                var166 = 0.018989742;
            }
        }
    }
    double var167;
    if (input[3] >= -0.296566) {
        if (input[3] >= -0.04065) {
            if (input[5] >= 0.0850935) {
                var167 = 0.02059035;
            } else {
                if (input[3] >= 0.0496305) {
                    var167 = 0.012442753;
                } else {
                    if (input[0] >= -0.6152955) {
                        var167 = -0.047859963;
                    } else {
                        var167 = -0.0020897673;
                    }
                }
            }
        } else {
            if (input[2] >= 9.748627) {
                var167 = -0.0047425325;
            } else {
                var167 = 0.046573296;
            }
        }
    } else {
        var167 = -0.018841341;
    }
    double var168;
    if (input[2] >= 9.6779) {
        if (input[1] >= 1.2255759) {
            if (input[5] >= 0.0062325) {
                var168 = 0.0496491;
            } else {
                var168 = -0.0028071746;
            }
        } else {
            if (input[1] >= 0.91302645) {
                var168 = -0.03437178;
            } else {
                var168 = 0.013841481;
            }
        }
    } else {
        if (input[5] >= 0.25305998) {
            var168 = -0.037455607;
        } else {
            if (input[5] >= -0.04699) {
                if (input[2] >= 9.172625) {
                    var168 = -0.004056112;
                } else {
                    var168 = 0.043064788;
                }
            } else {
                var168 = -0.02373151;
            }
        }
    }
    double var169;
    if (input[4] >= -0.2958085) {
        if (input[5] >= -0.116819) {
            if (input[5] >= -0.0202615) {
                if (input[4] >= -0.024004001) {
                    if (input[1] >= 1.282084) {
                        var169 = 0.03418132;
                    } else {
                        var169 = -0.023728857;
                    }
                } else {
                    if (input[1] >= 1.441652) {
                        var169 = -0.036871087;
                    } else {
                        var169 = -0.0033418625;
                    }
                }
            } else {
                var169 = 0.046490096;
            }
        } else {
            if (input[3] >= -0.028396) {
                var169 = -0.00288651;
            } else {
                var169 = -0.033672117;
            }
        }
    } else {
        var169 = 0.019756462;
    }
    double var170;
    if (input[3] >= -0.3084715) {
        if (input[1] >= 1.043405) {
            if (input[3] >= -0.0808955) {
                if (input[1] >= 1.372571) {
                    if (input[1] >= 1.965862) {
                        var170 = -0.019337367;
                    } else {
                        var170 = 0.03973665;
                    }
                } else {
                    var170 = -0.02370944;
                }
            } else {
                var170 = -0.042321023;
            }
        } else {
            if (input[5] >= 0.0108945) {
                var170 = 0.03985695;
            } else {
                var170 = -0.007511749;
            }
        }
    } else {
        var170 = 0.019700183;
    }
    double var171;
    if (input[5] >= -0.14825949) {
        if (input[1] >= 1.51238) {
            if (input[5] >= 0.033438) {
                if (input[1] >= 1.9092045) {
                    var171 = 0.022114968;
                } else {
                    var171 = -0.0056094597;
                }
            } else {
                var171 = -0.043265905;
            }
        } else {
            if (input[2] >= 9.93746) {
                if (input[5] >= 0.048342) {
                    var171 = -0.04443344;
                } else {
                    var171 = 0.01483364;
                }
            } else {
                if (input[0] >= -0.6345305) {
                    var171 = 0.058169056;
                } else {
                    var171 = -0.0056226356;
                }
            }
        }
    } else {
        var171 = 0.019290855;
    }
    double var172;
    if (input[3] >= 0.291249) {
        var172 = -0.018091029;
    } else {
        if (input[2] >= 9.689276) {
            if (input[0] >= -0.4872365) {
                var172 = -0.0134174;
            } else {
                if (input[2] >= 9.938208) {
                    var172 = 0.0067169545;
                } else {
                    var172 = 0.062265623;
                }
            }
        } else {
            if (input[2] >= 9.355395) {
                var172 = -0.037669692;
            } else {
                if (input[1] >= 1.7118405) {
                    var172 = 0.029345108;
                } else {
                    var172 = -0.009890761;
                }
            }
        }
    }
    double var173;
    if (input[1] >= 1.9770141) {
        var173 = 0.017383683;
    } else {
        if (input[1] >= 1.8271755) {
            var173 = -0.027237702;
        } else {
            if (input[0] >= -0.8032295) {
                if (input[1] >= 1.5760725) {
                    var173 = 0.042231895;
                } else {
                    if (input[1] >= 1.317111) {
                        var173 = -0.028736183;
                    } else {
                        if (input[2] >= 10.280546) {
                            var173 = -0.014028258;
                        } else {
                            var173 = 0.03150232;
                        }
                    }
                }
            } else {
                if (input[0] >= -1.0775344) {
                    var173 = -0.032067712;
                } else {
                    var173 = 0.0019880168;
                }
            }
        }
    }
    double var174;
    if (input[4] >= -0.115644) {
        if (input[2] >= 10.356064) {
            var174 = 0.028027693;
        } else {
            if (input[3] >= -0.04065) {
                if (input[0] >= -0.4411325) {
                    var174 = 0.0069787693;
                } else {
                    if (input[1] >= 1.3181585) {
                        var174 = -0.0024828324;
                    } else {
                        var174 = -0.05837348;
                    }
                }
            } else {
                var174 = 0.011132155;
            }
        }
    } else {
        if (input[3] >= -0.080745) {
            var174 = 0.03295129;
        } else {
            var174 = -0.012721739;
        }
    }
    double var175;
    if (input[0] >= -0.6384225) {
        if (input[2] >= 9.960512) {
            var175 = 0.017227322;
        } else {
            if (input[2] >= 9.743913) {
                var175 = -0.049031224;
            } else {
                if (input[4] >= 0.027625) {
                    var175 = -0.027249672;
                } else {
                    var175 = 0.027554339;
                }
            }
        }
    } else {
        if (input[1] >= 1.551224) {
            var175 = -0.010911749;
        } else {
            if (input[5] >= 0.0134459995) {
                var175 = -0.0075688115;
            } else {
                var175 = 0.04401461;
            }
        }
    }
    double var176;
    if (input[2] >= 10.279947) {
        if (input[1] >= 0.5257065) {
            var176 = 0.016084716;
        } else {
            var176 = -0.04366379;
        }
    } else {
        if (input[1] >= 1.253718) {
            if (input[0] >= -0.781001) {
                if (input[3] >= 0.017836) {
                    if (input[1] >= 1.8110089) {
                        var176 = -0.0115759745;
                    } else {
                        var176 = -0.046246465;
                    }
                } else {
                    if (input[2] >= 9.022412) {
                        var176 = 0.05117311;
                    } else {
                        var176 = -0.04113469;
                    }
                }
            } else {
                var176 = 0.022713147;
            }
        } else {
            if (input[1] >= 0.84349597) {
                var176 = 0.04080072;
            } else {
                var176 = 0.0031058982;
            }
        }
    }
    double var177;
    if (input[2] >= 9.649159) {
        if (input[5] >= 0.13100949) {
            var177 = 0.018335776;
        } else {
            if (input[4] >= -0.096965) {
                if (input[0] >= -0.557441) {
                    var177 = -0.029026946;
                } else {
                    var177 = 0.03272339;
                }
            } else {
                var177 = -0.04446018;
            }
        }
    } else {
        if (input[4] >= -0.079881504) {
            if (input[0] >= -0.6831795) {
                var177 = 0.012990455;
            } else {
                var177 = -0.02644214;
            }
        } else {
            var177 = 0.0419877;
        }
    }
    double var178;
    if (input[1] >= 0.496368) {
        if (input[4] >= -0.115644) {
            if (input[1] >= 0.82867706) {
                if (input[4] >= 0.2214225) {
                    var178 = 0.035503138;
                } else {
                    if (input[5] >= 0.18713701) {
                        var178 = -0.050424308;
                    } else {
                        if (input[5] >= -0.020039499) {
                            var178 = 0.025037434;
                        } else {
                            var178 = -0.0154173495;
                        }
                    }
                }
            } else {
                var178 = -0.05401628;
            }
        } else {
            if (input[1] >= 1.5755484) {
                var178 = -0.006172382;
            } else {
                var178 = 0.043319214;
            }
        }
    } else {
        var178 = 0.020817418;
    }
    double var179;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.2016745) {
            var179 = 0.033151694;
        } else {
            if (input[4] >= 0.044221) {
                var179 = 0.03014107;
            } else {
                if (input[3] >= 0.022609498) {
                    var179 = 0.009601086;
                } else {
                    if (input[4] >= -0.008325) {
                        var179 = -0.05074374;
                    } else {
                        var179 = 0.0002822041;
                    }
                }
            }
        }
    } else {
        var179 = -0.018448284;
    }
    double var180;
    if (input[3] >= 0.291249) {
        var180 = -0.019513594;
    } else {
        if (input[5] >= -0.15743801) {
            if (input[1] >= 1.829271) {
                var180 = 0.024879877;
            } else {
                if (input[1] >= 0.628019) {
                    if (input[0] >= -0.7128175) {
                        if (input[0] >= -0.529823) {
                            var180 = -0.024805699;
                        } else {
                            var180 = 0.025679253;
                        }
                    } else {
                        var180 = -0.042720947;
                    }
                } else {
                    var180 = 0.018951388;
                }
            }
        } else {
            var180 = 0.033146285;
        }
    }
    double var181;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.7111671) {
            if (input[0] >= -0.55512047) {
                var181 = 0.0015146598;
            } else {
                var181 = -0.05353688;
            }
        } else {
            if (input[1] >= 1.3498931) {
                var181 = 0.04081256;
            } else {
                if (input[1] >= 1.0117459) {
                    var181 = -0.02054212;
                } else {
                    var181 = 0.020582452;
                }
            }
        }
    } else {
        if (input[2] >= 10.118284) {
            var181 = -0.014895001;
        } else {
            var181 = 0.036462273;
        }
    }
    double var182;
    if (input[0] >= -0.6384225) {
        if (input[2] >= 9.960512) {
            var182 = 0.017238388;
        } else {
            if (input[2] >= 8.918379) {
                if (input[4] >= -0.0774975) {
                    var182 = -0.0034034825;
                } else {
                    var182 = -0.05518386;
                }
            } else {
                var182 = 0.01293256;
            }
        }
    } else {
        if (input[0] >= -0.8033045) {
            var182 = 0.025741734;
        } else {
            if (input[3] >= -0.0045555) {
                var182 = 0.016114173;
            } else {
                var182 = -0.017225219;
            }
        }
    }
    double var183;
    if (input[3] >= -0.3084715) {
        if (input[2] >= 9.048159) {
            if (input[2] >= 9.649159) {
                if (input[1] >= 0.91302645) {
                    if (input[0] >= -0.710273) {
                        if (input[1] >= 1.334101) {
                            var183 = 0.024466716;
                        } else {
                            var183 = -0.020851692;
                        }
                    } else {
                        var183 = -0.046965215;
                    }
                } else {
                    var183 = 0.015889032;
                }
            } else {
                var183 = 0.035181485;
            }
        } else {
            if (input[3] >= -0.028199501) {
                var183 = -0.0009385316;
            } else {
                var183 = -0.038397573;
            }
        }
    } else {
        var183 = 0.017774388;
    }
    double var184;
    if (input[0] >= -0.69148695) {
        if (input[3] >= 0.207239) {
            var184 = 0.03262397;
        } else {
            if (input[0] >= -0.3920345) {
                if (input[0] >= 0.019908499) {
                    var184 = -0.018121002;
                } else {
                    var184 = 0.039534617;
                }
            } else {
                if (input[3] >= -0.036038) {
                    var184 = -0.05600167;
                } else {
                    var184 = -0.004590911;
                }
            }
        }
    } else {
        if (input[2] >= 10.037527) {
            var184 = -0.016574861;
        } else {
            if (input[2] >= 9.247694) {
                var184 = 0.046609603;
            } else {
                var184 = -0.0019334609;
            }
        }
    }
    double var185;
    if (input[0] >= -0.273556) {
        if (input[0] >= -0.065863) {
            var185 = 0.0076773968;
        } else {
            var185 = -0.03179342;
        }
    } else {
        if (input[0] >= -0.589399) {
            if (input[1] >= 1.336496) {
                var185 = 0.047808472;
            } else {
                var185 = -0.0076747327;
            }
        } else {
            if (input[5] >= -0.032248497) {
                if (input[5] >= 0.0486765) {
                    var185 = -0.008165615;
                } else {
                    var185 = 0.044438403;
                }
            } else {
                if (input[5] >= -0.148345) {
                    var185 = -0.046016537;
                } else {
                    var185 = -0.0015072591;
                }
            }
        }
    }
    double var186;
    if (input[0] >= -0.6384225) {
        if (input[5] >= 0.25305998) {
            var186 = -0.031355295;
        } else {
            if (input[5] >= 0.0354945) {
                var186 = 0.029538725;
            } else {
                if (input[0] >= -0.25491953) {
                    var186 = 0.015867043;
                } else {
                    if (input[2] >= 9.715172) {
                        var186 = -0.035230413;
                    } else {
                        var186 = -0.0035770102;
                    }
                }
            }
        }
    } else {
        if (input[3] >= 0.1086545) {
            var186 = -0.010332767;
        } else {
            if (input[1] >= 1.551224) {
                var186 = -0.00934481;
            } else {
                var186 = 0.035861015;
            }
        }
    }
    double var187;
    if (input[5] >= -0.022142) {
        if (input[0] >= -0.56440103) {
            if (input[4] >= 0.009349501) {
                var187 = 0.010469999;
            } else {
                if (input[5] >= 0.049363002) {
                    var187 = 0.0009935806;
                } else {
                    var187 = -0.05945283;
                }
            }
        } else {
            if (input[2] >= 9.576635) {
                var187 = 0.033515353;
            } else {
                var187 = -0.023434756;
            }
        }
    } else {
        if (input[0] >= -0.5892495) {
            var187 = 0.04123411;
        } else {
            if (input[0] >= -0.7509135) {
                var187 = -0.025503771;
            } else {
                var187 = 0.005921409;
            }
        }
    }
    double var188;
    if (input[1] >= 0.6613995) {
        if (input[1] >= 1.0318794) {
            if (input[0] >= -0.8274795) {
                if (input[5] >= 0.028947499) {
                    if (input[1] >= 1.8786685) {
                        var188 = 0.001752222;
                    } else {
                        var188 = -0.041030645;
                    }
                } else {
                    if (input[3] >= 0.0333825) {
                        var188 = -0.02646414;
                    } else {
                        var188 = 0.036848687;
                    }
                }
            } else {
                var188 = 0.026226932;
            }
        } else {
            var188 = 0.03126605;
        }
    } else {
        var188 = -0.016822178;
    }
    double var189;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.207641) {
            var189 = 0.03140788;
        } else {
            if (input[5] >= 0.048704) {
                var189 = -0.029336961;
            } else {
                if (input[0] >= -0.2737055) {
                    var189 = -0.02607902;
                } else {
                    if (input[5] >= -0.03278) {
                        var189 = 0.038090263;
                    } else {
                        if (input[0] >= -0.705932) {
                            var189 = 0.017459942;
                        } else {
                            var189 = -0.019032843;
                        }
                    }
                }
            }
        }
    } else {
        var189 = -0.01725756;
    }
    double var190;
    if (input[4] >= -0.2958085) {
        if (input[2] >= 9.533001) {
            if (input[1] >= 1.2263995) {
                if (input[3] >= 0.041217) {
                    var190 = -0.002817303;
                } else {
                    var190 = 0.050590258;
                }
            } else {
                if (input[3] >= 0.010033) {
                    var190 = 0.016494328;
                } else {
                    var190 = -0.03443088;
                }
            }
        } else {
            if (input[2] >= 9.141789) {
                var190 = -0.035147786;
            } else {
                if (input[0] >= -0.5223385) {
                    var190 = -0.012288741;
                } else {
                    var190 = 0.016742626;
                }
            }
        }
    } else {
        var190 = 0.017702915;
    }
    double var191;
    if (input[1] >= 0.496368) {
        if (input[2] >= 10.392962) {
            var191 = 0.03758851;
        } else {
            if (input[4] >= -0.18845901) {
                if (input[1] >= 0.921484) {
                    if (input[4] >= -0.0285145) {
                        if (input[5] >= -0.0327895) {
                            if (input[0] >= -0.6085595) {
                                var191 = -0.010086975;
                            } else {
                                var191 = 0.04893615;
                            }
                        } else {
                            var191 = -0.020264264;
                        }
                    } else {
                        var191 = -0.029939948;
                    }
                } else {
                    var191 = -0.05075883;
                }
            } else {
                var191 = 0.019727385;
            }
        }
    } else {
        var191 = 0.017147781;
    }
    double var192;
    if (input[0] >= -1.1890526) {
        if (input[2] >= 9.960512) {
            if (input[3] >= 0.009944) {
                var192 = -0.006618639;
            } else {
                var192 = 0.046153698;
            }
        } else {
            if (input[3] >= -0.115752) {
                if (input[3] >= 0.108787) {
                    var192 = -0.017584272;
                } else {
                    if (input[1] >= 1.480571) {
                        var192 = -0.0038124567;
                    } else {
                        var192 = 0.056236234;
                    }
                }
            } else {
                var192 = -0.030926995;
            }
        }
    } else {
        var192 = -0.01854709;
    }
    double var193;
    if (input[2] >= 9.649159) {
        if (input[2] >= 9.764494) {
            if (input[5] >= -0.034536503) {
                if (input[0] >= -0.487536) {
                    var193 = -0.032269564;
                } else {
                    var193 = 0.0086252745;
                }
            } else {
                var193 = 0.031383928;
            }
        } else {
            var193 = -0.030850636;
        }
    } else {
        if (input[4] >= -0.0775155) {
            if (input[0] >= -0.6831795) {
                var193 = 0.016576529;
            } else {
                var193 = -0.023856493;
            }
        } else {
            var193 = 0.03820177;
        }
    }
    double var194;
    if (input[2] >= 9.7496) {
        if (input[3] >= 0.001876) {
            var194 = 0.013359355;
        } else {
            if (input[3] >= -0.058870003) {
                var194 = -0.03990311;
            } else {
                var194 = -0.0017281227;
            }
        }
    } else {
        if (input[1] >= 1.9083065) {
            var194 = -0.0125272395;
        } else {
            if (input[0] >= -0.805625) {
                if (input[3] >= 0.014238) {
                    var194 = -0.0017953657;
                } else {
                    var194 = 0.0568474;
                }
            } else {
                var194 = -0.018711599;
            }
        }
    }
    double var195;
    if (input[5] >= -0.022142) {
        if (input[5] >= 0.0354945) {
            if (input[3] >= 0.14794251) {
                var195 = -0.018773723;
            } else {
                if (input[3] >= -0.075501) {
                    var195 = 0.050034337;
                } else {
                    var195 = -0.0085865;
                }
            }
        } else {
            if (input[0] >= -0.56253004) {
                var195 = -0.038789466;
            } else {
                var195 = -0.00062473764;
            }
        }
    } else {
        if (input[1] >= 1.5998731) {
            var195 = 0.035509843;
        } else {
            if (input[1] >= 1.1538005) {
                var195 = -0.038718995;
            } else {
                var195 = 0.027356131;
            }
        }
    }
    double var196;
    if (input[3] >= 0.041282) {
        if (input[4] >= -0.0325885) {
            var196 = 0.037395693;
        } else {
            var196 = -0.017815009;
        }
    } else {
        if (input[0] >= -0.143776) {
            var196 = -0.030803336;
        } else {
            if (input[4] >= 0.03873) {
                var196 = -0.026477175;
            } else {
                if (input[3] >= -0.179937) {
                    if (input[2] >= 9.501118) {
                        var196 = 0.058183495;
                    } else {
                        var196 = -0.00821991;
                    }
                } else {
                    var196 = -0.01738941;
                }
            }
        }
    }
    double var197;
    if (input[2] >= 9.649159) {
        if (input[5] >= 0.13100949) {
            var197 = 0.016606042;
        } else {
            if (input[4] >= -0.096965) {
                if (input[3] >= -0.008873) {
                    var197 = -0.018245295;
                } else {
                    var197 = 0.02533991;
                }
            } else {
                var197 = -0.03914526;
            }
        }
    } else {
        if (input[2] >= 9.372759) {
            var197 = 0.035341665;
        } else {
            if (input[3] >= -0.038585) {
                var197 = -0.017426202;
            } else {
                var197 = 0.017348535;
            }
        }
    }
    double var198;
    if (input[2] >= 9.355395) {
        if (input[0] >= -0.589399) {
            if (input[1] >= 1.3363465) {
                var198 = 0.03671315;
            } else {
                var198 = -0.0069201365;
            }
        } else {
            if (input[0] >= -0.931064) {
                if (input[1] >= 1.7131875) {
                    var198 = -0.055856396;
                } else {
                    var198 = -0.005486939;
                }
            } else {
                var198 = 0.015444522;
            }
        }
    } else {
        if (input[1] >= 1.7118405) {
            var198 = 0.031500623;
        } else {
            var198 = -0.006779919;
        }
    }
    double var199;
    if (input[5] >= -0.073837504) {
        if (input[3] >= 0.022590999) {
            if (input[1] >= 1.6933535) {
                var199 = -0.016910505;
            } else {
                var199 = 0.035577856;
            }
        } else {
            if (input[5] >= 0.0555475) {
                var199 = 0.011786025;
            } else {
                if (input[3] >= -0.0105435) {
                    var199 = -0.05002865;
                } else {
                    var199 = -0.0039849654;
                }
            }
        }
    } else {
        if (input[0] >= -0.631462) {
            var199 = -0.006138225;
        } else {
            var199 = 0.03088742;
        }
    }
    double var200;
    if (input[0] >= -1.1890526) {
        if (input[5] >= 0.1582765) {
            if (input[2] >= 9.577234) {
                var200 = 0.006826875;
            } else {
                var200 = -0.0334987;
            }
        } else {
            if (input[5] >= 0.0354945) {
                var200 = 0.051499236;
            } else {
                if (input[2] >= 9.602606) {
                    if (input[2] >= 9.856777) {
                        var200 = 0.017029291;
                    } else {
                        var200 = -0.040793817;
                    }
                } else {
                    if (input[1] >= 1.6238235) {
                        var200 = 0.0366029;
                    } else {
                        var200 = -0.008053259;
                    }
                }
            }
        }
    } else {
        var200 = -0.018942691;
    }
    double var201;
    if (input[2] >= 9.7496) {
        if (input[5] >= 0.0492865) {
            var201 = -0.029158857;
        } else {
            if (input[3] >= 0.001876) {
                var201 = 0.027620256;
            } else {
                var201 = -0.010416727;
            }
        }
    } else {
        if (input[1] >= 1.9083065) {
            var201 = -0.0134962145;
        } else {
            if (input[1] >= 1.5521226) {
                var201 = 0.04249979;
            } else {
                if (input[1] >= 1.2528945) {
                    var201 = -0.023580702;
                } else {
                    var201 = 0.02146209;
                }
            }
        }
    }
    double var202;
    if (input[5] >= -0.073837504) {
        if (input[0] >= -0.420326) {
            if (input[0] >= -0.0675095) {
                var202 = -0.010600279;
            } else {
                var202 = 0.031035995;
            }
        } else {
            if (input[3] >= -0.0191495) {
                if (input[5] >= 0.029119) {
                    var202 = -0.018072456;
                } else {
                    var202 = 0.038096733;
                }
            } else {
                if (input[5] >= 0.031234499) {
                    var202 = -0.00040749734;
                } else {
                    var202 = -0.052591722;
                }
            }
        }
    } else {
        if (input[5] >= -0.2074565) {
            var202 = 0.029622642;
        } else {
            var202 = -0.0063047293;
        }
    }
    double var203;
    if (input[3] >= -0.3084715) {
        if (input[2] >= 9.048159) {
            if (input[2] >= 9.649159) {
                if (input[0] >= -0.710273) {
                    if (input[5] >= 0.013040001) {
                        var203 = 0.032562744;
                    } else {
                        var203 = -0.019018345;
                    }
                } else {
                    var203 = -0.026197914;
                }
            } else {
                var203 = 0.031041667;
            }
        } else {
            if (input[3] >= -0.0257835) {
                var203 = 0.00013546877;
            } else {
                var203 = -0.033878423;
            }
        }
    } else {
        var203 = 0.019698303;
    }
    double var204;
    if (input[5] >= -0.022142) {
        if (input[2] >= 9.020018) {
            if (input[2] >= 9.534199) {
                if (input[0] >= -0.562156) {
                    var204 = -0.02125891;
                } else {
                    var204 = 0.02432979;
                }
            } else {
                var204 = -0.04412406;
            }
        } else {
            var204 = 0.021421462;
        }
    } else {
        if (input[0] >= -0.5892495) {
            var204 = 0.0366186;
        } else {
            if (input[0] >= -0.7509135) {
                var204 = -0.020551438;
            } else {
                var204 = 0.0059773806;
            }
        }
    }
    double var205;
    if (input[1] >= 1.9770141) {
        var205 = 0.016328957;
    } else {
        if (input[1] >= 1.8271755) {
            var205 = -0.027847925;
        } else {
            if (input[0] >= -0.8032295) {
                if (input[4] >= 0.0138815) {
                    if (input[5] >= -0.0144035) {
                        var205 = 0.019100554;
                    } else {
                        var205 = -0.027843941;
                    }
                } else {
                    if (input[5] >= -0.000788) {
                        var205 = -0.0023056227;
                    } else {
                        var205 = 0.052717675;
                    }
                }
            } else {
                if (input[0] >= -1.0775344) {
                    var205 = -0.027350176;
                } else {
                    var205 = -0.00093000144;
                }
            }
        }
    }
    double var206;
    if (input[3] >= -0.04065) {
        if (input[3] >= 0.0018485) {
            if (input[4] >= 0.179801) {
                var206 = -0.023651667;
            } else {
                if (input[5] >= -0.022142) {
                    if (input[5] >= 0.060047) {
                        var206 = 0.021571402;
                    } else {
                        var206 = -0.019255582;
                    }
                } else {
                    var206 = 0.04195128;
                }
            }
        } else {
            var206 = -0.028621588;
        }
    } else {
        if (input[4] >= -0.091157496) {
            var206 = 0.027109558;
        } else {
            var206 = -0.012909144;
        }
    }
    double var207;
    if (input[1] >= 0.6613995) {
        if (input[3] >= 0.2452455) {
            var207 = 0.034385953;
        } else {
            if (input[3] >= -0.230435) {
                if (input[1] >= 1.829271) {
                    var207 = 0.02647644;
                } else {
                    if (input[5] >= -0.002622) {
                        if (input[0] >= -0.649948) {
                            var207 = -0.018519316;
                        } else {
                            var207 = -0.063031524;
                        }
                    } else {
                        var207 = 0.010162668;
                    }
                }
            } else {
                var207 = 0.030171216;
            }
        }
    } else {
        var207 = -0.014138352;
    }
    double var208;
    if (input[0] >= -0.6384225) {
        if (input[2] >= 9.960512) {
            var208 = 0.018440755;
        } else {
            if (input[2] >= 9.3663225) {
                if (input[0] >= -0.52877545) {
                    var208 = -0.0067140036;
                } else {
                    var208 = -0.046974704;
                }
            } else {
                var208 = 0.005793979;
            }
        }
    } else {
        if (input[2] >= 10.2684965) {
            var208 = -0.012761599;
        } else {
            if (input[1] >= 1.6539855) {
                var208 = -0.0099079115;
            } else {
                var208 = 0.040010214;
            }
        }
    }
    double var209;
    if (input[5] >= -0.116819) {
        if (input[5] >= -0.022142) {
            if (input[0] >= -0.56440103) {
                if (input[0] >= -0.420326) {
                    var209 = 0.006908121;
                } else {
                    var209 = -0.0418588;
                }
            } else {
                if (input[2] >= 9.576635) {
                    var209 = 0.029409748;
                } else {
                    var209 = -0.015266277;
                }
            }
        } else {
            var209 = 0.030537894;
        }
    } else {
        if (input[5] >= -0.250623) {
            var209 = -0.030919526;
        } else {
            var209 = 0.010649227;
        }
    }
    double var210;
    if (input[0] >= -0.273556) {
        if (input[0] >= -0.065863) {
            var210 = 0.009177785;
        } else {
            var210 = -0.03013604;
        }
    } else {
        if (input[0] >= -0.589399) {
            if (input[5] >= 0.0242065) {
                var210 = -0.0038089454;
            } else {
                var210 = 0.038880177;
            }
        } else {
            if (input[5] >= -0.032248497) {
                if (input[5] >= 0.0486765) {
                    var210 = -0.008349917;
                } else {
                    var210 = 0.032540705;
                }
            } else {
                var210 = -0.02733106;
            }
        }
    }
    double var211;
    if (input[2] >= 9.7496) {
        if (input[2] >= 9.960512) {
            if (input[1] >= 0.5257065) {
                var211 = 0.027017256;
            } else {
                var211 = -0.028797992;
            }
        } else {
            var211 = -0.026667254;
        }
    } else {
        if (input[5] >= 0.0300265) {
            if (input[3] >= 0.0114805) {
                var211 = -0.00008738434;
            } else {
                var211 = 0.03531934;
            }
        } else {
            if (input[1] >= 1.7372875) {
                var211 = 0.017763065;
            } else {
                if (input[5] >= -0.0504165) {
                    var211 = -0.027036695;
                } else {
                    var211 = -0.0035864052;
                }
            }
        }
    }
    double var212;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.207641) {
            var212 = 0.027032193;
        } else {
            if (input[4] >= 0.044221) {
                var212 = 0.025857082;
            } else {
                if (input[3] >= 0.022609498) {
                    var212 = 0.010918178;
                } else {
                    if (input[4] >= -0.016673) {
                        var212 = -0.045134;
                    } else {
                        var212 = 0.0052060494;
                    }
                }
            }
        }
    } else {
        var212 = -0.01611486;
    }
    double var213;
    if (input[4] >= 0.03873) {
        if (input[5] >= -0.032874502) {
            if (input[1] >= 1.361419) {
                var213 = 0.00041256368;
            } else {
                var213 = -0.03705792;
            }
        } else {
            var213 = 0.012836105;
        }
    } else {
        if (input[0] >= -0.143776) {
            var213 = -0.020413637;
        } else {
            if (input[3] >= 0.0471755) {
                var213 = -0.016529158;
            } else {
                if (input[3] >= -0.179937) {
                    if (input[0] >= -0.712668) {
                        var213 = 0.060465094;
                    } else {
                        var213 = 0.009472436;
                    }
                } else {
                    var213 = -0.011943504;
                }
            }
        }
    }
    double var214;
    if (input[3] >= -0.3084715) {
        if (input[0] >= -0.931064) {
            if (input[3] >= -0.080849) {
                if (input[2] >= 9.827963) {
                    var214 = -0.022597134;
                } else {
                    if (input[3] >= 0.013016) {
                        if (input[3] >= 0.1779595) {
                            var214 = 0.021355072;
                        } else {
                            var214 = -0.031815946;
                        }
                    } else {
                        var214 = 0.04877048;
                    }
                }
            } else {
                var214 = -0.037874058;
            }
        } else {
            var214 = 0.02258892;
        }
    } else {
        var214 = 0.019402536;
    }
    double var215;
    if (input[1] >= 1.4861845) {
        if (input[0] >= -0.734373) {
            if (input[1] >= 1.9770141) {
                var215 = 0.006838486;
            } else {
                if (input[1] >= 1.7950675) {
                    var215 = -0.05279472;
                } else {
                    var215 = 0.0043904255;
                }
            }
        } else {
            var215 = 0.016969945;
        }
    } else {
        if (input[0] >= -0.815055) {
            if (input[5] >= -0.0084955) {
                var215 = 0.03619893;
            } else {
                var215 = -0.0056422357;
            }
        } else {
            var215 = -0.013711582;
        }
    }
    double var216;
    if (input[3] >= -0.04065) {
        if (input[3] >= 0.0018485) {
            if (input[1] >= 1.8690135) {
                var216 = -0.01653267;
            } else {
                if (input[0] >= -0.6754705) {
                    var216 = 0.03376817;
                } else {
                    var216 = -0.009816544;
                }
            }
        } else {
            var216 = -0.030026885;
        }
    } else {
        if (input[3] >= -0.296566) {
            var216 = 0.027716508;
        } else {
            var216 = -0.013053332;
        }
    }
    double var217;
    if (input[3] >= -0.3084715) {
        if (input[1] >= 0.628019) {
            if (input[3] >= 0.1779595) {
                var217 = 0.023655314;
            } else {
                if (input[5] >= -0.0040800003) {
                    if (input[1] >= 1.265094) {
                        if (input[0] >= -0.51403105) {
                            var217 = -0.030595195;
                        } else {
                            var217 = 0.01865749;
                        }
                    } else {
                        var217 = -0.05450588;
                    }
                } else {
                    var217 = 0.00046819999;
                }
            }
        } else {
            var217 = 0.021627825;
        }
    } else {
        var217 = 0.018685916;
    }
    double var218;
    if (input[3] >= 0.291249) {
        var218 = -0.017719936;
    } else {
        if (input[2] >= 9.689276) {
            if (input[3] >= 0.010009) {
                var218 = 0.044091344;
            } else {
                if (input[3] >= -0.058870003) {
                    var218 = -0.025432767;
                } else {
                    var218 = 0.022934048;
                }
            }
        } else {
            if (input[2] >= 9.355395) {
                var218 = -0.039815973;
            } else {
                if (input[2] >= 8.572523) {
                    var218 = 0.02895079;
                } else {
                    var218 = -0.008013254;
                }
            }
        }
    }
    double var219;
    if (input[2] >= 9.7496) {
        if (input[5] >= 0.0492865) {
            var219 = -0.026289443;
        } else {
            if (input[2] >= 10.233021) {
                var219 = -0.0074626533;
            } else {
                var219 = 0.020906776;
            }
        }
    } else {
        if (input[2] >= 9.533001) {
            var219 = 0.029298022;
        } else {
            if (input[0] >= -0.713641) {
                if (input[2] >= 8.485853) {
                    var219 = -0.035389684;
                } else {
                    var219 = 0.013186664;
                }
            } else {
                var219 = 0.017285958;
            }
        }
    }
    double var220;
    if (input[2] >= 10.619368) {
        var220 = 0.014502429;
    } else {
        if (input[2] >= 9.7496) {
            if (input[5] >= 0.07642) {
                var220 = -0.03246252;
            } else {
                var220 = -0.0040069045;
            }
        } else {
            if (input[2] >= 9.24717) {
                if (input[1] >= 1.736464) {
                    var220 = -0.0044938456;
                } else {
                    var220 = 0.0372797;
                }
            } else {
                if (input[1] >= 1.758768) {
                    var220 = 0.014217365;
                } else {
                    var220 = -0.023314025;
                }
            }
        }
    }
    double var221;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[5] >= 0.187219) {
                var221 = -0.016301544;
            } else {
                if (input[3] >= -0.022045001) {
                    if (input[3] >= 0.0189775) {
                        var221 = 0.034239974;
                    } else {
                        var221 = -0.02679118;
                    }
                } else {
                    var221 = 0.05524276;
                }
            }
        } else {
            var221 = -0.015619864;
        }
    } else {
        if (input[3] >= 0.034902498) {
            var221 = -0.02732977;
        } else {
            var221 = 0.007508514;
        }
    }
    double var222;
    if (input[5] >= 0.029703) {
        if (input[4] >= 0.048139) {
            var222 = -0.014431476;
        } else {
            if (input[4] >= -0.1638705) {
                var222 = 0.044277076;
            } else {
                var222 = -0.007944538;
            }
        }
    } else {
        if (input[4] >= -0.112453) {
            if (input[4] >= -0.0062825) {
                if (input[1] >= 1.660497) {
                    var222 = -0.01708576;
                } else {
                    var222 = 0.019248623;
                }
            } else {
                var222 = -0.037412614;
            }
        } else {
            var222 = 0.013782567;
        }
    }
    double var223;
    if (input[2] >= 9.649159) {
        if (input[5] >= 0.013040001) {
            if (input[0] >= -0.7316035) {
                var223 = 0.028711973;
            } else {
                var223 = -0.019827835;
            }
        } else {
            if (input[0] >= -0.665142) {
                var223 = -0.035777297;
            } else {
                var223 = 0.0064516827;
            }
        }
    } else {
        if (input[2] >= 9.24717) {
            var223 = 0.030750334;
        } else {
            if (input[1] >= 1.758768) {
                var223 = 0.013758308;
            } else {
                var223 = -0.019503236;
            }
        }
    }
    double var224;
    if (input[3] >= -0.296566) {
        if (input[2] >= 9.649159) {
            if (input[1] >= 0.91302645) {
                if (input[0] >= -0.710273) {
                    var224 = 0.005245713;
                } else {
                    var224 = -0.04601033;
                }
            } else {
                var224 = 0.013752093;
            }
        } else {
            if (input[2] >= 8.544607) {
                var224 = 0.032988593;
            } else {
                var224 = -0.006595601;
            }
        }
    } else {
        var224 = -0.014619606;
    }
    double var225;
    if (input[2] >= 9.6779) {
        if (input[1] >= 0.7206015) {
            if (input[0] >= -0.4872365) {
                var225 = -0.009885572;
            } else {
                if (input[0] >= -0.728909) {
                    var225 = 0.05473663;
                } else {
                    var225 = -0.0019560747;
                }
            }
        } else {
            var225 = -0.015783451;
        }
    } else {
        if (input[2] >= 9.346714) {
            var225 = -0.031926583;
        } else {
            if (input[2] >= 8.544607) {
                var225 = 0.025916854;
            } else {
                var225 = -0.008395464;
            }
        }
    }
    double var226;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.7111671) {
            if (input[1] >= 2.0526066) {
                var226 = 0.0067571406;
            } else {
                var226 = -0.043419197;
            }
        } else {
            if (input[5] >= -0.0072505) {
                if (input[2] >= 9.792261) {
                    var226 = -0.0002259185;
                } else {
                    var226 = 0.042208366;
                }
            } else {
                var226 = -0.009169238;
            }
        }
    } else {
        if (input[2] >= 10.118284) {
            var226 = -0.01054351;
        } else {
            var226 = 0.029717598;
        }
    }
    double var227;
    if (input[2] >= 10.619368) {
        var227 = 0.016137067;
    } else {
        if (input[4] >= -0.200299) {
            if (input[5] >= -0.116819) {
                if (input[3] >= -0.038585) {
                    if (input[1] >= 1.736614) {
                        var227 = 0.024591507;
                    } else {
                        if (input[0] >= -0.64867604) {
                            var227 = -0.0039745797;
                        } else {
                            var227 = -0.04227187;
                        }
                    }
                } else {
                    var227 = 0.02369149;
                }
            } else {
                var227 = -0.03198858;
            }
        } else {
            var227 = 0.018103873;
        }
    }
    double var228;
    if (input[5] >= -0.073837504) {
        if (input[5] >= -0.007314) {
            if (input[0] >= -0.1803) {
                var228 = -0.023181537;
            } else {
                if (input[3] >= 0.0142435) {
                    var228 = -0.009261057;
                } else {
                    if (input[0] >= -0.770972) {
                        var228 = 0.044004533;
                    } else {
                        var228 = -0.007904071;
                    }
                }
            }
        } else {
            var228 = -0.024178322;
        }
    } else {
        if (input[0] >= -0.631462) {
            var228 = -0.0050211605;
        } else {
            var228 = 0.02820328;
        }
    }
    double var229;
    if (input[5] >= 0.048704) {
        if (input[5] >= 0.2887145) {
            var229 = 0.011007818;
        } else {
            if (input[0] >= -0.559911) {
                var229 = 0.009010775;
            } else {
                var229 = -0.038443744;
            }
        }
    } else {
        if (input[1] >= 1.870286) {
            var229 = -0.01632186;
        } else {
            if (input[4] >= -0.0133925) {
                if (input[4] >= 0.019358) {
                    var229 = 0.025582612;
                } else {
                    var229 = -0.029614048;
                }
            } else {
                var229 = 0.030583145;
            }
        }
    }
    double var230;
    if (input[3] >= -0.296566) {
        if (input[2] >= 9.649159) {
            if (input[0] >= -0.62757003) {
                if (input[2] >= 9.857302) {
                    var230 = 0.0054607047;
                } else {
                    var230 = -0.044650596;
                }
            } else {
                if (input[4] >= -0.0249855) {
                    var230 = 0.02956985;
                } else {
                    var230 = -0.010880083;
                }
            }
        } else {
            if (input[2] >= 8.572523) {
                var230 = 0.028639475;
            } else {
                var230 = -0.0030233185;
            }
        }
    } else {
        var230 = -0.0162782;
    }
    double var231;
    if (input[4] >= 0.03873) {
        if (input[5] >= -0.032874502) {
            var231 = -0.02414544;
        } else {
            var231 = 0.013041925;
        }
    } else {
        if (input[4] >= -0.0062825) {
            var231 = 0.025184268;
        } else {
            if (input[1] >= 1.6232245) {
                var231 = 0.015146219;
            } else {
                if (input[1] >= 1.2567115) {
                    var231 = -0.03789722;
                } else {
                    var231 = 0.00745474;
                }
            }
        }
    }
    double var232;
    if (input[2] >= 9.6779) {
        if (input[1] >= 1.2255759) {
            var232 = 0.028181246;
        } else {
            if (input[1] >= 0.91302645) {
                var232 = -0.028718704;
            } else {
                var232 = 0.0090052;
            }
        }
    } else {
        if (input[2] >= 8.918379) {
            if (input[5] >= 0.0104955) {
                var232 = -0.03676724;
            } else {
                var232 = 0.005514307;
            }
        } else {
            var232 = 0.012303213;
        }
    }
    double var233;
    if (input[3] >= -0.3084715) {
        if (input[0] >= -0.931064) {
            if (input[3] >= -0.080849) {
                if (input[2] >= 9.81217) {
                    var233 = -0.019114254;
                } else {
                    if (input[3] >= 0.013016) {
                        if (input[3] >= 0.171078) {
                            var233 = 0.01714243;
                        } else {
                            var233 = -0.027076015;
                        }
                    } else {
                        var233 = 0.041536327;
                    }
                }
            } else {
                var233 = -0.036376495;
            }
        } else {
            var233 = 0.02241932;
        }
    } else {
        var233 = 0.015015124;
    }
    double var234;
    if (input[1] >= 1.9521655) {
        var234 = -0.014221932;
    } else {
        if (input[3] >= 0.0019655) {
            if (input[1] >= 1.361793) {
                var234 = 0.042763412;
            } else {
                if (input[2] >= 9.770557) {
                    var234 = 0.026558878;
                } else {
                    var234 = -0.033018157;
                }
            }
        } else {
            if (input[1] >= 1.499956) {
                var234 = -0.028339526;
            } else {
                if (input[2] >= 9.906699) {
                    var234 = -0.011252435;
                } else {
                    var234 = 0.027612742;
                }
            }
        }
    }
    double var235;
    if (input[3] >= 0.291249) {
        var235 = -0.015586687;
    } else {
        if (input[5] >= -0.15743801) {
            if (input[1] >= 1.829271) {
                var235 = 0.021570306;
            } else {
                if (input[3] >= 0.0412995) {
                    var235 = 0.015939562;
                } else {
                    if (input[1] >= 1.43065) {
                        var235 = -0.04354377;
                    } else {
                        if (input[2] >= 9.906699) {
                            var235 = -0.02688631;
                        } else {
                            var235 = 0.03225139;
                        }
                    }
                }
            }
        } else {
            var235 = 0.03086908;
        }
    }
    double var236;
    if (input[2] >= 10.619368) {
        var236 = 0.015542045;
    } else {
        if (input[4] >= -0.200299) {
            if (input[5] >= -0.116819) {
                if (input[3] >= -0.038585) {
                    if (input[1] >= 1.736614) {
                        var236 = 0.019823765;
                    } else {
                        if (input[3] >= 0.019081) {
                            var236 = 0.0020804692;
                        } else {
                            var236 = -0.036980286;
                        }
                    }
                } else {
                    var236 = 0.02341029;
                }
            } else {
                var236 = -0.03396426;
            }
        } else {
            var236 = 0.01755562;
        }
    }
    double var237;
    if (input[1] >= 1.9521655) {
        var237 = -0.015666073;
    } else {
        if (input[4] >= -0.074291006) {
            if (input[5] >= -0.0551365) {
                if (input[0] >= -0.71019804) {
                    if (input[2] >= 9.790316) {
                        var237 = -0.019188665;
                    } else {
                        var237 = 0.05692252;
                    }
                } else {
                    var237 = -0.027660524;
                }
            } else {
                var237 = 0.041741267;
            }
        } else {
            if (input[0] >= -0.61050546) {
                var237 = 0.017959354;
            } else {
                var237 = -0.030807566;
            }
        }
    }
    double var238;
    if (input[0] >= -0.69148695) {
        if (input[2] >= 9.960512) {
            var238 = 0.02488603;
        } else {
            if (input[4] >= -0.074329495) {
                if (input[4] >= 0.027625) {
                    var238 = -0.018912394;
                } else {
                    var238 = 0.025324045;
                }
            } else {
                var238 = -0.042349637;
            }
        }
    } else {
        if (input[2] >= 10.037527) {
            var238 = -0.011984039;
        } else {
            if (input[4] >= 0.010253999) {
                var238 = 0.003944417;
            } else {
                var238 = 0.038481683;
            }
        }
    }
    double var239;
    if (input[4] >= -0.115644) {
        if (input[2] >= 10.356064) {
            var239 = 0.028059646;
        } else {
            if (input[4] >= -0.0062825) {
                if (input[0] >= -0.6085595) {
                    var239 = -0.015848925;
                } else {
                    var239 = 0.0170752;
                }
            } else {
                var239 = -0.03384449;
            }
        }
    } else {
        if (input[4] >= -0.264189) {
            var239 = 0.02929772;
        } else {
            var239 = -0.0054716975;
        }
    }
    double var240;
    if (input[5] >= 0.085074) {
        if (input[0] >= -0.487536) {
            var240 = -0.014260184;
        } else {
            var240 = 0.029159604;
        }
    } else {
        if (input[0] >= -0.25491953) {
            var240 = 0.023237506;
        } else {
            if (input[4] >= 0.008737) {
                var240 = 0.0077927825;
            } else {
                if (input[3] >= -0.029260501) {
                    if (input[1] >= 1.3150151) {
                        var240 = -0.008865493;
                    } else {
                        var240 = -0.046943877;
                    }
                } else {
                    var240 = 0.007219354;
                }
            }
        }
    }
    double var241;
    if (input[4] >= 0.03873) {
        if (input[4] >= 0.0939405) {
            var241 = 0.0049143303;
        } else {
            var241 = -0.027477374;
        }
    } else {
        if (input[0] >= -0.143776) {
            var241 = -0.019618291;
        } else {
            if (input[1] >= 1.43065) {
                if (input[3] >= -0.021208499) {
                    var241 = 0.011014484;
                } else {
                    var241 = -0.02163514;
                }
            } else {
                if (input[5] >= -0.0084955) {
                    var241 = 0.042800345;
                } else {
                    var241 = 0.0037195988;
                }
            }
        }
    }
    double var242;
    if (input[4] >= 0.179801) {
        var242 = -0.013897407;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[0] >= -0.6023475) {
                if (input[0] >= -0.143776) {
                    var242 = -0.01682256;
                } else {
                    if (input[5] >= 0.013038) {
                        var242 = 0.03958678;
                    } else {
                        var242 = -0.0026344608;
                    }
                }
            } else {
                var242 = -0.036630873;
            }
        } else {
            if (input[5] >= -0.0319235) {
                var242 = 0.03724027;
            } else {
                var242 = -0.007243275;
            }
        }
    }
    double var243;
    if (input[5] >= -0.14825949) {
        if (input[0] >= -0.420326) {
            if (input[0] >= -0.075518) {
                var243 = -0.01079186;
            } else {
                var243 = 0.030544609;
            }
        } else {
            if (input[2] >= 9.693466) {
                if (input[3] >= -0.0191495) {
                    var243 = 0.029034553;
                } else {
                    var243 = -0.019714264;
                }
            } else {
                if (input[1] >= 1.6726971) {
                    var243 = 0.0020935363;
                } else {
                    var243 = -0.043006733;
                }
            }
        }
    } else {
        var243 = 0.016673615;
    }
    double var244;
    if (input[0] >= -0.1338215) {
        var244 = 0.017570347;
    } else {
        if (input[3] >= -0.230435) {
            if (input[3] >= -0.035361) {
                if (input[3] >= 0.1086545) {
                    if (input[3] >= 0.2452455) {
                        var244 = -0.0011395657;
                    } else {
                        var244 = -0.03438098;
                    }
                } else {
                    if (input[0] >= -0.570688) {
                        var244 = -0.0134312445;
                    } else {
                        var244 = 0.042611036;
                    }
                }
            } else {
                var244 = -0.032706905;
            }
        } else {
            var244 = 0.025875928;
        }
    }
    double var245;
    if (input[1] >= 0.6613995) {
        if (input[5] >= -0.086994) {
            if (input[0] >= -0.420326) {
                var245 = 0.021962227;
            } else {
                if (input[5] >= 0.1032365) {
                    var245 = 0.011053378;
                } else {
                    if (input[0] >= -0.710273) {
                        var245 = 0.0021077355;
                    } else {
                        var245 = -0.047803275;
                    }
                }
            }
        } else {
            var245 = 0.0252192;
        }
    } else {
        var245 = -0.014394473;
    }
    double var246;
    if (input[3] >= -0.04065) {
        if (input[1] >= 1.965862) {
            var246 = -0.0284059;
        } else {
            if (input[1] >= 1.361793) {
                var246 = 0.030391974;
            } else {
                if (input[1] >= 1.0822495) {
                    var246 = -0.03340606;
                } else {
                    var246 = 0.006163218;
                }
            }
        }
    } else {
        if (input[3] >= -0.296566) {
            var246 = 0.02728841;
        } else {
            var246 = -0.014302046;
        }
    }
    double var247;
    if (input[2] >= 9.7496) {
        if (input[2] >= 9.859398) {
            if (input[5] >= 0.0492865) {
                var247 = -0.017973978;
            } else {
                var247 = 0.02178226;
            }
        } else {
            var247 = -0.030793278;
        }
    } else {
        if (input[1] >= 1.9083065) {
            var247 = -0.014510225;
        } else {
            if (input[1] >= 1.5521226) {
                var247 = 0.038522925;
            } else {
                if (input[1] >= 1.2528945) {
                    var247 = -0.021726236;
                } else {
                    var247 = 0.017116915;
                }
            }
        }
    }
    double var248;
    if (input[1] >= 0.6613995) {
        if (input[3] >= -0.230435) {
            if (input[3] >= -0.004659) {
                if (input[1] >= 1.6933535) {
                    var248 = -0.013930781;
                } else {
                    var248 = 0.032779016;
                }
            } else {
                if (input[0] >= -0.68422747) {
                    var248 = -0.00036685503;
                } else {
                    var248 = -0.04022662;
                }
            }
        } else {
            var248 = 0.028769244;
        }
    } else {
        var248 = -0.014228938;
    }
    double var249;
    if (input[1] >= 1.9770141) {
        var249 = 0.015462655;
    } else {
        if (input[1] >= 1.8262019) {
            var249 = -0.027171936;
        } else {
            if (input[3] >= -0.038585) {
                if (input[3] >= 0.0412995) {
                    var249 = 0.01195457;
                } else {
                    if (input[2] >= 9.723405) {
                        var249 = -0.0038891342;
                    } else {
                        var249 = -0.034778763;
                    }
                }
            } else {
                if (input[1] >= 1.072744) {
                    var249 = 0.036906157;
                } else {
                    var249 = -0.010691239;
                }
            }
        }
    }
    double var250;
    if (input[0] >= -0.6384225) {
        if (input[0] >= -0.251552) {
            var250 = 0.011203447;
        } else {
            if (input[5] >= -0.0039505) {
                var250 = 0.0035636872;
            } else {
                var250 = -0.03820093;
            }
        }
    } else {
        if (input[0] >= -0.7613915) {
            var250 = 0.02319214;
        } else {
            if (input[0] >= -0.931064) {
                var250 = -0.0195718;
            } else {
                var250 = 0.011591492;
            }
        }
    }
    double var251;
    if (input[3] >= -0.296566) {
        if (input[3] >= -0.04065) {
            if (input[5] >= 0.0850935) {
                var251 = 0.014083238;
            } else {
                if (input[2] >= 10.194176) {
                    var251 = -0.035971034;
                } else {
                    if (input[2] >= 9.375828) {
                        var251 = 0.022364186;
                    } else {
                        var251 = -0.022550186;
                    }
                }
            }
        } else {
            var251 = 0.023513893;
        }
    } else {
        var251 = -0.016195511;
    }
    double var252;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.6933535) {
            if (input[0] >= -0.580792) {
                var252 = 0.003959953;
            } else {
                var252 = -0.047652196;
            }
        } else {
            if (input[0] >= -0.56073403) {
                if (input[0] >= -0.436043) {
                    var252 = 0.016563985;
                } else {
                    var252 = -0.033872824;
                }
            } else {
                var252 = 0.036469188;
            }
        }
    } else {
        if (input[2] >= 10.118284) {
            var252 = -0.011671984;
        } else {
            var252 = 0.028480908;
        }
    }
    double var253;
    if (input[1] >= 1.9770141) {
        var253 = 0.014153973;
    } else {
        if (input[3] >= 0.108688995) {
            if (input[3] >= 0.245265) {
                var253 = 0.0040924656;
            } else {
                var253 = -0.03547337;
            }
        } else {
            if (input[2] >= 9.141789) {
                if (input[2] >= 9.676028) {
                    if (input[0] >= -0.665666) {
                        var253 = -0.009390863;
                    } else {
                        var253 = 0.032481004;
                    }
                } else {
                    var253 = -0.037744123;
                }
            } else {
                var253 = 0.027677663;
            }
        }
    }
    double var254;
    if (input[3] >= -0.3084715) {
        if (input[1] >= 0.628019) {
            if (input[3] >= 0.1779595) {
                var254 = 0.021352326;
            } else {
                if (input[5] >= -0.0040800003) {
                    if (input[1] >= 1.265094) {
                        var254 = -0.0047943145;
                    } else {
                        var254 = -0.05337877;
                    }
                } else {
                    var254 = 0.0009767959;
                }
            }
        } else {
            var254 = 0.017495701;
        }
    } else {
        var254 = 0.015997335;
    }
    double var255;
    if (input[3] >= 0.235236) {
        var255 = -0.017152322;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[0] >= -0.3920345) {
                var255 = 0.013393726;
            } else {
                if (input[4] >= 0.0084305) {
                    var255 = 0.004291242;
                } else {
                    var255 = -0.038375344;
                }
            }
        } else {
            if (input[3] >= -0.035569) {
                var255 = 0.04824784;
            } else {
                var255 = -0.0048913993;
            }
        }
    }
    double var256;
    if (input[1] >= 0.6613995) {
        if (input[3] >= -0.230435) {
            if (input[3] >= -0.0354135) {
                if (input[0] >= -0.273556) {
                    var256 = -0.021087535;
                } else {
                    if (input[5] >= 0.028944999) {
                        var256 = -0.009348486;
                    } else {
                        var256 = 0.045876674;
                    }
                }
            } else {
                var256 = -0.030538635;
            }
        } else {
            var256 = 0.026657093;
        }
    } else {
        var256 = -0.015463708;
    }
    double var257;
    if (input[3] >= -0.296566) {
        if (input[3] >= -0.029260501) {
            if (input[5] >= 0.0850935) {
                var257 = 0.015375413;
            } else {
                if (input[3] >= 0.0496305) {
                    var257 = 0.007983182;
                } else {
                    if (input[5] >= 0.008911) {
                        var257 = -0.043595124;
                    } else {
                        var257 = -0.0025328663;
                    }
                }
            }
        } else {
            if (input[0] >= -0.6907385) {
                var257 = 0.03867261;
            } else {
                var257 = -0.003558679;
            }
        }
    } else {
        var257 = -0.015411227;
    }
    double var258;
    if (input[3] >= 0.108812496) {
        if (input[0] >= -0.570688) {
            var258 = 0.011667977;
        } else {
            var258 = -0.028384987;
        }
    } else {
        if (input[5] >= 0.0354945) {
            if (input[0] >= -0.544268) {
                var258 = -0.0020475176;
            } else {
                var258 = 0.036997765;
            }
        } else {
            if (input[4] >= -0.0132135) {
                if (input[2] >= 9.373882) {
                    var258 = -0.000019487863;
                } else {
                    var258 = -0.038849518;
                }
            } else {
                var258 = 0.020363782;
            }
        }
    }
    double var259;
    if (input[2] >= 9.743913) {
        if (input[2] >= 9.843306) {
            if (input[1] >= 0.55100405) {
                if (input[5] >= 0.035384998) {
                    var259 = -0.0048781447;
                } else {
                    var259 = 0.033258617;
                }
            } else {
                var259 = -0.019246297;
            }
        } else {
            var259 = -0.031295363;
        }
    } else {
        if (input[4] >= 0.0262595) {
            var259 = -0.012047403;
        } else {
            if (input[0] >= -0.67562056) {
                var259 = 0.033852294;
            } else {
                var259 = -0.0044630854;
            }
        }
    }
    double var260;
    if (input[0] >= -0.1338215) {
        var260 = 0.013894666;
    } else {
        if (input[3] >= -0.230435) {
            if (input[3] >= -0.075501) {
                if (input[3] >= 0.1086545) {
                    if (input[1] >= 1.3736935) {
                        var260 = 0.0006026954;
                    } else {
                        var260 = -0.030431902;
                    }
                } else {
                    if (input[2] >= 9.906699) {
                        var260 = -0.01184143;
                    } else {
                        var260 = 0.032069594;
                    }
                }
            } else {
                var260 = -0.033662483;
            }
        } else {
            var260 = 0.020511687;
        }
    }
    double var261;
    if (input[3] >= -0.296566) {
        if (input[3] >= -0.04065) {
            if (input[5] >= 0.0187355) {
                if (input[3] >= 0.1422555) {
                    var261 = -0.01588053;
                } else {
                    var261 = 0.031892758;
                }
            } else {
                if (input[3] >= 0.0018485) {
                    var261 = 0.004127922;
                } else {
                    var261 = -0.03826408;
                }
            }
        } else {
            var261 = 0.023398288;
        }
    } else {
        var261 = -0.016540214;
    }
    double var262;
    if (input[1] >= 1.4861845) {
        if (input[1] >= 1.9770141) {
            var262 = 0.010711873;
        } else {
            if (input[2] >= 9.602606) {
                var262 = -0.033321165;
            } else {
                var262 = 0.0047483826;
            }
        }
    } else {
        if (input[1] >= 0.6613995) {
            if (input[5] >= 0.003071) {
                var262 = -0.010523471;
            } else {
                var262 = 0.04101462;
            }
        } else {
            var262 = -0.010052241;
        }
    }
    double var263;
    if (input[2] >= 9.6779) {
        if (input[5] >= 0.013040001) {
            if (input[1] >= 1.0932515) {
                var263 = 0.035059914;
            } else {
                var263 = 0.0049524335;
            }
        } else {
            if (input[5] >= -0.034536503) {
                var263 = -0.03847435;
            } else {
                var263 = 0.016913617;
            }
        }
    } else {
        if (input[5] >= 0.15826151) {
            var263 = -0.027937558;
        } else {
            if (input[5] >= -0.04699) {
                var263 = 0.023221778;
            } else {
                var263 = -0.018146802;
            }
        }
    }
    double var264;
    if (input[3] >= -0.3084715) {
        if (input[1] >= 0.628019) {
            if (input[3] >= 0.1779595) {
                var264 = 0.021641985;
            } else {
                if (input[5] >= 0.0117935) {
                    if (input[1] >= 1.3380675) {
                        var264 = -0.008383602;
                    } else {
                        var264 = -0.045964245;
                    }
                } else {
                    if (input[3] >= -0.026375) {
                        var264 = 0.02378932;
                    } else {
                        var264 = -0.03104491;
                    }
                }
            }
        } else {
            var264 = 0.021656198;
        }
    } else {
        var264 = 0.014697636;
    }
    double var265;
    if (input[3] >= -0.0071305) {
        if (input[5] >= 0.0850935) {
            var265 = 0.017073806;
        } else {
            if (input[3] >= 0.0496305) {
                var265 = 0.006012357;
            } else {
                var265 = -0.038835738;
            }
        }
    } else {
        if (input[5] >= 0.1582765) {
            var265 = -0.01583443;
        } else {
            if (input[4] >= 0.0141675) {
                var265 = -0.0029865527;
            } else {
                var265 = 0.031283252;
            }
        }
    }
    double var266;
    if (input[3] >= 0.235236) {
        var266 = -0.015660027;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[0] >= -0.3920345) {
                var266 = 0.014564632;
            } else {
                if (input[4] >= -0.0003275) {
                    var266 = 0.0020394134;
                } else {
                    var266 = -0.037798233;
                }
            }
        } else {
            if (input[3] >= -0.035569) {
                var266 = 0.040734284;
            } else {
                var266 = -0.00046796605;
            }
        }
    }
    double var267;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[3] >= -0.021978) {
                if (input[3] >= 0.049597003) {
                    var267 = 0.018131314;
                } else {
                    var267 = -0.022869056;
                }
            } else {
                var267 = 0.036067706;
            }
        } else {
            var267 = -0.016037412;
        }
    } else {
        var267 = -0.012279241;
    }
    double var268;
    if (input[3] >= 0.108812496) {
        if (input[4] >= -0.0325885) {
            var268 = 0.0062714475;
        } else {
            var268 = -0.024012765;
        }
    } else {
        if (input[0] >= -0.143776) {
            var268 = -0.017522663;
        } else {
            if (input[5] >= 0.010767) {
                if (input[2] >= 9.689575) {
                    var268 = 0.038434245;
                } else {
                    var268 = 0.0029771577;
                }
            } else {
                if (input[5] >= -0.087015495) {
                    var268 = -0.022244569;
                } else {
                    var268 = 0.01973063;
                }
            }
        }
    }
    double var269;
    if (input[4] >= 0.179801) {
        var269 = -0.01541187;
    } else {
        if (input[0] >= -0.143776) {
            var269 = -0.017804304;
        } else {
            if (input[4] >= 0.008737) {
                var269 = 0.030301671;
            } else {
                if (input[0] >= -0.8840615) {
                    if (input[1] >= 1.441652) {
                        var269 = -0.011337043;
                    } else {
                        var269 = 0.03788723;
                    }
                } else {
                    var269 = -0.027789757;
                }
            }
        }
    }
    double var270;
    if (input[0] >= -0.1338215) {
        var270 = 0.016832633;
    } else {
        if (input[4] >= 0.03873) {
            if (input[1] >= 1.3615685) {
                var270 = 0.0046241083;
            } else {
                var270 = -0.03742173;
            }
        } else {
            if (input[1] >= 1.43065) {
                if (input[4] >= -0.1577385) {
                    var270 = 0.0104897255;
                } else {
                    var270 = -0.030966613;
                }
            } else {
                if (input[0] >= -0.71349096) {
                    var270 = 0.03290993;
                } else {
                    var270 = -0.0019340069;
                }
            }
        }
    }
    double var271;
    if (input[4] >= -0.115644) {
        if (input[2] >= 10.3126545) {
            var271 = 0.026822751;
        } else {
            if (input[2] >= 9.346714) {
                if (input[4] >= -0.0062135) {
                    if (input[5] >= 0.029306) {
                        var271 = -0.027538704;
                    } else {
                        var271 = 0.01049362;
                    }
                } else {
                    var271 = -0.043561887;
                }
            } else {
                if (input[2] >= 8.379799) {
                    var271 = 0.01718652;
                } else {
                    var271 = -0.0059538293;
                }
            }
        }
    } else {
        if (input[3] >= -0.080745) {
            var271 = 0.02547176;
        } else {
            var271 = -0.005040266;
        }
    }
    double var272;
    if (input[4] >= -0.211275) {
        if (input[2] >= 10.3126545) {
            var272 = 0.019806748;
        } else {
            if (input[5] >= 0.232092) {
                var272 = 0.011349732;
            } else {
                if (input[2] >= 9.153989) {
                    if (input[3] >= -0.017464) {
                        var272 = -0.0033899082;
                    } else {
                        var272 = -0.051792443;
                    }
                } else {
                    var272 = 0.011014658;
                }
            }
        }
    } else {
        var272 = 0.014386986;
    }
    double var273;
    if (input[2] >= 9.743913) {
        if (input[2] >= 9.960512) {
            if (input[0] >= -0.902324) {
                var273 = 0.023686841;
            } else {
                var273 = -0.020053172;
            }
        } else {
            var273 = -0.02477813;
        }
    } else {
        if (input[2] >= 9.24717) {
            if (input[1] >= 1.7146095) {
                var273 = 0.0029931676;
            } else {
                var273 = 0.033589773;
            }
        } else {
            if (input[2] >= 8.485853) {
                var273 = -0.023568204;
            } else {
                var273 = 0.007978269;
            }
        }
    }
    double var274;
    if (input[2] >= 10.279947) {
        var274 = -0.013335236;
    } else {
        if (input[4] >= -0.18845901) {
            if (input[1] >= 1.253718) {
                if (input[2] >= 8.527243) {
                    if (input[3] >= 0.01889) {
                        var274 = -0.033079617;
                    } else {
                        var274 = 0.040199667;
                    }
                } else {
                    var274 = -0.038287167;
                }
            } else {
                var274 = 0.018197056;
            }
        } else {
            var274 = 0.030478358;
        }
    }
    double var275;
    if (input[1] >= 1.9770141) {
        var275 = 0.014972956;
    } else {
        if (input[2] >= 9.141116) {
            if (input[3] >= -0.1798135) {
                if (input[0] >= -0.8438705) {
                    if (input[4] >= -0.064744) {
                        if (input[1] >= 1.2264745) {
                            var275 = 0.006177445;
                        } else {
                            var275 = -0.03878644;
                        }
                    } else {
                        var275 = 0.014238829;
                    }
                } else {
                    var275 = 0.026974555;
                }
            } else {
                var275 = -0.031078994;
            }
        } else {
            var275 = 0.013830684;
        }
    }
    double var276;
    if (input[3] >= -0.303054) {
        if (input[5] >= -0.209841) {
            if (input[5] >= 0.048704) {
                if (input[5] >= 0.207641) {
                    var276 = 0.005990622;
                } else {
                    var276 = -0.028335111;
                }
            } else {
                if (input[4] >= -0.016539) {
                    if (input[4] >= 0.018236998) {
                        var276 = 0.029591825;
                    } else {
                        var276 = -0.03480142;
                    }
                } else {
                    var276 = 0.04038414;
                }
            }
        } else {
            var276 = -0.02520575;
        }
    } else {
        var276 = 0.015022334;
    }
    double var277;
    if (input[4] >= -0.024004001) {
        if (input[0] >= -0.4700225) {
            var277 = 0.025651092;
        } else {
            if (input[0] >= -0.6284685) {
                var277 = -0.032599777;
            } else {
                if (input[3] >= -0.017301) {
                    var277 = 0.03351681;
                } else {
                    var277 = -0.014328991;
                }
            }
        }
    } else {
        if (input[2] >= 9.6540985) {
            if (input[2] >= 9.962907) {
                var277 = -0.002691194;
            } else {
                var277 = -0.033698063;
            }
        } else {
            var277 = 0.016301146;
        }
    }
    double var278;
    if (input[2] >= 9.24717) {
        if (input[2] >= 9.649159) {
            if (input[4] >= -0.0239945) {
                if (input[0] >= -0.5565425) {
                    var278 = -0.009315937;
                } else {
                    var278 = 0.026138837;
                }
            } else {
                if (input[0] >= -0.61050546) {
                    var278 = 0.0010398134;
                } else {
                    var278 = -0.027722154;
                }
            }
        } else {
            var278 = 0.025208617;
        }
    } else {
        if (input[2] >= 8.485853) {
            var278 = -0.025371749;
        } else {
            var278 = 0.0070323655;
        }
    }
    double var279;
    if (input[2] >= 9.6779) {
        if (input[5] >= 0.013040001) {
            if (input[2] >= 10.146501) {
                var279 = 0.00531659;
            } else {
                var279 = 0.030938024;
            }
        } else {
            if (input[5] >= -0.041611) {
                var279 = -0.032966245;
            } else {
                var279 = 0.015250671;
            }
        }
    } else {
        if (input[2] >= 9.346714) {
            var279 = -0.024442052;
        } else {
            if (input[0] >= -0.437765) {
                var279 = -0.01545893;
            } else {
                var279 = 0.019638306;
            }
        }
    }
    double var280;
    if (input[2] >= 9.24717) {
        if (input[2] >= 9.649159) {
            if (input[4] >= -0.037582003) {
                if (input[0] >= -0.54337) {
                    var280 = -0.010461973;
                } else {
                    var280 = 0.02242036;
                }
            } else {
                if (input[0] >= -0.61050546) {
                    var280 = 0.0023929211;
                } else {
                    var280 = -0.0278909;
                }
            }
        } else {
            var280 = 0.024491804;
        }
    } else {
        if (input[1] >= 1.7118405) {
            var280 = 0.00883146;
        } else {
            var280 = -0.022557303;
        }
    }
    double var281;
    if (input[2] >= 9.6779) {
        if (input[0] >= -0.4872365) {
            var281 = -0.013049022;
        } else {
            if (input[0] >= -0.710273) {
                var281 = 0.045311645;
            } else {
                var281 = -0.00947126;
            }
        }
    } else {
        if (input[2] >= 9.346714) {
            var281 = -0.023302881;
        } else {
            if (input[0] >= -0.437765) {
                var281 = -0.012284455;
            } else {
                var281 = 0.017862968;
            }
        }
    }
    double var282;
    if (input[0] >= -0.1338215) {
        var282 = 0.014477203;
    } else {
        if (input[3] >= -0.230435) {
            if (input[2] >= 10.400147) {
                var282 = 0.014867204;
            } else {
                if (input[4] >= -0.0775155) {
                    if (input[2] >= 9.750574) {
                        var282 = -0.042109817;
                    } else {
                        if (input[1] >= 1.3615685) {
                            var282 = 0.011820471;
                        } else {
                            var282 = -0.030100295;
                        }
                    }
                } else {
                    var282 = 0.010366935;
                }
            }
        } else {
            var282 = 0.022155872;
        }
    }
    double var283;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.207641) {
            var283 = 0.026437957;
        } else {
            if (input[4] >= 0.044221) {
                var283 = 0.021456633;
            } else {
                if (input[3] >= 0.022609498) {
                    var283 = 0.009300207;
                } else {
                    if (input[4] >= -0.008325) {
                        var283 = -0.039531033;
                    } else {
                        var283 = 0.0012709141;
                    }
                }
            }
        }
    } else {
        var283 = -0.015524428;
    }
    double var284;
    if (input[3] >= 0.108812496) {
        if (input[0] >= -0.570688) {
            var284 = 0.008528009;
        } else {
            var284 = -0.024130173;
        }
    } else {
        if (input[1] >= 1.460438) {
            if (input[2] >= 9.022188) {
                var284 = 0.010009981;
            } else {
                var284 = -0.029829647;
            }
        } else {
            if (input[1] >= 1.0932515) {
                var284 = 0.03846499;
            } else {
                if (input[1] >= 0.627645) {
                    var284 = -0.020332888;
                } else {
                    var284 = 0.021023605;
                }
            }
        }
    }
    double var285;
    if (input[4] >= 0.065188006) {
        if (input[1] >= 1.660497) {
            var285 = -0.03224134;
        } else {
            var285 = 0.015545822;
        }
    } else {
        if (input[4] >= -0.024004001) {
            if (input[2] >= 9.453516) {
                var285 = 0.038745217;
            } else {
                var285 = -0.0111155175;
            }
        } else {
            if (input[0] >= -0.4629125) {
                var285 = -0.029162137;
            } else {
                if (input[0] >= -0.7286845) {
                    var285 = 0.024743414;
                } else {
                    var285 = -0.010448396;
                }
            }
        }
    }
    double var286;
    if (input[0] >= -0.1338215) {
        var286 = 0.014905235;
    } else {
        if (input[3] >= -0.230435) {
            if (input[5] >= 0.0486765) {
                if (input[5] >= 0.207694) {
                    var286 = -0.0005124894;
                } else {
                    var286 = -0.039375857;
                }
            } else {
                if (input[5] >= -0.03278) {
                    var286 = 0.028138982;
                } else {
                    if (input[0] >= -0.6822815) {
                        var286 = -0.0020550191;
                    } else {
                        var286 = -0.030586462;
                    }
                }
            }
        } else {
            var286 = 0.020314801;
        }
    }
    double var287;
    if (input[3] >= -0.296566) {
        if (input[3] >= -0.048334) {
            if (input[5] >= 0.0850935) {
                var287 = 0.014149337;
            } else {
                if (input[4] >= 0.0055235) {
                    var287 = 0.008054685;
                } else {
                    if (input[3] >= 0.018067) {
                        var287 = 0.0060227723;
                    } else {
                        var287 = -0.042871904;
                    }
                }
            }
        } else {
            var287 = 0.023415979;
        }
    } else {
        var287 = -0.015568751;
    }
    double var288;
    if (input[2] >= 9.021066) {
        if (input[3] >= 0.0142645) {
            if (input[1] >= 1.692006) {
                var288 = -0.036180925;
            } else {
                var288 = 0.0029474734;
            }
        } else {
            if (input[3] >= -0.186601) {
                if (input[2] >= 9.920095) {
                    var288 = -0.0014702865;
                } else {
                    var288 = 0.046189606;
                }
            } else {
                var288 = -0.022994224;
            }
        }
    } else {
        var288 = 0.012735661;
    }
    double var289;
    if (input[4] >= -0.211275) {
        if (input[2] >= 10.3126545) {
            var289 = 0.017482856;
        } else {
            if (input[4] >= -0.033878498) {
                if (input[4] >= 0.0262595) {
                    if (input[4] >= 0.0939405) {
                        var289 = 0.0055821785;
                    } else {
                        var289 = -0.028548239;
                    }
                } else {
                    var289 = 0.017782642;
                }
            } else {
                var289 = -0.028533716;
            }
        }
    } else {
        var289 = 0.01291241;
    }
    double var290;
    if (input[1] >= 0.7206015) {
        if (input[2] >= 9.764494) {
            if (input[4] >= 0.0078145005) {
                var290 = -0.008491512;
            } else {
                var290 = 0.035985347;
            }
        } else {
            if (input[3] >= 0.15262899) {
                var290 = 0.018102156;
            } else {
                if (input[2] >= 9.153989) {
                    var290 = -0.03330483;
                } else {
                    var290 = 0.0115877595;
                }
            }
        }
    } else {
        var290 = -0.01321626;
    }
    double var291;
    if (input[2] >= 9.743913) {
        if (input[2] >= 9.960512) {
            if (input[0] >= -0.902324) {
                var291 = 0.023158234;
            } else {
                var291 = -0.018662052;
            }
        } else {
            var291 = -0.02464951;
        }
    } else {
        if (input[2] >= 9.534199) {
            var291 = 0.02736693;
        } else {
            if (input[1] >= 1.9146686) {
                var291 = -0.02073898;
            } else {
                if (input[3] >= -0.006284) {
                    var291 = -0.005243354;
                } else {
                    var291 = 0.017650934;
                }
            }
        }
    }
    double var292;
    if (input[1] >= 1.9770141) {
        var292 = 0.015355133;
    } else {
        if (input[3] >= -0.2304275) {
            if (input[1] >= 0.628019) {
                if (input[3] >= -0.035203002) {
                    if (input[0] >= -0.571661) {
                        var292 = -0.024167074;
                    } else {
                        var292 = 0.027354127;
                    }
                } else {
                    var292 = -0.04502578;
                }
            } else {
                var292 = 0.015659166;
            }
        } else {
            var292 = 0.015109665;
        }
    }
    double var293;
    if (input[2] >= 10.279947) {
        var293 = -0.012762156;
    } else {
        if (input[1] >= 1.253718) {
            if (input[1] >= 1.5521226) {
                if (input[4] >= 0.0702185) {
                    var293 = -0.015538835;
                } else {
                    var293 = 0.023638349;
                }
            } else {
                var293 = -0.025766313;
            }
        } else {
            var293 = 0.021575369;
        }
    }
    double var294;
    if (input[1] >= 0.6613995) {
        if (input[3] >= -0.230435) {
            if (input[3] >= 0.197135) {
                var294 = 0.022275582;
            } else {
                if (input[0] >= -0.4411325) {
                    var294 = 0.021610454;
                } else {
                    if (input[1] >= 1.6552579) {
                        var294 = 0.008136537;
                    } else {
                        if (input[2] >= 9.724379) {
                            var294 = -0.004971116;
                        } else {
                            var294 = -0.055679925;
                        }
                    }
                }
            }
        } else {
            var294 = 0.023939474;
        }
    } else {
        var294 = -0.013648484;
    }
    double var295;
    if (input[3] >= -0.296566) {
        if (input[3] >= -0.029260501) {
            if (input[5] >= 0.0850935) {
                var295 = 0.015013002;
            } else {
                if (input[4] >= 0.0055235) {
                    var295 = 0.0063681784;
                } else {
                    if (input[3] >= 0.018067) {
                        var295 = 0.003459105;
                    } else {
                        var295 = -0.045420278;
                    }
                }
            }
        } else {
            var295 = 0.023016885;
        }
    } else {
        var295 = -0.0144775575;
    }
    double var296;
    if (input[3] >= 0.108812496) {
        if (input[4] >= -0.0325885) {
            var296 = 0.004397757;
        } else {
            var296 = -0.023886437;
        }
    } else {
        if (input[0] >= -0.143776) {
            var296 = -0.014948569;
        } else {
            if (input[4] >= -0.0132035) {
                if (input[1] >= 1.1645036) {
                    var296 = 0.01564086;
                } else {
                    var296 = -0.024442486;
                }
            } else {
                if (input[1] >= 1.43065) {
                    var296 = -0.00463181;
                } else {
                    var296 = 0.04604644;
                }
            }
        }
    }
    double var297;
    if (input[0] >= -0.1338215) {
        var297 = 0.013915417;
    } else {
        if (input[2] >= 9.678049) {
            if (input[5] >= 0.013040001) {
                var297 = 0.026750071;
            } else {
                var297 = -0.011858646;
            }
        } else {
            if (input[0] >= -0.69148695) {
                if (input[3] >= 0.017836) {
                    var297 = -0.043679886;
                } else {
                    var297 = -0.001970278;
                }
            } else {
                var297 = 0.009647098;
            }
        }
    }
    double var298;
    if (input[2] >= 9.743913) {
        if (input[2] >= 9.960512) {
            if (input[0] >= -0.902324) {
                var298 = 0.02006893;
            } else {
                var298 = -0.016281584;
            }
        } else {
            var298 = -0.025521168;
        }
    } else {
        if (input[1] >= 1.9083065) {
            var298 = -0.013400223;
        } else {
            if (input[0] >= -0.6821315) {
                var298 = 0.03308378;
            } else {
                var298 = -0.008826652;
            }
        }
    }
    double var299;
    if (input[5] >= -0.1572775) {
        if (input[3] >= -0.29794902) {
            if (input[2] >= 9.822498) {
                if (input[2] >= 10.392962) {
                    var299 = 0.008811164;
                } else {
                    var299 = -0.033780076;
                }
            } else {
                if (input[0] >= -0.67562056) {
                    var299 = 0.03936583;
                } else {
                    var299 = -0.019891627;
                }
            }
        } else {
            var299 = -0.022640701;
        }
    } else {
        var299 = 0.012862246;
    }
    double var300;
    if (input[0] >= -0.6384225) {
        if (input[2] >= 9.960512) {
            var300 = 0.008819876;
        } else {
            if (input[4] >= -0.0774975) {
                if (input[4] >= 0.0480835) {
                    var300 = -0.017923078;
                } else {
                    var300 = 0.022236157;
                }
            } else {
                var300 = -0.03709786;
            }
        }
    } else {
        if (input[0] >= -1.041085) {
            if (input[4] >= -0.0315695) {
                var300 = 0.03695268;
            } else {
                var300 = -0.011874902;
            }
        } else {
            var300 = -0.008782455;
        }
    }
    double var301;
    if (input[0] >= -0.273556) {
        var301 = -0.015119969;
    } else {
        if (input[0] >= -0.589399) {
            var301 = 0.018020326;
        } else {
            if (input[5] >= -0.032248497) {
                if (input[4] >= 0.026313) {
                    var301 = -0.0116304355;
                } else {
                    var301 = 0.024229115;
                }
            } else {
                var301 = -0.022296567;
            }
        }
    }
    double var302;
    if (input[0] >= -0.8274795) {
        if (input[4] >= -0.115644) {
            if (input[2] >= 9.346714) {
                if (input[4] >= 0.029079) {
                    var302 = -0.0021221966;
                } else {
                    var302 = -0.036720704;
                }
            } else {
                var302 = 0.012259552;
            }
        } else {
            var302 = 0.013186691;
        }
    } else {
        var302 = 0.01260662;
    }
    double var303;
    if (input[5] >= -0.1572775) {
        if (input[1] >= 1.51238) {
            if (input[5] >= 0.033438) {
                var303 = 0.007052696;
            } else {
                var303 = -0.032856878;
            }
        } else {
            if (input[2] >= 9.93746) {
                var303 = -0.014452188;
            } else {
                var303 = 0.025216317;
            }
        }
    } else {
        var303 = 0.01308954;
    }
    double var304;
    if (input[2] >= 9.6779) {
        if (input[1] >= 1.2255759) {
            var304 = 0.02472688;
        } else {
            if (input[1] >= 0.91302645) {
                var304 = -0.028103745;
            } else {
                var304 = 0.011367598;
            }
        }
    } else {
        if (input[5] >= 0.14650649) {
            var304 = -0.025725987;
        } else {
            if (input[2] >= 9.153989) {
                var304 = -0.015819464;
            } else {
                var304 = 0.021737766;
            }
        }
    }
    double var305;
    if (input[2] >= 9.24717) {
        if (input[2] >= 9.649159) {
            if (input[2] >= 9.764494) {
                if (input[1] >= 0.55100405) {
                    if (input[5] >= 0.0492865) {
                        var305 = -0.0068286425;
                    } else {
                        var305 = 0.031568963;
                    }
                } else {
                    var305 = -0.01832375;
                }
            } else {
                var305 = -0.0234348;
            }
        } else {
            var305 = 0.026302919;
        }
    } else {
        if (input[3] >= -0.0101149995) {
            var305 = -0.022300463;
        } else {
            var305 = 0.004030372;
        }
    }
    double var306;
    if (input[3] >= -0.303054) {
        if (input[2] >= 9.048159) {
            if (input[2] >= 9.634115) {
                if (input[1] >= 1.071996) {
                    if (input[4] >= 0.0049235) {
                        var306 = -0.03486923;
                    } else {
                        var306 = 0.0037358985;
                    }
                } else {
                    var306 = 0.011224533;
                }
            } else {
                var306 = 0.024348287;
            }
        } else {
            var306 = -0.024189653;
        }
    } else {
        var306 = 0.0150259705;
    }
    double var307;
    if (input[0] >= -0.8274795) {
        if (input[1] >= 1.7111671) {
            if (input[1] >= 1.9770141) {
                var307 = 0.008032374;
            } else {
                var307 = -0.033399623;
            }
        } else {
            if (input[5] >= -0.0072505) {
                if (input[2] >= 9.821975) {
                    var307 = -0.0016872642;
                } else {
                    var307 = 0.03129197;
                }
            } else {
                var307 = -0.012550308;
            }
        }
    } else {
        var307 = 0.01031401;
    }
    double var308;
    if (input[5] >= -0.1572775) {
        if (input[2] >= 9.6779) {
            if (input[2] >= 9.920171) {
                if (input[2] >= 10.484797) {
                    var308 = 0.00277837;
                } else {
                    var308 = -0.02384697;
                }
            } else {
                var308 = 0.03266339;
            }
        } else {
            if (input[2] >= 8.918379) {
                if (input[3] >= 0.0207345) {
                    var308 = -0.0374629;
                } else {
                    var308 = -0.00312198;
                }
            } else {
                var308 = 0.009817184;
            }
        }
    } else {
        var308 = 0.012665923;
    }
    double var309;
    if (input[1] >= 0.7206015) {
        if (input[2] >= 9.764494) {
            if (input[5] >= 0.020514) {
                var309 = 0.00021906981;
            } else {
                var309 = 0.027511885;
            }
        } else {
            if (input[3] >= 0.15262899) {
                var309 = 0.018663976;
            } else {
                if (input[2] >= 9.153989) {
                    var309 = -0.029891388;
                } else {
                    var309 = 0.0071291183;
                }
            }
        }
    } else {
        var309 = -0.012134451;
    }
    double var310;
    if (input[3] >= -0.303054) {
        if (input[2] >= 9.048159) {
            if (input[2] >= 9.649159) {
                if (input[1] >= 0.91302645) {
                    if (input[3] >= -0.0054735) {
                        var310 = 0.00091771863;
                    } else {
                        var310 = -0.029402483;
                    }
                } else {
                    var310 = 0.012289729;
                }
            } else {
                var310 = 0.025713127;
            }
        } else {
            var310 = -0.02220504;
        }
    } else {
        var310 = 0.01446841;
    }
    double var311;
    if (input[1] >= 0.7206015) {
        if (input[0] >= -0.781001) {
            if (input[1] >= 1.6933535) {
                if (input[0] >= -0.580792) {
                    var311 = 0.0062598777;
                } else {
                    var311 = -0.039044276;
                }
            } else {
                if (input[3] >= 0.0326365) {
                    var311 = -0.008806107;
                } else {
                    var311 = 0.027957028;
                }
            }
        } else {
            var311 = 0.020313144;
        }
    } else {
        var311 = -0.011635807;
    }
    double var312;
    if (input[1] >= 1.5912659) {
        if (input[4] >= 0.026313) {
            var312 = -0.011043458;
        } else {
            var312 = 0.023893166;
        }
    } else {
        if (input[4] >= -0.0742015) {
            if (input[3] >= -0.022045001) {
                if (input[3] >= 0.015686) {
                    var312 = 0.008157975;
                } else {
                    var312 = -0.02916517;
                }
            } else {
                var312 = 0.029583788;
            }
        } else {
            var312 = -0.021837506;
        }
    }
    double var313;
    if (input[0] >= -0.1338215) {
        var313 = 0.013224297;
    } else {
        if (input[2] >= 9.24717) {
            if (input[4] >= 0.065105006) {
                var313 = -0.016539384;
            } else {
                if (input[5] >= 0.013073) {
                    var313 = 0.030583618;
                } else {
                    var313 = -0.003560102;
                }
            }
        } else {
            var313 = -0.021030907;
        }
    }
    double var314;
    if (input[5] >= -0.1572775) {
        if (input[3] >= 0.0495895) {
            var314 = 0.010734708;
        } else {
            if (input[5] >= 0.0555285) {
                var314 = 0.012240619;
            } else {
                if (input[3] >= -0.0105435) {
                    var314 = -0.038395967;
                } else {
                    var314 = 0.00076479686;
                }
            }
        }
    } else {
        var314 = 0.014100819;
    }
    double var315;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var315 = -0.023538692;
        } else {
            var315 = 0.008315155;
        }
    } else {
        if (input[4] >= 0.0442155) {
            var315 = 0.022836;
        } else {
            if (input[4] >= -0.016539) {
                var315 = -0.022688985;
            } else {
                var315 = 0.017812433;
            }
        }
    }
    double var316;
    if (input[3] >= 0.108812496) {
        if (input[1] >= 1.372571) {
            var316 = 0.0068896296;
        } else {
            var316 = -0.02248138;
        }
    } else {
        if (input[3] >= -0.0191905) {
            if (input[2] >= 9.822498) {
                var316 = 0.00044260058;
            } else {
                var316 = 0.029537924;
            }
        } else {
            if (input[1] >= 1.164354) {
                if (input[2] >= 9.356817) {
                    var316 = 0.020338705;
                } else {
                    var316 = -0.01075016;
                }
            } else {
                var316 = -0.019478768;
            }
        }
    }
    double var317;
    if (input[1] >= 1.9521655) {
        var317 = -0.013117246;
    } else {
        if (input[4] >= -0.074291006) {
            if (input[1] >= 1.372571) {
                var317 = 0.03180026;
            } else {
                if (input[5] >= 0.00089799997) {
                    var317 = -0.022807209;
                } else {
                    var317 = 0.025101673;
                }
            }
        } else {
            if (input[4] >= -0.211312) {
                var317 = -0.02826554;
            } else {
                var317 = 0.011330457;
            }
        }
    }
    double var318;
    if (input[2] >= 9.960512) {
        if (input[0] >= -0.728909) {
            var318 = 0.025360977;
        } else {
            var318 = -0.009139097;
        }
    } else {
        if (input[0] >= -0.69148695) {
            if (input[4] >= -0.074329495) {
                if (input[4] >= 0.03873) {
                    var318 = -0.01314205;
                } else {
                    var318 = 0.018837979;
                }
            } else {
                var318 = -0.037282776;
            }
        } else {
            var318 = 0.016813466;
        }
    }
    double var319;
    if (input[4] >= -0.115644) {
        if (input[2] >= 10.302101) {
            var319 = 0.01928016;
        } else {
            if (input[4] >= -0.0062825) {
                if (input[5] >= -0.0082655) {
                    var319 = 0.016010065;
                } else {
                    var319 = -0.014511063;
                }
            } else {
                var319 = -0.031210897;
            }
        }
    } else {
        if (input[3] >= -0.080745) {
            var319 = 0.02106288;
        } else {
            var319 = -0.0055997325;
        }
    }
    double var320;
    if (input[0] >= -0.273556) {
        var320 = -0.010144768;
    } else {
        if (input[3] >= -0.0191905) {
            if (input[4] >= -0.031839497) {
                var320 = 0.028218338;
            } else {
                var320 = -0.010179005;
            }
        } else {
            if (input[5] >= -0.020345502) {
                var320 = -0.020768909;
            } else {
                var320 = 0.014378841;
            }
        }
    }
    double var321;
    if (input[4] >= -0.0166455) {
        if (input[0] >= -0.4700225) {
            var321 = 0.012977419;
        } else {
            if (input[0] >= -0.6384975) {
                var321 = -0.038432162;
            } else {
                if (input[3] >= -0.0187355) {
                    var321 = 0.02159148;
                } else {
                    var321 = -0.01544701;
                }
            }
        }
    } else {
        if (input[0] >= -0.4629125) {
            var321 = -0.01244262;
        } else {
            if (input[0] >= -0.728909) {
                var321 = 0.036222905;
            } else {
                var321 = -0.005600183;
            }
        }
    }
    double var322;
    if (input[3] >= 0.235236) {
        var322 = -0.012945422;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[0] >= -0.3920345) {
                var322 = 0.014481708;
            } else {
                if (input[4] >= -0.0003275) {
                    var322 = 0.0032526844;
                } else {
                    var322 = -0.03537744;
                }
            }
        } else {
            if (input[3] >= -0.035569) {
                var322 = 0.034630228;
            } else {
                var322 = 0.00024330617;
            }
        }
    }
    double var323;
    if (input[4] >= -0.0166455) {
        if (input[3] >= 0.0412995) {
            var323 = 0.01074489;
        } else {
            if (input[3] >= -0.048334) {
                var323 = -0.02938581;
            } else {
                var323 = 0.00887322;
            }
        }
    } else {
        if (input[2] >= 10.145602) {
            var323 = -0.011254346;
        } else {
            if (input[5] >= 0.0511045) {
                var323 = -0.010627385;
            } else {
                var323 = 0.038580768;
            }
        }
    }
    double var324;
    if (input[3] >= 0.108812496) {
        if (input[1] >= 1.372571) {
            var324 = 0.0046199085;
        } else {
            var324 = -0.020266635;
        }
    } else {
        if (input[5] >= 0.0354945) {
            if (input[2] >= 9.769585) {
                var324 = 0.004120236;
            } else {
                var324 = 0.029129347;
            }
        } else {
            if (input[4] >= -0.0132135) {
                if (input[4] >= 0.018236998) {
                    var324 = 0.0037012734;
                } else {
                    var324 = -0.03443295;
                }
            } else {
                var324 = 0.014021776;
            }
        }
    }
    double var325;
    if (input[1] >= 1.148487) {
        if (input[5] >= -0.020039499) {
            if (input[4] >= -0.0284945) {
                var325 = 0.02298653;
            } else {
                var325 = -0.011837648;
            }
        } else {
            if (input[1] >= 1.6241975) {
                var325 = -0.0005146026;
            } else {
                var325 = -0.03298835;
            }
        }
    } else {
        if (input[2] >= 10.194251) {
            var325 = -0.007925657;
        } else {
            var325 = 0.024111614;
        }
    }
    double var326;
    if (input[4] >= 0.026313) {
        if (input[1] >= 1.6540606) {
            var326 = -0.026871858;
        } else {
            var326 = 0.009118351;
        }
    } else {
        if (input[5] >= 0.082550496) {
            var326 = 0.027406307;
        } else {
            if (input[1] >= 1.3363465) {
                var326 = 0.017943218;
            } else {
                if (input[4] >= -0.025104) {
                    var326 = -0.033563357;
                } else {
                    var326 = 0.0010785372;
                }
            }
        }
    }
    double var327;
    if (input[2] >= 9.960512) {
        if (input[0] >= -0.728909) {
            var327 = 0.025337081;
        } else {
            var327 = -0.008434771;
        }
    } else {
        if (input[0] >= -0.779654) {
            if (input[2] >= 9.7496) {
                var327 = -0.038170304;
            } else {
                if (input[1] >= 1.9082315) {
                    var327 = -0.020461095;
                } else {
                    if (input[3] >= 0.014238) {
                        var327 = -0.010764401;
                    } else {
                        var327 = 0.037874054;
                    }
                }
            }
        } else {
            var327 = 0.014621412;
        }
    }
    double var328;
    if (input[2] >= 9.6779) {
        if (input[0] >= -0.4872365) {
            var328 = -0.012506752;
        } else {
            if (input[0] >= -0.710273) {
                var328 = 0.039378867;
            } else {
                var328 = -0.002581782;
            }
        }
    } else {
        if (input[5] >= 0.010689) {
            if (input[3] >= 0.004318) {
                var328 = -0.035199262;
            } else {
                var328 = 0.002823202;
            }
        } else {
            var328 = 0.0076019824;
        }
    }
    double var329;
    if (input[2] >= 9.6779) {
        if (input[5] >= 0.009759501) {
            if (input[2] >= 10.146501) {
                var329 = 0.006011754;
            } else {
                var329 = 0.024397522;
            }
        } else {
            if (input[5] >= -0.080887) {
                var329 = -0.015592591;
            } else {
                var329 = 0.0034985656;
            }
        }
    } else {
        if (input[2] >= 9.346714) {
            var329 = -0.02260836;
        } else {
            if (input[1] >= 1.7118405) {
                var329 = 0.020541115;
            } else {
                var329 = -0.010992944;
            }
        }
    }
    double var330;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.207641) {
            var330 = 0.021745536;
        } else {
            if (input[5] >= 0.048704) {
                var330 = -0.02493345;
            } else {
                if (input[0] >= -0.2811905) {
                    var330 = -0.018552342;
                } else {
                    if (input[5] >= -0.0327605) {
                        var330 = 0.034722622;
                    } else {
                        var330 = -0.0028004881;
                    }
                }
            }
        }
    } else {
        var330 = -0.014041058;
    }
    double var331;
    if (input[2] >= 10.619368) {
        var331 = 0.0137615185;
    } else {
        if (input[5] >= 0.15826151) {
            var331 = -0.019947916;
        } else {
            if (input[0] >= -0.4374655) {
                var331 = 0.025308795;
            } else {
                if (input[3] >= -0.0011765) {
                    var331 = -0.021252781;
                } else {
                    var331 = 0.011552575;
                }
            }
        }
    }
    double var332;
    if (input[3] >= 0.0018485) {
        if (input[3] >= 0.108812496) {
            if (input[1] >= 1.372571) {
                var332 = 0.009235881;
            } else {
                var332 = -0.0153490035;
            }
        } else {
            var332 = 0.021887008;
        }
    } else {
        if (input[5] >= 0.0354945) {
            var332 = 0.010463903;
        } else {
            if (input[3] >= -0.0463365) {
                var332 = -0.032517355;
            } else {
                var332 = 0.0037692275;
            }
        }
    }
    double var333;
    if (input[2] >= 9.372759) {
        if (input[3] >= -0.197065) {
            if (input[4] >= 0.041642502) {
                var333 = -0.014215003;
            } else {
                if (input[2] >= 10.06275) {
                    var333 = -0.0023680995;
                } else {
                    var333 = 0.045838326;
                }
            }
        } else {
            var333 = -0.018241378;
        }
    } else {
        if (input[0] >= -0.67562056) {
            var333 = 0.006697846;
        } else {
            var333 = -0.023366706;
        }
    }
    double var334;
    if (input[2] >= 9.960512) {
        if (input[3] >= -0.00724) {
            var334 = -0.006348625;
        } else {
            var334 = 0.023869377;
        }
    } else {
        if (input[2] >= 9.7496) {
            var334 = -0.024457267;
        } else {
            if (input[5] >= 0.0555285) {
                var334 = 0.02028196;
            } else {
                if (input[0] >= -0.675321) {
                    var334 = 0.013024132;
                } else {
                    var334 = -0.026739504;
                }
            }
        }
    }
    double var335;
    if (input[0] >= -0.273556) {
        var335 = -0.012703412;
    } else {
        if (input[3] >= 0.197135) {
            var335 = 0.022969285;
        } else {
            if (input[0] >= -0.69148695) {
                if (input[4] >= 0.0002355) {
                    var335 = 0.005859645;
                } else {
                    var335 = -0.032428533;
                }
            } else {
                if (input[2] >= 9.724379) {
                    var335 = 0.028981397;
                } else {
                    var335 = -0.0033889008;
                }
            }
        }
    }
    double var336;
    if (input[0] >= -0.273556) {
        var336 = -0.0102598425;
    } else {
        if (input[1] >= 1.8110089) {
            var336 = 0.02073567;
        } else {
            if (input[0] >= -0.71019804) {
                if (input[5] >= -0.0072505) {
                    var336 = 0.029393705;
                } else {
                    var336 = -0.013192179;
                }
            } else {
                if (input[5] >= 0.0134715) {
                    var336 = -0.029801821;
                } else {
                    var336 = 0.0018958683;
                }
            }
        }
    }
    double var337;
    if (input[0] >= -0.1338215) {
        var337 = 0.014261419;
    } else {
        if (input[3] >= -0.230435) {
            if (input[5] >= 0.0486765) {
                if (input[5] >= 0.207694) {
                    var337 = -0.0035661326;
                } else {
                    var337 = -0.03565293;
                }
            } else {
                if (input[5] >= -0.03278) {
                    var337 = 0.020721141;
                } else {
                    var337 = -0.014314641;
                }
            }
        } else {
            var337 = 0.01869152;
        }
    }
    double var338;
    if (input[3] >= -0.296566) {
        if (input[2] >= 9.634115) {
            if (input[1] >= 0.91302645) {
                if (input[3] >= -0.0054735) {
                    var338 = 0.00007108165;
                } else {
                    var338 = -0.03149503;
                }
            } else {
                var338 = 0.01668315;
            }
        } else {
            if (input[2] >= 8.572523) {
                var338 = 0.028019581;
            } else {
                var338 = -0.00676179;
            }
        }
    } else {
        var338 = -0.014144167;
    }
    double var339;
    if (input[5] >= -0.022142) {
        if (input[4] >= -0.064513) {
            if (input[4] >= 0.0055235) {
                if (input[2] >= 9.654324) {
                    var339 = 0.023030225;
                } else {
                    var339 = -0.019967778;
                }
            } else {
                var339 = -0.03236415;
            }
        } else {
            var339 = 0.013872203;
        }
    } else {
        if (input[4] >= -0.0687135) {
            var339 = 0.020914128;
        } else {
            var339 = -0.00852587;
        }
    }
    double var340;
    if (input[0] >= -0.8274795) {
        if (input[1] >= 1.4861845) {
            if (input[1] >= 1.9770141) {
                var340 = 0.0070799547;
            } else {
                if (input[2] >= 9.602606) {
                    var340 = -0.034055922;
                } else {
                    var340 = -0.0062992955;
                }
            }
        } else {
            if (input[5] >= -0.0084955) {
                var340 = 0.022764353;
            } else {
                var340 = -0.011036429;
            }
        }
    } else {
        var340 = 0.01070201;
    }
    double var341;
    if (input[5] >= -0.022142) {
        if (input[4] >= -0.064513) {
            if (input[5] >= 0.0515485) {
                var341 = 0.0042740656;
            } else {
                var341 = -0.026660578;
            }
        } else {
            var341 = 0.010817346;
        }
    } else {
        if (input[0] >= -0.5892495) {
            var341 = 0.024196284;
        } else {
            var341 = -0.005146512;
        }
    }
    double var342;
    if (input[3] >= -0.296566) {
        if (input[2] >= 9.634115) {
            if (input[2] >= 10.3126545) {
                var342 = 0.014443119;
            } else {
                if (input[0] >= -0.62757003) {
                    var342 = -0.030340062;
                } else {
                    var342 = 0.009066917;
                }
            }
        } else {
            if (input[2] >= 8.572523) {
                var342 = 0.02413602;
            } else {
                var342 = -0.0051320773;
            }
        }
    } else {
        var342 = -0.01362949;
    }
    double var343;
    if (input[2] >= 9.6779) {
        if (input[1] >= 1.2255759) {
            var343 = 0.023354124;
        } else {
            if (input[0] >= -0.63610196) {
                var343 = -0.017866315;
            } else {
                var343 = 0.008340138;
            }
        }
    } else {
        if (input[5] >= 0.010689) {
            if (input[3] >= 0.0052380003) {
                var343 = -0.032514773;
            } else {
                var343 = 0.0029656913;
            }
        } else {
            var343 = 0.008504517;
        }
    }
    double var344;
    if (input[4] >= 0.03873) {
        if (input[1] >= 1.361419) {
            var344 = 0.0076766587;
        } else {
            var344 = -0.023390193;
        }
    } else {
        if (input[1] >= 1.43065) {
            if (input[4] >= -0.157865) {
                var344 = 0.007575361;
            } else {
                var344 = -0.02200466;
            }
        } else {
            if (input[3] >= -0.022045001) {
                var344 = -0.002195951;
            } else {
                var344 = 0.031140776;
            }
        }
    }
    double var345;
    if (input[5] >= -0.1572775) {
        if (input[0] >= -0.6349045) {
            if (input[1] >= 1.7991835) {
                var345 = -0.02052921;
            } else {
                if (input[1] >= 1.1047025) {
                    var345 = 0.04999638;
                } else {
                    var345 = -0.00946026;
                }
            }
        } else {
            if (input[2] >= 9.693466) {
                var345 = 0.002521547;
            } else {
                var345 = -0.028120989;
            }
        }
    } else {
        var345 = 0.012069543;
    }
    double var346;
    if (input[0] >= -0.1338215) {
        var346 = 0.012285553;
    } else {
        if (input[3] >= -0.230435) {
            if (input[5] >= 0.0486765) {
                if (input[5] >= 0.207694) {
                    var346 = -0.002911973;
                } else {
                    var346 = -0.033362657;
                }
            } else {
                if (input[5] >= -0.03278) {
                    var346 = 0.020935318;
                } else {
                    var346 = -0.014830162;
                }
            }
        } else {
            var346 = 0.017780239;
        }
    }
    double var347;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.085074) {
            var347 = 0.018917369;
        } else {
            if (input[4] >= 0.042194) {
                var347 = 0.018593706;
            } else {
                if (input[3] >= 0.022609498) {
                    var347 = 0.012151563;
                } else {
                    if (input[4] >= -0.016673) {
                        var347 = -0.036275093;
                    } else {
                        var347 = 0.0021403902;
                    }
                }
            }
        }
    } else {
        var347 = -0.014441585;
    }
    double var348;
    if (input[4] >= 0.03873) {
        if (input[1] >= 1.361419) {
            var348 = 0.005559008;
        } else {
            var348 = -0.021111699;
        }
    } else {
        if (input[0] >= -0.4629125) {
            var348 = -0.011113007;
        } else {
            if (input[0] >= -0.7128175) {
                var348 = 0.028112164;
            } else {
                var348 = -0.003129719;
            }
        }
    }
    double var349;
    if (input[0] >= -0.8274795) {
        if (input[1] >= 1.0117459) {
            if (input[5] >= 0.028947499) {
                if (input[0] >= -0.55512047) {
                    var349 = -0.0012553827;
                } else {
                    var349 = -0.039515283;
                }
            } else {
                if (input[3] >= 0.0333825) {
                    var349 = -0.02324762;
                } else {
                    var349 = 0.028494226;
                }
            }
        } else {
            var349 = 0.01588555;
        }
    } else {
        var349 = 0.011219194;
    }
    double var350;
    if (input[3] >= -0.296566) {
        if (input[2] >= 9.649159) {
            if (input[1] >= 0.91302645) {
                if (input[3] >= -0.0054735) {
                    var350 = 0.00095350243;
                } else {
                    var350 = -0.030267697;
                }
            } else {
                var350 = 0.012439311;
            }
        } else {
            if (input[2] >= 8.572523) {
                var350 = 0.024883987;
            } else {
                var350 = -0.0034424772;
            }
        }
    } else {
        var350 = -0.013432252;
    }
    double var351;
    if (input[1] >= 0.6613995) {
        if (input[5] >= -0.086994) {
            if (input[5] >= 0.029703) {
                if (input[4] >= 0.026313) {
                    var351 = -0.009911907;
                } else {
                    var351 = 0.023248522;
                }
            } else {
                if (input[4] >= -0.007496) {
                    var351 = 0.0062285396;
                } else {
                    var351 = -0.03645844;
                }
            }
        } else {
            var351 = 0.020977655;
        }
    } else {
        var351 = -0.0116576385;
    }
    double var352;
    if (input[0] >= -0.8274795) {
        if (input[2] >= 9.960512) {
            var352 = 0.015126669;
        } else {
            if (input[2] >= 9.740918) {
                var352 = -0.033294205;
            } else {
                if (input[4] >= 0.0262595) {
                    var352 = -0.017763993;
                } else {
                    var352 = 0.017923752;
                }
            }
        }
    } else {
        var352 = 0.009810294;
    }
    double var353;
    if (input[2] >= 9.6779) {
        if (input[1] >= 0.55512047) {
            if (input[0] >= -0.4872365) {
                var353 = -0.011090148;
            } else {
                if (input[2] >= 9.938208) {
                    var353 = 0.008433503;
                } else {
                    var353 = 0.033777718;
                }
            }
        } else {
            var353 = -0.016593974;
        }
    } else {
        if (input[2] >= 9.346714) {
            var353 = -0.023058623;
        } else {
            if (input[0] >= -0.4812495) {
                var353 = -0.010310091;
            } else {
                var353 = 0.017622499;
            }
        }
    }
    double var354;
    if (input[0] >= -0.1338215) {
        var354 = 0.012740676;
    } else {
        if (input[2] >= 9.678049) {
            if (input[3] >= 0.0470975) {
                var354 = -0.013377196;
            } else {
                if (input[1] >= 1.0897335) {
                    var354 = 0.029044073;
                } else {
                    var354 = 0.0030147454;
                }
            }
        } else {
            if (input[0] >= -0.69148695) {
                var354 = -0.028273722;
            } else {
                var354 = 0.00763315;
            }
        }
    }
    double var355;
    if (input[0] >= -0.7613915) {
        if (input[1] >= 1.7950675) {
            var355 = -0.011547241;
        } else {
            if (input[5] >= -0.0072505) {
                var355 = 0.027027255;
            } else {
                var355 = -0.006137248;
            }
        }
    } else {
        if (input[0] >= -0.932486) {
            var355 = -0.022229081;
        } else {
            var355 = 0.0050106845;
        }
    }
    double var356;
    if (input[1] >= 1.9770141) {
        var356 = 0.013725297;
    } else {
        if (input[4] >= -0.1577385) {
            if (input[5] >= 0.18713701) {
                var356 = -0.019013854;
            } else {
                if (input[4] >= 0.090607) {
                    var356 = -0.017610403;
                } else {
                    if (input[1] >= 1.225127) {
                        var356 = 0.050525762;
                    } else {
                        var356 = -0.0053786486;
                    }
                }
            }
        } else {
            var356 = -0.020019779;
        }
    }
    double var357;
    if (input[4] >= 0.0939405) {
        var357 = 0.011866398;
    } else {
        if (input[5] >= 0.24739751) {
            var357 = -0.026417272;
        } else {
            if (input[5] >= 0.0354945) {
                var357 = 0.030207839;
            } else {
                if (input[4] >= -0.112453) {
                    if (input[0] >= -0.5425465) {
                        var357 = -0.035856146;
                    } else {
                        var357 = 0.0045947027;
                    }
                } else {
                    var357 = 0.013339538;
                }
            }
        }
    }
    double var358;
    if (input[5] >= 0.085074) {
        if (input[0] >= -0.487536) {
            var358 = -0.012716116;
        } else {
            var358 = 0.024135726;
        }
    } else {
        if (input[0] >= -0.58094203) {
            if (input[5] >= -0.014501) {
                var358 = -0.004303386;
            } else {
                var358 = 0.0206717;
            }
        } else {
            if (input[1] >= 1.4292281) {
                var358 = -0.02895738;
            } else {
                var358 = 0.0023703407;
            }
        }
    }
    double var359;
    if (input[0] >= -1.041085) {
        if (input[4] >= 0.029079) {
            if (input[3] >= 0.0246005) {
                var359 = -0.0064240685;
            } else {
                var359 = 0.040794507;
            }
        } else {
            if (input[2] >= 9.740619) {
                var359 = -0.02078675;
            } else {
                if (input[2] >= 9.2449255) {
                    var359 = 0.019351343;
                } else {
                    var359 = -0.0091902865;
                }
            }
        }
    } else {
        var359 = -0.01343296;
    }
    double var360;
    if (input[0] >= -0.251552) {
        var360 = 0.011726922;
    } else {
        if (input[5] >= 0.085074) {
            var360 = 0.013608828;
        } else {
            if (input[4] >= 0.008737) {
                var360 = 0.007741064;
            } else {
                if (input[5] >= -0.022146) {
                    var360 = -0.03827397;
                } else {
                    var360 = 0.0034551912;
                }
            }
        }
    }
    double var361;
    if (input[3] >= 0.0018485) {
        if (input[3] >= 0.108812496) {
            if (input[4] >= -0.0325885) {
                var361 = 0.009606849;
            } else {
                var361 = -0.017907439;
            }
        } else {
            var361 = 0.02056773;
        }
    } else {
        if (input[4] >= 0.0141675) {
            var361 = -0.021888154;
        } else {
            if (input[4] >= -0.074329495) {
                var361 = 0.024588944;
            } else {
                var361 = -0.008619153;
            }
        }
    }
    double var362;
    if (input[4] >= -0.115644) {
        if (input[5] >= 0.187219) {
            var362 = -0.021441944;
        } else {
            if (input[5] >= 0.0230965) {
                var362 = 0.024592197;
            } else {
                if (input[4] >= 0.0148315) {
                    var362 = 0.012581021;
                } else {
                    var362 = -0.023166258;
                }
            }
        }
    } else {
        if (input[1] >= 1.4808705) {
            var362 = -0.003230302;
        } else {
            var362 = 0.019156769;
        }
    }
    double var363;
    if (input[1] >= 1.9770141) {
        var363 = 0.013002417;
    } else {
        if (input[1] >= 1.4861845) {
            if (input[2] >= 9.602606) {
                var363 = -0.024692144;
            } else {
                var363 = 0.0016033348;
            }
        } else {
            if (input[5] >= 0.048444502) {
                var363 = -0.011025575;
            } else {
                if (input[2] >= 9.782831) {
                    var363 = 0.029819941;
                } else {
                    var363 = -0.007992212;
                }
            }
        }
    }
    double var364;
    if (input[4] >= -0.115644) {
        if (input[4] >= -0.024004001) {
            if (input[0] >= -0.4700225) {
                var364 = 0.024964072;
            } else {
                if (input[0] >= -0.6384975) {
                    var364 = -0.029000377;
                } else {
                    var364 = 0.0057792324;
                }
            }
        } else {
            var364 = -0.019477349;
        }
    } else {
        if (input[5] >= 0.047591) {
            var364 = -0.001298464;
        } else {
            var364 = 0.015760398;
        }
    }
    double var365;
    if (input[0] >= -0.273556) {
        var365 = -0.010831137;
    } else {
        if (input[0] >= -0.603994) {
            var365 = 0.018976266;
        } else {
            if (input[5] >= 0.1032365) {
                var365 = 0.013510369;
            } else {
                if (input[5] >= -0.087015495) {
                    var365 = -0.021004599;
                } else {
                    var365 = 0.005203269;
                }
            }
        }
    }
    double var366;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[5] >= 0.187219) {
                var366 = -0.011934397;
            } else {
                if (input[3] >= -0.010545) {
                    var366 = 0.0010479466;
                } else {
                    var366 = 0.038957115;
                }
            }
        } else {
            var366 = -0.013074917;
        }
    } else {
        var366 = -0.010535121;
    }
    double var367;
    if (input[5] >= 0.085074) {
        if (input[0] >= -0.487536) {
            var367 = -0.010542666;
        } else {
            var367 = 0.02212592;
        }
    } else {
        if (input[1] >= 1.736614) {
            var367 = 0.015553277;
        } else {
            if (input[5] >= -0.087015495) {
                if (input[0] >= -0.71019804) {
                    var367 = -0.0008541129;
                } else {
                    var367 = -0.0393446;
                }
            } else {
                var367 = 0.010441298;
            }
        }
    }
    double var368;
    if (input[4] >= 0.0138815) {
        if (input[3] >= 0.041367) {
            var368 = 0.014547956;
        } else {
            if (input[1] >= 1.51238) {
                var368 = -0.03141525;
            } else {
                var368 = -0.0002869046;
            }
        }
    } else {
        if (input[0] >= -0.8840615) {
            if (input[5] >= -0.0120955) {
                if (input[4] >= -0.064513) {
                    var368 = -0.016192656;
                } else {
                    var368 = 0.008616351;
                }
            } else {
                var368 = 0.03576072;
            }
        } else {
            var368 = -0.011579347;
        }
    }
    double var369;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[5] >= 0.187219) {
                var369 = -0.011259106;
            } else {
                if (input[2] >= 9.519679) {
                    var369 = 0.031718895;
                } else {
                    var369 = -0.0014742082;
                }
            }
        } else {
            var369 = -0.011701798;
        }
    } else {
        var369 = -0.012492242;
    }
    double var370;
    if (input[2] >= 8.918379) {
        if (input[3] >= 0.0142645) {
            if (input[1] >= 1.692006) {
                var370 = -0.032121193;
            } else {
                var370 = 0.002885655;
            }
        } else {
            if (input[1] >= 1.1645036) {
                var370 = 0.028193312;
            } else {
                var370 = -0.016306158;
            }
        }
    } else {
        var370 = 0.012426019;
    }
    double var371;
    if (input[0] >= -0.8274795) {
        if (input[3] >= 0.207239) {
            var371 = 0.017130045;
        } else {
            if (input[0] >= -0.3920345) {
                var371 = 0.013147527;
            } else {
                if (input[1] >= 1.585578) {
                    var371 = 0.0029979132;
                } else {
                    var371 = -0.037872177;
                }
            }
        }
    } else {
        var371 = 0.010541232;
    }
    double var372;
    if (input[0] >= -0.273556) {
        var372 = -0.010855645;
    } else {
        if (input[3] >= -0.0191905) {
            if (input[4] >= -0.031839497) {
                var372 = 0.028179744;
            } else {
                var372 = -0.009675935;
            }
        } else {
            if (input[3] >= -0.230435) {
                var372 = -0.019674249;
            } else {
                var372 = 0.011816303;
            }
        }
    }
    double var373;
    if (input[4] >= -0.115644) {
        if (input[1] >= 1.0318794) {
            if (input[2] >= 9.355395) {
                if (input[5] >= 0.028944999) {
                    var373 = -0.04125301;
                } else {
                    var373 = 0.004949793;
                }
            } else {
                var373 = 0.010106281;
            }
        } else {
            var373 = 0.008524479;
        }
    } else {
        var373 = 0.010955173;
    }
    double var374;
    if (input[5] >= 0.085074) {
        if (input[4] >= 0.028634) {
            var374 = -0.008095927;
        } else {
            var374 = 0.023104377;
        }
    } else {
        if (input[3] >= -0.0105435) {
            if (input[5] >= 0.010323999) {
                var374 = -0.03683295;
            } else {
                var374 = 0.0032458527;
            }
        } else {
            if (input[3] >= -0.1157215) {
                var374 = 0.021775888;
            } else {
                var374 = -0.0075413384;
            }
        }
    }
    double var375;
    if (input[5] >= 0.0354945) {
        if (input[3] >= 0.14794251) {
            var375 = -0.013090695;
        } else {
            if (input[4] >= -0.032394998) {
                var375 = 0.027795868;
            } else {
                var375 = 0.0022081956;
            }
        }
    } else {
        if (input[3] >= 0.0018485) {
            var375 = 0.007277567;
        } else {
            if (input[3] >= -0.0463365) {
                var375 = -0.031116504;
            } else {
                var375 = 0.0039560176;
            }
        }
    }
    double var376;
    if (input[5] >= -0.116819) {
        if (input[3] >= 0.024683502) {
            var376 = 0.018747132;
        } else {
            if (input[3] >= -0.0859105) {
                if (input[2] >= 9.906699) {
                    var376 = -0.033071548;
                } else {
                    var376 = 0.0019356055;
                }
            } else {
                var376 = 0.01568069;
            }
        }
    } else {
        var376 = -0.012493046;
    }
    double var377;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.207641) {
            var377 = 0.021552756;
        } else {
            if (input[5] >= 0.048704) {
                var377 = -0.023012422;
            } else {
                if (input[0] >= -0.5566175) {
                    var377 = -0.013141773;
                } else {
                    if (input[5] >= -0.032955997) {
                        var377 = 0.031604357;
                    } else {
                        var377 = 0.0032315245;
                    }
                }
            }
        }
    } else {
        var377 = -0.016024258;
    }
    double var378;
    if (input[3] >= -0.296566) {
        if (input[3] >= 0.235236) {
            var378 = -0.012975066;
        } else {
            if (input[4] >= -0.0563225) {
                if (input[4] >= 0.054500498) {
                    var378 = 0.030207956;
                } else {
                    if (input[0] >= -0.49764) {
                        var378 = -0.030951431;
                    } else {
                        var378 = -0.005289033;
                    }
                }
            } else {
                var378 = 0.029376775;
            }
        }
    } else {
        var378 = -0.013503941;
    }
    double var379;
    if (input[4] >= 0.03873) {
        if (input[1] >= 1.361419) {
            var379 = 0.005847745;
        } else {
            var379 = -0.022693694;
        }
    } else {
        if (input[3] >= -0.179937) {
            if (input[2] >= 9.420285) {
                if (input[3] >= 0.047076) {
                    var379 = -0.006994337;
                } else {
                    var379 = 0.04693148;
                }
            } else {
                var379 = -0.01635321;
            }
        } else {
            var379 = -0.0148311155;
        }
    }
    double var380;
    if (input[0] >= -0.251552) {
        var380 = 0.011565621;
    } else {
        if (input[5] >= 0.085074) {
            var380 = 0.011774656;
        } else {
            if (input[3] >= -0.007255) {
                if (input[2] >= 9.70694) {
                    var380 = -0.03279536;
                } else {
                    var380 = -0.00091080245;
                }
            } else {
                if (input[2] >= 9.673709) {
                    var380 = 0.016671695;
                } else {
                    var380 = -0.011880922;
                }
            }
        }
    }
    double var381;
    if (input[2] >= 8.918379) {
        if (input[2] >= 9.372759) {
            if (input[4] >= -0.0774975) {
                if (input[4] >= 0.065188006) {
                    var381 = -0.0077173486;
                } else {
                    var381 = 0.026426971;
                }
            } else {
                var381 = -0.013738169;
            }
        } else {
            var381 = -0.023860006;
        }
    } else {
        var381 = 0.010854591;
    }
    double var382;
    if (input[5] >= -0.1572775) {
        if (input[3] >= 0.0495895) {
            var382 = 0.012013886;
        } else {
            if (input[5] >= 0.051800497) {
                var382 = 0.009551852;
            } else {
                if (input[3] >= -0.0105435) {
                    var382 = -0.036023986;
                } else {
                    var382 = -0.00095726445;
                }
            }
        }
    } else {
        var382 = 0.011225481;
    }
    double var383;
    if (input[3] >= -0.0191905) {
        if (input[3] >= 0.0142435) {
            if (input[1] >= 1.2569361) {
                var383 = -0.012822248;
            } else {
                var383 = 0.010026521;
            }
        } else {
            var383 = 0.021746546;
        }
    } else {
        if (input[3] >= -0.12821901) {
            var383 = -0.021818701;
        } else {
            var383 = 0.005534511;
        }
    }
    double var384;
    if (input[1] >= 0.7206015) {
        if (input[1] >= 1.148487) {
            if (input[5] >= -0.020039499) {
                if (input[4] >= -0.0284945) {
                    var384 = 0.024028873;
                } else {
                    var384 = -0.0128448205;
                }
            } else {
                var384 = -0.018744757;
            }
        } else {
            var384 = 0.022971503;
        }
    } else {
        var384 = -0.01147837;
    }
    double var385;
    if (input[4] >= 0.03873) {
        if (input[1] >= 1.361419) {
            var385 = 0.005272448;
        } else {
            var385 = -0.021152481;
        }
    } else {
        if (input[3] >= -0.179937) {
            if (input[2] >= 9.420285) {
                if (input[2] >= 10.06275) {
                    var385 = -0.0017355274;
                } else {
                    var385 = 0.0393752;
                }
            } else {
                var385 = -0.0117490245;
            }
        } else {
            var385 = -0.013349189;
        }
    }
    double var386;
    if (input[2] >= 9.346714) {
        if (input[0] >= -0.589399) {
            if (input[1] >= 1.1592646) {
                var386 = 0.024552288;
            } else {
                var386 = -0.012019603;
            }
        } else {
            if (input[0] >= -0.74021053) {
                var386 = -0.035334133;
            } else {
                var386 = 0.008581161;
            }
        }
    } else {
        if (input[0] >= -0.4812495) {
            var386 = -0.0046480764;
        } else {
            var386 = 0.018807214;
        }
    }
    double var387;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var387 = -0.020153534;
        } else {
            var387 = 0.006556064;
        }
    } else {
        if (input[4] >= -0.0133675) {
            if (input[4] >= 0.0442155) {
                var387 = 0.019411655;
            } else {
                var387 = -0.022983132;
            }
        } else {
            var387 = 0.017773679;
        }
    }
    double var388;
    if (input[4] >= 0.03873) {
        if (input[1] >= 1.361419) {
            var388 = 0.00317532;
        } else {
            var388 = -0.01749355;
        }
    } else {
        if (input[0] >= -0.8274795) {
            if (input[0] >= -0.6110295) {
                if (input[5] >= 0.024420999) {
                    var388 = 0.025811048;
                } else {
                    var388 = -0.0077391067;
                }
            } else {
                var388 = -0.01983162;
            }
        } else {
            var388 = 0.019066729;
        }
    }
    double var389;
    if (input[0] >= -1.041085) {
        if (input[4] >= -0.024004001) {
            if (input[0] >= -0.6085595) {
                if (input[0] >= -0.3650905) {
                    var389 = 0.01343567;
                } else {
                    var389 = -0.018998554;
                }
            } else {
                var389 = 0.033378147;
            }
        } else {
            if (input[4] >= -0.200299) {
                var389 = -0.024285465;
            } else {
                var389 = 0.011592438;
            }
        }
    } else {
        var389 = -0.013043406;
    }
    double var390;
    if (input[0] >= -0.7613915) {
        if (input[1] >= 1.7950675) {
            var390 = -0.012549886;
        } else {
            if (input[5] >= -0.0085285) {
                var390 = 0.026127204;
            } else {
                var390 = -0.0042387196;
            }
        }
    } else {
        if (input[4] >= -0.0074744998) {
            var390 = -0.018835643;
        } else {
            var390 = 0.0047108713;
        }
    }
    double var391;
    if (input[5] >= 0.048704) {
        if (input[1] >= 1.5521226) {
            var391 = 0.007582406;
        } else {
            var391 = -0.01828496;
        }
    } else {
        if (input[1] >= 1.1538005) {
            if (input[1] >= 1.736614) {
                var391 = 0.018409071;
            } else {
                var391 = -0.022216452;
            }
        } else {
            var391 = 0.018235179;
        }
    }
    double var392;
    if (input[1] >= 1.869238) {
        var392 = -0.0100925425;
    } else {
        if (input[5] >= -0.087015495) {
            if (input[3] >= 0.024683502) {
                var392 = 0.023138985;
            } else {
                if (input[1] >= 1.460438) {
                    var392 = -0.04028993;
                } else {
                    if (input[3] >= -0.022045001) {
                        var392 = -0.019331302;
                    } else {
                        var392 = 0.01854402;
                    }
                }
            }
        } else {
            var392 = 0.024084933;
        }
    }
    double var393;
    if (input[2] >= 9.021066) {
        if (input[3] >= 0.0142645) {
            if (input[2] >= 9.828411) {
                var393 = 0.007461131;
            } else {
                var393 = -0.028720196;
            }
        } else {
            if (input[1] >= 1.1645036) {
                var393 = 0.030699253;
            } else {
                var393 = -0.016081236;
            }
        }
    } else {
        var393 = 0.01148768;
    }
    double var394;
    if (input[3] >= -0.0191905) {
        if (input[0] >= -0.273556) {
            var394 = -0.013025257;
        } else {
            if (input[4] >= -0.031839497) {
                var394 = 0.027545238;
            } else {
                var394 = -0.0086495895;
            }
        }
    } else {
        if (input[3] >= -0.12821901) {
            var394 = -0.017921573;
        } else {
            var394 = 0.004341418;
        }
    }
    double var395;
    if (input[4] >= 0.03873) {
        if (input[4] >= 0.1359655) {
            var395 = 0.0018402756;
        } else {
            var395 = -0.018595671;
        }
    } else {
        if (input[3] >= -0.179937) {
            if (input[2] >= 9.24717) {
                if (input[3] >= 0.047076) {
                    var395 = -0.004203514;
                } else {
                    var395 = 0.03436513;
                }
            } else {
                var395 = -0.010049058;
            }
        } else {
            var395 = -0.014281691;
        }
    }
    double var396;
    if (input[2] >= 9.346714) {
        if (input[0] >= -0.54209745) {
            var396 = 0.007754788;
        } else {
            if (input[0] >= -0.74021053) {
                var396 = -0.027985653;
            } else {
                var396 = 0.006385858;
            }
        }
    } else {
        if (input[0] >= -0.581316) {
            var396 = -0.0011900464;
        } else {
            var396 = 0.01665508;
        }
    }
    double var397;
    if (input[0] >= -0.7613915) {
        if (input[3] >= 0.197135) {
            var397 = 0.025309714;
        } else {
            if (input[2] >= 9.223743) {
                if (input[3] >= 0.009506499) {
                    var397 = -0.039039925;
                } else {
                    var397 = 0.008951786;
                }
            } else {
                var397 = 0.020283116;
            }
        }
    } else {
        if (input[3] >= -0.0207395) {
            var397 = -0.019397274;
        } else {
            var397 = 0.0029257117;
        }
    }
    double var398;
    if (input[3] >= 0.0018485) {
        if (input[3] >= 0.235236) {
            var398 = -0.010076543;
        } else {
            if (input[2] >= 9.606797) {
                var398 = 0.031073542;
            } else {
                var398 = -0.0059429514;
            }
        }
    } else {
        if (input[2] >= 9.7496) {
            var398 = -0.017689895;
        } else {
            if (input[2] >= 9.021889) {
                var398 = 0.025115147;
            } else {
                var398 = -0.016210273;
            }
        }
    }
    double var399;
    if (input[0] >= -0.7613915) {
        if (input[0] >= -0.6384225) {
            if (input[1] >= 1.5515985) {
                var399 = 0.010583332;
            } else {
                if (input[0] >= -0.436043) {
                    var399 = 0.008054763;
                } else {
                    var399 = -0.029375566;
                }
            }
        } else {
            var399 = 0.02411413;
        }
    } else {
        if (input[4] >= -0.0074744998) {
            var399 = -0.016748305;
        } else {
            var399 = 0.0033762518;
        }
    }
    double var400;
    if (input[4] >= 0.179801) {
        var400 = -0.011035143;
    } else {
        if (input[3] >= 0.024687) {
            var400 = 0.020022832;
        } else {
            if (input[0] >= -0.6644685) {
                if (input[2] >= 9.744436) {
                    var400 = -0.033296347;
                } else {
                    var400 = 0.0069164177;
                }
            } else {
                var400 = 0.009084781;
            }
        }
    }
    double var401;
    if (input[1] >= 1.869238) {
        var401 = -0.010819202;
    } else {
        if (input[0] >= -0.71019804) {
            if (input[0] >= -0.56073403) {
                if (input[3] >= 0.0015515) {
                    var401 = 0.0174963;
                } else {
                    var401 = -0.015761005;
                }
            } else {
                var401 = 0.031295817;
            }
        } else {
            if (input[5] >= 0.0134715) {
                var401 = -0.026394002;
            } else {
                var401 = 0.0073132;
            }
        }
    }
    double var402;
    if (input[2] >= 10.619368) {
        var402 = 0.011678527;
    } else {
        if (input[0] >= -0.81550395) {
            if (input[3] >= 0.197156) {
                var402 = 0.013994301;
            } else {
                if (input[2] >= 9.223743) {
                    if (input[2] >= 9.689276) {
                        var402 = -0.005611068;
                    } else {
                        var402 = -0.04212303;
                    }
                } else {
                    var402 = 0.009388231;
                }
            }
        } else {
            var402 = 0.014176502;
        }
    }
    double var403;
    if (input[3] >= 0.235236) {
        var403 = -0.012117649;
    } else {
        if (input[1] >= 0.627645) {
            if (input[1] >= 1.827325) {
                var403 = 0.019139973;
            } else {
                if (input[5] >= -0.002622) {
                    if (input[1] >= 1.265094) {
                        var403 = -0.0058688903;
                    } else {
                        var403 = -0.036052074;
                    }
                } else {
                    var403 = 0.009254864;
                }
            }
        } else {
            var403 = 0.024452923;
        }
    }
    double var404;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[3] >= -0.021978) {
                if (input[3] >= 0.024683502) {
                    var404 = 0.015043166;
                } else {
                    var404 = -0.020343376;
                }
            } else {
                var404 = 0.03020936;
            }
        } else {
            var404 = -0.013269254;
        }
    } else {
        var404 = -0.011305468;
    }
    double var405;
    if (input[1] >= 1.4861845) {
        if (input[4] >= 0.026313) {
            var405 = -0.022535188;
        } else {
            var405 = 0.007730482;
        }
    } else {
        if (input[0] >= -0.842972) {
            if (input[5] >= -0.0084955) {
                var405 = 0.028970862;
            } else {
                var405 = -0.007669488;
            }
        } else {
            var405 = -0.010854586;
        }
    }
    double var406;
    if (input[1] >= 0.57390654) {
        if (input[0] >= -0.781001) {
            if (input[1] >= 1.6933535) {
                if (input[0] >= -0.580792) {
                    var406 = 0.004454808;
                } else {
                    var406 = -0.037091527;
                }
            } else {
                if (input[4] >= -0.0015954999) {
                    var406 = 0.02211758;
                } else {
                    var406 = -0.0067583295;
                }
            }
        } else {
            var406 = 0.02413221;
        }
    } else {
        var406 = -0.011418157;
    }
    double var407;
    if (input[0] >= -0.7613915) {
        if (input[0] >= -0.6384225) {
            if (input[2] >= 9.960512) {
                var407 = 0.012561507;
            } else {
                if (input[4] >= -0.0774975) {
                    var407 = 0.00455395;
                } else {
                    var407 = -0.02929775;
                }
            }
        } else {
            var407 = 0.023454312;
        }
    } else {
        if (input[0] >= -0.9738745) {
            var407 = -0.017282808;
        } else {
            var407 = 0.0015241894;
        }
    }
    double var408;
    if (input[4] >= -0.115644) {
        if (input[5] >= 0.187219) {
            var408 = -0.020527726;
        } else {
            if (input[5] >= 0.0230965) {
                var408 = 0.022016382;
            } else {
                if (input[4] >= 0.0148315) {
                    var408 = 0.011615517;
                } else {
                    var408 = -0.02246484;
                }
            }
        }
    } else {
        var408 = 0.010029628;
    }
    double var409;
    if (input[4] >= 0.03873) {
        if (input[4] >= 0.1359655) {
            var409 = 0.002719413;
        } else {
            var409 = -0.018030168;
        }
    } else {
        if (input[2] >= 9.653201) {
            if (input[0] >= -0.4629125) {
                var409 = -0.02416522;
            } else {
                var409 = 0.010279345;
            }
        } else {
            var409 = 0.016281983;
        }
    }
    double var410;
    if (input[0] >= -0.7613915) {
        if (input[1] >= 1.7950675) {
            var410 = -0.011674476;
        } else {
            if (input[5] >= -0.0085285) {
                var410 = 0.022887792;
            } else {
                var410 = -0.0041824784;
            }
        }
    } else {
        if (input[0] >= -1.0775344) {
            var410 = -0.015120139;
        } else {
            var410 = 0.0016076843;
        }
    }
    double var411;
    if (input[1] >= 1.9770141) {
        var411 = 0.01238911;
    } else {
        if (input[3] >= -0.2304275) {
            if (input[5] >= 0.048638) {
                var411 = -0.025670322;
            } else {
                if (input[4] >= -0.016634502) {
                    if (input[0] >= -0.6060145) {
                        var411 = -0.03042854;
                    } else {
                        var411 = 0.01460559;
                    }
                } else {
                    var411 = 0.021589082;
                }
            }
        } else {
            var411 = 0.0121409735;
        }
    }
    double var412;
    if (input[4] >= -0.264189) {
        if (input[2] >= 10.3126545) {
            var412 = 0.026910102;
        } else {
            if (input[5] >= 0.2077615) {
                var412 = 0.014100203;
            } else {
                if (input[3] >= -0.017301) {
                    if (input[0] >= -0.62794447) {
                        var412 = 0.018471802;
                    } else {
                        var412 = -0.009260628;
                    }
                } else {
                    var412 = -0.030169506;
                }
            }
        }
    } else {
        var412 = -0.012582054;
    }
    double var413;
    if (input[0] >= -1.041085) {
        if (input[3] >= 0.0130915) {
            if (input[3] >= 0.197135) {
                var413 = 0.009124515;
            } else {
                var413 = -0.0233793;
            }
        } else {
            if (input[2] >= 9.021889) {
                if (input[1] >= 1.1645036) {
                    var413 = 0.04743899;
                } else {
                    var413 = -0.0064395727;
                }
            } else {
                var413 = -0.013783106;
            }
        }
    } else {
        var413 = -0.012144214;
    }
    double var414;
    if (input[3] >= -0.296566) {
        if (input[2] >= 9.649159) {
            if (input[1] >= 0.91302645) {
                if (input[4] >= -0.0040315) {
                    var414 = -0.030262532;
                } else {
                    var414 = -0.0006653023;
                }
            } else {
                var414 = 0.012150612;
            }
        } else {
            if (input[2] >= 8.572523) {
                var414 = 0.025692828;
            } else {
                var414 = -0.0007180451;
            }
        }
    } else {
        var414 = -0.01195924;
    }
    double var415;
    if (input[2] >= 9.021066) {
        if (input[5] >= -0.0345315) {
            if (input[2] >= 9.534199) {
                if (input[5] >= 0.13100949) {
                    var415 = 0.022505116;
                } else {
                    if (input[2] >= 10.203457) {
                        var415 = -0.018088538;
                    } else {
                        var415 = -0.003796264;
                    }
                }
            } else {
                var415 = -0.033094548;
            }
        } else {
            var415 = 0.013465676;
        }
    } else {
        var415 = 0.010485426;
    }
    double var416;
    if (input[4] >= -0.264189) {
        if (input[2] >= 10.3126545) {
            var416 = 0.024800075;
        } else {
            if (input[3] >= -0.12821901) {
                if (input[0] >= -0.47009748) {
                    var416 = 0.009600042;
                } else {
                    if (input[3] >= 0.024713) {
                        var416 = 0.0012959162;
                    } else {
                        var416 = -0.03437804;
                    }
                }
            } else {
                var416 = 0.014672886;
            }
        }
    } else {
        var416 = -0.011924058;
    }
    double var417;
    if (input[2] >= 10.279947) {
        var417 = -0.0114460895;
    } else {
        if (input[1] >= 1.253718) {
            if (input[1] >= 1.5521226) {
                if (input[4] >= 0.0262595) {
                    var417 = -0.011966272;
                } else {
                    var417 = 0.021589078;
                }
            } else {
                var417 = -0.024691986;
            }
        } else {
            var417 = 0.021594651;
        }
    }
    double var418;
    if (input[1] >= 0.6613995) {
        if (input[1] >= 1.148487) {
            if (input[5] >= -0.020039499) {
                if (input[5] >= 0.1582765) {
                    var418 = -0.011445671;
                } else {
                    var418 = 0.022557132;
                }
            } else {
                var418 = -0.017232258;
            }
        } else {
            var418 = 0.020769842;
        }
    } else {
        var418 = -0.01143819;
    }
    double var419;
    if (input[0] >= -0.273556) {
        var419 = -0.009889802;
    } else {
        if (input[1] >= 1.336496) {
            if (input[3] >= -0.081186) {
                var419 = 0.029619368;
            } else {
                var419 = -0.012371967;
            }
        } else {
            if (input[2] >= 9.854009) {
                var419 = 0.008916765;
            } else {
                var419 = -0.021963071;
            }
        }
    }
    double var420;
    if (input[3] >= 0.235236) {
        var420 = -0.012113326;
    } else {
        if (input[1] >= 0.627645) {
            if (input[5] >= -0.086994) {
                if (input[1] >= 1.8108594) {
                    var420 = 0.018205263;
                } else {
                    if (input[0] >= -0.7122185) {
                        var420 = -0.0043411134;
                    } else {
                        var420 = -0.04368117;
                    }
                }
            } else {
                var420 = 0.023090763;
            }
        } else {
            var420 = 0.022972705;
        }
    }
    double var421;
    if (input[1] >= 1.869238) {
        var421 = -0.011170616;
    } else {
        if (input[2] >= 9.791887) {
            if (input[5] >= 0.048657) {
                var421 = -0.024832927;
            } else {
                var421 = 0.009121794;
            }
        } else {
            if (input[1] >= 1.361419) {
                var421 = 0.026245406;
            } else {
                var421 = -0.0023937596;
            }
        }
    }
    double var422;
    if (input[5] >= 0.0354945) {
        if (input[3] >= 0.1422555) {
            var422 = -0.0129148215;
        } else {
            var422 = 0.019353807;
        }
    } else {
        if (input[4] >= 0.0442155) {
            var422 = 0.011798178;
        } else {
            if (input[3] >= 0.0018485) {
                var422 = 0.0074924943;
            } else {
                var422 = -0.025114154;
            }
        }
    }
    double var423;
    if (input[1] >= 1.4861845) {
        if (input[1] >= 1.9770141) {
            var423 = 0.009298732;
        } else {
            if (input[2] >= 9.572518) {
                var423 = -0.025037177;
            } else {
                var423 = 0.0014031827;
            }
        }
    } else {
        if (input[1] >= 0.6613995) {
            if (input[5] >= 0.003071) {
                var423 = -0.007633081;
            } else {
                var423 = 0.037563816;
            }
        } else {
            var423 = -0.010730984;
        }
    }
    double var424;
    if (input[1] >= 1.9521655) {
        var424 = -0.0113954535;
    } else {
        if (input[4] >= -0.074291006) {
            if (input[5] >= -0.033226997) {
                if (input[1] >= 1.282084) {
                    var424 = 0.020359362;
                } else {
                    var424 = -0.016376076;
                }
            } else {
                var424 = 0.028301315;
            }
        } else {
            if (input[5] >= -0.0006145) {
                var424 = 0.0055473302;
            } else {
                var424 = -0.019747367;
            }
        }
    }
    double var425;
    if (input[1] >= 1.3079054) {
        if (input[2] >= 9.372759) {
            if (input[3] >= 0.041217) {
                var425 = -0.011498831;
            } else {
                var425 = 0.023739032;
            }
        } else {
            var425 = -0.021085903;
        }
    } else {
        if (input[2] >= 10.2684965) {
            var425 = -0.009954057;
        } else {
            var425 = 0.020681312;
        }
    }
    double var426;
    if (input[2] >= 10.619368) {
        var426 = 0.012990953;
    } else {
        if (input[0] >= -0.781001) {
            if (input[2] >= 9.346714) {
                if (input[0] >= -0.589399) {
                    var426 = -0.000056492816;
                } else {
                    var426 = -0.031698532;
                }
            } else {
                var426 = 0.0075319186;
            }
        } else {
            var426 = 0.014646512;
        }
    }
    double var427;
    if (input[5] >= 0.0354945) {
        if (input[1] >= 1.768048) {
            var427 = -0.009315063;
        } else {
            var427 = 0.017554712;
        }
    } else {
        if (input[1] >= 1.736614) {
            var427 = 0.013021769;
        } else {
            if (input[2] >= 9.856777) {
                var427 = 0.010833777;
            } else {
                var427 = -0.026958037;
            }
        }
    }
    double var428;
    if (input[3] >= -0.296566) {
        if (input[2] >= 9.634115) {
            if (input[2] >= 10.3126545) {
                var428 = 0.011224289;
            } else {
                if (input[0] >= -0.620011) {
                    var428 = -0.025630375;
                } else {
                    var428 = 0.0025471787;
                }
            }
        } else {
            if (input[2] >= 8.572523) {
                var428 = 0.024478657;
            } else {
                var428 = -0.0017655992;
            }
        }
    } else {
        var428 = -0.01136483;
    }
    double var429;
    if (input[1] >= 0.57390654) {
        if (input[0] >= -0.781001) {
            if (input[1] >= 1.6933535) {
                if (input[0] >= -0.55512047) {
                    var429 = 0.006611441;
                } else {
                    var429 = -0.03438811;
                }
            } else {
                if (input[0] >= -0.52952397) {
                    var429 = -0.006074982;
                } else {
                    var429 = 0.02353685;
                }
            }
        } else {
            var429 = 0.023475828;
        }
    } else {
        var429 = -0.011269055;
    }
    double var430;
    if (input[0] >= -0.7613915) {
        if (input[1] >= 1.7950675) {
            var430 = -0.008822853;
        } else {
            if (input[0] >= -0.56073403) {
                if (input[4] >= 0.0048905) {
                    var430 = -0.014852751;
                } else {
                    var430 = 0.014339208;
                }
            } else {
                var430 = 0.025963617;
            }
        }
    } else {
        if (input[3] >= -0.0207395) {
            var430 = -0.015881982;
        } else {
            var430 = 0.0019953875;
        }
    }
    double var431;
    if (input[1] >= 1.5912659) {
        if (input[2] >= 9.372759) {
            var431 = 0.020758245;
        } else {
            var431 = -0.009135784;
        }
    } else {
        if (input[4] >= -0.0742015) {
            if (input[0] >= -0.56440103) {
                var431 = -0.010113579;
            } else {
                var431 = 0.019487627;
            }
        } else {
            var431 = -0.02077825;
        }
    }
    double var432;
    if (input[0] >= -0.251552) {
        var432 = 0.011545638;
    } else {
        if (input[5] >= 0.085074) {
            var432 = 0.013213465;
        } else {
            if (input[4] >= 0.008737) {
                var432 = 0.007855263;
            } else {
                if (input[1] >= 1.336496) {
                    var432 = 0.0013736475;
                } else {
                    var432 = -0.035714317;
                }
            }
        }
    }
    double var433;
    if (input[4] >= -0.115644) {
        if (input[1] >= 1.0318794) {
            if (input[2] >= 9.355395) {
                if (input[5] >= 0.028944999) {
                    var433 = -0.040648084;
                } else {
                    var433 = 0.0045979614;
                }
            } else {
                var433 = 0.009475643;
            }
        } else {
            var433 = 0.010401882;
        }
    } else {
        var433 = 0.010069301;
    }
    double var434;
    if (input[2] >= 9.6779) {
        if (input[1] >= 1.2255759) {
            var434 = 0.021270951;
        } else {
            if (input[0] >= -0.664992) {
                var434 = -0.014335645;
            } else {
                var434 = 0.0052051665;
            }
        }
    } else {
        if (input[3] >= -0.080849) {
            if (input[5] >= 0.014248) {
                var434 = -0.013561625;
            } else {
                var434 = 0.022797082;
            }
        } else {
            var434 = -0.021950696;
        }
    }
    double var435;
    if (input[0] >= -0.7613915) {
        if (input[1] >= 1.6933535) {
            if (input[0] >= -0.55512047) {
                var435 = 0.0053578243;
            } else {
                var435 = -0.018065901;
            }
        } else {
            if (input[5] >= -0.0072505) {
                var435 = 0.025564734;
            } else {
                var435 = -0.005854287;
            }
        }
    } else {
        if (input[4] >= -0.0074744998) {
            var435 = -0.01584671;
        } else {
            var435 = 0.0020268322;
        }
    }
    double var436;
    if (input[5] >= -0.1572775) {
        if (input[3] >= 0.0495895) {
            var436 = 0.011697675;
        } else {
            if (input[5] >= 0.0555285) {
                var436 = 0.009877047;
            } else {
                if (input[3] >= -0.0105435) {
                    var436 = -0.033200447;
                } else {
                    var436 = -0.0011915774;
                }
            }
        }
    } else {
        var436 = 0.010715878;
    }
    double var437;
    if (input[1] >= 1.148487) {
        if (input[1] >= 1.5912659) {
            if (input[4] >= 0.026313) {
                var437 = -0.009211096;
            } else {
                var437 = 0.016584981;
            }
        } else {
            var437 = -0.017104695;
        }
    } else {
        if (input[2] >= 10.194251) {
            var437 = -0.010257309;
        } else {
            var437 = 0.022281777;
        }
    }
    double var438;
    if (input[2] >= 10.619368) {
        var438 = 0.01009751;
    } else {
        if (input[5] >= 0.15826151) {
            var438 = -0.017496314;
        } else {
            if (input[2] >= 9.153989) {
                if (input[3] >= -0.017464) {
                    var438 = 0.0114689795;
                } else {
                    var438 = -0.025298337;
                }
            } else {
                var438 = 0.022276495;
            }
        }
    }
    double var439;
    if (input[2] >= 9.24717) {
        if (input[2] >= 9.649159) {
            if (input[4] >= -0.037582003) {
                if (input[5] >= 0.013068) {
                    var439 = 0.019827496;
                } else {
                    var439 = -0.0070562786;
                }
            } else {
                var439 = -0.01639772;
            }
        } else {
            var439 = 0.021357786;
        }
    } else {
        if (input[3] >= -0.0101149995) {
            var439 = -0.01627779;
        } else {
            var439 = 0.003178797;
        }
    }
    double var440;
    if (input[2] >= 9.6779) {
        if (input[3] >= -0.058870003) {
            if (input[5] >= 0.013040001) {
                var440 = 0.015092205;
            } else {
                var440 = -0.021173937;
            }
        } else {
            var440 = 0.02261896;
        }
    } else {
        if (input[2] >= 9.346714) {
            var440 = -0.019701516;
        } else {
            if (input[0] >= -0.581316) {
                var440 = -0.005940658;
            } else {
                var440 = 0.014219829;
            }
        }
    }
    double var441;
    if (input[0] >= -1.041085) {
        if (input[4] >= 0.029079) {
            if (input[3] >= 0.0246005) {
                var441 = -0.00998775;
            } else {
                var441 = 0.03804159;
            }
        } else {
            if (input[4] >= -0.200299) {
                if (input[0] >= -0.6465055) {
                    var441 = 0.0025662116;
                } else {
                    var441 = -0.030249963;
                }
            } else {
                var441 = 0.012411687;
            }
        }
    } else {
        var441 = -0.011034439;
    }
    double var442;
    if (input[3] >= -0.0034765) {
        if (input[1] >= 1.361793) {
            var442 = 0.018506024;
        } else {
            var442 = -0.005721234;
        }
    } else {
        if (input[1] >= 1.3311815) {
            var442 = -0.017779524;
        } else {
            var442 = 0.008926314;
        }
    }
    double var443;
    if (input[4] >= 0.03873) {
        if (input[1] >= 1.361419) {
            var443 = 0.007035184;
        } else {
            var443 = -0.021093605;
        }
    } else {
        if (input[0] >= -0.4629125) {
            var443 = -0.008223977;
        } else {
            if (input[2] >= 9.534199) {
                if (input[0] >= -0.7316035) {
                    var443 = 0.035695553;
                } else {
                    var443 = -0.0019793122;
                }
            } else {
                var443 = -0.007816721;
            }
        }
    }
    double var444;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var444 = -0.019844422;
        } else {
            var444 = 0.008365824;
        }
    } else {
        if (input[1] >= 1.4857354) {
            var444 = -0.008418488;
        } else {
            if (input[2] >= 9.856777) {
                var444 = 0.02666896;
            } else {
                var444 = -0.002024932;
            }
        }
    }
    double var445;
    if (input[2] >= 9.740918) {
        if (input[2] >= 9.960512) {
            if (input[0] >= -0.728909) {
                var445 = 0.02103524;
            } else {
                var445 = -0.01188435;
            }
        } else {
            var445 = -0.019733947;
        }
    } else {
        if (input[4] >= 0.0262595) {
            var445 = -0.0098786075;
        } else {
            if (input[0] >= -0.6370005) {
                var445 = 0.024221886;
            } else {
                var445 = 0.0012610753;
            }
        }
    }
    double var446;
    if (input[0] >= -0.273556) {
        var446 = -0.010179119;
    } else {
        if (input[3] >= -0.0191905) {
            if (input[4] >= -0.031839497) {
                var446 = 0.028186439;
            } else {
                var446 = -0.0089001665;
            }
        } else {
            if (input[1] >= 1.1645036) {
                var446 = 0.00629802;
            } else {
                var446 = -0.020520251;
            }
        }
    }
    double var447;
    if (input[0] >= -0.81550395) {
        if (input[1] >= 1.4861845) {
            if (input[5] >= -0.0040800003) {
                var447 = -0.02162335;
            } else {
                var447 = 0.001034241;
            }
        } else {
            if (input[3] >= 0.0224605) {
                var447 = -0.0068804296;
            } else {
                var447 = 0.017725686;
            }
        }
    } else {
        var447 = 0.010366735;
    }
    double var448;
    if (input[5] >= -0.1572775) {
        if (input[3] >= 0.0495895) {
            var448 = 0.011182128;
        } else {
            if (input[5] >= 0.0555285) {
                var448 = 0.009868471;
            } else {
                if (input[3] >= -0.0105435) {
                    var448 = -0.03127841;
                } else {
                    var448 = -0.0012410193;
                }
            }
        }
    } else {
        var448 = 0.011111584;
    }
    double var449;
    if (input[2] >= 8.918379) {
        if (input[5] >= -0.034523502) {
            if (input[4] >= 0.041642502) {
                var449 = -0.02718976;
            } else {
                if (input[0] >= -0.49741548) {
                    var449 = -0.02269332;
                } else {
                    var449 = 0.019871693;
                }
            }
        } else {
            var449 = 0.011095108;
        }
    } else {
        var449 = 0.009914864;
    }
    double var450;
    if (input[0] >= -0.251552) {
        var450 = 0.010697518;
    } else {
        if (input[5] >= 0.085074) {
            var450 = 0.01140545;
        } else {
            if (input[4] >= 0.008737) {
                var450 = 0.006536056;
            } else {
                if (input[5] >= -0.022146) {
                    var450 = -0.034018915;
                } else {
                    var450 = 0.002208902;
                }
            }
        }
    }
    double var451;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[5] >= 0.187219) {
                var451 = -0.01028627;
            } else {
                if (input[2] >= 10.040221) {
                    var451 = -0.0010806441;
                } else {
                    var451 = 0.030000648;
                }
            }
        } else {
            var451 = -0.014780871;
        }
    } else {
        var451 = -0.011302937;
    }
    double var452;
    if (input[2] >= 9.6779) {
        if (input[1] >= 1.2255759) {
            var452 = 0.01962065;
        } else {
            if (input[0] >= -0.664992) {
                var452 = -0.015807664;
            } else {
                var452 = 0.008366736;
            }
        }
    } else {
        if (input[3] >= -0.080849) {
            if (input[5] >= 0.014248) {
                var452 = -0.012125769;
            } else {
                var452 = 0.018800527;
            }
        } else {
            var452 = -0.02041677;
        }
    }
    double var453;
    if (input[2] >= 10.619368) {
        var453 = 0.010635058;
    } else {
        if (input[0] >= -0.781001) {
            if (input[2] >= 9.740918) {
                var453 = -0.022728177;
            } else {
                if (input[4] >= 0.0262595) {
                    var453 = -0.015121263;
                } else {
                    var453 = 0.015683262;
                }
            }
        } else {
            var453 = 0.0125589;
        }
    }
    double var454;
    if (input[2] >= 9.6779) {
        if (input[3] >= -0.058870003) {
            if (input[5] >= 0.013040001) {
                var454 = 0.014560185;
            } else {
                var454 = -0.018798817;
            }
        } else {
            var454 = 0.020055987;
        }
    } else {
        if (input[2] >= 8.918379) {
            if (input[5] >= 0.027758) {
                var454 = -0.022385303;
            } else {
                var454 = -0.0011404123;
            }
        } else {
            var454 = 0.0071819453;
        }
    }
    double var455;
    if (input[2] >= 9.24717) {
        if (input[2] >= 9.649159) {
            if (input[4] >= -0.0863375) {
                if (input[1] >= 1.0318794) {
                    var455 = -0.0099896295;
                } else {
                    var455 = 0.02189126;
                }
            } else {
                var455 = -0.016345872;
            }
        } else {
            var455 = 0.021593077;
        }
    } else {
        if (input[3] >= -0.010881) {
            var455 = -0.014555601;
        } else {
            var455 = 0.00083815603;
        }
    }
    double var456;
    if (input[4] >= -0.115644) {
        if (input[0] >= -0.6831795) {
            if (input[1] >= 1.361419) {
                var456 = 0.02423848;
            } else {
                var456 = -0.014930503;
            }
        } else {
            if (input[0] >= -0.853675) {
                var456 = -0.02639609;
            } else {
                var456 = 0.004010377;
            }
        }
    } else {
        var456 = 0.009541966;
    }
    double var457;
    if (input[2] >= 9.6779) {
        if (input[1] >= 0.7206015) {
            if (input[5] >= 0.003061) {
                var457 = -0.0023317726;
            } else {
                var457 = 0.028312687;
            }
        } else {
            var457 = -0.010226578;
        }
    } else {
        if (input[2] >= 9.346714) {
            var457 = -0.019363804;
        } else {
            if (input[0] >= -0.581316) {
                var457 = -0.0064252135;
            } else {
                var457 = 0.01312657;
            }
        }
    }
    double var458;
    if (input[0] >= -1.041085) {
        if (input[4] >= 0.029079) {
            var458 = 0.01990129;
        } else {
            if (input[4] >= -0.200299) {
                if (input[0] >= -0.6465055) {
                    var458 = 0.00049011724;
                } else {
                    var458 = -0.027418226;
                }
            } else {
                var458 = 0.010721911;
            }
        }
    } else {
        var458 = -0.012256386;
    }
    double var459;
    if (input[1] >= 1.3079054) {
        if (input[5] >= -0.020039499) {
            if (input[4] >= -0.0284945) {
                var459 = 0.028940931;
            } else {
                var459 = -0.015128853;
            }
        } else {
            var459 = -0.02488039;
        }
    } else {
        if (input[5] >= 0.020573001) {
            var459 = -0.01058265;
        } else {
            var459 = 0.02073819;
        }
    }
    double var460;
    if (input[4] >= -0.115644) {
        if (input[1] >= 1.0318794) {
            if (input[2] >= 9.355395) {
                if (input[5] >= 0.028944999) {
                    var460 = -0.035350796;
                } else {
                    var460 = 0.0040934156;
                }
            } else {
                var460 = 0.007641375;
            }
        } else {
            var460 = 0.0076261587;
        }
    } else {
        var460 = 0.009244887;
    }
    double var461;
    if (input[2] >= 9.24717) {
        if (input[5] >= 0.134565) {
            var461 = 0.02043819;
        } else {
            if (input[4] >= -0.0774975) {
                if (input[1] >= 1.1989315) {
                    var461 = 0.02492424;
                } else {
                    var461 = -0.008873199;
                }
            } else {
                var461 = -0.021119464;
            }
        }
    } else {
        if (input[4] >= 0.0086925) {
            var461 = -0.01388862;
        } else {
            var461 = -0.0010210343;
        }
    }
    double var462;
    if (input[4] >= -0.0166455) {
        if (input[3] >= 0.0412995) {
            var462 = 0.0123141585;
        } else {
            if (input[3] >= -0.059112) {
                var462 = -0.024270631;
            } else {
                var462 = 0.0038500808;
            }
        }
    } else {
        if (input[5] >= 0.049292497) {
            var462 = -0.009608204;
        } else {
            var462 = 0.018781483;
        }
    }
    double var463;
    if (input[4] >= 0.03873) {
        if (input[1] >= 1.361419) {
            var463 = 0.0026426492;
        } else {
            var463 = -0.017163359;
        }
    } else {
        if (input[1] >= 1.2531195) {
            if (input[2] >= 9.24717) {
                var463 = 0.008094952;
            } else {
                var463 = -0.01809988;
            }
        } else {
            if (input[2] >= 10.27905) {
                var463 = -0.002023713;
            } else {
                var463 = 0.023831317;
            }
        }
    }
    double var464;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[4] >= -0.017124001) {
                if (input[1] >= 1.282084) {
                    var464 = 0.018049331;
                } else {
                    var464 = -0.019281378;
                }
            } else {
                var464 = 0.02749697;
            }
        } else {
            var464 = -0.012256305;
        }
    } else {
        var464 = -0.010168427;
    }
    double var465;
    if (input[1] >= 1.3079054) {
        if (input[5] >= -0.020039499) {
            if (input[4] >= -0.0284945) {
                var465 = 0.022698004;
            } else {
                var465 = -0.013280302;
            }
        } else {
            var465 = -0.022397693;
        }
    } else {
        if (input[0] >= -0.5099895) {
            var465 = 0.023236167;
        } else {
            var465 = -0.0050090253;
        }
    }
    double var466;
    if (input[4] >= -0.115644) {
        if (input[1] >= 1.0318794) {
            if (input[2] >= 9.355395) {
                if (input[5] >= 0.028944999) {
                    var466 = -0.03621073;
                } else {
                    var466 = 0.0019459118;
                }
            } else {
                var466 = 0.007968216;
            }
        } else {
            var466 = 0.009270926;
        }
    } else {
        var466 = 0.011002923;
    }
    double var467;
    if (input[5] >= 0.0354945) {
        if (input[1] >= 1.768048) {
            var467 = -0.007461441;
        } else {
            var467 = 0.015342445;
        }
    } else {
        if (input[5] >= -0.022142) {
            var467 = -0.016345892;
        } else {
            if (input[0] >= -0.67816496) {
                var467 = 0.016889531;
            } else {
                var467 = -0.010109391;
            }
        }
    }
    double var468;
    if (input[0] >= -0.6384225) {
        if (input[2] >= 9.960512) {
            var468 = 0.0123449;
        } else {
            if (input[1] >= 1.551898) {
                var468 = 0.003934211;
            } else {
                var468 = -0.02599849;
            }
        }
    } else {
        if (input[0] >= -0.7613915) {
            var468 = 0.020710375;
        } else {
            if (input[4] >= -0.0023415) {
                var468 = -0.010696156;
            } else {
                var468 = 0.004033744;
            }
        }
    }
    double var469;
    if (input[1] >= 1.4861845) {
        if (input[4] >= 0.026313) {
            var469 = -0.018988518;
        } else {
            var469 = 0.005450845;
        }
    } else {
        if (input[4] >= 0.0184735) {
            var469 = 0.02051721;
        } else {
            if (input[0] >= -0.5891745) {
                var469 = 0.014246081;
            } else {
                var469 = -0.019373644;
            }
        }
    }
    double var470;
    if (input[0] >= -0.273556) {
        var470 = -0.010921365;
    } else {
        if (input[3] >= -0.0191905) {
            if (input[4] >= -0.031839497) {
                var470 = 0.025222154;
            } else {
                var470 = -0.0064475564;
            }
        } else {
            if (input[2] >= 9.65148) {
                var470 = -0.017144809;
            } else {
                var470 = 0.008701054;
            }
        }
    }
    double var471;
    if (input[4] >= -0.115644) {
        if (input[0] >= -0.8274795) {
            if (input[4] >= 0.0939405) {
                var471 = 0.008637754;
            } else {
                if (input[0] >= -0.54456747) {
                    var471 = -0.026229547;
                } else {
                    var471 = 0.0027934073;
                }
            }
        } else {
            var471 = 0.009654368;
        }
    } else {
        var471 = 0.009978252;
    }
    double var472;
    if (input[4] >= 0.179801) {
        var472 = -0.012058515;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[1] >= 1.460438) {
                var472 = -0.022263527;
            } else {
                var472 = 0.009003761;
            }
        } else {
            if (input[3] >= -0.019621) {
                var472 = 0.0060053756;
            } else {
                var472 = 0.025795823;
            }
        }
    }
    double var473;
    if (input[1] >= 0.6613995) {
        if (input[1] >= 1.148487) {
            if (input[5] >= -0.020039499) {
                if (input[4] >= -0.0284945) {
                    var473 = 0.02075685;
                } else {
                    var473 = -0.0090184035;
                }
            } else {
                var473 = -0.015791351;
            }
        } else {
            var473 = 0.01943171;
        }
    } else {
        var473 = -0.010797961;
    }
    double var474;
    if (input[5] >= -0.1572775) {
        if (input[0] >= -0.6349045) {
            if (input[0] >= -0.14385101) {
                var474 = -0.015843546;
            } else {
                if (input[1] >= 1.478251) {
                    var474 = -0.0022586691;
                } else {
                    var474 = 0.033614375;
                }
            }
        } else {
            if (input[5] >= 0.00723) {
                var474 = 0.0037116976;
            } else {
                var474 = -0.02779797;
            }
        }
    } else {
        var474 = 0.012071319;
    }
    double var475;
    if (input[0] >= -0.251552) {
        var475 = 0.011800076;
    } else {
        if (input[5] >= 0.085074) {
            var475 = 0.010174896;
        } else {
            if (input[3] >= -0.0466225) {
                if (input[4] >= 0.0055235) {
                    var475 = 0.00860717;
                } else {
                    var475 = -0.031781796;
                }
            } else {
                var475 = 0.007943351;
            }
        }
    }
    double var476;
    if (input[4] >= 0.03873) {
        if (input[1] >= 1.361419) {
            var476 = 0.003524735;
        } else {
            var476 = -0.019629125;
        }
    } else {
        if (input[3] >= -0.17791551) {
            if (input[2] >= 9.420285) {
                if (input[2] >= 9.906699) {
                    var476 = -0.0012592702;
                } else {
                    var476 = 0.0370304;
                }
            } else {
                var476 = -0.0094455015;
            }
        } else {
            var476 = -0.008116126;
        }
    }
    double var477;
    if (input[4] >= 0.03873) {
        if (input[1] >= 1.361419) {
            var477 = 0.0029448047;
        } else {
            var477 = -0.016682927;
        }
    } else {
        if (input[0] >= -0.8274795) {
            if (input[5] >= -0.0221435) {
                if (input[0] >= -0.5228625) {
                    var477 = 0.004566095;
                } else {
                    var477 = -0.026025942;
                }
            } else {
                var477 = 0.018864455;
            }
        } else {
            var477 = 0.018551534;
        }
    }
    double var478;
    if (input[2] >= 9.346714) {
        if (input[2] >= 9.6779) {
            if (input[1] >= 1.2255759) {
                var478 = 0.01769628;
            } else {
                if (input[0] >= -0.63610196) {
                    var478 = -0.017450955;
                } else {
                    var478 = 0.0072223754;
                }
            }
        } else {
            var478 = -0.018842027;
        }
    } else {
        if (input[0] >= -0.555495) {
            var478 = -0.00059162185;
        } else {
            var478 = 0.01402705;
        }
    }
    double var479;
    if (input[2] >= 9.740918) {
        if (input[2] >= 9.960512) {
            if (input[0] >= -0.728909) {
                var479 = 0.019947834;
            } else {
                var479 = -0.0120150745;
            }
        } else {
            var479 = -0.019548617;
        }
    } else {
        if (input[4] >= 0.0262595) {
            var479 = -0.008677134;
        } else {
            if (input[0] >= -0.6370005) {
                var479 = 0.02408899;
            } else {
                var479 = 0.0005295609;
            }
        }
    }
    double var480;
    if (input[3] >= 0.235236) {
        var480 = -0.01010682;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[0] >= -0.3920345) {
                var480 = 0.013433719;
            } else {
                if (input[5] >= 0.0111595) {
                    var480 = -0.0037171214;
                } else {
                    var480 = -0.030040419;
                }
            }
        } else {
            if (input[4] >= -0.0023415) {
                var480 = 0.00070438493;
            } else {
                var480 = 0.029111631;
            }
        }
    }
    double var481;
    if (input[2] >= 10.194775) {
        var481 = -0.009129984;
    } else {
        if (input[5] >= -0.002283) {
            if (input[4] >= 0.010918001) {
                var481 = 0.015452157;
            } else {
                var481 = -0.02109184;
            }
        } else {
            if (input[4] >= 0.0086925) {
                var481 = -0.0109512545;
            } else {
                var481 = 0.037046496;
            }
        }
    }
    double var482;
    if (input[4] >= -0.264189) {
        if (input[3] >= -0.12821901) {
            if (input[3] >= -0.0191905) {
                if (input[2] >= 9.533001) {
                    if (input[0] >= -0.595237) {
                        var482 = 0.0016137654;
                    } else {
                        var482 = 0.021882996;
                    }
                } else {
                    var482 = -0.007576237;
                }
            } else {
                var482 = -0.026156604;
            }
        } else {
            var482 = 0.023478115;
        }
    } else {
        var482 = -0.009664021;
    }
    double var483;
    if (input[4] >= -0.115644) {
        if (input[1] >= 1.0318794) {
            if (input[2] >= 9.355395) {
                if (input[3] >= 0.032702997) {
                    var483 = -0.033965725;
                } else {
                    var483 = 0.0020462417;
                }
            } else {
                var483 = 0.0095697;
            }
        } else {
            var483 = 0.008294311;
        }
    } else {
        var483 = 0.009101866;
    }
    double var484;
    if (input[3] >= -0.1566295) {
        if (input[4] >= -0.06454) {
            if (input[4] >= 0.0055144997) {
                if (input[0] >= -0.6085595) {
                    var484 = -0.0037633784;
                } else {
                    var484 = 0.020775922;
                }
            } else {
                var484 = -0.022815112;
            }
        } else {
            var484 = 0.018391952;
        }
    } else {
        var484 = -0.009588094;
    }
    double var485;
    if (input[0] >= -0.7613915) {
        if (input[0] >= -0.6384225) {
            if (input[0] >= -0.54209745) {
                if (input[0] >= -0.273556) {
                    var485 = -0.006813045;
                } else {
                    var485 = 0.018486835;
                }
            } else {
                var485 = -0.017129492;
            }
        } else {
            var485 = 0.019938018;
        }
    } else {
        if (input[4] >= -0.0023415) {
            var485 = -0.013554625;
        } else {
            var485 = 0.00032236864;
        }
    }
    double var486;
    if (input[5] >= -0.116819) {
        if (input[1] >= 1.829271) {
            var486 = 0.020218767;
        } else {
            if (input[1] >= 1.51238) {
                var486 = -0.02819057;
            } else {
                if (input[5] >= 0.048444502) {
                    var486 = -0.010035697;
                } else {
                    var486 = 0.025215989;
                }
            }
        }
    } else {
        var486 = -0.009280426;
    }
    double var487;
    if (input[1] >= 0.6613995) {
        if (input[3] >= 0.207276) {
            var487 = 0.019585764;
        } else {
            if (input[0] >= -0.420326) {
                var487 = 0.019431548;
            } else {
                if (input[2] >= 9.756487) {
                    var487 = 0.010706319;
                } else {
                    if (input[1] >= 1.552796) {
                        var487 = -0.0012358227;
                    } else {
                        var487 = -0.037765924;
                    }
                }
            }
        }
    } else {
        var487 = -0.010030359;
    }
    double var488;
    if (input[3] >= 0.235236) {
        var488 = -0.011376553;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[0] >= -0.3920345) {
                var488 = 0.010494621;
            } else {
                if (input[5] >= 0.0111595) {
                    var488 = -0.00072471047;
                } else {
                    var488 = -0.026450703;
                }
            }
        } else {
            if (input[3] >= -0.039893) {
                var488 = 0.025842566;
            } else {
                var488 = 0.0010052511;
            }
        }
    }
    double var489;
    if (input[2] >= 10.194775) {
        var489 = -0.010168863;
    } else {
        if (input[5] >= -0.002283) {
            if (input[4] >= 0.010918001) {
                var489 = 0.012176584;
            } else {
                var489 = -0.017538803;
            }
        } else {
            if (input[4] >= 0.0086925) {
                var489 = -0.0084006265;
            } else {
                var489 = 0.033095654;
            }
        }
    }
    double var490;
    if (input[0] >= -0.273556) {
        var490 = -0.009367626;
    } else {
        if (input[0] >= -0.603994) {
            var490 = 0.016872022;
        } else {
            if (input[5] >= -0.032248497) {
                if (input[1] >= 1.265094) {
                    var490 = 0.020422399;
                } else {
                    var490 = -0.0074131433;
                }
            } else {
                var490 = -0.019742606;
            }
        }
    }
    double var491;
    if (input[5] >= -0.073837504) {
        if (input[4] >= -0.064513) {
            if (input[3] >= -0.022045001) {
                if (input[4] >= 0.008369001) {
                    var491 = 0.0016988829;
                } else {
                    var491 = -0.0330582;
                }
            } else {
                var491 = 0.007016003;
            }
        } else {
            var491 = 0.011949855;
        }
    } else {
        var491 = 0.008848934;
    }
    double var492;
    if (input[4] >= -0.264189) {
        if (input[2] >= 10.3126545) {
            var492 = 0.024757927;
        } else {
            if (input[5] >= 0.2077615) {
                var492 = 0.012375185;
            } else {
                if (input[3] >= -0.017301) {
                    if (input[0] >= -0.6126755) {
                        var492 = 0.016552133;
                    } else {
                        var492 = -0.008088112;
                    }
                } else {
                    var492 = -0.026183352;
                }
            }
        }
    } else {
        var492 = -0.011017388;
    }
    double var493;
    if (input[3] >= 0.108812496) {
        var493 = -0.009116215;
    } else {
        if (input[2] >= 10.194251) {
            var493 = -0.0107503235;
        } else {
            if (input[2] >= 8.572523) {
                if (input[3] >= -0.1157215) {
                    var493 = 0.035630997;
                } else {
                    var493 = -0.0049611107;
                }
            } else {
                var493 = -0.010079811;
            }
        }
    }
    double var494;
    if (input[5] >= -0.073837504) {
        if (input[4] >= -0.064513) {
            if (input[3] >= -0.022045001) {
                if (input[4] >= 0.019126501) {
                    var494 = 0.001038651;
                } else {
                    var494 = -0.028847871;
                }
            } else {
                var494 = 0.00663095;
            }
        } else {
            var494 = 0.011103276;
        }
    } else {
        var494 = 0.009484283;
    }
    double var495;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var495 = -0.01879475;
        } else {
            var495 = 0.006664824;
        }
    } else {
        if (input[2] >= 9.856777) {
            var495 = 0.017083498;
        } else {
            if (input[2] >= 9.602606) {
                var495 = -0.020993214;
            } else {
                var495 = 0.01219132;
            }
        }
    }
    double var496;
    if (input[5] >= -0.1572775) {
        if (input[1] >= 1.51238) {
            if (input[5] >= 0.033438) {
                var496 = 0.0043237763;
            } else {
                var496 = -0.025238696;
            }
        } else {
            if (input[1] >= 1.0932515) {
                var496 = 0.024572475;
            } else {
                if (input[3] >= -0.010457) {
                    var496 = 0.006124139;
                } else {
                    var496 = -0.020035861;
                }
            }
        }
    } else {
        var496 = 0.010044302;
    }
    double var497;
    if (input[5] >= 0.048704) {
        if (input[4] >= 0.029023498) {
            var497 = -0.017039116;
        } else {
            var497 = 0.0036814234;
        }
    } else {
        if (input[1] >= 1.736614) {
            var497 = 0.02006356;
        } else {
            if (input[2] >= 9.856777) {
                var497 = 0.018700311;
            } else {
                var497 = -0.019585095;
            }
        }
    }
    double var498;
    if (input[2] >= 10.194775) {
        var498 = -0.008518879;
    } else {
        if (input[1] >= 1.148487) {
            if (input[1] >= 1.5521226) {
                if (input[4] >= 0.0262595) {
                    var498 = -0.011728916;
                } else {
                    var498 = 0.024137717;
                }
            } else {
                var498 = -0.020320311;
            }
        } else {
            var498 = 0.020220295;
        }
    }
    double var499;
    if (input[1] >= 1.869238) {
        var499 = -0.009946584;
    } else {
        if (input[5] >= -0.073837504) {
            if (input[0] >= -0.71019804) {
                if (input[2] >= 9.790316) {
                    var499 = -0.01357311;
                } else {
                    var499 = 0.029863182;
                }
            } else {
                var499 = -0.020847265;
            }
        } else {
            var499 = 0.020365529;
        }
    }
    double var500;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.6933535) {
            if (input[0] >= -0.5618565) {
                var500 = 0.0034746416;
            } else {
                var500 = -0.030030536;
            }
        } else {
            if (input[5] >= -0.0072505) {
                var500 = 0.019738097;
            } else {
                var500 = -0.009271222;
            }
        }
    } else {
        var500 = 0.01006018;
    }
    double var501;
    if (input[0] >= -0.6384225) {
        if (input[1] >= 1.5515985) {
            var501 = 0.0075156596;
        } else {
            if (input[0] >= -0.436043) {
                var501 = 0.0060984357;
            } else {
                var501 = -0.028554877;
            }
        }
    } else {
        if (input[2] >= 10.103839) {
            var501 = -0.0075500016;
        } else {
            var501 = 0.015212013;
        }
    }
    double var502;
    if (input[0] >= -0.273556) {
        var502 = -0.011281246;
    } else {
        if (input[1] >= 1.336496) {
            if (input[0] >= -0.67562056) {
                var502 = 0.028977713;
            } else {
                var502 = -0.007027566;
            }
        } else {
            if (input[2] >= 9.843306) {
                var502 = 0.010965856;
            } else {
                var502 = -0.021557445;
            }
        }
    }
    double var503;
    if (input[4] >= 0.0939405) {
        var503 = 0.01048088;
    } else {
        if (input[0] >= -0.4872365) {
            if (input[3] >= -0.0070200004) {
                var503 = -0.002537496;
            } else {
                var503 = -0.026266364;
            }
        } else {
            if (input[5] >= -0.032321) {
                if (input[3] >= 0.0015195) {
                    var503 = -0.0035453115;
                } else {
                    var503 = 0.029493676;
                }
            } else {
                var503 = -0.0120142745;
            }
        }
    }
    double var504;
    if (input[5] >= 0.048704) {
        if (input[5] >= 0.2795645) {
            var504 = 0.0061777523;
        } else {
            var504 = -0.015625631;
        }
    } else {
        if (input[2] >= 10.206525) {
            var504 = -0.01014239;
        } else {
            if (input[4] >= -0.016539) {
                var504 = -0.0033426343;
            } else {
                var504 = 0.02812906;
            }
        }
    }
    double var505;
    if (input[2] >= 10.619368) {
        var505 = 0.010499278;
    } else {
        if (input[5] >= 0.15826151) {
            var505 = -0.018119784;
        } else {
            if (input[2] >= 9.153989) {
                if (input[1] >= 1.336496) {
                    var505 = 0.011832781;
                } else {
                    var505 = -0.020606313;
                }
            } else {
                var505 = 0.021606298;
            }
        }
    }
    double var506;
    if (input[2] >= 9.6779) {
        if (input[4] >= -0.090422496) {
            if (input[2] >= 10.104813) {
                var506 = 0.00019485291;
            } else {
                var506 = 0.023596345;
            }
        } else {
            var506 = -0.008163736;
        }
    } else {
        if (input[5] >= 0.010689) {
            var506 = -0.015851622;
        } else {
            var506 = 0.0060672374;
        }
    }
    double var507;
    if (input[1] >= 1.3079054) {
        if (input[2] >= 9.048533) {
            if (input[3] >= 0.0084675) {
                var507 = -0.01354974;
            } else {
                var507 = 0.024109887;
            }
        } else {
            var507 = -0.021525996;
        }
    } else {
        if (input[2] >= 10.2684965) {
            var507 = -0.008656634;
        } else {
            var507 = 0.017883671;
        }
    }
    double var508;
    if (input[0] >= -0.251552) {
        var508 = 0.0112461;
    } else {
        if (input[5] >= 0.085074) {
            var508 = 0.011836596;
        } else {
            if (input[4] >= 0.008737) {
                var508 = 0.00881062;
            } else {
                if (input[1] >= 1.336496) {
                    var508 = -0.0012231811;
                } else {
                    var508 = -0.03263868;
                }
            }
        }
    }
    double var509;
    if (input[2] >= 10.3126545) {
        var509 = 0.010438741;
    } else {
        if (input[4] >= -0.115745) {
            if (input[4] >= 0.0939405) {
                var509 = 0.006312539;
            } else {
                if (input[1] >= 1.5521226) {
                    var509 = 0.00096822553;
                } else {
                    var509 = -0.027161438;
                }
            }
        } else {
            var509 = 0.01424255;
        }
    }
    double var510;
    if (input[1] >= 1.4861845) {
        if (input[2] >= 9.355395) {
            var510 = -0.015473314;
        } else {
            var510 = 0.0048670205;
        }
    } else {
        if (input[0] >= -0.842972) {
            if (input[5] >= -0.0084955) {
                var510 = 0.023674332;
            } else {
                var510 = -0.005057519;
            }
        } else {
            var510 = -0.006356413;
        }
    }
    double var511;
    if (input[3] >= -0.0034765) {
        if (input[3] >= 0.108812496) {
            var511 = -0.0049496912;
        } else {
            var511 = 0.018561015;
        }
    } else {
        if (input[1] >= 1.3311815) {
            var511 = -0.017397933;
        } else {
            var511 = 0.0090217525;
        }
    }
    double var512;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.6933535) {
            if (input[0] >= -0.580792) {
                var512 = 0.0045882803;
            } else {
                var512 = -0.030343533;
            }
        } else {
            if (input[0] >= -0.488509) {
                var512 = -0.0040043113;
            } else {
                var512 = 0.017074114;
            }
        }
    } else {
        var512 = 0.008591724;
    }
    double var513;
    if (input[5] >= -0.1572775) {
        if (input[3] >= 0.0495895) {
            var513 = 0.011112143;
        } else {
            if (input[5] >= 0.051800497) {
                var513 = 0.007999601;
            } else {
                if (input[3] >= -0.029096) {
                    var513 = -0.028796904;
                } else {
                    var513 = 0.0023216228;
                }
            }
        }
    } else {
        var513 = 0.010564391;
    }
    double var514;
    if (input[5] >= 0.048704) {
        if (input[1] >= 1.5521226) {
            var514 = 0.0076631927;
        } else {
            var514 = -0.01735594;
        }
    } else {
        if (input[5] >= -0.116819) {
            if (input[1] >= 1.51238) {
                var514 = -0.006890459;
            } else {
                var514 = 0.023739459;
            }
        } else {
            var514 = -0.006993244;
        }
    }
    double var515;
    if (input[2] >= 9.021066) {
        if (input[5] >= -0.0345315) {
            if (input[4] >= 0.041642502) {
                var515 = -0.028578376;
            } else {
                if (input[0] >= -0.562156) {
                    var515 = -0.018351031;
                } else {
                    var515 = 0.0205125;
                }
            }
        } else {
            var515 = 0.01261316;
        }
    } else {
        var515 = 0.010156245;
    }
    double var516;
    if (input[3] >= -0.0191905) {
        if (input[3] >= 0.108812496) {
            var516 = -0.0049596457;
        } else {
            var516 = 0.014540118;
        }
    } else {
        if (input[3] >= -0.2304275) {
            var516 = -0.015148858;
        } else {
            var516 = 0.006786439;
        }
    }
    double var517;
    if (input[4] >= -0.264189) {
        if (input[2] >= 10.3126545) {
            var517 = 0.02257318;
        } else {
            if (input[1] >= 1.736614) {
                var517 = 0.010555338;
            } else {
                if (input[3] >= -0.0293955) {
                    var517 = -0.022071647;
                } else {
                    var517 = 0.00670418;
                }
            }
        }
    } else {
        var517 = -0.011223289;
    }
    double var518;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.2016745) {
            var518 = 0.022239055;
        } else {
            if (input[4] >= 0.02913) {
                var518 = 0.020506628;
            } else {
                if (input[5] >= 0.0289485) {
                    var518 = -0.027300594;
                } else {
                    if (input[0] >= -0.54935753) {
                        var518 = -0.026578343;
                    } else {
                        var518 = 0.018813448;
                    }
                }
            }
        }
    } else {
        var518 = -0.011375717;
    }
    double var519;
    if (input[0] >= -0.251552) {
        var519 = 0.00974268;
    } else {
        if (input[5] >= 0.007181) {
            if (input[1] >= 1.1332185) {
                var519 = 0.020969782;
            } else {
                var519 = -0.013325271;
            }
        } else {
            if (input[2] >= 9.601559) {
                var519 = -0.021528581;
            } else {
                var519 = 0.0039170156;
            }
        }
    }
    double var520;
    if (input[2] >= 9.6779) {
        if (input[1] >= 1.2255759) {
            var520 = 0.018153535;
        } else {
            if (input[0] >= -0.63610196) {
                var520 = -0.01217555;
            } else {
                var520 = 0.005843554;
            }
        }
    } else {
        if (input[5] >= 0.14650649) {
            var520 = -0.019958256;
        } else {
            if (input[2] >= 9.153989) {
                var520 = -0.015651777;
            } else {
                var520 = 0.021886565;
            }
        }
    }
    double var521;
    if (input[3] >= -0.0034765) {
        if (input[3] >= 0.235236) {
            var521 = -0.0078462185;
        } else {
            if (input[4] >= -0.004039) {
                var521 = -0.0025295338;
            } else {
                var521 = 0.022765478;
            }
        }
    } else {
        if (input[1] >= 1.3311815) {
            var521 = -0.015854118;
        } else {
            var521 = 0.0076833935;
        }
    }
    double var522;
    if (input[0] >= -0.7613915) {
        if (input[1] >= 1.7950675) {
            var522 = -0.008518035;
        } else {
            if (input[5] >= -0.0072505) {
                var522 = 0.019808695;
            } else {
                var522 = -0.0034328464;
            }
        }
    } else {
        if (input[4] >= -0.002558) {
            var522 = -0.010536999;
        } else {
            var522 = -0.0010144222;
        }
    }
    double var523;
    if (input[5] >= -0.1572775) {
        if (input[3] >= 0.0495895) {
            var523 = 0.010604457;
        } else {
            if (input[5] >= 0.051800497) {
                var523 = 0.0082407845;
            } else {
                if (input[3] >= -0.022045001) {
                    var523 = -0.029180896;
                } else {
                    var523 = 0.0015107226;
                }
            }
        }
    } else {
        var523 = 0.009899011;
    }
    double var524;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var524 = -0.017256817;
        } else {
            var524 = 0.005825779;
        }
    } else {
        if (input[0] >= -0.71019804) {
            if (input[0] >= -0.394804) {
                var524 = -0.0035434186;
            } else {
                var524 = 0.021339158;
            }
        } else {
            var524 = -0.007377614;
        }
    }
    double var525;
    if (input[0] >= -0.81550395) {
        if (input[2] >= 9.960512) {
            var525 = 0.013927187;
        } else {
            if (input[2] >= 9.740918) {
                var525 = -0.027479503;
            } else {
                if (input[4] >= 0.0262595) {
                    var525 = -0.012783652;
                } else {
                    var525 = 0.01275473;
                }
            }
        }
    } else {
        var525 = 0.008543162;
    }
    double var526;
    if (input[2] >= 9.6779) {
        if (input[2] >= 10.194775) {
            var526 = -0.0069782254;
        } else {
            var526 = 0.014958267;
        }
    } else {
        if (input[5] >= 0.14650649) {
            var526 = -0.01879311;
        } else {
            if (input[2] >= 9.153989) {
                var526 = -0.0143235205;
            } else {
                var526 = 0.020434339;
            }
        }
    }
    double var527;
    if (input[2] >= 9.24717) {
        if (input[2] >= 9.653501) {
            if (input[4] >= -0.0863375) {
                if (input[1] >= 1.0318794) {
                    var527 = -0.007386965;
                } else {
                    var527 = 0.02085445;
                }
            } else {
                var527 = -0.018966552;
            }
        } else {
            var527 = 0.020689106;
        }
    } else {
        var527 = -0.008708895;
    }
    double var528;
    if (input[0] >= -0.251552) {
        var528 = 0.009648743;
    } else {
        if (input[5] >= 0.085074) {
            var528 = 0.009753791;
        } else {
            if (input[4] >= 0.008737) {
                var528 = 0.008557474;
            } else {
                if (input[1] >= 1.336496) {
                    var528 = 0.0003770663;
                } else {
                    var528 = -0.030555371;
                }
            }
        }
    }
    double var529;
    if (input[2] >= 9.6779) {
        if (input[0] >= -0.4872365) {
            var529 = -0.008953847;
        } else {
            if (input[3] >= -0.0191905) {
                var529 = 0.023964232;
            } else {
                var529 = -0.0044401046;
            }
        }
    } else {
        if (input[3] >= -0.080849) {
            if (input[5] >= 0.014409) {
                var529 = -0.007887891;
            } else {
                var529 = 0.013801383;
            }
        } else {
            var529 = -0.017719647;
        }
    }
    double var530;
    if (input[4] >= -0.211275) {
        if (input[3] >= -0.12821901) {
            if (input[3] >= -0.0191905) {
                if (input[1] >= 1.361793) {
                    var530 = 0.014687371;
                } else {
                    var530 = -0.011716179;
                }
            } else {
                var530 = -0.025046362;
            }
        } else {
            var530 = 0.013334427;
        }
    } else {
        var530 = 0.010096231;
    }
    double var531;
    if (input[0] >= -0.420326) {
        var531 = 0.008497984;
    } else {
        if (input[5] >= -0.087015495) {
            if (input[1] >= 1.4597645) {
                var531 = -0.022767112;
            } else {
                var531 = 0.003773986;
            }
        } else {
            var531 = 0.011497837;
        }
    }
    double var532;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[4] >= 0.041665003) {
                var532 = -0.0076635727;
            } else {
                if (input[4] >= -0.0166455) {
                    var532 = 0.0057568606;
                } else {
                    var532 = 0.02634588;
                }
            }
        } else {
            var532 = -0.010883514;
        }
    } else {
        var532 = -0.009582264;
    }
    double var533;
    if (input[4] >= -0.211275) {
        if (input[3] >= -0.12821901) {
            if (input[4] >= 0.050485) {
                var533 = 0.008675249;
            } else {
                if (input[2] >= 9.42066) {
                    var533 = -0.0009617892;
                } else {
                    var533 = -0.029261718;
                }
            }
        } else {
            var533 = 0.0117956055;
        }
    } else {
        var533 = 0.0105551705;
    }
    double var534;
    if (input[3] >= 0.108812496) {
        var534 = -0.007906032;
    } else {
        if (input[4] >= -0.112422496) {
            if (input[5] >= 0.0354945) {
                var534 = 0.016709948;
            } else {
                if (input[1] >= 1.2264745) {
                    var534 = 0.002164687;
                } else {
                    var534 = -0.02370589;
                }
            }
        } else {
            var534 = 0.01795748;
        }
    }
    double var535;
    if (input[3] >= -0.296566) {
        if (input[2] >= 9.634115) {
            if (input[1] >= 0.91302645) {
                if (input[5] >= 0.020514) {
                    var535 = -0.02610656;
                } else {
                    var535 = -0.0010734462;
                }
            } else {
                var535 = 0.013224539;
            }
        } else {
            if (input[3] >= 0.0044595003) {
                var535 = 0.0013995813;
            } else {
                var535 = 0.023417816;
            }
        }
    } else {
        var535 = -0.011328989;
    }
    double var536;
    if (input[1] >= 0.6613995) {
        if (input[3] >= 0.197135) {
            var536 = 0.019538065;
        } else {
            if (input[2] >= 9.764645) {
                var536 = 0.014805025;
            } else {
                if (input[2] >= 9.153989) {
                    var536 = -0.02682828;
                } else {
                    var536 = 0.0075092777;
                }
            }
        }
    } else {
        var536 = -0.009708935;
    }
    double var537;
    if (input[3] >= 0.235236) {
        var537 = -0.009999345;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[0] >= -0.3920345) {
                var537 = 0.012667268;
            } else {
                if (input[4] >= -0.028988) {
                    var537 = -0.0040486054;
                } else {
                    var537 = -0.025830077;
                }
            }
        } else {
            if (input[4] >= -0.0023415) {
                var537 = 0.0021465807;
            } else {
                var537 = 0.024419872;
            }
        }
    }
    double var538;
    if (input[0] >= -0.273556) {
        var538 = -0.009172208;
    } else {
        if (input[0] >= -0.54209745) {
            var538 = 0.019932663;
        } else {
            if (input[5] >= -0.032248497) {
                if (input[5] >= 0.0486765) {
                    var538 = -0.010761232;
                } else {
                    var538 = 0.023701062;
                }
            } else {
                var538 = -0.015875435;
            }
        }
    }
    double var539;
    if (input[1] >= 0.7206015) {
        if (input[4] >= 0.0939405) {
            var539 = 0.018061895;
        } else {
            if (input[5] >= -0.0040800003) {
                if (input[4] >= -0.06454) {
                    var539 = -0.029104434;
                } else {
                    var539 = 0.005447059;
                }
            } else {
                var539 = 0.019688303;
            }
        }
    } else {
        var539 = -0.008689737;
    }
    double var540;
    if (input[4] >= 0.179801) {
        var540 = -0.009665728;
    } else {
        if (input[1] >= 0.824635) {
            if (input[3] >= -0.0054735) {
                var540 = 0.0153771695;
            } else {
                if (input[1] >= 1.6232245) {
                    var540 = 0.0057626166;
                } else {
                    var540 = -0.03416229;
                }
            }
        } else {
            var540 = 0.018434078;
        }
    }
    double var541;
    if (input[1] >= 0.7206015) {
        if (input[1] >= 1.148487) {
            if (input[5] >= -0.020039499) {
                if (input[5] >= 0.14650649) {
                    var541 = -0.008038876;
                } else {
                    var541 = 0.021139694;
                }
            } else {
                var541 = -0.016556991;
            }
        } else {
            var541 = 0.019637726;
        }
    } else {
        var541 = -0.009637003;
    }
    double var542;
    if (input[1] >= 1.869238) {
        var542 = -0.008087697;
    } else {
        if (input[5] >= -0.087015495) {
            if (input[3] >= 0.024683502) {
                var542 = 0.019641336;
            } else {
                if (input[3] >= -0.0810805) {
                    var542 = -0.024916854;
                } else {
                    var542 = 0.003991899;
                }
            }
        } else {
            var542 = 0.020724691;
        }
    }
    double var543;
    if (input[3] >= 0.108812496) {
        var543 = -0.008474687;
    } else {
        if (input[2] >= 10.194251) {
            var543 = -0.007877942;
        } else {
            if (input[2] >= 9.673559) {
                var543 = 0.025647089;
            } else {
                if (input[3] >= -0.080849) {
                    var543 = 0.011145931;
                } else {
                    var543 = -0.015079553;
                }
            }
        }
    }
    double var544;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[3] >= -0.021978) {
                if (input[3] >= 0.039448) {
                    var544 = 0.014976179;
                } else {
                    var544 = -0.016289346;
                }
            } else {
                var544 = 0.024743821;
            }
        } else {
            var544 = -0.0107070785;
        }
    } else {
        var544 = -0.008634601;
    }
    double var545;
    if (input[3] >= 0.108812496) {
        var545 = -0.007450813;
    } else {
        if (input[4] >= -0.112422496) {
            if (input[5] >= 0.0354945) {
                var545 = 0.015424952;
            } else {
                if (input[0] >= -0.5566175) {
                    var545 = -0.023238946;
                } else {
                    var545 = 0.0017406661;
                }
            }
        } else {
            var545 = 0.01832868;
        }
    }
    double var546;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var546 = -0.018381603;
        } else {
            var546 = 0.008025596;
        }
    } else {
        if (input[0] >= -0.71019804) {
            if (input[5] >= -0.0825185) {
                var546 = 0.018924357;
            } else {
                var546 = -0.000049869584;
            }
        } else {
            var546 = -0.006408704;
        }
    }
    double var547;
    if (input[2] >= 10.619368) {
        var547 = 0.010448435;
    } else {
        if (input[0] >= -0.781001) {
            if (input[5] >= -0.0144650005) {
                if (input[4] >= -0.001613) {
                    var547 = 0.0030786374;
                } else {
                    var547 = -0.028629852;
                }
            } else {
                var547 = 0.007595218;
            }
        } else {
            var547 = 0.013512982;
        }
    }
    double var548;
    if (input[4] >= 0.03873) {
        if (input[1] >= 1.3706245) {
            var548 = 0.0044006035;
        } else {
            var548 = -0.016177852;
        }
    } else {
        if (input[4] >= -0.024004001) {
            var548 = 0.01553981;
        } else {
            if (input[0] >= -0.61050546) {
                var548 = 0.010000856;
            } else {
                var548 = -0.014591255;
            }
        }
    }
    double var549;
    if (input[4] >= -0.211275) {
        if (input[2] >= 8.572523) {
            if (input[1] >= 1.3363465) {
                var549 = 0.019994209;
            } else {
                if (input[4] >= 0.0049409997) {
                    var549 = 0.0078071444;
                } else {
                    var549 = -0.025884932;
                }
            }
        } else {
            var549 = -0.016334688;
        }
    } else {
        var549 = 0.009631307;
    }
    double var550;
    if (input[1] >= 1.3079054) {
        if (input[5] >= -0.020039499) {
            if (input[4] >= -0.0284945) {
                var550 = 0.019118613;
            } else {
                var550 = -0.0086217;
            }
        } else {
            var550 = -0.019773506;
        }
    } else {
        if (input[5] >= 0.020573001) {
            var550 = -0.008384749;
        } else {
            var550 = 0.017541673;
        }
    }
    double var551;
    if (input[4] >= 0.03873) {
        if (input[0] >= -0.6085595) {
            var551 = -0.015652211;
        } else {
            var551 = 0.0037474076;
        }
    } else {
        if (input[5] >= 0.0593575) {
            var551 = 0.015604219;
        } else {
            if (input[3] >= -0.0105435) {
                var551 = -0.012830804;
            } else {
                var551 = 0.011047832;
            }
        }
    }
    double var552;
    if (input[0] >= -0.420326) {
        var552 = 0.008607647;
    } else {
        if (input[5] >= -0.087015495) {
            if (input[3] >= 0.021173) {
                var552 = 0.008210794;
            } else {
                if (input[3] >= -0.058870003) {
                    var552 = -0.0275376;
                } else {
                    var552 = -0.0016570941;
                }
            }
        } else {
            var552 = 0.01220265;
        }
    }
    double var553;
    if (input[4] >= 0.03873) {
        if (input[0] >= -0.6085595) {
            var553 = -0.013896355;
        } else {
            var553 = 0.0027245567;
        }
    } else {
        if (input[5] >= -0.070695505) {
            if (input[1] >= 1.5498769) {
                var553 = -0.009196752;
            } else {
                var553 = 0.021461392;
            }
        } else {
            var553 = -0.008637384;
        }
    }
    double var554;
    if (input[2] >= 9.740918) {
        if (input[2] >= 9.960512) {
            var554 = 0.0044132895;
        } else {
            var554 = -0.018592468;
        }
    } else {
        if (input[0] >= -0.67562056) {
            if (input[1] >= 1.7936449) {
                var554 = -0.0048358217;
            } else {
                var554 = 0.025615036;
            }
        } else {
            var554 = -0.0079468805;
        }
    }
    double var555;
    if (input[2] >= 8.918379) {
        if (input[3] >= 0.0142645) {
            if (input[2] >= 9.774524) {
                var555 = 0.0042808843;
            } else {
                var555 = -0.024053762;
            }
        } else {
            if (input[1] >= 1.1645036) {
                var555 = 0.024652693;
            } else {
                var555 = -0.0126237115;
            }
        }
    } else {
        var555 = 0.00931074;
    }
    double var556;
    if (input[3] >= -0.296566) {
        if (input[2] >= 9.634115) {
            if (input[1] >= 0.91302645) {
                if (input[4] >= -0.0133675) {
                    var556 = -0.024228571;
                } else {
                    var556 = -0.0007646462;
                }
            } else {
                var556 = 0.012198372;
            }
        } else {
            if (input[3] >= 0.0044595003) {
                var556 = 0.0025397665;
            } else {
                var556 = 0.019669807;
            }
        }
    } else {
        var556 = -0.010698884;
    }
    double var557;
    if (input[5] >= -0.1572775) {
        if (input[0] >= -0.7613915) {
            if (input[0] >= -0.153356) {
                var557 = -0.014554871;
            } else {
                if (input[3] >= 0.0142645) {
                    var557 = -0.008617807;
                } else {
                    var557 = 0.028733453;
                }
            }
        } else {
            var557 = -0.014835236;
        }
    } else {
        var557 = 0.009797102;
    }
    double var558;
    if (input[3] >= -0.0191905) {
        if (input[1] >= 1.220487) {
            if (input[1] >= 1.736614) {
                var558 = 0.010241889;
            } else {
                var558 = -0.015255087;
            }
        } else {
            var558 = 0.016412955;
        }
    } else {
        if (input[3] >= -0.2304275) {
            var558 = -0.014735896;
        } else {
            var558 = 0.005643868;
        }
    }
    double var559;
    if (input[3] >= -0.296566) {
        if (input[5] >= 0.170549) {
            var559 = 0.018867835;
        } else {
            if (input[4] >= 0.0184545) {
                var559 = 0.015597521;
            } else {
                if (input[1] >= 1.3363465) {
                    var559 = 0.01164699;
                } else {
                    var559 = -0.02959244;
                }
            }
        }
    } else {
        var559 = -0.010917498;
    }
    double var560;
    if (input[1] >= 1.3079054) {
        if (input[2] >= 9.048533) {
            if (input[3] >= 0.0084675) {
                var560 = -0.012843972;
            } else {
                var560 = 0.022596778;
            }
        } else {
            var560 = -0.021338098;
        }
    } else {
        if (input[2] >= 10.2684965) {
            var560 = -0.0076981722;
        } else {
            var560 = 0.01716289;
        }
    }
    double var561;
    if (input[2] >= 10.619368) {
        var561 = 0.011413792;
    } else {
        if (input[5] >= 0.15826151) {
            var561 = -0.016644366;
        } else {
            if (input[5] >= 0.0071334997) {
                var561 = 0.017245539;
            } else {
                if (input[2] >= 9.602606) {
                    var561 = -0.019136036;
                } else {
                    var561 = 0.011471784;
                }
            }
        }
    }
    double var562;
    if (input[0] >= -0.251552) {
        var562 = 0.010101867;
    } else {
        if (input[5] >= 0.207694) {
            var562 = 0.0117680235;
        } else {
            if (input[4] >= 0.065474495) {
                var562 = -0.024175094;
            } else {
                if (input[4] >= -0.15768349) {
                    if (input[2] >= 9.724379) {
                        var562 = 0.022424877;
                    } else {
                        var562 = -0.004342139;
                    }
                } else {
                    var562 = -0.016267357;
                }
            }
        }
    }
    double var563;
    if (input[5] >= -0.073837504) {
        if (input[3] >= -0.0191495) {
            if (input[4] >= -0.0074725) {
                var563 = -0.009526338;
            } else {
                var563 = 0.020108856;
            }
        } else {
            if (input[0] >= -0.6364765) {
                var563 = -0.003389458;
            } else {
                var563 = -0.018501844;
            }
        }
    } else {
        var563 = 0.009521546;
    }
    double var564;
    if (input[0] >= -0.81550395) {
        if (input[3] >= 0.1852735) {
            var564 = 0.014111673;
        } else {
            if (input[0] >= -0.3920345) {
                var564 = 0.010682604;
            } else {
                if (input[1] >= 1.585578) {
                    var564 = 0.002551987;
                } else {
                    var564 = -0.033158656;
                }
            }
        }
    } else {
        var564 = 0.009803801;
    }
    double var565;
    if (input[0] >= -0.273556) {
        var565 = -0.009503273;
    } else {
        if (input[3] >= -0.0191905) {
            if (input[4] >= -0.031839497) {
                var565 = 0.025231807;
            } else {
                var565 = -0.009152761;
            }
        } else {
            if (input[4] >= -0.017207) {
                var565 = -0.015515941;
            } else {
                var565 = 0.007300494;
            }
        }
    }
    double var566;
    if (input[5] >= -0.14825949) {
        if (input[1] >= 1.51238) {
            if (input[5] >= 0.033438) {
                var566 = 0.004758152;
            } else {
                var566 = -0.027892752;
            }
        } else {
            if (input[1] >= 1.0932515) {
                var566 = 0.026630541;
            } else {
                var566 = -0.00926492;
            }
        }
    } else {
        var566 = 0.010450058;
    }
    double var567;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var567 = -0.0165431;
        } else {
            var567 = 0.0055581476;
        }
    } else {
        if (input[2] >= 9.373882) {
            if (input[2] >= 10.233021) {
                var567 = -0.006446078;
            } else {
                var567 = 0.022482572;
            }
        } else {
            var567 = -0.007931729;
        }
    }
    double var568;
    if (input[2] >= 10.3126545) {
        var568 = 0.010578431;
    } else {
        if (input[4] >= -0.115745) {
            if (input[4] >= 0.1189125) {
                var568 = 0.0065855975;
            } else {
                if (input[2] >= 9.346714) {
                    var568 = -0.027928706;
                } else {
                    var568 = 0.001427486;
                }
            }
        } else {
            var568 = 0.015112793;
        }
    }
    double var569;
    if (input[0] >= -0.6384225) {
        if (input[2] >= 9.857077) {
            var569 = 0.011119203;
        } else {
            if (input[2] >= 9.3663225) {
                var569 = -0.023953773;
            } else {
                var569 = 0.004297189;
            }
        }
    } else {
        if (input[1] >= 1.551224) {
            var569 = -0.005152037;
        } else {
            var569 = 0.013626831;
        }
    }
    double var570;
    if (input[1] >= 0.6613995) {
        if (input[5] >= -0.086994) {
            if (input[2] >= 9.920171) {
                var570 = -0.019850155;
            } else {
                if (input[2] >= 9.534199) {
                    var570 = 0.027015908;
                } else {
                    var570 = -0.011808159;
                }
            }
        } else {
            var570 = 0.017753446;
        }
    } else {
        var570 = -0.009216491;
    }
    double var571;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[5] >= 0.187219) {
                var571 = -0.009255362;
            } else {
                if (input[3] >= -0.010545) {
                    var571 = 0.00015403541;
                } else {
                    var571 = 0.032826036;
                }
            }
        } else {
            var571 = -0.01046742;
        }
    } else {
        var571 = -0.009247079;
    }
    double var572;
    if (input[0] >= -0.251552) {
        var572 = 0.009598379;
    } else {
        if (input[5] >= 0.085074) {
            var572 = 0.010092837;
        } else {
            if (input[4] >= 0.008737) {
                var572 = 0.006265179;
            } else {
                if (input[1] >= 1.317485) {
                    var572 = 0.0005497199;
                } else {
                    var572 = -0.02805719;
                }
            }
        }
    }
    double var573;
    if (input[2] >= 9.843306) {
        if (input[1] >= 0.720676) {
            var573 = 0.015081854;
        } else {
            var573 = -0.004363443;
        }
    } else {
        if (input[3] >= -0.080849) {
            if (input[3] >= 0.108787) {
                var573 = -0.010907985;
            } else {
                var573 = 0.017483557;
            }
        } else {
            var573 = -0.017159248;
        }
    }
    double var574;
    if (input[4] >= -0.115644) {
        if (input[0] >= -0.8274795) {
            if (input[2] >= 9.346714) {
                if (input[4] >= 0.029079) {
                    var574 = 0.002505973;
                } else {
                    var574 = -0.025703248;
                }
            } else {
                var574 = 0.007870576;
            }
        } else {
            var574 = 0.009090104;
        }
    } else {
        var574 = 0.0079827625;
    }
    double var575;
    if (input[2] >= 9.24717) {
        if (input[1] >= 1.768048) {
            var575 = -0.012083846;
        } else {
            if (input[2] >= 9.795555) {
                if (input[5] >= 0.0309825) {
                    var575 = -0.016441977;
                } else {
                    var575 = 0.009373303;
                }
            } else {
                var575 = 0.03010459;
            }
        }
    } else {
        var575 = -0.008539826;
    }
    double var576;
    if (input[2] >= 9.843306) {
        if (input[0] >= -0.604518) {
            var576 = 0.016939444;
        } else {
            var576 = -0.0042623873;
        }
    } else {
        if (input[2] >= 9.653501) {
            var576 = -0.016040368;
        } else {
            if (input[4] >= 0.0262595) {
                var576 = -0.00975894;
            } else {
                var576 = 0.013818241;
            }
        }
    }
    double var577;
    if (input[2] >= 9.6779) {
        if (input[0] >= -0.4872365) {
            var577 = -0.0091921985;
        } else {
            if (input[5] >= 0.009759501) {
                var577 = 0.025291545;
            } else {
                var577 = -0.0036809095;
            }
        }
    } else {
        if (input[2] >= 8.918379) {
            var577 = -0.013753268;
        } else {
            var577 = 0.0069273347;
        }
    }
    double var578;
    if (input[2] >= 9.24717) {
        if (input[0] >= -0.54209745) {
            var578 = 0.016403174;
        } else {
            if (input[0] >= -0.74021053) {
                var578 = -0.020387847;
            } else {
                var578 = 0.013074483;
            }
        }
    } else {
        var578 = -0.007614448;
    }
    double var579;
    if (input[1] >= 1.5912659) {
        if (input[4] >= 0.026313) {
            var579 = -0.0060920794;
        } else {
            var579 = 0.016118897;
        }
    } else {
        if (input[1] >= 1.3079054) {
            var579 = -0.018033449;
        } else {
            if (input[5] >= 0.00089799997) {
                var579 = -0.008563329;
            } else {
                var579 = 0.017393146;
            }
        }
    }
    double var580;
    if (input[0] >= -0.7613915) {
        if (input[5] >= -0.0344925) {
            if (input[2] >= 9.790989) {
                var580 = -0.022065938;
            } else {
                var580 = 0.012414812;
            }
        } else {
            var580 = 0.01625679;
        }
    } else {
        var580 = -0.0073507796;
    }
    double var581;
    if (input[0] >= -0.273556) {
        var581 = -0.00830075;
    } else {
        if (input[3] >= -0.0191905) {
            if (input[4] >= -0.031839497) {
                var581 = 0.022907807;
            } else {
                var581 = -0.007865504;
            }
        } else {
            if (input[2] >= 9.7496) {
                var581 = -0.014339577;
            } else {
                var581 = 0.00433234;
            }
        }
    }
    double var582;
    if (input[2] >= 9.6779) {
        if (input[3] >= 0.022457499) {
            var582 = -0.0073292577;
        } else {
            if (input[5] >= 0.02119) {
                var582 = 0.0025246276;
            } else {
                var582 = 0.01840321;
            }
        }
    } else {
        if (input[2] >= 9.346714) {
            var582 = -0.016222754;
        } else {
            var582 = 0.0032323806;
        }
    }
    double var583;
    if (input[2] >= 9.24717) {
        if (input[0] >= -0.589399) {
            var583 = 0.014557268;
        } else {
            if (input[0] >= -0.74021053) {
                var583 = -0.021875687;
            } else {
                var583 = 0.011977933;
            }
        }
    } else {
        var583 = -0.00859701;
    }
    double var584;
    if (input[0] >= -0.7613915) {
        if (input[0] >= -0.6191875) {
            if (input[2] >= 9.857077) {
                var584 = 0.01291156;
            } else {
                if (input[0] >= -0.420326) {
                    var584 = 0.0018826745;
                } else {
                    var584 = -0.02107191;
                }
            }
        } else {
            var584 = 0.017229147;
        }
    } else {
        var584 = -0.00792213;
    }
    double var585;
    if (input[5] >= 0.0354945) {
        if (input[3] >= 0.009888001) {
            var585 = -0.0065510473;
        } else {
            var585 = 0.01648055;
        }
    } else {
        if (input[5] >= -0.022142) {
            var585 = -0.015913283;
        } else {
            if (input[0] >= -0.67816496) {
                var585 = 0.014791029;
            } else {
                var585 = -0.007064565;
            }
        }
    }
    double var586;
    if (input[0] >= -0.273556) {
        var586 = -0.009263572;
    } else {
        if (input[2] >= 9.466539) {
            if (input[4] >= 0.041642502) {
                var586 = -0.022481348;
            } else {
                if (input[4] >= -0.0774645) {
                    var586 = 0.026103977;
                } else {
                    var586 = -0.008828328;
                }
            }
        } else {
            var586 = 0.015742548;
        }
    }
    double var587;
    if (input[4] >= 0.0939405) {
        var587 = 0.009340594;
    } else {
        if (input[0] >= -0.4872365) {
            var587 = -0.016477793;
        } else {
            if (input[3] >= -0.045011) {
                if (input[3] >= 0.021173) {
                    var587 = 0.017186647;
                } else {
                    var587 = -0.022509411;
                }
            } else {
                var587 = 0.018821038;
            }
        }
    }
    double var588;
    if (input[0] >= -0.251552) {
        var588 = 0.010366748;
    } else {
        if (input[5] >= 0.007181) {
            if (input[1] >= 1.1332185) {
                var588 = 0.017059565;
            } else {
                var588 = -0.010655222;
            }
        } else {
            if (input[5] >= -0.073864) {
                var588 = -0.021958563;
            } else {
                var588 = 0.0017330669;
            }
        }
    }
    double var589;
    if (input[5] >= -0.116819) {
        if (input[5] >= 0.048704) {
            if (input[0] >= -0.55512047) {
                var589 = 0.005366899;
            } else {
                var589 = -0.01369049;
            }
        } else {
            if (input[3] >= -0.0105435) {
                var589 = -0.0007266037;
            } else {
                var589 = 0.021710772;
            }
        }
    } else {
        var589 = -0.008609888;
    }
    double var590;
    if (input[3] >= -0.0191905) {
        if (input[2] >= 9.431212) {
            if (input[5] >= -0.003772) {
                var590 = 0.021855352;
            } else {
                var590 = -0.004874598;
            }
        } else {
            var590 = -0.007947554;
        }
    } else {
        if (input[3] >= -0.2304275) {
            var590 = -0.0136883715;
        } else {
            var590 = 0.006588881;
        }
    }
    double var591;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var591 = -0.014848734;
        } else {
            var591 = 0.0052779103;
        }
    } else {
        if (input[4] >= -0.016539) {
            if (input[4] >= 0.027695999) {
                var591 = 0.012922002;
            } else {
                var591 = -0.018935777;
            }
        } else {
            var591 = 0.014060027;
        }
    }
    double var592;
    if (input[3] >= -0.2100495) {
        if (input[4] >= -0.06454) {
            if (input[4] >= 0.050485) {
                var592 = 0.008780596;
            } else {
                if (input[5] >= 0.0090295) {
                    var592 = -0.021488287;
                } else {
                    var592 = 0.0023002683;
                }
            }
        } else {
            var592 = 0.016939366;
        }
    } else {
        var592 = -0.008659134;
    }
    double var593;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[5] >= 0.187219) {
                var593 = -0.008563056;
            } else {
                if (input[3] >= -0.010545) {
                    var593 = 0.0023890142;
                } else {
                    var593 = 0.029245803;
                }
            }
        } else {
            var593 = -0.011671876;
        }
    } else {
        var593 = -0.009055564;
    }
    double var594;
    if (input[0] >= -0.251552) {
        var594 = 0.009147514;
    } else {
        if (input[5] >= 0.007181) {
            if (input[1] >= 1.1332185) {
                var594 = 0.01575392;
            } else {
                var594 = -0.0086316615;
            }
        } else {
            if (input[5] >= -0.073864) {
                var594 = -0.021859875;
            } else {
                var594 = 0.0017239896;
            }
        }
    }
    double var595;
    if (input[1] >= 1.148487) {
        if (input[1] >= 1.5912659) {
            if (input[1] >= 1.900523) {
                var595 = -0.007460375;
            } else {
                var595 = 0.014054871;
            }
        } else {
            var595 = -0.013984893;
        }
    } else {
        if (input[1] >= 0.6613995) {
            var595 = 0.019019073;
        } else {
            var595 = -0.007487376;
        }
    }
    double var596;
    if (input[2] >= 10.3126545) {
        var596 = 0.008674528;
    } else {
        if (input[4] >= -0.115745) {
            if (input[4] >= -0.0062825) {
                if (input[3] >= 0.0142435) {
                    var596 = -0.013905978;
                } else {
                    var596 = 0.014177004;
                }
            } else {
                var596 = -0.022957718;
            }
        } else {
            var596 = 0.011937593;
        }
    }
    double var597;
    if (input[3] >= -0.0191905) {
        if (input[3] >= 0.235236) {
            var597 = -0.007941938;
        } else {
            if (input[0] >= -0.5950875) {
                var597 = -0.007307046;
            } else {
                var597 = 0.027857983;
            }
        }
    } else {
        if (input[3] >= -0.2304275) {
            var597 = -0.0139448745;
        } else {
            var597 = 0.005346058;
        }
    }
    double var598;
    if (input[3] >= -0.1566295) {
        if (input[0] >= -0.54209745) {
            var598 = 0.013377164;
        } else {
            if (input[5] >= 0.0498945) {
                var598 = -0.02276397;
            } else {
                var598 = 0.010061886;
            }
        }
    } else {
        var598 = -0.008361745;
    }
    double var599;
    if (input[5] >= 0.0354945) {
        if (input[1] >= 1.768048) {
            var599 = -0.009401385;
        } else {
            var599 = 0.015263737;
        }
    } else {
        if (input[3] >= 0.0018485) {
            var599 = 0.0068951896;
        } else {
            if (input[3] >= -0.0588905) {
                var599 = -0.022769012;
            } else {
                var599 = 0.0033236002;
            }
        }
    }
    double var600;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[2] >= 10.038425) {
                var600 = -0.007704731;
            } else {
                if (input[1] >= 1.51238) {
                    var600 = -0.0024501951;
                } else {
                    var600 = 0.030914081;
                }
            }
        } else {
            var600 = -0.011794199;
        }
    } else {
        var600 = -0.008770882;
    }
    double var601;
    if (input[2] >= 10.3126545) {
        var601 = 0.008187546;
    } else {
        if (input[4] >= -0.115745) {
            if (input[1] >= 1.361419) {
                if (input[1] >= 1.8698366) {
                    var601 = -0.012187227;
                } else {
                    var601 = 0.015155693;
                }
            } else {
                var601 = -0.019706925;
            }
        } else {
            var601 = 0.011453614;
        }
    }
    double var602;
    if (input[0] >= -0.251552) {
        var602 = 0.008755604;
    } else {
        if (input[5] >= 0.207694) {
            var602 = 0.010682708;
        } else {
            if (input[2] >= 9.601559) {
                if (input[2] >= 9.856777) {
                    var602 = 0.00092131697;
                } else {
                    var602 = -0.026215209;
                }
            } else {
                var602 = 0.0052634366;
            }
        }
    }
    double var603;
    if (input[5] >= -0.14825949) {
        if (input[3] >= 0.041282) {
            var603 = 0.010193526;
        } else {
            if (input[5] >= 0.051800497) {
                var603 = 0.009360711;
            } else {
                if (input[1] >= 0.9870475) {
                    var603 = -0.002117697;
                } else {
                    var603 = -0.031320862;
                }
            }
        }
    } else {
        var603 = 0.009626465;
    }
    double var604;
    if (input[5] >= 0.048704) {
        if (input[5] >= 0.27309) {
            var604 = 0.0036822718;
        } else {
            var604 = -0.014210368;
        }
    } else {
        if (input[2] >= 9.373882) {
            if (input[2] >= 10.190285) {
                var604 = -0.0065507935;
            } else {
                var604 = 0.022545718;
            }
        } else {
            var604 = -0.0074083027;
        }
    }
    double var605;
    if (input[1] >= 1.148487) {
        if (input[1] >= 1.5912659) {
            if (input[2] >= 9.372759) {
                var605 = 0.012470056;
            } else {
                var605 = -0.0076798615;
            }
        } else {
            var605 = -0.0141681535;
        }
    } else {
        if (input[2] >= 10.194251) {
            var605 = -0.0059162956;
        } else {
            var605 = 0.017392142;
        }
    }
    double var606;
    if (input[2] >= 10.3126545) {
        var606 = 0.0095196925;
    } else {
        if (input[4] >= -0.115745) {
            if (input[2] >= 9.346714) {
                if (input[4] >= 0.029662501) {
                    var606 = -0.0024080852;
                } else {
                    var606 = -0.02360726;
                }
            } else {
                var606 = 0.0056133573;
            }
        } else {
            var606 = 0.008999514;
        }
    }
    double var607;
    if (input[4] >= -0.157865) {
        if (input[5] >= -0.116819) {
            if (input[4] >= 0.041665003) {
                var607 = -0.007756777;
            } else {
                if (input[3] >= 0.004365) {
                    var607 = 0.0054127565;
                } else {
                    var607 = 0.024193974;
                }
            }
        } else {
            var607 = -0.012136808;
        }
    } else {
        var607 = -0.008719988;
    }
    double var608;
    if (input[2] >= 9.6779) {
        if (input[0] >= -0.4872365) {
            var608 = -0.0102737425;
        } else {
            if (input[5] >= 0.009759501) {
                var608 = 0.02379576;
            } else {
                var608 = -0.002411746;
            }
        }
    } else {
        if (input[3] >= -0.080849) {
            var608 = 0.004355381;
        } else {
            var608 = -0.017551936;
        }
    }
    double var609;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var609 = -0.015387635;
        } else {
            var609 = 0.0042167064;
        }
    } else {
        if (input[3] >= -0.028951) {
            if (input[0] >= -0.51103747) {
                var609 = -0.017636927;
            } else {
                var609 = 0.009829092;
            }
        } else {
            var609 = 0.014878999;
        }
    }
    double var610;
    if (input[0] >= -0.251552) {
        var610 = 0.010042273;
    } else {
        if (input[3] >= 0.0131775) {
            if (input[4] >= -0.0325885) {
                var610 = 0.002320898;
            } else {
                var610 = -0.022666734;
            }
        } else {
            if (input[0] >= -0.80510104) {
                var610 = 0.016219664;
            } else {
                var610 = -0.012955542;
            }
        }
    }
    double var611;
    if (input[2] >= 9.6779) {
        if (input[4] >= 0.0138815) {
            var611 = -0.007657566;
        } else {
            if (input[4] >= -0.112235) {
                var611 = 0.017695792;
            } else {
                var611 = 0.0017943906;
            }
        }
    } else {
        if (input[5] >= 0.010689) {
            var611 = -0.015374758;
        } else {
            var611 = 0.0061033573;
        }
    }
    double var612;
    if (input[0] >= -0.251552) {
        var612 = 0.008886591;
    } else {
        if (input[0] >= -0.781001) {
            if (input[3] >= 0.0130915) {
                var612 = -0.019666173;
            } else {
                var612 = 0.0042357217;
            }
        } else {
            var612 = 0.0073740105;
        }
    }
    double var613;
    if (input[3] >= 0.0018485) {
        if (input[0] >= -0.5430705) {
            var613 = 0.017514475;
        } else {
            var613 = -0.0039006819;
        }
    } else {
        if (input[1] >= 1.672547) {
            var613 = 0.007004416;
        } else {
            if (input[3] >= -0.058870003) {
                var613 = -0.023297232;
            } else {
                var613 = 0.002905877;
            }
        }
    }
    double var614;
    if (input[3] >= -0.1566295) {
        if (input[2] >= 9.431063) {
            if (input[2] >= 9.920171) {
                var614 = -0.003763321;
            } else {
                var614 = 0.02128469;
            }
        } else {
            var614 = -0.008176082;
        }
    } else {
        var614 = -0.0097161755;
    }
    double var615;
    if (input[0] >= -0.81550395) {
        if (input[2] >= 9.960512) {
            var615 = 0.013636996;
        } else {
            if (input[2] >= 9.740918) {
                var615 = -0.027187802;
            } else {
                if (input[5] >= 0.010689) {
                    var615 = -0.009534847;
                } else {
                    var615 = 0.013376787;
                }
            }
        }
    } else {
        var615 = 0.008512813;
    }
    double var616;
    if (input[1] >= 0.6613995) {
        if (input[3] >= 0.197135) {
            var616 = 0.020311609;
        } else {
            if (input[2] >= 9.756487) {
                var616 = 0.013388963;
            } else {
                if (input[2] >= 9.153989) {
                    var616 = -0.028784715;
                } else {
                    var616 = 0.0074780467;
                }
            }
        }
    } else {
        var616 = -0.008414712;
    }
    double var617;
    if (input[0] >= -0.273556) {
        var617 = -0.008447591;
    } else {
        if (input[2] >= 9.466539) {
            if (input[4] >= 0.041642502) {
                var617 = -0.021185199;
            } else {
                if (input[4] >= -0.0774645) {
                    var617 = 0.025593366;
                } else {
                    var617 = -0.009580201;
                }
            }
        } else {
            var617 = 0.01490058;
        }
    }
    double var618;
    if (input[2] >= 9.048159) {
        if (input[1] >= 1.3363465) {
            if (input[3] >= 0.018017001) {
                var618 = -0.0026908596;
            } else {
                var618 = 0.025360087;
            }
        } else {
            if (input[1] >= 0.91302645) {
                var618 = -0.021931965;
            } else {
                var618 = 0.010413045;
            }
        }
    } else {
        var618 = -0.008874593;
    }
    double var619;
    if (input[3] >= -0.0034765) {
        if (input[1] >= 1.361793) {
            var619 = 0.01569439;
        } else {
            var619 = -0.0056459513;
        }
    } else {
        if (input[1] >= 1.3311815) {
            var619 = -0.015891263;
        } else {
            var619 = 0.009060831;
        }
    }
    double var620;
    if (input[1] >= 0.6613995) {
        if (input[3] >= 0.197135) {
            var620 = 0.01836975;
        } else {
            if (input[0] >= -0.459619) {
                var620 = 0.014953937;
            } else {
                if (input[2] >= 9.755363) {
                    var620 = 0.010934744;
                } else {
                    var620 = -0.023871398;
                }
            }
        }
    } else {
        var620 = -0.008777829;
    }
    double var621;
    if (input[2] >= 9.740918) {
        if (input[2] >= 10.3126545) {
            var621 = 0.0056361128;
        } else {
            var621 = -0.01361733;
        }
    } else {
        if (input[2] >= 9.24717) {
            var621 = 0.016861828;
        } else {
            var621 = -0.004926865;
        }
    }
    double var622;
    if (input[3] >= 0.235236) {
        var622 = -0.009842352;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[0] >= -0.3920345) {
                var622 = 0.010916666;
            } else {
                var622 = -0.017065808;
            }
        } else {
            var622 = 0.016905062;
        }
    }
    double var623;
    if (input[0] >= -0.273556) {
        var623 = -0.009485948;
    } else {
        if (input[0] >= -0.7128175) {
            if (input[3] >= -0.017464) {
                var623 = 0.020804564;
            } else {
                var623 = -0.0021351336;
            }
        } else {
            if (input[0] >= -0.931064) {
                var623 = -0.014976465;
            } else {
                var623 = 0.004664942;
            }
        }
    }
    double var624;
    if (input[2] >= 10.279947) {
        var624 = -0.008411264;
    } else {
        if (input[5] >= -0.022142) {
            if (input[5] >= 0.0300265) {
                if (input[3] >= 0.014646) {
                    var624 = -0.007913101;
                } else {
                    var624 = 0.01744803;
                }
            } else {
                var624 = -0.019520232;
            }
        } else {
            var624 = 0.016274912;
        }
    }
    double var625;
    if (input[1] >= 1.4861845) {
        if (input[2] >= 9.355395) {
            var625 = -0.013910589;
        } else {
            var625 = 0.006689912;
        }
    } else {
        if (input[0] >= -0.842972) {
            if (input[5] >= -0.007929) {
                var625 = 0.023841726;
            } else {
                var625 = -0.00648573;
            }
        } else {
            var625 = -0.00922916;
        }
    }
    double var626;
    if (input[0] >= -0.273556) {
        var626 = -0.00860865;
    } else {
        if (input[2] >= 9.466539) {
            if (input[5] >= 0.0486765) {
                var626 = -0.017511358;
            } else {
                var626 = 0.009356877;
            }
        } else {
            var626 = 0.014859168;
        }
    }
    double var627;
    if (input[5] >= 0.0354945) {
        if (input[4] >= 0.026313) {
            var627 = -0.0058286623;
        } else {
            var627 = 0.0147291925;
        }
    } else {
        if (input[4] >= 0.0148315) {
            var627 = 0.006889031;
        } else {
            if (input[4] >= -0.037694) {
                var627 = -0.020400016;
            } else {
                var627 = 0.0019034958;
            }
        }
    }
    double var628;
    if (input[5] >= -0.116819) {
        if (input[1] >= 1.829271) {
            var628 = 0.017227935;
        } else {
            if (input[1] >= 1.460438) {
                var628 = -0.02508835;
            } else {
                if (input[4] >= -0.0167245) {
                    var628 = -0.0041522463;
                } else {
                    var628 = 0.022402983;
                }
            }
        }
    } else {
        var628 = -0.008151552;
    }
    double var629;
    if (input[4] >= -0.024004001) {
        if (input[0] >= -0.4700225) {
            var629 = 0.01983464;
        } else {
            if (input[2] >= 9.722207) {
                var629 = 0.007900714;
            } else {
                var629 = -0.015739756;
            }
        }
    } else {
        if (input[4] >= -0.211275) {
            var629 = -0.01357502;
        } else {
            var629 = 0.0055249003;
        }
    }
    double var630;
    if (input[0] >= -0.273556) {
        var630 = -0.009456037;
    } else {
        if (input[2] >= 9.466539) {
            if (input[5] >= 0.0486765) {
                var630 = -0.016134853;
            } else {
                var630 = 0.008869956;
            }
        } else {
            var630 = 0.015119188;
        }
    }
    double var631;
    if (input[4] >= 0.0939405) {
        var631 = 0.008939817;
    } else {
        if (input[0] >= -0.4872365) {
            var631 = -0.015874164;
        } else {
            if (input[5] >= -0.032321) {
                if (input[3] >= -0.0073155) {
                    var631 = -0.00004119633;
                } else {
                    var631 = 0.023640128;
                }
            } else {
                var631 = -0.010988494;
            }
        }
    }
    double var632;
    if (input[0] >= -0.251552) {
        var632 = 0.00957644;
    } else {
        if (input[5] >= 0.085074) {
            var632 = 0.010150756;
        } else {
            if (input[4] >= 0.008737) {
                var632 = 0.005427845;
            } else {
                if (input[1] >= 1.317485) {
                    var632 = 0.0010419409;
                } else {
                    var632 = -0.027819248;
                }
            }
        }
    }
    double var633;
    if (input[3] >= -0.0034765) {
        if (input[3] >= 0.235236) {
            var633 = -0.008241751;
        } else {
            var633 = 0.013359836;
        }
    } else {
        if (input[1] >= 1.3311815) {
            var633 = -0.013629233;
        } else {
            var633 = 0.006204336;
        }
    }
    double var634;
    if (input[5] >= -0.14825949) {
        if (input[3] >= 0.041282) {
            var634 = 0.009927802;
        } else {
            if (input[1] >= 1.0890601) {
                if (input[2] >= 9.372759) {
                    var634 = 0.02065228;
                } else {
                    var634 = -0.012481338;
                }
            } else {
                var634 = -0.02457309;
            }
        }
    } else {
        var634 = 0.009403279;
    }
    double var635;
    if (input[2] >= 8.918379) {
        if (input[2] >= 9.534199) {
            if (input[0] >= -0.728909) {
                if (input[5] >= 0.013040001) {
                    var635 = 0.025658185;
                } else {
                    var635 = -0.007956084;
                }
            } else {
                var635 = -0.0095432205;
            }
        } else {
            var635 = -0.0161238;
        }
    } else {
        var635 = 0.009190451;
    }
    double var636;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.6933535) {
            var636 = -0.017353209;
        } else {
            if (input[5] >= -0.0072505) {
                var636 = 0.016617032;
            } else {
                var636 = -0.0062815556;
            }
        }
    } else {
        var636 = 0.009093625;
    }
    double var637;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var637 = -0.01665971;
        } else {
            var637 = 0.0053044837;
        }
    } else {
        if (input[4] >= -0.0133675) {
            if (input[0] >= -0.60519147) {
                var637 = -0.015800536;
            } else {
                var637 = 0.009552302;
            }
        } else {
            var637 = 0.015268382;
        }
    }
    double var638;
    if (input[0] >= -0.251552) {
        var638 = 0.008596451;
    } else {
        if (input[4] >= 0.008737) {
            if (input[4] >= 0.1350825) {
                var638 = -0.00799072;
            } else {
                var638 = 0.017399795;
            }
        } else {
            if (input[5] >= 0.0299905) {
                var638 = 0.006688526;
            } else {
                var638 = -0.018228564;
            }
        }
    }
    double var639;
    if (input[5] >= 0.048704) {
        if (input[1] >= 1.5521226) {
            var639 = 0.0048530214;
        } else {
            var639 = -0.014725795;
        }
    } else {
        if (input[4] >= -0.0133675) {
            if (input[4] >= 0.027695999) {
                var639 = 0.00872135;
            } else {
                var639 = -0.014699784;
            }
        } else {
            var639 = 0.015088435;
        }
    }
    double var640;
    if (input[0] >= -0.81550395) {
        if (input[1] >= 1.2225825) {
            if (input[1] >= 1.5846795) {
                if (input[1] >= 1.9082315) {
                    var640 = -0.009490983;
                } else {
                    var640 = 0.012165208;
                }
            } else {
                var640 = -0.02495716;
            }
        } else {
            var640 = 0.010391014;
        }
    } else {
        var640 = 0.008291271;
    }
    double var641;
    if (input[5] >= -0.14825949) {
        if (input[4] >= -0.1578455) {
            if (input[4] >= -0.0166455) {
                if (input[5] >= 0.0515485) {
                    var641 = 0.010336541;
                } else {
                    var641 = -0.015886506;
                }
            } else {
                var641 = 0.020170446;
            }
        } else {
            var641 = -0.017442426;
        }
    } else {
        var641 = 0.008960365;
    }
    double var642;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var642 = -0.0141460495;
        } else {
            var642 = 0.0039996677;
        }
    } else {
        if (input[5] >= -0.116819) {
            if (input[1] >= 1.4290035) {
                var642 = -0.0012747882;
            } else {
                var642 = 0.0181729;
            }
        } else {
            var642 = -0.0066549093;
        }
    }
    double var643;
    if (input[5] >= 0.25305998) {
        var643 = -0.0079139825;
    } else {
        if (input[0] >= -0.54209745) {
            var643 = 0.015786167;
        } else {
            if (input[2] >= 9.60328) {
                var643 = -0.017007735;
            } else {
                var643 = 0.010158882;
            }
        }
    }
    double var644;
    if (input[0] >= -0.273556) {
        var644 = -0.009163026;
    } else {
        if (input[3] >= -0.0191905) {
            if (input[4] >= -0.031839497) {
                var644 = 0.022560421;
            } else {
                var644 = -0.007325983;
            }
        } else {
            if (input[2] >= 9.7496) {
                var644 = -0.013255408;
            } else {
                var644 = 0.004354928;
            }
        }
    }
    double var645;
    if (input[2] >= 9.6779) {
        if (input[0] >= -0.4872365) {
            var645 = -0.010760524;
        } else {
            if (input[5] >= 0.009759501) {
                var645 = 0.024414854;
            } else {
                var645 = -0.0010764797;
            }
        }
    } else {
        if (input[2] >= 8.918379) {
            var645 = -0.014158775;
        } else {
            var645 = 0.0065067555;
        }
    }
    double var646;
    if (input[2] >= 9.048159) {
        if (input[1] >= 1.3363465) {
            if (input[3] >= 0.018017001) {
                var646 = -0.004130449;
            } else {
                var646 = 0.026868902;
            }
        } else {
            if (input[1] >= 0.91302645) {
                var646 = -0.022214776;
            } else {
                var646 = 0.01103943;
            }
        }
    } else {
        var646 = -0.008866274;
    }
    double var647;
    if (input[5] >= -0.14825949) {
        if (input[3] >= 0.0189505) {
            var647 = 0.009165921;
        } else {
            if (input[0] >= -0.7613915) {
                if (input[4] >= -0.0214355) {
                    var647 = 0.020450445;
                } else {
                    var647 = -0.013660665;
                }
            } else {
                var647 = -0.025982847;
            }
        }
    } else {
        var647 = 0.009604733;
    }
    double var648;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.6933535) {
            var648 = -0.016559131;
        } else {
            if (input[5] >= -0.0072505) {
                var648 = 0.015949449;
            } else {
                var648 = -0.006536301;
            }
        }
    } else {
        var648 = 0.009162697;
    }
    double var649;
    if (input[4] >= -0.211275) {
        if (input[3] >= -0.12821901) {
            if (input[1] >= 1.372571) {
                var649 = 0.0068679294;
            } else {
                if (input[3] >= 0.0224605) {
                    var649 = -0.02598802;
                } else {
                    var649 = -0.003362233;
                }
            }
        } else {
            var649 = 0.011205218;
        }
    } else {
        var649 = 0.010151332;
    }
    double var650;
    if (input[5] >= -0.022142) {
        if (input[0] >= -0.420326) {
            var650 = 0.010069119;
        } else {
            if (input[0] >= -0.781001) {
                var650 = -0.021155357;
            } else {
                var650 = 0.007641058;
            }
        }
    } else {
        if (input[2] >= 9.6742325) {
            var650 = 0.0158604;
        } else {
            var650 = -0.0055715195;
        }
    }
    double var651;
    if (input[1] >= 0.6613995) {
        if (input[5] >= -0.086994) {
            if (input[2] >= 9.920171) {
                var651 = -0.019940373;
            } else {
                if (input[2] >= 9.534199) {
                    var651 = 0.022888083;
                } else {
                    var651 = -0.008443496;
                }
            }
        } else {
            var651 = 0.017939067;
        }
    } else {
        var651 = -0.009031813;
    }
    double var652;
    if (input[4] >= 0.03873) {
        if (input[0] >= -0.609233) {
            var652 = -0.012929285;
        } else {
            var652 = 0.0025886847;
        }
    } else {
        if (input[0] >= -0.4629125) {
            var652 = -0.0069032633;
        } else {
            if (input[5] >= 0.028944999) {
                var652 = -0.005943121;
            } else {
                var652 = 0.01979041;
            }
        }
    }
    double var653;
    if (input[5] >= 0.06109) {
        if (input[0] >= -0.57121205) {
            var653 = -0.0048616123;
        } else {
            var653 = 0.015719233;
        }
    } else {
        if (input[1] >= 1.736614) {
            var653 = 0.010889372;
        } else {
            if (input[2] >= 9.856777) {
                var653 = 0.0069391592;
            } else {
                var653 = -0.02177733;
            }
        }
    }
    double var654;
    if (input[0] >= -0.603994) {
        if (input[0] >= -0.273556) {
            var654 = -0.0054761223;
        } else {
            var654 = 0.015068598;
        }
    } else {
        if (input[5] >= -0.032248497) {
            if (input[1] >= 1.265094) {
                var654 = 0.014958095;
            } else {
                var654 = -0.006891823;
            }
        } else {
            var654 = -0.017454864;
        }
    }
    double var655;
    if (input[0] >= -0.251552) {
        var655 = 0.009665437;
    } else {
        if (input[1] >= 1.4861845) {
            if (input[5] >= 0.0063715) {
                var655 = 0.003750496;
            } else {
                var655 = -0.020302158;
            }
        } else {
            if (input[0] >= -0.842972) {
                var655 = 0.011200577;
            } else {
                var655 = -0.0065690773;
            }
        }
    }
    double var656;
    if (input[0] >= -0.81550395) {
        if (input[4] >= 0.0138815) {
            if (input[1] >= 1.5515985) {
                var656 = -0.0025738287;
            } else {
                var656 = -0.018665783;
            }
        } else {
            if (input[5] >= 0.0030855) {
                var656 = -0.009338255;
            } else {
                var656 = 0.023018017;
            }
        }
    } else {
        var656 = 0.008640389;
    }
    double var657;
    if (input[2] >= 8.918379) {
        if (input[5] >= -0.034523502) {
            if (input[4] >= 0.041642502) {
                var657 = -0.022393331;
            } else {
                if (input[0] >= -0.562156) {
                    var657 = -0.013767685;
                } else {
                    var657 = 0.014244164;
                }
            }
        } else {
            var657 = 0.00954907;
        }
    } else {
        var657 = 0.009417028;
    }
    double var658;
    if (input[0] >= -0.26726902) {
        var658 = 0.009324732;
    } else {
        if (input[5] >= 0.085074) {
            var658 = 0.008452727;
        } else {
            if (input[3] >= -0.007255) {
                var658 = -0.02054139;
            } else {
                var658 = 0.0056805047;
            }
        }
    }
    double var659;
    if (input[3] >= -0.0034765) {
        if (input[3] >= 0.108812496) {
            var659 = -0.0036665366;
        } else {
            var659 = 0.016751103;
        }
    } else {
        if (input[1] >= 1.3311815) {
            var659 = -0.014314317;
        } else {
            var659 = 0.0051738457;
        }
    }
    double var660;
    if (input[1] >= 0.6613995) {
        if (input[3] >= 0.1779595) {
            var660 = 0.019059125;
        } else {
            if (input[0] >= -0.603994) {
                var660 = 0.011082707;
            } else {
                if (input[3] >= -0.058761) {
                    var660 = -0.0018008829;
                } else {
                    var660 = -0.021388;
                }
            }
        }
    } else {
        var660 = -0.009427666;
    }
    double var661;
    if (input[4] >= 0.0939405) {
        var661 = 0.009285049;
    } else {
        if (input[5] >= 0.1955365) {
            var661 = -0.018937662;
        } else {
            if (input[1] >= 0.9870475) {
                if (input[3] >= -0.00619) {
                    var661 = 0.00053835305;
                } else {
                    var661 = 0.027809491;
                }
            } else {
                var661 = -0.01673721;
            }
        }
    }
    double var662;
    if (input[0] >= -0.81550395) {
        if (input[1] >= 1.4861845) {
            if (input[1] >= 1.9250715) {
                var662 = 0.0032215947;
            } else {
                var662 = -0.020858277;
            }
        } else {
            if (input[0] >= -0.486638) {
                var662 = -0.000780474;
            } else {
                var662 = 0.012725927;
            }
        }
    } else {
        var662 = 0.00821002;
    }
    double var663;
    if (input[4] >= 0.0939405) {
        var663 = 0.007986158;
    } else {
        if (input[0] >= -0.4872365) {
            var663 = -0.013069244;
        } else {
            if (input[5] >= -0.032321) {
                if (input[1] >= 1.3181585) {
                    var663 = 0.019712968;
                } else {
                    var663 = -0.00088069815;
                }
            } else {
                var663 = -0.008879926;
            }
        }
    }
    double var664;
    if (input[0] >= -0.251552) {
        var664 = 0.00972642;
    } else {
        if (input[5] >= 0.085074) {
            var664 = 0.007490453;
        } else {
            if (input[4] >= 0.008737) {
                var664 = 0.0066075223;
            } else {
                if (input[1] >= 1.317485) {
                    var664 = 0.00021553291;
                } else {
                    var664 = -0.025245367;
                }
            }
        }
    }
    double var665;
    if (input[2] >= 10.3126545) {
        var665 = 0.009153009;
    } else {
        if (input[4] >= -0.115745) {
            if (input[2] >= 9.346714) {
                if (input[4] >= 0.029662501) {
                    var665 = -0.000825866;
                } else {
                    var665 = -0.026296942;
                }
            } else {
                var665 = 0.004621684;
            }
        } else {
            var665 = 0.0127314115;
        }
    }
    double var666;
    if (input[1] >= 1.869238) {
        var666 = -0.008229111;
    } else {
        if (input[5] >= 0.048638) {
            var666 = -0.011832591;
        } else {
            if (input[3] >= 0.0019655) {
                var666 = 0.025776828;
            } else {
                var666 = -0.0020021473;
            }
        }
    }
    double var667;
    if (input[2] >= 9.843306) {
        if (input[0] >= -0.604518) {
            var667 = 0.014979789;
        } else {
            var667 = -0.0041719577;
        }
    } else {
        if (input[2] >= 9.649159) {
            var667 = -0.014545456;
        } else {
            if (input[0] >= -0.554971) {
                var667 = 0.015621282;
            } else {
                var667 = -0.0074727805;
            }
        }
    }
    double var668;
    if (input[0] >= -0.273556) {
        var668 = -0.008220539;
    } else {
        if (input[5] >= 0.020514) {
            if (input[4] >= -0.0021985) {
                var668 = -0.01534743;
            } else {
                var668 = 0.007835372;
            }
        } else {
            if (input[4] >= 0.002743) {
                var668 = 0.023740519;
            } else {
                var668 = -0.004149947;
            }
        }
    }
    double var669;
    if (input[2] >= 9.048159) {
        if (input[5] >= 0.134565) {
            var669 = 0.017614067;
        } else {
            if (input[5] >= -0.0345315) {
                if (input[1] >= 1.125809) {
                    var669 = -0.0018319478;
                } else {
                    var669 = -0.021598563;
                }
            } else {
                var669 = 0.013146236;
            }
        }
    } else {
        var669 = -0.008090478;
    }
    double var670;
    if (input[5] >= -0.116819) {
        if (input[1] >= 0.91302645) {
            if (input[2] >= 9.7496) {
                var670 = -0.01996838;
            } else {
                if (input[3] >= -0.003369) {
                    var670 = 0.017711394;
                } else {
                    var670 = -0.0012567274;
                }
            }
        } else {
            var670 = 0.016014405;
        }
    } else {
        var670 = -0.009250312;
    }
    double var671;
    if (input[2] >= 9.6779) {
        if (input[1] >= 1.2255759) {
            var671 = 0.016902035;
        } else {
            var671 = -0.0037515573;
        }
    } else {
        if (input[2] >= 9.346714) {
            var671 = -0.017093586;
        } else {
            var671 = 0.0044160616;
        }
    }
    double var672;
    if (input[1] >= 1.148487) {
        if (input[5] >= -0.020039499) {
            if (input[4] >= -0.0284945) {
                var672 = 0.016941406;
            } else {
                var672 = -0.01186173;
            }
        } else {
            var672 = -0.013793599;
        }
    } else {
        if (input[1] >= 0.6613995) {
            var672 = 0.018925115;
        } else {
            var672 = -0.006592187;
        }
    }
    double var673;
    if (input[2] >= 10.3126545) {
        var673 = 0.008649374;
    } else {
        if (input[4] >= -0.115745) {
            if (input[3] >= -0.04065) {
                if (input[1] >= 1.3730199) {
                    var673 = 0.0014772667;
                } else {
                    var673 = -0.025487024;
                }
            } else {
                var673 = 0.0052149277;
            }
        } else {
            var673 = 0.012342867;
        }
    }
    double var674;
    if (input[1] >= 1.4861845) {
        if (input[4] >= 0.026313) {
            var674 = -0.014888802;
        } else {
            var674 = 0.0039654393;
        }
    } else {
        if (input[5] >= 0.00089799997) {
            var674 = -0.003596642;
        } else {
            var674 = 0.014321422;
        }
    }
    double var675;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.6933535) {
            var675 = -0.015396211;
        } else {
            if (input[5] >= -0.0072505) {
                var675 = 0.017941682;
            } else {
                var675 = -0.008050834;
            }
        }
    } else {
        var675 = 0.0074877064;
    }
    double var676;
    if (input[1] >= 0.7206015) {
        if (input[5] >= -0.0040800003) {
            if (input[1] >= 1.372571) {
                var676 = 0.0055408315;
            } else {
                var676 = -0.016741084;
            }
        } else {
            var676 = 0.013935368;
        }
    } else {
        var676 = -0.0072522927;
    }
    double var677;
    if (input[1] >= 1.148487) {
        if (input[5] >= -0.020039499) {
            if (input[5] >= 0.14650649) {
                var677 = -0.01074385;
            } else {
                var677 = 0.017209489;
            }
        } else {
            var677 = -0.012986398;
        }
    } else {
        if (input[2] >= 10.194251) {
            var677 = -0.0065214434;
        } else {
            var677 = 0.017063782;
        }
    }
    double var678;
    if (input[2] >= 9.960512) {
        var678 = 0.006750532;
    } else {
        if (input[3] >= -0.115752) {
            if (input[3] >= 0.108787) {
                var678 = -0.009576285;
            } else {
                var678 = 0.01612926;
            }
        } else {
            var678 = -0.01739798;
        }
    }
    double var679;
    if (input[4] >= 0.0939405) {
        var679 = 0.00789205;
    } else {
        if (input[0] >= -0.4872365) {
            var679 = -0.01317584;
        } else {
            if (input[3] >= -0.007255) {
                var679 = -0.00700211;
            } else {
                var679 = 0.014340298;
            }
        }
    }
    double var680;
    if (input[0] >= -0.26726902) {
        var680 = 0.008628591;
    } else {
        if (input[5] >= 0.085074) {
            var680 = 0.007931367;
        } else {
            if (input[3] >= -0.007255) {
                var680 = -0.018831441;
            } else {
                var680 = 0.0051109823;
            }
        }
    }
    double var681;
    if (input[3] >= 0.0018485) {
        if (input[2] >= 9.774524) {
            var681 = 0.01776713;
        } else {
            var681 = -0.004353668;
        }
    } else {
        if (input[1] >= 1.672547) {
            var681 = 0.010786459;
        } else {
            if (input[3] >= -0.058870003) {
                var681 = -0.024524625;
            } else {
                var681 = 0.002490688;
            }
        }
    }
    double var682;
    if (input[3] >= -0.0034765) {
        if (input[0] >= -0.5210665) {
            var682 = 0.015309238;
        } else {
            var682 = -0.003872184;
        }
    } else {
        if (input[1] >= 1.3311815) {
            var682 = -0.0134415915;
        } else {
            var682 = 0.006131417;
        }
    }
    double var683;
    if (input[5] >= -0.022142) {
        if (input[0] >= -0.420326) {
            var683 = 0.010091989;
        } else {
            if (input[0] >= -0.781001) {
                var683 = -0.019807542;
            } else {
                var683 = 0.006372531;
            }
        }
    } else {
        if (input[4] >= 0.000444) {
            var683 = -0.0028692845;
        } else {
            var683 = 0.013558005;
        }
    }
    double var684;
    if (input[0] >= -0.273556) {
        var684 = -0.008559105;
    } else {
        if (input[3] >= -0.0191905) {
            if (input[4] >= -0.031839497) {
                var684 = 0.022736147;
            } else {
                var684 = -0.005863101;
            }
        } else {
            if (input[2] >= 9.7496) {
                var684 = -0.0151403565;
            } else {
                var684 = 0.0052655837;
            }
        }
    }
    double var685;
    if (input[0] >= -0.7613915) {
        if (input[0] >= -0.273556) {
            var685 = -0.0070770066;
        } else {
            if (input[5] >= 0.027766) {
                var685 = -0.003245194;
            } else {
                var685 = 0.01803148;
            }
        }
    } else {
        var685 = -0.0071542975;
    }
    double var686;
    if (input[5] >= 0.0354945) {
        if (input[3] >= 0.009888001) {
            var686 = -0.006977886;
        } else {
            var686 = 0.01592435;
        }
    } else {
        if (input[5] >= -0.022142) {
            var686 = -0.013697654;
        } else {
            if (input[4] >= 0.000444) {
                var686 = -0.004193955;
            } else {
                var686 = 0.011429964;
            }
        }
    }
    double var687;
    if (input[1] >= 0.7206015) {
        if (input[5] >= -0.086994) {
            if (input[1] >= 1.829271) {
                var687 = 0.013666628;
            } else {
                if (input[0] >= -0.71019804) {
                    var687 = 0.011075884;
                } else {
                    var687 = -0.0339348;
                }
            }
        } else {
            var687 = 0.0156086935;
        }
    } else {
        var687 = -0.0078039146;
    }
    double var688;
    if (input[0] >= -0.6384225) {
        if (input[1] >= 1.5515985) {
            var688 = 0.007845892;
        } else {
            var688 = -0.014285309;
        }
    } else {
        if (input[1] >= 1.551224) {
            var688 = -0.007589893;
        } else {
            var688 = 0.01590727;
        }
    }
    double var689;
    if (input[5] >= -0.116819) {
        if (input[3] >= 0.0189505) {
            var689 = 0.0138912015;
        } else {
            if (input[3] >= -0.021978) {
                var689 = -0.020584015;
            } else {
                var689 = 0.009543994;
            }
        }
    } else {
        var689 = -0.00837943;
    }
    double var690;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var690 = -0.012922344;
        } else {
            var690 = 0.0031051754;
        }
    } else {
        if (input[5] >= -0.116819) {
            if (input[0] >= -0.6051165) {
                var690 = 0.00057895074;
            } else {
                var690 = 0.016209023;
            }
        } else {
            var690 = -0.006946379;
        }
    }
    double var691;
    if (input[1] >= 1.869238) {
        var691 = -0.008135592;
    } else {
        if (input[5] >= -0.087015495) {
            if (input[3] >= 0.002152) {
                var691 = 0.013307984;
            } else {
                if (input[5] >= 0.024420999) {
                    var691 = -0.0005734848;
                } else {
                    var691 = -0.025273902;
                }
            }
        } else {
            var691 = 0.018960766;
        }
    }
    double var692;
    if (input[3] >= 0.235236) {
        var692 = -0.009490084;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[0] >= -0.3920345) {
                var692 = 0.011066587;
            } else {
                var692 = -0.01911971;
            }
        } else {
            var692 = 0.01685551;
        }
    }
    double var693;
    if (input[0] >= -0.7613915) {
        if (input[1] >= 1.7950675) {
            var693 = -0.0075986665;
        } else {
            if (input[5] >= -0.0072505) {
                var693 = 0.019301154;
            } else {
                var693 = -0.005159922;
            }
        }
    } else {
        var693 = -0.007185354;
    }
    double var694;
    if (input[0] >= -0.273556) {
        var694 = -0.007781223;
    } else {
        if (input[3] >= -0.0191905) {
            if (input[5] >= 0.029165) {
                var694 = -0.007070919;
            } else {
                var694 = 0.021067193;
            }
        } else {
            if (input[2] >= 9.7496) {
                var694 = -0.013382166;
            } else {
                var694 = 0.0037603877;
            }
        }
    }
    double var695;
    if (input[2] >= 10.619368) {
        var695 = 0.008122288;
    } else {
        if (input[5] >= 0.15826151) {
            var695 = -0.016308479;
        } else {
            if (input[5] >= -0.116819) {
                if (input[4] >= -0.0062135) {
                    var695 = 0.01963529;
                } else {
                    var695 = 0.0020904783;
                }
            } else {
                var695 = -0.010511739;
            }
        }
    }
    double var696;
    if (input[5] >= 0.0354945) {
        if (input[4] >= 0.026313) {
            var696 = -0.0071286275;
        } else {
            var696 = 0.014511271;
        }
    } else {
        if (input[5] >= -0.022142) {
            var696 = -0.013721176;
        } else {
            if (input[4] >= 0.000444) {
                var696 = -0.0032621846;
            } else {
                var696 = 0.009800688;
            }
        }
    }
    double var697;
    if (input[1] >= 0.7206015) {
        if (input[4] >= 0.0939405) {
            var697 = 0.01615354;
        } else {
            if (input[5] >= -0.0040800003) {
                if (input[2] >= 9.634115) {
                    var697 = -0.027092112;
                } else {
                    var697 = 0.0008475638;
                }
            } else {
                var697 = 0.018686477;
            }
        }
    } else {
        var697 = -0.008050387;
    }
    double var698;
    if (input[2] >= 9.6779) {
        if (input[5] >= 0.009759501) {
            var698 = 0.015527818;
        } else {
            var698 = -0.007426382;
        }
    } else {
        if (input[2] >= 8.918379) {
            var698 = -0.013375622;
        } else {
            var698 = 0.0065827793;
        }
    }
    double var699;
    if (input[5] >= -0.116819) {
        if (input[1] >= 1.829271) {
            var699 = 0.016981203;
        } else {
            if (input[1] >= 1.460438) {
                var699 = -0.02301219;
            } else {
                if (input[4] >= -0.008680999) {
                    var699 = -0.004431808;
                } else {
                    var699 = 0.019040206;
                }
            }
        }
    } else {
        var699 = -0.0076295002;
    }
    double var700;
    if (input[4] >= -0.024004001) {
        if (input[2] >= 9.373882) {
            if (input[4] >= 0.065188006) {
                var700 = -0.0035976663;
            } else {
                var700 = 0.024704445;
            }
        } else {
            var700 = -0.010270527;
        }
    } else {
        if (input[0] >= -0.61050546) {
            var700 = 0.006229815;
        } else {
            var700 = -0.014367864;
        }
    }
    double var701;
    if (input[0] >= -0.273556) {
        var701 = -0.007639682;
    } else {
        if (input[2] >= 9.466539) {
            if (input[1] >= 0.9764195) {
                if (input[1] >= 1.5203135) {
                    var701 = 0.005159974;
                } else {
                    var701 = -0.025620302;
                }
            } else {
                var701 = 0.014886012;
            }
        } else {
            var701 = 0.013762382;
        }
    }
    double var702;
    if (input[1] >= 0.7206015) {
        if (input[5] >= -0.086994) {
            if (input[5] >= 0.0299905) {
                if (input[4] >= -0.0025829999) {
                    var702 = -0.0022778595;
                } else {
                    var702 = 0.015004432;
                }
            } else {
                var702 = -0.01504229;
            }
        } else {
            var702 = 0.016166925;
        }
    } else {
        var702 = -0.009066789;
    }
    double var703;
    if (input[1] >= 0.7206015) {
        if (input[2] >= 9.764494) {
            var703 = 0.013971835;
        } else {
            if (input[4] >= 0.0288825) {
                var703 = 0.011692325;
            } else {
                if (input[2] >= 9.346714) {
                    var703 = -0.016796408;
                } else {
                    var703 = -0.0037647511;
                }
            }
        }
    } else {
        var703 = -0.0075650327;
    }
    double var704;
    if (input[1] >= 1.869238) {
        var704 = -0.0075501953;
    } else {
        if (input[5] >= 0.048638) {
            var704 = -0.010823644;
        } else {
            if (input[1] >= 0.9870475) {
                var704 = 0.020073518;
            } else {
                var704 = -0.0033200462;
            }
        }
    }
    double var705;
    if (input[5] >= 0.06109) {
        if (input[0] >= -0.57121205) {
            var705 = -0.0050873538;
        } else {
            var705 = 0.015259454;
        }
    } else {
        if (input[3] >= -0.0071305) {
            if (input[3] >= 0.041282) {
                var705 = 0.004170877;
            } else {
                var705 = -0.023426544;
            }
        } else {
            var705 = 0.006586115;
        }
    }
    double var706;
    if (input[0] >= -0.251552) {
        var706 = 0.009050257;
    } else {
        if (input[5] >= 0.007181) {
            if (input[3] >= 0.0044335) {
                var706 = -0.006041542;
            } else {
                var706 = 0.016257517;
            }
        } else {
            if (input[1] >= 1.3438305) {
                var706 = -0.021434948;
            } else {
                var706 = 0.0027577295;
            }
        }
    }
    double var707;
    if (input[3] >= -0.0191905) {
        if (input[3] >= 0.108812496) {
            var707 = -0.005365881;
        } else {
            var707 = 0.012968233;
        }
    } else {
        if (input[3] >= -0.2304275) {
            var707 = -0.012532914;
        } else {
            var707 = 0.006042265;
        }
    }
    double var708;
    if (input[2] >= 9.740918) {
        if (input[2] >= 9.960512) {
            var708 = 0.004520179;
        } else {
            var708 = -0.015713474;
        }
    } else {
        if (input[0] >= -0.67562056) {
            var708 = 0.01350939;
        } else {
            var708 = -0.008912893;
        }
    }
    double var709;
    if (input[0] >= -0.273556) {
        var709 = -0.007599245;
    } else {
        if (input[3] >= -0.0191905) {
            if (input[4] >= -0.031839497) {
                var709 = 0.019609768;
            } else {
                var709 = -0.0063638026;
            }
        } else {
            if (input[2] >= 9.74481) {
                var709 = -0.011686294;
            } else {
                var709 = 0.0024589836;
            }
        }
    }
    double var710;
    if (input[4] >= 0.171463) {
        var710 = -0.008582699;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[3] >= -0.019166) {
                var710 = 0.005616428;
            } else {
                var710 = -0.017891442;
            }
        } else {
            var710 = 0.014354105;
        }
    }
    double var711;
    if (input[0] >= -0.7613915) {
        if (input[1] >= 1.7950675) {
            var711 = -0.007215172;
        } else {
            if (input[5] >= -0.0072505) {
                var711 = 0.01824704;
            } else {
                var711 = -0.004513793;
            }
        }
    } else {
        var711 = -0.008060546;
    }
    double var712;
    if (input[3] >= -0.029260501) {
        if (input[5] >= 0.0850935) {
            var712 = 0.011171308;
        } else {
            if (input[3] >= 0.0496305) {
                var712 = 0.0030108974;
            } else {
                var712 = -0.02018545;
            }
        }
    } else {
        if (input[1] >= 1.4310989) {
            var712 = -0.0064988397;
        } else {
            var712 = 0.016446443;
        }
    }
    double var713;
    if (input[5] >= 0.048704) {
        if (input[1] >= 1.5521226) {
            var713 = 0.0048397053;
        } else {
            var713 = -0.01344006;
        }
    } else {
        if (input[3] >= -0.021978) {
            if (input[2] >= 9.715172) {
                var713 = -0.0125351185;
            } else {
                var713 = 0.0070855543;
            }
        } else {
            var713 = 0.0133465985;
        }
    }
    double var714;
    if (input[2] >= 9.6779) {
        if (input[1] >= 1.2255759) {
            var714 = 0.017070439;
        } else {
            var714 = -0.005834969;
        }
    } else {
        if (input[2] >= 9.346714) {
            var714 = -0.015404571;
        } else {
            var714 = 0.004262358;
        }
    }
    double var715;
    if (input[2] >= 9.24717) {
        if (input[1] >= 1.768048) {
            var715 = -0.009934845;
        } else {
            if (input[2] >= 9.795555) {
                if (input[5] >= 0.020514) {
                    var715 = -0.014830267;
                } else {
                    var715 = 0.007525859;
                }
            } else {
                var715 = 0.026840633;
            }
        }
    } else {
        var715 = -0.007284621;
    }
    double var716;
    if (input[0] >= -0.251552) {
        var716 = 0.008847729;
    } else {
        if (input[3] >= 0.0131775) {
            if (input[0] >= -0.643362) {
                var716 = -0.02081149;
            } else {
                var716 = 0.002282709;
            }
        } else {
            if (input[0] >= -0.80510104) {
                var716 = 0.017106377;
            } else {
                var716 = -0.012351135;
            }
        }
    }
    double var717;
    if (input[2] >= 9.8338) {
        if (input[0] >= -0.604518) {
            var717 = 0.012861495;
        } else {
            var717 = -0.0030938955;
        }
    } else {
        if (input[3] >= -0.080849) {
            if (input[3] >= 0.108787) {
                var717 = -0.010687286;
            } else {
                var717 = 0.017499488;
            }
        } else {
            var717 = -0.016070457;
        }
    }
    double var718;
    if (input[0] >= -0.781001) {
        if (input[2] >= 9.857077) {
            var718 = 0.009765759;
        } else {
            if (input[2] >= 9.346714) {
                var718 = -0.01852556;
            } else {
                var718 = 0.005311289;
            }
        }
    } else {
        var718 = 0.0072382274;
    }
    double var719;
    if (input[1] >= 1.5912659) {
        if (input[2] >= 9.372759) {
            var719 = 0.015962176;
        } else {
            var719 = -0.0066614468;
        }
    } else {
        if (input[4] >= -0.0742015) {
            if (input[0] >= -0.56440103) {
                var719 = -0.013018639;
            } else {
                var719 = 0.019540127;
            }
        } else {
            var719 = -0.016521182;
        }
    }
    double var720;
    if (input[4] >= -0.211275) {
        if (input[0] >= -0.67562056) {
            if (input[1] >= 1.361419) {
                var720 = 0.019900974;
            } else {
                var720 = -0.008384401;
            }
        } else {
            if (input[0] >= -0.853675) {
                var720 = -0.02067247;
            } else {
                var720 = -0.00046793342;
            }
        }
    } else {
        var720 = 0.008583523;
    }
    double var721;
    if (input[2] >= 9.048159) {
        if (input[5] >= 0.134565) {
            var721 = 0.016202092;
        } else {
            if (input[5] >= -0.0345315) {
                if (input[3] >= 0.0014450001) {
                    var721 = -0.021178035;
                } else {
                    var721 = -0.0028315242;
                }
            } else {
                var721 = 0.013100101;
            }
        }
    } else {
        var721 = -0.007727755;
    }
    double var722;
    if (input[0] >= -0.7613915) {
        if (input[4] >= 0.0138815) {
            var722 = -0.005954418;
        } else {
            if (input[2] >= 9.70402) {
                var722 = -0.002948038;
            } else {
                var722 = 0.01826354;
            }
        }
    } else {
        var722 = -0.0062617664;
    }
    double var723;
    if (input[2] >= 10.619368) {
        var723 = 0.0081940945;
    } else {
        if (input[5] >= 0.15826151) {
            var723 = -0.016527327;
        } else {
            if (input[5] >= -0.116819) {
                if (input[2] >= 9.534424) {
                    var723 = 0.018325584;
                } else {
                    var723 = 0.0014157195;
                }
            } else {
                var723 = -0.008242241;
            }
        }
    }
    double var724;
    if (input[4] >= 0.0442155) {
        var724 = 0.0067733754;
    } else {
        if (input[3] >= 0.0211315) {
            var724 = 0.012710429;
        } else {
            if (input[3] >= -0.058870003) {
                var724 = -0.02162528;
            } else {
                var724 = 0.0034203078;
            }
        }
    }
    double var725;
    if (input[2] >= 8.918379) {
        if (input[3] >= -0.186601) {
            if (input[4] >= 0.041642502) {
                var725 = -0.018660938;
            } else {
                if (input[3] >= 0.047076) {
                    var725 = -0.011349532;
                } else {
                    var725 = 0.03241782;
                }
            }
        } else {
            var725 = -0.015859118;
        }
    } else {
        var725 = 0.008464838;
    }
    double var726;
    if (input[4] >= 0.0442155) {
        var726 = 0.0077989046;
    } else {
        if (input[3] >= 0.0211315) {
            var726 = 0.011267317;
        } else {
            if (input[3] >= -0.097872004) {
                var726 = -0.021265602;
            } else {
                var726 = 0.0044740336;
            }
        }
    }
    double var727;
    if (input[2] >= 8.918379) {
        if (input[3] >= 0.0142645) {
            if (input[3] >= 0.18538) {
                var727 = 0.004028932;
            } else {
                var727 = -0.020122979;
            }
        } else {
            if (input[3] >= -0.186601) {
                var727 = 0.018618008;
            } else {
                var727 = -0.014273423;
            }
        }
    } else {
        var727 = 0.007988512;
    }
    double var728;
    if (input[3] >= -0.2304275) {
        if (input[0] >= -0.54209745) {
            var728 = 0.009473377;
        } else {
            if (input[5] >= 0.028944999) {
                var728 = -0.026987875;
            } else {
                var728 = 0.005289597;
            }
        }
    } else {
        var728 = 0.008092141;
    }
    double var729;
    if (input[5] >= 0.0354945) {
        if (input[3] >= 0.009888001) {
            var729 = -0.004456841;
        } else {
            var729 = 0.01400106;
        }
    } else {
        if (input[4] >= 0.0148315) {
            var729 = 0.0068125194;
        } else {
            if (input[4] >= -0.037694) {
                var729 = -0.020023677;
            } else {
                var729 = 0.0014440173;
            }
        }
    }
    double var730;
    if (input[0] >= -0.6384225) {
        if (input[1] >= 1.5515985) {
            var730 = 0.0059546432;
        } else {
            var730 = -0.012276222;
        }
    } else {
        if (input[1] >= 1.551224) {
            var730 = -0.0048845387;
        } else {
            var730 = 0.011806705;
        }
    }
    double var731;
    if (input[3] >= -0.0034765) {
        if (input[4] >= -0.004039) {
            var731 = -0.004070566;
        } else {
            var731 = 0.012586114;
        }
    } else {
        if (input[4] >= 0.004233) {
            var731 = 0.0052489983;
        } else {
            var731 = -0.012754786;
        }
    }
    double var732;
    if (input[5] >= 0.0354945) {
        if (input[3] >= 0.009888001) {
            var732 = -0.004524253;
        } else {
            var732 = 0.012666271;
        }
    } else {
        if (input[2] >= 9.60328) {
            if (input[1] >= 1.12783) {
                var732 = -0.017040279;
            } else {
                var732 = -0.00042982763;
            }
        } else {
            var732 = 0.00641394;
        }
    }
    double var733;
    if (input[3] >= -0.0034765) {
        if (input[1] >= 1.361793) {
            var733 = 0.0126785645;
        } else {
            var733 = -0.003515287;
        }
    } else {
        if (input[1] >= 1.3311815) {
            var733 = -0.012212453;
        } else {
            var733 = 0.004436802;
        }
    }
    double var734;
    if (input[0] >= -0.273556) {
        var734 = -0.007669633;
    } else {
        if (input[3] >= -0.0191905) {
            if (input[4] >= -0.031839497) {
                var734 = 0.020735547;
            } else {
                var734 = -0.006009864;
            }
        } else {
            if (input[2] >= 9.74481) {
                var734 = -0.012722121;
            } else {
                var734 = 0.00264672;
            }
        }
    }
    double var735;
    if (input[2] >= 9.372759) {
        if (input[4] >= -0.0774975) {
            if (input[2] >= 10.038425) {
                var735 = -0.006613663;
            } else {
                var735 = 0.023378221;
            }
        } else {
            var735 = -0.009100771;
        }
    } else {
        var735 = -0.006665296;
    }
    double var736;
    if (input[4] >= -0.211275) {
        if (input[0] >= -0.67562056) {
            if (input[3] >= 0.0018485) {
                var736 = 0.014692154;
            } else {
                var736 = -0.00709138;
            }
        } else {
            var736 = -0.012103735;
        }
    } else {
        var736 = 0.008674051;
    }
    double var737;
    if (input[0] >= -0.6384225) {
        if (input[0] >= -0.251552) {
            var737 = 0.0074578035;
        } else {
            if (input[5] >= 0.013038) {
                var737 = 0.0034593726;
            } else {
                var737 = -0.021649003;
            }
        }
    } else {
        if (input[0] >= -0.8033045) {
            var737 = 0.013235537;
        } else {
            var737 = -0.0024024628;
        }
    }
    double var738;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.6933535) {
            var738 = -0.016498009;
        } else {
            if (input[5] >= -0.0072505) {
                var738 = 0.016020576;
            } else {
                var738 = -0.005531364;
            }
        }
    } else {
        var738 = 0.00798523;
    }
    double var739;
    if (input[5] >= -0.073837504) {
        if (input[1] >= 1.829271) {
            var739 = 0.009575512;
        } else {
            if (input[3] >= -0.0054735) {
                var739 = 0.006571879;
            } else {
                var739 = -0.019905979;
            }
        }
    } else {
        var739 = 0.007998821;
    }
    double var740;
    if (input[3] >= -0.0071305) {
        if (input[4] >= -0.0074725) {
            var740 = -0.0135290045;
        } else {
            var740 = 0.00570283;
        }
    } else {
        if (input[0] >= -0.544044) {
            var740 = -0.006853607;
        } else {
            var740 = 0.013249065;
        }
    }
    double var741;
    if (input[2] >= 8.918379) {
        if (input[3] >= 0.0142645) {
            if (input[3] >= 0.18538) {
                var741 = 0.0019329082;
            } else {
                var741 = -0.018501636;
            }
        } else {
            if (input[1] >= 1.1645036) {
                var741 = 0.020315945;
            } else {
                var741 = -0.010684573;
            }
        }
    } else {
        var741 = 0.008170891;
    }
    double var742;
    if (input[1] >= 1.148487) {
        if (input[4] >= 0.0016205) {
            var742 = -0.012153501;
        } else {
            var742 = 0.004553441;
        }
    } else {
        if (input[2] >= 10.194251) {
            var742 = -0.0051311105;
        } else {
            var742 = 0.015951985;
        }
    }
    double var743;
    if (input[2] >= 10.619368) {
        var743 = 0.009667969;
    } else {
        if (input[5] >= 0.15826151) {
            var743 = -0.0153098265;
        } else {
            if (input[3] >= 0.0131775) {
                var743 = -0.0070655514;
            } else {
                var743 = 0.012522374;
            }
        }
    }
    double var744;
    if (input[0] >= -0.26726902) {
        var744 = 0.00798876;
    } else {
        if (input[5] >= 0.085074) {
            var744 = 0.009447262;
        } else {
            if (input[4] >= 0.008737) {
                var744 = 0.004836332;
            } else {
                if (input[1] >= 1.3087285) {
                    var744 = -0.0016766285;
                } else {
                    var744 = -0.02330757;
                }
            }
        }
    }
    double var745;
    if (input[2] >= 9.6779) {
        if (input[0] >= -0.4872365) {
            var745 = -0.009059392;
        } else {
            if (input[5] >= 0.00723) {
                var745 = 0.021593079;
            } else {
                var745 = -0.0027633724;
            }
        }
    } else {
        if (input[5] >= 0.010689) {
            var745 = -0.013160099;
        } else {
            var745 = 0.0058138985;
        }
    }
    double var746;
    if (input[0] >= -0.26726902) {
        var746 = 0.008076316;
    } else {
        if (input[5] >= 0.085074) {
            var746 = 0.00746165;
        } else {
            if (input[3] >= -0.007255) {
                var746 = -0.01659807;
            } else {
                var746 = 0.003620723;
            }
        }
    }
    double var747;
    if (input[3] >= -0.0034765) {
        if (input[5] >= 0.0292135) {
            var747 = -0.003790289;
        } else {
            var747 = 0.012641823;
        }
    } else {
        if (input[1] >= 1.3311815) {
            var747 = -0.012730855;
        } else {
            var747 = 0.0050250217;
        }
    }
    double var748;
    if (input[3] >= 0.0189505) {
        if (input[5] >= 0.013056001) {
            var748 = 0.014951596;
        } else {
            var748 = -0.0062577375;
        }
    } else {
        if (input[5] >= 0.014248) {
            var748 = -0.013770719;
        } else {
            var748 = 0.007648647;
        }
    }
    double var749;
    if (input[0] >= -0.728909) {
        if (input[5] >= -0.0292455) {
            if (input[5] >= 0.0502665) {
                var749 = 0.0064122262;
            } else {
                var749 = -0.014466005;
            }
        } else {
            var749 = 0.015514792;
        }
    } else {
        var749 = -0.0056210062;
    }
    double var750;
    if (input[4] >= 0.03873) {
        var750 = -0.0063181324;
    } else {
        if (input[4] >= -0.024004001) {
            var750 = 0.012940957;
        } else {
            if (input[5] >= 0.049292497) {
                var750 = -0.0131523255;
            } else {
                var750 = 0.007478045;
            }
        }
    }
    double var751;
    if (input[2] >= 10.619368) {
        var751 = 0.008291328;
    } else {
        if (input[5] >= 0.15826151) {
            var751 = -0.012900398;
        } else {
            if (input[5] >= -0.0328345) {
                var751 = 0.013927205;
            } else {
                var751 = -0.008420244;
            }
        }
    }
    double var752;
    if (input[5] >= 0.06109) {
        if (input[2] >= 9.74511) {
            var752 = -0.006654504;
        } else {
            var752 = 0.015983308;
        }
    } else {
        if (input[3] >= 0.018966) {
            var752 = 0.008114593;
        } else {
            if (input[5] >= 0.0009005) {
                var752 = -0.025000552;
            } else {
                var752 = 0.0053818207;
            }
        }
    }
    double var753;
    if (input[5] >= 0.029703) {
        if (input[4] >= -0.0021195) {
            var753 = -0.0060530743;
        } else {
            var753 = 0.014183464;
        }
    } else {
        if (input[1] >= 0.9870475) {
            if (input[0] >= -0.6754705) {
                var753 = 0.0118272975;
            } else {
                var753 = -0.007107331;
            }
        } else {
            var753 = -0.014215738;
        }
    }
    double var754;
    if (input[2] >= 10.3126545) {
        var754 = 0.008061371;
    } else {
        if (input[4] >= -0.115745) {
            if (input[4] >= 0.0939405) {
                var754 = 0.005932027;
            } else {
                if (input[2] >= 9.652153) {
                    var754 = -0.024884967;
                } else {
                    var754 = -0.0012874964;
                }
            }
        } else {
            var754 = 0.011348146;
        }
    }
    double var755;
    if (input[2] >= 9.6779) {
        if (input[0] >= -0.4872365) {
            var755 = -0.00832257;
        } else {
            if (input[5] >= 0.00723) {
                var755 = 0.020764817;
            } else {
                var755 = -0.0024191816;
            }
        }
    } else {
        if (input[2] >= 8.918379) {
            var755 = -0.012870258;
        } else {
            var755 = 0.006554505;
        }
    }
    double var756;
    if (input[2] >= 9.048159) {
        if (input[5] >= 0.134565) {
            var756 = 0.015678527;
        } else {
            if (input[5] >= -0.0345315) {
                if (input[3] >= 0.0014450001) {
                    var756 = -0.019650584;
                } else {
                    var756 = -0.0020098046;
                }
            } else {
                var756 = 0.012083705;
            }
        }
    } else {
        var756 = -0.007910246;
    }
    double var757;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var757 = -0.0146432035;
        } else {
            var757 = 0.005293481;
        }
    } else {
        if (input[5] >= -0.116819) {
            if (input[2] >= 9.662256) {
                var757 = 0.016173393;
            } else {
                var757 = 0.0009689928;
            }
        } else {
            var757 = -0.007459076;
        }
    }
    double var758;
    if (input[0] >= -0.251552) {
        var758 = 0.007925411;
    } else {
        if (input[5] >= 0.007181) {
            if (input[3] >= 0.0044335) {
                var758 = -0.005733195;
            } else {
                var758 = 0.014130787;
            }
        } else {
            if (input[1] >= 1.3438305) {
                var758 = -0.01862598;
            } else {
                var758 = 0.0030811015;
            }
        }
    }
    double var759;
    if (input[5] >= 0.048704) {
        if (input[4] >= -0.023919001) {
            var759 = 0.0049730632;
        } else {
            var759 = -0.014230162;
        }
    } else {
        if (input[4] >= -0.016539) {
            if (input[4] >= 0.0288825) {
                var759 = 0.009962486;
            } else {
                var759 = -0.0145742;
            }
        } else {
            var759 = 0.012805238;
        }
    }
    double var760;
    if (input[3] >= -0.0191905) {
        if (input[1] >= 1.0822495) {
            if (input[2] >= 9.634115) {
                var760 = -0.017444152;
            } else {
                var760 = 0.010492256;
            }
        } else {
            var760 = 0.01621863;
        }
    } else {
        if (input[1] >= 1.164354) {
            var760 = 0.0053567733;
        } else {
            var760 = -0.015548266;
        }
    }
    double var761;
    if (input[2] >= 9.6779) {
        if (input[0] >= -0.611104) {
            var761 = 0.014039748;
        } else {
            var761 = -0.0058798944;
        }
    } else {
        if (input[2] >= 9.346714) {
            var761 = -0.014567052;
        } else {
            var761 = 0.0039359005;
        }
    }
    double var762;
    if (input[2] >= 9.24717) {
        if (input[4] >= -0.0774975) {
            if (input[4] >= 0.065188006) {
                var762 = -0.0059945458;
            } else {
                var762 = 0.019693192;
            }
        } else {
            var762 = -0.007652678;
        }
    } else {
        var762 = -0.007421781;
    }
    double var763;
    if (input[0] >= -0.6384225) {
        if (input[1] >= 1.5515985) {
            var763 = 0.006224943;
        } else {
            var763 = -0.011473464;
        }
    } else {
        if (input[0] >= -0.8033045) {
            var763 = 0.013421667;
        } else {
            var763 = -0.0039292574;
        }
    }
    double var764;
    if (input[1] >= 1.869238) {
        var764 = -0.0076338593;
    } else {
        if (input[5] >= -0.087015495) {
            if (input[3] >= 0.0109205) {
                var764 = 0.01526191;
            } else {
                if (input[4] >= -0.001136) {
                    var764 = 0.0020399361;
                } else {
                    var764 = -0.025566211;
                }
            }
        } else {
            var764 = 0.017808044;
        }
    }
    double var765;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.064513) {
            if (input[3] >= -0.022045001) {
                if (input[0] >= -0.57121205) {
                    var765 = -0.024722707;
                } else {
                    var765 = 0.0011651868;
                }
            } else {
                var765 = 0.017214866;
            }
        } else {
            var765 = 0.012949193;
        }
    } else {
        var765 = -0.0072410046;
    }
    double var766;
    if (input[0] >= -0.603994) {
        if (input[0] >= -0.273556) {
            var766 = -0.005523809;
        } else {
            var766 = 0.013402467;
        }
    } else {
        if (input[3] >= -0.035361) {
            var766 = 0.0071733654;
        } else {
            var766 = -0.016401175;
        }
    }
    double var767;
    if (input[0] >= -0.251552) {
        var767 = 0.008712758;
    } else {
        if (input[5] >= 0.007181) {
            if (input[3] >= 0.0044335) {
                var767 = -0.006741975;
            } else {
                var767 = 0.013624503;
            }
        } else {
            if (input[5] >= -0.073864) {
                var767 = -0.0177245;
            } else {
                var767 = 0.00091575104;
            }
        }
    }
    double var768;
    if (input[5] >= 0.048704) {
        if (input[5] >= 0.207641) {
            var768 = 0.0037921048;
        } else {
            var768 = -0.01389005;
        }
    } else {
        if (input[5] >= -0.116819) {
            if (input[0] >= -0.6051165) {
                var768 = 0.0016086873;
            } else {
                var768 = 0.014224851;
            }
        } else {
            var768 = -0.00634011;
        }
    }
    double var769;
    if (input[0] >= -0.420326) {
        var769 = 0.006802635;
    } else {
        if (input[5] >= 0.020514) {
            var769 = -0.01295941;
        } else {
            if (input[4] >= -0.0061790003) {
                var769 = 0.016821053;
            } else {
                var769 = -0.0064335167;
            }
        }
    }
    double var770;
    if (input[4] >= 0.03873) {
        var770 = -0.006084166;
    } else {
        if (input[0] >= -0.4629125) {
            var770 = -0.0063111936;
        } else {
            if (input[2] >= 9.680669) {
                var770 = 0.01787362;
            } else {
                var770 = -0.004870841;
            }
        }
    }
    double var771;
    if (input[2] >= 9.649159) {
        if (input[1] >= 0.91302645) {
            if (input[0] >= -0.611104) {
                var771 = 0.0015677958;
            } else {
                var771 = -0.020151017;
            }
        } else {
            var771 = 0.008725629;
        }
    } else {
        if (input[2] >= 9.048159) {
            var771 = 0.014970579;
        } else {
            var771 = -0.0060808207;
        }
    }
    double var772;
    if (input[1] >= 0.7206015) {
        if (input[0] >= -0.781001) {
            if (input[1] >= 1.6933535) {
                var772 = -0.013353234;
            } else {
                var772 = 0.00938471;
            }
        } else {
            var772 = 0.015513149;
        }
    } else {
        var772 = -0.008636542;
    }
    double var773;
    if (input[1] >= 1.5912659) {
        if (input[2] >= 9.372759) {
            var773 = 0.014260711;
        } else {
            var773 = -0.0044925166;
        }
    } else {
        if (input[5] >= -0.028696) {
            if (input[5] >= 0.048444502) {
                var773 = -0.0067163915;
            } else {
                var773 = 0.016895518;
            }
        } else {
            var773 = -0.01782553;
        }
    }
    double var774;
    if (input[2] >= 8.918379) {
        if (input[5] >= -0.034523502) {
            if (input[4] >= 0.041642502) {
                var774 = -0.020327277;
            } else {
                if (input[0] >= -0.562156) {
                    var774 = -0.012437435;
                } else {
                    var774 = 0.01316567;
                }
            }
        } else {
            var774 = 0.008253374;
        }
    } else {
        var774 = 0.0092251245;
    }
    double var775;
    if (input[5] >= 0.0354945) {
        if (input[3] >= 0.009888001) {
            var775 = -0.0045325933;
        } else {
            var775 = 0.014191429;
        }
    } else {
        if (input[3] >= 0.008620501) {
            var775 = 0.006219719;
        } else {
            if (input[3] >= -0.0463365) {
                var775 = -0.022008307;
            } else {
                var775 = 0.003936094;
            }
        }
    }
    double var776;
    if (input[0] >= -0.420326) {
        var776 = 0.007887188;
    } else {
        if (input[5] >= -0.087015495) {
            if (input[3] >= 0.021173) {
                var776 = 0.010232227;
            } else {
                if (input[3] >= -0.058870003) {
                    var776 = -0.026554154;
                } else {
                    var776 = -0.000799741;
                }
            }
        } else {
            var776 = 0.008614316;
        }
    }
    double var777;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[5] >= 0.187219) {
                var777 = -0.0075618965;
            } else {
                if (input[1] >= 1.225127) {
                    var777 = 0.026634851;
                } else {
                    var777 = -0.0001681865;
                }
            }
        } else {
            var777 = -0.010845712;
        }
    } else {
        var777 = -0.0077746636;
    }
    double var778;
    if (input[5] >= 0.029703) {
        if (input[4] >= -0.0021195) {
            var778 = -0.0050667846;
        } else {
            var778 = 0.013534848;
        }
    } else {
        if (input[2] >= 9.602606) {
            var778 = -0.01131651;
        } else {
            var778 = 0.0057350155;
        }
    }
    double var779;
    if (input[2] >= 9.960512) {
        var779 = 0.006970283;
    } else {
        if (input[3] >= -0.115752) {
            if (input[3] >= 0.108787) {
                var779 = -0.008072666;
            } else {
                var779 = 0.014375142;
            }
        } else {
            var779 = -0.017066035;
        }
    }
    double var780;
    if (input[4] >= 0.07027) {
        var780 = 0.007918989;
    } else {
        if (input[5] >= 0.113545) {
            var780 = -0.015653215;
        } else {
            if (input[1] >= 0.9870475) {
                var780 = 0.01736713;
            } else {
                var780 = -0.015799444;
            }
        }
    }
    double var781;
    if (input[1] >= 1.148487) {
        if (input[5] >= -0.020039499) {
            if (input[4] >= -0.0284945) {
                var781 = 0.015576146;
            } else {
                var781 = -0.010911508;
            }
        } else {
            var781 = -0.013919889;
        }
    } else {
        if (input[2] >= 10.203457) {
            var781 = -0.0036086424;
        } else {
            var781 = 0.014083652;
        }
    }
    double var782;
    if (input[4] >= -0.211275) {
        if (input[0] >= -0.67562056) {
            if (input[1] >= 1.361419) {
                var782 = 0.015881717;
            } else {
                var782 = -0.0077293958;
            }
        } else {
            var782 = -0.012358711;
        }
    } else {
        var782 = 0.009055568;
    }
    double var783;
    if (input[2] >= 9.960512) {
        var783 = 0.007875635;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[4] >= -0.074329495) {
                var783 = 0.00363971;
            } else {
                var783 = -0.028068114;
            }
        } else {
            var783 = 0.011060916;
        }
    }
    double var784;
    if (input[4] >= -0.211275) {
        if (input[1] >= 1.0318794) {
            if (input[1] >= 1.372571) {
                if (input[3] >= -0.0034765) {
                    var784 = 0.014869546;
                } else {
                    var784 = -0.012394753;
                }
            } else {
                var784 = -0.020617567;
            }
        } else {
            var784 = 0.008282959;
        }
    } else {
        var784 = 0.008897702;
    }
    double var785;
    if (input[3] >= -0.2304275) {
        if (input[0] >= -0.5210665) {
            var785 = 0.010251251;
        } else {
            if (input[5] >= 0.028944999) {
                var785 = -0.02533968;
            } else {
                var785 = 0.00323502;
            }
        }
    } else {
        var785 = 0.008708043;
    }
    double var786;
    if (input[5] >= 0.0354945) {
        if (input[3] >= 0.009888001) {
            var786 = -0.0044241995;
        } else {
            var786 = 0.014562101;
        }
    } else {
        if (input[5] >= -0.022142) {
            var786 = -0.014892587;
        } else {
            var786 = 0.003813362;
        }
    }
    double var787;
    if (input[1] >= 1.4861845) {
        if (input[0] >= -0.6191875) {
            var787 = -0.015132159;
        } else {
            var787 = 0.006318521;
        }
    } else {
        if (input[1] >= 0.7206015) {
            var787 = 0.011331227;
        } else {
            var787 = -0.0062128245;
        }
    }
    double var788;
    if (input[5] >= 0.029703) {
        if (input[4] >= -0.0021195) {
            var788 = -0.005861256;
        } else {
            var788 = 0.014585952;
        }
    } else {
        if (input[5] >= -0.073837504) {
            var788 = -0.011945305;
        } else {
            var788 = 0.0044872463;
        }
    }
    double var789;
    if (input[1] >= 1.3079054) {
        if (input[5] >= -0.020039499) {
            var789 = 0.0057849153;
        } else {
            var789 = -0.016273526;
        }
    } else {
        if (input[5] >= 0.00089799997) {
            var789 = -0.005356874;
        } else {
            var789 = 0.015480612;
        }
    }
    double var790;
    if (input[0] >= -0.273556) {
        var790 = -0.007627537;
    } else {
        if (input[2] >= 9.466539) {
            if (input[1] >= 0.9764195) {
                if (input[5] >= 0.0211675) {
                    var790 = -0.025670527;
                } else {
                    var790 = 0.0050358013;
                }
            } else {
                var790 = 0.01384992;
            }
        } else {
            var790 = 0.013579591;
        }
    }
    double var791;
    if (input[5] >= 0.0354945) {
        if (input[3] >= 0.009888001) {
            var791 = -0.0033911648;
        } else {
            var791 = 0.012789022;
        }
    } else {
        if (input[3] >= 0.0018485) {
            var791 = 0.0034032557;
        } else {
            var791 = -0.010518371;
        }
    }
    double var792;
    if (input[2] >= 9.372759) {
        if (input[4] >= -0.0774975) {
            if (input[2] >= 10.038425) {
                var792 = -0.0023976597;
            } else {
                var792 = 0.020720907;
            }
        } else {
            var792 = -0.0098902155;
        }
    } else {
        var792 = -0.0064994134;
    }
    double var793;
    if (input[2] >= 9.960512) {
        var793 = 0.0066192034;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[4] >= -0.0629475) {
                var793 = 0.0025897403;
            } else {
                var793 = -0.022519168;
            }
        } else {
            var793 = 0.009506134;
        }
    }
    double var794;
    if (input[5] >= 0.06109) {
        if (input[4] >= -0.0325885) {
            var794 = 0.0130583765;
        } else {
            var794 = -0.00354404;
        }
    } else {
        if (input[0] >= -0.58094203) {
            var794 = 0.0070558228;
        } else {
            if (input[5] >= -0.032248497) {
                var794 = 0.002892089;
            } else {
                var794 = -0.020137014;
            }
        }
    }
    double var795;
    if (input[4] >= -0.0166455) {
        if (input[0] >= -0.6085595) {
            var795 = -0.016082104;
        } else {
            var795 = 0.007501444;
        }
    } else {
        if (input[0] >= -0.61050546) {
            var795 = 0.01928508;
        } else {
            var795 = -0.008684104;
        }
    }
    double var796;
    if (input[4] >= -0.0166455) {
        if (input[0] >= -0.4700225) {
            var796 = 0.010088971;
        } else {
            if (input[0] >= -0.71409) {
                var796 = -0.021639097;
            } else {
                var796 = 0.00300886;
            }
        }
    } else {
        if (input[0] >= -0.61050546) {
            var796 = 0.016098885;
        } else {
            var796 = -0.0072058295;
        }
    }
    double var797;
    if (input[0] >= -0.273556) {
        var797 = -0.008548516;
    } else {
        if (input[3] >= 0.021173) {
            var797 = 0.012705008;
        } else {
            if (input[0] >= -0.80510104) {
                var797 = 0.006651506;
            } else {
                var797 = -0.015006359;
            }
        }
    }
    double var798;
    if (input[0] >= -0.81550395) {
        if (input[4] >= 0.0138815) {
            var798 = -0.013072174;
        } else {
            if (input[5] >= 0.0062205) {
                var798 = -0.0074943313;
            } else {
                var798 = 0.018403003;
            }
        }
    } else {
        var798 = 0.0076122233;
    }
    double var799;
    if (input[2] >= 8.918379) {
        if (input[2] >= 9.534199) {
            if (input[1] >= 1.1822414) {
                var799 = 0.011870813;
            } else {
                var799 = -0.0064876587;
            }
        } else {
            var799 = -0.01355307;
        }
    } else {
        var799 = 0.008349813;
    }
    double var800;
    if (input[4] >= 0.050485) {
        var800 = 0.0067068203;
    } else {
        if (input[2] >= 9.70402) {
            if (input[1] >= 1.081501) {
                var800 = -0.022869337;
            } else {
                var800 = 0.0049497;
            }
        } else {
            var800 = 0.006355833;
        }
    }
    double var801;
    if (input[1] >= 0.7206015) {
        if (input[5] >= -0.086994) {
            if (input[5] >= 0.0299905) {
                var801 = 0.008145837;
            } else {
                var801 = -0.015295441;
            }
        } else {
            var801 = 0.014621975;
        }
    } else {
        var801 = -0.007554535;
    }
    double var802;
    if (input[2] >= 10.3126545) {
        var802 = 0.0079254415;
    } else {
        if (input[4] >= -0.115745) {
            if (input[2] >= 9.346714) {
                if (input[4] >= 0.029662501) {
                    var802 = -0.0018324645;
                } else {
                    var802 = -0.024144627;
                }
            } else {
                var802 = 0.0037084941;
            }
        } else {
            var802 = 0.012681503;
        }
    }
    double var803;
    if (input[5] >= -0.116819) {
        if (input[4] >= -0.1578455) {
            if (input[3] >= -0.021978) {
                if (input[3] >= 0.0211285) {
                    var803 = 0.01237357;
                } else {
                    var803 = -0.018008191;
                }
            } else {
                var803 = 0.021837996;
            }
        } else {
            var803 = -0.010252181;
        }
    } else {
        var803 = -0.007976185;
    }
    double var804;
    if (input[4] >= 0.03873) {
        var804 = -0.0068471204;
    } else {
        if (input[0] >= -0.4629125) {
            var804 = -0.007528887;
        } else {
            if (input[2] >= 9.680669) {
                var804 = 0.019645836;
            } else {
                var804 = -0.0054866476;
            }
        }
    }
    double var805;
    if (input[0] >= -0.728909) {
        if (input[2] >= 9.534199) {
            if (input[5] >= 0.013040001) {
                var805 = 0.024807042;
            } else {
                var805 = -0.008746661;
            }
        } else {
            var805 = -0.00677484;
        }
    } else {
        var805 = -0.0060450803;
    }
    double var806;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var806 = -0.015088699;
        } else {
            var806 = 0.0046907263;
        }
    } else {
        if (input[3] >= -0.0105435) {
            var806 = -0.0036222453;
        } else {
            var806 = 0.012919601;
        }
    }
    double var807;
    if (input[5] >= 0.048704) {
        if (input[2] >= 9.7496) {
            var807 = -0.012732877;
        } else {
            var807 = 0.003935523;
        }
    } else {
        if (input[5] >= -0.116819) {
            if (input[0] >= -0.664094) {
                var807 = 0.014220997;
            } else {
                var807 = 0.0011469816;
            }
        } else {
            var807 = -0.0061142123;
        }
    }
    double var808;
    if (input[0] >= -0.81550395) {
        if (input[1] >= 1.4861845) {
            if (input[1] >= 1.8785934) {
                var808 = 0.0010167003;
            } else {
                var808 = -0.019708933;
            }
        } else {
            if (input[3] >= 0.001496) {
                var808 = -0.00048570384;
            } else {
                var808 = 0.01141753;
            }
        }
    } else {
        var808 = 0.0074776476;
    }
    double var809;
    if (input[3] >= -0.0191905) {
        if (input[2] >= 9.534199) {
            var809 = 0.011204173;
        } else {
            var809 = -0.0070355786;
        }
    } else {
        if (input[1] >= 1.164354) {
            var809 = 0.00485622;
        } else {
            var809 = -0.014435189;
        }
    }
    double var810;
    if (input[2] >= 9.649159) {
        if (input[4] >= -0.0239945) {
            var810 = 0.0061380127;
        } else {
            var810 = -0.013310266;
        }
    } else {
        if (input[2] >= 9.048159) {
            var810 = 0.013661484;
        } else {
            var810 = -0.0060682455;
        }
    }
    double var811;
    if (input[2] >= 8.918379) {
        if (input[5] >= -0.034523502) {
            if (input[4] >= 0.041642502) {
                var811 = -0.020980725;
            } else {
                if (input[0] >= -0.562156) {
                    var811 = -0.013167169;
                } else {
                    var811 = 0.014950039;
                }
            }
        } else {
            var811 = 0.008137286;
        }
    } else {
        var811 = 0.0077561787;
    }
    double var812;
    if (input[2] >= 9.960512) {
        var812 = 0.006002047;
    } else {
        if (input[3] >= -0.115752) {
            if (input[3] >= 0.108787) {
                var812 = -0.0077168336;
            } else {
                var812 = 0.012639186;
            }
        } else {
            var812 = -0.01531788;
        }
    }
    double var813;
    if (input[4] >= 0.07027) {
        var813 = 0.0068860003;
    } else {
        if (input[0] >= -0.4629125) {
            var813 = -0.013853331;
        } else {
            if (input[0] >= -0.7128175) {
                var813 = 0.015763242;
            } else {
                var813 = -0.008429099;
            }
        }
    }
    double var814;
    if (input[0] >= -0.420326) {
        var814 = 0.007858832;
    } else {
        if (input[5] >= -0.022142) {
            if (input[0] >= -0.781001) {
                var814 = -0.019439586;
            } else {
                var814 = 0.0068269446;
            }
        } else {
            var814 = 0.006439983;
        }
    }
    double var815;
    if (input[5] >= 0.06109) {
        var815 = 0.0059608063;
    } else {
        if (input[3] >= -0.0105435) {
            if (input[3] >= 0.0349835) {
                var815 = 0.0010187266;
            } else {
                var815 = -0.017980635;
            }
        } else {
            var815 = 0.006045712;
        }
    }
    double var816;
    if (input[0] >= -0.26726902) {
        var816 = 0.0073329816;
    } else {
        if (input[5] >= 0.085074) {
            var816 = 0.008847064;
        } else {
            if (input[3] >= -0.007255) {
                var816 = -0.01802626;
            } else {
                var816 = 0.00346321;
            }
        }
    }
    double var817;
    if (input[3] >= -0.0191905) {
        if (input[3] >= 0.032702997) {
            var817 = -0.0033282435;
        } else {
            var817 = 0.0141288405;
        }
    } else {
        if (input[3] >= -0.12821901) {
            var817 = -0.01580049;
        } else {
            var817 = 0.004523595;
        }
    }
    double var818;
    if (input[3] >= -0.0191905) {
        if (input[4] >= -0.0074725) {
            var818 = -0.004920896;
        } else {
            var818 = 0.012175166;
        }
    } else {
        if (input[3] >= -0.12821901) {
            var818 = -0.013409226;
        } else {
            var818 = 0.003716891;
        }
    }
    double var819;
    if (input[1] >= 0.6613995) {
        if (input[3] >= -0.0054735) {
            if (input[1] >= 1.667308) {
                var819 = -0.0033508758;
            } else {
                var819 = 0.018131617;
            }
        } else {
            if (input[3] >= -0.120872) {
                var819 = -0.016523328;
            } else {
                var819 = 0.006828402;
            }
        }
    } else {
        var819 = -0.007560031;
    }
    double var820;
    if (input[3] >= -0.1566295) {
        if (input[4] >= -0.06454) {
            if (input[4] >= 0.050485) {
                var820 = 0.013522944;
            } else {
                var820 = -0.015233281;
            }
        } else {
            var820 = 0.014377907;
        }
    } else {
        var820 = -0.007591581;
    }
    double var821;
    if (input[3] >= 0.108812496) {
        var821 = -0.0071406304;
    } else {
        if (input[1] >= 1.4310989) {
            var821 = -0.0060488903;
        } else {
            if (input[0] >= -0.57031405) {
                var821 = -0.0054371366;
            } else {
                var821 = 0.022904353;
            }
        }
    }
    double var822;
    if (input[0] >= -0.7613915) {
        if (input[1] >= 1.7950675) {
            var822 = -0.0058212;
        } else {
            if (input[5] >= -0.0072505) {
                var822 = 0.019187706;
            } else {
                var822 = -0.0061255195;
            }
        }
    } else {
        var822 = -0.006862417;
    }
    double var823;
    if (input[1] >= 1.5912659) {
        if (input[4] >= 0.000444) {
            var823 = -0.0037910407;
        } else {
            var823 = 0.014017148;
        }
    } else {
        if (input[4] >= -0.0742015) {
            if (input[4] >= 0.038656) {
                var823 = -0.010766395;
            } else {
                var823 = 0.015918223;
            }
        } else {
            var823 = -0.016085759;
        }
    }
    double var824;
    if (input[2] >= 8.918379) {
        if (input[5] >= 0.048704) {
            var824 = -0.011105681;
        } else {
            if (input[1] >= 1.225127) {
                var824 = 0.01293896;
            } else {
                var824 = -0.0056564007;
            }
        }
    } else {
        var824 = 0.008316591;
    }
    double var825;
    if (input[2] >= 9.960512) {
        var825 = 0.006249188;
    } else {
        if (input[0] >= -0.69148695) {
            if (input[4] >= -0.0629475) {
                var825 = 0.004968819;
            } else {
                var825 = -0.024572937;
            }
        } else {
            var825 = 0.009672556;
        }
    }
    double var826;
    if (input[4] >= -0.211275) {
        if (input[0] >= -0.67562056) {
            if (input[1] >= 1.361419) {
                var826 = 0.017451953;
            } else {
                var826 = -0.007849909;
            }
        } else {
            var826 = -0.0124542825;
        }
    } else {
        var826 = 0.008289146;
    }
    double var827;
    if (input[1] >= 1.148487) {
        if (input[1] >= 1.5912659) {
            if (input[1] >= 1.9083065) {
                var827 = -0.005635479;
            } else {
                var827 = 0.0120861875;
            }
        } else {
            var827 = -0.011706998;
        }
    } else {
        if (input[2] >= 10.264904) {
            var827 = -0.004517866;
        } else {
            var827 = 0.013253494;
        }
    }
    double var828;
    if (input[2] >= 10.3126545) {
        var828 = 0.007832586;
    } else {
        if (input[4] >= -0.115745) {
            if (input[4] >= 0.0939405) {
                var828 = 0.005237219;
            } else {
                if (input[2] >= 9.602905) {
                    var828 = -0.023234233;
                } else {
                    var828 = -0.0015269183;
                }
            }
        } else {
            var828 = 0.012807266;
        }
    }
    double var829;
    if (input[2] >= 9.6779) {
        if (input[1] >= 1.2255759) {
            var829 = 0.014472974;
        } else {
            var829 = -0.00353517;
        }
    } else {
        if (input[5] >= 0.010689) {
            var829 = -0.012544667;
        } else {
            var829 = 0.0057811844;
        }
    }
    double var830;
    if (input[1] >= 1.3079054) {
        if (input[5] >= -0.020039499) {
            var830 = 0.006337989;
        } else {
            var830 = -0.015567928;
        }
    } else {
        if (input[4] >= 0.0055235) {
            var830 = 0.015203954;
        } else {
            var830 = -0.005692537;
        }
    }
    double var831;
    if (input[4] >= 0.065188006) {
        var831 = -0.0060513127;
    } else {
        if (input[1] >= 1.6545845) {
            var831 = 0.013698161;
        } else {
            if (input[3] >= 0.0109205) {
                var831 = 0.012044652;
            } else {
                var831 = -0.013499498;
            }
        }
    }
    double var832;
    if (input[1] >= 1.869238) {
        var832 = -0.0070644026;
    } else {
        if (input[5] >= 0.048638) {
            var832 = -0.00895069;
        } else {
            if (input[4] >= -0.016699001) {
                var832 = -0.0020857148;
            } else {
                var832 = 0.022737246;
            }
        }
    }
    double var833;
    if (input[4] >= -0.024004001) {
        if (input[0] >= -0.4700225) {
            var833 = 0.018925145;
        } else {
            if (input[2] >= 9.722207) {
                var833 = 0.0073798182;
            } else {
                var833 = -0.015269479;
            }
        }
    } else {
        if (input[0] >= -0.61050546) {
            var833 = 0.0052462127;
        } else {
            var833 = -0.012103461;
        }
    }
    double var834;
    if (input[0] >= -0.273556) {
        var834 = -0.0076394104;
    } else {
        if (input[2] >= 9.466539) {
            if (input[4] >= 0.029023498) {
                var834 = -0.018412024;
            } else {
                if (input[0] >= -0.662223) {
                    var834 = -0.0045328313;
                } else {
                    var834 = 0.0161193;
                }
            }
        } else {
            var834 = 0.015690362;
        }
    }
    double var835;
    if (input[4] >= 0.0442155) {
        var835 = 0.00719624;
    } else {
        if (input[5] >= 0.0593575) {
            var835 = 0.010772846;
        } else {
            if (input[4] >= -0.0133675) {
                var835 = -0.020924268;
            } else {
                var835 = 0.0029575883;
            }
        }
    }
    double var836;
    if (input[4] >= -0.024004001) {
        if (input[2] >= 9.373882) {
            var836 = 0.014595931;
        } else {
            var836 = -0.0088321725;
        }
    } else {
        if (input[0] >= -0.61050546) {
            var836 = 0.003926359;
        } else {
            var836 = -0.013127969;
        }
    }
    double var837;
    if (input[0] >= -0.781001) {
        if (input[1] >= 1.6933535) {
            var837 = -0.014516637;
        } else {
            if (input[5] >= -0.0072505) {
                var837 = 0.01634904;
            } else {
                var837 = -0.0074851406;
            }
        }
    } else {
        var837 = 0.0070526064;
    }
    double var838;
    if (input[2] >= 9.740918) {
        if (input[0] >= -0.664992) {
            var838 = -0.012339193;
        } else {
            var838 = 0.005645763;
        }
    } else {
        if (input[0] >= -0.67562056) {
            var838 = 0.011830797;
        } else {
            var838 = -0.0062259305;
        }
    }
    double var839;
    if (input[4] >= -0.024004001) {
        if (input[0] >= -0.4700225) {
            var839 = 0.017152388;
        } else {
            if (input[1] >= 1.3181585) {
                var839 = 0.008342178;
            } else {
                var839 = -0.016703684;
            }
        }
    } else {
        if (input[3] >= -0.010335) {
            var839 = -0.012098515;
        } else {
            var839 = 0.004851894;
        }
    }
    double var840;
    if (input[0] >= -0.273556) {
        var840 = -0.007911549;
    } else {
        if (input[2] >= 9.466539) {
            if (input[4] >= 0.029023498) {
                var840 = -0.018288143;
            } else {
                if (input[0] >= -0.66267204) {
                    var840 = -0.0026204512;
                } else {
                    var840 = 0.013929569;
                }
            }
        } else {
            var840 = 0.014706091;
        }
    }
    double var841;
    if (input[2] >= 9.24717) {
        if (input[0] >= -0.589399) {
            var841 = 0.013232641;
        } else {
            if (input[0] >= -0.74021053) {
                var841 = -0.02010575;
            } else {
                var841 = 0.010764954;
            }
        }
    } else {
        var841 = -0.007224493;
    }
    double var842;
    if (input[4] >= -0.157865) {
        if (input[3] >= -0.021978) {
            if (input[1] >= 1.372571) {
                var842 = 0.015006349;
            } else {
                var842 = -0.018093253;
            }
        } else {
            var842 = 0.01261907;
        }
    } else {
        var842 = -0.00770385;
    }
    double var843;
    if (input[3] >= -0.2100495) {
        if (input[2] >= 9.534199) {
            if (input[2] >= 9.920171) {
                var843 = -0.0031769378;
            } else {
                var843 = 0.020293951;
            }
        } else {
            var843 = -0.007925717;
        }
    } else {
        var843 = -0.007707719;
    }
    double var844;
    if (input[2] >= 9.021066) {
        if (input[3] >= 0.0142645) {
            if (input[3] >= 0.174941) {
                var844 = -0.000015890188;
            } else {
                var844 = -0.01774031;
            }
        } else {
            if (input[3] >= -0.186601) {
                var844 = 0.020664603;
            } else {
                var844 = -0.014608666;
            }
        }
    } else {
        var844 = 0.0074965027;
    }
    double var845;
    if (input[0] >= -0.7613915) {
        if (input[5] >= -0.0344925) {
            if (input[2] >= 9.790989) {
                var845 = -0.018846665;
            } else {
                var845 = 0.010515612;
            }
        } else {
            var845 = 0.013135032;
        }
    } else {
        var845 = -0.0064330064;
    }
    double var846;
    if (input[2] >= 9.8338) {
        if (input[0] >= -0.6349045) {
            var846 = 0.0119347675;
        } else {
            var846 = -0.0019380226;
        }
    } else {
        if (input[4] >= 0.0702185) {
            var846 = -0.01612783;
        } else {
            if (input[1] >= 1.5521226) {
                var846 = 0.016149608;
            } else {
                var846 = -0.010494309;
            }
        }
    }
    double var847;
    if (input[1] >= 1.4861845) {
        if (input[0] >= -0.6191875) {
            var847 = -0.015769476;
        } else {
            var847 = 0.00657139;
        }
    } else {
        if (input[4] >= 0.0184735) {
            var847 = 0.0156153655;
        } else {
            if (input[0] >= -0.62330353) {
                var847 = 0.011129417;
            } else {
                var847 = -0.015789779;
            }
        }
    }
    double var848;
    if (input[0] >= -0.81550395) {
        if (input[1] >= 1.4861845) {
            if (input[1] >= 1.8785934) {
                var848 = 0.0012419819;
            } else {
                var848 = -0.019905183;
            }
        } else {
            if (input[3] >= 0.001496) {
                var848 = -0.0007714398;
            } else {
                var848 = 0.011311241;
            }
        }
    } else {
        var848 = 0.0076849344;
    }
    double var849;
    if (input[0] >= -0.273556) {
        var849 = -0.007959654;
    } else {
        if (input[3] >= -0.0191905) {
            if (input[4] >= -0.0316365) {
                var849 = 0.019211238;
            } else {
                var849 = -0.003994623;
            }
        } else {
            var849 = -0.0064148265;
        }
    }
    double var850;
    if (input[0] >= -0.6384225) {
        if (input[1] >= 1.5515985) {
            var850 = 0.006626625;
        } else {
            var850 = -0.011178088;
        }
    } else {
        if (input[1] >= 1.551224) {
            var850 = -0.0052401978;
        } else {
            var850 = 0.010992759;
        }
    }
    double var851;
    if (input[0] >= -0.7613915) {
        if (input[1] >= 1.8690135) {
            var851 = -0.007602289;
        } else {
            if (input[4] >= 0.0138815) {
                var851 = -0.007264754;
            } else {
                var851 = 0.018964788;
            }
        }
    } else {
        var851 = -0.006556265;
    }
    double var852;
    if (input[4] >= 0.07027) {
        var852 = 0.007359547;
    } else {
        if (input[0] >= -0.4629125) {
            var852 = -0.014887865;
        } else {
            if (input[0] >= -0.7613915) {
                var852 = 0.014984331;
            } else {
                var852 = -0.007994298;
            }
        }
    }
    double var853;
    if (input[0] >= -0.26726902) {
        var853 = 0.0076640253;
    } else {
        if (input[2] >= 9.466539) {
            if (input[0] >= -0.6852) {
                var853 = -0.019440433;
            } else {
                var853 = 0.0071593155;
            }
        } else {
            var853 = 0.008291018;
        }
    }
    double var854;
    var854 = sigmoid(0.0023232010449102743 + (var0 + var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21 + var22 + var23 + var24 + var25 + var26 + var27 + var28 + var29 + var30 + var31 + var32 + var33 + var34 + var35 + var36 + var37 + var38 + var39 + var40 + var41 + var42 + var43 + var44 + var45 + var46 + var47 + var48 + var49 + var50 + var51 + var52 + var53 + var54 + var55 + var56 + var57 + var58 + var59 + var60 + var61 + var62 + var63 + var64 + var65 + var66 + var67 + var68 + var69 + var70 + var71 + var72 + var73 + var74 + var75 + var76 + var77 + var78 + var79 + var80 + var81 + var82 + var83 + var84 + var85 + var86 + var87 + var88 + var89 + var90 + var91 + var92 + var93 + var94 + var95 + var96 + var97 + var98 + var99 + var100 + var101 + var102 + var103 + var104 + var105 + var106 + var107 + var108 + var109 + var110 + var111 + var112 + var113 + var114 + var115 + var116 + var117 + var118 + var119 + var120 + var121 + var122 + var123 + var124 + var125 + var126 + var127 + var128 + var129 + var130 + var131 + var132 + var133 + var134 + var135 + var136 + var137 + var138 + var139 + var140 + var141 + var142 + var143 + var144 + var145 + var146 + var147 + var148 + var149 + var150 + var151 + var152 + var153 + var154 + var155 + var156 + var157 + var158 + var159 + var160 + var161 + var162 + var163 + var164 + var165 + var166 + var167 + var168 + var169 + var170 + var171 + var172 + var173 + var174 + var175 + var176 + var177 + var178 + var179 + var180 + var181 + var182 + var183 + var184 + var185 + var186 + var187 + var188 + var189 + var190 + var191 + var192 + var193 + var194 + var195 + var196 + var197 + var198 + var199 + var200 + var201 + var202 + var203 + var204 + var205 + var206 + var207 + var208 + var209 + var210 + var211 + var212 + var213 + var214 + var215 + var216 + var217 + var218 + var219 + var220 + var221 + var222 + var223 + var224 + var225 + var226 + var227 + var228 + var229 + var230 + var231 + var232 + var233 + var234 + var235 + var236 + var237 + var238 + var239 + var240 + var241 + var242 + var243 + var244 + var245 + var246 + var247 + var248 + var249 + var250 + var251 + var252 + var253 + var254 + var255 + var256 + var257 + var258 + var259 + var260 + var261 + var262 + var263 + var264 + var265 + var266 + var267 + var268 + var269 + var270 + var271 + var272 + var273 + var274 + var275 + var276 + var277 + var278 + var279 + var280 + var281 + var282 + var283 + var284 + var285 + var286 + var287 + var288 + var289 + var290 + var291 + var292 + var293 + var294 + var295 + var296 + var297 + var298 + var299 + var300 + var301 + var302 + var303 + var304 + var305 + var306 + var307 + var308 + var309 + var310 + var311 + var312 + var313 + var314 + var315 + var316 + var317 + var318 + var319 + var320 + var321 + var322 + var323 + var324 + var325 + var326 + var327 + var328 + var329 + var330 + var331 + var332 + var333 + var334 + var335 + var336 + var337 + var338 + var339 + var340 + var341 + var342 + var343 + var344 + var345 + var346 + var347 + var348 + var349 + var350 + var351 + var352 + var353 + var354 + var355 + var356 + var357 + var358 + var359 + var360 + var361 + var362 + var363 + var364 + var365 + var366 + var367 + var368 + var369 + var370 + var371 + var372 + var373 + var374 + var375 + var376 + var377 + var378 + var379 + var380 + var381 + var382 + var383 + var384 + var385 + var386 + var387 + var388 + var389 + var390 + var391 + var392 + var393 + var394 + var395 + var396 + var397 + var398 + var399 + var400 + var401 + var402 + var403 + var404 + var405 + var406 + var407 + var408 + var409 + var410 + var411 + var412 + var413 + var414 + var415 + var416 + var417 + var418 + var419 + var420 + var421 + var422 + var423 + var424 + var425 + var426 + var427 + var428 + var429 + var430 + var431 + var432 + var433 + var434 + var435 + var436 + var437 + var438 + var439 + var440 + var441 + var442 + var443 + var444 + var445 + var446 + var447 + var448 + var449 + var450 + var451 + var452 + var453 + var454 + var455 + var456 + var457 + var458 + var459 + var460 + var461 + var462 + var463 + var464 + var465 + var466 + var467 + var468 + var469 + var470 + var471 + var472 + var473 + var474 + var475 + var476 + var477 + var478 + var479 + var480 + var481 + var482 + var483 + var484 + var485 + var486 + var487 + var488 + var489 + var490 + var491 + var492 + var493 + var494 + var495 + var496 + var497 + var498 + var499 + var500 + var501 + var502 + var503 + var504 + var505 + var506 + var507 + var508 + var509 + var510 + var511 + var512 + var513 + var514 + var515 + var516 + var517 + var518 + var519 + var520 + var521 + var522 + var523 + var524 + var525 + var526 + var527 + var528 + var529 + var530 + var531 + var532 + var533 + var534 + var535 + var536 + var537 + var538 + var539 + var540 + var541 + var542 + var543 + var544 + var545 + var546 + var547 + var548 + var549 + var550 + var551 + var552 + var553 + var554 + var555 + var556 + var557 + var558 + var559 + var560 + var561 + var562 + var563 + var564 + var565 + var566 + var567 + var568 + var569 + var570 + var571 + var572 + var573 + var574 + var575 + var576 + var577 + var578 + var579 + var580 + var581 + var582 + var583 + var584 + var585 + var586 + var587 + var588 + var589 + var590 + var591 + var592 + var593 + var594 + var595 + var596 + var597 + var598 + var599 + var600 + var601 + var602 + var603 + var604 + var605 + var606 + var607 + var608 + var609 + var610 + var611 + var612 + var613 + var614 + var615 + var616 + var617 + var618 + var619 + var620 + var621 + var622 + var623 + var624 + var625 + var626 + var627 + var628 + var629 + var630 + var631 + var632 + var633 + var634 + var635 + var636 + var637 + var638 + var639 + var640 + var641 + var642 + var643 + var644 + var645 + var646 + var647 + var648 + var649 + var650 + var651 + var652 + var653 + var654 + var655 + var656 + var657 + var658 + var659 + var660 + var661 + var662 + var663 + var664 + var665 + var666 + var667 + var668 + var669 + var670 + var671 + var672 + var673 + var674 + var675 + var676 + var677 + var678 + var679 + var680 + var681 + var682 + var683 + var684 + var685 + var686 + var687 + var688 + var689 + var690 + var691 + var692 + var693 + var694 + var695 + var696 + var697 + var698 + var699 + var700 + var701 + var702 + var703 + var704 + var705 + var706 + var707 + var708 + var709 + var710 + var711 + var712 + var713 + var714 + var715 + var716 + var717 + var718 + var719 + var720 + var721 + var722 + var723 + var724 + var725 + var726 + var727 + var728 + var729 + var730 + var731 + var732 + var733 + var734 + var735 + var736 + var737 + var738 + var739 + var740 + var741 + var742 + var743 + var744 + var745 + var746 + var747 + var748 + var749 + var750 + var751 + var752 + var753 + var754 + var755 + var756 + var757 + var758 + var759 + var760 + var761 + var762 + var763 + var764 + var765 + var766 + var767 + var768 + var769 + var770 + var771 + var772 + var773 + var774 + var775 + var776 + var777 + var778 + var779 + var780 + var781 + var782 + var783 + var784 + var785 + var786 + var787 + var788 + var789 + var790 + var791 + var792 + var793 + var794 + var795 + var796 + var797 + var798 + var799 + var800 + var801 + var802 + var803 + var804 + var805 + var806 + var807 + var808 + var809 + var810 + var811 + var812 + var813 + var814 + var815 + var816 + var817 + var818 + var819 + var820 + var821 + var822 + var823 + var824 + var825 + var826 + var827 + var828 + var829 + var830 + var831 + var832 + var833 + var834 + var835 + var836 + var837 + var838 + var839 + var840 + var841 + var842 + var843 + var844 + var845 + var846 + var847 + var848 + var849 + var850 + var851 + var852 + var853));
    memcpy(output, (double[]){1.0 - var854, var854}, 2 * sizeof(double));
}
