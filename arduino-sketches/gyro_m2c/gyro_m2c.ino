// Imports
#include <math.h>
#include <string.h>

// Declaring Global Variables
int color = 0;

// XGB-Model
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
    double mc[2] = {1.0 - var355, var355};
    memcpy(output, mc, 2 * sizeof(double));
}

// Funcs
void printScoreCSV(double input[], int length, int pc) { // Format: Score0, Score1\n
    int precision = 4;

    int x0 = input[0];
    int x1 = input[1];

    for(int i = 0; i < 2; i++) {
        Serial.print(input[i],precision);
        if(i==0) {
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
void infer(int time, int csv) { // time: delay between each inference, csv: 1 prints column-names for csv, else prints start|stop-values
	if(csv==1){
    Serial.println("aScore0,aScore1");        // Printing header to name columns in csv
  } else {
    Serial.println("Start: 0 | End: 250");    // Printing Range:
  }

	// Declarations:
	int length = 2;
	double result[length];

	// Model Inference
	double x_0[] = {-0.623154, 3.131787, 11.257041, -0.736, -0.059642, 0.56997};
	int y_0 = 1;
	score(x_0, result);
	printScoreCSV(result, length, y_0);
	delay(time);

	double x_1[] = {1.366808, 2.376458, 11.491304, -0.219388, 0.297717, -0.341959};
	int y_1 = 1;
	score(x_1, result);
	printScoreCSV(result, length, y_1);
	delay(time);

	double x_2[] = {-0.931214, 1.462459, 9.501641, 0.435188, 0.209586, 0.465394};
	int y_2 = 1;
	score(x_2, result);
	printScoreCSV(result, length, y_2);
	delay(time);

	double x_3[] = {0.209265, 2.590363, 12.200529, 0.147434, -0.108728, -0.057775};
	int y_3 = 1;
	score(x_3, result);
	printScoreCSV(result, length, y_3);
	delay(time);

	double x_4[] = {-0.111518, 1.748065, 8.976833, 0.754365, 0.03308, -0.407495};
	int y_4 = 1;
	score(x_4, result);
	printScoreCSV(result, length, y_4);
	delay(time);

	double x_5[] = {-0.17798, 2.64006, 7.981852, -0.140428, 0.266522, -0.288973};
	int y_5 = 1;
	score(x_5, result);
	printScoreCSV(result, length, y_5);
	delay(time);

	double x_6[] = {0.403561, 2.209106, 7.659422, -0.338575, 0.171403, -0.129737};
	int y_6 = 1;
	score(x_6, result);
	printScoreCSV(result, length, y_6);
	delay(time);

	double x_7[] = {0.18262, 2.995571, 9.547296, 0.155736, -0.069143, -0.021728};
	int y_7 = 1;
	score(x_7, result);
	printScoreCSV(result, length, y_7);
	delay(time);

	double x_8[] = {-0.248932, 1.057401, 12.385245, 0.035847, 0.013138, 0.360773};
	int y_8 = 1;
	score(x_8, result);
	printScoreCSV(result, length, y_8);
	delay(time);

	double x_9[] = {-0.097747, 2.312092, 8.507558, 0.218066, 0.246937, -0.338734};
	int y_9 = 1;
	score(x_9, result);
	printScoreCSV(result, length, y_9);
	delay(time);

	double x_10[] = {-0.958307, 1.745969, 9.609567, -0.331516, -0.042587, 0.418059};
	int y_10 = 1;
	score(x_10, result);
	printScoreCSV(result, length, y_10);
	delay(time);

	double x_11[] = {2.06765, 0.430205, 13.596825, -0.216439, -0.044937, -0.10312};
	int y_11 = 1;
	score(x_11, result);
	printScoreCSV(result, length, y_11);
	delay(time);

	double x_12[] = {1.581611, 2.818489, 13.388009, -0.322366, 0.390015, -0.178312};
	int y_12 = 1;
	score(x_12, result);
	printScoreCSV(result, length, y_12);
	delay(time);

	double x_13[] = {0.240699, 1.993854, 12.900623, -0.804063, -0.280203, -0.08198};
	int y_13 = 1;
	score(x_13, result);
	printScoreCSV(result, length, y_13);
	delay(time);

	double x_14[] = {0.059726, 1.83234, 11.15181, -0.228472, -0.048252, 0.496837};
	int y_14 = 1;
	score(x_14, result);
	printScoreCSV(result, length, y_14);
	delay(time);

	double x_15[] = {-0.344284, 2.099085, 8.47807, 0.177153, -0.08545, -0.001182};
	int y_15 = 1;
	score(x_15, result);
	printScoreCSV(result, length, y_15);
	delay(time);

	double x_16[] = {-0.179477, 3.559747, 6.881789, -0.14788, 0.148133, -0.226857};
	int y_16 = 1;
	score(x_16, result);
	printScoreCSV(result, length, y_16);
	delay(time);

	double x_17[] = {4.678671, 0.4567, 11.599828, -0.001511, -0.165192, -0.096345};
	int y_17 = 1;
	score(x_17, result);
	printScoreCSV(result, length, y_17);
	delay(time);

	double x_18[] = {-0.141905, 4.112847, 12.25756, -0.622587, 0.072925, -0.060069};
	int y_18 = 1;
	score(x_18, result);
	printScoreCSV(result, length, y_18);
	delay(time);

	double x_19[] = {0.407902, 1.382525, 7.386091, -0.253205, 0.100281, -0.349632};
	int y_19 = 1;
	score(x_19, result);
	printScoreCSV(result, length, y_19);
	delay(time);

	double x_20[] = {0.87538, 1.742227, 10.054891, 0.012892, 0.017248, -0.281757};
	int y_20 = 1;
	score(x_20, result);
	printScoreCSV(result, length, y_20);
	delay(time);

	double x_21[] = {-0.49053, 1.09662, 8.272248, 0.139795, 0.512044, -0.125974};
	int y_21 = 1;
	score(x_21, result);
	printScoreCSV(result, length, y_21);
	delay(time);

	double x_22[] = {1.043779, 1.419199, 9.8341, -0.689745, 0.02235, 0.448672};
	int y_22 = 1;
	score(x_22, result);
	printScoreCSV(result, length, y_22);
	delay(time);

	double x_23[] = {-0.014819, 1.070574, 7.483239, -0.504728, 0.127121, -0.508805};
	int y_23 = 1;
	score(x_23, result);
	printScoreCSV(result, length, y_23);
	delay(time);

	double x_24[] = {-0.309257, 2.663112, 7.320078, -0.270741, -0.090023, 0.229317};
	int y_24 = 1;
	score(x_24, result);
	printScoreCSV(result, length, y_24);
	delay(time);

	double x_25[] = {0.896037, 0.085772, 10.522518, -0.019541, -0.073002, 0.024696};
	int y_25 = 1;
	score(x_25, result);
	printScoreCSV(result, length, y_25);
	delay(time);

	double x_26[] = {0.89948, 1.021326, 7.048243, 0.556877, 0.091975, -0.06388};
	int y_26 = 1;
	score(x_26, result);
	printScoreCSV(result, length, y_26);
	delay(time);

	double x_27[] = {0.797691, 2.376758, 11.384875, -0.612042, 0.065985, -0.47649};
	int y_27 = 1;
	score(x_27, result);
	printScoreCSV(result, length, y_27);
	delay(time);

	double x_28[] = {0.298479, 1.326541, 6.9728, 0.220506, -0.065857, -0.539153};
	int y_28 = 1;
	score(x_28, result);
	printScoreCSV(result, length, y_28);
	delay(time);

	double x_29[] = {-1.010698, 4.710105, 11.095976, 3.5e-05, -0.3583, 0.165857};
	int y_29 = 1;
	score(x_29, result);
	printScoreCSV(result, length, y_29);
	delay(time);

	double x_30[] = {-0.327968, 1.828597, 9.075777, -0.004429, -0.06608, -0.076243};
	int y_30 = 1;
	score(x_30, result);
	printScoreCSV(result, length, y_30);
	delay(time);

	double x_31[] = {0.517324, 1.626967, 9.681717, 0.014175, 0.175041, -0.199627};
	int y_31 = 1;
	score(x_31, result);
	printScoreCSV(result, length, y_31);
	delay(time);

	double x_32[] = {-0.114063, 3.044519, 10.100396, -0.292451, 0.011631, 0.008098};
	int y_32 = 1;
	score(x_32, result);
	printScoreCSV(result, length, y_32);
	delay(time);

	double x_33[] = {0.304317, 3.338358, 12.15203, 0.024056, -0.628172, -0.844948};
	int y_33 = 1;
	score(x_33, result);
	printScoreCSV(result, length, y_33);
	delay(time);

	double x_34[] = {-0.982706, 2.027833, 11.454181, -0.373702, 0.229649, 0.167135};
	int y_34 = 1;
	score(x_34, result);
	printScoreCSV(result, length, y_34);
	delay(time);

	double x_35[] = {-0.733325, 3.35183, 11.787837, 0.213521, 0.048133, -0.419252};
	int y_35 = 1;
	score(x_35, result);
	printScoreCSV(result, length, y_35);
	delay(time);

	double x_36[] = {0.414638, 0.841849, 10.951227, 0.037226, -0.456882, -0.890448};
	int y_36 = 1;
	score(x_36, result);
	printScoreCSV(result, length, y_36);
	delay(time);

	double x_37[] = {-0.861309, 2.655927, 8.832084, -0.228607, -0.223958, 0.031645};
	int y_37 = 1;
	score(x_37, result);
	printScoreCSV(result, length, y_37);
	delay(time);

	double x_38[] = {-0.441133, 1.025517, 11.8055, 0.309872, 0.10934, 0.043496};
	int y_38 = 1;
	score(x_38, result);
	printScoreCSV(result, length, y_38);
	delay(time);

	double x_39[] = {-0.062121, 1.221909, 11.358829, -0.104018, 0.190778, -0.138792};
	int y_39 = 1;
	score(x_39, result);
	printScoreCSV(result, length, y_39);
	delay(time);

	double x_40[] = {-0.755629, 2.196832, 7.816446, -0.080302, -0.180336, 0.094146};
	int y_40 = 1;
	score(x_40, result);
	printScoreCSV(result, length, y_40);
	delay(time);

	double x_41[] = {-0.76446, 3.802543, 12.55095, 0.043052, 0.876468, 0.303031};
	int y_41 = 1;
	score(x_41, result);
	printScoreCSV(result, length, y_41);
	delay(time);

	double x_42[] = {0.393083, 1.26472, 10.104138, -0.257551, 0.412934, 0.025518};
	int y_42 = 1;
	score(x_42, result);
	printScoreCSV(result, length, y_42);
	delay(time);

	double x_43[] = {0.609682, 1.276994, 12.310849, -0.026866, -0.145919, -0.08705};
	int y_43 = 1;
	score(x_43, result);
	printScoreCSV(result, length, y_43);
	delay(time);

	double x_44[] = {-0.90906, 3.259023, 7.881111, 0.193687, 0.107909, 0.096086};
	int y_44 = 1;
	score(x_44, result);
	printScoreCSV(result, length, y_44);
	delay(time);

	double x_45[] = {0.091759, 3.241659, 8.123158, -0.14633, 0.106643, -0.172289};
	int y_45 = 1;
	score(x_45, result);
	printScoreCSV(result, length, y_45);
	delay(time);

	double x_46[] = {0.002844, 2.583029, 11.85834, 0.18063, 0.224634, -0.253352};
	int y_46 = 1;
	score(x_46, result);
	printScoreCSV(result, length, y_46);
	delay(time);

	double x_47[] = {-0.274679, 1.02926, 11.160492, 0.26372, 0.227427, -0.270206};
	int y_47 = 1;
	score(x_47, result);
	printScoreCSV(result, length, y_47);
	delay(time);

	double x_48[] = {1.427731, 2.35146, 11.467503, -0.341791, -0.18004, -0.266395};
	int y_48 = 1;
	score(x_48, result);
	printScoreCSV(result, length, y_48);
	delay(time);

	double x_49[] = {-0.026495, 3.292553, 7.260651, 0.176294, 0.043209, -0.061733};
	int y_49 = 1;
	score(x_49, result);
	printScoreCSV(result, length, y_49);
	delay(time);

	double x_50[] = {-0.067809, 2.391876, 9.539063, 0.074206, 0.040939, 0.009205};
	int y_50 = 1;
	score(x_50, result);
	printScoreCSV(result, length, y_50);
	delay(time);

	double x_51[] = {0.479453, 3.535199, 11.010504, -0.055668, -0.019685, -0.005184};
	int y_51 = 1;
	score(x_51, result);
	printScoreCSV(result, length, y_51);
	delay(time);

	double x_52[] = {0.503852, 0.966241, 7.031179, -0.404484, 0.050422, 0.513205};
	int y_52 = 1;
	score(x_52, result);
	printScoreCSV(result, length, y_52);
	delay(time);

	double x_53[] = {0.440983, 3.035089, 8.257728, -0.331321, -0.302614, 0.223355};
	int y_53 = 1;
	score(x_53, result);
	printScoreCSV(result, length, y_53);
	delay(time);

	double x_54[] = {-1.342109, 2.118694, 8.952733, -0.038155, 0.000176, 0.298199};
	int y_54 = 1;
	score(x_54, result);
	printScoreCSV(result, length, y_54);
	delay(time);

	double x_55[] = {-0.36075, 2.136208, 6.899902, -0.055564, 0.018455, 0.065696};
	int y_55 = 1;
	score(x_55, result);
	printScoreCSV(result, length, y_55);
	delay(time);

	double x_56[] = {-0.014819, 3.238066, 6.09742, 0.248481, 0.068332, -0.019391};
	int y_56 = 1;
	score(x_56, result);
	printScoreCSV(result, length, y_56);
	delay(time);

	double x_57[] = {-0.393232, 3.09212, 9.181906, 0.322885, 0.918091, -0.058874};
	int y_57 = 1;
	score(x_57, result);
	printScoreCSV(result, length, y_57);
	delay(time);

	double x_58[] = {-0.182171, 2.465972, 6.356532, 0.059789, -0.103344, -0.137657};
	int y_58 = 1;
	score(x_58, result);
	printScoreCSV(result, length, y_58);
	delay(time);

	double x_59[] = {-0.484243, 0.696053, 13.022769, 0.052085, -0.08673, -0.113399};
	int y_59 = 1;
	score(x_59, result);
	printScoreCSV(result, length, y_59);
	delay(time);

	double x_60[] = {-0.433798, 3.328329, 10.306068, 0.501602, -0.243626, 0.580458};
	int y_60 = 1;
	score(x_60, result);
	printScoreCSV(result, length, y_60);
	delay(time);

	double x_61[] = {0.867147, 2.463427, 8.469687, -0.075665, 0.058728, -0.29328};
	int y_61 = 1;
	score(x_61, result);
	printScoreCSV(result, length, y_61);
	delay(time);

	double x_62[] = {-0.772693, 2.326761, 11.289823, -0.634518, -0.225289, -0.207624};
	int y_62 = 1;
	score(x_62, result);
	printScoreCSV(result, length, y_62);
	delay(time);

	double x_63[] = {0.208965, 2.017804, 12.063564, 0.172104, -0.298589, 0.018007};
	int y_63 = 1;
	score(x_63, result);
	printScoreCSV(result, length, y_63);
	delay(time);

	double x_64[] = {-0.045505, 2.085463, 6.987769, -0.669441, 0.075428, 0.042325};
	int y_64 = 1;
	score(x_64, result);
	printScoreCSV(result, length, y_64);
	delay(time);

	double x_65[] = {0.141905, 2.867437, 10.927576, -0.082634, -0.097703, 0.232056};
	int y_65 = 1;
	score(x_65, result);
	printScoreCSV(result, length, y_65);
	delay(time);

	double x_66[] = {0.460592, 1.989064, 7.307205, 0.430501, -0.150183, 0.262474};
	int y_66 = 1;
	score(x_66, result);
	printScoreCSV(result, length, y_66);
	delay(time);

	double x_67[] = {0.207469, 4.021537, 9.21379, -0.029705, -0.018253, -0.148797};
	int y_67 = 1;
	score(x_67, result);
	printScoreCSV(result, length, y_67);
	delay(time);

	double x_68[] = {-0.280367, 1.33687, 7.773934, 0.152635, 0.283507, -0.45925};
	int y_68 = 1;
	score(x_68, result);
	printScoreCSV(result, length, y_68);
	delay(time);

	double x_69[] = {1.35109, 0.428259, 8.010442, 0.060616, 0.39156, -0.033557};
	int y_69 = 1;
	score(x_69, result);
	printScoreCSV(result, length, y_69);
	delay(time);

	double x_70[] = {-0.460742, 0.714464, 10.333911, -0.272166, 0.05478, 0.012342};
	int y_70 = 1;
	score(x_70, result);
	printScoreCSV(result, length, y_70);
	delay(time);

	double x_71[] = {-0.00973, 2.93345, 9.951156, -0.347467, -0.222241, 0.065321};
	int y_71 = 1;
	score(x_71, result);
	printScoreCSV(result, length, y_71);
	delay(time);

	double x_72[] = {-0.123942, 1.496288, 7.046447, 0.163582, -0.077775, -0.14618};
	int y_72 = 1;
	score(x_72, result);
	printScoreCSV(result, length, y_72);
	delay(time);

	double x_73[] = {-0.522114, 3.04392, 11.866723, 0.181791, 0.136847, 0.067698};
	int y_73 = 1;
	score(x_73, result);
	printScoreCSV(result, length, y_73);
	delay(time);

	double x_74[] = {-0.515079, 4.289181, 10.751841, 0.0788, -0.181494, -0.066949};
	int y_74 = 1;
	score(x_74, result);
	printScoreCSV(result, length, y_74);
	delay(time);

	double x_75[] = {0.315394, 1.835483, 8.990454, -0.026009, 0.070868, -0.073858};
	int y_75 = 1;
	score(x_75, result);
	printScoreCSV(result, length, y_75);
	delay(time);

	double x_76[] = {1.553769, 1.366209, 10.761571, 0.44991, -0.291057, -1.301159};
	int y_76 = 1;
	score(x_76, result);
	printScoreCSV(result, length, y_76);
	delay(time);

	double x_77[] = {-1.294059, 2.482438, 12.087813, -0.243989, -0.453108, -0.090075};
	int y_77 = 1;
	score(x_77, result);
	printScoreCSV(result, length, y_77);
	delay(time);

	double x_78[] = {0.926573, -0.006886, 11.864328, 0.174572, -0.060518, 0.371454};
	int y_78 = 1;
	score(x_78, result);
	printScoreCSV(result, length, y_78);
	delay(time);

	double x_79[] = {-0.595611, 3.096611, 7.990683, 0.199167, 0.080387, 0.45895};
	int y_79 = 1;
	score(x_79, result);
	printScoreCSV(result, length, y_79);
	delay(time);

	double x_80[] = {-0.094903, 3.344794, 9.450448, -1.467372, -0.288292, 0.365652};
	int y_80 = 1;
	score(x_80, result);
	printScoreCSV(result, length, y_80);
	delay(time);

	double x_81[] = {-0.490979, 1.532813, 9.696536, 0.151783, 0.126023, 0.485336};
	int y_81 = 1;
	score(x_81, result);
	printScoreCSV(result, length, y_81);
	delay(time);

	double x_82[] = {1.337169, 2.754272, 12.018208, -0.121709, -0.278657, -0.084368};
	int y_82 = 1;
	score(x_82, result);
	printScoreCSV(result, length, y_82);
	delay(time);

	double x_83[] = {-0.885109, 0.814456, 10.158026, 0.274658, -0.051124, -0.138118};
	int y_83 = 1;
	score(x_83, result);
	printScoreCSV(result, length, y_83);
	delay(time);

	double x_84[] = {0.020657, 3.640879, 7.965835, -0.267875, -0.060976, -0.126114};
	int y_84 = 1;
	score(x_84, result);
	printScoreCSV(result, length, y_84);
	delay(time);

	double x_85[] = {0.518073, 1.647474, 7.399563, 0.074903, -0.042796, 0.300408};
	int y_85 = 1;
	score(x_85, result);
	printScoreCSV(result, length, y_85);
	delay(time);

	double x_86[] = {-0.712668, 1.673221, 9.186696, 0.268032, -0.010546, 0.378941};
	int y_86 = 1;
	score(x_86, result);
	printScoreCSV(result, length, y_86);
	delay(time);

	double x_87[] = {-0.454455, 3.796705, 11.33443, -0.003536, 0.255132, 0.104756};
	int y_87 = 1;
	score(x_87, result);
	printScoreCSV(result, length, y_87);
	delay(time);

	double x_88[] = {-0.725092, 3.450924, 8.368797, 0.085495, -0.329309, 0.164403};
	int y_88 = 1;
	score(x_88, result);
	printScoreCSV(result, length, y_88);
	delay(time);

	double x_89[] = {-0.845741, 0.526006, 10.650053, -0.049892, -0.286261, -0.197195};
	int y_89 = 1;
	score(x_89, result);
	printScoreCSV(result, length, y_89);
	delay(time);

	double x_90[] = {0.077838, 3.645818, 8.692873, 0.124287, -0.235445, 0.180525};
	int y_90 = 1;
	score(x_90, result);
	printScoreCSV(result, length, y_90);
	delay(time);

	double x_91[] = {0.349972, 0.828677, 12.712913, -0.131592, -0.104142, 0.120706};
	int y_91 = 1;
	score(x_91, result);
	printScoreCSV(result, length, y_91);
	delay(time);

	double x_92[] = {0.599054, 1.610501, 6.459218, 0.182326, -0.081311, -0.202438};
	int y_92 = 1;
	score(x_92, result);
	printScoreCSV(result, length, y_92);
	delay(time);

	double x_93[] = {0.583337, -0.082928, 9.658814, 0.341802, 0.379332, -0.104096};
	int y_93 = 1;
	score(x_93, result);
	printScoreCSV(result, length, y_93);
	delay(time);

	double x_94[] = {0.080982, 2.710114, 6.508017, 0.128959, -0.210729, -2.5e-05};
	int y_94 = 1;
	score(x_94, result);
	printScoreCSV(result, length, y_94);
	delay(time);

	double x_95[] = {0.553848, 1.133443, 8.916807, 0.1689, 0.004079, 0.309952};
	int y_95 = 1;
	score(x_95, result);
	printScoreCSV(result, length, y_95);
	delay(time);

	double x_96[] = {1.133593, 1.682202, 8.981623, 0.645144, -0.105712, 0.259032};
	int y_96 = 1;
	score(x_96, result);
	printScoreCSV(result, length, y_96);
	delay(time);

	double x_97[] = {0.107027, 2.320475, 6.856492, 0.049209, -0.05503, 0.196256};
	int y_97 = 1;
	score(x_97, result);
	printScoreCSV(result, length, y_97);
	delay(time);

	double x_98[] = {-0.458646, 1.803749, 7.771539, -0.313529, -0.132979, -0.280679};
	int y_98 = 1;
	score(x_98, result);
	printScoreCSV(result, length, y_98);
	delay(time);

	double x_99[] = {-0.036225, 3.267106, 7.957303, -0.382315, 0.711144, 0.289718};
	int y_99 = 1;
	score(x_99, result);
	printScoreCSV(result, length, y_99);
	delay(time);

	double x_100[] = {0.743204, 1.361718, 8.35278, -0.605236, 0.124808, 0.082972};
	int y_100 = 1;
	score(x_100, result);
	printScoreCSV(result, length, y_100);
	delay(time);

	double x_101[] = {1.499731, 0.949326, 10.966794, -0.281121, 0.066559, 0.038339};
	int y_101 = 1;
	score(x_101, result);
	printScoreCSV(result, length, y_101);
	delay(time);

	double x_102[] = {-0.910856, 1.603615, 8.597072, 0.950688, 0.162053, 0.422634};
	int y_102 = 1;
	score(x_102, result);
	printScoreCSV(result, length, y_102);
	delay(time);

	double x_103[] = {-0.103734, 2.579137, 8.15085, 0.099942, -0.079635, 0.403021};
	int y_103 = 1;
	score(x_103, result);
	printScoreCSV(result, length, y_103);
	delay(time);

	double x_104[] = {-0.261955, 3.911516, 8.647517, 0.026296, -0.039249, -0.091335};
	int y_104 = 1;
	score(x_104, result);
	printScoreCSV(result, length, y_104);
	delay(time);

	double x_105[] = {-0.738714, 2.578538, 9.252859, -0.102908, 0.031875, -0.027748};
	int y_105 = 1;
	score(x_105, result);
	printScoreCSV(result, length, y_105);
	delay(time);

	double x_106[] = {-1.147813, 1.746269, 8.938512, 0.422767, 0.151303, 0.084959};
	int y_106 = 1;
	score(x_106, result);
	printScoreCSV(result, length, y_106);
	delay(time);

	double x_107[] = {-0.233365, 2.61611, 7.527846, -0.032462, 0.068207, 0.040996};
	int y_107 = 1;
	score(x_107, result);
	printScoreCSV(result, length, y_107);
	delay(time);

	double x_108[] = {-0.136815, 2.206861, 6.271508, 0.182769, -0.004798, -0.091947};
	int y_108 = 1;
	score(x_108, result);
	printScoreCSV(result, length, y_108);
	delay(time);

	double x_109[] = {0.704435, 2.924469, 10.981763, -0.187802, -0.141779, -0.093954};
	int y_109 = 1;
	score(x_109, result);
	printScoreCSV(result, length, y_109);
	delay(time);

	double x_110[] = {-1.628164, 3.756738, 10.419532, 0.647498, -0.09653, 0.225882};
	int y_110 = 1;
	score(x_110, result);
	printScoreCSV(result, length, y_110);
	delay(time);

	double x_111[] = {0.320184, 2.973417, 6.416557, 0.01106, 0.053914, 0.050469};
	int y_111 = 1;
	score(x_111, result);
	printScoreCSV(result, length, y_111);
	delay(time);

	double x_112[] = {-0.729283, 1.549727, 11.772719, -0.461102, -0.095152, 0.454655};
	int y_112 = 1;
	score(x_112, result);
	printScoreCSV(result, length, y_112);
	delay(time);

	double x_113[] = {-0.546214, 2.33694, 6.707552, 0.273674, -0.038916, -0.161703};
	int y_113 = 1;
	score(x_113, result);
	printScoreCSV(result, length, y_113);
	delay(time);

	double x_114[] = {-1.287323, 3.945495, 10.597662, 0.168115, 0.334822, 0.117682};
	int y_114 = 1;
	score(x_114, result);
	printScoreCSV(result, length, y_114);
	delay(time);

	double x_115[] = {-0.034578, 3.051255, 8.253387, 0.112534, -0.306746, -0.041875};
	int y_115 = 1;
	score(x_115, result);
	printScoreCSV(result, length, y_115);
	delay(time);

	double x_116[] = {-0.376467, 2.212998, 11.865226, 0.050056, 0.001153, -0.073184};
	int y_116 = 1;
	score(x_116, result);
	printScoreCSV(result, length, y_116);
	delay(time);

	double x_117[] = {-0.108225, 2.223925, 13.210329, -0.086483, 0.154826, 0.18668};
	int y_117 = 1;
	score(x_117, result);
	printScoreCSV(result, length, y_117);
	delay(time);

	double x_118[] = {-0.045505, 3.131039, 7.516918, -0.290542, -0.367761, -0.034876};
	int y_118 = 1;
	score(x_118, result);
	printScoreCSV(result, length, y_118);
	delay(time);

	double x_119[] = {-1.520688, 3.705395, 10.619517, 0.244849, -0.360908, 0.123661};
	int y_119 = 1;
	score(x_119, result);
	printScoreCSV(result, length, y_119);
	delay(time);

	double x_120[] = {-0.151335, 2.601889, 9.147627, 0.123141, 0.182128, 0.06719};
	int y_120 = 1;
	score(x_120, result);
	printScoreCSV(result, length, y_120);
	delay(time);

	double x_121[] = {0.936902, 1.076561, 7.655979, -0.023915, 0.186144, 0.106816};
	int y_121 = 1;
	score(x_121, result);
	printScoreCSV(result, length, y_121);
	delay(time);

	double x_122[] = {-0.883762, 2.597698, 9.308543, 0.360679, -0.305648, 0.086385};
	int y_122 = 1;
	score(x_122, result);
	printScoreCSV(result, length, y_122);
	delay(time);

	double x_123[] = {0.446222, 1.383573, 12.0221, 0.074186, -0.265013, 0.087352};
	int y_123 = 1;
	score(x_123, result);
	printScoreCSV(result, length, y_123);
	delay(time);

	double x_124[] = {-0.790806, 1.667233, 9.77632, -0.008462, 0.035829, -0.00312};
	int y_124 = 1;
	score(x_124, result);
	printScoreCSV(result, length, y_124);
	delay(time);

	double x_125[] = {-0.64426, 3.244054, 8.973839, 0.31527, 0.116967, 0.034653};
	int y_125 = 1;
	score(x_125, result);
	printScoreCSV(result, length, y_125);
	delay(time);

	double x_126[] = {-0.723745, 2.099833, 10.013128, 0.397491, 0.137176, -0.110091};
	int y_126 = 1;
	score(x_126, result);
	printScoreCSV(result, length, y_126);
	delay(time);

	double x_127[] = {1.146466, 1.612148, 8.744067, -0.237544, -0.142793, 0.073983};
	int y_127 = 1;
	score(x_127, result);
	printScoreCSV(result, length, y_127);
	delay(time);

	double x_128[] = {1.511706, 2.303709, 8.713979, -0.889952, -0.45757, -0.40471};
	int y_128 = 1;
	score(x_128, result);
	printScoreCSV(result, length, y_128);
	delay(time);

	double x_129[] = {0.120948, 3.339855, 8.618178, 0.299525, -0.25784, 0.232767};
	int y_129 = 1;
	score(x_129, result);
	printScoreCSV(result, length, y_129);
	delay(time);

	double x_130[] = {1.107397, 2.594405, 9.005273, -0.162879, 0.346562, 0.184082};
	int y_130 = 1;
	score(x_130, result);
	printScoreCSV(result, length, y_130);
	delay(time);

	double x_131[] = {-0.316292, -0.032632, 14.71964, -0.151315, -0.034528, -0.0416};
	int y_131 = 1;
	score(x_131, result);
	printScoreCSV(result, length, y_131);
	delay(time);

	double x_132[] = {-0.718805, 1.433719, 12.642111, -0.188187, 0.03973, -0.362133};
	int y_132 = 1;
	score(x_132, result);
	printScoreCSV(result, length, y_132);
	delay(time);

	double x_133[] = {0.840352, 1.281485, 12.44048, 0.022125, 0.110819, -0.124121};
	int y_133 = 1;
	score(x_133, result);
	printScoreCSV(result, length, y_133);
	delay(time);

	double x_134[] = {-0.209564, 3.571872, 10.256971, 0.159246, -0.084921, -0.111374};
	int y_134 = 1;
	score(x_134, result);
	printScoreCSV(result, length, y_134);
	delay(time);

	double x_135[] = {-0.486039, 1.745071, 9.522298, -0.187543, -0.144632, 0.074731};
	int y_135 = 1;
	score(x_135, result);
	printScoreCSV(result, length, y_135);
	delay(time);

	double x_136[] = {-0.074994, 4.258345, 10.304122, -0.034359, -0.051959, -0.227386};
	int y_136 = 1;
	score(x_136, result);
	printScoreCSV(result, length, y_136);
	delay(time);

	double x_137[] = {0.798889, 2.949616, 11.051967, -0.005338, -0.669185, -0.064439};
	int y_137 = 1;
	score(x_137, result);
	printScoreCSV(result, length, y_137);
	delay(time);

	double x_138[] = {-0.444576, 4.285887, 12.58493, -0.614357, 0.078477, -0.471799};
	int y_138 = 1;
	score(x_138, result);
	printScoreCSV(result, length, y_138);
	delay(time);

	double x_139[] = {-0.959804, 1.606908, 8.613688, 0.191242, -0.418907, 0.227552};
	int y_139 = 1;
	score(x_139, result);
	printScoreCSV(result, length, y_139);
	delay(time);

	double x_140[] = {0.091909, 3.753295, 10.735376, -0.319526, -0.118331, 0.091547};
	int y_140 = 1;
	score(x_140, result);
	printScoreCSV(result, length, y_140);
	delay(time);

	double x_141[] = {0.001347, 2.551594, 10.417437, -1.079697, -0.508456, -0.417025};
	int y_141 = 1;
	score(x_141, result);
	printScoreCSV(result, length, y_141);
	delay(time);

	double x_142[] = {-1.093476, 4.69828, 8.90094, -0.291323, 0.145343, -0.033145};
	int y_142 = 1;
	score(x_142, result);
	printScoreCSV(result, length, y_142);
	delay(time);

	double x_143[] = {0.109872, 3.815715, 10.319989, 0.125664, 0.075556, 0.149551};
	int y_143 = 1;
	score(x_143, result);
	printScoreCSV(result, length, y_143);
	delay(time);

	double x_144[] = {0.525856, 0.813858, 7.764803, -0.144905, 0.042365, -0.104289};
	int y_144 = 1;
	score(x_144, result);
	printScoreCSV(result, length, y_144);
	delay(time);

	double x_145[] = {0.424218, 3.700605, 10.166259, 0.143517, -0.059872, 0.164211};
	int y_145 = 1;
	score(x_145, result);
	printScoreCSV(result, length, y_145);
	delay(time);

	double x_146[] = {1.96661, 1.467099, 9.789044, -0.226273, -0.203184, 0.015924};
	int y_146 = 1;
	score(x_146, result);
	printScoreCSV(result, length, y_146);
	delay(time);

	double x_147[] = {-0.720602, 2.956801, 7.64625, 0.158275, 0.106851, -0.269339};
	int y_147 = 1;
	score(x_147, result);
	printScoreCSV(result, length, y_147);
	delay(time);

	double x_148[] = {-0.436941, 2.271077, 6.727011, 0.059819, -0.055601, -0.20044};
	int y_148 = 1;
	score(x_148, result);
	printScoreCSV(result, length, y_148);
	delay(time);

	double x_149[] = {-0.724044, 2.049538, 9.608369, 0.152535, 0.082657, -0.244031};
	int y_149 = 1;
	score(x_149, result);
	printScoreCSV(result, length, y_149);
	delay(time);

	double x_150[] = {0.966241, 0.104782, 10.953622, -0.268148, -0.193186, -0.238834};
	int y_150 = 1;
	score(x_150, result);
	printScoreCSV(result, length, y_150);
	delay(time);

	double x_151[] = {-0.177231, 1.456172, 12.348571, 0.644894, 0.246732, 0.570602};
	int y_151 = 1;
	score(x_151, result);
	printScoreCSV(result, length, y_151);
	delay(time);

	double x_152[] = {0.230072, 2.291435, 6.518794, 0.301234, 0.064757, -0.086323};
	int y_152 = 1;
	score(x_152, result);
	printScoreCSV(result, length, y_152);
	delay(time);

	double x_153[] = {-0.86535, 1.965114, 9.50224, 0.08985, -0.523828, 0.292612};
	int y_153 = 1;
	score(x_153, result);
	printScoreCSV(result, length, y_153);
	delay(time);

	double x_154[] = {-0.133073, 1.280587, 7.405251, 0.01159, 0.015864, 0.086999};
	int y_154 = 1;
	score(x_154, result);
	printScoreCSV(result, length, y_154);
	delay(time);

	double x_155[] = {-0.044308, 2.039808, 5.854326, -0.123682, -0.025943, 0.136935};
	int y_155 = 1;
	score(x_155, result);
	printScoreCSV(result, length, y_155);
	delay(time);

	double x_156[] = {-0.885708, 1.357677, 7.620353, -0.076714, 0.026196, -0.519419};
	int y_156 = 1;
	score(x_156, result);
	printScoreCSV(result, length, y_156);
	delay(time);

	double x_157[] = {-0.505349, 2.090852, 6.937773, 0.340692, -0.235963, 0.125591};
	int y_157 = 1;
	score(x_157, result);
	printScoreCSV(result, length, y_157);
	delay(time);

	double x_158[] = {-0.337099, 2.221081, 11.548485, -0.433195, -0.237545, -0.033992};
	int y_158 = 1;
	score(x_158, result);
	printScoreCSV(result, length, y_158);
	delay(time);

	double x_159[] = {0.225581, 2.446063, 10.799892, 0.008795, -0.099212, -0.100534};
	int y_159 = 1;
	score(x_159, result);
	printScoreCSV(result, length, y_159);
	delay(time);

	double x_160[] = {-0.320633, 3.698359, 7.777976, -0.460826, -0.544928, -0.478999};
	int y_160 = 1;
	score(x_160, result);
	printScoreCSV(result, length, y_160);
	delay(time);

	double x_161[] = {1.13494, 1.162034, 13.334421, -0.034454, -0.194909, 0.245621};
	int y_161 = 1;
	score(x_161, result);
	printScoreCSV(result, length, y_161);
	delay(time);

	double x_162[] = {-0.249381, 2.24084, 9.086255, -0.086233, -0.195154, -0.033327};
	int y_162 = 1;
	score(x_162, result);
	printScoreCSV(result, length, y_162);
	delay(time);

	double x_163[] = {-0.541873, 1.914519, 10.594519, -0.023859, 0.543961, 0.043984};
	int y_163 = 1;
	score(x_163, result);
	printScoreCSV(result, length, y_163);
	delay(time);

	double x_164[] = {0.180525, 4.024232, 12.431499, -0.062521, -0.146271, -0.23708};
	int y_164 = 1;
	score(x_164, result);
	printScoreCSV(result, length, y_164);
	delay(time);

	double x_165[] = {1.444197, 1.784589, 10.467882, -0.513642, -0.473406, 0.128484};
	int y_165 = 1;
	score(x_165, result);
	printScoreCSV(result, length, y_165);
	delay(time);

	double x_166[] = {-0.355211, 5.781727, 9.558822, 0.240357, 0.281866, 0.271796};
	int y_166 = 1;
	score(x_166, result);
	printScoreCSV(result, length, y_166);
	delay(time);

	double x_167[] = {-0.330513, 2.15447, 11.83933, -0.024959, 0.375861, -0.221055};
	int y_167 = 1;
	score(x_167, result);
	printScoreCSV(result, length, y_167);
	delay(time);

	double x_168[] = {-0.121697, 2.03891, 7.07384, -0.161818, -0.451661, 0.073445};
	int y_168 = 1;
	score(x_168, result);
	printScoreCSV(result, length, y_168);
	delay(time);

	double x_169[] = {-0.012574, 2.651885, 11.593391, -0.130925, -0.158166, -0.170244};
	int y_169 = 1;
	score(x_169, result);
	printScoreCSV(result, length, y_169);
	delay(time);

	double x_170[] = {0.525108, 0.438887, 8.557554, -0.255519, 0.000848, 0.125558};
	int y_170 = 1;
	score(x_170, result);
	printScoreCSV(result, length, y_170);
	delay(time);

	double x_171[] = {0.083077, 2.891537, 11.53621, 0.254887, 0.040757, -0.042382};
	int y_171 = 1;
	score(x_171, result);
	printScoreCSV(result, length, y_171);
	delay(time);

	double x_172[] = {0.809666, 1.451232, 8.303084, 0.097165, 0.039494, -0.117866};
	int y_172 = 1;
	score(x_172, result);
	printScoreCSV(result, length, y_172);
	delay(time);

	double x_173[] = {0.184566, 1.400338, 6.472989, 0.166588, -0.041303, 0.294619};
	int y_173 = 1;
	score(x_173, result);
	printScoreCSV(result, length, y_173);
	delay(time);

	double x_174[] = {0.632285, 3.008594, 7.137607, -0.664199, -0.407888, 0.185775};
	int y_174 = 1;
	score(x_174, result);
	printScoreCSV(result, length, y_174);
	delay(time);

	double x_175[] = {-0.048948, 1.813928, 6.465655, 0.137744, 0.073293, -0.046859};
	int y_175 = 1;
	score(x_175, result);
	printScoreCSV(result, length, y_175);
	delay(time);

	double x_176[] = {0.889151, 1.866169, 6.79961, 0.287225, 0.002228, 0.056815};
	int y_176 = 1;
	score(x_176, result);
	printScoreCSV(result, length, y_176);
	delay(time);

	double x_177[] = {-0.139959, 2.502047, 7.109316, 0.096896, 0.272481, -0.193333};
	int y_177 = 1;
	score(x_177, result);
	printScoreCSV(result, length, y_177);
	delay(time);

	double x_178[] = {-0.382006, 3.573219, 8.017927, 0.096916, -0.207927, 0.214367};
	int y_178 = 1;
	score(x_178, result);
	printScoreCSV(result, length, y_178);
	delay(time);

	double x_179[] = {-0.236808, 1.905088, 6.938671, 0.117048, 0.06567, -0.153952};
	int y_179 = 1;
	score(x_179, result);
	printScoreCSV(result, length, y_179);
	delay(time);

	double x_180[] = {-0.377216, 3.381019, 12.138109, -0.552964, 0.049196, 0.035546};
	int y_180 = 1;
	score(x_180, result);
	printScoreCSV(result, length, y_180);
	delay(time);

	double x_181[] = {-0.590223, 2.450105, 6.555468, 0.100246, 0.010518, 0.118367};
	int y_181 = 1;
	score(x_181, result);
	printScoreCSV(result, length, y_181);
	delay(time);

	double x_182[] = {1.417552, 3.040627, 10.802436, -0.430997, 0.209085, -0.160255};
	int y_182 = 1;
	score(x_182, result);
	printScoreCSV(result, length, y_182);
	delay(time);

	double x_183[] = {-0.63019, 2.53902, 9.635613, -1.176862, -0.427667, -0.235534};
	int y_183 = 1;
	score(x_183, result);
	printScoreCSV(result, length, y_183);
	delay(time);

	double x_184[] = {-0.385149, 1.91886, 7.552095, -0.029308, 0.08433, -0.237615};
	int y_184 = 1;
	score(x_184, result);
	printScoreCSV(result, length, y_184);
	delay(time);

	double x_185[] = {0.040865, 2.681224, 7.070547, 0.050114, 0.026339, 0.351232};
	int y_185 = 1;
	score(x_185, result);
	printScoreCSV(result, length, y_185);
	delay(time);

	double x_186[] = {1.137185, 1.927841, 12.133917, -0.187926, -0.100201, -0.004579};
	int y_186 = 1;
	score(x_186, result);
	printScoreCSV(result, length, y_186);
	delay(time);

	double x_187[] = {-0.032183, 1.028661, 8.508606, -0.04723, -0.402242, 0.095468};
	int y_187 = 1;
	score(x_187, result);
	printScoreCSV(result, length, y_187);
	delay(time);

	double x_188[] = {-0.03368, 1.001268, 8.502768, -0.056409, 0.215921, 0.106232};
	int y_188 = 1;
	score(x_188, result);
	printScoreCSV(result, length, y_188);
	delay(time);

	double x_189[] = {0.059426, 3.143463, 8.143366, -0.174471, -0.239439, -0.174923};
	int y_189 = 1;
	score(x_189, result);
	printScoreCSV(result, length, y_189);
	delay(time);

	double x_190[] = {-0.601749, 1.448538, 9.751023, 0.020742, -0.268058, 0.156639};
	int y_190 = 1;
	score(x_190, result);
	printScoreCSV(result, length, y_190);
	delay(time);

	double x_191[] = {-0.256117, 1.296304, 11.671379, -0.024269, -0.219688, 0.204717};
	int y_191 = 1;
	score(x_191, result);
	printScoreCSV(result, length, y_191);
	delay(time);

	double x_192[] = {-0.285606, 2.59186, 9.299262, -0.169709, 0.14613, -0.133032};
	int y_192 = 1;
	score(x_192, result);
	printScoreCSV(result, length, y_192);
	delay(time);

	double x_193[] = {0.118553, 1.546434, 8.219108, 0.423271, -0.14943, 0.139957};
	int y_193 = 1;
	score(x_193, result);
	printScoreCSV(result, length, y_193);
	delay(time);

	double x_194[] = {1.004561, 1.710194, 7.346573, -0.148503, -0.463295, -0.102637};
	int y_194 = 1;
	score(x_194, result);
	printScoreCSV(result, length, y_194);
	delay(time);

	double x_195[] = {-0.085173, 1.989513, 6.856492, 0.021622, -0.130604, 0.186845};
	int y_195 = 1;
	score(x_195, result);
	printScoreCSV(result, length, y_195);
	delay(time);

	double x_196[] = {-0.20208, 2.66416, 6.468199, -0.075696, -0.135418, -0.049271};
	int y_196 = 1;
	score(x_196, result);
	printScoreCSV(result, length, y_196);
	delay(time);

	double x_197[] = {0.501158, 0.862207, 7.320976, -0.146655, 0.092726, 0.250318};
	int y_197 = 1;
	score(x_197, result);
	printScoreCSV(result, length, y_197);
	delay(time);

	double x_198[] = {1.620979, 2.177222, 8.901689, 1.094742, -0.307704, 0.24014};
	int y_198 = 1;
	score(x_198, result);
	printScoreCSV(result, length, y_198);
	delay(time);

	double x_199[] = {0.449515, 2.330953, 9.353749, -0.423191, -0.212535, -0.07097};
	int y_199 = 1;
	score(x_199, result);
	printScoreCSV(result, length, y_199);
	delay(time);

	double x_200[] = {0.039069, 1.805096, 7.17488, 0.246259, -0.219911, 0.099033};
	int y_200 = 1;
	score(x_200, result);
	printScoreCSV(result, length, y_200);
	delay(time);

	double x_201[] = {-0.530197, 2.846331, 8.318801, 0.275954, -0.5131, -0.019431};
	int y_201 = 1;
	score(x_201, result);
	printScoreCSV(result, length, y_201);
	delay(time);

	double x_202[] = {1.481469, 1.12985, 6.865473, 0.099977, -0.094817, 0.171015};
	int y_202 = 1;
	score(x_202, result);
	printScoreCSV(result, length, y_202);
	delay(time);

	double x_203[] = {0.838107, 1.564696, 11.853401, -0.262097, 0.268481, -0.036718};
	int y_203 = 1;
	score(x_203, result);
	printScoreCSV(result, length, y_203);
	delay(time);

	double x_204[] = {0.53394, 0.693658, 9.288035, -0.000122, -0.422242, -0.131824};
	int y_204 = 1;
	score(x_204, result);
	printScoreCSV(result, length, y_204);
	delay(time);

	double x_205[] = {-0.253573, 1.451382, 7.549102, -0.541451, -0.330748, 0.157874};
	int y_205 = 1;
	score(x_205, result);
	printScoreCSV(result, length, y_205);
	delay(time);

	double x_206[] = {-0.255818, 2.141147, 7.497908, -0.164997, 0.23818, -0.284111};
	int y_206 = 1;
	score(x_206, result);
	printScoreCSV(result, length, y_206);
	delay(time);

	double x_207[] = {0.775687, 1.714684, 7.818092, -0.198944, 0.052963, -0.266807};
	int y_207 = 1;
	score(x_207, result);
	printScoreCSV(result, length, y_207);
	delay(time);

	double x_208[] = {-0.67345, 1.31756, 10.249187, -0.054225, -0.048809, -0.084365};
	int y_208 = 1;
	score(x_208, result);
	printScoreCSV(result, length, y_208);
	delay(time);

	double x_209[] = {-0.557441, 1.954486, 12.278666, 0.097227, -0.159456, -0.189021};
	int y_209 = 1;
	score(x_209, result);
	printScoreCSV(result, length, y_209);
	delay(time);

	double x_210[] = {0.215552, 2.666255, 8.691077, -0.048754, 0.007973, -0.252802};
	int y_210 = 1;
	score(x_210, result);
	printScoreCSV(result, length, y_210);
	delay(time);

	double x_211[] = {0.724493, 2.598147, 10.355765, 0.028244, 0.033592, 0.043917};
	int y_211 = 1;
	score(x_211, result);
	printScoreCSV(result, length, y_211);
	delay(time);

	double x_212[] = {-0.410746, 0.972228, 10.154284, 0.22346, 0.221426, 0.154162};
	int y_212 = 1;
	score(x_212, result);
	printScoreCSV(result, length, y_212);
	delay(time);

	double x_213[] = {-0.993783, 1.162333, 10.062525, 0.115703, -0.219387, -0.247879};
	int y_213 = 1;
	score(x_213, result);
	printScoreCSV(result, length, y_213);
	delay(time);

	double x_214[] = {-0.956661, 2.530638, 13.038636, 0.176379, 0.527693, 0.229717};
	int y_214 = 1;
	score(x_214, result);
	printScoreCSV(result, length, y_214);
	delay(time);

	double x_215[] = {0.843197, 1.942511, 7.406448, -0.116036, -0.097775, -0.074061};
	int y_215 = 1;
	score(x_215, result);
	printScoreCSV(result, length, y_215);
	delay(time);

	double x_216[] = {-0.095651, 0.961002, 7.369325, 0.304767, -0.18683, -0.087566};
	int y_216 = 1;
	score(x_216, result);
	printScoreCSV(result, length, y_216);
	delay(time);

	double x_217[] = {-1.26951, 3.189717, 9.955947, -0.375339, 0.133501, -0.299546};
	int y_217 = 1;
	score(x_217, result);
	printScoreCSV(result, length, y_217);
	delay(time);

	double x_218[] = {-0.191602, 2.764601, 7.210206, 0.023224, -0.184489, 0.101797};
	int y_218 = 1;
	score(x_218, result);
	printScoreCSV(result, length, y_218);
	delay(time);

	double x_219[] = {-0.398771, 3.499872, 7.269333, 0.044423, 0.00459, 0.036121};
	int y_219 = 1;
	score(x_219, result);
	printScoreCSV(result, length, y_219);
	delay(time);

	double x_220[] = {0.050295, 2.701283, 10.032288, -0.143941, 0.027608, -0.222439};
	int y_220 = 1;
	score(x_220, result);
	printScoreCSV(result, length, y_220);
	delay(time);

	double x_221[] = {-0.561482, 2.759512, 11.606863, -0.590695, 0.250153, -0.387484};
	int y_221 = 1;
	score(x_221, result);
	printScoreCSV(result, length, y_221);
	delay(time);

	double x_222[] = {-1.655408, 3.952381, 12.018358, 0.229997, 0.27806, 0.018884};
	int y_222 = 1;
	score(x_222, result);
	printScoreCSV(result, length, y_222);
	delay(time);

	double x_223[] = {0.488434, 0.906814, 5.829627, 0.194903, 0.147355, -0.165437};
	int y_223 = 1;
	score(x_223, result);
	printScoreCSV(result, length, y_223);
	delay(time);

	double x_224[] = {-0.841849, 2.964136, 12.070749, 0.185022, -0.100381, 0.03875};
	int y_224 = 1;
	score(x_224, result);
	printScoreCSV(result, length, y_224);
	delay(time);

	double x_225[] = {0.760269, 2.319277, 8.829838, -0.29471, 0.4312, -0.392329};
	int y_225 = 1;
	score(x_225, result);
	printScoreCSV(result, length, y_225);
	delay(time);

	double x_226[] = {-1.021176, 0.51448, 9.895921, -0.11099, -0.008395, -0.15874};
	int y_226 = 1;
	score(x_226, result);
	printScoreCSV(result, length, y_226);
	delay(time);

	double x_227[] = {-1.137335, 2.823429, 8.128846, 0.013136, 0.140677, -0.066948};
	int y_227 = 1;
	score(x_227, result);
	printScoreCSV(result, length, y_227);
	delay(time);

	double x_228[] = {-0.176483, 4.434379, 8.624166, 0.246745, 0.131575, 0.028768};
	int y_228 = 1;
	score(x_228, result);
	printScoreCSV(result, length, y_228);
	delay(time);

	double x_229[] = {0.174986, 0.621508, 13.794265, 0.23235, -0.079079, 0.045635};
	int y_229 = 1;
	score(x_229, result);
	printScoreCSV(result, length, y_229);
	delay(time);

	double x_230[] = {-0.104632, 1.459465, 10.140064, -0.010648, -0.245668, 0.005263};
	int y_230 = 1;
	score(x_230, result);
	printScoreCSV(result, length, y_230);
	delay(time);

	double x_231[] = {-0.690065, 0.498463, 11.984977, 0.194698, -0.532665, 0.047412};
	int y_231 = 1;
	score(x_231, result);
	printScoreCSV(result, length, y_231);
	delay(time);

	double x_232[] = {0.321531, 2.402055, 7.536827, -0.073231, -0.028781, 0.128417};
	int y_232 = 1;
	score(x_232, result);
	printScoreCSV(result, length, y_232);
	delay(time);

	double x_233[] = {-0.027094, 2.230661, 8.243058, -0.308751, -0.377399, 0.110887};
	int y_233 = 1;
	score(x_233, result);
	printScoreCSV(result, length, y_233);
	delay(time);

	double x_234[] = {0.581541, 1.202749, 9.113049, 0.056824, 0.316184, -0.168466};
	int y_234 = 1;
	score(x_234, result);
	printScoreCSV(result, length, y_234);
	delay(time);

	double x_235[] = {-0.629591, 3.039729, 9.329649, -0.064898, -0.19656, 0.029766};
	int y_235 = 1;
	score(x_235, result);
	printScoreCSV(result, length, y_235);
	delay(time);

	double x_236[] = {-0.378413, 2.997517, 10.988499, 0.28736, 0.169253, 0.289548};
	int y_236 = 1;
	score(x_236, result);
	printScoreCSV(result, length, y_236);
	delay(time);

	double x_237[] = {-0.210762, 2.628983, 12.32043, -0.376689, -0.566231, -0.22664};
	int y_237 = 1;
	score(x_237, result);
	printScoreCSV(result, length, y_237);
	delay(time);

	double x_238[] = {-0.319286, 2.163601, 6.873407, 0.100367, -0.492384, 0.114596};
	int y_238 = 1;
	score(x_238, result);
	printScoreCSV(result, length, y_238);
	delay(time);

	double x_239[] = {0.829575, -0.035027, 11.849509, 0.131681, -0.211159, -0.355306};
	int y_239 = 1;
	score(x_239, result);
	printScoreCSV(result, length, y_239);
	delay(time);

	double x_240[] = {-0.924478, 3.352129, 9.33384, 0.058559, 0.019966, -0.321711};
	int y_240 = 1;
	score(x_240, result);
	printScoreCSV(result, length, y_240);
	delay(time);

	double x_241[] = {-0.488734, 3.643573, 10.766212, 0.0084, -0.008524, 0.024886};
	int y_241 = 1;
	score(x_241, result);
	printScoreCSV(result, length, y_241);
	delay(time);

	double x_242[] = {0.138013, 2.275867, 11.980786, -0.145598, 0.265217, 0.093728};
	int y_242 = 1;
	score(x_242, result);
	printScoreCSV(result, length, y_242);
	delay(time);

	double x_243[] = {0.674797, 1.38986, 10.065369, -0.057097, -0.410809, 0.522274};
	int y_243 = 1;
	score(x_243, result);
	printScoreCSV(result, length, y_243);
	delay(time);

	double x_244[] = {-0.088466, 2.17827, 8.097561, 0.726965, 0.045867, 0.281822};
	int y_244 = 1;
	score(x_244, result);
	printScoreCSV(result, length, y_244);
	delay(time);

	double x_245[] = {-0.148641, 2.132615, 6.795868, -0.098015, 0.247902, -0.009344};
	int y_245 = 1;
	score(x_245, result);
	printScoreCSV(result, length, y_245);
	delay(time);

	double x_246[] = {0.584834, 0.287253, 7.819739, 0.151994, 0.16137, 0.667033};
	int y_246 = 1;
	score(x_246, result);
	printScoreCSV(result, length, y_246);
	delay(time);

	double x_247[] = {-0.502206, 2.080374, 7.446864, -0.303095, 0.094491, -0.059904};
	int y_247 = 1;
	score(x_247, result);
	printScoreCSV(result, length, y_247);
	delay(time);

	double x_248[] = {-0.196092, 3.052153, 8.971144, 0.147877, 0.016011, -0.027399};
	int y_248 = 1;
	score(x_248, result);
	printScoreCSV(result, length, y_248);
	delay(time);

	double x_249[] = {0.107477, 2.303111, 8.540939, -0.015371, 0.043933, 0.366926};
	int y_249 = 1;
	score(x_249, result);
	printScoreCSV(result, length, y_249);
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