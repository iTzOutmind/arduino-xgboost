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
            var0 = 0.15656269;
        } else {
            var0 = 0.19795671;
        }
    } else {
        var0 = 0.19834208;
    }
    double var1;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var1 = 0.14182125;
        } else {
            var1 = 0.17999482;
        }
    } else {
        var1 = 0.18033868;
    }
    double var2;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var2 = 0.12982251;
        } else {
            var2 = 0.16644102;
        }
    } else {
        var2 = 0.16676559;
    }
    double var3;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var3 = 0.119753994;
        } else {
            var3 = 0.15586506;
        }
    } else {
        var3 = 0.15618403;
    }
    double var4;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var4 = 0.11109014;
        } else {
            var4 = 0.14739709;
        }
    } else {
        var4 = 0.1477198;
    }
    double var5;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var5 = 0.103476584;
        } else {
            var5 = 0.14047568;
        }
    } else {
        var5 = 0.1408091;
    }
    double var6;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var6 = 0.096666574;
        } else {
            var6 = 0.13472109;
        }
    } else {
        if (input[0] < -0.23546) {
            var6 = 0.12879269;
        } else {
            var6 = 0.13589786;
        }
    }
    double var7;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var7 = 0.09048422;
        } else {
            var7 = 0.12986666;
        }
    } else {
        if (input[0] < -0.12005) {
            var7 = 0.12560539;
        } else {
            var7 = 0.13146636;
        }
    }
    double var8;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var8 = 0.08577417;
        } else {
            var8 = 0.12675703;
        }
    } else {
        if (input[0] < -0.23546) {
            var8 = 0.11932305;
        } else {
            var8 = 0.12702079;
        }
    }
    double var9;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var9 = 0.07946563;
        } else {
            var9 = 0.122161865;
        }
    } else {
        if (input[0] < -0.12005) {
            var9 = 0.11743708;
        } else {
            var9 = 0.12393345;
        }
    }
    double var10;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var10 = 0.0755475;
        } else {
            var10 = 0.120181456;
        }
    } else {
        if (input[0] < -0.248932) {
            var10 = 0.11142031;
        } else {
            var10 = 0.12043746;
        }
    }
    double var11;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var11 = 0.06981806;
        } else {
            var11 = 0.11628951;
        }
    } else {
        if (input[0] < -0.12005) {
            var11 = 0.110903166;
        } else {
            var11 = 0.11831985;
        }
    }
    double var12;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var12 = 0.06645946;
        } else {
            var12 = 0.11514119;
        }
    } else {
        if (input[0] < -0.12005) {
            var12 = 0.10807463;
        } else {
            var12 = 0.11602266;
        }
    }
    double var13;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var13 = 0.06227819;
        } else {
            var13 = 0.113023475;
        }
    } else {
        if (input[0] < -0.23546) {
            var13 = 0.102737285;
        } else {
            var13 = 0.11345116;
        }
    }
    double var14;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var14 = 0.057133313;
        } else {
            var14 = 0.10964256;
        }
    } else {
        if (input[0] < -0.12005) {
            var14 = 0.10292826;
        } else {
            var14 = 0.11219603;
        }
    }
    double var15;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var15 = 0.054435696;
        } else {
            var15 = 0.10942012;
        }
    } else {
        if (input[0] < -0.12005) {
            var15 = 0.10057404;
        } else {
            var15 = 0.110577896;
        }
    }
    double var16;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var16 = 0.050809007;
        } else {
            var16 = 0.107843235;
        }
    } else {
        if (input[0] < -0.12005) {
            var16 = 0.0983068;
        } else {
            var16 = 0.10911807;
        }
    }
    double var17;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var17 = 0.047349226;
        } else {
            var17 = 0.10638883;
        }
    } else {
        if (input[0] < -0.23546) {
            var17 = 0.092441164;
        } else {
            var17 = 0.10703212;
        }
    }
    double var18;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var18 = 0.04405211;
        } else {
            var18 = 0.105034545;
        }
    } else {
        if (input[0] < -0.12005) {
            var18 = 0.09387541;
        } else {
            var18 = 0.10658448;
        }
    }
    double var19;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var19 = 0.04091484;
        } else {
            var19 = 0.10376089;
        }
    } else {
        if (input[0] < -0.12005) {
            var19 = 0.09172604;
        } else {
            var19 = 0.10546186;
        }
    }
    double var20;
    if (input[0] < -0.391436) {
        if (input[1] < 1.997446) {
            var20 = 0.03661761;
        } else {
            var20 = 0.1002362;
        }
    } else {
        if (input[0] < -0.12005) {
            var20 = 0.08957862;
        } else {
            var20 = 0.10441633;
        }
    }
    double var21;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var21 = 0.035032235;
        } else {
            var21 = 0.10141512;
        }
    } else {
        if (input[0] < -0.12005) {
            var21 = 0.08741918;
        } else {
            var21 = 0.103433646;
        }
    }
    double var22;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var22 = 0.032367256;
        } else {
            var22 = 0.100287534;
        }
    } else {
        if (input[0] < -0.12005) {
            var22 = 0.085235946;
        } else {
            var22 = 0.10250115;
        }
    }
    double var23;
    if (input[0] < -0.391436) {
        if (input[1] < 2.085463) {
            var23 = 0.029854534;
        } else {
            var23 = 0.09918258;
        }
    } else {
        if (input[0] < -0.12005) {
            var23 = 0.083019294;
        } else {
            var23 = 0.101607405;
        }
    }
    double var24;
    if (input[0] < -0.291444) {
        if (input[1] < 1.997446) {
            var24 = 0.024893695;
        } else {
            var24 = 0.097158484;
        }
    } else {
        if (input[0] < -0.060774) {
            var24 = 0.08682415;
        } else {
            var24 = 0.101331174;
        }
    }
    double var25;
    if (input[0] < -0.291444) {
        if (input[1] < 1.997446) {
            var25 = 0.022844382;
        } else {
            var25 = 0.09590392;
        }
    } else {
        if (input[0] < -0.060774) {
            var25 = 0.08486886;
        } else {
            var25 = 0.10053678;
        }
    }
    double var26;
    if (input[0] < -0.291444) {
        if (input[1] < 2.085463) {
            var26 = 0.022183802;
        } else {
            var26 = 0.09781997;
        }
    } else {
        if (input[0] < -0.060774) {
            var26 = 0.08286331;
        } else {
            var26 = 0.099757366;
        }
    }
    double var27;
    if (input[0] < -0.248932) {
        if (input[1] < 1.997446) {
            var27 = 0.018464891;
        } else {
            var27 = 0.09435361;
        }
    } else {
        if (input[0] < 0.297431) {
            var27 = 0.08944794;
        } else {
            var27 = 0.10243603;
        }
    }
    double var28;
    if (input[0] < -0.248932) {
        if (input[1] < 2.085463) {
            var28 = 0.018108942;
        } else {
            var28 = 0.096565075;
        }
    } else {
        if (input[0] < 0.297431) {
            var28 = 0.08788739;
        } else {
            var28 = 0.10198239;
        }
    }
    double var29;
    if (input[0] < -0.248932) {
        if (input[1] < 2.085463) {
            var29 = 0.016539773;
        } else {
            var29 = 0.095585994;
        }
    } else {
        if (input[0] < 0.297431) {
            var29 = 0.086268865;
        } else {
            var29 = 0.101552464;
        }
    }
    double var30;
    if (input[0] < -0.248932) {
        if (input[1] < 2.085463) {
            var30 = 0.015088609;
        } else {
            var30 = 0.0945819;
        }
    } else {
        if (input[0] < 0.297431) {
            var30 = 0.084586106;
        } else {
            var30 = 0.101141416;
        }
    }
    double var31;
    if (input[0] < -0.248932) {
        if (input[2] < 10.339748) {
            var31 = 0.006738017;
        } else {
            var31 = 0.08100815;
        }
    } else {
        if (input[0] < 0.297431) {
            var31 = 0.08283385;
        } else {
            var31 = 0.100744836;
        }
    }
    double var32;
    if (input[1] < 1.997446) {
        if (input[0] < -0.127086) {
            var32 = 0.009713998;
        } else {
            var32 = 0.09090675;
        }
    } else {
        if (input[1] < 2.085463) {
            var32 = 0.06291243;
        } else {
            var32 = 0.09517541;
        }
    }
    double var33;
    if (input[1] < 1.997446) {
        if (input[0] < -0.127086) {
            var33 = 0.0088147335;
        } else {
            var33 = 0.08969767;
        }
    } else {
        if (input[1] < 2.085463) {
            var33 = 0.060287416;
        } else {
            var33 = 0.09426516;
        }
    }
    double var34;
    if (input[1] < 1.997446) {
        if (input[0] < -0.127086) {
            var34 = 0.007992999;
        } else {
            var34 = 0.08842711;
        }
    } else {
        if (input[1] < 2.085463) {
            var34 = 0.057653315;
        } else {
            var34 = 0.09331621;
        }
    }
    double var35;
    if (input[1] < 2.085463) {
        if (input[2] < 10.339748) {
            var35 = 0.002207428;
        } else {
            var35 = 0.07399611;
        }
    } else {
        if (input[2] < 5.835166) {
            var35 = 0.0011377167;
        } else {
            var35 = 0.09271496;
        }
    }
    double var36;
    if (input[0] < -0.248932) {
        if (input[2] < 10.339748) {
            var36 = -0.0042711725;
        } else {
            var36 = 0.07268157;
        }
    } else {
        if (input[0] < 0.297431) {
            var36 = 0.07270688;
        } else {
            var36 = 0.09914478;
        }
    }
    double var37;
    if (input[1] < 2.085463) {
        if (input[2] < 9.135503) {
            var37 = 0.070820384;
        } else {
            var37 = -0.002860349;
        }
    } else {
        if (input[1] < 2.748135) {
            var37 = 0.07864902;
        } else {
            var37 = 0.09821397;
        }
    }
    double var38;
    if (input[0] < -0.23546) {
        if (input[2] < 10.339748) {
            var38 = -0.007506924;
        } else {
            var38 = 0.069556125;
        }
    } else {
        if (input[0] < 0.297431) {
            var38 = 0.06887641;
        } else {
            var38 = 0.09856775;
        }
    }
    double var39;
    if (input[1] < 2.085463) {
        if (input[2] < 9.103769) {
            var39 = 0.06777754;
        } else {
            var39 = -0.006103948;
        }
    } else {
        if (input[1] < 2.748135) {
            var39 = 0.07548659;
        } else {
            var39 = 0.09747491;
        }
    }
    double var40;
    if (input[1] < 2.085463) {
        if (input[2] < 10.339748) {
            var40 = -0.0074356445;
        } else {
            var40 = 0.06529232;
        }
    } else {
        if (input[1] < 2.748135) {
            var40 = 0.07343694;
        } else {
            var40 = 0.09696148;
        }
    }
    double var41;
    if (input[0] < -0.12005) {
        if (input[1] < 1.226549) {
            var41 = -0.041699044;
        } else {
            var41 = 0.036896434;
        }
    } else {
        if (input[0] < 0.297431) {
            var41 = 0.067815654;
        } else {
            var41 = 0.09782681;
        }
    }
    double var42;
    if (input[2] < 9.135503) {
        if (input[3] < 0.037938) {
            var42 = 0.053359278;
        } else {
            var42 = 0.09141062;
        }
    } else {
        if (input[2] < 9.985435) {
            var42 = -0.07209372;
        } else {
            var42 = 0.062187146;
        }
    }
    double var43;
    if (input[0] < -0.12005) {
        if (input[2] < 8.975186) {
            var43 = 0.06460574;
        } else {
            var43 = -0.011044688;
        }
    } else {
        if (input[0] < 0.297431) {
            var43 = 0.06354579;
        } else {
            var43 = 0.09718362;
        }
    }
    double var44;
    if (input[1] < 2.085463) {
        if (input[2] < 10.339748) {
            var44 = -0.012708317;
        } else {
            var44 = 0.058621168;
        }
    } else {
        if (input[1] < 2.748135) {
            var44 = 0.06615663;
        } else {
            var44 = 0.09556315;
        }
    }
    double var45;
    if (input[0] < -0.060774) {
        if (input[2] < 10.41609) {
            var45 = -0.0125086745;
        } else {
            var45 = 0.060816962;
        }
    } else {
        if (input[5] < 0.577192) {
            var45 = 0.08516904;
        } else {
            var45 = -0.04498644;
        }
    }
    double var46;
    if (input[2] < 9.332343) {
        if (input[3] < 0.037938) {
            var46 = 0.041703474;
        } else {
            var46 = 0.084716834;
        }
    } else {
        if (input[2] < 9.985435) {
            var46 = -0.076153405;
        } else {
            var46 = 0.05363221;
        }
    }
    double var47;
    if (input[1] < 1.281635) {
        if (input[5] < -0.034233) {
            var47 = 0.03327688;
        } else {
            var47 = -0.060147375;
        }
    } else {
        if (input[1] < 2.085463) {
            var47 = 0.025115285;
        } else {
            var47 = 0.08059383;
        }
    }
    double var48;
    if (input[0] < -0.060774) {
        if (input[2] < 9.332343) {
            var48 = 0.048363615;
        } else {
            var48 = -0.017885009;
        }
    } else {
        if (input[0] < 0.409848) {
            var48 = 0.05851398;
        } else {
            var48 = 0.09885764;
        }
    }
    double var49;
    if (input[1] < 2.085463) {
        if (input[0] < 0.274529) {
            var49 = -0.0069532604;
        } else {
            var49 = 0.09361585;
        }
    } else {
        if (input[1] < 2.748135) {
            var49 = 0.055700462;
        } else {
            var49 = 0.09356394;
        }
    }
    double var50;
    if (input[2] < 8.975186) {
        if (input[3] < 0.037938) {
            var50 = 0.03914462;
        } else {
            var50 = 0.087200366;
        }
    } else {
        if (input[2] < 9.985435) {
            var50 = -0.049326673;
        } else {
            var50 = 0.04913355;
        }
    }
    double var51;
    if (input[1] < 1.281635) {
        if (input[0] < -0.654439) {
            var51 = 0.022358917;
        } else {
            var51 = -0.061335694;
        }
    } else {
        if (input[2] < 10.244696) {
            var51 = 0.020822382;
        } else {
            var51 = 0.08493118;
        }
    }
    double var52;
    if (input[0] < -0.060774) {
        if (input[0] < -0.780477) {
            var52 = 0.04034284;
        } else {
            var52 = -0.020703316;
        }
    } else {
        if (input[0] < 0.409848) {
            var52 = 0.051270243;
        } else {
            var52 = 0.09825582;
        }
    }
    double var53;
    if (input[2] < 8.975186) {
        if (input[0] < -0.744252) {
            var53 = 0.00091027096;
        } else {
            var53 = 0.06975727;
        }
    } else {
        if (input[2] < 10.339748) {
            var53 = -0.038773008;
        } else {
            var53 = 0.054122444;
        }
    }
    double var54;
    if (input[1] < 2.085463) {
        if (input[0] < 0.274529) {
            var54 = -0.009082637;
        } else {
            var54 = 0.09159446;
        }
    } else {
        if (input[1] < 2.748135) {
            var54 = 0.046950236;
        } else {
            var54 = 0.0916815;
        }
    }
    double var55;
    if (input[2] < 9.332343) {
        if (input[3] < 0.037938) {
            var55 = 0.024407653;
        } else {
            var55 = 0.07661751;
        }
    } else {
        if (input[2] < 9.985435) {
            var55 = -0.053814914;
        } else {
            var55 = 0.040651612;
        }
    }
    double var56;
    if (input[1] < 1.226549) {
        if (input[3] < 0.037938) {
            var56 = -0.06330487;
        } else {
            var56 = 0.023107715;
        }
    } else {
        if (input[2] < 10.244696) {
            var56 = 0.014803362;
        } else {
            var56 = 0.08018264;
        }
    }
    double var57;
    if (input[1] < 2.19758) {
        if (input[0] < 0.274529) {
            var57 = -0.008810746;
        } else {
            var57 = 0.090779714;
        }
    } else {
        if (input[1] < 2.828219) {
            var57 = 0.045879915;
        } else {
            var57 = 0.092043184;
        }
    }
    double var58;
    if (input[2] < 9.332343) {
        if (input[3] < 0.037938) {
            var58 = 0.021438405;
        } else {
            var58 = 0.073290855;
        }
    } else {
        if (input[2] < 10.339748) {
            var58 = -0.04015107;
        } else {
            var58 = 0.046315353;
        }
    }
    double var59;
    if (input[0] < 0.297431) {
        if (input[0] < -0.654439) {
            var59 = 0.026888425;
        } else {
            var59 = -0.024217207;
        }
    } else {
        if (input[3] < 0.50462) {
            var59 = 0.094442055;
        } else {
            var59 = 0.000310322;
        }
    }
    double var60;
    if (input[1] < 2.19758) {
        if (input[0] < 0.274529) {
            var60 = -0.008463952;
        } else {
            var60 = 0.088595584;
        }
    } else {
        if (input[1] < 2.828219) {
            var60 = 0.041721996;
        } else {
            var60 = 0.09097293;
        }
    }
    double var61;
    if (input[2] < 8.902737) {
        if (input[0] < -0.744252) {
            var61 = -0.018244801;
        } else {
            var61 = 0.06378781;
        }
    } else {
        if (input[0] < -0.672851) {
            var61 = 0.030938843;
        } else {
            var61 = -0.04098527;
        }
    }
    double var62;
    if (input[1] < 1.226549) {
        if (input[5] < -0.034233) {
            var62 = 0.026008239;
        } else {
            var62 = -0.054720372;
        }
    } else {
        if (input[2] < 10.244696) {
            var62 = 0.010024632;
        } else {
            var62 = 0.07605942;
        }
    }
    double var63;
    if (input[0] < 0.297431) {
        if (input[0] < -0.780477) {
            var63 = 0.033288866;
        } else {
            var63 = -0.01625993;
        }
    } else {
        if (input[4] < 0.408839) {
            var63 = 0.093164794;
        } else {
            var63 = 0.0049062534;
        }
    }
    double var64;
    if (input[1] < 2.748135) {
        if (input[0] < 0.409848) {
            var64 = -0.0063328044;
        } else {
            var64 = 0.09557479;
        }
    } else {
        if (input[3] < 0.33106) {
            var64 = 0.09323624;
        } else {
            var64 = 0.018484334;
        }
    }
    double var65;
    if (input[2] < 8.902737) {
        if (input[0] < -0.744252) {
            var65 = -0.019188134;
        } else {
            var65 = 0.060740866;
        }
    } else {
        if (input[0] < -0.654439) {
            var65 = 0.025123212;
        } else {
            var65 = -0.039492182;
        }
    }
    double var66;
    if (input[1] < 2.748135) {
        if (input[0] < 0.409848) {
            var66 = -0.006146772;
        } else {
            var66 = 0.09513717;
        }
    } else {
        if (input[3] < 0.33106) {
            var66 = 0.09248495;
        } else {
            var66 = 0.017110363;
        }
    }
    double var67;
    if (input[2] < 10.41609) {
        if (input[2] < 9.332343) {
            var67 = 0.03434765;
        } else {
            var67 = -0.03353323;
        }
    } else {
        if (input[0] < -1.668131) {
            var67 = -0.15101987;
        } else {
            var67 = 0.05457693;
        }
    }
    double var68;
    if (input[1] < 0.648452) {
        if (input[1] < 0.49532) {
            var68 = 0.010334966;
        } else {
            var68 = -0.18282352;
        }
    } else {
        if (input[2] < 10.448273) {
            var68 = 0.00033408936;
        } else {
            var68 = 0.060497787;
        }
    }
    double var69;
    if (input[1] < 2.748135) {
        if (input[4] < 0.047458) {
            var69 = -0.017786724;
        } else {
            var69 = 0.026782796;
        }
    } else {
        if (input[3] < 0.33106) {
            var69 = 0.091358714;
        } else {
            var69 = 0.012995771;
        }
    }
    double var70;
    if (input[0] < 0.409848) {
        if (input[0] < -0.767604) {
            var70 = 0.02898857;
        } else {
            var70 = -0.015340725;
        }
    } else {
        var70 = 0.09494255;
    }
    double var71;
    if (input[5] < -0.034233) {
        if (input[0] < -0.185464) {
            var71 = 0.016390948;
        } else {
            var71 = 0.088636;
        }
    } else {
        if (input[5] < 0.036372) {
            var71 = -0.07458909;
        } else {
            var71 = 0.01546115;
        }
    }
    double var72;
    if (input[1] < 2.748135) {
        if (input[0] < 0.409848) {
            var72 = -0.005612942;
        } else {
            var72 = 0.0936824;
        }
    } else {
        if (input[5] < 0.183788) {
            var72 = 0.0947912;
        } else {
            var72 = 0.026793053;
        }
    }
    double var73;
    if (input[2] < 8.902737) {
        if (input[0] < -0.744252) {
            var73 = -0.022591569;
        } else {
            var73 = 0.05530824;
        }
    } else {
        if (input[0] < -0.654439) {
            var73 = 0.023300713;
        } else {
            var73 = -0.037079763;
        }
    }
    double var74;
    if (input[1] < 2.748135) {
        if (input[4] < 0.029261) {
            var74 = -0.016846389;
        } else {
            var74 = 0.021775832;
        }
    } else {
        if (input[5] < 0.183788) {
            var74 = 0.09423246;
        } else {
            var74 = 0.025040586;
        }
    }
    double var75;
    if (input[3] < -0.049378) {
        if (input[2] < 9.985435) {
            var75 = 0.0077266465;
        } else {
            var75 = 0.07110027;
        }
    } else {
        if (input[3] < 0.023134) {
            var75 = -0.07756322;
        } else {
            var75 = 0.01786015;
        }
    }
    double var76;
    if (input[0] < 0.409848) {
        if (input[1] < 0.648452) {
            var76 = -0.049274422;
        } else {
            var76 = 0.005776753;
        }
    } else {
        var76 = 0.093599886;
    }
    double var77;
    if (input[2] < 10.339748) {
        if (input[0] < -0.822989) {
            var77 = 0.044204537;
        } else {
            var77 = -0.02367044;
        }
    } else {
        if (input[0] < -1.668131) {
            var77 = -0.12507217;
        } else {
            var77 = 0.047786765;
        }
    }
    double var78;
    if (input[2] < 8.902737) {
        if (input[0] < -1.270258) {
            var78 = -0.12155727;
        } else {
            var78 = 0.04240554;
        }
    } else {
        if (input[0] < -0.654439) {
            var78 = 0.020331534;
        } else {
            var78 = -0.033189442;
        }
    }
    double var79;
    if (input[0] < 0.409848) {
        if (input[1] < 2.828219) {
            var79 = -0.0052071563;
        } else {
            var79 = 0.08200693;
        }
    } else {
        var79 = 0.09306585;
    }
    double var80;
    if (input[5] < -0.034233) {
        if (input[0] < -0.185464) {
            var80 = 0.013748913;
        } else {
            var80 = 0.08614302;
        }
    } else {
        if (input[5] < 0.036372) {
            var80 = -0.05944041;
        } else {
            var80 = 0.012370779;
        }
    }
    double var81;
    if (input[2] < 10.339748) {
        if (input[0] < -0.822989) {
            var81 = 0.040481325;
        } else {
            var81 = -0.02145315;
        }
    } else {
        if (input[0] < -1.668131) {
            var81 = -0.10391804;
        } else {
            var81 = 0.045424808;
        }
    }
    double var82;
    if (input[2] < 7.988288) {
        if (input[0] < -0.744252) {
            var82 = -0.09926344;
        } else {
            var82 = 0.0676965;
        }
    } else {
        if (input[0] < -0.654439) {
            var82 = 0.01832304;
        } else {
            var82 = -0.025753248;
        }
    }
    double var83;
    if (input[0] < 0.409848) {
        if (input[1] < 2.828219) {
            var83 = -0.0048862784;
        } else {
            var83 = 0.080320165;
        }
    } else {
        var83 = 0.09224173;
    }
    double var84;
    if (input[5] < -0.034233) {
        if (input[0] < -0.185464) {
            var84 = 0.012602289;
        } else {
            var84 = 0.08451636;
        }
    } else {
        if (input[5] < 0.052508) {
            var84 = -0.04757763;
        } else {
            var84 = 0.013670839;
        }
    }
    double var85;
    if (input[2] < 10.339748) {
        if (input[0] < -0.822989) {
            var85 = 0.037345655;
        } else {
            var85 = -0.019442037;
        }
    } else {
        if (input[3] < 0.054683) {
            var85 = -0.0027005267;
        } else {
            var85 = 0.07694928;
        }
    }
    double var86;
    if (input[2] < 7.988288) {
        if (input[0] < -1.075364) {
            var86 = -0.23976819;
        } else {
            var86 = 0.054008752;
        }
    } else {
        if (input[0] < -0.654439) {
            var86 = 0.016262857;
        } else {
            var86 = -0.022803925;
        }
    }
    double var87;
    if (input[3] < -0.046814) {
        if (input[2] < 9.985435) {
            var87 = 0.004800326;
        } else {
            var87 = 0.06724044;
        }
    } else {
        if (input[3] < 0.023134) {
            var87 = -0.06030885;
        } else {
            var87 = 0.013925101;
        }
    }
    double var88;
    if (input[0] < 0.409848) {
        if (input[1] < 0.648452) {
            var88 = -0.04133866;
        } else {
            var88 = 0.0046090255;
        }
    } else {
        var88 = 0.09132094;
    }
    double var89;
    if (input[1] < 3.098407) {
        if (input[2] < 7.545509) {
            var89 = 0.04870343;
        } else {
            var89 = -0.0059975646;
        }
    } else {
        var89 = 0.091186985;
    }
    double var90;
    if (input[0] < 0.409848) {
        if (input[1] < 3.098407) {
            var90 = -0.0038382204;
        } else {
            var90 = 0.08992668;
        }
    } else {
        var90 = 0.090495415;
    }
    double var91;
    if (input[2] < 10.627001) {
        if (input[2] < 9.332343) {
            var91 = 0.023069842;
        } else {
            var91 = -0.02058678;
        }
    } else {
        if (input[0] < -1.668131) {
            var91 = -0.10144744;
        } else {
            var91 = 0.04515975;
        }
    }
    double var92;
    if (input[4] < 0.029261) {
        if (input[4] < -0.045858) {
            var92 = 0.014476522;
        } else {
            var92 = -0.0472537;
        }
    } else {
        if (input[2] < 9.929751) {
            var92 = 0.0035072924;
        } else {
            var92 = 0.05076116;
        }
    }
    double var93;
    if (input[0] < 0.409848) {
        if (input[1] < 0.648452) {
            var93 = -0.035278287;
        } else {
            var93 = 0.004176121;
        }
    } else {
        var93 = 0.08945643;
    }
    double var94;
    if (input[1] < 3.098407) {
        if (input[3] < -0.046814) {
            var94 = 0.017453732;
        } else {
            var94 = -0.011200864;
        }
    } else {
        var94 = 0.089231;
    }
    double var95;
    if (input[0] < 0.409848) {
        if (input[5] < -0.034233) {
            var95 = 0.0164561;
        } else {
            var95 = -0.010998748;
        }
    } else {
        var95 = 0.08851343;
    }
    double var96;
    if (input[1] < 3.098407) {
        if (input[2] < 7.545509) {
            var96 = 0.04454709;
        } else {
            var96 = -0.0049143913;
        }
    } else {
        var96 = 0.08827728;
    }
    double var97;
    if (input[2] < 10.339748) {
        if (input[0] < -0.822989) {
            var97 = 0.03547345;
        } else {
            var97 = -0.017397888;
        }
    } else {
        if (input[3] < 0.054683) {
            var97 = -0.005723146;
        } else {
            var97 = 0.07374663;
        }
    }
    double var98;
    if (input[4] < 0.047458) {
        if (input[4] < -0.045858) {
            var98 = 0.012557398;
        } else {
            var98 = -0.034310963;
        }
    } else {
        if (input[2] < 10.339748) {
            var98 = 0.006984549;
        } else {
            var98 = 0.06307022;
        }
    }
    double var99;
    if (input[2] < 8.902737) {
        if (input[3] < 0.037938) {
            var99 = -0.0020515055;
        } else {
            var99 = 0.06958183;
        }
    } else {
        if (input[0] < -0.654439) {
            var99 = 0.016441789;
        } else {
            var99 = -0.024310997;
        }
    }
    double var100;
    if (input[0] < 0.409848) {
        if (input[3] < -0.046814) {
            var100 = 0.016026441;
        } else {
            var100 = -0.010049022;
        }
    } else {
        var100 = 0.08761695;
    }
    double var101;
    if (input[1] < 3.098407) {
        if (input[3] < -0.971784) {
            var101 = -0.14528641;
        } else {
            var101 = -0.00015485786;
        }
    } else {
        var101 = 0.08724378;
    }
    double var102;
    if (input[0] < 0.409848) {
        if (input[1] < 0.648452) {
            var102 = -0.029840443;
        } else {
            var102 = 0.0037367276;
        }
    } else {
        var102 = 0.08659568;
    }
    double var103;
    if (input[2] < 10.339748) {
        if (input[0] < -0.822989) {
            var103 = 0.03202358;
        } else {
            var103 = -0.015259621;
        }
    } else {
        if (input[3] < 0.054683) {
            var103 = -0.00577683;
        } else {
            var103 = 0.07133705;
        }
    }
    double var104;
    if (input[2] < 7.545509) {
        if (input[0] < -0.75488) {
            var104 = -0.13224748;
        } else {
            var104 = 0.06721136;
        }
    } else {
        if (input[0] < -0.654439) {
            var104 = 0.012575914;
        } else {
            var104 = -0.015188036;
        }
    }
    double var105;
    if (input[0] < -1.668131) {
        if (input[1] < 1.41381) {
            var105 = -0.10268406;
        } else {
            var105 = 0.071652085;
        }
    } else {
        if (input[2] < 10.627001) {
            var105 = -0.004505715;
        } else {
            var105 = 0.038655113;
        }
    }
    double var106;
    if (input[1] < 3.098407) {
        if (input[5] < -0.023238) {
            var106 = 0.013838248;
        } else {
            var106 = -0.010235646;
        }
    } else {
        var106 = 0.086121514;
    }
    double var107;
    if (input[3] < -0.046814) {
        if (input[2] < 9.985435) {
            var107 = 0.001226089;
        } else {
            var107 = 0.0612757;
        }
    } else {
        if (input[3] < 0.023134) {
            var107 = -0.041048013;
        } else {
            var107 = 0.010627302;
        }
    }
    double var108;
    if (input[0] < 0.409848) {
        if (input[3] < -0.842268) {
            var108 = -0.10113918;
        } else {
            var108 = 0.00023636865;
        }
    } else {
        var108 = 0.085468225;
    }
    double var109;
    if (input[2] < 9.332343) {
        if (input[3] < 0.037938) {
            var109 = -0.0034367696;
        } else {
            var109 = 0.055057075;
        }
    } else {
        if (input[0] < -0.734223) {
            var109 = 0.019114284;
        } else {
            var109 = -0.018680418;
        }
    }
    double var110;
    if (input[4] < 0.021471) {
        if (input[4] < -0.045858) {
            var110 = 0.010164888;
        } else {
            var110 = -0.03610784;
        }
    } else {
        if (input[2] < 9.635313) {
            var110 = 0.036045164;
        } else {
            var110 = -0.0017203599;
        }
    }
    double var111;
    if (input[1] < 3.098407) {
        if (input[2] < 12.34438) {
            var111 = -0.0038169012;
        } else {
            var111 = 0.04169825;
        }
    } else {
        var111 = 0.084819935;
    }
    double var112;
    if (input[0] < 0.409848) {
        if (input[3] < -0.046814) {
            var112 = 0.013962417;
        } else {
            var112 = -0.0085094785;
        }
    } else {
        var112 = 0.084295824;
    }
    double var113;
    if (input[0] < -1.668131) {
        if (input[1] < 1.41381) {
            var113 = -0.088012315;
        } else {
            var113 = 0.069709815;
        }
    } else {
        if (input[2] < 10.627001) {
            var113 = -0.003759202;
        } else {
            var113 = 0.034915026;
        }
    }
    double var114;
    if (input[2] < 7.545509) {
        if (input[0] < -0.75488) {
            var114 = -0.111930825;
        } else {
            var114 = 0.06411757;
        }
    } else {
        if (input[0] < -0.654439) {
            var114 = 0.01155848;
        } else {
            var114 = -0.01369683;
        }
    }
    double var115;
    if (input[1] < 3.098407) {
        if (input[3] < -0.971784) {
            var115 = -0.12033488;
        } else {
            var115 = -0.000063204454;
        }
    } else {
        var115 = 0.08363532;
    }
    double var116;
    if (input[0] < 0.409848) {
        if (input[1] < 0.648452) {
            var116 = -0.025322283;
        } else {
            var116 = 0.0032533635;
        }
    } else {
        var116 = 0.083131336;
    }
    double var117;
    if (input[4] < -0.405461) {
        if (input[2] < 9.459579) {
            var117 = 0.04796612;
        } else {
            var117 = -0.075585835;
        }
    } else {
        if (input[1] < 1.226549) {
            var117 = -0.011876457;
        } else {
            var117 = 0.013206298;
        }
    }
    double var118;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var118 = 0.05279429;
        } else {
            var118 = -0.0058714906;
        }
    } else {
        if (input[1] < -0.11062) {
            var118 = -0.15510821;
        } else {
            var118 = 0.07521551;
        }
    }
    double var119;
    if (input[1] < 3.098407) {
        if (input[5] < -0.023238) {
            var119 = 0.011915985;
        } else {
            var119 = -0.008542336;
        }
    } else {
        var119 = 0.08226311;
    }
    double var120;
    if (input[0] < 0.409848) {
        if (input[3] < -0.842268) {
            var120 = -0.08254275;
        } else {
            var120 = 0.00027833998;
        }
    } else {
        var120 = 0.08181449;
    }
    double var121;
    if (input[3] < -0.098312) {
        if (input[2] < 8.403824) {
            var121 = 0.06988653;
        } else {
            var121 = 0.005615497;
        }
    } else {
        if (input[3] < 0.023134) {
            var121 = -0.02496644;
        } else {
            var121 = 0.008541095;
        }
    }
    double var122;
    if (input[4] < 0.021471) {
        if (input[4] < -0.045858) {
            var122 = 0.008578888;
        } else {
            var122 = -0.029770508;
        }
    } else {
        if (input[4] < 0.174985) {
            var122 = 0.028461779;
        } else {
            var122 = -0.009856331;
        }
    }
    double var123;
    if (input[4] < -0.405461) {
        if (input[2] < 9.459579) {
            var123 = 0.044576805;
        } else {
            var123 = -0.06707226;
        }
    } else {
        if (input[1] < 0.677491) {
            var123 = -0.024015455;
        } else {
            var123 = 0.0075612194;
        }
    }
    double var124;
    if (input[5] < 0.457916) {
        if (input[3] < -0.755599) {
            var124 = -0.09452476;
        } else {
            var124 = -0.0002994425;
        }
    } else {
        if (input[0] < -0.566123) {
            var124 = 0.08139114;
        } else {
            var124 = -0.0469455;
        }
    }
    double var125;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var125 = 0.05160076;
        } else {
            var125 = -0.0056517026;
        }
    } else {
        if (input[1] < -0.11062) {
            var125 = -0.124737136;
        } else {
            var125 = 0.07331083;
        }
    }
    double var126;
    if (input[1] < 3.098407) {
        if (input[0] < 0.409848) {
            var126 = -0.0019769599;
        } else {
            var126 = 0.080052696;
        }
    } else {
        var126 = 0.08093013;
    }
    double var127;
    if (input[3] < -0.046814) {
        if (input[2] < 9.985435) {
            var127 = -0.0005624795;
        } else {
            var127 = 0.056825813;
        }
    } else {
        if (input[3] < 0.023134) {
            var127 = -0.028429283;
        } else {
            var127 = 0.007262354;
        }
    }
    double var128;
    if (input[2] < 7.545509) {
        if (input[0] < -0.75488) {
            var128 = -0.098540425;
        } else {
            var128 = 0.060542535;
        }
    } else {
        if (input[0] < -0.654439) {
            var128 = 0.010982551;
        } else {
            var128 = -0.01259391;
        }
    }
    double var129;
    if (input[1] < 3.098407) {
        if (input[5] < 0.429356) {
            var129 = -0.0030826484;
        } else {
            var129 = 0.03402418;
        }
    } else {
        var129 = 0.07962938;
    }
    double var130;
    if (input[0] < -1.668131) {
        if (input[1] < 1.41381) {
            var130 = -0.07110368;
        } else {
            var130 = 0.06676276;
        }
    } else {
        if (input[2] < 10.627001) {
            var130 = -0.0031791397;
        } else {
            var130 = 0.030783316;
        }
    }
    double var131;
    if (input[0] < 0.409848) {
        if (input[4] < -0.405461) {
            var131 = -0.03501079;
        } else {
            var131 = 0.001417312;
        }
    } else {
        var131 = 0.079093814;
    }
    double var132;
    if (input[1] < 3.098407) {
        if (input[5] < -0.023238) {
            var132 = 0.010487428;
        } else {
            var132 = -0.007227029;
        }
    } else {
        var132 = 0.07819251;
    }
    double var133;
    if (input[2] < 9.635313) {
        if (input[5] < 0.068929) {
            var133 = -0.0035844655;
        } else {
            var133 = 0.035600238;
        }
    } else {
        if (input[2] < 9.853859) {
            var133 = -0.030931467;
        } else {
            var133 = 0.010542346;
        }
    }
    double var134;
    if (input[3] < -0.032311) {
        if (input[2] < 9.985435) {
            var134 = 0.0006324067;
        } else {
            var134 = 0.046053734;
        }
    } else {
        if (input[3] < 0.023134) {
            var134 = -0.02970923;
        } else {
            var134 = 0.0063505466;
        }
    }
    double var135;
    if (input[0] < 0.409848) {
        if (input[3] < -0.971784) {
            var135 = -0.09036814;
        } else {
            var135 = 0.00010468601;
        }
    } else {
        var135 = 0.07749135;
    }
    double var136;
    if (input[2] < 7.545509) {
        if (input[0] < -0.75488) {
            var136 = -0.08479736;
        } else {
            var136 = 0.057763487;
        }
    } else {
        if (input[0] < -0.767604) {
            var136 = 0.015461342;
        } else {
            var136 = -0.008930766;
        }
    }
    double var137;
    if (input[0] < -1.668131) {
        if (input[3] < 0.008531) {
            var137 = -0.09288179;
        } else {
            var137 = 0.012256425;
        }
    } else {
        if (input[2] < 12.34438) {
            var137 = -0.00064613397;
        } else {
            var137 = 0.05431811;
        }
    }
    double var138;
    if (input[5] < 0.457916) {
        if (input[3] < -0.755599) {
            var138 = -0.08186916;
        } else {
            var138 = -0.00013440452;
        }
    } else {
        if (input[0] < -0.566123) {
            var138 = 0.07728739;
        } else {
            var138 = -0.045822192;
        }
    }
    double var139;
    if (input[5] < -0.023238) {
        if (input[0] < -0.185464) {
            var139 = 0.0047644037;
        } else {
            var139 = 0.07042039;
        }
    } else {
        if (input[3] < -0.088749) {
            var139 = 0.021849353;
        } else {
            var139 = -0.015666699;
        }
    }
    double var140;
    if (input[1] < 3.098407) {
        if (input[4] < -0.405461) {
            var140 = -0.032124147;
        } else {
            var140 = 0.0013573521;
        }
    } else {
        var140 = 0.0765238;
    }
    double var141;
    if (input[1] < 0.648452) {
        if (input[1] < 0.49532) {
            var141 = 0.019380355;
        } else {
            var141 = -0.087099865;
        }
    } else {
        if (input[1] < 0.972528) {
            var141 = 0.03745785;
        } else {
            var141 = -0.00206527;
        }
    }
    double var142;
    if (input[0] < 0.409848) {
        if (input[0] < 0.226479) {
            var142 = 0.00043848003;
        } else {
            var142 = -0.060313553;
        }
    } else {
        var142 = 0.07566376;
    }
    double var143;
    if (input[1] < 1.226549) {
        if (input[4] < -0.057413) {
            var143 = 0.028066996;
        } else {
            var143 = -0.026445797;
        }
    } else {
        if (input[2] < 9.739796) {
            var143 = -0.0054559293;
        } else {
            var143 = 0.029463962;
        }
    }
    double var144;
    if (input[2] < 9.635313) {
        if (input[4] < 0.019679) {
            var144 = -0.003388249;
        } else {
            var144 = 0.03152979;
        }
    } else {
        if (input[2] < 9.853859) {
            var144 = -0.026715789;
        } else {
            var144 = 0.008264038;
        }
    }
    double var145;
    if (input[1] < 3.098407) {
        if (input[5] < 0.429356) {
            var145 = -0.0025477544;
        } else {
            var145 = 0.030067554;
        }
    } else {
        var145 = 0.074880205;
    }
    double var146;
    if (input[2] < 7.988288) {
        if (input[0] < -1.075364) {
            var146 = -0.1873049;
        } else {
            var146 = 0.036864057;
        }
    } else {
        if (input[0] < -0.654439) {
            var146 = 0.011314394;
        } else {
            var146 = -0.013346702;
        }
    }
    double var147;
    if (input[0] < -1.668131) {
        if (input[1] < 1.41381) {
            var147 = -0.05984096;
        } else {
            var147 = 0.06420972;
        }
    } else {
        if (input[2] < 12.34438) {
            var147 = -0.00056543265;
        } else {
            var147 = 0.051490135;
        }
    }
    double var148;
    if (input[3] < -0.488714) {
        if (input[2] < 9.75716) {
            var148 = -0.062494397;
        } else {
            var148 = 0.022744648;
        }
    } else {
        if (input[3] < -0.098312) {
            var148 = 0.024032487;
        } else {
            var148 = -0.0035976823;
        }
    }
    double var149;
    if (input[0] < 0.409848) {
        if (input[4] < -0.405461) {
            var149 = -0.029750163;
        } else {
            var149 = 0.0013038347;
        }
    } else {
        var149 = 0.07409465;
    }
    double var150;
    if (input[1] < 0.387694) {
        if (input[2] < 11.301798) {
            var150 = 0.07684085;
        } else {
            var150 = -0.045769345;
        }
    } else {
        if (input[1] < 0.648452) {
            var150 = -0.057388928;
        } else {
            var150 = 0.0029536893;
        }
    }
    double var151;
    if (input[1] < 2.828219) {
        if (input[2] < 12.34438) {
            var151 = -0.0025748848;
        } else {
            var151 = 0.030953223;
        }
    } else {
        if (input[3] < 0.232739) {
            var151 = 0.08247981;
        } else {
            var151 = -0.04942382;
        }
    }
    double var152;
    if (input[5] < -0.057486) {
        if (input[5] < -0.111672) {
            var152 = -0.00041982337;
        } else {
            var152 = 0.05463607;
        }
    } else {
        if (input[3] < -0.088749) {
            var152 = 0.017846622;
        } else {
            var152 = -0.011985053;
        }
    }
    double var153;
    if (input[0] < 0.409848) {
        if (input[0] < 0.196841) {
            var153 = 0.00060985883;
        } else {
            var153 = -0.04954964;
        }
    } else {
        var153 = 0.072542064;
    }
    double var154;
    if (input[2] < 9.635313) {
        if (input[5] < 0.068929) {
            var154 = -0.0037322436;
        } else {
            var154 = 0.032064084;
        }
    } else {
        if (input[0] < -0.654439) {
            var154 = 0.012527456;
        } else {
            var154 = -0.019646056;
        }
    }
    double var155;
    if (input[1] < 3.098407) {
        if (input[3] < -0.488714) {
            var155 = -0.027410189;
        } else {
            var155 = 0.0013321873;
        }
    } else {
        var155 = 0.07235413;
    }
    double var156;
    if (input[5] < -0.023238) {
        if (input[1] < 1.068478) {
            var156 = 0.03812201;
        } else {
            var156 = -0.0019947106;
        }
    } else {
        if (input[1] < 1.15425) {
            var156 = -0.02227167;
        } else {
            var156 = 0.005695236;
        }
    }
    double var157;
    if (input[5] < 0.429356) {
        if (input[5] < 0.268996) {
            var157 = 0.001624419;
        } else {
            var157 = -0.030719846;
        }
    } else {
        if (input[0] < -0.663121) {
            var157 = 0.08271535;
        } else {
            var157 = -0.020509394;
        }
    }
    double var158;
    if (input[0] < 0.297431) {
        if (input[0] < 0.266446) {
            var158 = 0.00021377484;
        } else {
            var158 = -0.150068;
        }
    } else {
        if (input[1] < 1.268612) {
            var158 = 0.0069402703;
        } else {
            var158 = 0.076201044;
        }
    }
    double var159;
    if (input[1] < 0.427212) {
        if (input[2] < 11.301798) {
            var159 = 0.07462827;
        } else {
            var159 = -0.04786038;
        }
    } else {
        if (input[1] < 0.648452) {
            var159 = -0.055323202;
        } else {
            var159 = 0.0024996419;
        }
    }
    double var160;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var160 = 0.04352473;
        } else {
            var160 = -0.0042700395;
        }
    } else {
        if (input[1] < -0.11062) {
            var160 = -0.09937435;
        } else {
            var160 = 0.06774174;
        }
    }
    double var161;
    if (input[4] < -0.405461) {
        if (input[2] < 9.459579) {
            var161 = 0.045025103;
        } else {
            var161 = -0.05238038;
        }
    } else {
        if (input[4] < -0.364996) {
            var161 = 0.07208281;
        } else {
            var161 = 0.00046376916;
        }
    }
    double var162;
    if (input[2] < 7.545509) {
        if (input[0] < -0.75488) {
            var162 = -0.073058754;
        } else {
            var162 = 0.05308797;
        }
    } else {
        if (input[1] < 1.781895) {
            var162 = 0.003320514;
        } else {
            var162 = -0.017454553;
        }
    }
    double var163;
    if (input[1] < 3.098407) {
        if (input[2] < 12.34438) {
            var163 = -0.002097294;
        } else {
            var163 = 0.029358555;
        }
    } else {
        var163 = 0.07112355;
    }
    double var164;
    if (input[0] < -1.668131) {
        if (input[3] < 0.008531) {
            var164 = -0.075610116;
        } else {
            var164 = 0.0141334925;
        }
    } else {
        if (input[2] < 12.34438) {
            var164 = -0.00032378943;
        } else {
            var164 = 0.046139058;
        }
    }
    double var165;
    if (input[5] < -0.150028) {
        if (input[2] < 10.769954) {
            var165 = 0.002995446;
        } else {
            var165 = 0.07592603;
        }
    } else {
        if (input[5] < -0.137497) {
            var165 = -0.16454425;
        } else {
            var165 = -0.0008625388;
        }
    }
    double var166;
    if (input[5] < 0.457916) {
        if (input[3] < -0.755599) {
            var166 = -0.0676746;
        } else {
            var166 = 0.000007960432;
        }
    } else {
        if (input[0] < -0.549657) {
            var166 = 0.068169415;
        } else {
            var166 = -0.04621677;
        }
    }
    double var167;
    if (input[0] < 0.409848) {
        if (input[0] < 0.226479) {
            var167 = 0.0004273996;
        } else {
            var167 = -0.047564417;
        }
    } else {
        var167 = 0.07010283;
    }
    double var168;
    if (input[1] < 3.098407) {
        if (input[2] < 7.545509) {
            var168 = 0.025651565;
        } else {
            var168 = -0.002122885;
        }
    } else {
        var168 = 0.06970723;
    }
    double var169;
    if (input[0] < 0.297431) {
        if (input[0] < 0.266446) {
            var169 = 0.00018898053;
        } else {
            var169 = -0.1247917;
        }
    } else {
        if (input[1] < 1.268612) {
            var169 = 0.0048489734;
        } else {
            var169 = 0.07464791;
        }
    }
    double var170;
    if (input[4] < 0.021471) {
        if (input[4] < -0.045858) {
            var170 = 0.0060775974;
        } else {
            var170 = -0.019617075;
        }
    } else {
        if (input[5] < 0.268996) {
            var170 = 0.018591028;
        } else {
            var170 = -0.033091467;
        }
    }
    double var171;
    if (input[4] < 0.178753) {
        if (input[4] < 0.098772) {
            var171 = -0.0025468972;
        } else {
            var171 = 0.05322969;
        }
    } else {
        if (input[3] < 0.125167) {
            var171 = 0.021564098;
        } else {
            var171 = -0.06437957;
        }
    }
    double var172;
    if (input[5] < 0.429356) {
        if (input[3] < -0.755599) {
            var172 = -0.06094866;
        } else {
            var172 = -0.0002020751;
        }
    } else {
        if (input[0] < -0.663121) {
            var172 = 0.0791462;
        } else {
            var172 = -0.016612386;
        }
    }
    double var173;
    if (input[2] < 9.635313) {
        if (input[3] < 0.041997) {
            var173 = -0.005296975;
        } else {
            var173 = 0.029531857;
        }
    } else {
        if (input[2] < 9.853859) {
            var173 = -0.0213315;
        } else {
            var173 = 0.0073916093;
        }
    }
    double var174;
    if (input[1] < 1.226549) {
        if (input[1] < 1.030906) {
            var174 = 0.008560384;
        } else {
            var174 = -0.045378294;
        }
    } else {
        if (input[2] < 9.739796) {
            var174 = -0.006478841;
        } else {
            var174 = 0.027873922;
        }
    }
    double var175;
    if (input[2] < 9.635313) {
        if (input[5] < 0.068929) {
            var175 = -0.0035623368;
        } else {
            var175 = 0.02959388;
        }
    } else {
        if (input[0] < -0.654439) {
            var175 = 0.011042858;
        } else {
            var175 = -0.017251702;
        }
    }
    double var176;
    if (input[0] < -1.668131) {
        if (input[1] < 1.41381) {
            var176 = -0.049554598;
        } else {
            var176 = 0.061771758;
        }
    } else {
        if (input[2] < 12.34438) {
            var176 = -0.00020668314;
        } else {
            var176 = 0.042934388;
        }
    }
    double var177;
    if (input[4] < -0.405461) {
        if (input[4] < -0.414999) {
            var177 = -0.010091816;
        } else {
            var177 = -0.15672357;
        }
    } else {
        if (input[4] < -0.364996) {
            var177 = 0.068982385;
        } else {
            var177 = 0.00039676946;
        }
    }
    double var178;
    if (input[5] < -0.057486) {
        if (input[0] < -0.185464) {
            var178 = 0.0025026975;
        } else {
            var178 = 0.08108348;
        }
    } else {
        if (input[0] < -0.474064) {
            var178 = 0.0029769363;
        } else {
            var178 = -0.02290775;
        }
    }
    double var179;
    if (input[4] < 0.178753) {
        if (input[4] < 0.098772) {
            var179 = -0.0021075204;
        } else {
            var179 = 0.05001801;
        }
    } else {
        if (input[3] < 0.125167) {
            var179 = 0.019922594;
        } else {
            var179 = -0.057989098;
        }
    }
    double var180;
    if (input[1] < 3.098407) {
        if (input[1] < 1.781895) {
            var180 = 0.0034817632;
        } else {
            var180 = -0.0122374585;
        }
    } else {
        var180 = 0.06786098;
    }
    double var181;
    if (input[1] < 0.732726) {
        if (input[4] < -0.031946) {
            var181 = 0.052058;
        } else {
            var181 = -0.046343636;
        }
    } else {
        if (input[1] < 0.972528) {
            var181 = 0.042770054;
        } else {
            var181 = -0.0025002614;
        }
    }
    double var182;
    if (input[1] < 1.15425) {
        if (input[1] < 1.030906) {
            var182 = 0.0073913946;
        } else {
            var182 = -0.067152046;
        }
    } else {
        if (input[2] < 10.244696) {
            var182 = -0.00082577294;
        } else {
            var182 = 0.049393278;
        }
    }
    double var183;
    if (input[2] < 9.635313) {
        if (input[3] < 0.041997) {
            var183 = -0.0044467705;
        } else {
            var183 = 0.028000478;
        }
    } else {
        if (input[0] < -0.654439) {
            var183 = 0.009836543;
        } else {
            var183 = -0.01587039;
        }
    }
    double var184;
    if (input[5] < 0.429356) {
        if (input[4] < 0.582654) {
            var184 = -0.0002565731;
        } else {
            var184 = -0.062225904;
        }
    } else {
        if (input[2] < 9.739796) {
            var184 = 0.068782054;
        } else {
            var184 = -0.02106501;
        }
    }
    double var185;
    if (input[4] < -0.405461) {
        if (input[0] < -0.959954) {
            var185 = 0.06126787;
        } else {
            var185 = -0.03986982;
        }
    } else {
        if (input[4] < -0.364996) {
            var185 = 0.06598886;
        } else {
            var185 = 0.0004786037;
        }
    }
    double var186;
    if (input[0] < 0.409848) {
        if (input[0] < 0.196841) {
            var186 = 0.00060070324;
        } else {
            var186 = -0.039748717;
        }
    } else {
        var186 = 0.06719684;
    }
    double var187;
    if (input[3] < -0.488714) {
        if (input[2] < 9.8341) {
            var187 = -0.047502737;
        } else {
            var187 = 0.033698153;
        }
    } else {
        if (input[3] < -0.23171) {
            var187 = 0.031314805;
        } else {
            var187 = -0.0011608802;
        }
    }
    double var188;
    if (input[2] < 7.545509) {
        if (input[0] < -1.023422) {
            var188 = -0.13213344;
        } else {
            var188 = 0.03921107;
        }
    } else {
        if (input[1] < 1.781895) {
            var188 = 0.0031948646;
        } else {
            var188 = -0.015739523;
        }
    }
    double var189;
    if (input[1] < 2.828219) {
        if (input[1] < 1.792522) {
            var189 = 0.0028279484;
        } else {
            var189 = -0.011518883;
        }
    } else {
        if (input[3] < 0.21881) {
            var189 = 0.07910525;
        } else {
            var189 = -0.049526848;
        }
    }
    double var190;
    if (input[1] < 1.15425) {
        if (input[1] < 1.030906) {
            var190 = 0.006326154;
        } else {
            var190 = -0.059230473;
        }
    } else {
        if (input[2] < 10.244696) {
            var190 = -0.0006125853;
        } else {
            var190 = 0.047160227;
        }
    }
    double var191;
    if (input[1] < 0.732726) {
        if (input[4] < -0.031946) {
            var191 = 0.048023026;
        } else {
            var191 = -0.042733017;
        }
    } else {
        if (input[1] < 0.972528) {
            var191 = 0.03841265;
        } else {
            var191 = -0.0016884558;
        }
    }
    double var192;
    if (input[0] < 0.297431) {
        if (input[0] < 0.266446) {
            var192 = 0.00023520946;
        } else {
            var192 = -0.10829603;
        }
    } else {
        if (input[1] < 1.268612) {
            var192 = 0.002819833;
        } else {
            var192 = 0.07253114;
        }
    }
    double var193;
    if (input[0] < -1.668131) {
        if (input[3] < 0.008531) {
            var193 = -0.065732054;
        } else {
            var193 = 0.01420531;
        }
    } else {
        if (input[1] < -0.696651) {
            var193 = -0.08941627;
        } else {
            var193 = 0.0018959105;
        }
    }
    double var194;
    if (input[1] < 0.387694) {
        if (input[3] < 0.006736) {
            var194 = -0.03727469;
        } else {
            var194 = 0.07898968;
        }
    } else {
        if (input[1] < 0.648452) {
            var194 = -0.04382671;
        } else {
            var194 = 0.0022694888;
        }
    }
    double var195;
    if (input[3] < -0.022122) {
        if (input[5] < -0.647845) {
            var195 = -0.10249305;
        } else {
            var195 = 0.010137284;
        }
    } else {
        if (input[5] < -0.034233) {
            var195 = 0.015652992;
        } else {
            var195 = -0.013976834;
        }
    }
    double var196;
    if (input[4] < -0.405461) {
        if (input[2] < 9.459579) {
            var196 = 0.04333929;
        } else {
            var196 = -0.04416439;
        }
    } else {
        if (input[4] < -0.364996) {
            var196 = 0.063048854;
        } else {
            var196 = 0.00044357605;
        }
    }
    double var197;
    if (input[5] < 0.429356) {
        if (input[5] < 0.268996) {
            var197 = 0.001296522;
        } else {
            var197 = -0.024095738;
        }
    } else {
        if (input[0] < -0.663121) {
            var197 = 0.07499391;
        } else {
            var197 = -0.013640612;
        }
    }
    double var198;
    if (input[1] < 3.098407) {
        if (input[0] < -0.420476) {
            var198 = 0.0025894013;
        } else {
            var198 = -0.011799625;
        }
    } else {
        var198 = 0.06507856;
    }
    double var199;
    if (input[0] < 0.409848) {
        if (input[3] < -0.47478) {
            var199 = -0.021413816;
        } else {
            var199 = 0.0011484958;
        }
    } else {
        var199 = 0.06492969;
    }
    double var200;
    if (input[2] < 7.988288) {
        if (input[0] < -0.744252) {
            var200 = -0.07468324;
        } else {
            var200 = 0.04451546;
        }
    } else {
        if (input[0] < -0.767604) {
            var200 = 0.012201675;
        } else {
            var200 = -0.0071344078;
        }
    }
    double var201;
    if (input[4] < 0.019679) {
        if (input[0] < -0.356708) {
            var201 = 0.0015024927;
        } else {
            var201 = -0.033648342;
        }
    } else {
        if (input[5] < 0.268996) {
            var201 = 0.016456677;
        } else {
            var201 = -0.029491091;
        }
    }
    double var202;
    if (input[5] < 0.068929) {
        if (input[3] < 0.083168) {
            var202 = -0.017168282;
        } else {
            var202 = 0.02766384;
        }
    } else {
        if (input[3] < 0.127273) {
            var202 = 0.031691145;
        } else {
            var202 = -0.042748388;
        }
    }
    double var203;
    if (input[0] < 0.297431) {
        if (input[0] < 0.266446) {
            var203 = 0.00018916708;
        } else {
            var203 = -0.09167758;
        }
    } else {
        if (input[5] < 0.048529) {
            var203 = 0.07128977;
        } else {
            var203 = 0.002340491;
        }
    }
    double var204;
    if (input[5] < 0.429356) {
        if (input[1] < 0.387694) {
            var204 = 0.023776824;
        } else {
            var204 = -0.0033267387;
        }
    } else {
        if (input[2] < 9.739796) {
            var204 = 0.06536715;
        } else {
            var204 = -0.019491129;
        }
    }
    double var205;
    if (input[0] < -1.668131) {
        if (input[1] < 1.41381) {
            var205 = -0.042309538;
        } else {
            var205 = 0.059820395;
        }
    } else {
        if (input[2] < 12.34438) {
            var205 = -0.00024095752;
        } else {
            var205 = 0.04030836;
        }
    }
    double var206;
    if (input[1] < 3.098407) {
        if (input[4] < 0.178753) {
            var206 = 0.002051747;
        } else {
            var206 = -0.012987829;
        }
    } else {
        var206 = 0.06391066;
    }
    double var207;
    if (input[2] < 9.635313) {
        if (input[5] < 0.068929) {
            var207 = -0.0038517546;
        } else {
            var207 = 0.027306348;
        }
    } else {
        if (input[3] < 0.232739) {
            var207 = 0.0012276301;
        } else {
            var207 = -0.03077958;
        }
    }
    double var208;
    if (input[3] < 0.364596) {
        if (input[3] < 0.33106) {
            var208 = 0.0011674657;
        } else {
            var208 = -0.14278674;
        }
    } else {
        if (input[5] < -0.198736) {
            var208 = 0.09020888;
        } else {
            var208 = -0.005688043;
        }
    }
    double var209;
    if (input[4] < 0.019679) {
        if (input[0] < -0.356708) {
            var209 = 0.0012080896;
        } else {
            var209 = -0.030336484;
        }
    } else {
        if (input[5] < 0.268996) {
            var209 = 0.015544735;
        } else {
            var209 = -0.02620309;
        }
    }
    double var210;
    if (input[1] < 2.19758) {
        if (input[1] < 1.792522) {
            var210 = 0.0027722174;
        } else {
            var210 = -0.016993284;
        }
    } else {
        if (input[1] < 2.334695) {
            var210 = 0.08244485;
        } else {
            var210 = 0.002363215;
        }
    }
    double var211;
    if (input[5] < 0.429356) {
        if (input[5] < 0.397858) {
            var211 = -0.00032894386;
        } else {
            var211 = -0.06007358;
        }
    } else {
        if (input[0] < -0.549657) {
            var211 = 0.05529551;
        } else {
            var211 = -0.029784203;
        }
    }
    double var212;
    if (input[0] < 0.409848) {
        if (input[1] < 1.15425) {
            var212 = -0.007436094;
        } else {
            var212 = 0.0037711908;
        }
    } else {
        var212 = 0.06318189;
    }
    double var213;
    if (input[3] < -0.374838) {
        if (input[2] < 9.875564) {
            var213 = -0.041366078;
        } else {
            var213 = 0.049043458;
        }
    } else {
        if (input[3] < -0.23171) {
            var213 = 0.04174883;
        } else {
            var213 = -0.0010002708;
        }
    }
    double var214;
    if (input[1] < 2.748135) {
        if (input[5] < 0.068929) {
            var214 = -0.004973567;
        } else {
            var214 = 0.0076945275;
        }
    } else {
        if (input[5] < 0.183788) {
            var214 = 0.08083842;
        } else {
            var214 = -0.06206118;
        }
    }
    double var215;
    if (input[1] < -0.696651) {
        var215 = -0.05910608;
    } else {
        if (input[1] < 0.387694) {
            var215 = 0.026530022;
        } else {
            var215 = -0.0013649502;
        }
    }
    double var216;
    if (input[2] < 7.545509) {
        if (input[0] < -1.075364) {
            var216 = -0.13481535;
        } else {
            var216 = 0.037114542;
        }
    } else {
        if (input[2] < 7.717052) {
            var216 = -0.05584857;
        } else {
            var216 = -0.00020083098;
        }
    }
    double var217;
    if (input[2] < 13.353132) {
        if (input[1] < -0.696651) {
            var217 = -0.106832884;
        } else {
            var217 = -0.0000070336678;
        }
    } else {
        if (input[5] < -0.004294) {
            var217 = -0.04126777;
        } else {
            var217 = 0.08550395;
        }
    }
    double var218;
    if (input[0] < 0.297431) {
        if (input[0] < 0.266446) {
            var218 = 0.000140201;
        } else {
            var218 = -0.080648854;
        }
    } else {
        if (input[1] < 1.268612) {
            var218 = -0.00073357875;
        } else {
            var218 = 0.0697922;
        }
    }
    double var219;
    if (input[4] < -0.405461) {
        if (input[4] < -0.414999) {
            var219 = -0.006795262;
        } else {
            var219 = -0.13550903;
        }
    } else {
        if (input[4] < -0.364996) {
            var219 = 0.06110538;
        } else {
            var219 = 0.00032652085;
        }
    }
    double var220;
    if (input[4] < 0.178753) {
        if (input[4] < 0.098772) {
            var220 = -0.002028961;
        } else {
            var220 = 0.045738097;
        }
    } else {
        if (input[0] < -0.780477) {
            var220 = 0.044783812;
        } else {
            var220 = -0.031503767;
        }
    }
    double var221;
    if (input[0] < -1.668131) {
        if (input[2] < 11.352393) {
            var221 = 0.019232763;
        } else {
            var221 = -0.053793486;
        }
    } else {
        if (input[2] < 12.34438) {
            var221 = -0.00021626624;
        } else {
            var221 = 0.037479635;
        }
    }
    double var222;
    if (input[2] < 7.988288) {
        if (input[0] < -0.744252) {
            var222 = -0.06423237;
        } else {
            var222 = 0.042045716;
        }
    } else {
        if (input[0] < -0.767604) {
            var222 = 0.010323378;
        } else {
            var222 = -0.0061597065;
        }
    }
    double var223;
    if (input[1] < 3.098407) {
        if (input[1] < 1.781895) {
            var223 = 0.0027222587;
        } else {
            var223 = -0.009446521;
        }
    } else {
        var223 = 0.0615336;
    }
    double var224;
    if (input[0] < -1.075364) {
        if (input[3] < 0.031047) {
            var224 = -0.053056486;
        } else {
            var224 = 0.04882883;
        }
    } else {
        if (input[1] < 0.117805) {
            var224 = 0.07074853;
        } else {
            var224 = -0.00032528475;
        }
    }
    double var225;
    if (input[3] < -0.022122) {
        if (input[5] < -0.647845) {
            var225 = -0.087224565;
        } else {
            var225 = 0.009167197;
        }
    } else {
        if (input[3] < -0.019864) {
            var225 = -0.09412789;
        } else {
            var225 = -0.002355148;
        }
    }
    double var226;
    if (input[1] < 1.15425) {
        if (input[1] < 1.051114) {
            var226 = 0.0049009873;
        } else {
            var226 = -0.057665702;
        }
    } else {
        if (input[2] < 12.039464) {
            var226 = 0.0014329943;
        } else {
            var226 = 0.087052636;
        }
    }
    double var227;
    if (input[1] < 0.732726) {
        if (input[4] < -0.031946) {
            var227 = 0.04547909;
        } else {
            var227 = -0.037788365;
        }
    } else {
        if (input[1] < 0.972528) {
            var227 = 0.035494428;
        } else {
            var227 = -0.0017277887;
        }
    }
    double var228;
    if (input[4] < -0.386643) {
        if (input[5] < 0.106202) {
            var228 = 0.018197928;
        } else {
            var228 = -0.068308115;
        }
    } else {
        if (input[4] < -0.364996) {
            var228 = 0.085450545;
        } else {
            var228 = 0.00042634556;
        }
    }
    double var229;
    if (input[0] < 0.409848) {
        if (input[0] < -0.420476) {
            var229 = 0.0024106333;
        } else {
            var229 = -0.01056231;
        }
    } else {
        var229 = 0.060604315;
    }
    double var230;
    if (input[0] < -0.060774) {
        if (input[0] < -0.147144) {
            var230 = 0.00016505063;
        } else {
            var230 = -0.06158293;
        }
    } else {
        if (input[4] < -0.031946) {
            var230 = 0.07527145;
        } else {
            var230 = -0.029724587;
        }
    }
    double var231;
    if (input[3] < -0.47478) {
        if (input[2] < 9.75716) {
            var231 = -0.044097964;
        } else {
            var231 = 0.025872335;
        }
    } else {
        if (input[3] < -0.23171) {
            var231 = 0.027366435;
        } else {
            var231 = -0.000902587;
        }
    }
    double var232;
    if (input[2] < 9.635313) {
        if (input[0] < -0.55774) {
            var232 = -0.0070496597;
        } else {
            var232 = 0.022769596;
        }
    } else {
        if (input[1] < 1.226549) {
            var232 = -0.014559506;
        } else {
            var232 = 0.007933552;
        }
    }
    double var233;
    if (input[1] < 0.427212) {
        if (input[2] < 11.301798) {
            var233 = 0.06903564;
        } else {
            var233 = -0.04806858;
        }
    } else {
        if (input[2] < 12.2625) {
            var233 = -0.0035089068;
        } else {
            var233 = 0.06587173;
        }
    }
    double var234;
    if (input[5] < 0.429356) {
        if (input[4] < 0.582654) {
            var234 = -0.000091340335;
        } else {
            var234 = -0.051771354;
        }
    } else {
        if (input[0] < -0.663121) {
            var234 = 0.070019685;
        } else {
            var234 = -0.011779644;
        }
    }
    double var235;
    if (input[1] < 3.098407) {
        if (input[1] < 1.781895) {
            var235 = 0.002692538;
        } else {
            var235 = -0.008912117;
        }
    } else {
        var235 = 0.059887577;
    }
    double var236;
    if (input[5] < -0.150028) {
        if (input[2] < 8.799152) {
            var236 = 0.06546926;
        } else {
            var236 = -0.0017582051;
        }
    } else {
        if (input[5] < -0.137497) {
            var236 = -0.13842854;
        } else {
            var236 = -0.00010005408;
        }
    }
    double var237;
    if (input[3] < 0.364596) {
        if (input[3] < 0.33106) {
            var237 = 0.0010814884;
        } else {
            var237 = -0.11869856;
        }
    } else {
        if (input[5] < -0.198736) {
            var237 = 0.087527;
        } else {
            var237 = -0.0055267196;
        }
    }
    double var238;
    if (input[4] < 0.047458) {
        if (input[0] < -0.420476) {
            var238 = 0.0033101116;
        } else {
            var238 = -0.026199302;
        }
    } else {
        if (input[1] < 1.030906) {
            var238 = 0.04479758;
        } else {
            var238 = -0.0060729305;
        }
    }
    double var239;
    if (input[1] < 0.648452) {
        if (input[3] < -0.05214) {
            var239 = 0.050816525;
        } else {
            var239 = -0.031477757;
        }
    } else {
        if (input[1] < 0.991089) {
            var239 = 0.025284115;
        } else {
            var239 = -0.0014130288;
        }
    }
    double var240;
    if (input[1] < 1.15425) {
        if (input[3] < 0.037938) {
            var240 = -0.024538836;
        } else {
            var240 = 0.02397535;
        }
    } else {
        if (input[3] < 0.132269) {
            var240 = 0.012732896;
        } else {
            var240 = -0.018035492;
        }
    }
    double var241;
    if (input[3] < -0.374838) {
        if (input[2] < 9.875564) {
            var241 = -0.03649538;
        } else {
            var241 = 0.044479188;
        }
    } else {
        if (input[3] < -0.23171) {
            var241 = 0.036691036;
        } else {
            var241 = -0.0005828841;
        }
    }
    double var242;
    if (input[4] < -0.386643) {
        if (input[5] < 0.106202) {
            var242 = 0.016152548;
        } else {
            var242 = -0.06145791;
        }
    } else {
        if (input[4] < -0.364996) {
            var242 = 0.08343954;
        } else {
            var242 = 0.0005051749;
        }
    }
    double var243;
    if (input[1] < 2.19758) {
        if (input[5] < 0.629923) {
            var243 = -0.0019763692;
        } else {
            var243 = 0.050149668;
        }
    } else {
        if (input[1] < 2.334695) {
            var243 = 0.081359796;
        } else {
            var243 = 0.0012728487;
        }
    }
    double var244;
    if (input[3] < 0.866084) {
        if (input[1] < 2.828219) {
            var244 = -0.00023291957;
        } else {
            var244 = 0.06015417;
        }
    } else {
        var244 = -0.053459346;
    }
    double var245;
    if (input[1] < 0.387694) {
        if (input[3] < 0.006736) {
            var245 = -0.036234416;
        } else {
            var245 = 0.07572869;
        }
    } else {
        if (input[2] < 12.2625) {
            var245 = -0.003202727;
        } else {
            var245 = 0.064026736;
        }
    }
    double var246;
    if (input[1] < 1.15425) {
        if (input[1] < 1.051114) {
            var246 = 0.0036894635;
        } else {
            var246 = -0.04822538;
        }
    } else {
        if (input[0] < -0.822989) {
            var246 = 0.029911641;
        } else {
            var246 = -0.003146259;
        }
    }
    double var247;
    if (input[1] < 0.82733) {
        if (input[4] < -0.031946) {
            var247 = 0.048388634;
        } else {
            var247 = -0.035701796;
        }
    } else {
        if (input[1] < 0.972528) {
            var247 = 0.04743004;
        } else {
            var247 = -0.0010749123;
        }
    }
    double var248;
    if (input[4] < 0.005486) {
        if (input[3] < -0.044147) {
            var248 = 0.01120011;
        } else {
            var248 = -0.012619893;
        }
    } else {
        if (input[0] < 0.182171) {
            var248 = 0.008167577;
        } else {
            var248 = -0.06475473;
        }
    }
    double var249;
    if (input[3] < -0.374838) {
        if (input[2] < 8.799152) {
            var249 = 0.04901673;
        } else {
            var249 = -0.032753866;
        }
    } else {
        if (input[3] < -0.329108) {
            var249 = 0.05823146;
        } else {
            var249 = 0.0005200818;
        }
    }
    double var250;
    if (input[4] < 0.174985) {
        if (input[4] < 0.105803) {
            var250 = -0.0012797841;
        } else {
            var250 = 0.047325853;
        }
    } else {
        if (input[2] < 8.799152) {
            var250 = 0.06100906;
        } else {
            var250 = -0.023757234;
        }
    }
    double var251;
    if (input[0] < 0.409848) {
        if (input[4] < -0.572188) {
            var251 = 0.03281596;
        } else {
            var251 = -0.0009380844;
        }
    } else {
        var251 = 0.059425514;
    }
    double var252;
    if (input[4] < -0.386643) {
        if (input[1] < 1.255439) {
            var252 = 0.030140927;
        } else {
            var252 = -0.04279912;
        }
    } else {
        if (input[4] < -0.364996) {
            var252 = 0.081527725;
        } else {
            var252 = 0.0006270277;
        }
    }
    double var253;
    if (input[3] < 0.356945) {
        if (input[3] < 0.33106) {
            var253 = 0.000980858;
        } else {
            var253 = -0.11410004;
        }
    } else {
        if (input[5] < -0.198736) {
            var253 = 0.08576017;
        } else {
            var253 = -0.004324133;
        }
    }
    double var254;
    if (input[1] < 1.104852) {
        if (input[3] < 0.083168) {
            var254 = -0.023153787;
        } else {
            var254 = 0.036144372;
        }
    } else {
        if (input[2] < 10.244696) {
            var254 = -0.0018736148;
        } else {
            var254 = 0.047935605;
        }
    }
    double var255;
    if (input[1] < 0.387694) {
        if (input[3] < 0.006736) {
            var255 = -0.029276082;
        } else {
            var255 = 0.072994895;
        }
    } else {
        if (input[2] < 12.2625) {
            var255 = -0.0029383276;
        } else {
            var255 = 0.06110978;
        }
    }
    double var256;
    if (input[1] < -0.696651) {
        var256 = -0.053607274;
    } else {
        if (input[1] < 0.387694) {
            var256 = 0.024249611;
        } else {
            var256 = -0.001041721;
        }
    }
    double var257;
    if (input[1] < 0.80802) {
        if (input[3] < -0.05214) {
            var257 = 0.054882;
        } else {
            var257 = -0.030675543;
        }
    } else {
        if (input[1] < 0.972528) {
            var257 = 0.038566634;
        } else {
            var257 = -0.0008343534;
        }
    }
    double var258;
    if (input[1] < 1.15425) {
        if (input[3] < 0.037938) {
            var258 = -0.020026078;
        } else {
            var258 = 0.019376202;
        }
    } else {
        if (input[0] < -0.573158) {
            var258 = -0.00665738;
        } else {
            var258 = 0.018618977;
        }
    }
    double var259;
    if (input[3] < 0.866084) {
        if (input[0] < 0.297431) {
            var259 = -0.00018413345;
        } else {
            var259 = 0.05942865;
        }
    } else {
        if (input[0] < -0.780477) {
            var259 = 0.058138814;
        } else {
            var259 = -0.13776813;
        }
    }
    double var260;
    if (input[4] < 0.174985) {
        if (input[4] < 0.105803) {
            var260 = -0.0010217918;
        } else {
            var260 = 0.04427374;
        }
    } else {
        if (input[3] < 0.125167) {
            var260 = 0.017864928;
        } else {
            var260 = -0.043568972;
        }
    }
    double var261;
    if (input[2] < 9.635313) {
        if (input[3] < 0.041997) {
            var261 = -0.0055031176;
        } else {
            var261 = 0.02518799;
        }
    } else {
        if (input[3] < 0.232739) {
            var261 = 0.0014263018;
        } else {
            var261 = -0.027076975;
        }
    }
    double var262;
    if (input[3] < 0.356945) {
        if (input[3] < 0.33106) {
            var262 = 0.0008212851;
        } else {
            var262 = -0.097918265;
        }
    } else {
        if (input[5] < -0.198736) {
            var262 = 0.083095044;
        } else {
            var262 = -0.0031909652;
        }
    }
    double var263;
    if (input[4] < -0.386643) {
        if (input[5] < 0.106202) {
            var263 = 0.014522326;
        } else {
            var263 = -0.053565096;
        }
    } else {
        if (input[4] < -0.364996) {
            var263 = 0.07933599;
        } else {
            var263 = 0.0005640741;
        }
    }
    double var264;
    if (input[5] < 0.068929) {
        if (input[3] < 0.083168) {
            var264 = -0.014257379;
        } else {
            var264 = 0.024421765;
        }
    } else {
        if (input[3] < 0.10242) {
            var264 = 0.029128877;
        } else {
            var264 = -0.032381844;
        }
    }
    double var265;
    if (input[3] < -0.374838) {
        if (input[2] < 9.875564) {
            var265 = -0.033052348;
        } else {
            var265 = 0.04201301;
        }
    } else {
        if (input[3] < -0.329108) {
            var265 = 0.055898845;
        } else {
            var265 = 0.00052320823;
        }
    }
    double var266;
    if (input[5] < -0.544548) {
        if (input[5] < -0.70121) {
            var266 = 0.035378557;
        } else {
            var266 = -0.059657108;
        }
    } else {
        if (input[4] < 0.626043) {
            var266 = 0.00021499301;
        } else {
            var266 = 0.041174833;
        }
    }
    double var267;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var267 = 0.08073362;
        } else {
            var267 = -0.0094854925;
        }
    } else {
        if (input[4] < -0.472576) {
            var267 = -0.06489067;
        } else {
            var267 = 0.00096072844;
        }
    }
    double var268;
    if (input[1] < 3.098407) {
        if (input[0] < -0.420476) {
            var268 = 0.002335251;
        } else {
            var268 = -0.009608492;
        }
    } else {
        var268 = 0.057143968;
    }
    double var269;
    if (input[1] < 0.427212) {
        if (input[2] < 11.301798) {
            var269 = 0.06587417;
        } else {
            var269 = -0.040977743;
        }
    } else {
        if (input[1] < 0.648452) {
            var269 = -0.0372471;
        } else {
            var269 = 0.0018568136;
        }
    }
    double var270;
    if (input[0] < 0.409848) {
        if (input[0] < 0.226479) {
            var270 = 0.0005711549;
        } else {
            var270 = -0.034922577;
        }
    } else {
        var270 = 0.056310553;
    }
    double var271;
    if (input[0] < -0.060774) {
        if (input[0] < -0.147144) {
            var271 = 0.0002536061;
        } else {
            var271 = -0.054628547;
        }
    } else {
        if (input[2] < 10.244696) {
            var271 = 0.04728278;
        } else {
            var271 = -0.070694305;
        }
    }
    double var272;
    if (input[5] < 0.74319) {
        if (input[3] < -0.374838) {
            var272 = -0.018626038;
        } else {
            var272 = 0.0014135068;
        }
    } else {
        if (input[0] < -0.573158) {
            var272 = 0.066623405;
        } else {
            var272 = 0.000953844;
        }
    }
    double var273;
    if (input[0] < -1.075364) {
        if (input[5] < 0.022623) {
            var273 = -0.059199315;
        } else {
            var273 = 0.030873546;
        }
    } else {
        if (input[1] < 0.056882) {
            var273 = 0.071494624;
        } else {
            var273 = -0.000038196726;
        }
    }
    double var274;
    if (input[1] < -0.696651) {
        if (input[4] < -0.019718) {
            var274 = 0.06387961;
        } else {
            var274 = -0.14006005;
        }
    } else {
        if (input[1] < 0.387694) {
            var274 = 0.022248326;
        } else {
            var274 = -0.0009769818;
        }
    }
    double var275;
    if (input[3] < 0.866084) {
        if (input[1] < 2.828219) {
            var275 = -0.00023537358;
        } else {
            var275 = 0.05742488;
        }
    } else {
        if (input[0] < -0.636027) {
            var275 = 0.05744465;
        } else {
            var275 = -0.12873176;
        }
    }
    double var276;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var276 = 0.07869545;
        } else {
            var276 = -0.008116521;
        }
    } else {
        if (input[4] < -0.544339) {
            var276 = -0.09975221;
        } else {
            var276 = 0.0003363345;
        }
    }
    double var277;
    if (input[2] < 7.569908) {
        if (input[0] < -1.075364) {
            var277 = -0.11158048;
        } else {
            var277 = 0.031657297;
        }
    } else {
        if (input[2] < 7.717052) {
            var277 = -0.06803348;
        } else {
            var277 = 0.000041132993;
        }
    }
    double var278;
    if (input[4] < 0.174985) {
        if (input[4] < 0.098772) {
            var278 = -0.0011429425;
        } else {
            var278 = 0.038156237;
        }
    } else {
        if (input[0] < -0.780477) {
            var278 = 0.041178294;
        } else {
            var278 = -0.026252568;
        }
    }
    double var279;
    if (input[1] < 1.104852) {
        if (input[1] < 1.051114) {
            var279 = 0.0036980875;
        } else {
            var279 = -0.0798195;
        }
    } else {
        if (input[0] < -0.822989) {
            var279 = 0.03176671;
        } else {
            var279 = -0.0045222216;
        }
    }
    double var280;
    if (input[0] < -1.075364) {
        if (input[3] < 0.023134) {
            var280 = -0.046514463;
        } else {
            var280 = 0.04127204;
        }
    } else {
        if (input[1] < 0.056882) {
            var280 = 0.06842869;
        } else {
            var280 = 0.0002177961;
        }
    }
    double var281;
    if (input[3] < -0.010935) {
        if (input[2] < 12.726535) {
            var281 = 0.008625419;
        } else {
            var281 = -0.11226978;
        }
    } else {
        if (input[2] < 12.34438) {
            var281 = -0.0071121887;
        } else {
            var281 = 0.05945427;
        }
    }
    double var282;
    if (input[1] < -0.696651) {
        if (input[0] < -0.912353) {
            var282 = -0.090262555;
        } else {
            var282 = 0.013286819;
        }
    } else {
        if (input[5] < 0.429356) {
            var282 = -0.0007323477;
        } else {
            var282 = 0.02305984;
        }
    }
    double var283;
    if (input[1] < 0.82733) {
        if (input[3] < -0.05214) {
            var283 = 0.053700477;
        } else {
            var283 = -0.027774498;
        }
    } else {
        if (input[1] < 0.972528) {
            var283 = 0.042598616;
        } else {
            var283 = -0.0009994486;
        }
    }
    double var284;
    if (input[3] < -0.488714) {
        if (input[2] < 8.403824) {
            var284 = 0.05698657;
        } else {
            var284 = -0.029154241;
        }
    } else {
        if (input[1] < 1.15425) {
            var284 = -0.006731368;
        } else {
            var284 = 0.006042747;
        }
    }
    double var285;
    if (input[1] < 1.792522) {
        if (input[0] < -0.474064) {
            var285 = 0.010129648;
        } else {
            var285 = -0.019733893;
        }
    } else {
        if (input[0] < -0.767604) {
            var285 = 0.05467547;
        } else {
            var285 = -0.027887711;
        }
    }
    double var286;
    if (input[0] < -0.540227) {
        if (input[1] < 1.781895) {
            var286 = 0.006780165;
        } else {
            var286 = -0.03592916;
        }
    } else {
        if (input[1] < 1.658252) {
            var286 = -0.013198032;
        } else {
            var286 = 0.04000302;
        }
    }
    double var287;
    if (input[0] < -1.075364) {
        if (input[5] < 0.022623) {
            var287 = -0.05265651;
        } else {
            var287 = 0.025949597;
        }
    } else {
        if (input[1] < 0.056882) {
            var287 = 0.06675031;
        } else {
            var287 = 0.00033781992;
        }
    }
    double var288;
    if (input[1] < -0.696651) {
        if (input[3] < 0.023134) {
            var288 = -0.13272132;
        } else {
            var288 = 0.06189351;
        }
    } else {
        if (input[1] < 0.387694) {
            var288 = 0.02053258;
        } else {
            var288 = -0.0008515855;
        }
    }
    double var289;
    if (input[0] < -1.075364) {
        if (input[3] < 0.048784) {
            var289 = -0.0386205;
        } else {
            var289 = 0.04320297;
        }
    } else {
        if (input[1] < 0.056882) {
            var289 = 0.0639169;
        } else {
            var289 = 0.00032904634;
        }
    }
    double var290;
    if (input[1] < -0.696651) {
        if (input[0] < -0.945135) {
            var290 = -0.084669806;
        } else {
            var290 = 0.01167382;
        }
    } else {
        if (input[0] < -0.060774) {
            var290 = -0.0008320257;
        } else {
            var290 = 0.019986749;
        }
    }
    double var291;
    if (input[3] < 0.866084) {
        if (input[0] < 0.297431) {
            var291 = -0.00023909633;
        } else {
            var291 = 0.056958705;
        }
    } else {
        if (input[5] < 0.241773) {
            var291 = 0.016801344;
        } else {
            var291 = -0.08958305;
        }
    }
    double var292;
    if (input[4] < 0.174985) {
        if (input[4] < 0.105803) {
            var292 = -0.00057899416;
        } else {
            var292 = 0.038222536;
        }
    } else {
        if (input[2] < 8.277188) {
            var292 = 0.07245108;
        } else {
            var292 = -0.019447982;
        }
    }
    double var293;
    if (input[2] < 6.611152) {
        if (input[4] < -0.035296) {
            var293 = 0.056797888;
        } else {
            var293 = -0.10332202;
        }
    } else {
        if (input[2] < 6.965166) {
            var293 = 0.06258293;
        } else {
            var293 = -0.0003249077;
        }
    }
    double var294;
    if (input[2] < 13.353132) {
        if (input[1] < -0.696651) {
            var294 = -0.087023996;
        } else {
            var294 = 0.00013341648;
        }
    } else {
        if (input[5] < -0.004294) {
            var294 = -0.043202486;
        } else {
            var294 = 0.082936816;
        }
    }
    double var295;
    if (input[5] < 0.183788) {
        if (input[0] < -1.04348) {
            var295 = -0.025837142;
        } else {
            var295 = 0.0062023383;
        }
    } else {
        if (input[3] < 0.115821) {
            var295 = 0.011026182;
        } else {
            var295 = -0.042721633;
        }
    }
    double var296;
    if (input[3] < 0.364596) {
        if (input[3] < 0.33106) {
            var296 = 0.00067994994;
        } else {
            var296 = -0.074761845;
        }
    } else {
        if (input[5] < -0.198736) {
            var296 = 0.07926083;
        } else {
            var296 = -0.0022747563;
        }
    }
    double var297;
    if (input[5] < -0.544548) {
        if (input[3] < 0.270059) {
            var297 = -0.048397005;
        } else {
            var297 = 0.04529743;
        }
    } else {
        if (input[4] < 0.626043) {
            var297 = 0.000093630944;
        } else {
            var297 = 0.040181544;
        }
    }
    double var298;
    if (input[1] < 3.098407) {
        if (input[0] < -0.420476) {
            var298 = 0.0021780515;
        } else {
            var298 = -0.009110164;
        }
    } else {
        var298 = 0.054315377;
    }
    double var299;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var299 = 0.07661865;
        } else {
            var299 = -0.0071209343;
        }
    } else {
        if (input[4] < -0.544339) {
            var299 = -0.091049634;
        } else {
            var299 = 0.00031756013;
        }
    }
    double var300;
    if (input[2] < 13.353132) {
        if (input[1] < -0.696651) {
            var300 = -0.077131875;
        } else {
            var300 = 0.000086064385;
        }
    } else {
        if (input[5] < -0.004294) {
            var300 = -0.0384303;
        } else {
            var300 = 0.0812447;
        }
    }
    double var301;
    if (input[0] < 0.409848) {
        if (input[0] < 0.196841) {
            var301 = 0.0006400581;
        } else {
            var301 = -0.032742873;
        }
    } else {
        var301 = 0.05308735;
    }
    double var302;
    if (input[1] < 3.098407) {
        if (input[1] < 1.792522) {
            var302 = 0.0022964;
        } else {
            var302 = -0.007731428;
        }
    } else {
        var302 = 0.05302937;
    }
    double var303;
    if (input[2] < 9.635313) {
        if (input[5] < 0.291002) {
            var303 = -0.000003465421;
        } else {
            var303 = 0.044112727;
        }
    } else {
        if (input[1] < 1.104852) {
            var303 = -0.0148821445;
        } else {
            var303 = 0.005560623;
        }
    }
    double var304;
    if (input[5] < 0.183788) {
        if (input[5] < 0.068929) {
            var304 = -0.002254608;
        } else {
            var304 = 0.026400765;
        }
    } else {
        if (input[3] < 0.115821) {
            var304 = 0.009253552;
        } else {
            var304 = -0.038019907;
        }
    }
    double var305;
    if (input[3] < 0.356945) {
        if (input[3] < 0.33106) {
            var305 = 0.00055907277;
        } else {
            var305 = -0.07432726;
        }
    } else {
        if (input[5] < -0.198736) {
            var305 = 0.0777239;
        } else {
            var305 = -0.001565153;
        }
    }
    double var306;
    if (input[2] < 9.875564) {
        if (input[2] < 9.8341) {
            var306 = 0.0014341054;
        } else {
            var306 = -0.0555525;
        }
    } else {
        if (input[0] < -0.863105) {
            var306 = -0.02975117;
        } else {
            var306 = 0.02027926;
        }
    }
    double var307;
    if (input[2] < 12.34438) {
        if (input[2] < 12.039464) {
            var307 = 0.00027995664;
        } else {
            var307 = -0.050619658;
        }
    } else {
        if (input[3] < -0.00426) {
            var307 = -0.056376368;
        } else {
            var307 = 0.07211095;
        }
    }
    double var308;
    if (input[3] < -0.889584) {
        if (input[5] < -0.309797) {
            var308 = 0.037613973;
        } else {
            var308 = -0.06866964;
        }
    } else {
        if (input[0] < -0.420476) {
            var308 = 0.0028301643;
        } else {
            var308 = -0.0077070193;
        }
    }
    double var309;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var309 = 0.07482431;
        } else {
            var309 = -0.006337692;
        }
    } else {
        if (input[4] < -0.472576) {
            var309 = -0.05197155;
        } else {
            var309 = 0.00073496246;
        }
    }
    double var310;
    if (input[3] < 0.866084) {
        if (input[0] < 0.297431) {
            var310 = -0.00027940687;
        } else {
            var310 = 0.055610925;
        }
    } else {
        if (input[5] < 0.279559) {
            var310 = 0.01932845;
        } else {
            var310 = -0.08493433;
        }
    }
    double var311;
    if (input[3] < 0.356945) {
        if (input[3] < 0.33106) {
            var311 = 0.00045687295;
        } else {
            var311 = -0.06537661;
        }
    } else {
        if (input[5] < -0.198736) {
            var311 = 0.07528448;
        } else {
            var311 = -0.0012083735;
        }
    }
    double var312;
    if (input[1] < 2.19758) {
        if (input[1] < 2.163601) {
            var312 = -0.00042664693;
        } else {
            var312 = -0.082334;
        }
    } else {
        if (input[1] < 2.334695) {
            var312 = 0.080009975;
        } else {
            var312 = -0.002461492;
        }
    }
    double var313;
    if (input[5] < 0.74319) {
        if (input[3] < -0.374838) {
            var313 = -0.016311554;
        } else {
            var313 = 0.0011988302;
        }
    } else {
        if (input[0] < -0.573158) {
            var313 = 0.06270828;
        } else {
            var313 = 0.000049077673;
        }
    }
    double var314;
    if (input[1] < 3.098407) {
        if (input[1] < 1.792522) {
            var314 = 0.0022127766;
        } else {
            var314 = -0.0074339667;
        }
    } else {
        var314 = 0.05180315;
    }
    double var315;
    if (input[1] < 2.085463) {
        if (input[1] < 1.792522) {
            var315 = 0.0019951763;
        } else {
            var315 = -0.012681705;
        }
    } else {
        if (input[0] < 0.266446) {
            var315 = 0.021980727;
        } else {
            var315 = -0.07148654;
        }
    }
    double var316;
    if (input[2] < 6.611152) {
        if (input[1] < 1.72172) {
            var316 = -0.11638683;
        } else {
            var316 = 0.035921775;
        }
    } else {
        if (input[2] < 6.965166) {
            var316 = 0.060898013;
        } else {
            var316 = -0.00037120574;
        }
    }
    double var317;
    if (input[4] < 0.582654) {
        if (input[0] < 0.297431) {
            var317 = -0.00006980055;
        } else {
            var317 = 0.054097217;
        }
    } else {
        if (input[4] < 0.626043) {
            var317 = -0.16243257;
        } else {
            var317 = 0.026923617;
        }
    }
    double var318;
    if (input[2] < 9.635313) {
        if (input[0] < -0.55774) {
            var318 = -0.007714951;
        } else {
            var318 = 0.020326667;
        }
    } else {
        if (input[0] < -0.654439) {
            var318 = 0.008910178;
        } else {
            var318 = -0.011767965;
        }
    }
    double var319;
    if (input[2] < 9.853859) {
        if (input[2] < 9.8341) {
            var319 = 0.0011770286;
        } else {
            var319 = -0.08035309;
        }
    } else {
        if (input[4] < 0.098772) {
            var319 = -0.006576492;
        } else {
            var319 = 0.04527115;
        }
    }
    double var320;
    if (input[4] < 0.167871) {
        if (input[4] < 0.105803) {
            var320 = -0.0004009206;
        } else {
            var320 = 0.03889055;
        }
    } else {
        if (input[1] < 1.72172) {
            var320 = 0.012791723;
        } else {
            var320 = -0.05210572;
        }
    }
    double var321;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var321 = 0.07296261;
        } else {
            var321 = -0.0036447316;
        }
    } else {
        if (input[4] < -0.544339) {
            var321 = -0.07500875;
        } else {
            var321 = 0.00019000475;
        }
    }
    double var322;
    if (input[4] < 0.148735) {
        if (input[4] < 0.105803) {
            var322 = -0.00035791568;
        } else {
            var322 = 0.05439209;
        }
    } else {
        if (input[2] < 9.853859) {
            var322 = -0.028502885;
        } else {
            var322 = 0.033276007;
        }
    }
    double var323;
    if (input[1] < 0.648452) {
        if (input[0] < -0.507594) {
            var323 = -0.031399697;
        } else {
            var323 = 0.034453228;
        }
    } else {
        if (input[0] < -0.474064) {
            var323 = 0.006712027;
        } else {
            var323 = -0.01165082;
        }
    }
    double var324;
    if (input[5] < -0.111672) {
        if (input[5] < -0.150028) {
            var324 = 0.0059638037;
        } else {
            var324 = -0.07013156;
        }
    } else {
        if (input[5] < -0.074334) {
            var324 = 0.058986556;
        } else {
            var324 = -0.0011007058;
        }
    }
    double var325;
    if (input[5] < -0.544548) {
        if (input[1] < 1.742377) {
            var325 = -0.0573435;
        } else {
            var325 = 0.02995926;
        }
    } else {
        if (input[5] < -0.336967) {
            var325 = 0.019107275;
        } else {
            var325 = -0.00062461564;
        }
    }
    double var326;
    if (input[5] < 0.74319) {
        if (input[3] < -0.488714) {
            var326 = -0.017369818;
        } else {
            var326 = 0.0008923377;
        }
    } else {
        if (input[0] < -0.573158) {
            var326 = 0.06039126;
        } else {
            var326 = 0.0016721446;
        }
    }
    double var327;
    if (input[3] < -0.010935) {
        if (input[2] < 12.726535) {
            var327 = 0.007471005;
        } else {
            var327 = -0.087922715;
        }
    } else {
        if (input[3] < 0.001605) {
            var327 = -0.0465437;
        } else {
            var327 = 0.0011568572;
        }
    }
    double var328;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var328 = 0.031368114;
        } else {
            var328 = -0.0024844501;
        }
    } else {
        if (input[3] < -0.00426) {
            var328 = -0.043283712;
        } else {
            var328 = 0.069590904;
        }
    }
    double var329;
    if (input[2] < 13.094919) {
        if (input[1] < -0.696651) {
            var329 = -0.07329962;
        } else {
            var329 = -0.000021820933;
        }
    } else {
        if (input[5] < 0.010897) {
            var329 = -0.040299717;
        } else {
            var329 = 0.08871513;
        }
    }
    double var330;
    if (input[4] < -0.572188) {
        if (input[0] < -0.654439) {
            var330 = 0.071090996;
        } else {
            var330 = -0.0031644807;
        }
    } else {
        if (input[4] < -0.472576) {
            var330 = -0.04262435;
        } else {
            var330 = 0.0005883592;
        }
    }
    double var331;
    if (input[1] < 0.648452) {
        if (input[4] < -0.115564) {
            var331 = 0.047166374;
        } else {
            var331 = -0.024414346;
        }
    } else {
        if (input[1] < 1.030906) {
            var331 = 0.019633252;
        } else {
            var331 = -0.0018037679;
        }
    }
    double var332;
    if (input[1] < 1.226549) {
        if (input[2] < 9.69923) {
            var332 = 0.026047317;
        } else {
            var332 = -0.016961975;
        }
    } else {
        if (input[2] < 9.718091) {
            var332 = -0.007936404;
        } else {
            var332 = 0.023007115;
        }
    }
    double var333;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var333 = 0.031118084;
        } else {
            var333 = -0.0023681917;
        }
    } else {
        if (input[1] < -0.11062) {
            var333 = -0.061025828;
        } else {
            var333 = 0.052857082;
        }
    }
    double var334;
    if (input[2] < 9.635313) {
        if (input[3] < 0.041997) {
            var334 = -0.00597324;
        } else {
            var334 = 0.023303768;
        }
    } else {
        if (input[5] < -0.295155) {
            var334 = -0.032874603;
        } else {
            var334 = 0.0005493303;
        }
    }
    double var335;
    if (input[3] < -0.010935) {
        if (input[2] < 12.726535) {
            var335 = 0.007363873;
        } else {
            var335 = -0.074035004;
        }
    } else {
        if (input[2] < 12.34438) {
            var335 = -0.0058915014;
        } else {
            var335 = 0.054131147;
        }
    }
    double var336;
    if (input[0] < -0.420476) {
        if (input[0] < -0.540227) {
            var336 = -0.0026598403;
        } else {
            var336 = 0.020546367;
        }
    } else {
        if (input[1] < 1.37549) {
            var336 = -0.035759456;
        } else {
            var336 = 0.017619992;
        }
    }
    double var337;
    if (input[5] < 0.183788) {
        if (input[5] < 0.068929) {
            var337 = -0.0019401818;
        } else {
            var337 = 0.023972057;
        }
    } else {
        if (input[0] < -0.925226) {
            var337 = 0.040380616;
        } else {
            var337 = -0.017633416;
        }
    }
    double var338;
    if (input[3] < 0.866084) {
        if (input[3] < 0.57995) {
            var338 = -0.00043221182;
        } else {
            var338 = 0.04019151;
        }
    } else {
        if (input[2] < 9.533675) {
            var338 = -0.0904216;
        } else {
            var338 = 0.02410116;
        }
    }
    double var339;
    if (input[4] < 0.582654) {
        if (input[0] < 0.297431) {
            var339 = -0.0000051060706;
        } else {
            var339 = 0.05236421;
        }
    } else {
        if (input[4] < 0.626043) {
            var339 = -0.14294045;
        } else {
            var339 = 0.024639929;
        }
    }
    double var340;
    if (input[5] < 0.005592) {
        if (input[0] < -0.877924) {
            var340 = -0.031158863;
        } else {
            var340 = 0.011844418;
        }
    } else {
        if (input[0] < -0.877924) {
            var340 = 0.026442561;
        } else {
            var340 = -0.011236447;
        }
    }
    double var341;
    if (input[4] < 0.134935) {
        if (input[4] < 0.111515) {
            var341 = -0.00012331689;
        } else {
            var341 = 0.08207812;
        }
    } else {
        if (input[2] < 9.853859) {
            var341 = -0.026903389;
        } else {
            var341 = 0.033783544;
        }
    }
    double var342;
    if (input[5] < 0.74319) {
        if (input[3] < -0.488714) {
            var342 = -0.015684344;
        } else {
            var342 = 0.000821207;
        }
    } else {
        if (input[1] < 1.139431) {
            var342 = 0.0025558148;
        } else {
            var342 = 0.059524912;
        }
    }
    double var343;
    if (input[3] < -0.010935) {
        if (input[1] < -0.11062) {
            var343 = -0.07100456;
        } else {
            var343 = 0.0071166935;
        }
    } else {
        if (input[3] < 0.001605) {
            var343 = -0.039964136;
        } else {
            var343 = 0.00069756224;
        }
    }
    double var344;
    if (input[1] < 0.49532) {
        if (input[2] < 11.301798) {
            var344 = 0.045860883;
        } else {
            var344 = -0.026549859;
        }
    } else {
        if (input[1] < 0.530796) {
            var344 = -0.075302206;
        } else {
            var344 = 0.00021812406;
        }
    }
    double var345;
    if (input[2] < 13.094919) {
        if (input[1] < -0.696651) {
            var345 = -0.0626718;
        } else {
            var345 = -0.0000886211;
        }
    } else {
        if (input[5] < 0.010897) {
            var345 = -0.032545384;
        } else {
            var345 = 0.087185934;
        }
    }
    double var346;
    if (input[2] < 12.34438) {
        if (input[1] < 0.35581) {
            var346 = 0.028768254;
        } else {
            var346 = -0.0021936584;
        }
    } else {
        if (input[3] < -0.00426) {
            var346 = -0.03191406;
        } else {
            var346 = 0.06392607;
        }
    }
    double var347;
    if (input[2] < 9.635313) {
        if (input[5] < 0.291002) {
            var347 = -0.00045194887;
        } else {
            var347 = 0.04320488;
        }
    } else {
        if (input[3] < 0.232739) {
            var347 = 0.0018365752;
        } else {
            var347 = -0.024951754;
        }
    }
    double var348;
    if (input[2] < 6.611152) {
        if (input[4] < -0.035296) {
            var348 = 0.055379152;
        } else {
            var348 = -0.08635647;
        }
    } else {
        if (input[2] < 6.965166) {
            var348 = 0.05905066;
        } else {
            var348 = -0.0003187777;
        }
    }
    double var349;
    if (input[3] < 0.356945) {
        if (input[3] < 0.33106) {
            var349 = 0.0004781036;
        } else {
            var349 = -0.059253186;
        }
    } else {
        if (input[0] < -0.592468) {
            var349 = -0.011877322;
        } else {
            var349 = 0.04692799;
        }
    }
    double var350;
    if (input[5] < 0.005592) {
        if (input[0] < -0.185464) {
            var350 = -0.00070544396;
        } else {
            var350 = 0.057747807;
        }
    } else {
        if (input[0] < -0.877924) {
            var350 = 0.024215301;
        } else {
            var350 = -0.010401895;
        }
    }
    double var351;
    if (input[0] < 0.182171) {
        if (input[0] < 0.035626) {
            var351 = -0.00051479647;
        } else {
            var351 = 0.06088221;
        }
    } else {
        if (input[4] < -0.031946) {
            var351 = 0.06563174;
        } else {
            var351 = -0.09104494;
        }
    }
    double var352;
    if (input[0] < -0.420476) {
        if (input[1] < 1.844464) {
            var352 = 0.0064059906;
        } else {
            var352 = -0.016612155;
        }
    } else {
        if (input[4] < 0.051953) {
            var352 = -0.02354651;
        } else {
            var352 = 0.03413804;
        }
    }
    double var353;
    if (input[4] < 0.134935) {
        if (input[4] < 0.111515) {
            var353 = 0.00006626074;
        } else {
            var353 = 0.07977095;
        }
    } else {
        if (input[0] < -0.397723) {
            var353 = -0.020054918;
        } else {
            var353 = 0.049083862;
        }
    }
    double var354;
    if (input[0] < -0.420476) {
        if (input[0] < -0.540227) {
            var354 = -0.002193601;
        } else {
            var354 = 0.019499455;
        }
    } else {
        if (input[1] < 1.37549) {
            var354 = -0.03256386;
        } else {
            var354 = 0.015422619;
        }
    }
    double var355;
    var355 = sigmoid(var0 + var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21 + var22 + var23 + var24 + var25 + var26 + var27 + var28 + var29 + var30 + var31 + var32 + var33 + var34 + var35 + var36 + var37 + var38 + var39 + var40 + var41 + var42 + var43 + var44 + var45 + var46 + var47 + var48 + var49 + var50 + var51 + var52 + var53 + var54 + var55 + var56 + var57 + var58 + var59 + var60 + var61 + var62 + var63 + var64 + var65 + var66 + var67 + var68 + var69 + var70 + var71 + var72 + var73 + var74 + var75 + var76 + var77 + var78 + var79 + var80 + var81 + var82 + var83 + var84 + var85 + var86 + var87 + var88 + var89 + var90 + var91 + var92 + var93 + var94 + var95 + var96 + var97 + var98 + var99 + var100 + var101 + var102 + var103 + var104 + var105 + var106 + var107 + var108 + var109 + var110 + var111 + var112 + var113 + var114 + var115 + var116 + var117 + var118 + var119 + var120 + var121 + var122 + var123 + var124 + var125 + var126 + var127 + var128 + var129 + var130 + var131 + var132 + var133 + var134 + var135 + var136 + var137 + var138 + var139 + var140 + var141 + var142 + var143 + var144 + var145 + var146 + var147 + var148 + var149 + var150 + var151 + var152 + var153 + var154 + var155 + var156 + var157 + var158 + var159 + var160 + var161 + var162 + var163 + var164 + var165 + var166 + var167 + var168 + var169 + var170 + var171 + var172 + var173 + var174 + var175 + var176 + var177 + var178 + var179 + var180 + var181 + var182 + var183 + var184 + var185 + var186 + var187 + var188 + var189 + var190 + var191 + var192 + var193 + var194 + var195 + var196 + var197 + var198 + var199 + var200 + var201 + var202 + var203 + var204 + var205 + var206 + var207 + var208 + var209 + var210 + var211 + var212 + var213 + var214 + var215 + var216 + var217 + var218 + var219 + var220 + var221 + var222 + var223 + var224 + var225 + var226 + var227 + var228 + var229 + var230 + var231 + var232 + var233 + var234 + var235 + var236 + var237 + var238 + var239 + var240 + var241 + var242 + var243 + var244 + var245 + var246 + var247 + var248 + var249 + var250 + var251 + var252 + var253 + var254 + var255 + var256 + var257 + var258 + var259 + var260 + var261 + var262 + var263 + var264 + var265 + var266 + var267 + var268 + var269 + var270 + var271 + var272 + var273 + var274 + var275 + var276 + var277 + var278 + var279 + var280 + var281 + var282 + var283 + var284 + var285 + var286 + var287 + var288 + var289 + var290 + var291 + var292 + var293 + var294 + var295 + var296 + var297 + var298 + var299 + var300 + var301 + var302 + var303 + var304 + var305 + var306 + var307 + var308 + var309 + var310 + var311 + var312 + var313 + var314 + var315 + var316 + var317 + var318 + var319 + var320 + var321 + var322 + var323 + var324 + var325 + var326 + var327 + var328 + var329 + var330 + var331 + var332 + var333 + var334 + var335 + var336 + var337 + var338 + var339 + var340 + var341 + var342 + var343 + var344 + var345 + var346 + var347 + var348 + var349 + var350 + var351 + var352 + var353 + var354);
    memcpy(output, (double[]){1.0 - var355, var355}, 2 * sizeof(double));
}
