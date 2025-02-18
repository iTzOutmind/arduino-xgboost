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
    double mc[2] = {1.0 - var355, var355};
    memcpy(output, mc, 2 * sizeof(mc));
}

void printScore(double input[], int length) {
  for(int i = 0; i < 2; i++) {
    Serial.print("Score ");
    Serial.print(i);
    Serial.print(": ");
    Serial.println(input[i]);
  }
}

void printScoreCompare(double input[], int length, int pc) {
  int x0 = input[0];
  int x1 = input[1];
  for(int i = 0; i < 2; i++) {
    Serial.print("Inference on Arduino: ");
    Serial.print("Score ");
    Serial.print(i);
    Serial.print(": ");
    Serial.print(input[i]);
    Serial.print("  |  ");
  }
  Serial.println();
  Serial.print("Label on Arduino: ");
  if(input[0]>input[1]){
    Serial.print("###################");
    Serial.print(0);
  } else {
    Serial.print(1);
  }
  Serial.print("  |  ");
  Serial.print("Label on PC: ");
  if(pc==0){
    Serial.print("###################");
  }
  Serial.println(pc);
  Serial.println();
}

void infer() {
	// Printing Range:
	Serial.println("Start: 0 | End: 250");

	// Declarations:
	int length = 2;
	double result[length];
	int time = 100;

	// Model Inference
	double x_0[] = {-0.623154, 3.131787, 11.257041, -0.736, -0.059642, 0.56997};
	int y_0 = 1;
	score(x_0, result);
	printScoreCompare(result, length, y_0);
	delay(time);

	double x_1[] = {1.366808, 2.376458, 11.491304, -0.219388, 0.297717, -0.341959};
	int y_1 = 1;
	score(x_1, result);
	printScoreCompare(result, length, y_1);
	delay(time);

	double x_2[] = {-0.931214, 1.462459, 9.501641, 0.435188, 0.209586, 0.465394};
	int y_2 = 1;
	score(x_2, result);
	printScoreCompare(result, length, y_2);
	delay(time);

	double x_3[] = {0.209265, 2.590363, 12.200529, 0.147434, -0.108728, -0.057775};
	int y_3 = 1;
	score(x_3, result);
	printScoreCompare(result, length, y_3);
	delay(time);

	double x_4[] = {-0.111518, 1.748065, 8.976833, 0.754365, 0.03308, -0.407495};
	int y_4 = 1;
	score(x_4, result);
	printScoreCompare(result, length, y_4);
	delay(time);

	double x_5[] = {-0.17798, 2.64006, 7.981852, -0.140428, 0.266522, -0.288973};
	int y_5 = 1;
	score(x_5, result);
	printScoreCompare(result, length, y_5);
	delay(time);

	double x_6[] = {0.403561, 2.209106, 7.659422, -0.338575, 0.171403, -0.129737};
	int y_6 = 1;
	score(x_6, result);
	printScoreCompare(result, length, y_6);
	delay(time);

	double x_7[] = {0.18262, 2.995571, 9.547296, 0.155736, -0.069143, -0.021728};
	int y_7 = 1;
	score(x_7, result);
	printScoreCompare(result, length, y_7);
	delay(time);

	double x_8[] = {-0.248932, 1.057401, 12.385245, 0.035847, 0.013138, 0.360773};
	int y_8 = 1;
	score(x_8, result);
	printScoreCompare(result, length, y_8);
	delay(time);

	double x_9[] = {-0.097747, 2.312092, 8.507558, 0.218066, 0.246937, -0.338734};
	int y_9 = 1;
	score(x_9, result);
	printScoreCompare(result, length, y_9);
	delay(time);

	double x_10[] = {-0.958307, 1.745969, 9.609567, -0.331516, -0.042587, 0.418059};
	int y_10 = 1;
	score(x_10, result);
	printScoreCompare(result, length, y_10);
	delay(time);

	double x_11[] = {2.06765, 0.430205, 13.596825, -0.216439, -0.044937, -0.10312};
	int y_11 = 1;
	score(x_11, result);
	printScoreCompare(result, length, y_11);
	delay(time);

	double x_12[] = {1.581611, 2.818489, 13.388009, -0.322366, 0.390015, -0.178312};
	int y_12 = 1;
	score(x_12, result);
	printScoreCompare(result, length, y_12);
	delay(time);

	double x_13[] = {0.240699, 1.993854, 12.900623, -0.804063, -0.280203, -0.08198};
	int y_13 = 1;
	score(x_13, result);
	printScoreCompare(result, length, y_13);
	delay(time);

	double x_14[] = {0.059726, 1.83234, 11.15181, -0.228472, -0.048252, 0.496837};
	int y_14 = 1;
	score(x_14, result);
	printScoreCompare(result, length, y_14);
	delay(time);

	double x_15[] = {-0.344284, 2.099085, 8.47807, 0.177153, -0.08545, -0.001182};
	int y_15 = 1;
	score(x_15, result);
	printScoreCompare(result, length, y_15);
	delay(time);

	double x_16[] = {-0.179477, 3.559747, 6.881789, -0.14788, 0.148133, -0.226857};
	int y_16 = 1;
	score(x_16, result);
	printScoreCompare(result, length, y_16);
	delay(time);

	double x_17[] = {4.678671, 0.4567, 11.599828, -0.001511, -0.165192, -0.096345};
	int y_17 = 1;
	score(x_17, result);
	printScoreCompare(result, length, y_17);
	delay(time);

	double x_18[] = {-0.141905, 4.112847, 12.25756, -0.622587, 0.072925, -0.060069};
	int y_18 = 1;
	score(x_18, result);
	printScoreCompare(result, length, y_18);
	delay(time);

	double x_19[] = {0.407902, 1.382525, 7.386091, -0.253205, 0.100281, -0.349632};
	int y_19 = 1;
	score(x_19, result);
	printScoreCompare(result, length, y_19);
	delay(time);

	double x_20[] = {0.87538, 1.742227, 10.054891, 0.012892, 0.017248, -0.281757};
	int y_20 = 1;
	score(x_20, result);
	printScoreCompare(result, length, y_20);
	delay(time);

	double x_21[] = {-0.49053, 1.09662, 8.272248, 0.139795, 0.512044, -0.125974};
	int y_21 = 1;
	score(x_21, result);
	printScoreCompare(result, length, y_21);
	delay(time);

	double x_22[] = {1.043779, 1.419199, 9.8341, -0.689745, 0.02235, 0.448672};
	int y_22 = 1;
	score(x_22, result);
	printScoreCompare(result, length, y_22);
	delay(time);

	double x_23[] = {-0.014819, 1.070574, 7.483239, -0.504728, 0.127121, -0.508805};
	int y_23 = 1;
	score(x_23, result);
	printScoreCompare(result, length, y_23);
	delay(time);

	double x_24[] = {-0.309257, 2.663112, 7.320078, -0.270741, -0.090023, 0.229317};
	int y_24 = 1;
	score(x_24, result);
	printScoreCompare(result, length, y_24);
	delay(time);

	double x_25[] = {0.896037, 0.085772, 10.522518, -0.019541, -0.073002, 0.024696};
	int y_25 = 1;
	score(x_25, result);
	printScoreCompare(result, length, y_25);
	delay(time);

	double x_26[] = {0.89948, 1.021326, 7.048243, 0.556877, 0.091975, -0.06388};
	int y_26 = 1;
	score(x_26, result);
	printScoreCompare(result, length, y_26);
	delay(time);

	double x_27[] = {0.797691, 2.376758, 11.384875, -0.612042, 0.065985, -0.47649};
	int y_27 = 1;
	score(x_27, result);
	printScoreCompare(result, length, y_27);
	delay(time);

	double x_28[] = {0.298479, 1.326541, 6.9728, 0.220506, -0.065857, -0.539153};
	int y_28 = 1;
	score(x_28, result);
	printScoreCompare(result, length, y_28);
	delay(time);

	double x_29[] = {-1.010698, 4.710105, 11.095976, 3.5e-05, -0.3583, 0.165857};
	int y_29 = 1;
	score(x_29, result);
	printScoreCompare(result, length, y_29);
	delay(time);

	double x_30[] = {-0.327968, 1.828597, 9.075777, -0.004429, -0.06608, -0.076243};
	int y_30 = 1;
	score(x_30, result);
	printScoreCompare(result, length, y_30);
	delay(time);

	double x_31[] = {0.517324, 1.626967, 9.681717, 0.014175, 0.175041, -0.199627};
	int y_31 = 1;
	score(x_31, result);
	printScoreCompare(result, length, y_31);
	delay(time);

	double x_32[] = {-0.114063, 3.044519, 10.100396, -0.292451, 0.011631, 0.008098};
	int y_32 = 1;
	score(x_32, result);
	printScoreCompare(result, length, y_32);
	delay(time);

	double x_33[] = {0.304317, 3.338358, 12.15203, 0.024056, -0.628172, -0.844948};
	int y_33 = 1;
	score(x_33, result);
	printScoreCompare(result, length, y_33);
	delay(time);

	double x_34[] = {-0.982706, 2.027833, 11.454181, -0.373702, 0.229649, 0.167135};
	int y_34 = 1;
	score(x_34, result);
	printScoreCompare(result, length, y_34);
	delay(time);

	double x_35[] = {-0.733325, 3.35183, 11.787837, 0.213521, 0.048133, -0.419252};
	int y_35 = 1;
	score(x_35, result);
	printScoreCompare(result, length, y_35);
	delay(time);

	double x_36[] = {0.414638, 0.841849, 10.951227, 0.037226, -0.456882, -0.890448};
	int y_36 = 1;
	score(x_36, result);
	printScoreCompare(result, length, y_36);
	delay(time);

	double x_37[] = {-0.861309, 2.655927, 8.832084, -0.228607, -0.223958, 0.031645};
	int y_37 = 1;
	score(x_37, result);
	printScoreCompare(result, length, y_37);
	delay(time);

	double x_38[] = {-0.441133, 1.025517, 11.8055, 0.309872, 0.10934, 0.043496};
	int y_38 = 1;
	score(x_38, result);
	printScoreCompare(result, length, y_38);
	delay(time);

	double x_39[] = {-0.062121, 1.221909, 11.358829, -0.104018, 0.190778, -0.138792};
	int y_39 = 1;
	score(x_39, result);
	printScoreCompare(result, length, y_39);
	delay(time);

	double x_40[] = {-0.755629, 2.196832, 7.816446, -0.080302, -0.180336, 0.094146};
	int y_40 = 1;
	score(x_40, result);
	printScoreCompare(result, length, y_40);
	delay(time);

	double x_41[] = {-0.76446, 3.802543, 12.55095, 0.043052, 0.876468, 0.303031};
	int y_41 = 1;
	score(x_41, result);
	printScoreCompare(result, length, y_41);
	delay(time);

	double x_42[] = {0.393083, 1.26472, 10.104138, -0.257551, 0.412934, 0.025518};
	int y_42 = 1;
	score(x_42, result);
	printScoreCompare(result, length, y_42);
	delay(time);

	double x_43[] = {0.609682, 1.276994, 12.310849, -0.026866, -0.145919, -0.08705};
	int y_43 = 1;
	score(x_43, result);
	printScoreCompare(result, length, y_43);
	delay(time);

	double x_44[] = {-0.90906, 3.259023, 7.881111, 0.193687, 0.107909, 0.096086};
	int y_44 = 1;
	score(x_44, result);
	printScoreCompare(result, length, y_44);
	delay(time);

	double x_45[] = {0.091759, 3.241659, 8.123158, -0.14633, 0.106643, -0.172289};
	int y_45 = 1;
	score(x_45, result);
	printScoreCompare(result, length, y_45);
	delay(time);

	double x_46[] = {0.002844, 2.583029, 11.85834, 0.18063, 0.224634, -0.253352};
	int y_46 = 1;
	score(x_46, result);
	printScoreCompare(result, length, y_46);
	delay(time);

	double x_47[] = {-0.274679, 1.02926, 11.160492, 0.26372, 0.227427, -0.270206};
	int y_47 = 1;
	score(x_47, result);
	printScoreCompare(result, length, y_47);
	delay(time);

	double x_48[] = {1.427731, 2.35146, 11.467503, -0.341791, -0.18004, -0.266395};
	int y_48 = 1;
	score(x_48, result);
	printScoreCompare(result, length, y_48);
	delay(time);

	double x_49[] = {-0.026495, 3.292553, 7.260651, 0.176294, 0.043209, -0.061733};
	int y_49 = 1;
	score(x_49, result);
	printScoreCompare(result, length, y_49);
	delay(time);

	double x_50[] = {-0.067809, 2.391876, 9.539063, 0.074206, 0.040939, 0.009205};
	int y_50 = 1;
	score(x_50, result);
	printScoreCompare(result, length, y_50);
	delay(time);

	double x_51[] = {0.479453, 3.535199, 11.010504, -0.055668, -0.019685, -0.005184};
	int y_51 = 1;
	score(x_51, result);
	printScoreCompare(result, length, y_51);
	delay(time);

	double x_52[] = {0.503852, 0.966241, 7.031179, -0.404484, 0.050422, 0.513205};
	int y_52 = 1;
	score(x_52, result);
	printScoreCompare(result, length, y_52);
	delay(time);

	double x_53[] = {0.440983, 3.035089, 8.257728, -0.331321, -0.302614, 0.223355};
	int y_53 = 1;
	score(x_53, result);
	printScoreCompare(result, length, y_53);
	delay(time);

	double x_54[] = {-1.342109, 2.118694, 8.952733, -0.038155, 0.000176, 0.298199};
	int y_54 = 1;
	score(x_54, result);
	printScoreCompare(result, length, y_54);
	delay(time);

	double x_55[] = {-0.36075, 2.136208, 6.899902, -0.055564, 0.018455, 0.065696};
	int y_55 = 1;
	score(x_55, result);
	printScoreCompare(result, length, y_55);
	delay(time);

	double x_56[] = {-0.014819, 3.238066, 6.09742, 0.248481, 0.068332, -0.019391};
	int y_56 = 1;
	score(x_56, result);
	printScoreCompare(result, length, y_56);
	delay(time);

	double x_57[] = {-0.393232, 3.09212, 9.181906, 0.322885, 0.918091, -0.058874};
	int y_57 = 1;
	score(x_57, result);
	printScoreCompare(result, length, y_57);
	delay(time);

	double x_58[] = {-0.182171, 2.465972, 6.356532, 0.059789, -0.103344, -0.137657};
	int y_58 = 1;
	score(x_58, result);
	printScoreCompare(result, length, y_58);
	delay(time);

	double x_59[] = {-0.484243, 0.696053, 13.022769, 0.052085, -0.08673, -0.113399};
	int y_59 = 1;
	score(x_59, result);
	printScoreCompare(result, length, y_59);
	delay(time);

	double x_60[] = {-0.433798, 3.328329, 10.306068, 0.501602, -0.243626, 0.580458};
	int y_60 = 1;
	score(x_60, result);
	printScoreCompare(result, length, y_60);
	delay(time);

	double x_61[] = {0.867147, 2.463427, 8.469687, -0.075665, 0.058728, -0.29328};
	int y_61 = 1;
	score(x_61, result);
	printScoreCompare(result, length, y_61);
	delay(time);

	double x_62[] = {-0.772693, 2.326761, 11.289823, -0.634518, -0.225289, -0.207624};
	int y_62 = 1;
	score(x_62, result);
	printScoreCompare(result, length, y_62);
	delay(time);

	double x_63[] = {0.208965, 2.017804, 12.063564, 0.172104, -0.298589, 0.018007};
	int y_63 = 1;
	score(x_63, result);
	printScoreCompare(result, length, y_63);
	delay(time);

	double x_64[] = {-0.045505, 2.085463, 6.987769, -0.669441, 0.075428, 0.042325};
	int y_64 = 1;
	score(x_64, result);
	printScoreCompare(result, length, y_64);
	delay(time);

	double x_65[] = {0.141905, 2.867437, 10.927576, -0.082634, -0.097703, 0.232056};
	int y_65 = 1;
	score(x_65, result);
	printScoreCompare(result, length, y_65);
	delay(time);

	double x_66[] = {0.460592, 1.989064, 7.307205, 0.430501, -0.150183, 0.262474};
	int y_66 = 1;
	score(x_66, result);
	printScoreCompare(result, length, y_66);
	delay(time);

	double x_67[] = {0.207469, 4.021537, 9.21379, -0.029705, -0.018253, -0.148797};
	int y_67 = 1;
	score(x_67, result);
	printScoreCompare(result, length, y_67);
	delay(time);

	double x_68[] = {-0.280367, 1.33687, 7.773934, 0.152635, 0.283507, -0.45925};
	int y_68 = 1;
	score(x_68, result);
	printScoreCompare(result, length, y_68);
	delay(time);

	double x_69[] = {1.35109, 0.428259, 8.010442, 0.060616, 0.39156, -0.033557};
	int y_69 = 1;
	score(x_69, result);
	printScoreCompare(result, length, y_69);
	delay(time);

	double x_70[] = {-0.460742, 0.714464, 10.333911, -0.272166, 0.05478, 0.012342};
	int y_70 = 1;
	score(x_70, result);
	printScoreCompare(result, length, y_70);
	delay(time);

	double x_71[] = {-0.00973, 2.93345, 9.951156, -0.347467, -0.222241, 0.065321};
	int y_71 = 1;
	score(x_71, result);
	printScoreCompare(result, length, y_71);
	delay(time);

	double x_72[] = {-0.123942, 1.496288, 7.046447, 0.163582, -0.077775, -0.14618};
	int y_72 = 1;
	score(x_72, result);
	printScoreCompare(result, length, y_72);
	delay(time);

	double x_73[] = {-0.522114, 3.04392, 11.866723, 0.181791, 0.136847, 0.067698};
	int y_73 = 1;
	score(x_73, result);
	printScoreCompare(result, length, y_73);
	delay(time);

	double x_74[] = {-0.515079, 4.289181, 10.751841, 0.0788, -0.181494, -0.066949};
	int y_74 = 1;
	score(x_74, result);
	printScoreCompare(result, length, y_74);
	delay(time);

	double x_75[] = {0.315394, 1.835483, 8.990454, -0.026009, 0.070868, -0.073858};
	int y_75 = 1;
	score(x_75, result);
	printScoreCompare(result, length, y_75);
	delay(time);

	double x_76[] = {1.553769, 1.366209, 10.761571, 0.44991, -0.291057, -1.301159};
	int y_76 = 1;
	score(x_76, result);
	printScoreCompare(result, length, y_76);
	delay(time);

	double x_77[] = {-1.294059, 2.482438, 12.087813, -0.243989, -0.453108, -0.090075};
	int y_77 = 1;
	score(x_77, result);
	printScoreCompare(result, length, y_77);
	delay(time);

	double x_78[] = {0.926573, -0.006886, 11.864328, 0.174572, -0.060518, 0.371454};
	int y_78 = 1;
	score(x_78, result);
	printScoreCompare(result, length, y_78);
	delay(time);

	double x_79[] = {-0.595611, 3.096611, 7.990683, 0.199167, 0.080387, 0.45895};
	int y_79 = 1;
	score(x_79, result);
	printScoreCompare(result, length, y_79);
	delay(time);

	double x_80[] = {-0.094903, 3.344794, 9.450448, -1.467372, -0.288292, 0.365652};
	int y_80 = 1;
	score(x_80, result);
	printScoreCompare(result, length, y_80);
	delay(time);

	double x_81[] = {-0.490979, 1.532813, 9.696536, 0.151783, 0.126023, 0.485336};
	int y_81 = 1;
	score(x_81, result);
	printScoreCompare(result, length, y_81);
	delay(time);

	double x_82[] = {1.337169, 2.754272, 12.018208, -0.121709, -0.278657, -0.084368};
	int y_82 = 1;
	score(x_82, result);
	printScoreCompare(result, length, y_82);
	delay(time);

	double x_83[] = {-0.885109, 0.814456, 10.158026, 0.274658, -0.051124, -0.138118};
	int y_83 = 1;
	score(x_83, result);
	printScoreCompare(result, length, y_83);
	delay(time);

	double x_84[] = {0.020657, 3.640879, 7.965835, -0.267875, -0.060976, -0.126114};
	int y_84 = 1;
	score(x_84, result);
	printScoreCompare(result, length, y_84);
	delay(time);

	double x_85[] = {0.518073, 1.647474, 7.399563, 0.074903, -0.042796, 0.300408};
	int y_85 = 1;
	score(x_85, result);
	printScoreCompare(result, length, y_85);
	delay(time);

	double x_86[] = {-0.712668, 1.673221, 9.186696, 0.268032, -0.010546, 0.378941};
	int y_86 = 1;
	score(x_86, result);
	printScoreCompare(result, length, y_86);
	delay(time);

	double x_87[] = {-0.454455, 3.796705, 11.33443, -0.003536, 0.255132, 0.104756};
	int y_87 = 1;
	score(x_87, result);
	printScoreCompare(result, length, y_87);
	delay(time);

	double x_88[] = {-0.725092, 3.450924, 8.368797, 0.085495, -0.329309, 0.164403};
	int y_88 = 1;
	score(x_88, result);
	printScoreCompare(result, length, y_88);
	delay(time);

	double x_89[] = {-0.845741, 0.526006, 10.650053, -0.049892, -0.286261, -0.197195};
	int y_89 = 1;
	score(x_89, result);
	printScoreCompare(result, length, y_89);
	delay(time);

	double x_90[] = {0.077838, 3.645818, 8.692873, 0.124287, -0.235445, 0.180525};
	int y_90 = 1;
	score(x_90, result);
	printScoreCompare(result, length, y_90);
	delay(time);

	double x_91[] = {0.349972, 0.828677, 12.712913, -0.131592, -0.104142, 0.120706};
	int y_91 = 1;
	score(x_91, result);
	printScoreCompare(result, length, y_91);
	delay(time);

	double x_92[] = {0.599054, 1.610501, 6.459218, 0.182326, -0.081311, -0.202438};
	int y_92 = 1;
	score(x_92, result);
	printScoreCompare(result, length, y_92);
	delay(time);

	double x_93[] = {0.583337, -0.082928, 9.658814, 0.341802, 0.379332, -0.104096};
	int y_93 = 1;
	score(x_93, result);
	printScoreCompare(result, length, y_93);
	delay(time);

	double x_94[] = {0.080982, 2.710114, 6.508017, 0.128959, -0.210729, -2.5e-05};
	int y_94 = 1;
	score(x_94, result);
	printScoreCompare(result, length, y_94);
	delay(time);

	double x_95[] = {0.553848, 1.133443, 8.916807, 0.1689, 0.004079, 0.309952};
	int y_95 = 1;
	score(x_95, result);
	printScoreCompare(result, length, y_95);
	delay(time);

	double x_96[] = {1.133593, 1.682202, 8.981623, 0.645144, -0.105712, 0.259032};
	int y_96 = 1;
	score(x_96, result);
	printScoreCompare(result, length, y_96);
	delay(time);

	double x_97[] = {0.107027, 2.320475, 6.856492, 0.049209, -0.05503, 0.196256};
	int y_97 = 1;
	score(x_97, result);
	printScoreCompare(result, length, y_97);
	delay(time);

	double x_98[] = {-0.458646, 1.803749, 7.771539, -0.313529, -0.132979, -0.280679};
	int y_98 = 1;
	score(x_98, result);
	printScoreCompare(result, length, y_98);
	delay(time);

	double x_99[] = {-0.036225, 3.267106, 7.957303, -0.382315, 0.711144, 0.289718};
	int y_99 = 1;
	score(x_99, result);
	printScoreCompare(result, length, y_99);
	delay(time);

	double x_100[] = {0.743204, 1.361718, 8.35278, -0.605236, 0.124808, 0.082972};
	int y_100 = 1;
	score(x_100, result);
	printScoreCompare(result, length, y_100);
	delay(time);

	double x_101[] = {1.499731, 0.949326, 10.966794, -0.281121, 0.066559, 0.038339};
	int y_101 = 1;
	score(x_101, result);
	printScoreCompare(result, length, y_101);
	delay(time);

	double x_102[] = {-0.910856, 1.603615, 8.597072, 0.950688, 0.162053, 0.422634};
	int y_102 = 1;
	score(x_102, result);
	printScoreCompare(result, length, y_102);
	delay(time);

	double x_103[] = {-0.103734, 2.579137, 8.15085, 0.099942, -0.079635, 0.403021};
	int y_103 = 1;
	score(x_103, result);
	printScoreCompare(result, length, y_103);
	delay(time);

	double x_104[] = {-0.261955, 3.911516, 8.647517, 0.026296, -0.039249, -0.091335};
	int y_104 = 1;
	score(x_104, result);
	printScoreCompare(result, length, y_104);
	delay(time);

	double x_105[] = {-0.738714, 2.578538, 9.252859, -0.102908, 0.031875, -0.027748};
	int y_105 = 1;
	score(x_105, result);
	printScoreCompare(result, length, y_105);
	delay(time);

	double x_106[] = {-1.147813, 1.746269, 8.938512, 0.422767, 0.151303, 0.084959};
	int y_106 = 1;
	score(x_106, result);
	printScoreCompare(result, length, y_106);
	delay(time);

	double x_107[] = {-0.233365, 2.61611, 7.527846, -0.032462, 0.068207, 0.040996};
	int y_107 = 1;
	score(x_107, result);
	printScoreCompare(result, length, y_107);
	delay(time);

	double x_108[] = {-0.136815, 2.206861, 6.271508, 0.182769, -0.004798, -0.091947};
	int y_108 = 1;
	score(x_108, result);
	printScoreCompare(result, length, y_108);
	delay(time);

	double x_109[] = {0.704435, 2.924469, 10.981763, -0.187802, -0.141779, -0.093954};
	int y_109 = 1;
	score(x_109, result);
	printScoreCompare(result, length, y_109);
	delay(time);

	double x_110[] = {-1.628164, 3.756738, 10.419532, 0.647498, -0.09653, 0.225882};
	int y_110 = 1;
	score(x_110, result);
	printScoreCompare(result, length, y_110);
	delay(time);

	double x_111[] = {0.320184, 2.973417, 6.416557, 0.01106, 0.053914, 0.050469};
	int y_111 = 1;
	score(x_111, result);
	printScoreCompare(result, length, y_111);
	delay(time);

	double x_112[] = {-0.729283, 1.549727, 11.772719, -0.461102, -0.095152, 0.454655};
	int y_112 = 1;
	score(x_112, result);
	printScoreCompare(result, length, y_112);
	delay(time);

	double x_113[] = {-0.546214, 2.33694, 6.707552, 0.273674, -0.038916, -0.161703};
	int y_113 = 1;
	score(x_113, result);
	printScoreCompare(result, length, y_113);
	delay(time);

	double x_114[] = {-1.287323, 3.945495, 10.597662, 0.168115, 0.334822, 0.117682};
	int y_114 = 1;
	score(x_114, result);
	printScoreCompare(result, length, y_114);
	delay(time);

	double x_115[] = {-0.034578, 3.051255, 8.253387, 0.112534, -0.306746, -0.041875};
	int y_115 = 1;
	score(x_115, result);
	printScoreCompare(result, length, y_115);
	delay(time);

	double x_116[] = {-0.376467, 2.212998, 11.865226, 0.050056, 0.001153, -0.073184};
	int y_116 = 1;
	score(x_116, result);
	printScoreCompare(result, length, y_116);
	delay(time);

	double x_117[] = {-0.108225, 2.223925, 13.210329, -0.086483, 0.154826, 0.18668};
	int y_117 = 1;
	score(x_117, result);
	printScoreCompare(result, length, y_117);
	delay(time);

	double x_118[] = {-0.045505, 3.131039, 7.516918, -0.290542, -0.367761, -0.034876};
	int y_118 = 1;
	score(x_118, result);
	printScoreCompare(result, length, y_118);
	delay(time);

	double x_119[] = {-1.520688, 3.705395, 10.619517, 0.244849, -0.360908, 0.123661};
	int y_119 = 1;
	score(x_119, result);
	printScoreCompare(result, length, y_119);
	delay(time);

	double x_120[] = {-0.151335, 2.601889, 9.147627, 0.123141, 0.182128, 0.06719};
	int y_120 = 1;
	score(x_120, result);
	printScoreCompare(result, length, y_120);
	delay(time);

	double x_121[] = {0.936902, 1.076561, 7.655979, -0.023915, 0.186144, 0.106816};
	int y_121 = 1;
	score(x_121, result);
	printScoreCompare(result, length, y_121);
	delay(time);

	double x_122[] = {-0.883762, 2.597698, 9.308543, 0.360679, -0.305648, 0.086385};
	int y_122 = 1;
	score(x_122, result);
	printScoreCompare(result, length, y_122);
	delay(time);

	double x_123[] = {0.446222, 1.383573, 12.0221, 0.074186, -0.265013, 0.087352};
	int y_123 = 1;
	score(x_123, result);
	printScoreCompare(result, length, y_123);
	delay(time);

	double x_124[] = {-0.790806, 1.667233, 9.77632, -0.008462, 0.035829, -0.00312};
	int y_124 = 1;
	score(x_124, result);
	printScoreCompare(result, length, y_124);
	delay(time);

	double x_125[] = {-0.64426, 3.244054, 8.973839, 0.31527, 0.116967, 0.034653};
	int y_125 = 1;
	score(x_125, result);
	printScoreCompare(result, length, y_125);
	delay(time);

	double x_126[] = {-0.723745, 2.099833, 10.013128, 0.397491, 0.137176, -0.110091};
	int y_126 = 1;
	score(x_126, result);
	printScoreCompare(result, length, y_126);
	delay(time);

	double x_127[] = {1.146466, 1.612148, 8.744067, -0.237544, -0.142793, 0.073983};
	int y_127 = 1;
	score(x_127, result);
	printScoreCompare(result, length, y_127);
	delay(time);

	double x_128[] = {1.511706, 2.303709, 8.713979, -0.889952, -0.45757, -0.40471};
	int y_128 = 1;
	score(x_128, result);
	printScoreCompare(result, length, y_128);
	delay(time);

	double x_129[] = {0.120948, 3.339855, 8.618178, 0.299525, -0.25784, 0.232767};
	int y_129 = 1;
	score(x_129, result);
	printScoreCompare(result, length, y_129);
	delay(time);

	double x_130[] = {1.107397, 2.594405, 9.005273, -0.162879, 0.346562, 0.184082};
	int y_130 = 1;
	score(x_130, result);
	printScoreCompare(result, length, y_130);
	delay(time);

	double x_131[] = {-0.316292, -0.032632, 14.71964, -0.151315, -0.034528, -0.0416};
	int y_131 = 1;
	score(x_131, result);
	printScoreCompare(result, length, y_131);
	delay(time);

	double x_132[] = {-0.718805, 1.433719, 12.642111, -0.188187, 0.03973, -0.362133};
	int y_132 = 1;
	score(x_132, result);
	printScoreCompare(result, length, y_132);
	delay(time);

	double x_133[] = {0.840352, 1.281485, 12.44048, 0.022125, 0.110819, -0.124121};
	int y_133 = 1;
	score(x_133, result);
	printScoreCompare(result, length, y_133);
	delay(time);

	double x_134[] = {-0.209564, 3.571872, 10.256971, 0.159246, -0.084921, -0.111374};
	int y_134 = 1;
	score(x_134, result);
	printScoreCompare(result, length, y_134);
	delay(time);

	double x_135[] = {-0.486039, 1.745071, 9.522298, -0.187543, -0.144632, 0.074731};
	int y_135 = 1;
	score(x_135, result);
	printScoreCompare(result, length, y_135);
	delay(time);

	double x_136[] = {-0.074994, 4.258345, 10.304122, -0.034359, -0.051959, -0.227386};
	int y_136 = 1;
	score(x_136, result);
	printScoreCompare(result, length, y_136);
	delay(time);

	double x_137[] = {0.798889, 2.949616, 11.051967, -0.005338, -0.669185, -0.064439};
	int y_137 = 1;
	score(x_137, result);
	printScoreCompare(result, length, y_137);
	delay(time);

	double x_138[] = {-0.444576, 4.285887, 12.58493, -0.614357, 0.078477, -0.471799};
	int y_138 = 1;
	score(x_138, result);
	printScoreCompare(result, length, y_138);
	delay(time);

	double x_139[] = {-0.959804, 1.606908, 8.613688, 0.191242, -0.418907, 0.227552};
	int y_139 = 1;
	score(x_139, result);
	printScoreCompare(result, length, y_139);
	delay(time);

	double x_140[] = {0.091909, 3.753295, 10.735376, -0.319526, -0.118331, 0.091547};
	int y_140 = 1;
	score(x_140, result);
	printScoreCompare(result, length, y_140);
	delay(time);

	double x_141[] = {0.001347, 2.551594, 10.417437, -1.079697, -0.508456, -0.417025};
	int y_141 = 1;
	score(x_141, result);
	printScoreCompare(result, length, y_141);
	delay(time);

	double x_142[] = {-1.093476, 4.69828, 8.90094, -0.291323, 0.145343, -0.033145};
	int y_142 = 1;
	score(x_142, result);
	printScoreCompare(result, length, y_142);
	delay(time);

	double x_143[] = {0.109872, 3.815715, 10.319989, 0.125664, 0.075556, 0.149551};
	int y_143 = 1;
	score(x_143, result);
	printScoreCompare(result, length, y_143);
	delay(time);

	double x_144[] = {0.525856, 0.813858, 7.764803, -0.144905, 0.042365, -0.104289};
	int y_144 = 1;
	score(x_144, result);
	printScoreCompare(result, length, y_144);
	delay(time);

	double x_145[] = {0.424218, 3.700605, 10.166259, 0.143517, -0.059872, 0.164211};
	int y_145 = 1;
	score(x_145, result);
	printScoreCompare(result, length, y_145);
	delay(time);

	double x_146[] = {1.96661, 1.467099, 9.789044, -0.226273, -0.203184, 0.015924};
	int y_146 = 1;
	score(x_146, result);
	printScoreCompare(result, length, y_146);
	delay(time);

	double x_147[] = {-0.720602, 2.956801, 7.64625, 0.158275, 0.106851, -0.269339};
	int y_147 = 1;
	score(x_147, result);
	printScoreCompare(result, length, y_147);
	delay(time);

	double x_148[] = {-0.436941, 2.271077, 6.727011, 0.059819, -0.055601, -0.20044};
	int y_148 = 1;
	score(x_148, result);
	printScoreCompare(result, length, y_148);
	delay(time);

	double x_149[] = {-0.724044, 2.049538, 9.608369, 0.152535, 0.082657, -0.244031};
	int y_149 = 1;
	score(x_149, result);
	printScoreCompare(result, length, y_149);
	delay(time);

	double x_150[] = {0.966241, 0.104782, 10.953622, -0.268148, -0.193186, -0.238834};
	int y_150 = 1;
	score(x_150, result);
	printScoreCompare(result, length, y_150);
	delay(time);

	double x_151[] = {-0.177231, 1.456172, 12.348571, 0.644894, 0.246732, 0.570602};
	int y_151 = 1;
	score(x_151, result);
	printScoreCompare(result, length, y_151);
	delay(time);

	double x_152[] = {0.230072, 2.291435, 6.518794, 0.301234, 0.064757, -0.086323};
	int y_152 = 1;
	score(x_152, result);
	printScoreCompare(result, length, y_152);
	delay(time);

	double x_153[] = {-0.86535, 1.965114, 9.50224, 0.08985, -0.523828, 0.292612};
	int y_153 = 1;
	score(x_153, result);
	printScoreCompare(result, length, y_153);
	delay(time);

	double x_154[] = {-0.133073, 1.280587, 7.405251, 0.01159, 0.015864, 0.086999};
	int y_154 = 1;
	score(x_154, result);
	printScoreCompare(result, length, y_154);
	delay(time);

	double x_155[] = {-0.044308, 2.039808, 5.854326, -0.123682, -0.025943, 0.136935};
	int y_155 = 1;
	score(x_155, result);
	printScoreCompare(result, length, y_155);
	delay(time);

	double x_156[] = {-0.885708, 1.357677, 7.620353, -0.076714, 0.026196, -0.519419};
	int y_156 = 1;
	score(x_156, result);
	printScoreCompare(result, length, y_156);
	delay(time);

	double x_157[] = {-0.505349, 2.090852, 6.937773, 0.340692, -0.235963, 0.125591};
	int y_157 = 1;
	score(x_157, result);
	printScoreCompare(result, length, y_157);
	delay(time);

	double x_158[] = {-0.337099, 2.221081, 11.548485, -0.433195, -0.237545, -0.033992};
	int y_158 = 1;
	score(x_158, result);
	printScoreCompare(result, length, y_158);
	delay(time);

	double x_159[] = {0.225581, 2.446063, 10.799892, 0.008795, -0.099212, -0.100534};
	int y_159 = 1;
	score(x_159, result);
	printScoreCompare(result, length, y_159);
	delay(time);

	double x_160[] = {-0.320633, 3.698359, 7.777976, -0.460826, -0.544928, -0.478999};
	int y_160 = 1;
	score(x_160, result);
	printScoreCompare(result, length, y_160);
	delay(time);

	double x_161[] = {1.13494, 1.162034, 13.334421, -0.034454, -0.194909, 0.245621};
	int y_161 = 1;
	score(x_161, result);
	printScoreCompare(result, length, y_161);
	delay(time);

	double x_162[] = {-0.249381, 2.24084, 9.086255, -0.086233, -0.195154, -0.033327};
	int y_162 = 1;
	score(x_162, result);
	printScoreCompare(result, length, y_162);
	delay(time);

	double x_163[] = {-0.541873, 1.914519, 10.594519, -0.023859, 0.543961, 0.043984};
	int y_163 = 1;
	score(x_163, result);
	printScoreCompare(result, length, y_163);
	delay(time);

	double x_164[] = {0.180525, 4.024232, 12.431499, -0.062521, -0.146271, -0.23708};
	int y_164 = 1;
	score(x_164, result);
	printScoreCompare(result, length, y_164);
	delay(time);

	double x_165[] = {1.444197, 1.784589, 10.467882, -0.513642, -0.473406, 0.128484};
	int y_165 = 1;
	score(x_165, result);
	printScoreCompare(result, length, y_165);
	delay(time);

	double x_166[] = {-0.355211, 5.781727, 9.558822, 0.240357, 0.281866, 0.271796};
	int y_166 = 1;
	score(x_166, result);
	printScoreCompare(result, length, y_166);
	delay(time);

	double x_167[] = {-0.330513, 2.15447, 11.83933, -0.024959, 0.375861, -0.221055};
	int y_167 = 1;
	score(x_167, result);
	printScoreCompare(result, length, y_167);
	delay(time);

	double x_168[] = {-0.121697, 2.03891, 7.07384, -0.161818, -0.451661, 0.073445};
	int y_168 = 1;
	score(x_168, result);
	printScoreCompare(result, length, y_168);
	delay(time);

	double x_169[] = {-0.012574, 2.651885, 11.593391, -0.130925, -0.158166, -0.170244};
	int y_169 = 1;
	score(x_169, result);
	printScoreCompare(result, length, y_169);
	delay(time);

	double x_170[] = {0.525108, 0.438887, 8.557554, -0.255519, 0.000848, 0.125558};
	int y_170 = 1;
	score(x_170, result);
	printScoreCompare(result, length, y_170);
	delay(time);

	double x_171[] = {0.083077, 2.891537, 11.53621, 0.254887, 0.040757, -0.042382};
	int y_171 = 1;
	score(x_171, result);
	printScoreCompare(result, length, y_171);
	delay(time);

	double x_172[] = {0.809666, 1.451232, 8.303084, 0.097165, 0.039494, -0.117866};
	int y_172 = 1;
	score(x_172, result);
	printScoreCompare(result, length, y_172);
	delay(time);

	double x_173[] = {0.184566, 1.400338, 6.472989, 0.166588, -0.041303, 0.294619};
	int y_173 = 1;
	score(x_173, result);
	printScoreCompare(result, length, y_173);
	delay(time);

	double x_174[] = {0.632285, 3.008594, 7.137607, -0.664199, -0.407888, 0.185775};
	int y_174 = 1;
	score(x_174, result);
	printScoreCompare(result, length, y_174);
	delay(time);

	double x_175[] = {-0.048948, 1.813928, 6.465655, 0.137744, 0.073293, -0.046859};
	int y_175 = 1;
	score(x_175, result);
	printScoreCompare(result, length, y_175);
	delay(time);

	double x_176[] = {0.889151, 1.866169, 6.79961, 0.287225, 0.002228, 0.056815};
	int y_176 = 1;
	score(x_176, result);
	printScoreCompare(result, length, y_176);
	delay(time);

	double x_177[] = {-0.139959, 2.502047, 7.109316, 0.096896, 0.272481, -0.193333};
	int y_177 = 1;
	score(x_177, result);
	printScoreCompare(result, length, y_177);
	delay(time);

	double x_178[] = {-0.382006, 3.573219, 8.017927, 0.096916, -0.207927, 0.214367};
	int y_178 = 1;
	score(x_178, result);
	printScoreCompare(result, length, y_178);
	delay(time);

	double x_179[] = {-0.236808, 1.905088, 6.938671, 0.117048, 0.06567, -0.153952};
	int y_179 = 1;
	score(x_179, result);
	printScoreCompare(result, length, y_179);
	delay(time);

	double x_180[] = {-0.377216, 3.381019, 12.138109, -0.552964, 0.049196, 0.035546};
	int y_180 = 1;
	score(x_180, result);
	printScoreCompare(result, length, y_180);
	delay(time);

	double x_181[] = {-0.590223, 2.450105, 6.555468, 0.100246, 0.010518, 0.118367};
	int y_181 = 1;
	score(x_181, result);
	printScoreCompare(result, length, y_181);
	delay(time);

	double x_182[] = {1.417552, 3.040627, 10.802436, -0.430997, 0.209085, -0.160255};
	int y_182 = 1;
	score(x_182, result);
	printScoreCompare(result, length, y_182);
	delay(time);

	double x_183[] = {-0.63019, 2.53902, 9.635613, -1.176862, -0.427667, -0.235534};
	int y_183 = 1;
	score(x_183, result);
	printScoreCompare(result, length, y_183);
	delay(time);

	double x_184[] = {-0.385149, 1.91886, 7.552095, -0.029308, 0.08433, -0.237615};
	int y_184 = 1;
	score(x_184, result);
	printScoreCompare(result, length, y_184);
	delay(time);

	double x_185[] = {0.040865, 2.681224, 7.070547, 0.050114, 0.026339, 0.351232};
	int y_185 = 1;
	score(x_185, result);
	printScoreCompare(result, length, y_185);
	delay(time);

	double x_186[] = {1.137185, 1.927841, 12.133917, -0.187926, -0.100201, -0.004579};
	int y_186 = 1;
	score(x_186, result);
	printScoreCompare(result, length, y_186);
	delay(time);

	double x_187[] = {-0.032183, 1.028661, 8.508606, -0.04723, -0.402242, 0.095468};
	int y_187 = 1;
	score(x_187, result);
	printScoreCompare(result, length, y_187);
	delay(time);

	double x_188[] = {-0.03368, 1.001268, 8.502768, -0.056409, 0.215921, 0.106232};
	int y_188 = 1;
	score(x_188, result);
	printScoreCompare(result, length, y_188);
	delay(time);

	double x_189[] = {0.059426, 3.143463, 8.143366, -0.174471, -0.239439, -0.174923};
	int y_189 = 1;
	score(x_189, result);
	printScoreCompare(result, length, y_189);
	delay(time);

	double x_190[] = {-0.601749, 1.448538, 9.751023, 0.020742, -0.268058, 0.156639};
	int y_190 = 1;
	score(x_190, result);
	printScoreCompare(result, length, y_190);
	delay(time);

	double x_191[] = {-0.256117, 1.296304, 11.671379, -0.024269, -0.219688, 0.204717};
	int y_191 = 1;
	score(x_191, result);
	printScoreCompare(result, length, y_191);
	delay(time);

	double x_192[] = {-0.285606, 2.59186, 9.299262, -0.169709, 0.14613, -0.133032};
	int y_192 = 1;
	score(x_192, result);
	printScoreCompare(result, length, y_192);
	delay(time);

	double x_193[] = {0.118553, 1.546434, 8.219108, 0.423271, -0.14943, 0.139957};
	int y_193 = 1;
	score(x_193, result);
	printScoreCompare(result, length, y_193);
	delay(time);

	double x_194[] = {1.004561, 1.710194, 7.346573, -0.148503, -0.463295, -0.102637};
	int y_194 = 1;
	score(x_194, result);
	printScoreCompare(result, length, y_194);
	delay(time);

	double x_195[] = {-0.085173, 1.989513, 6.856492, 0.021622, -0.130604, 0.186845};
	int y_195 = 1;
	score(x_195, result);
	printScoreCompare(result, length, y_195);
	delay(time);

	double x_196[] = {-0.20208, 2.66416, 6.468199, -0.075696, -0.135418, -0.049271};
	int y_196 = 1;
	score(x_196, result);
	printScoreCompare(result, length, y_196);
	delay(time);

	double x_197[] = {0.501158, 0.862207, 7.320976, -0.146655, 0.092726, 0.250318};
	int y_197 = 1;
	score(x_197, result);
	printScoreCompare(result, length, y_197);
	delay(time);

	double x_198[] = {1.620979, 2.177222, 8.901689, 1.094742, -0.307704, 0.24014};
	int y_198 = 1;
	score(x_198, result);
	printScoreCompare(result, length, y_198);
	delay(time);

	double x_199[] = {0.449515, 2.330953, 9.353749, -0.423191, -0.212535, -0.07097};
	int y_199 = 1;
	score(x_199, result);
	printScoreCompare(result, length, y_199);
	delay(time);

	double x_200[] = {0.039069, 1.805096, 7.17488, 0.246259, -0.219911, 0.099033};
	int y_200 = 1;
	score(x_200, result);
	printScoreCompare(result, length, y_200);
	delay(time);

	double x_201[] = {-0.530197, 2.846331, 8.318801, 0.275954, -0.5131, -0.019431};
	int y_201 = 1;
	score(x_201, result);
	printScoreCompare(result, length, y_201);
	delay(time);

	double x_202[] = {1.481469, 1.12985, 6.865473, 0.099977, -0.094817, 0.171015};
	int y_202 = 1;
	score(x_202, result);
	printScoreCompare(result, length, y_202);
	delay(time);

	double x_203[] = {0.838107, 1.564696, 11.853401, -0.262097, 0.268481, -0.036718};
	int y_203 = 1;
	score(x_203, result);
	printScoreCompare(result, length, y_203);
	delay(time);

	double x_204[] = {0.53394, 0.693658, 9.288035, -0.000122, -0.422242, -0.131824};
	int y_204 = 1;
	score(x_204, result);
	printScoreCompare(result, length, y_204);
	delay(time);

	double x_205[] = {-0.253573, 1.451382, 7.549102, -0.541451, -0.330748, 0.157874};
	int y_205 = 1;
	score(x_205, result);
	printScoreCompare(result, length, y_205);
	delay(time);

	double x_206[] = {-0.255818, 2.141147, 7.497908, -0.164997, 0.23818, -0.284111};
	int y_206 = 1;
	score(x_206, result);
	printScoreCompare(result, length, y_206);
	delay(time);

	double x_207[] = {0.775687, 1.714684, 7.818092, -0.198944, 0.052963, -0.266807};
	int y_207 = 1;
	score(x_207, result);
	printScoreCompare(result, length, y_207);
	delay(time);

	double x_208[] = {-0.67345, 1.31756, 10.249187, -0.054225, -0.048809, -0.084365};
	int y_208 = 1;
	score(x_208, result);
	printScoreCompare(result, length, y_208);
	delay(time);

	double x_209[] = {-0.557441, 1.954486, 12.278666, 0.097227, -0.159456, -0.189021};
	int y_209 = 1;
	score(x_209, result);
	printScoreCompare(result, length, y_209);
	delay(time);

	double x_210[] = {0.215552, 2.666255, 8.691077, -0.048754, 0.007973, -0.252802};
	int y_210 = 1;
	score(x_210, result);
	printScoreCompare(result, length, y_210);
	delay(time);

	double x_211[] = {0.724493, 2.598147, 10.355765, 0.028244, 0.033592, 0.043917};
	int y_211 = 1;
	score(x_211, result);
	printScoreCompare(result, length, y_211);
	delay(time);

	double x_212[] = {-0.410746, 0.972228, 10.154284, 0.22346, 0.221426, 0.154162};
	int y_212 = 1;
	score(x_212, result);
	printScoreCompare(result, length, y_212);
	delay(time);

	double x_213[] = {-0.993783, 1.162333, 10.062525, 0.115703, -0.219387, -0.247879};
	int y_213 = 1;
	score(x_213, result);
	printScoreCompare(result, length, y_213);
	delay(time);

	double x_214[] = {-0.956661, 2.530638, 13.038636, 0.176379, 0.527693, 0.229717};
	int y_214 = 1;
	score(x_214, result);
	printScoreCompare(result, length, y_214);
	delay(time);

	double x_215[] = {0.843197, 1.942511, 7.406448, -0.116036, -0.097775, -0.074061};
	int y_215 = 1;
	score(x_215, result);
	printScoreCompare(result, length, y_215);
	delay(time);

	double x_216[] = {-0.095651, 0.961002, 7.369325, 0.304767, -0.18683, -0.087566};
	int y_216 = 1;
	score(x_216, result);
	printScoreCompare(result, length, y_216);
	delay(time);

	double x_217[] = {-1.26951, 3.189717, 9.955947, -0.375339, 0.133501, -0.299546};
	int y_217 = 1;
	score(x_217, result);
	printScoreCompare(result, length, y_217);
	delay(time);

	double x_218[] = {-0.191602, 2.764601, 7.210206, 0.023224, -0.184489, 0.101797};
	int y_218 = 1;
	score(x_218, result);
	printScoreCompare(result, length, y_218);
	delay(time);

	double x_219[] = {-0.398771, 3.499872, 7.269333, 0.044423, 0.00459, 0.036121};
	int y_219 = 1;
	score(x_219, result);
	printScoreCompare(result, length, y_219);
	delay(time);

	double x_220[] = {0.050295, 2.701283, 10.032288, -0.143941, 0.027608, -0.222439};
	int y_220 = 1;
	score(x_220, result);
	printScoreCompare(result, length, y_220);
	delay(time);

	double x_221[] = {-0.561482, 2.759512, 11.606863, -0.590695, 0.250153, -0.387484};
	int y_221 = 1;
	score(x_221, result);
	printScoreCompare(result, length, y_221);
	delay(time);

	double x_222[] = {-1.655408, 3.952381, 12.018358, 0.229997, 0.27806, 0.018884};
	int y_222 = 1;
	score(x_222, result);
	printScoreCompare(result, length, y_222);
	delay(time);

	double x_223[] = {0.488434, 0.906814, 5.829627, 0.194903, 0.147355, -0.165437};
	int y_223 = 1;
	score(x_223, result);
	printScoreCompare(result, length, y_223);
	delay(time);

	double x_224[] = {-0.841849, 2.964136, 12.070749, 0.185022, -0.100381, 0.03875};
	int y_224 = 1;
	score(x_224, result);
	printScoreCompare(result, length, y_224);
	delay(time);

	double x_225[] = {0.760269, 2.319277, 8.829838, -0.29471, 0.4312, -0.392329};
	int y_225 = 1;
	score(x_225, result);
	printScoreCompare(result, length, y_225);
	delay(time);

	double x_226[] = {-1.021176, 0.51448, 9.895921, -0.11099, -0.008395, -0.15874};
	int y_226 = 1;
	score(x_226, result);
	printScoreCompare(result, length, y_226);
	delay(time);

	double x_227[] = {-1.137335, 2.823429, 8.128846, 0.013136, 0.140677, -0.066948};
	int y_227 = 1;
	score(x_227, result);
	printScoreCompare(result, length, y_227);
	delay(time);

	double x_228[] = {-0.176483, 4.434379, 8.624166, 0.246745, 0.131575, 0.028768};
	int y_228 = 1;
	score(x_228, result);
	printScoreCompare(result, length, y_228);
	delay(time);

	double x_229[] = {0.174986, 0.621508, 13.794265, 0.23235, -0.079079, 0.045635};
	int y_229 = 1;
	score(x_229, result);
	printScoreCompare(result, length, y_229);
	delay(time);

	double x_230[] = {-0.104632, 1.459465, 10.140064, -0.010648, -0.245668, 0.005263};
	int y_230 = 1;
	score(x_230, result);
	printScoreCompare(result, length, y_230);
	delay(time);

	double x_231[] = {-0.690065, 0.498463, 11.984977, 0.194698, -0.532665, 0.047412};
	int y_231 = 1;
	score(x_231, result);
	printScoreCompare(result, length, y_231);
	delay(time);

	double x_232[] = {0.321531, 2.402055, 7.536827, -0.073231, -0.028781, 0.128417};
	int y_232 = 1;
	score(x_232, result);
	printScoreCompare(result, length, y_232);
	delay(time);

	double x_233[] = {-0.027094, 2.230661, 8.243058, -0.308751, -0.377399, 0.110887};
	int y_233 = 1;
	score(x_233, result);
	printScoreCompare(result, length, y_233);
	delay(time);

	double x_234[] = {0.581541, 1.202749, 9.113049, 0.056824, 0.316184, -0.168466};
	int y_234 = 1;
	score(x_234, result);
	printScoreCompare(result, length, y_234);
	delay(time);

	double x_235[] = {-0.629591, 3.039729, 9.329649, -0.064898, -0.19656, 0.029766};
	int y_235 = 1;
	score(x_235, result);
	printScoreCompare(result, length, y_235);
	delay(time);

	double x_236[] = {-0.378413, 2.997517, 10.988499, 0.28736, 0.169253, 0.289548};
	int y_236 = 1;
	score(x_236, result);
	printScoreCompare(result, length, y_236);
	delay(time);

	double x_237[] = {-0.210762, 2.628983, 12.32043, -0.376689, -0.566231, -0.22664};
	int y_237 = 1;
	score(x_237, result);
	printScoreCompare(result, length, y_237);
	delay(time);

	double x_238[] = {-0.319286, 2.163601, 6.873407, 0.100367, -0.492384, 0.114596};
	int y_238 = 1;
	score(x_238, result);
	printScoreCompare(result, length, y_238);
	delay(time);

	double x_239[] = {0.829575, -0.035027, 11.849509, 0.131681, -0.211159, -0.355306};
	int y_239 = 1;
	score(x_239, result);
	printScoreCompare(result, length, y_239);
	delay(time);

	double x_240[] = {-0.924478, 3.352129, 9.33384, 0.058559, 0.019966, -0.321711};
	int y_240 = 1;
	score(x_240, result);
	printScoreCompare(result, length, y_240);
	delay(time);

	double x_241[] = {-0.488734, 3.643573, 10.766212, 0.0084, -0.008524, 0.024886};
	int y_241 = 1;
	score(x_241, result);
	printScoreCompare(result, length, y_241);
	delay(time);

	double x_242[] = {0.138013, 2.275867, 11.980786, -0.145598, 0.265217, 0.093728};
	int y_242 = 1;
	score(x_242, result);
	printScoreCompare(result, length, y_242);
	delay(time);

	double x_243[] = {0.674797, 1.38986, 10.065369, -0.057097, -0.410809, 0.522274};
	int y_243 = 1;
	score(x_243, result);
	printScoreCompare(result, length, y_243);
	delay(time);

	double x_244[] = {-0.088466, 2.17827, 8.097561, 0.726965, 0.045867, 0.281822};
	int y_244 = 1;
	score(x_244, result);
	printScoreCompare(result, length, y_244);
	delay(time);

	double x_245[] = {-0.148641, 2.132615, 6.795868, -0.098015, 0.247902, -0.009344};
	int y_245 = 1;
	score(x_245, result);
	printScoreCompare(result, length, y_245);
	delay(time);

	double x_246[] = {0.584834, 0.287253, 7.819739, 0.151994, 0.16137, 0.667033};
	int y_246 = 1;
	score(x_246, result);
	printScoreCompare(result, length, y_246);
	delay(time);

	double x_247[] = {-0.502206, 2.080374, 7.446864, -0.303095, 0.094491, -0.059904};
	int y_247 = 1;
	score(x_247, result);
	printScoreCompare(result, length, y_247);
	delay(time);

	double x_248[] = {-0.196092, 3.052153, 8.971144, 0.147877, 0.016011, -0.027399};
	int y_248 = 1;
	score(x_248, result);
	printScoreCompare(result, length, y_248);
	delay(time);

	double x_249[] = {0.107477, 2.303111, 8.540939, -0.015371, 0.043933, 0.366926};
	int y_249 = 1;
	score(x_249, result);
	printScoreCompare(result, length, y_249);
	delay(time);

}

// Declaring Global Variables
int color = 0;

void setup() {
  // LED Alive - Initialize pins as outputs
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);

  // Serial Output
  Serial.begin(115200);
}

void loop() {
    // LED Alive
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
  
  infer();

	// Looping Delay
	Serial.println();
	Serial.println("##### REPEATING... #####");
	Serial.println();
	delay(5000);
}
