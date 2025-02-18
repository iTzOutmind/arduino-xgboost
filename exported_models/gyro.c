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
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var0 = 0.016928395;
        } else {
            var0 = 0.11012395;
        }
    } else {
        if (input[0] < -0.23546) {
            var0 = 0.099762864;
        } else {
            var0 = 0.11231897;
        }
    }
    double var1;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var1 = 0.015444509;
        } else {
            var1 = 0.10822783;
        }
    } else {
        if (input[0] < -0.12005) {
            var1 = 0.10055604;
        } else {
            var1 = 0.11125684;
        }
    }
    double var2;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var2 = 0.01407511;
        } else {
            var2 = 0.106473826;
        }
    } else {
        if (input[0] < -0.12005) {
            var2 = 0.09828952;
        } else {
            var2 = 0.109731875;
        }
    }
    double var3;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var3 = 0.012813808;
        } else {
            var3 = 0.10483413;
        }
    } else {
        if (input[0] < -0.23546) {
            var3 = 0.09219047;
        } else {
            var3 = 0.10757243;
        }
    }
    double var4;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var4 = 0.0135919945;
        } else {
            var4 = 0.10555618;
        }
    } else {
        if (input[0] < -0.12005) {
            var4 = 0.093854204;
        } else {
            var4 = 0.107098155;
        }
    }
    double var5;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var5 = 0.010412761;
        } else {
            var5 = 0.101840906;
        }
    } else {
        if (input[0] < -0.12005) {
            var5 = 0.09170516;
        } else {
            var5 = 0.10593732;
        }
    }
    double var6;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var6 = 0.011095749;
        } else {
            var6 = 0.10304791;
        }
    } else {
        if (input[0] < -0.12005) {
            var6 = 0.08955796;
        } else {
            var6 = 0.10486026;
        }
    }
    double var7;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var7 = 0.010079215;
        } else {
            var7 = 0.10186783;
        }
    } else {
        if (input[0] < -0.12005) {
            var7 = 0.08739862;
        } else {
            var7 = 0.10385203;
        }
    }
    double var8;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var8 = 0.009148513;
        } else {
            var8 = 0.10072801;
        }
    } else {
        if (input[0] < -0.23546) {
            var8 = 0.07968598;
        } else {
            var8 = 0.101724945;
        }
    }
    double var9;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var9 = 0.008297654;
        } else {
            var9 = 0.09961556;
        }
    } else {
        if (input[0] < -0.12005) {
            var9 = 0.08289671;
        } else {
            var9 = 0.102000296;
        }
    }
    double var10;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var10 = 0.0075208168;
        } else {
            var10 = 0.0985187;
        }
    } else {
        if (input[0] < -0.12005) {
            var10 = 0.08063655;
        } else {
            var10 = 0.10112357;
        }
    }
    double var11;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var11 = 0.006812548;
        } else {
            var11 = 0.097426586;
        }
    } else {
        if (input[0] < -0.12005) {
            var11 = 0.078329526;
        } else {
            var11 = 0.10026979;
        }
    }
    double var12;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var12 = 0.0061675017;
        } else {
            var12 = 0.096329175;
        }
    } else {
        if (input[0] < -0.12005) {
            var12 = 0.07597195;
        } else {
            var12 = 0.09942978;
        }
    }
    double var13;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var13 = 0.005580636;
        } else {
            var13 = 0.09521706;
        }
    } else {
        if (input[0] < -0.12005) {
            var13 = 0.0735622;
        } else {
            var13 = 0.09859493;
        }
    }
    double var14;
    if (input[0] < -0.291444) {
        if (input[1] < 1.997446) {
            var14 = 0.001474247;
        } else {
            var14 = 0.09279237;
        }
    } else {
        if (input[0] < -0.060774) {
            var14 = 0.079031944;
        } else {
            var14 = 0.09857408;
        }
    }
    double var15;
    if (input[0] < -0.291444) {
        if (input[1] < 1.997446) {
            var15 = 0.0013288328;
        } else {
            var15 = 0.09144475;
        }
    } else {
        if (input[0] < -0.060774) {
            var15 = 0.07685637;
        } else {
            var15 = 0.097797565;
        }
    }
    double var16;
    if (input[0] < -0.248932) {
        if (input[1] < 2.085463) {
            var16 = 0.0021839307;
        } else {
            var16 = 0.09516212;
        }
    } else {
        if (input[0] < 0.297431) {
            var16 = 0.08506409;
        } else {
            var16 = 0.10136961;
        }
    }
    double var17;
    if (input[0] < -0.248932) {
        if (input[1] < 1.997446) {
            var17 = 0.00027223563;
        } else {
            var17 = 0.089952804;
        }
    } else {
        if (input[0] < 0.297431) {
            var17 = 0.083330646;
        } else {
            var17 = 0.10096546;
        }
    }
    double var18;
    if (input[0] < -0.248932) {
        if (input[1] < 2.085463) {
            var18 = 0.0016344655;
        } else {
            var18 = 0.093138576;
        }
    } else {
        if (input[0] < 0.297431) {
            var18 = 0.0815246;
        } else {
            var18 = 0.10057389;
        }
    }
    double var19;
    if (input[0] < -0.248932) {
        if (input[2] < 10.339748) {
            var19 = -0.006212024;
        } else {
            var19 = 0.07643794;
        }
    } else {
        if (input[0] < 0.297431) {
            var19 = 0.07964256;
        } else {
            var19 = 0.10019074;
        }
    }
    double var20;
    if (input[1] < 1.997446) {
        if (input[0] < -0.127086) {
            var20 = -0.0018917195;
        } else {
            var20 = 0.08893446;
        }
    } else {
        if (input[1] < 2.085463) {
            var20 = 0.057078272;
        } else {
            var20 = 0.09391422;
        }
    }
    double var21;
    if (input[1] < 1.997446) {
        if (input[0] < -0.127086) {
            var21 = -0.0017003895;
        } else {
            var21 = 0.08762396;
        }
    } else {
        if (input[1] < 2.085463) {
            var21 = 0.05444264;
        } else {
            var21 = 0.09294798;
        }
    }
    double var22;
    if (input[1] < 2.085463) {
        if (input[0] < -0.12005) {
            var22 = -0.00026530513;
        } else {
            var22 = 0.086357296;
        }
    } else {
        if (input[1] < 2.748135) {
            var22 = 0.08113446;
        } else {
            var22 = 0.098756984;
        }
    }
    double var23;
    if (input[1] < 2.085463) {
        if (input[2] < 10.339748) {
            var23 = -0.007804118;
        } else {
            var23 = 0.06997975;
        }
    } else {
        if (input[1] < 2.748135) {
            var23 = 0.07933333;
        } else {
            var23 = 0.09828835;
        }
    }
    double var24;
    if (input[0] < -0.248932) {
        if (input[2] < 10.339748) {
            var24 = -0.012974845;
        } else {
            var24 = 0.068807945;
        }
    } else {
        if (input[0] < 0.297431) {
            var24 = 0.06875204;
        } else {
            var24 = 0.098626874;
        }
    }
    double var25;
    if (input[1] < 2.085463) {
        if (input[2] < 9.135503) {
            var25 = 0.06741517;
        } else {
            var25 = -0.011814386;
        }
    } else {
        if (input[1] < 2.748135) {
            var25 = 0.07622989;
        } else {
            var25 = 0.097551234;
        }
    }
    double var26;
    if (input[0] < -0.23546) {
        if (input[2] < 10.339748) {
            var26 = -0.014768975;
        } else {
            var26 = 0.06600393;
        }
    } else {
        if (input[0] < 0.297431) {
            var26 = 0.06469858;
        } else {
            var26 = 0.09804841;
        }
    }
    double var27;
    if (input[1] < 2.085463) {
        if (input[2] < 9.103769) {
            var27 = 0.06461133;
        } else {
            var27 = -0.013645372;
        }
    } else {
        if (input[1] < 2.748135) {
            var27 = 0.07299887;
        } else {
            var27 = 0.096796155;
        }
    }
    double var28;
    if (input[1] < 2.085463) {
        if (input[2] < 10.339748) {
            var28 = -0.014016025;
        } else {
            var28 = 0.06190445;
        }
    } else {
        if (input[1] < 2.748135) {
            var28 = 0.07085292;
        } else {
            var28 = 0.09624964;
        }
    }
    double var29;
    if (input[2] < 9.135503) {
        if (input[3] < 0.037938) {
            var29 = 0.051572453;
        } else {
            var29 = 0.09085189;
        }
    } else {
        if (input[2] < 9.985435) {
            var29 = -0.07648142;
        } else {
            var29 = 0.05957526;
        }
    }
    double var30;
    if (input[0] < -0.060774) {
        if (input[1] < 1.226549) {
            var30 = -0.049304977;
        } else {
            var30 = 0.031747952;
        }
    } else {
        if (input[5] < 0.577192) {
            var30 = 0.086597815;
        } else {
            var30 = -0.03842977;
        }
    }
    double var31;
    if (input[1] < 2.085463) {
        if (input[0] < 0.274529) {
            var31 = -0.006313453;
        } else {
            var31 = 0.09523132;
        }
    } else {
        if (input[1] < 2.748135) {
            var31 = 0.065208234;
        } else {
            var31 = 0.095045865;
        }
    }
    double var32;
    if (input[2] < 8.975186) {
        if (input[3] < 0.037938) {
            var32 = 0.048239212;
        } else {
            var32 = 0.09050413;
        }
    } else {
        if (input[2] < 9.985435) {
            var32 = -0.060754776;
        } else {
            var32 = 0.054980945;
        }
    }
    double var33;
    if (input[2] < 9.332343) {
        if (input[3] < 0.037938) {
            var33 = 0.03922862;
        } else {
            var33 = 0.08302974;
        }
    } else {
        if (input[2] < 9.985435) {
            var33 = -0.07486354;
        } else {
            var33 = 0.05212275;
        }
    }
    double var34;
    if (input[0] < -0.060774) {
        if (input[1] < 1.226549) {
            var34 = -0.044990826;
        } else {
            var34 = 0.026298627;
        }
    } else {
        if (input[0] < 0.409848) {
            var34 = 0.05923487;
        } else {
            var34 = 0.09887218;
        }
    }
    double var35;
    if (input[1] < 2.085463) {
        if (input[0] < 0.274529) {
            var35 = -0.00798351;
        } else {
            var35 = 0.09337451;
        }
    } else {
        if (input[1] < 2.748135) {
            var35 = 0.05771448;
        } else {
            var35 = 0.093475066;
        }
    }
    double var36;
    if (input[1] < 2.085463) {
        if (input[2] < 10.339748) {
            var36 = -0.016317597;
        } else {
            var36 = 0.04960319;
        }
    } else {
        if (input[1] < 2.748135) {
            var36 = 0.055206623;
        } else {
            var36 = 0.09271881;
        }
    }
    double var37;
    if (input[2] < 9.332343) {
        if (input[3] < 0.037938) {
            var37 = 0.03279036;
        } else {
            var37 = 0.07966741;
        }
    } else {
        if (input[2] < 10.339748) {
            var37 = -0.054602362;
        } else {
            var37 = 0.056240797;
        }
    }
    double var38;
    if (input[1] < 1.281635) {
        if (input[5] < -0.034233) {
            var38 = 0.03215987;
        } else {
            var38 = -0.061915834;
        }
    } else {
        if (input[2] < 10.244696) {
            var38 = 0.020167869;
        } else {
            var38 = 0.08342802;
        }
    }
    double var39;
    if (input[0] < -0.060774) {
        if (input[0] < -0.767604) {
            var39 = 0.039340854;
        } else {
            var39 = -0.024071565;
        }
    } else {
        if (input[0] < 0.409848) {
            var39 = 0.049967088;
        } else {
            var39 = 0.09817238;
        }
    }
    double var40;
    if (input[2] < 8.975186) {
        if (input[0] < -0.744252) {
            var40 = 0.003479095;
        } else {
            var40 = 0.06915521;
        }
    } else {
        if (input[2] < 10.339748) {
            var40 = -0.037853044;
        } else {
            var40 = 0.051034003;
        }
    }
    double var41;
    if (input[2] < 9.332343) {
        if (input[3] < 0.037938) {
            var41 = 0.026119057;
        } else {
            var41 = 0.07583701;
        }
    } else {
        if (input[2] < 9.985435) {
            var41 = -0.051543664;
        } else {
            var41 = 0.03856774;
        }
    }
    double var42;
    if (input[1] < 2.085463) {
        if (input[0] < 0.274529) {
            var42 = -0.009737088;
        } else {
            var42 = 0.09088406;
        }
    } else {
        if (input[1] < 2.828219) {
            var42 = 0.046785623;
        } else {
            var42 = 0.092293374;
        }
    }
    double var43;
    if (input[1] < 1.281635) {
        if (input[0] < -0.654439) {
            var43 = 0.02279642;
        } else {
            var43 = -0.06490188;
        }
    } else {
        if (input[2] < 10.41609) {
            var43 = 0.016849715;
        } else {
            var43 = 0.0816273;
        }
    }
    double var44;
    if (input[0] < 0.297431) {
        if (input[2] < 9.332343) {
            var44 = 0.038101774;
        } else {
            var44 = -0.017307425;
        }
    } else {
        if (input[3] < 0.530858) {
            var44 = 0.09507861;
        } else {
            var44 = 0.00046308408;
        }
    }
    double var45;
    if (input[0] < 0.297431) {
        if (input[0] < -0.780477) {
            var45 = 0.036321253;
        } else {
            var45 = -0.017103957;
        }
    } else {
        if (input[3] < 0.530858) {
            var45 = 0.094510145;
        } else {
            var45 = 0.00043990478;
        }
    }
    double var46;
    if (input[1] < 2.19758) {
        if (input[0] < 0.274529) {
            var46 = -0.008981743;
        } else {
            var46 = 0.08860312;
        }
    } else {
        if (input[1] < 2.828219) {
            var46 = 0.043101877;
        } else {
            var46 = 0.09093924;
        }
    }
    double var47;
    if (input[2] < 8.902737) {
        if (input[0] < -0.744252) {
            var47 = -0.017347693;
        } else {
            var47 = 0.064114824;
        }
    } else {
        if (input[0] < -0.654439) {
            var47 = 0.028058046;
        } else {
            var47 = -0.043945767;
        }
    }
    double var48;
    if (input[1] < 2.19758) {
        if (input[0] < 0.409848) {
            var48 = -0.008233077;
        } else {
            var48 = 0.09549539;
        }
    } else {
        if (input[1] < 2.828219) {
            var48 = 0.03972009;
        } else {
            var48 = 0.08997788;
        }
    }
    double var49;
    if (input[2] < 8.902737) {
        if (input[0] < -0.744252) {
            var49 = -0.015039724;
        } else {
            var49 = 0.06085379;
        }
    } else {
        if (input[2] < 10.339748) {
            var49 = -0.029142154;
        } else {
            var49 = 0.043280136;
        }
    }
    double var50;
    if (input[1] < 0.648452) {
        if (input[1] < 0.49532) {
            var50 = 0.008636855;
        } else {
            var50 = -0.19311711;
        }
    } else {
        if (input[2] < 10.448273) {
            var50 = 0.0012596148;
        } else {
            var50 = 0.063016;
        }
    }
    double var51;
    if (input[0] < 0.297431) {
        if (input[0] < -0.654439) {
            var51 = 0.023564493;
        } else {
            var51 = -0.023906138;
        }
    } else {
        if (input[3] < 0.484193) {
            var51 = 0.09252038;
        } else {
            var51 = 0.0007022561;
        }
    }
    double var52;
    if (input[1] < 2.748135) {
        if (input[4] < 0.047458) {
            var52 = -0.017898984;
        } else {
            var52 = 0.027181411;
        }
    } else {
        if (input[3] < 0.33106) {
            var52 = 0.0924883;
        } else {
            var52 = 0.012974486;
        }
    }
    double var53;
    if (input[5] < -0.034233) {
        if (input[0] < -0.185464) {
            var53 = 0.018158242;
        } else {
            var53 = 0.089763835;
        }
    } else {
        if (input[5] < 0.036372) {
            var53 = -0.077775925;
        } else {
            var53 = 0.015676174;
        }
    }
    double var54;
    if (input[2] < 8.902737) {
        if (input[3] < 0.037938) {
            var54 = 0.015711768;
        } else {
            var54 = 0.07816083;
        }
    } else {
        if (input[0] < -0.672851) {
            var54 = 0.027081927;
        } else {
            var54 = -0.037447866;
        }
    }
    double var55;
    if (input[0] < 0.409848) {
        if (input[1] < 2.748135) {
            var55 = -0.0065161693;
        } else {
            var55 = 0.083231226;
        }
    } else {
        var55 = 0.09541726;
    }
    double var56;
    if (input[0] < 0.409848) {
        if (input[0] < -0.780477) {
            var56 = 0.029441223;
        } else {
            var56 = -0.014797838;
        }
    } else {
        var56 = 0.094922446;
    }
    double var57;
    if (input[1] < 1.226549) {
        if (input[3] < 0.037938) {
            var57 = -0.056140758;
        } else {
            var57 = 0.024278058;
        }
    } else {
        if (input[2] < 10.244696) {
            var57 = 0.005897858;
        } else {
            var57 = 0.07200824;
        }
    }
    double var58;
    if (input[5] < -0.034233) {
        if (input[0] < -0.185464) {
            var58 = 0.01630325;
        } else {
            var58 = 0.088027015;
        }
    } else {
        if (input[5] < 0.036372) {
            var58 = -0.06525522;
        } else {
            var58 = 0.013055051;
        }
    }
    double var59;
    if (input[1] < 2.748135) {
        if (input[0] < 0.409848) {
            var59 = -0.0057994956;
        } else {
            var59 = 0.09360875;
        }
    } else {
        if (input[3] < 0.33106) {
            var59 = 0.090441056;
        } else {
            var59 = 0.0022572626;
        }
    }
    double var60;
    if (input[2] < 8.902737) {
        if (input[0] < -0.744252) {
            var60 = -0.02159651;
        } else {
            var60 = 0.055020165;
        }
    } else {
        if (input[0] < -0.654439) {
            var60 = 0.022776557;
        } else {
            var60 = -0.036687773;
        }
    }
    double var61;
    if (input[2] < 10.41609) {
        if (input[0] < -0.822989) {
            var61 = 0.04421183;
        } else {
            var61 = -0.023885544;
        }
    } else {
        if (input[0] < -1.668131) {
            var61 = -0.16476291;
        } else {
            var61 = 0.05081218;
        }
    }
    double var62;
    if (input[1] < 2.748135) {
        if (input[4] < 0.029261) {
            var62 = -0.016688962;
        } else {
            var62 = 0.020859508;
        }
    } else {
        if (input[5] < 0.183788) {
            var62 = 0.09427016;
        } else {
            var62 = 0.02057408;
        }
    }
    double var63;
    if (input[2] < 9.332343) {
        if (input[3] < 0.037938) {
            var63 = 0.006733009;
        } else {
            var63 = 0.06355707;
        }
    } else {
        if (input[2] < 9.929751) {
            var63 = -0.035166334;
        } else {
            var63 = 0.0231985;
        }
    }
    double var64;
    if (input[3] < -0.049378) {
        if (input[2] < 9.985435) {
            var64 = 0.00928372;
        } else {
            var64 = 0.06915892;
        }
    } else {
        if (input[3] < 0.023134) {
            var64 = -0.073967956;
        } else {
            var64 = 0.016290512;
        }
    }
    double var65;
    if (input[0] < 0.409848) {
        if (input[1] < 0.648452) {
            var65 = -0.05034041;
        } else {
            var65 = 0.0054805945;
        }
    } else {
        var65 = 0.09346824;
    }
    double var66;
    if (input[0] < 0.409848) {
        if (input[0] < -0.654439) {
            var66 = 0.017062532;
        } else {
            var66 = -0.017291805;
        }
    } else {
        var66 = 0.0928308;
    }
    double var67;
    if (input[5] < -0.034233) {
        if (input[0] < -0.185464) {
            var67 = 0.013949755;
        } else {
            var67 = 0.0854935;
        }
    } else {
        if (input[5] < 0.052508) {
            var67 = -0.04850491;
        } else {
            var67 = 0.012827083;
        }
    }
    double var68;
    if (input[1] < 2.828219) {
        if (input[2] < 7.988288) {
            var68 = 0.042031065;
        } else {
            var68 = -0.008309923;
        }
    } else {
        if (input[3] < 0.33106) {
            var68 = 0.09368535;
        } else {
            var68 = -0.013800423;
        }
    }
    double var69;
    if (input[0] < -1.668131) {
        if (input[1] < 1.08659) {
            var69 = -0.16892457;
        } else {
            var69 = 0.03571264;
        }
    } else {
        if (input[2] < 10.627001) {
            var69 = -0.0065120505;
        } else {
            var69 = 0.04909394;
        }
    }
    double var70;
    if (input[3] < -0.046814) {
        if (input[2] < 9.985435) {
            var70 = 0.0069611156;
        } else {
            var70 = 0.066070005;
        }
    } else {
        if (input[3] < 0.023134) {
            var70 = -0.061596084;
        } else {
            var70 = 0.014082747;
        }
    }
    double var71;
    if (input[2] < 8.902737) {
        if (input[0] < -1.270258) {
            var71 = -0.1265862;
        } else {
            var71 = 0.039334044;
        }
    } else {
        if (input[0] < -0.654439) {
            var71 = 0.020111058;
        } else {
            var71 = -0.031971663;
        }
    }
    double var72;
    if (input[0] < 0.409848) {
        if (input[1] < 2.828219) {
            var72 = -0.00487986;
        } else {
            var72 = 0.079684876;
        }
    } else {
        var72 = 0.09183917;
    }
    double var73;
    if (input[0] < 0.409848) {
        if (input[1] < 0.648452) {
            var73 = -0.03995745;
        } else {
            var73 = 0.0045868526;
        }
    } else {
        var73 = 0.091089405;
    }
    double var74;
    if (input[1] < 3.098407) {
        if (input[2] < 7.545509) {
            var74 = 0.049411103;
        } else {
            var74 = -0.005986714;
        }
    } else {
        var74 = 0.09097933;
    }
    double var75;
    if (input[2] < 10.339748) {
        if (input[0] < -0.822989) {
            var75 = 0.04078053;
        } else {
            var75 = -0.020846214;
        }
    } else {
        if (input[0] < -1.668131) {
            var75 = -0.10690323;
        } else {
            var75 = 0.04243891;
        }
    }
    double var76;
    if (input[5] < -0.034233) {
        if (input[3] < -0.971784) {
            var76 = -0.15830542;
        } else {
            var76 = 0.023404991;
        }
    } else {
        if (input[5] < 0.052508) {
            var76 = -0.039271556;
        } else {
            var76 = 0.0103530735;
        }
    }
    double var77;
    if (input[0] < 0.409848) {
        if (input[0] < -0.654439) {
            var77 = 0.014560203;
        } else {
            var77 = -0.014693958;
        }
    } else {
        var77 = 0.0902346;
    }
    double var78;
    if (input[1] < 3.098407) {
        if (input[2] < 7.545509) {
            var78 = 0.047887906;
        } else {
            var78 = -0.0057639447;
        }
    } else {
        var78 = 0.09017547;
    }
    double var79;
    if (input[3] < -0.046814) {
        if (input[2] < 9.985435) {
            var79 = 0.0048627853;
        } else {
            var79 = 0.06277206;
        }
    } else {
        if (input[3] < 0.023134) {
            var79 = -0.050268423;
        } else {
            var79 = 0.01204029;
        }
    }
    double var80;
    if (input[2] < 9.332343) {
        if (input[3] < 0.037938) {
            var80 = 0.0035992663;
        } else {
            var80 = 0.05562186;
        }
    } else {
        if (input[0] < -0.734223) {
            var80 = 0.023416398;
        } else {
            var80 = -0.023696741;
        }
    }
    double var81;
    if (input[0] < 0.409848) {
        if (input[1] < 3.098407) {
            var81 = -0.0035322986;
        } else {
            var81 = 0.08881998;
        }
    } else {
        var81 = 0.0893316;
    }
    double var82;
    if (input[4] < 0.029261) {
        if (input[4] < -0.045858) {
            var82 = 0.013498761;
        } else {
            var82 = -0.043617442;
        }
    } else {
        if (input[2] < 9.929751) {
            var82 = 0.0027402795;
        } else {
            var82 = 0.04951134;
        }
    }
    double var83;
    if (input[0] < 0.409848) {
        if (input[1] < 0.648452) {
            var83 = -0.032948773;
        } else {
            var83 = 0.0039793695;
        }
    } else {
        var83 = 0.088343635;
    }
    double var84;
    if (input[2] < 10.41609) {
        if (input[0] < -0.822989) {
            var84 = 0.036554366;
        } else {
            var84 = -0.01767964;
        }
    } else {
        if (input[3] < 0.054683) {
            var84 = -0.007965915;
        } else {
            var84 = 0.074420884;
        }
    }
    double var85;
    if (input[2] < 7.988288) {
        if (input[0] < -0.744252) {
            var85 = -0.12599479;
        } else {
            var85 = 0.062813014;
        }
    } else {
        if (input[0] < -0.654439) {
            var85 = 0.015812729;
        } else {
            var85 = -0.021049745;
        }
    }
    double var86;
    if (input[0] < -1.668131) {
        if (input[1] < 1.41381) {
            var86 = -0.11302266;
        } else {
            var86 = 0.06850587;
        }
    } else {
        if (input[2] < 10.627001) {
            var86 = -0.0051049204;
        } else {
            var86 = 0.04169112;
        }
    }
    double var87;
    if (input[1] < 3.098407) {
        if (input[3] < -0.046814) {
            var87 = 0.01656279;
        } else {
            var87 = -0.010650031;
        }
    } else {
        var87 = 0.08814651;
    }
    double var88;
    if (input[5] < -0.023238) {
        if (input[3] < -0.971784) {
            var88 = -0.14221899;
        } else {
            var88 = 0.019327393;
        }
    } else {
        if (input[1] < 1.15425) {
            var88 = -0.036807097;
        } else {
            var88 = 0.0069768834;
        }
    }
    double var89;
    if (input[0] < 0.409848) {
        if (input[1] < 3.098407) {
            var89 = -0.0030281523;
        } else {
            var89 = 0.08659471;
        }
    } else {
        var89 = 0.08740669;
    }
    double var90;
    if (input[2] < 9.332343) {
        if (input[3] < 0.037938) {
            var90 = 0.0017326504;
        } else {
            var90 = 0.05249045;
        }
    } else {
        if (input[0] < -0.654439) {
            var90 = 0.014120005;
        } else {
            var90 = -0.024008093;
        }
    }
    double var91;
    if (input[0] < 0.409848) {
        if (input[4] < 0.029261) {
            var91 = -0.010132119;
        } else {
            var91 = 0.014258082;
        }
    } else {
        var91 = 0.08649565;
    }
    double var92;
    if (input[3] < -0.046814) {
        if (input[2] < 9.985435) {
            var92 = 0.0034129599;
        } else {
            var92 = 0.058670856;
        }
    } else {
        if (input[3] < 0.023134) {
            var92 = -0.037025288;
        } else {
            var92 = 0.008746739;
        }
    }
    double var93;
    if (input[2] < 7.545509) {
        if (input[0] < -0.75488) {
            var93 = -0.13558714;
        } else {
            var93 = 0.06706931;
        }
    } else {
        if (input[0] < -0.767604) {
            var93 = 0.018809756;
        } else {
            var93 = -0.011783476;
        }
    }
    double var94;
    if (input[0] < -1.668131) {
        if (input[3] < 0.048784) {
            var94 = -0.11458842;
        } else {
            var94 = 0.025349606;
        }
    } else {
        if (input[2] < 10.627001) {
            var94 = -0.0047641834;
        } else {
            var94 = 0.03917433;
        }
    }
    double var95;
    if (input[1] < 3.098407) {
        if (input[0] < 0.409848) {
            var95 = -0.0026821652;
        } else {
            var95 = 0.08484042;
        }
    } else {
        var95 = 0.085889325;
    }
    double var96;
    if (input[1] < 3.098407) {
        if (input[5] < -0.023238) {
            var96 = 0.013186297;
        } else {
            var96 = -0.009607098;
        }
    } else {
        var96 = 0.08479222;
    }
    double var97;
    if (input[2] < 8.902737) {
        if (input[0] < -0.744252) {
            var97 = -0.03371831;
        } else {
            var97 = 0.04183982;
        }
    } else {
        if (input[0] < -0.654439) {
            var97 = 0.013947948;
        } else {
            var97 = -0.020276753;
        }
    }
    double var98;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var98 = 0.05039185;
        } else {
            var98 = -0.0058507547;
        }
    } else {
        if (input[1] < -0.11062) {
            var98 = -0.15893035;
        } else {
            var98 = 0.07690113;
        }
    }
    double var99;
    if (input[0] < 0.409848) {
        if (input[1] < 0.648452) {
            var99 = -0.02684999;
        } else {
            var99 = 0.0034219304;
        }
    } else {
        var99 = 0.084195025;
    }
    double var100;
    if (input[3] < -0.046814) {
        if (input[1] < 0.972528) {
            var100 = 0.055732448;
        } else {
            var100 = 0.0031589598;
        }
    } else {
        if (input[3] < 0.023134) {
            var100 = -0.03136398;
        } else {
            var100 = 0.0073969336;
        }
    }
    double var101;
    if (input[3] < -0.842268) {
        if (input[5] < -0.344556) {
            var101 = 0.054522056;
        } else {
            var101 = -0.13708752;
        }
    } else {
        if (input[3] < -0.098312) {
            var101 = 0.021790665;
        } else {
            var101 = -0.005453473;
        }
    }
    double var102;
    if (input[1] < 3.098407) {
        if (input[2] < 12.34438) {
            var102 = -0.0036498557;
        } else {
            var102 = 0.040607035;
        }
    } else {
        var102 = 0.083608985;
    }
    double var103;
    if (input[0] < -1.668131) {
        if (input[1] < 1.41381) {
            var103 = -0.0847316;
        } else {
            var103 = 0.066683285;
        }
    } else {
        if (input[2] < 10.627001) {
            var103 = -0.0038793923;
        } else {
            var103 = 0.03498599;
        }
    }
    double var104;
    if (input[2] < 9.48757) {
        if (input[3] < 0.040001) {
            var104 = -0.00078481063;
        } else {
            var104 = 0.04480047;
        }
    } else {
        if (input[4] < -0.405461) {
            var104 = -0.07450472;
        } else {
            var104 = -0.00254446;
        }
    }
    double var105;
    if (input[0] < 0.409848) {
        if (input[2] < 7.545509) {
            var105 = 0.0364793;
        } else {
            var105 = -0.0036277862;
        }
    } else {
        var105 = 0.08275723;
    }
    double var106;
    if (input[1] < 3.098407) {
        if (input[4] < 0.021471) {
            var106 = -0.008697134;
        } else {
            var106 = 0.0115220165;
        }
    } else {
        var106 = 0.0822432;
    }
    double var107;
    if (input[0] < 0.409848) {
        if (input[1] < 0.648452) {
            var107 = -0.023850836;
        } else {
            var107 = 0.0031705068;
        }
    } else {
        var107 = 0.08150192;
    }
    double var108;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var108 = 0.050324287;
        } else {
            var108 = -0.005426288;
        }
    } else {
        if (input[1] < -0.11062) {
            var108 = -0.12741177;
        } else {
            var108 = 0.07344715;
        }
    }
    double var109;
    if (input[2] < 9.635313) {
        if (input[4] < 0.019679) {
            var109 = -0.0025101681;
        } else {
            var109 = 0.03379811;
        }
    } else {
        if (input[2] < 9.853859) {
            var109 = -0.032397263;
        } else {
            var109 = 0.010016285;
        }
    }
    double var110;
    if (input[5] < -0.023238) {
        if (input[0] < -0.185464) {
            var110 = 0.0059738443;
        } else {
            var110 = 0.07234392;
        }
    } else {
        if (input[3] < -0.088749) {
            var110 = 0.023720862;
        } else {
            var110 = -0.017780028;
        }
    }
    double var111;
    if (input[3] < -0.842268) {
        if (input[2] < 9.191337) {
            var111 = 0.05331854;
        } else {
            var111 = -0.11936414;
        }
    } else {
        if (input[3] < -0.032311) {
            var111 = 0.01509386;
        } else {
            var111 = -0.006124114;
        }
    }
    double var112;
    if (input[1] < 3.098407) {
        if (input[0] < -0.654439) {
            var112 = 0.010072017;
        } else {
            var112 = -0.009275752;
        }
    } else {
        var112 = 0.0807023;
    }
    double var113;
    if (input[0] < -1.668131) {
        if (input[3] < 0.008531) {
            var113 = -0.099095784;
        } else {
            var113 = 0.009174725;
        }
    } else {
        if (input[2] < 10.627001) {
            var113 = -0.0033388806;
        } else {
            var113 = 0.031607624;
        }
    }
    double var114;
    if (input[1] < 0.648452) {
        if (input[1] < 0.49532) {
            var114 = 0.017434133;
        } else {
            var114 = -0.09137285;
        }
    } else {
        if (input[1] < 0.972528) {
            var114 = 0.037089135;
        } else {
            var114 = -0.0013708131;
        }
    }
    double var115;
    if (input[0] < 0.409848) {
        if (input[0] < -0.654439) {
            var115 = 0.009453715;
        } else {
            var115 = -0.008717041;
        }
    } else {
        var115 = 0.07969236;
    }
    double var116;
    if (input[2] < 7.545509) {
        if (input[0] < -0.75488) {
            var116 = -0.117844105;
        } else {
            var116 = 0.061371487;
        }
    } else {
        if (input[0] < -0.767604) {
            var116 = 0.016575104;
        } else {
            var116 = -0.009837261;
        }
    }
    double var117;
    if (input[1] < 3.098407) {
        if (input[4] < -0.405461) {
            var117 = -0.03602619;
        } else {
            var117 = 0.0014247119;
        }
    } else {
        var117 = 0.07945366;
    }
    double var118;
    if (input[0] < -1.668131) {
        if (input[1] < 1.41381) {
            var118 = -0.06868754;
        } else {
            var118 = 0.06470488;
        }
    } else {
        if (input[2] < 12.34438) {
            var118 = -0.0007304906;
        } else {
            var118 = 0.056047887;
        }
    }
    double var119;
    if (input[5] < 0.457916) {
        if (input[3] < -0.755599) {
            var119 = -0.09221573;
        } else {
            var119 = -0.00016189033;
        }
    } else {
        if (input[0] < -0.566123) {
            var119 = 0.07980793;
        } else {
            var119 = -0.050401803;
        }
    }
    double var120;
    if (input[5] < -0.057486) {
        if (input[0] < -0.185464) {
            var120 = 0.0059662373;
        } else {
            var120 = 0.08294783;
        }
    } else {
        if (input[4] < -0.045858) {
            var120 = 0.01765409;
        } else {
            var120 = -0.01766457;
        }
    }
    double var121;
    if (input[0] < 0.409848) {
        if (input[1] < 3.098407) {
            var121 = -0.0016535892;
        } else {
            var121 = 0.07752307;
        }
    } else {
        var121 = 0.07796453;
    }
    double var122;
    if (input[2] < 9.635313) {
        if (input[5] < 0.068929) {
            var122 = -0.0029106184;
        } else {
            var122 = 0.034287218;
        }
    } else {
        if (input[2] < 9.853859) {
            var122 = -0.027005805;
        } else {
            var122 = 0.008417742;
        }
    }
    double var123;
    if (input[5] < -0.023238) {
        if (input[2] < 9.853859) {
            var123 = -0.0011255579;
        } else {
            var123 = 0.03747424;
        }
    } else {
        if (input[1] < 1.15425) {
            var123 = -0.027002404;
        } else {
            var123 = 0.0066518458;
        }
    }
    double var124;
    if (input[5] < 0.429356) {
        if (input[3] < -0.755599) {
            var124 = -0.08248984;
        } else {
            var124 = -0.00032299783;
        }
    } else {
        if (input[0] < -0.566123) {
            var124 = 0.0712049;
        } else {
            var124 = -0.040496852;
        }
    }
    double var125;
    if (input[2] < 7.545509) {
        if (input[0] < -0.75488) {
            var125 = -0.10006994;
        } else {
            var125 = 0.058334894;
        }
    } else {
        if (input[0] < -0.654439) {
            var125 = 0.010402936;
        } else {
            var125 = -0.011626589;
        }
    }
    double var126;
    if (input[0] < 0.409848) {
        if (input[4] < -0.405461) {
            var126 = -0.032536767;
        } else {
            var126 = 0.0013841906;
        }
    } else {
        var126 = 0.07662326;
    }
    double var127;
    if (input[1] < 3.098407) {
        if (input[5] < -0.023238) {
            var127 = 0.009898226;
        } else {
            var127 = -0.0067698047;
        }
    } else {
        var127 = 0.07641303;
    }
    double var128;
    if (input[0] < -1.668131) {
        if (input[2] < 11.352393) {
            var128 = 0.018037496;
        } else {
            var128 = -0.080113;
        }
    } else {
        if (input[2] < 12.34438) {
            var128 = -0.000650086;
        } else {
            var128 = 0.053214706;
        }
    }
    double var129;
    if (input[5] < 0.429356) {
        if (input[3] < -0.755599) {
            var129 = -0.07204052;
        } else {
            var129 = -0.0003569979;
        }
    } else {
        if (input[0] < -0.663121) {
            var129 = 0.08408919;
        } else {
            var129 = -0.017582675;
        }
    }
    double var130;
    if (input[0] < 0.409848) {
        if (input[0] < 0.226479) {
            var130 = 0.0004595933;
        } else {
            var130 = -0.060142457;
        }
    } else {
        var130 = 0.0751865;
    }
    double var131;
    if (input[1] < 3.098407) {
        if (input[3] < -0.022122) {
            var131 = 0.009056258;
        } else {
            var131 = -0.0067688883;
        }
    } else {
        var131 = 0.075069316;
    }
    double var132;
    if (input[4] < 0.021471) {
        if (input[4] < -0.045858) {
            var132 = 0.010032352;
        } else {
            var132 = -0.028575007;
        }
    } else {
        if (input[5] < 0.268996) {
            var132 = 0.02011844;
        } else {
            var132 = -0.032157905;
        }
    }
    double var133;
    if (input[5] < 0.429356) {
        if (input[5] < 0.268996) {
            var133 = 0.0013861974;
        } else {
            var133 = -0.029682187;
        }
    } else {
        if (input[0] < -0.663121) {
            var133 = 0.081888594;
        } else {
            var133 = -0.014469688;
        }
    }
    double var134;
    if (input[2] < 7.988288) {
        if (input[0] < -1.075364) {
            var134 = -0.22801843;
        } else {
            var134 = 0.037268538;
        }
    } else {
        if (input[0] < -0.767604) {
            var134 = 0.016297711;
        } else {
            var134 = -0.009908321;
        }
    }
    double var135;
    if (input[4] < -0.405461) {
        if (input[2] < 9.459579) {
            var135 = 0.049061116;
        } else {
            var135 = -0.05919388;
        }
    } else {
        if (input[4] < -0.364996) {
            var135 = 0.07352796;
        } else {
            var135 = 0.0004898881;
        }
    }
    double var136;
    if (input[0] < 0.409848) {
        if (input[1] < 3.098407) {
            var136 = -0.0013505064;
        } else {
            var136 = 0.07316462;
        }
    } else {
        var136 = 0.073740356;
    }
    double var137;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var137 = 0.047872648;
        } else {
            var137 = -0.0046423017;
        }
    } else {
        if (input[1] < -0.11062) {
            var137 = -0.11066543;
        } else {
            var137 = 0.06817428;
        }
    }
    double var138;
    if (input[1] < 0.648452) {
        if (input[4] < -0.031946) {
            var138 = 0.047677528;
        } else {
            var138 = -0.05232271;
        }
    } else {
        if (input[1] < 0.991089) {
            var138 = 0.034793925;
        } else {
            var138 = -0.002242508;
        }
    }
    double var139;
    if (input[1] < 1.226549) {
        if (input[4] < -0.057413) {
            var139 = 0.028398756;
        } else {
            var139 = -0.025716767;
        }
    } else {
        if (input[0] < -0.822989) {
            var139 = 0.03690213;
        } else {
            var139 = -0.0028588122;
        }
    }
    double var140;
    if (input[4] < 0.021471) {
        if (input[4] < -0.045858) {
            var140 = 0.0072116577;
        } else {
            var140 = -0.023758106;
        }
    } else {
        if (input[4] < 0.178753) {
            var140 = 0.026930049;
        } else {
            var140 = -0.013959192;
        }
    }
    double var141;
    if (input[4] < -0.405461) {
        if (input[2] < 9.459579) {
            var141 = 0.04550792;
        } else {
            var141 = -0.05589642;
        }
    } else {
        if (input[4] < -0.364996) {
            var141 = 0.069902584;
        } else {
            var141 = 0.00072169385;
        }
    }
    double var142;
    if (input[3] < -0.488714) {
        if (input[2] < 9.75716) {
            var142 = -0.059521914;
        } else {
            var142 = 0.0227943;
        }
    } else {
        if (input[3] < -0.098312) {
            var142 = 0.023241788;
        } else {
            var142 = -0.0034348865;
        }
    }
    double var143;
    if (input[1] < 0.387694) {
        if (input[3] < 0.006736) {
            var143 = -0.03660679;
        } else {
            var143 = 0.08224908;
        }
    } else {
        if (input[1] < 0.648452) {
            var143 = -0.05432139;
        } else {
            var143 = 0.0028046106;
        }
    }
    double var144;
    if (input[5] < 0.429356) {
        if (input[3] < -0.755599) {
            var144 = -0.06203704;
        } else {
            var144 = -0.00031590607;
        }
    } else {
        if (input[0] < -0.549657) {
            var144 = 0.06237728;
        } else {
            var144 = -0.03201381;
        }
    }
    double var145;
    if (input[1] < 2.828219) {
        if (input[1] < 1.781895) {
            var145 = 0.0033207238;
        } else {
            var145 = -0.01355376;
        }
    } else {
        if (input[3] < 0.228922) {
            var145 = 0.08190549;
        } else {
            var145 = -0.04912127;
        }
    }
    double var146;
    if (input[0] < 0.409848) {
        if (input[0] < 0.196841) {
            var146 = 0.00059423107;
        } else {
            var146 = -0.04864639;
        }
    } else {
        var146 = 0.072247684;
    }
    double var147;
    if (input[2] < 7.545509) {
        if (input[0] < -0.75488) {
            var147 = -0.08651957;
        } else {
            var147 = 0.054545082;
        }
    } else {
        if (input[0] < -0.654439) {
            var147 = 0.008038963;
        } else {
            var147 = -0.00901334;
        }
    }
    double var148;
    if (input[0] < -1.668131) {
        if (input[1] < 1.41381) {
            var148 = -0.053098787;
        } else {
            var148 = 0.06089024;
        }
    } else {
        if (input[2] < 10.627001) {
            var148 = -0.0025318158;
        } else {
            var148 = 0.02557306;
        }
    }
    double var149;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var149 = 0.044776257;
        } else {
            var149 = -0.004232513;
        }
    } else {
        if (input[1] < -0.11062) {
            var149 = -0.09135857;
        } else {
            var149 = 0.065692924;
        }
    }
    double var150;
    if (input[2] < 9.635313) {
        if (input[5] < 0.068929) {
            var150 = -0.0030913602;
        } else {
            var150 = 0.03043049;
        }
    } else {
        if (input[1] < 1.226549) {
            var150 = -0.018581258;
        } else {
            var150 = 0.009190905;
        }
    }
    double var151;
    if (input[0] < 0.297431) {
        if (input[0] < 0.266446) {
            var151 = 0.00022671938;
        } else {
            var151 = -0.15041463;
        }
    } else {
        if (input[1] < 1.268612) {
            var151 = 0.001782859;
        } else {
            var151 = 0.076517515;
        }
    }
    double var152;
    if (input[1] < 3.098407) {
        if (input[4] < -0.405461) {
            var152 = -0.026970064;
        } else {
            var152 = 0.0012367145;
        }
    } else {
        var152 = 0.07088451;
    }
    double var153;
    if (input[5] < -0.057486) {
        if (input[5] < -0.111672) {
            var153 = -0.0009920748;
        } else {
            var153 = 0.053523;
        }
    } else {
        if (input[3] < -0.098312) {
            var153 = 0.017966263;
        } else {
            var153 = -0.011197506;
        }
    }
    double var154;
    if (input[4] < 0.047458) {
        if (input[0] < -0.420476) {
            var154 = 0.0026863967;
        } else {
            var154 = -0.030074507;
        }
    } else {
        if (input[3] < 0.125167) {
            var154 = 0.028582215;
        } else {
            var154 = -0.023003025;
        }
    }
    double var155;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var155 = 0.043129135;
        } else {
            var155 = -0.0040125297;
        }
    } else {
        if (input[3] < -0.00426) {
            var155 = -0.05293715;
        } else {
            var155 = 0.07638978;
        }
    }
    double var156;
    if (input[0] < 0.409848) {
        if (input[5] < -0.150028) {
            var156 = 0.012432953;
        } else {
            var156 = -0.0038617502;
        }
    } else {
        var156 = 0.06996447;
    }
    double var157;
    if (input[1] < 3.098407) {
        if (input[5] < 0.429356) {
            var157 = -0.0020793655;
        } else {
            var157 = 0.026544323;
        }
    } else {
        var157 = 0.069683515;
    }
    double var158;
    if (input[2] < 7.545509) {
        if (input[0] < -0.75488) {
            var158 = -0.074940115;
        } else {
            var158 = 0.05241278;
        }
    } else {
        if (input[3] < -0.488714) {
            var158 = -0.035252213;
        } else {
            var158 = 0.00086223515;
        }
    }
    double var159;
    if (input[4] < 0.178753) {
        if (input[4] < 0.098772) {
            var159 = -0.0025093462;
        } else {
            var159 = 0.053187728;
        }
    } else {
        if (input[3] < 0.125167) {
            var159 = 0.020068405;
        } else {
            var159 = -0.060424436;
        }
    }
    double var160;
    if (input[2] < 9.635313) {
        if (input[1] < 0.972528) {
            var160 = 0.043659624;
        } else {
            var160 = 0.0015124943;
        }
    } else {
        if (input[2] < 9.853859) {
            var160 = -0.020158747;
        } else {
            var160 = 0.006736836;
        }
    }
    double var161;
    if (input[1] < 0.732726) {
        if (input[4] < -0.031946) {
            var161 = 0.049254417;
        } else {
            var161 = -0.044920888;
        }
    } else {
        if (input[1] < 0.972528) {
            var161 = 0.042502925;
        } else {
            var161 = -0.0022157708;
        }
    }
    double var162;
    if (input[1] < 1.226549) {
        if (input[1] < 1.030906) {
            var162 = 0.0072798966;
        } else {
            var162 = -0.042413425;
        }
    } else {
        if (input[2] < 9.739796) {
            var162 = -0.0065028514;
        } else {
            var162 = 0.028599402;
        }
    }
    double var163;
    if (input[2] < 9.635313) {
        if (input[5] < 0.291002) {
            var163 = 0.0022280777;
        } else {
            var163 = 0.04877428;
        }
    } else {
        if (input[0] < -0.654439) {
            var163 = 0.010132493;
        } else {
            var163 = -0.016204527;
        }
    }
    double var164;
    if (input[0] < -1.668131) {
        if (input[3] < 0.008531) {
            var164 = -0.06827861;
        } else {
            var164 = 0.01197455;
        }
    } else {
        if (input[2] < 12.34438) {
            var164 = -0.00032647193;
        } else {
            var164 = 0.045066006;
        }
    }
    double var165;
    if (input[0] < 0.409848) {
        if (input[0] < 0.226479) {
            var165 = 0.00053319236;
        } else {
            var165 = -0.047546685;
        }
    } else {
        var165 = 0.068200044;
    }
    double var166;
    if (input[4] < -0.405461) {
        if (input[4] < -0.414999) {
            var166 = -0.010011233;
        } else {
            var166 = -0.15227416;
        }
    } else {
        if (input[4] < -0.364996) {
            var166 = 0.06694189;
        } else {
            var166 = 0.00049775187;
        }
    }
    double var167;
    if (input[1] < 3.098407) {
        if (input[1] < 1.781895) {
            var167 = 0.0033500951;
        } else {
            var167 = -0.011827251;
        }
    } else {
        var167 = 0.06806075;
    }
    double var168;
    if (input[1] < 1.15425) {
        if (input[1] < 1.030906) {
            var168 = 0.006485667;
        } else {
            var168 = -0.06253643;
        }
    } else {
        if (input[2] < 10.244696) {
            var168 = -0.0011372905;
        } else {
            var168 = 0.050511427;
        }
    }
    double var169;
    if (input[1] < 0.732726) {
        if (input[4] < -0.031946) {
            var169 = 0.045490462;
        } else {
            var169 = -0.041354343;
        }
    } else {
        if (input[1] < 0.972528) {
            var169 = 0.03828366;
        } else {
            var169 = -0.0015322346;
        }
    }
    double var170;
    if (input[2] < 7.988288) {
        if (input[0] < -1.075364) {
            var170 = -0.18592604;
        } else {
            var170 = 0.033274394;
        }
    } else {
        if (input[0] < -0.822989) {
            var170 = 0.01432391;
        } else {
            var170 = -0.006883198;
        }
    }
    double var171;
    if (input[0] < 0.297431) {
        if (input[0] < 0.266446) {
            var171 = 0.00022336589;
        } else {
            var171 = -0.12528408;
        }
    } else {
        if (input[1] < 1.268612) {
            var171 = -0.0013122169;
        } else {
            var171 = 0.07452834;
        }
    }
    double var172;
    if (input[4] < 0.021471) {
        if (input[0] < -0.376767) {
            var172 = 0.0011898378;
        } else {
            var172 = -0.031508602;
        }
    } else {
        if (input[5] < 0.268996) {
            var172 = 0.01774927;
        } else {
            var172 = -0.031434353;
        }
    }
    double var173;
    if (input[5] < 0.429356) {
        if (input[5] < 0.268996) {
            var173 = 0.0013372519;
        } else {
            var173 = -0.026322534;
        }
    } else {
        if (input[2] < 9.739796) {
            var173 = 0.06913849;
        } else {
            var173 = -0.019104665;
        }
    }
    double var174;
    if (input[3] < -0.47478) {
        if (input[2] < 9.75716) {
            var174 = -0.051570244;
        } else {
            var174 = 0.025017098;
        }
    } else {
        if (input[3] < -0.23171) {
            var174 = 0.03193537;
        } else {
            var174 = -0.0011734739;
        }
    }
    double var175;
    if (input[1] < 2.748135) {
        if (input[1] < 1.781895) {
            var175 = 0.0030808288;
        } else {
            var175 = -0.01261836;
        }
    } else {
        if (input[5] < 0.183788) {
            var175 = 0.08236604;
        } else {
            var175 = -0.061853465;
        }
    }
    double var176;
    if (input[1] < 1.15425) {
        if (input[3] < 0.037938) {
            var176 = -0.028092576;
        } else {
            var176 = 0.026109403;
        }
    } else {
        if (input[2] < 10.244696) {
            var176 = -0.00081106735;
        } else {
            var176 = 0.04797712;
        }
    }
    double var177;
    if (input[2] < 9.635313) {
        if (input[5] < 0.068929) {
            var177 = -0.0029993341;
        } else {
            var177 = 0.02823404;
        }
    } else {
        if (input[3] < 0.232739) {
            var177 = 0.0003849989;
        } else {
            var177 = -0.030566698;
        }
    }
    double var178;
    if (input[4] < 0.178753) {
        if (input[4] < 0.098772) {
            var178 = -0.002229145;
        } else {
            var178 = 0.049899172;
        }
    } else {
        if (input[3] < 0.125167) {
            var178 = 0.018305017;
        } else {
            var178 = -0.052924067;
        }
    }
    double var179;
    if (input[1] < 0.427212) {
        if (input[2] < 11.301798) {
            var179 = 0.0733125;
        } else {
            var179 = -0.05378815;
        }
    } else {
        if (input[1] < 0.648452) {
            var179 = -0.050585903;
        } else {
            var179 = 0.0023882396;
        }
    }
    double var180;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var180 = 0.038365044;
        } else {
            var180 = -0.0034675605;
        }
    } else {
        if (input[3] < -0.00426) {
            var180 = -0.048564922;
        } else {
            var180 = 0.07444724;
        }
    }
    double var181;
    if (input[5] < 0.429356) {
        if (input[4] < 0.582654) {
            var181 = -0.00025296697;
        } else {
            var181 = -0.059624523;
        }
    } else {
        if (input[0] < -0.663121) {
            var181 = 0.075281195;
        } else {
            var181 = -0.0131854685;
        }
    }
    double var182;
    if (input[4] < -0.405461) {
        if (input[2] < 9.459579) {
            var182 = 0.045199793;
        } else {
            var182 = -0.0459743;
        }
    } else {
        if (input[4] < -0.364996) {
            var182 = 0.06459843;
        } else {
            var182 = 0.00048631174;
        }
    }
    double var183;
    if (input[0] < 0.297431) {
        if (input[0] < 0.266446) {
            var183 = 0.00023971932;
        } else {
            var183 = -0.10723759;
        }
    } else {
        if (input[1] < 1.268612) {
            var183 = -0.0004625362;
        } else {
            var183 = 0.0731866;
        }
    }
    double var184;
    if (input[5] < -0.150028) {
        if (input[3] < 0.4665) {
            var184 = 0.004544498;
        } else {
            var184 = 0.098967;
        }
    } else {
        if (input[5] < -0.137497) {
            var184 = -0.16399388;
        } else {
            var184 = -0.00040310595;
        }
    }
    double var185;
    if (input[2] < 7.545509) {
        if (input[0] < -1.023422) {
            var185 = -0.13388778;
        } else {
            var185 = 0.03857467;
        }
    } else {
        if (input[3] < -0.47478) {
            var185 = -0.029997114;
        } else {
            var185 = 0.0007852311;
        }
    }
    double var186;
    if (input[1] < 3.098407) {
        if (input[1] < 1.781895) {
            var186 = 0.0030100576;
        } else {
            var186 = -0.010588399;
        }
    } else {
        var186 = 0.065151185;
    }
    double var187;
    if (input[0] < -1.668131) {
        if (input[2] < 10.147548) {
            var187 = 0.03906721;
        } else {
            var187 = -0.04842865;
        }
    } else {
        if (input[2] < 12.34438) {
            var187 = -0.00031479352;
        } else {
            var187 = 0.04153758;
        }
    }
    double var188;
    if (input[0] < 0.409848) {
        if (input[0] < -0.420476) {
            var188 = 0.002639981;
        } else {
            var188 = -0.011967685;
        }
    } else {
        var188 = 0.06492315;
    }
    double var189;
    if (input[5] < 0.429356) {
        if (input[5] < 0.339545) {
            var189 = 0.00042518202;
        } else {
            var189 = -0.03553434;
        }
    } else {
        if (input[0] < -0.549657) {
            var189 = 0.05604704;
        } else {
            var189 = -0.02986745;
        }
    }
    double var190;
    if (input[1] < 1.15425) {
        if (input[1] < 1.051114) {
            var190 = 0.0046790815;
        } else {
            var190 = -0.06085355;
        }
    } else {
        if (input[2] < 12.039464) {
            var190 = 0.0017636133;
        } else {
            var190 = 0.08764336;
        }
    }
    double var191;
    if (input[1] < 0.732726) {
        if (input[4] < -0.115564) {
            var191 = 0.056863546;
        } else {
            var191 = -0.03240691;
        }
    } else {
        if (input[1] < 0.972528) {
            var191 = 0.035315372;
        } else {
            var191 = -0.0014380111;
        }
    }
    double var192;
    if (input[1] < -0.696651) {
        var192 = -0.0625127;
    } else {
        if (input[1] < 0.387694) {
            var192 = 0.02612399;
        } else {
            var192 = -0.0012757903;
        }
    }
    double var193;
    if (input[2] < 9.635313) {
        if (input[0] < -0.55774) {
            var193 = -0.006058119;
        } else {
            var193 = 0.02285898;
        }
    } else {
        if (input[1] < 1.226549) {
            var193 = -0.015092881;
        } else {
            var193 = 0.007724564;
        }
    }
    double var194;
    if (input[4] < -0.405461) {
        if (input[0] < -0.959954) {
            var194 = 0.061997898;
        } else {
            var194 = -0.037517976;
        }
    } else {
        if (input[4] < -0.364996) {
            var194 = 0.061836578;
        } else {
            var194 = 0.0004706197;
        }
    }
    double var195;
    if (input[1] < 3.098407) {
        if (input[1] < 1.781895) {
            var195 = 0.0030104704;
        } else {
            var195 = -0.010188659;
        }
    } else {
        var195 = 0.06350412;
    }
    double var196;
    if (input[0] < 0.409848) {
        if (input[0] < -0.420476) {
            var196 = 0.0026458914;
        } else {
            var196 = -0.0115757715;
        }
    } else {
        var196 = 0.0632494;
    }
    double var197;
    if (input[2] < 13.353132) {
        if (input[1] < -0.696651) {
            var197 = -0.11719119;
        } else {
            var197 = 0.000089775705;
        }
    } else {
        if (input[5] < -0.004294) {
            var197 = -0.03826304;
        } else {
            var197 = 0.08544614;
        }
    }
    double var198;
    if (input[5] < -0.023238) {
        if (input[0] < -0.185464) {
            var198 = 0.0018263346;
        } else {
            var198 = 0.06597685;
        }
    } else {
        if (input[0] < -0.474064) {
            var198 = 0.0041255164;
        } else {
            var198 = -0.025113214;
        }
    }
    double var199;
    if (input[3] < 0.364596) {
        if (input[3] < 0.33106) {
            var199 = 0.0011566248;
        } else {
            var199 = -0.14026162;
        }
    } else {
        if (input[5] < -0.198736) {
            var199 = 0.090233706;
        } else {
            var199 = -0.0058856173;
        }
    }
    double var200;
    if (input[4] < 0.047458) {
        if (input[5] < -0.244624) {
            var200 = 0.029784486;
        } else {
            var200 = -0.007834874;
        }
    } else {
        if (input[1] < 1.030906) {
            var200 = 0.046275374;
        } else {
            var200 = -0.006095388;
        }
    }
    double var201;
    if (input[1] < 0.677491) {
        if (input[3] < 0.04441) {
            var201 = -0.037474412;
        } else {
            var201 = 0.035153847;
        }
    } else {
        if (input[1] < 1.030906) {
            var201 = 0.024927378;
        } else {
            var201 = -0.0016806979;
        }
    }
    double var202;
    if (input[1] < 1.15425) {
        if (input[3] < 0.037938) {
            var202 = -0.024206443;
        } else {
            var202 = 0.022284536;
        }
    } else {
        if (input[2] < 10.244696) {
            var202 = -0.00043584863;
        } else {
            var202 = 0.044944424;
        }
    }
    double var203;
    if (input[4] < 0.178753) {
        if (input[4] < 0.098772) {
            var203 = -0.0016358736;
        } else {
            var203 = 0.046076357;
        }
    } else {
        if (input[0] < -0.780477) {
            var203 = 0.044324305;
        } else {
            var203 = -0.03326599;
        }
    }
    double var204;
    if (input[3] < -0.022122) {
        if (input[5] < -0.647845) {
            var204 = -0.10694579;
        } else {
            var204 = 0.0102221025;
        }
    } else {
        if (input[5] < -0.004294) {
            var204 = 0.010074231;
        } else {
            var204 = -0.015534553;
        }
    }
    double var205;
    if (input[2] < 7.545509) {
        if (input[0] < -1.04348) {
            var205 = -0.1311609;
        } else {
            var205 = 0.03776295;
        }
    } else {
        if (input[2] < 7.738308) {
            var205 = -0.052760717;
        } else {
            var205 = -0.00019049583;
        }
    }
    double var206;
    if (input[2] < 9.635313) {
        if (input[5] < 0.068929) {
            var206 = -0.003919682;
        } else {
            var206 = 0.027354259;
        }
    } else {
        if (input[3] < 0.232739) {
            var206 = 0.000784372;
        } else {
            var206 = -0.028645147;
        }
    }
    double var207;
    if (input[1] < 0.427212) {
        if (input[2] < 11.301798) {
            var207 = 0.06976047;
        } else {
            var207 = -0.047062855;
        }
    } else {
        if (input[1] < 0.648452) {
            var207 = -0.042702876;
        } else {
            var207 = 0.0019640678;
        }
    }
    double var208;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var208 = 0.034930285;
        } else {
            var208 = -0.0031041277;
        }
    } else {
        if (input[3] < -0.00426) {
            var208 = -0.04204578;
        } else {
            var208 = 0.07246165;
        }
    }
    double var209;
    if (input[1] < 2.748135) {
        if (input[1] < 1.792522) {
            var209 = 0.0026018806;
        } else {
            var209 = -0.010658932;
        }
    } else {
        if (input[5] < 0.183788) {
            var209 = 0.08042177;
        } else {
            var209 = -0.057262715;
        }
    }
    double var210;
    if (input[5] < 0.429356) {
        if (input[3] < -0.755599) {
            var210 = -0.047953706;
        } else {
            var210 = -0.000123576;
        }
    } else {
        if (input[2] < 9.739796) {
            var210 = 0.06361749;
        } else {
            var210 = -0.018326793;
        }
    }
    double var211;
    if (input[2] < 7.988288) {
        if (input[0] < -0.744252) {
            var211 = -0.0692031;
        } else {
            var211 = 0.04293545;
        }
    } else {
        if (input[4] < 0.174985) {
            var211 = 0.0019404691;
        } else {
            var211 = -0.019252988;
        }
    }
    double var212;
    if (input[3] < -0.010935) {
        if (input[1] < -0.11062) {
            var212 = -0.08329379;
        } else {
            var212 = 0.008997059;
        }
    } else {
        if (input[3] < 0.001605) {
            var212 = -0.055791583;
        } else {
            var212 = 0.00055569474;
        }
    }
    double var213;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var213 = 0.033434734;
        } else {
            var213 = -0.0029588665;
        }
    } else {
        if (input[1] < -0.11062) {
            var213 = -0.059541345;
        } else {
            var213 = 0.057443958;
        }
    }
    double var214;
    if (input[4] < -0.386643) {
        if (input[5] < 0.106202) {
            var214 = 0.017784595;
        } else {
            var214 = -0.06908984;
        }
    } else {
        if (input[4] < -0.364996) {
            var214 = 0.08599671;
        } else {
            var214 = 0.00043932773;
        }
    }
    double var215;
    if (input[1] < 1.15425) {
        if (input[1] < 1.051114) {
            var215 = 0.003637683;
        } else {
            var215 = -0.050901473;
        }
    } else {
        if (input[0] < -0.822989) {
            var215 = 0.030305699;
        } else {
            var215 = -0.0031557798;
        }
    }
    double var216;
    if (input[0] < -1.075364) {
        if (input[3] < 0.023134) {
            var216 = -0.052974433;
        } else {
            var216 = 0.044565763;
        }
    } else {
        if (input[1] < 0.117805) {
            var216 = 0.067820534;
        } else {
            var216 = -0.00008070224;
        }
    }
    double var217;
    if (input[1] < 0.82733) {
        if (input[3] < -0.05214) {
            var217 = 0.057655323;
        } else {
            var217 = -0.032502044;
        }
    } else {
        if (input[1] < 0.972528) {
            var217 = 0.046535116;
        } else {
            var217 = -0.000980187;
        }
    }
    double var218;
    if (input[3] < -0.374838) {
        if (input[2] < 9.875564) {
            var218 = -0.040385053;
        } else {
            var218 = 0.049017105;
        }
    } else {
        if (input[3] < -0.23171) {
            var218 = 0.04173235;
        } else {
            var218 = -0.0010331031;
        }
    }
    double var219;
    if (input[0] < 0.409848) {
        if (input[0] < 0.196841) {
            var219 = 0.0006438565;
        } else {
            var219 = -0.036187667;
        }
    } else {
        var219 = 0.061360974;
    }
    double var220;
    if (input[1] < 2.19758) {
        if (input[1] < 1.792522) {
            var220 = 0.0024375208;
        } else {
            var220 = -0.014857088;
        }
    } else {
        if (input[1] < 2.334695) {
            var220 = 0.08255302;
        } else {
            var220 = 0.00067655416;
        }
    }
    double var221;
    if (input[1] < 1.15425) {
        if (input[3] < 0.037938) {
            var221 = -0.022170782;
        } else {
            var221 = 0.020976705;
        }
    } else {
        if (input[2] < 12.039464) {
            var221 = 0.0018919458;
        } else {
            var221 = 0.08532206;
        }
    }
    double var222;
    if (input[1] < 3.098407) {
        if (input[0] < -0.420476) {
            var222 = 0.0024060481;
        } else {
            var222 = -0.010153173;
        }
    } else {
        var222 = 0.061057657;
    }
    double var223;
    if (input[0] < -0.060774) {
        if (input[0] < -0.147144) {
            var223 = 0.00016869823;
        } else {
            var223 = -0.060147222;
        }
    } else {
        if (input[4] < -0.031946) {
            var223 = 0.075584486;
        } else {
            var223 = -0.02937756;
        }
    }
    double var224;
    if (input[4] < -0.386643) {
        if (input[5] < 0.106202) {
            var224 = 0.015870143;
        } else {
            var224 = -0.061446633;
        }
    } else {
        if (input[4] < -0.364996) {
            var224 = 0.08399706;
        } else {
            var224 = 0.00054292905;
        }
    }
    double var225;
    if (input[5] < 0.429356) {
        if (input[4] < 0.582654) {
            var225 = -0.00011680795;
        } else {
            var225 = -0.051609315;
        }
    } else {
        if (input[0] < -0.663121) {
            var225 = 0.070511445;
        } else {
            var225 = -0.010311329;
        }
    }
    double var226;
    if (input[2] < 7.988288) {
        if (input[0] < -1.075364) {
            var226 = -0.13497129;
        } else {
            var226 = 0.028907577;
        }
    } else {
        if (input[4] < 0.174985) {
            var226 = 0.0018631706;
        } else {
            var226 = -0.017883344;
        }
    }
    double var227;
    if (input[4] < 0.047458) {
        if (input[0] < -0.356708) {
            var227 = 0.0020938215;
        } else {
            var227 = -0.03066468;
        }
    } else {
        if (input[1] < 1.030906) {
            var227 = 0.042931955;
        } else {
            var227 = -0.004429853;
        }
    }
    double var228;
    if (input[1] < 1.15425) {
        if (input[4] < -0.286992) {
            var228 = 0.05111151;
        } else {
            var228 = -0.0134329;
        }
    } else {
        if (input[3] < 0.132269) {
            var228 = 0.012109335;
        } else {
            var228 = -0.01665399;
        }
    }
    double var229;
    if (input[0] < -0.060774) {
        if (input[0] < -0.147144) {
            var229 = -0.000029940938;
        } else {
            var229 = -0.049817;
        }
    } else {
        if (input[2] < 10.244696) {
            var229 = 0.048300218;
        } else {
            var229 = -0.06418716;
        }
    }
    double var230;
    if (input[4] < -0.386643) {
        if (input[1] < 1.255439) {
            var230 = 0.029023511;
        } else {
            var230 = -0.04328153;
        }
    } else {
        if (input[4] < -0.364996) {
            var230 = 0.08156469;
        } else {
            var230 = 0.0005940753;
        }
    }
    double var231;
    if (input[3] < 0.364596) {
        if (input[3] < 0.33106) {
            var231 = 0.0010210384;
        } else {
            var231 = -0.11529633;
        }
    } else {
        if (input[5] < -0.198736) {
            var231 = 0.08671615;
        } else {
            var231 = -0.004383638;
        }
    }
    double var232;
    if (input[3] < -0.488714) {
        if (input[2] < 9.8341) {
            var232 = -0.0393499;
        } else {
            var232 = 0.031642966;
        }
    } else {
        if (input[3] < -0.23171) {
            var232 = 0.026087558;
        } else {
            var232 = -0.0008496807;
        }
    }
    double var233;
    if (input[0] < 0.297431) {
        if (input[0] < 0.266446) {
            var233 = 0.00030409393;
        } else {
            var233 = -0.093488045;
        }
    } else {
        if (input[1] < 1.268612) {
            var233 = -0.005067403;
        } else {
            var233 = 0.069932885;
        }
    }
    double var234;
    if (input[2] < 12.34438) {
        if (input[2] < 12.039464) {
            var234 = 0.0001995252;
        } else {
            var234 = -0.057303876;
        }
    } else {
        if (input[3] < -0.00426) {
            var234 = -0.038709585;
        } else {
            var234 = 0.06987823;
        }
    }
    double var235;
    if (input[4] < 0.047458) {
        if (input[0] < -0.356708) {
            var235 = 0.0016305309;
        } else {
            var235 = -0.026731094;
        }
    } else {
        if (input[1] < 1.030906) {
            var235 = 0.040914357;
        } else {
            var235 = -0.0039475504;
        }
    }
    double var236;
    if (input[1] < 1.15425) {
        if (input[4] < -0.045858) {
            var236 = 0.021303615;
        } else {
            var236 = -0.020019054;
        }
    } else {
        if (input[0] < -0.573158) {
            var236 = -0.007047023;
        } else {
            var236 = 0.019433752;
        }
    }
    double var237;
    if (input[1] < 3.098407) {
        if (input[5] < -0.544548) {
            var237 = -0.030703653;
        } else {
            var237 = 0.00049437763;
        }
    } else {
        var237 = 0.059963115;
    }
    double var238;
    if (input[5] < 0.74319) {
        if (input[3] < -0.374838) {
            var238 = -0.020788664;
        } else {
            var238 = 0.0015202136;
        }
    } else {
        if (input[0] < -0.573158) {
            var238 = 0.06859199;
        } else {
            var238 = 0.005123295;
        }
    }
    double var239;
    if (input[0] < -0.060774) {
        if (input[5] < 0.539694) {
            var239 = -0.00239171;
        } else {
            var239 = 0.044674814;
        }
    } else {
        if (input[4] < -0.031946) {
            var239 = 0.07408507;
        } else {
            var239 = -0.02676089;
        }
    }
    double var240;
    if (input[4] < 0.019679) {
        if (input[3] < -0.044147) {
            var240 = 0.0119531425;
        } else {
            var240 = -0.011225899;
        }
    } else {
        if (input[5] < 0.268996) {
            var240 = 0.015204859;
        } else {
            var240 = -0.02814222;
        }
    }
    double var241;
    if (input[4] < -0.386643) {
        if (input[5] < 0.106202) {
            var241 = 0.014334643;
        } else {
            var241 = -0.055857874;
        }
    } else {
        if (input[4] < -0.364996) {
            var241 = 0.07958846;
        } else {
            var241 = 0.0006030914;
        }
    }
    double var242;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var242 = 0.081013225;
        } else {
            var242 = -0.006876588;
        }
    } else {
        if (input[4] < -0.472576) {
            var242 = -0.06814289;
        } else {
            var242 = 0.0009211258;
        }
    }
    double var243;
    if (input[3] < 0.356945) {
        if (input[3] < 0.33106) {
            var243 = 0.00087346183;
        } else {
            var243 = -0.112392;
        }
    } else {
        if (input[5] < -0.198736) {
            var243 = 0.08507324;
        } else {
            var243 = -0.0037643935;
        }
    }
    double var244;
    if (input[5] < 0.068929) {
        if (input[3] < 0.083168) {
            var244 = -0.016349107;
        } else {
            var244 = 0.027641326;
        }
    } else {
        if (input[3] < 0.10242) {
            var244 = 0.030603958;
        } else {
            var244 = -0.035761755;
        }
    }
    double var245;
    if (input[3] < -0.374838) {
        if (input[2] < 9.875564) {
            var245 = -0.0355029;
        } else {
            var245 = 0.045070972;
        }
    } else {
        if (input[3] < -0.23171) {
            var245 = 0.03612953;
        } else {
            var245 = -0.00062202616;
        }
    }
    double var246;
    if (input[2] < 9.635313) {
        if (input[3] < 0.041997) {
            var246 = -0.004884486;
        } else {
            var246 = 0.024755;
        }
    } else {
        if (input[1] < 1.226549) {
            var246 = -0.01368441;
        } else {
            var246 = 0.0074879313;
        }
    }
    double var247;
    if (input[3] < 0.866084) {
        if (input[1] < 2.828219) {
            var247 = -0.00024923796;
        } else {
            var247 = 0.059584238;
        }
    } else {
        var247 = -0.05256201;
    }
    double var248;
    if (input[2] < 12.34438) {
        if (input[1] < 0.387694) {
            var248 = 0.0301613;
        } else {
            var248 = -0.002696712;
        }
    } else {
        if (input[3] < -0.00426) {
            var248 = -0.035000797;
        } else {
            var248 = 0.06826532;
        }
    }
    double var249;
    if (input[0] < 0.409848) {
        if (input[0] < 0.196841) {
            var249 = 0.0006703425;
        } else {
            var249 = -0.034512244;
        }
    } else {
        var249 = 0.058250096;
    }
    double var250;
    if (input[1] < 0.648452) {
        if (input[0] < -0.507594) {
            var250 = -0.034836546;
        } else {
            var250 = 0.035129208;
        }
    } else {
        if (input[1] < 1.030906) {
            var250 = 0.02127892;
        } else {
            var250 = -0.0016465764;
        }
    }
    double var251;
    if (input[5] < -0.544548) {
        if (input[3] < 0.356945) {
            var251 = -0.04775813;
        } else {
            var251 = 0.0639994;
        }
    } else {
        if (input[4] < 0.047458) {
            var251 = -0.0028882574;
        } else {
            var251 = 0.009451791;
        }
    }
    double var252;
    if (input[4] < 0.174985) {
        if (input[4] < 0.105803) {
            var252 = -0.0012097798;
        } else {
            var252 = 0.045985017;
        }
    } else {
        if (input[0] < -0.780477) {
            var252 = 0.04210854;
        } else {
            var252 = -0.027741367;
        }
    }
    double var253;
    if (input[1] < 1.104852) {
        if (input[1] < 1.051114) {
            var253 = 0.0032454436;
        } else {
            var253 = -0.07913604;
        }
    } else {
        if (input[2] < 10.244696) {
            var253 = -0.0019457963;
        } else {
            var253 = 0.047262378;
        }
    }
    double var254;
    if (input[2] < 7.988288) {
        if (input[0] < -0.744252) {
            var254 = -0.058612622;
        } else {
            var254 = 0.039858025;
        }
    } else {
        if (input[0] < -0.822989) {
            var254 = 0.011470101;
        } else {
            var254 = -0.005196955;
        }
    }
    double var255;
    if (input[1] < 0.82733) {
        if (input[4] < -0.031946) {
            var255 = 0.046007145;
        } else {
            var255 = -0.03310645;
        }
    } else {
        if (input[1] < 0.972528) {
            var255 = 0.043142967;
        } else {
            var255 = -0.0008615474;
        }
    }
    double var256;
    if (input[0] < 0.297431) {
        if (input[0] < 0.266446) {
            var256 = 0.00035991313;
        } else {
            var256 = -0.08316641;
        }
    } else {
        if (input[1] < 1.268612) {
            var256 = -0.0062625348;
        } else {
            var256 = 0.067748524;
        }
    }
    double var257;
    if (input[1] < 3.098407) {
        if (input[1] < 1.792522) {
            var257 = 0.0024329256;
        } else {
            var257 = -0.0080847135;
        }
    } else {
        var257 = 0.05685852;
    }
    double var258;
    if (input[0] < -1.075364) {
        if (input[5] < 0.022623) {
            var258 = -0.0589498;
        } else {
            var258 = 0.030021295;
        }
    } else {
        if (input[1] < 0.056882) {
            var258 = 0.07070775;
        } else {
            var258 = 0.000044314347;
        }
    }
    double var259;
    if (input[1] < -0.696651) {
        if (input[0] < -0.912353) {
            var259 = -0.08890506;
        } else {
            var259 = 0.00951079;
        }
    } else {
        if (input[1] < 0.427212) {
            var259 = 0.020929914;
        } else {
            var259 = -0.0009993011;
        }
    }
    double var260;
    if (input[2] < 9.635313) {
        if (input[4] < 0.014251) {
            var260 = -0.004884904;
        } else {
            var260 = 0.022527967;
        }
    } else {
        if (input[0] < -0.474064) {
            var260 = 0.0019778009;
        } else {
            var260 = -0.02240332;
        }
    }
    double var261;
    if (input[3] < 0.866084) {
        if (input[0] < 0.297431) {
            var261 = -0.00024205772;
        } else {
            var261 = 0.05845828;
        }
    } else {
        if (input[0] < -0.780477) {
            var261 = 0.05729243;
        } else {
            var261 = -0.13329099;
        }
    }
    double var262;
    if (input[1] < 0.82733) {
        if (input[3] < -0.05214) {
            var262 = 0.053871986;
        } else {
            var262 = -0.028076028;
        }
    } else {
        if (input[1] < 0.972528) {
            var262 = 0.04008049;
        } else {
            var262 = -0.0006315587;
        }
    }
    double var263;
    if (input[2] < 12.34438) {
        if (input[2] < 12.039464) {
            var263 = 0.00022646906;
        } else {
            var263 = -0.05185167;
        }
    } else {
        if (input[3] < -0.00426) {
            var263 = -0.03169178;
        } else {
            var263 = 0.06680571;
        }
    }
    double var264;
    if (input[1] < 1.104852) {
        if (input[3] < 0.083168) {
            var264 = -0.021804886;
        } else {
            var264 = 0.033578943;
        }
    } else {
        if (input[0] < -0.822989) {
            var264 = 0.03191028;
        } else {
            var264 = -0.0042268424;
        }
    }
    double var265;
    if (input[4] < 0.174985) {
        if (input[4] < 0.105803) {
            var265 = -0.00089884736;
        } else {
            var265 = 0.04299905;
        }
    } else {
        if (input[3] < 0.125167) {
            var265 = 0.017072523;
        } else {
            var265 = -0.042843636;
        }
    }
    double var266;
    if (input[0] < -1.075364) {
        if (input[3] < 0.023134) {
            var266 = -0.04433318;
        } else {
            var266 = 0.040265024;
        }
    } else {
        if (input[1] < 0.056882) {
            var266 = 0.06823337;
        } else {
            var266 = 0.00019204359;
        }
    }
    double var267;
    if (input[1] < -0.696651) {
        if (input[3] < -0.008713) {
            var267 = -0.08607993;
        } else {
            var267 = 0.009100296;
        }
    } else {
        if (input[1] < 0.427212) {
            var267 = 0.020782877;
        } else {
            var267 = -0.0009816858;
        }
    }
    double var268;
    if (input[5] < -0.111672) {
        if (input[5] < -0.150028) {
            var268 = 0.005238461;
        } else {
            var268 = -0.07675198;
        }
    } else {
        if (input[5] < -0.074334) {
            var268 = 0.059248835;
        } else {
            var268 = -0.0006186828;
        }
    }
    double var269;
    if (input[1] < 2.19758) {
        if (input[5] < 0.629923) {
            var269 = -0.0018943184;
        } else {
            var269 = 0.049752425;
        }
    } else {
        if (input[1] < 2.334695) {
            var269 = 0.08140721;
        } else {
            var269 = -0.00068987365;
        }
    }
    double var270;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var270 = 0.07864988;
        } else {
            var270 = -0.007446131;
        }
    } else {
        if (input[4] < -0.544339) {
            var270 = -0.106445335;
        } else {
            var270 = 0.00040798433;
        }
    }
    double var271;
    if (input[2] < 7.569908) {
        if (input[0] < -1.075364) {
            var271 = -0.10268056;
        } else {
            var271 = 0.03144164;
        }
    } else {
        if (input[2] < 7.717052) {
            var271 = -0.071128525;
        } else {
            var271 = 0.0000919106;
        }
    }
    double var272;
    if (input[3] < 0.866084) {
        if (input[1] < 2.828219) {
            var272 = -0.00026713696;
        } else {
            var272 = 0.057332546;
        }
    } else {
        if (input[5] < 0.241773) {
            var272 = 0.017604552;
        } else {
            var272 = -0.091734014;
        }
    }
    double var273;
    if (input[3] < -0.889584) {
        if (input[5] < -0.309797) {
            var273 = 0.03333139;
        } else {
            var273 = -0.069588356;
        }
    } else {
        if (input[3] < -0.010935) {
            var273 = 0.0066342275;
        } else {
            var273 = -0.0037175391;
        }
    }
    double var274;
    if (input[3] < -0.374838) {
        if (input[2] < 8.799152) {
            var274 = 0.049783856;
        } else {
            var274 = -0.03074806;
        }
    } else {
        if (input[3] < -0.329108) {
            var274 = 0.05901584;
        } else {
            var274 = 0.00020466512;
        }
    }
    double var275;
    if (input[2] < 12.34438) {
        if (input[2] < 12.039464) {
            var275 = 0.00015741288;
        } else {
            var275 = -0.04618855;
        }
    } else {
        if (input[1] < -0.11062) {
            var275 = -0.050171304;
        } else {
            var275 = 0.051980097;
        }
    }
    double var276;
    if (input[4] < 0.174985) {
        if (input[4] < 0.098772) {
            var276 = -0.0010092099;
        } else {
            var276 = 0.037233885;
        }
    } else {
        if (input[2] < 8.799152) {
            var276 = 0.059802633;
        } else {
            var276 = -0.02190814;
        }
    }
    double var277;
    if (input[2] < 6.611152) {
        if (input[4] < -0.035296) {
            var277 = 0.057121914;
        } else {
            var277 = -0.1053524;
        }
    } else {
        if (input[2] < 6.965166) {
            var277 = 0.06263261;
        } else {
            var277 = -0.0003400914;
        }
    }
    double var278;
    if (input[4] < -0.386643) {
        if (input[2] < 8.123607) {
            var278 = 0.073149465;
        } else {
            var278 = -0.02755991;
        }
    } else {
        if (input[4] < -0.364996) {
            var278 = 0.07789802;
        } else {
            var278 = 0.00050465623;
        }
    }
    double var279;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var279 = 0.07742767;
        } else {
            var279 = -0.0054764114;
        }
    } else {
        if (input[4] < -0.544339) {
            var279 = -0.09321594;
        } else {
            var279 = 0.00031758056;
        }
    }
    double var280;
    if (input[5] < -0.544548) {
        if (input[3] < 0.270059) {
            var280 = -0.04962218;
        } else {
            var280 = 0.046374757;
        }
    } else {
        if (input[4] < 0.626043) {
            var280 = 0.00011243287;
        } else {
            var280 = 0.040632006;
        }
    }
    double var281;
    if (input[0] < 0.409848) {
        if (input[0] < 0.196841) {
            var281 = 0.0006758717;
        } else {
            var281 = -0.033002388;
        }
    } else {
        var281 = 0.054428406;
    }
    double var282;
    if (input[0] < -0.060774) {
        if (input[0] < -0.420476) {
            var282 = 0.0022423936;
        } else {
            var282 = -0.017352536;
        }
    } else {
        if (input[4] < -0.031946) {
            var282 = 0.072136104;
        } else {
            var282 = -0.025558887;
        }
    }
    double var283;
    if (input[1] < 3.098407) {
        if (input[1] < 1.781895) {
            var283 = 0.0024635037;
        } else {
            var283 = -0.007808525;
        }
    } else {
        var283 = 0.05445413;
    }
    double var284;
    if (input[1] < 1.104852) {
        if (input[1] < 1.051114) {
            var284 = 0.0026912838;
        } else {
            var284 = -0.06908282;
        }
    } else {
        if (input[2] < 10.244696) {
            var284 = -0.0018257169;
        } else {
            var284 = 0.04547621;
        }
    }
    double var285;
    if (input[5] < 0.74319) {
        if (input[3] < -0.488714) {
            var285 = -0.019904206;
        } else {
            var285 = 0.0010668238;
        }
    } else {
        if (input[0] < -0.573158) {
            var285 = 0.063987724;
        } else {
            var285 = 0.0022977178;
        }
    }
    double var286;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var286 = 0.075481795;
        } else {
            var286 = -0.0052212304;
        }
    } else {
        if (input[4] < -0.472576) {
            var286 = -0.05387163;
        } else {
            var286 = 0.0008057438;
        }
    }
    double var287;
    if (input[1] < 0.82733) {
        if (input[4] < -0.031946) {
            var287 = 0.042715043;
        } else {
            var287 = -0.029315356;
        }
    } else {
        if (input[1] < 0.972528) {
            var287 = 0.037669484;
        } else {
            var287 = -0.000556526;
        }
    }
    double var288;
    if (input[3] < -0.010935) {
        if (input[5] < -0.647845) {
            var288 = -0.08465707;
        } else {
            var288 = 0.007133587;
        }
    } else {
        if (input[3] < -0.000493) {
            var288 = -0.046349972;
        } else {
            var288 = 0.00029069552;
        }
    }
    double var289;
    if (input[2] < 13.094919) {
        if (input[1] < -0.696651) {
            var289 = -0.098525815;
        } else {
            var289 = 0.000112550464;
        }
    } else {
        if (input[5] < 0.010897) {
            var289 = -0.049247358;
        } else {
            var289 = 0.08998743;
        }
    }
    double var290;
    if (input[3] < 0.364596) {
        if (input[3] < 0.33106) {
            var290 = 0.00092543487;
        } else {
            var290 = -0.08609388;
        }
    } else {
        if (input[5] < -0.198736) {
            var290 = 0.08004484;
        } else {
            var290 = -0.0037781391;
        }
    }
    double var291;
    if (input[5] < -0.111672) {
        if (input[5] < -0.150028) {
            var291 = 0.0047108415;
        } else {
            var291 = -0.06591534;
        }
    } else {
        if (input[5] < -0.074334) {
            var291 = 0.056132764;
        } else {
            var291 = -0.00059773156;
        }
    }
    double var292;
    if (input[3] < 0.866084) {
        if (input[0] < 0.297431) {
            var292 = -0.000250829;
        } else {
            var292 = 0.055820733;
        }
    } else {
        if (input[0] < -0.636027) {
            var292 = 0.057226844;
        } else {
            var292 = -0.12022356;
        }
    }
    double var293;
    if (input[1] < 2.19758) {
        if (input[1] < 2.163601) {
            var293 = -0.0004493814;
        } else {
            var293 = -0.079686426;
        }
    } else {
        if (input[1] < 2.334695) {
            var293 = 0.08015575;
        } else {
            var293 = -0.002019615;
        }
    }
    double var294;
    if (input[4] < 0.005486) {
        if (input[3] < -0.044147) {
            var294 = 0.0105262315;
        } else {
            var294 = -0.01092848;
        }
    } else {
        if (input[0] < 0.182171) {
            var294 = 0.0069710845;
        } else {
            var294 = -0.06455347;
        }
    }
    double var295;
    if (input[1] < 3.098407) {
        if (input[1] < 1.781895) {
            var295 = 0.0022255187;
        } else {
            var295 = -0.007284248;
        }
    } else {
        var295 = 0.053067245;
    }
    double var296;
    if (input[1] < 1.15425) {
        if (input[2] < 9.773027) {
            var296 = 0.017219605;
        } else {
            var296 = -0.01750682;
        }
    } else {
        if (input[2] < 12.039464) {
            var296 = 0.0012160068;
        } else {
            var296 = 0.08332305;
        }
    }
    double var297;
    if (input[1] < 0.49532) {
        if (input[2] < 11.301798) {
            var297 = 0.04941646;
        } else {
            var297 = -0.031674918;
        }
    } else {
        if (input[1] < 0.530796) {
            var297 = -0.07954823;
        } else {
            var297 = 0.00019089373;
        }
    }
    double var298;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var298 = 0.028187895;
        } else {
            var298 = -0.0022515897;
        }
    } else {
        if (input[3] < -0.00426) {
            var298 = -0.028541101;
        } else {
            var298 = 0.06389622;
        }
    }
    double var299;
    if (input[0] < -1.075364) {
        if (input[5] < 0.022623) {
            var299 = -0.04890209;
        } else {
            var299 = 0.02646192;
        }
    } else {
        if (input[1] < 0.056882) {
            var299 = 0.06633509;
        } else {
            var299 = 0.00006580812;
        }
    }
    double var300;
    if (input[5] < 0.183788) {
        if (input[0] < -1.04348) {
            var300 = -0.026151685;
        } else {
            var300 = 0.0061788894;
        }
    } else {
        if (input[3] < 0.115821) {
            var300 = 0.01224189;
        } else {
            var300 = -0.045009483;
        }
    }
    double var301;
    if (input[3] < 0.356945) {
        if (input[3] < 0.33106) {
            var301 = 0.0006920322;
        } else {
            var301 = -0.08470717;
        }
    } else {
        if (input[5] < -0.198736) {
            var301 = 0.07852637;
        } else {
            var301 = -0.0017734828;
        }
    }
    double var302;
    if (input[1] < 1.15425) {
        if (input[3] < 0.178639) {
            var302 = -0.013439461;
        } else {
            var302 = 0.02884318;
        }
    } else {
        if (input[0] < -0.573158) {
            var302 = -0.007049875;
        } else {
            var302 = 0.01740717;
        }
    }
    double var303;
    if (input[0] < -0.474064) {
        if (input[1] < 1.781895) {
            var303 = 0.010626843;
        } else {
            var303 = -0.02195927;
        }
    } else {
        if (input[1] < 1.658252) {
            var303 = -0.030770645;
        } else {
            var303 = 0.027596394;
        }
    }
    double var304;
    if (input[5] < -0.111672) {
        if (input[0] < -0.185464) {
            var304 = -0.014454544;
        } else {
            var304 = 0.07239461;
        }
    } else {
        if (input[5] < -0.057486) {
            var304 = 0.043580174;
        } else {
            var304 = -0.00092320156;
        }
    }
    double var305;
    if (input[0] < -0.420476) {
        if (input[4] < 0.167871) {
            var305 = 0.006801318;
        } else {
            var305 = -0.01790246;
        }
    } else {
        if (input[4] < 0.051953) {
            var305 = -0.025268465;
        } else {
            var305 = 0.034374293;
        }
    }
    double var306;
    if (input[2] < 12.34438) {
        if (input[1] < -0.696651) {
            var306 = -0.087245874;
        } else {
            var306 = -0.00022637028;
        }
    } else {
        if (input[3] < -0.00426) {
            var306 = -0.024597803;
        } else {
            var306 = 0.061829474;
        }
    }
    double var307;
    if (input[2] < 6.611152) {
        if (input[1] < 1.72172) {
            var307 = -0.118953004;
        } else {
            var307 = 0.035079017;
        }
    } else {
        if (input[2] < 6.965166) {
            var307 = 0.060676992;
        } else {
            var307 = -0.00030023523;
        }
    }
    double var308;
    if (input[4] < -0.405461) {
        if (input[4] < -0.425209) {
            var308 = 0.0036564039;
        } else {
            var308 = -0.09085841;
        }
    } else {
        if (input[4] < -0.364996) {
            var308 = 0.049033236;
        } else {
            var308 = 0.00045154165;
        }
    }
    double var309;
    if (input[0] < -0.420476) {
        if (input[1] < 1.844464) {
            var309 = 0.0065759844;
        } else {
            var309 = -0.017465921;
        }
    } else {
        if (input[4] < 0.051953) {
            var309 = -0.022507766;
        } else {
            var309 = 0.031961214;
        }
    }
    double var310;
    if (input[4] < 0.167871) {
        if (input[4] < 0.105803) {
            var310 = -0.0006407832;
        } else {
            var310 = 0.040610984;
        }
    } else {
        if (input[1] < 1.72172) {
            var310 = 0.013216448;
        } else {
            var310 = -0.05091386;
        }
    }
    double var311;
    if (input[1] < 1.15425) {
        if (input[4] < -0.286992) {
            var311 = 0.044310622;
        } else {
            var311 = -0.010609406;
        }
    } else {
        if (input[0] < -0.822989) {
            var311 = 0.02727572;
        } else {
            var311 = -0.0033177224;
        }
    }
    double var312;
    if (input[4] < -0.386643) {
        if (input[2] < 8.123607) {
            var312 = 0.07172506;
        } else {
            var312 = -0.025265077;
        }
    } else {
        if (input[4] < -0.364996) {
            var312 = 0.07452018;
        } else {
            var312 = 0.0004892896;
        }
    }
    double var313;
    if (input[5] < 0.74319) {
        if (input[3] < -0.374838) {
            var313 = -0.016731914;
        } else {
            var313 = 0.0013160919;
        }
    } else {
        if (input[0] < -0.573158) {
            var313 = 0.061689217;
        } else {
            var313 = 0.001857052;
        }
    }
    double var314;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var314 = 0.073179595;
        } else {
            var314 = -0.0041217706;
        }
    } else {
        if (input[4] < -0.544339) {
            var314 = -0.08007929;
        } else {
            var314 = 0.0003233679;
        }
    }
    double var315;
    if (input[3] < 0.866084) {
        if (input[0] < 0.297431) {
            var315 = -0.00019307349;
        } else {
            var315 = 0.054691136;
        }
    } else {
        if (input[5] < 0.279559) {
            var315 = 0.01986198;
        } else {
            var315 = -0.08568925;
        }
    }
    double var316;
    if (input[1] < 3.098407) {
        if (input[2] < 13.094919) {
            var316 = -0.0007811136;
        } else {
            var316 = 0.026312489;
        }
    } else {
        var316 = 0.051533956;
    }
    double var317;
    if (input[5] < -0.70121) {
        if (input[4] < 0.111515) {
            var317 = 0.07581323;
        } else {
            var317 = -0.03718909;
        }
    } else {
        if (input[5] < -0.574898) {
            var317 = -0.056266557;
        } else {
            var317 = 0.000612582;
        }
    }
    double var318;
    if (input[4] < 0.626043) {
        if (input[4] < 0.582654) {
            var318 = 0.00060217956;
        } else {
            var318 = -0.16231577;
        }
    } else {
        if (input[3] < 0.13513) {
            var318 = 0.07856849;
        } else {
            var318 = -0.013577446;
        }
    }
    double var319;
    if (input[3] < 0.356945) {
        if (input[3] < 0.33106) {
            var319 = 0.00067611295;
        } else {
            var319 = -0.075113975;
        }
    } else {
        if (input[5] < -0.198736) {
            var319 = 0.07579625;
        } else {
            var319 = -0.0019655328;
        }
    }
    double var320;
    if (input[5] < -0.111672) {
        if (input[5] < -0.117507) {
            var320 = -0.002093793;
        } else {
            var320 = -0.12583631;
        }
    } else {
        if (input[5] < -0.074334) {
            var320 = 0.050545868;
        } else {
            var320 = -0.0002750524;
        }
    }
    double var321;
    if (input[5] < 0.068929) {
        if (input[3] < 0.083168) {
            var321 = -0.012839265;
        } else {
            var321 = 0.023309937;
        }
    } else {
        if (input[3] < 0.10242) {
            var321 = 0.026476204;
        } else {
            var321 = -0.030088324;
        }
    }
    double var322;
    if (input[5] < 0.183788) {
        if (input[5] < 0.068929) {
            var322 = -0.0024506801;
        } else {
            var322 = 0.026034404;
        }
    } else {
        if (input[0] < -0.925226) {
            var322 = 0.040317193;
        } else {
            var322 = -0.017527469;
        }
    }
    double var323;
    if (input[1] < 2.085463) {
        if (input[5] < 0.629923) {
            var323 = -0.0016795086;
        } else {
            var323 = 0.043903977;
        }
    } else {
        if (input[0] < 0.266446) {
            var323 = 0.021703616;
        } else {
            var323 = -0.07114919;
        }
    }
    double var324;
    if (input[2] < 6.611152) {
        if (input[4] < -0.035296) {
            var324 = 0.055058926;
        } else {
            var324 = -0.08812564;
        }
    } else {
        if (input[2] < 6.965166) {
            var324 = 0.059067488;
        } else {
            var324 = -0.00029745087;
        }
    }
    double var325;
    if (input[0] < 0.409848) {
        if (input[0] < 0.226479) {
            var325 = 0.00058311963;
        } else {
            var325 = -0.035027284;
        }
    } else {
        var325 = 0.050732534;
    }
    double var326;
    if (input[0] < -0.060774) {
        if (input[0] < -0.147144) {
            var326 = 0.00023576342;
        } else {
            var326 = -0.04521136;
        }
    } else {
        if (input[3] < 0.040001) {
            var326 = -0.02593107;
        } else {
            var326 = 0.071337186;
        }
    }
    double var327;
    if (input[2] < 7.055877) {
        if (input[3] < -0.095383) {
            var327 = 0.07257953;
        } else {
            var327 = -0.0648513;
        }
    } else {
        if (input[2] < 7.545509) {
            var327 = 0.04788506;
        } else {
            var327 = -0.00070586655;
        }
    }
    double var328;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var328 = 0.07080504;
        } else {
            var328 = -0.0036293254;
        }
    } else {
        if (input[4] < -0.472576) {
            var328 = -0.046613034;
        } else {
            var328 = 0.00073005725;
        }
    }
    double var329;
    if (input[0] < -0.540227) {
        if (input[1] < 1.781895) {
            var329 = 0.006165697;
        } else {
            var329 = -0.029217837;
        }
    } else {
        if (input[1] < 1.658252) {
            var329 = -0.013899515;
        } else {
            var329 = 0.038194675;
        }
    }
    double var330;
    if (input[3] < -0.488714) {
        if (input[2] < 9.75716) {
            var330 = -0.036149897;
        } else {
            var330 = 0.024856089;
        }
    } else {
        if (input[3] < -0.23171) {
            var330 = 0.019686947;
        } else {
            var330 = -0.0005387193;
        }
    }
    double var331;
    if (input[0] < -1.075364) {
        if (input[3] < 0.048784) {
            var331 = -0.036107022;
        } else {
            var331 = 0.043323692;
        }
    } else {
        if (input[1] < 0.056882) {
            var331 = 0.06524984;
        } else {
            var331 = 0.000023442311;
        }
    }
    double var332;
    if (input[1] < -0.696651) {
        if (input[4] < -0.019718) {
            var332 = 0.062305298;
        } else {
            var332 = -0.119195834;
        }
    } else {
        if (input[1] < 0.427212) {
            var332 = 0.018320909;
        } else {
            var332 = -0.0008561236;
        }
    }
    double var333;
    if (input[1] < 0.648452) {
        if (input[0] < -0.507594) {
            var333 = -0.031020701;
        } else {
            var333 = 0.03271038;
        }
    } else {
        if (input[0] < -0.474064) {
            var333 = 0.0066192816;
        } else {
            var333 = -0.011059007;
        }
    }
    double var334;
    if (input[4] < 0.148735) {
        if (input[4] < 0.105803) {
            var334 = -0.00048393648;
        } else {
            var334 = 0.055544414;
        }
    } else {
        if (input[2] < 9.853859) {
            var334 = -0.029171718;
        } else {
            var334 = 0.0351397;
        }
    }
    double var335;
    if (input[2] < 9.635313) {
        if (input[5] < 0.291002) {
            var335 = 0.0001349601;
        } else {
            var335 = 0.04264299;
        }
    } else {
        if (input[5] < -0.295155) {
            var335 = -0.034485735;
        } else {
            var335 = 0.00057748705;
        }
    }
    double var336;
    if (input[5] < 0.183788) {
        if (input[0] < -1.04348) {
            var336 = -0.02310982;
        } else {
            var336 = 0.0057950593;
        }
    } else {
        if (input[3] < 0.115821) {
            var336 = 0.0090000415;
        } else {
            var336 = -0.03627982;
        }
    }
    double var337;
    if (input[2] < 12.34438) {
        if (input[2] < 12.039464) {
            var337 = 0.00027097474;
        } else {
            var337 = -0.0423324;
        }
    } else {
        if (input[1] < -0.11062) {
            var337 = -0.040884107;
        } else {
            var337 = 0.04671907;
        }
    }
    double var338;
    if (input[5] < -0.70121) {
        if (input[4] < 0.122473) {
            var338 = 0.07449839;
        } else {
            var338 = -0.035622995;
        }
    } else {
        if (input[5] < -0.647845) {
            var338 = -0.07301553;
        } else {
            var338 = 0.00023756556;
        }
    }
    double var339;
    if (input[4] < 0.626043) {
        if (input[4] < 0.582654) {
            var339 = 0.0005211458;
        } else {
            var339 = -0.14065385;
        }
    } else {
        if (input[3] < 0.13513) {
            var339 = 0.075607896;
        } else {
            var339 = -0.010560427;
        }
    }
    double var340;
    if (input[3] < 0.356945) {
        if (input[3] < 0.33106) {
            var340 = 0.00056822045;
        } else {
            var340 = -0.067363545;
        }
    } else {
        if (input[5] < -0.198736) {
            var340 = 0.07309016;
        } else {
            var340 = -0.0010812468;
        }
    }
    double var341;
    if (input[2] < 9.635313) {
        if (input[3] < 0.041997) {
            var341 = -0.005735267;
        } else {
            var341 = 0.022582095;
        }
    } else {
        if (input[5] < -0.295155) {
            var341 = -0.031494178;
        } else {
            var341 = 0.0005176556;
        }
    }
    double var342;
    if (input[5] < 0.183788) {
        if (input[5] < 0.068929) {
            var342 = -0.001895831;
        } else {
            var342 = 0.02331301;
        }
    } else {
        if (input[0] < -0.959954) {
            var342 = 0.039574772;
        } else {
            var342 = -0.0159925;
        }
    }
    double var343;
    if (input[5] < -0.70121) {
        if (input[4] < 0.148735) {
            var343 = 0.073288314;
        } else {
            var343 = -0.033993483;
        }
    } else {
        if (input[5] < -0.60673) {
            var343 = -0.054238904;
        } else {
            var343 = 0.0003109871;
        }
    }
    double var344;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var344 = 0.0692225;
        } else {
            var344 = -0.0031241481;
        }
    } else {
        if (input[4] < -0.544339) {
            var344 = -0.06732872;
        } else {
            var344 = 0.00022772772;
        }
    }
    double var345;
    if (input[4] < 0.626043) {
        if (input[4] < 0.582654) {
            var345 = 0.0004773764;
        } else {
            var345 = -0.12516288;
        }
    } else {
        if (input[3] < 0.13513) {
            var345 = 0.07363122;
        } else {
            var345 = -0.009896761;
        }
    }
    double var346;
    if (input[0] < -0.420476) {
        if (input[0] < -0.540227) {
            var346 = -0.002559699;
        } else {
            var346 = 0.019377107;
        }
    } else {
        if (input[1] < 1.37549) {
            var346 = -0.031680234;
        } else {
            var346 = 0.01588828;
        }
    }
    double var347;
    if (input[0] < -0.646057) {
        if (input[4] < -0.458564) {
            var347 = -0.06526139;
        } else {
            var347 = 0.007576736;
        }
    } else {
        if (input[0] < -0.592468) {
            var347 = -0.028124606;
        } else {
            var347 = 0.0026161696;
        }
    }
    double var348;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var348 = 0.06917351;
        } else {
            var348 = -0.0023545942;
        }
    } else {
        if (input[4] < -0.544339) {
            var348 = -0.057495087;
        } else {
            var348 = 0.00009953673;
        }
    }
    double var349;
    if (input[1] < 0.427212) {
        if (input[2] < 11.301798) {
            var349 = 0.060695786;
        } else {
            var349 = -0.03760813;
        }
    } else {
        if (input[2] < 12.2625) {
            var349 = -0.0024078765;
        } else {
            var349 = 0.054949827;
        }
    }
    double var350;
    if (input[1] < 0.648452) {
        if (input[3] < -0.05214) {
            var350 = 0.046211183;
        } else {
            var350 = -0.024524597;
        }
    } else {
        if (input[0] < -0.474064) {
            var350 = 0.006102755;
        } else {
            var350 = -0.010393339;
        }
    }
    double var351;
    if (input[0] < -0.060774) {
        if (input[0] < -0.073647) {
            var351 = -0.0003110271;
        } else {
            var351 = -0.09475993;
        }
    } else {
        if (input[2] < 10.244696) {
            var351 = 0.043223176;
        } else {
            var351 = -0.062428553;
        }
    }
    double var352;
    if (input[2] < 12.34438) {
        if (input[1] < -0.696651) {
            var352 = -0.075260304;
        } else {
            var352 = -0.00024715517;
        }
    } else {
        if (input[3] < -0.00426) {
            var352 = -0.025266087;
        } else {
            var352 = 0.05998076;
        }
    }
    double var353;
    if (input[2] < 9.875564) {
        if (input[2] < 9.8341) {
            var353 = 0.0015707429;
        } else {
            var353 = -0.05307395;
        }
    } else {
        if (input[0] < -0.863105) {
            var353 = -0.032926194;
        } else {
            var353 = 0.019911835;
        }
    }
    double var354;
    if (input[1] < 0.427212) {
        if (input[2] < 11.301798) {
            var354 = 0.058271904;
        } else {
            var354 = -0.0313331;
        }
    } else {
        if (input[2] < 12.2625) {
            var354 = -0.0023243413;
        } else {
            var354 = 0.05230042;
        }
    }
    double var355;
    var355 = sigmoid(var0 + var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21 + var22 + var23 + var24 + var25 + var26 + var27 + var28 + var29 + var30 + var31 + var32 + var33 + var34 + var35 + var36 + var37 + var38 + var39 + var40 + var41 + var42 + var43 + var44 + var45 + var46 + var47 + var48 + var49 + var50 + var51 + var52 + var53 + var54 + var55 + var56 + var57 + var58 + var59 + var60 + var61 + var62 + var63 + var64 + var65 + var66 + var67 + var68 + var69 + var70 + var71 + var72 + var73 + var74 + var75 + var76 + var77 + var78 + var79 + var80 + var81 + var82 + var83 + var84 + var85 + var86 + var87 + var88 + var89 + var90 + var91 + var92 + var93 + var94 + var95 + var96 + var97 + var98 + var99 + var100 + var101 + var102 + var103 + var104 + var105 + var106 + var107 + var108 + var109 + var110 + var111 + var112 + var113 + var114 + var115 + var116 + var117 + var118 + var119 + var120 + var121 + var122 + var123 + var124 + var125 + var126 + var127 + var128 + var129 + var130 + var131 + var132 + var133 + var134 + var135 + var136 + var137 + var138 + var139 + var140 + var141 + var142 + var143 + var144 + var145 + var146 + var147 + var148 + var149 + var150 + var151 + var152 + var153 + var154 + var155 + var156 + var157 + var158 + var159 + var160 + var161 + var162 + var163 + var164 + var165 + var166 + var167 + var168 + var169 + var170 + var171 + var172 + var173 + var174 + var175 + var176 + var177 + var178 + var179 + var180 + var181 + var182 + var183 + var184 + var185 + var186 + var187 + var188 + var189 + var190 + var191 + var192 + var193 + var194 + var195 + var196 + var197 + var198 + var199 + var200 + var201 + var202 + var203 + var204 + var205 + var206 + var207 + var208 + var209 + var210 + var211 + var212 + var213 + var214 + var215 + var216 + var217 + var218 + var219 + var220 + var221 + var222 + var223 + var224 + var225 + var226 + var227 + var228 + var229 + var230 + var231 + var232 + var233 + var234 + var235 + var236 + var237 + var238 + var239 + var240 + var241 + var242 + var243 + var244 + var245 + var246 + var247 + var248 + var249 + var250 + var251 + var252 + var253 + var254 + var255 + var256 + var257 + var258 + var259 + var260 + var261 + var262 + var263 + var264 + var265 + var266 + var267 + var268 + var269 + var270 + var271 + var272 + var273 + var274 + var275 + var276 + var277 + var278 + var279 + var280 + var281 + var282 + var283 + var284 + var285 + var286 + var287 + var288 + var289 + var290 + var291 + var292 + var293 + var294 + var295 + var296 + var297 + var298 + var299 + var300 + var301 + var302 + var303 + var304 + var305 + var306 + var307 + var308 + var309 + var310 + var311 + var312 + var313 + var314 + var315 + var316 + var317 + var318 + var319 + var320 + var321 + var322 + var323 + var324 + var325 + var326 + var327 + var328 + var329 + var330 + var331 + var332 + var333 + var334 + var335 + var336 + var337 + var338 + var339 + var340 + var341 + var342 + var343 + var344 + var345 + var346 + var347 + var348 + var349 + var350 + var351 + var352 + var353 + var354);
    memcpy(output, (double[]){1.0 - var355, var355}, 2 * sizeof(double));
}
