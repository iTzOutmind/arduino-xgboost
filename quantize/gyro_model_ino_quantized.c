// XGB-Model
float sigmoid(long x) {
    float y = x / 100000000;
    if (y < 0) {
        float z = exp(x);
        return z / (1 + z);
    }
    return 100000000 / (100000000 + exp(-x));
}
void score(long * input, float * output) {
    long var0;
    if (input[0] < -39143600) {
        if (input[1] < 199744600) {
            var0 = 15656269;
        } else {
            var0 = 19795671;
        }
    } else {
        var0 = 19834208;
    }
    long var1;
    if (input[0] < -39143600) {
        if (input[1] < 199744600) {
            var1 = 14182125;
        } else {
            var1 = 17999482;
        }
    } else {
        var1 = 18033868;
    }
    long var2;
    if (input[0] < -39143600) {
        if (input[1] < 199744600) {
            var2 = 12982251;
        } else {
            var2 = 16644102;
        }
    } else {
        var2 = 16676559;
    }
    long var3;
    if (input[0] < -39143600) {
        if (input[1] < 199744600) {
            var3 = 11975399;
        } else {
            var3 = 15586506;
        }
    } else {
        var3 = 15618403;
    }
    long var4;
    if (input[0] < -39143600) {
        if (input[1] < 199744600) {
            var4 = 11109014;
        } else {
            var4 = 14739709;
        }
    } else {
        var4 = 14771980;
    }
    long var5;
    if (input[0] < -39143600) {
        if (input[1] < 199744600) {
            var5 = 10347658;
        } else {
            var5 = 14047568;
        }
    } else {
        var5 = 14080910;
    }
    long var6;
    if (input[0] < -39143600) {
        if (input[1] < 199744600) {
            var6 = 9666657;
        } else {
            var6 = 13472109;
        }
    } else {
        if (input[0] < -23546000) {
            var6 = 12879269;
        } else {
            var6 = 13589786;
        }
    }
    long var7;
    if (input[0] < -39143600) {
        if (input[1] < 199744600) {
            var7 = 9048422;
        } else {
            var7 = 12986666;
        }
    } else {
        if (input[0] < -12005000) {
            var7 = 12560539;
        } else {
            var7 = 13146636;
        }
    }
    long var8;
    if (input[0] < -39143600) {
        if (input[1] < 208546300) {
            var8 = 8577417;
        } else {
            var8 = 12675703;
        }
    } else {
        if (input[0] < -23546000) {
            var8 = 11932305;
        } else {
            var8 = 12702079;
        }
    }
    long var9;
    if (input[0] < -39143600) {
        if (input[1] < 199744600) {
            var9 = 7946563;
        } else {
            var9 = 12216186;
        }
    } else {
        if (input[0] < -12005000) {
            var9 = 11743708;
        } else {
            var9 = 12393345;
        }
    }
    long var10;
    if (input[0] < -39143600) {
        if (input[1] < 208546300) {
            var10 = 7554750;
        } else {
            var10 = 12018146;
        }
    } else {
        if (input[0] < -24893200) {
            var10 = 11142031;
        } else {
            var10 = 12043746;
        }
    }
    long var11;
    if (input[0] < -39143600) {
        if (input[1] < 199744600) {
            var11 = 6981806;
        } else {
            var11 = 11628951;
        }
    } else {
        if (input[0] < -12005000) {
            var11 = 11090317;
        } else {
            var11 = 11831985;
        }
    }
    long var12;
    if (input[0] < -39143600) {
        if (input[1] < 208546300) {
            var12 = 6645946;
        } else {
            var12 = 11514119;
        }
    } else {
        if (input[0] < -12005000) {
            var12 = 10807463;
        } else {
            var12 = 11602266;
        }
    }
    long var13;
    if (input[0] < -39143600) {
        if (input[1] < 208546300) {
            var13 = 6227819;
        } else {
            var13 = 11302348;
        }
    } else {
        if (input[0] < -23546000) {
            var13 = 10273728;
        } else {
            var13 = 11345116;
        }
    }
    long var14;
    if (input[0] < -39143600) {
        if (input[1] < 199744600) {
            var14 = 5713331;
        } else {
            var14 = 10964256;
        }
    } else {
        if (input[0] < -12005000) {
            var14 = 10292826;
        } else {
            var14 = 11219603;
        }
    }
    long var15;
    if (input[0] < -39143600) {
        if (input[1] < 208546300) {
            var15 = 5443570;
        } else {
            var15 = 10942012;
        }
    } else {
        if (input[0] < -12005000) {
            var15 = 10057404;
        } else {
            var15 = 11057790;
        }
    }
    long var16;
    if (input[0] < -39143600) {
        if (input[1] < 208546300) {
            var16 = 5080901;
        } else {
            var16 = 10784324;
        }
    } else {
        if (input[0] < -12005000) {
            var16 = 9830680;
        } else {
            var16 = 10911807;
        }
    }
    long var17;
    if (input[0] < -39143600) {
        if (input[1] < 208546300) {
            var17 = 4734923;
        } else {
            var17 = 10638883;
        }
    } else {
        if (input[0] < -23546000) {
            var17 = 9244116;
        } else {
            var17 = 10703212;
        }
    }
    long var18;
    if (input[0] < -39143600) {
        if (input[1] < 208546300) {
            var18 = 4405211;
        } else {
            var18 = 10503454;
        }
    } else {
        if (input[0] < -12005000) {
            var18 = 9387541;
        } else {
            var18 = 10658448;
        }
    }
    long var19;
    if (input[0] < -39143600) {
        if (input[1] < 208546300) {
            var19 = 4091484;
        } else {
            var19 = 10376089;
        }
    } else {
        if (input[0] < -12005000) {
            var19 = 9172604;
        } else {
            var19 = 10546186;
        }
    }
    long var20;
    if (input[0] < -39143600) {
        if (input[1] < 199744600) {
            var20 = 3661761;
        } else {
            var20 = 10023620;
        }
    } else {
        if (input[0] < -12005000) {
            var20 = 8957862;
        } else {
            var20 = 10441633;
        }
    }
    long var21;
    if (input[0] < -39143600) {
        if (input[1] < 208546300) {
            var21 = 3503224;
        } else {
            var21 = 10141512;
        }
    } else {
        if (input[0] < -12005000) {
            var21 = 8741918;
        } else {
            var21 = 10343365;
        }
    }
    long var22;
    if (input[0] < -39143600) {
        if (input[1] < 208546300) {
            var22 = 3236726;
        } else {
            var22 = 10028753;
        }
    } else {
        if (input[0] < -12005000) {
            var22 = 8523595;
        } else {
            var22 = 10250115;
        }
    }
    long var23;
    if (input[0] < -39143600) {
        if (input[1] < 208546300) {
            var23 = 2985453;
        } else {
            var23 = 9918258;
        }
    } else {
        if (input[0] < -12005000) {
            var23 = 8301929;
        } else {
            var23 = 10160740;
        }
    }
    long var24;
    if (input[0] < -29144400) {
        if (input[1] < 199744600) {
            var24 = 2489370;
        } else {
            var24 = 9715848;
        }
    } else {
        if (input[0] < -6077400) {
            var24 = 8682415;
        } else {
            var24 = 10133117;
        }
    }
    long var25;
    if (input[0] < -29144400) {
        if (input[1] < 199744600) {
            var25 = 2284438;
        } else {
            var25 = 9590392;
        }
    } else {
        if (input[0] < -6077400) {
            var25 = 8486886;
        } else {
            var25 = 10053678;
        }
    }
    long var26;
    if (input[0] < -29144400) {
        if (input[1] < 208546300) {
            var26 = 2218380;
        } else {
            var26 = 9781997;
        }
    } else {
        if (input[0] < -6077400) {
            var26 = 8286331;
        } else {
            var26 = 9975737;
        }
    }
    long var27;
    if (input[0] < -24893200) {
        if (input[1] < 199744600) {
            var27 = 1846489;
        } else {
            var27 = 9435361;
        }
    } else {
        if (input[0] < 29743100) {
            var27 = 8944794;
        } else {
            var27 = 10243603;
        }
    }
    long var28;
    if (input[0] < -24893200) {
        if (input[1] < 208546300) {
            var28 = 1810894;
        } else {
            var28 = 9656508;
        }
    } else {
        if (input[0] < 29743100) {
            var28 = 8788739;
        } else {
            var28 = 10198239;
        }
    }
    long var29;
    if (input[0] < -24893200) {
        if (input[1] < 208546300) {
            var29 = 1653977;
        } else {
            var29 = 9558599;
        }
    } else {
        if (input[0] < 29743100) {
            var29 = 8626886;
        } else {
            var29 = 10155246;
        }
    }
    long var30;
    if (input[0] < -24893200) {
        if (input[1] < 208546300) {
            var30 = 1508861;
        } else {
            var30 = 9458190;
        }
    } else {
        if (input[0] < 29743100) {
            var30 = 8458611;
        } else {
            var30 = 10114142;
        }
    }
    long var31;
    if (input[0] < -24893200) {
        if (input[2] < 1033974800) {
            var31 = 673802;
        } else {
            var31 = 8100815;
        }
    } else {
        if (input[0] < 29743100) {
            var31 = 8283385;
        } else {
            var31 = 10074484;
        }
    }
    long var32;
    if (input[1] < 199744600) {
        if (input[0] < -12708600) {
            var32 = 971400;
        } else {
            var32 = 9090675;
        }
    } else {
        if (input[1] < 208546300) {
            var32 = 6291243;
        } else {
            var32 = 9517541;
        }
    }
    long var33;
    if (input[1] < 199744600) {
        if (input[0] < -12708600) {
            var33 = 881473;
        } else {
            var33 = 8969767;
        }
    } else {
        if (input[1] < 208546300) {
            var33 = 6028742;
        } else {
            var33 = 9426516;
        }
    }
    long var34;
    if (input[1] < 199744600) {
        if (input[0] < -12708600) {
            var34 = 799300;
        } else {
            var34 = 8842711;
        }
    } else {
        if (input[1] < 208546300) {
            var34 = 5765332;
        } else {
            var34 = 9331621;
        }
    }
    long var35;
    if (input[1] < 208546300) {
        if (input[2] < 1033974800) {
            var35 = 220743;
        } else {
            var35 = 7399611;
        }
    } else {
        if (input[2] < 583516600) {
            var35 = 113772;
        } else {
            var35 = 9271496;
        }
    }
    long var36;
    if (input[0] < -24893200) {
        if (input[2] < 1033974800) {
            var36 = -427117;
        } else {
            var36 = 7268157;
        }
    } else {
        if (input[0] < 29743100) {
            var36 = 7270688;
        } else {
            var36 = 9914478;
        }
    }
    long var37;
    if (input[1] < 208546300) {
        if (input[2] < 913550300) {
            var37 = 7082038;
        } else {
            var37 = -286035;
        }
    } else {
        if (input[1] < 274813500) {
            var37 = 7864902;
        } else {
            var37 = 9821397;
        }
    }
    long var38;
    if (input[0] < -23546000) {
        if (input[2] < 1033974800) {
            var38 = -750692;
        } else {
            var38 = 6955612;
        }
    } else {
        if (input[0] < 29743100) {
            var38 = 6887641;
        } else {
            var38 = 9856775;
        }
    }
    long var39;
    if (input[1] < 208546300) {
        if (input[2] < 910376900) {
            var39 = 6777754;
        } else {
            var39 = -610395;
        }
    } else {
        if (input[1] < 274813500) {
            var39 = 7548659;
        } else {
            var39 = 9747491;
        }
    }
    long var40;
    if (input[1] < 208546300) {
        if (input[2] < 1033974800) {
            var40 = -743564;
        } else {
            var40 = 6529232;
        }
    } else {
        if (input[1] < 274813500) {
            var40 = 7343694;
        } else {
            var40 = 9696148;
        }
    }
    long var41;
    if (input[0] < -12005000) {
        if (input[1] < 122654900) {
            var41 = -4169904;
        } else {
            var41 = 3689643;
        }
    } else {
        if (input[0] < 29743100) {
            var41 = 6781565;
        } else {
            var41 = 9782681;
        }
    }
    long var42;
    if (input[2] < 913550300) {
        if (input[3] < 3793800) {
            var42 = 5335928;
        } else {
            var42 = 9141062;
        }
    } else {
        if (input[2] < 998543500) {
            var42 = -7209372;
        } else {
            var42 = 6218715;
        }
    }
    long var43;
    if (input[0] < -12005000) {
        if (input[2] < 897518600) {
            var43 = 6460574;
        } else {
            var43 = -1104469;
        }
    } else {
        if (input[0] < 29743100) {
            var43 = 6354579;
        } else {
            var43 = 9718362;
        }
    }
    long var44;
    if (input[1] < 208546300) {
        if (input[2] < 1033974800) {
            var44 = -1270832;
        } else {
            var44 = 5862117;
        }
    } else {
        if (input[1] < 274813500) {
            var44 = 6615663;
        } else {
            var44 = 9556315;
        }
    }
    long var45;
    if (input[0] < -6077400) {
        if (input[2] < 1041609000) {
            var45 = -1250867;
        } else {
            var45 = 6081696;
        }
    } else {
        if (input[5] < 57719200) {
            var45 = 8516904;
        } else {
            var45 = -4498644;
        }
    }
    long var46;
    if (input[2] < 933234300) {
        if (input[3] < 3793800) {
            var46 = 4170347;
        } else {
            var46 = 8471683;
        }
    } else {
        if (input[2] < 998543500) {
            var46 = -7615340;
        } else {
            var46 = 5363221;
        }
    }
    long var47;
    if (input[1] < 128163500) {
        if (input[5] < -3423300) {
            var47 = 3327688;
        } else {
            var47 = -6014738;
        }
    } else {
        if (input[1] < 208546300) {
            var47 = 2511528;
        } else {
            var47 = 8059383;
        }
    }
    long var48;
    if (input[0] < -6077400) {
        if (input[2] < 933234300) {
            var48 = 4836362;
        } else {
            var48 = -1788501;
        }
    } else {
        if (input[0] < 40984800) {
            var48 = 5851398;
        } else {
            var48 = 9885764;
        }
    }
    long var49;
    if (input[1] < 208546300) {
        if (input[0] < 27452900) {
            var49 = -695326;
        } else {
            var49 = 9361585;
        }
    } else {
        if (input[1] < 274813500) {
            var49 = 5570046;
        } else {
            var49 = 9356394;
        }
    }
    long var50;
    if (input[2] < 897518600) {
        if (input[3] < 3793800) {
            var50 = 3914462;
        } else {
            var50 = 8720037;
        }
    } else {
        if (input[2] < 998543500) {
            var50 = -4932667;
        } else {
            var50 = 4913355;
        }
    }
    long var51;
    if (input[1] < 128163500) {
        if (input[0] < -65443900) {
            var51 = 2235892;
        } else {
            var51 = -6133569;
        }
    } else {
        if (input[2] < 1024469600) {
            var51 = 2082238;
        } else {
            var51 = 8493118;
        }
    }
    long var52;
    if (input[0] < -6077400) {
        if (input[0] < -78047700) {
            var52 = 4034284;
        } else {
            var52 = -2070332;
        }
    } else {
        if (input[0] < 40984800) {
            var52 = 5127024;
        } else {
            var52 = 9825582;
        }
    }
    long var53;
    if (input[2] < 897518600) {
        if (input[0] < -74425200) {
            var53 = 91027;
        } else {
            var53 = 6975727;
        }
    } else {
        if (input[2] < 1033974800) {
            var53 = -3877301;
        } else {
            var53 = 5412244;
        }
    }
    long var54;
    if (input[1] < 208546300) {
        if (input[0] < 27452900) {
            var54 = -908264;
        } else {
            var54 = 9159446;
        }
    } else {
        if (input[1] < 274813500) {
            var54 = 4695024;
        } else {
            var54 = 9168150;
        }
    }
    long var55;
    if (input[2] < 933234300) {
        if (input[3] < 3793800) {
            var55 = 2440765;
        } else {
            var55 = 7661751;
        }
    } else {
        if (input[2] < 998543500) {
            var55 = -5381491;
        } else {
            var55 = 4065161;
        }
    }
    long var56;
    if (input[1] < 122654900) {
        if (input[3] < 3793800) {
            var56 = -6330487;
        } else {
            var56 = 2310772;
        }
    } else {
        if (input[2] < 1024469600) {
            var56 = 1480336;
        } else {
            var56 = 8018264;
        }
    }
    long var57;
    if (input[1] < 219758000) {
        if (input[0] < 27452900) {
            var57 = -881075;
        } else {
            var57 = 9077971;
        }
    } else {
        if (input[1] < 282821900) {
            var57 = 4587992;
        } else {
            var57 = 9204318;
        }
    }
    long var58;
    if (input[2] < 933234300) {
        if (input[3] < 3793800) {
            var58 = 2143840;
        } else {
            var58 = 7329086;
        }
    } else {
        if (input[2] < 1033974800) {
            var58 = -4015107;
        } else {
            var58 = 4631535;
        }
    }
    long var59;
    if (input[0] < 29743100) {
        if (input[0] < -65443900) {
            var59 = 2688842;
        } else {
            var59 = -2421721;
        }
    } else {
        if (input[3] < 50462000) {
            var59 = 9444206;
        } else {
            var59 = 31032;
        }
    }
    long var60;
    if (input[1] < 219758000) {
        if (input[0] < 27452900) {
            var60 = -846395;
        } else {
            var60 = 8859558;
        }
    } else {
        if (input[1] < 282821900) {
            var60 = 4172200;
        } else {
            var60 = 9097293;
        }
    }
    long var61;
    if (input[2] < 890273700) {
        if (input[0] < -74425200) {
            var61 = -1824480;
        } else {
            var61 = 6378781;
        }
    } else {
        if (input[0] < -67285100) {
            var61 = 3093884;
        } else {
            var61 = -4098527;
        }
    }
    long var62;
    if (input[1] < 122654900) {
        if (input[5] < -3423300) {
            var62 = 2600824;
        } else {
            var62 = -5472037;
        }
    } else {
        if (input[2] < 1024469600) {
            var62 = 1002463;
        } else {
            var62 = 7605942;
        }
    }
    long var63;
    if (input[0] < 29743100) {
        if (input[0] < -78047700) {
            var63 = 3328887;
        } else {
            var63 = -1625993;
        }
    } else {
        if (input[4] < 40883900) {
            var63 = 9316479;
        } else {
            var63 = 490625;
        }
    }
    long var64;
    if (input[1] < 274813500) {
        if (input[0] < 40984800) {
            var64 = -633280;
        } else {
            var64 = 9557479;
        }
    } else {
        if (input[3] < 33106000) {
            var64 = 9323624;
        } else {
            var64 = 1848433;
        }
    }
    long var65;
    if (input[2] < 890273700) {
        if (input[0] < -74425200) {
            var65 = -1918813;
        } else {
            var65 = 6074087;
        }
    } else {
        if (input[0] < -65443900) {
            var65 = 2512321;
        } else {
            var65 = -3949218;
        }
    }
    long var66;
    if (input[1] < 274813500) {
        if (input[0] < 40984800) {
            var66 = -614677;
        } else {
            var66 = 9513717;
        }
    } else {
        if (input[3] < 33106000) {
            var66 = 9248495;
        } else {
            var66 = 1711036;
        }
    }
    long var67;
    if (input[2] < 1041609000) {
        if (input[2] < 933234300) {
            var67 = 3434765;
        } else {
            var67 = -3353323;
        }
    } else {
        if (input[0] < -166813100) {
            var67 = -15101987;
        } else {
            var67 = 5457693;
        }
    }
    long var68;
    if (input[1] < 64845200) {
        if (input[1] < 49532000) {
            var68 = 1033497;
        } else {
            var68 = -18282352;
        }
    } else {
        if (input[2] < 1044827300) {
            var68 = 33409;
        } else {
            var68 = 6049779;
        }
    }
    long var69;
    if (input[1] < 274813500) {
        if (input[4] < 4745800) {
            var69 = -1778672;
        } else {
            var69 = 2678280;
        }
    } else {
        if (input[3] < 33106000) {
            var69 = 9135871;
        } else {
            var69 = 1299577;
        }
    }
    long var70;
    if (input[0] < 40984800) {
        if (input[0] < -76760400) {
            var70 = 2898857;
        } else {
            var70 = -1534072;
        }
    } else {
        var70 = 9494255;
    }
    long var71;
    if (input[5] < -3423300) {
        if (input[0] < -18546400) {
            var71 = 1639095;
        } else {
            var71 = 8863600;
        }
    } else {
        if (input[5] < 3637200) {
            var71 = -7458909;
        } else {
            var71 = 1546115;
        }
    }
    long var72;
    if (input[1] < 274813500) {
        if (input[0] < 40984800) {
            var72 = -561294;
        } else {
            var72 = 9368240;
        }
    } else {
        if (input[5] < 18378800) {
            var72 = 9479120;
        } else {
            var72 = 2679305;
        }
    }
    long var73;
    if (input[2] < 890273700) {
        if (input[0] < -74425200) {
            var73 = -2259157;
        } else {
            var73 = 5530824;
        }
    } else {
        if (input[0] < -65443900) {
            var73 = 2330071;
        } else {
            var73 = -3707976;
        }
    }
    long var74;
    if (input[1] < 274813500) {
        if (input[4] < 2926100) {
            var74 = -1684639;
        } else {
            var74 = 2177583;
        }
    } else {
        if (input[5] < 18378800) {
            var74 = 9423246;
        } else {
            var74 = 2504059;
        }
    }
    long var75;
    if (input[3] < -4937800) {
        if (input[2] < 998543500) {
            var75 = 772665;
        } else {
            var75 = 7110027;
        }
    } else {
        if (input[3] < 2313400) {
            var75 = -7756322;
        } else {
            var75 = 1786015;
        }
    }
    long var76;
    if (input[0] < 40984800) {
        if (input[1] < 64845200) {
            var76 = -4927442;
        } else {
            var76 = 577675;
        }
    } else {
        var76 = 9359989;
    }
    long var77;
    if (input[2] < 1033974800) {
        if (input[0] < -82298900) {
            var77 = 4420454;
        } else {
            var77 = -2367044;
        }
    } else {
        if (input[0] < -166813100) {
            var77 = -12507217;
        } else {
            var77 = 4778676;
        }
    }
    long var78;
    if (input[2] < 890273700) {
        if (input[0] < -127025800) {
            var78 = -12155727;
        } else {
            var78 = 4240554;
        }
    } else {
        if (input[0] < -65443900) {
            var78 = 2033153;
        } else {
            var78 = -3318944;
        }
    }
    long var79;
    if (input[0] < 40984800) {
        if (input[1] < 282821900) {
            var79 = -520716;
        } else {
            var79 = 8200693;
        }
    } else {
        var79 = 9306585;
    }
    long var80;
    if (input[5] < -3423300) {
        if (input[0] < -18546400) {
            var80 = 1374891;
        } else {
            var80 = 8614302;
        }
    } else {
        if (input[5] < 3637200) {
            var80 = -5944041;
        } else {
            var80 = 1237078;
        }
    }
    long var81;
    if (input[2] < 1033974800) {
        if (input[0] < -82298900) {
            var81 = 4048132;
        } else {
            var81 = -2145315;
        }
    } else {
        if (input[0] < -166813100) {
            var81 = -10391804;
        } else {
            var81 = 4542481;
        }
    }
    long var82;
    if (input[2] < 798828800) {
        if (input[0] < -74425200) {
            var82 = -9926344;
        } else {
            var82 = 6769650;
        }
    } else {
        if (input[0] < -65443900) {
            var82 = 1832304;
        } else {
            var82 = -2575325;
        }
    }
    long var83;
    if (input[0] < 40984800) {
        if (input[1] < 282821900) {
            var83 = -488628;
        } else {
            var83 = 8032016;
        }
    } else {
        var83 = 9224173;
    }
    long var84;
    if (input[5] < -3423300) {
        if (input[0] < -18546400) {
            var84 = 1260229;
        } else {
            var84 = 8451636;
        }
    } else {
        if (input[5] < 5250800) {
            var84 = -4757763;
        } else {
            var84 = 1367084;
        }
    }
    long var85;
    if (input[2] < 1033974800) {
        if (input[0] < -82298900) {
            var85 = 3734566;
        } else {
            var85 = -1944204;
        }
    } else {
        if (input[3] < 5468300) {
            var85 = -270053;
        } else {
            var85 = 7694928;
        }
    }
    long var86;
    if (input[2] < 798828800) {
        if (input[0] < -107536400) {
            var86 = -23976819;
        } else {
            var86 = 5400875;
        }
    } else {
        if (input[0] < -65443900) {
            var86 = 1626286;
        } else {
            var86 = -2280392;
        }
    }
    long var87;
    if (input[3] < -4681400) {
        if (input[2] < 998543500) {
            var87 = 480033;
        } else {
            var87 = 6724044;
        }
    } else {
        if (input[3] < 2313400) {
            var87 = -6030885;
        } else {
            var87 = 1392510;
        }
    }
    long var88;
    if (input[0] < 40984800) {
        if (input[1] < 64845200) {
            var88 = -4133866;
        } else {
            var88 = 460903;
        }
    } else {
        var88 = 9132094;
    }
    long var89;
    if (input[1] < 309840700) {
        if (input[2] < 754550900) {
            var89 = 4870343;
        } else {
            var89 = -599756;
        }
    } else {
        var89 = 9118698;
    }
    long var90;
    if (input[0] < 40984800) {
        if (input[1] < 309840700) {
            var90 = -383822;
        } else {
            var90 = 8992668;
        }
    } else {
        var90 = 9049542;
    }
    long var91;
    if (input[2] < 1062700100) {
        if (input[2] < 933234300) {
            var91 = 2306984;
        } else {
            var91 = -2058678;
        }
    } else {
        if (input[0] < -166813100) {
            var91 = -10144744;
        } else {
            var91 = 4515975;
        }
    }
    long var92;
    if (input[4] < 2926100) {
        if (input[4] < -4585800) {
            var92 = 1447652;
        } else {
            var92 = -4725370;
        }
    } else {
        if (input[2] < 992975100) {
            var92 = 350729;
        } else {
            var92 = 5076116;
        }
    }
    long var93;
    if (input[0] < 40984800) {
        if (input[1] < 64845200) {
            var93 = -3527829;
        } else {
            var93 = 417612;
        }
    } else {
        var93 = 8945643;
    }
    long var94;
    if (input[1] < 309840700) {
        if (input[3] < -4681400) {
            var94 = 1745373;
        } else {
            var94 = -1120086;
        }
    } else {
        var94 = 8923100;
    }
    long var95;
    if (input[0] < 40984800) {
        if (input[5] < -3423300) {
            var95 = 1645610;
        } else {
            var95 = -1099875;
        }
    } else {
        var95 = 8851343;
    }
    long var96;
    if (input[1] < 309840700) {
        if (input[2] < 754550900) {
            var96 = 4454709;
        } else {
            var96 = -491439;
        }
    } else {
        var96 = 8827728;
    }
    long var97;
    if (input[2] < 1033974800) {
        if (input[0] < -82298900) {
            var97 = 3547345;
        } else {
            var97 = -1739789;
        }
    } else {
        if (input[3] < 5468300) {
            var97 = -572315;
        } else {
            var97 = 7374663;
        }
    }
    long var98;
    if (input[4] < 4745800) {
        if (input[4] < -4585800) {
            var98 = 1255740;
        } else {
            var98 = -3431096;
        }
    } else {
        if (input[2] < 1033974800) {
            var98 = 698455;
        } else {
            var98 = 6307022;
        }
    }
    long var99;
    if (input[2] < 890273700) {
        if (input[3] < 3793800) {
            var99 = -205151;
        } else {
            var99 = 6958183;
        }
    } else {
        if (input[0] < -65443900) {
            var99 = 1644179;
        } else {
            var99 = -2431100;
        }
    }
    long var100;
    if (input[0] < 40984800) {
        if (input[3] < -4681400) {
            var100 = 1602644;
        } else {
            var100 = -1004902;
        }
    } else {
        var100 = 8761695;
    }
    long var101;
    if (input[1] < 309840700) {
        if (input[3] < -97178400) {
            var101 = -14528641;
        } else {
            var101 = -15486;
        }
    } else {
        var101 = 8724378;
    }
    long var102;
    if (input[0] < 40984800) {
        if (input[1] < 64845200) {
            var102 = -2984044;
        } else {
            var102 = 373673;
        }
    } else {
        var102 = 8659568;
    }
    long var103;
    if (input[2] < 1033974800) {
        if (input[0] < -82298900) {
            var103 = 3202358;
        } else {
            var103 = -1525962;
        }
    } else {
        if (input[3] < 5468300) {
            var103 = -577683;
        } else {
            var103 = 7133705;
        }
    }
    long var104;
    if (input[2] < 754550900) {
        if (input[0] < -75488000) {
            var104 = -13224748;
        } else {
            var104 = 6721136;
        }
    } else {
        if (input[0] < -65443900) {
            var104 = 1257591;
        } else {
            var104 = -1518804;
        }
    }
    long var105;
    if (input[0] < -166813100) {
        if (input[1] < 141381000) {
            var105 = -10268406;
        } else {
            var105 = 7165208;
        }
    } else {
        if (input[2] < 1062700100) {
            var105 = -450572;
        } else {
            var105 = 3865511;
        }
    }
    long var106;
    if (input[1] < 309840700) {
        if (input[5] < -2323800) {
            var106 = 1383825;
        } else {
            var106 = -1023565;
        }
    } else {
        var106 = 8612151;
    }
    long var107;
    if (input[3] < -4681400) {
        if (input[2] < 998543500) {
            var107 = 122609;
        } else {
            var107 = 6127570;
        }
    } else {
        if (input[3] < 2313400) {
            var107 = -4104801;
        } else {
            var107 = 1062730;
        }
    }
    long var108;
    if (input[0] < 40984800) {
        if (input[3] < -84226800) {
            var108 = -10113918;
        } else {
            var108 = 23637;
        }
    } else {
        var108 = 8546822;
    }
    long var109;
    if (input[2] < 933234300) {
        if (input[3] < 3793800) {
            var109 = -343677;
        } else {
            var109 = 5505708;
        }
    } else {
        if (input[0] < -73422300) {
            var109 = 1911428;
        } else {
            var109 = -1868042;
        }
    }
    long var110;
    if (input[4] < 2147100) {
        if (input[4] < -4585800) {
            var110 = 1016489;
        } else {
            var110 = -3610784;
        }
    } else {
        if (input[2] < 963531300) {
            var110 = 3604516;
        } else {
            var110 = -172036;
        }
    }
    long var111;
    if (input[1] < 309840700) {
        if (input[2] < 1234438000) {
            var111 = -381690;
        } else {
            var111 = 4169825;
        }
    } else {
        var111 = 8481994;
    }
    long var112;
    if (input[0] < 40984800) {
        if (input[3] < -4681400) {
            var112 = 1396242;
        } else {
            var112 = -850948;
        }
    } else {
        var112 = 8429582;
    }
    long var113;
    if (input[0] < -166813100) {
        if (input[1] < 141381000) {
            var113 = -8801232;
        } else {
            var113 = 6970981;
        }
    } else {
        if (input[2] < 1062700100) {
            var113 = -375920;
        } else {
            var113 = 3491503;
        }
    }
    long var114;
    if (input[2] < 754550900) {
        if (input[0] < -75488000) {
            var114 = -11193082;
        } else {
            var114 = 6411757;
        }
    } else {
        if (input[0] < -65443900) {
            var114 = 1155848;
        } else {
            var114 = -1369683;
        }
    }
    long var115;
    if (input[1] < 309840700) {
        if (input[3] < -97178400) {
            var115 = -12033488;
        } else {
            var115 = -6320;
        }
    } else {
        var115 = 8363532;
    }
    long var116;
    if (input[0] < 40984800) {
        if (input[1] < 64845200) {
            var116 = -2532228;
        } else {
            var116 = 325336;
        }
    } else {
        var116 = 8313134;
    }
    long var117;
    if (input[4] < -40546100) {
        if (input[2] < 945957900) {
            var117 = 4796612;
        } else {
            var117 = -7558584;
        }
    } else {
        if (input[1] < 122654900) {
            var117 = -1187646;
        } else {
            var117 = 1320630;
        }
    }
    long var118;
    if (input[2] < 1234438000) {
        if (input[1] < 35581000) {
            var118 = 5279429;
        } else {
            var118 = -587149;
        }
    } else {
        if (input[1] < -11062000) {
            var118 = -15510821;
        } else {
            var118 = 7521551;
        }
    }
    long var119;
    if (input[1] < 309840700) {
        if (input[5] < -2323800) {
            var119 = 1191598;
        } else {
            var119 = -854234;
        }
    } else {
        var119 = 8226311;
    }
    long var120;
    if (input[0] < 40984800) {
        if (input[3] < -84226800) {
            var120 = -8254275;
        } else {
            var120 = 27834;
        }
    } else {
        var120 = 8181449;
    }
    long var121;
    if (input[3] < -9831200) {
        if (input[2] < 840382400) {
            var121 = 6988653;
        } else {
            var121 = 561550;
        }
    } else {
        if (input[3] < 2313400) {
            var121 = -2496644;
        } else {
            var121 = 854110;
        }
    }
    long var122;
    if (input[4] < 2147100) {
        if (input[4] < -4585800) {
            var122 = 857889;
        } else {
            var122 = -2977051;
        }
    } else {
        if (input[4] < 17498500) {
            var122 = 2846178;
        } else {
            var122 = -985633;
        }
    }
    long var123;
    if (input[4] < -40546100) {
        if (input[2] < 945957900) {
            var123 = 4457680;
        } else {
            var123 = -6707226;
        }
    } else {
        if (input[1] < 67749100) {
            var123 = -2401546;
        } else {
            var123 = 756122;
        }
    }
    long var124;
    if (input[5] < 45791600) {
        if (input[3] < -75559900) {
            var124 = -9452476;
        } else {
            var124 = -29944;
        }
    } else {
        if (input[0] < -56612300) {
            var124 = 8139114;
        } else {
            var124 = -4694550;
        }
    }
    long var125;
    if (input[2] < 1234438000) {
        if (input[1] < 35581000) {
            var125 = 5160076;
        } else {
            var125 = -565170;
        }
    } else {
        if (input[1] < -11062000) {
            var125 = -12473714;
        } else {
            var125 = 7331083;
        }
    }
    long var126;
    if (input[1] < 309840700) {
        if (input[0] < 40984800) {
            var126 = -197696;
        } else {
            var126 = 8005270;
        }
    } else {
        var126 = 8093013;
    }
    long var127;
    if (input[3] < -4681400) {
        if (input[2] < 998543500) {
            var127 = -56248;
        } else {
            var127 = 5682581;
        }
    } else {
        if (input[3] < 2313400) {
            var127 = -2842928;
        } else {
            var127 = 726235;
        }
    }
    long var128;
    if (input[2] < 754550900) {
        if (input[0] < -75488000) {
            var128 = -9854042;
        } else {
            var128 = 6054254;
        }
    } else {
        if (input[0] < -65443900) {
            var128 = 1098255;
        } else {
            var128 = -1259391;
        }
    }
    long var129;
    if (input[1] < 309840700) {
        if (input[5] < 42935600) {
            var129 = -308265;
        } else {
            var129 = 3402418;
        }
    } else {
        var129 = 7962938;
    }
    long var130;
    if (input[0] < -166813100) {
        if (input[1] < 141381000) {
            var130 = -7110368;
        } else {
            var130 = 6676276;
        }
    } else {
        if (input[2] < 1062700100) {
            var130 = -317914;
        } else {
            var130 = 3078332;
        }
    }
    long var131;
    if (input[0] < 40984800) {
        if (input[4] < -40546100) {
            var131 = -3501079;
        } else {
            var131 = 141731;
        }
    } else {
        var131 = 7909381;
    }
    long var132;
    if (input[1] < 309840700) {
        if (input[5] < -2323800) {
            var132 = 1048743;
        } else {
            var132 = -722703;
        }
    } else {
        var132 = 7819251;
    }
    long var133;
    if (input[2] < 963531300) {
        if (input[5] < 6892900) {
            var133 = -358447;
        } else {
            var133 = 3560024;
        }
    } else {
        if (input[2] < 985385900) {
            var133 = -3093147;
        } else {
            var133 = 1054235;
        }
    }
    long var134;
    if (input[3] < -3231100) {
        if (input[2] < 998543500) {
            var134 = 63241;
        } else {
            var134 = 4605373;
        }
    } else {
        if (input[3] < 2313400) {
            var134 = -2970923;
        } else {
            var134 = 635055;
        }
    }
    long var135;
    if (input[0] < 40984800) {
        if (input[3] < -97178400) {
            var135 = -9036814;
        } else {
            var135 = 10469;
        }
    } else {
        var135 = 7749135;
    }
    long var136;
    if (input[2] < 754550900) {
        if (input[0] < -75488000) {
            var136 = -8479736;
        } else {
            var136 = 5776349;
        }
    } else {
        if (input[0] < -76760400) {
            var136 = 1546134;
        } else {
            var136 = -893077;
        }
    }
    long var137;
    if (input[0] < -166813100) {
        if (input[3] < 853100) {
            var137 = -9288179;
        } else {
            var137 = 1225642;
        }
    } else {
        if (input[2] < 1234438000) {
            var137 = -64613;
        } else {
            var137 = 5431811;
        }
    }
    long var138;
    if (input[5] < 45791600) {
        if (input[3] < -75559900) {
            var138 = -8186916;
        } else {
            var138 = -13440;
        }
    } else {
        if (input[0] < -56612300) {
            var138 = 7728739;
        } else {
            var138 = -4582219;
        }
    }
    long var139;
    if (input[5] < -2323800) {
        if (input[0] < -18546400) {
            var139 = 476440;
        } else {
            var139 = 7042039;
        }
    } else {
        if (input[3] < -8874900) {
            var139 = 2184935;
        } else {
            var139 = -1566670;
        }
    }
    long var140;
    if (input[1] < 309840700) {
        if (input[4] < -40546100) {
            var140 = -3212415;
        } else {
            var140 = 135735;
        }
    } else {
        var140 = 7652380;
    }
    long var141;
    if (input[1] < 64845200) {
        if (input[1] < 49532000) {
            var141 = 1938035;
        } else {
            var141 = -8709986;
        }
    } else {
        if (input[1] < 97252800) {
            var141 = 3745785;
        } else {
            var141 = -206527;
        }
    }
    long var142;
    if (input[0] < 40984800) {
        if (input[0] < 22647900) {
            var142 = 43848;
        } else {
            var142 = -6031355;
        }
    } else {
        var142 = 7566376;
    }
    long var143;
    if (input[1] < 122654900) {
        if (input[4] < -5741300) {
            var143 = 2806700;
        } else {
            var143 = -2644580;
        }
    } else {
        if (input[2] < 973979600) {
            var143 = -545593;
        } else {
            var143 = 2946396;
        }
    }
    long var144;
    if (input[2] < 963531300) {
        if (input[4] < 1967900) {
            var144 = -338825;
        } else {
            var144 = 3152979;
        }
    } else {
        if (input[2] < 985385900) {
            var144 = -2671579;
        } else {
            var144 = 826404;
        }
    }
    long var145;
    if (input[1] < 309840700) {
        if (input[5] < 42935600) {
            var145 = -254775;
        } else {
            var145 = 3006755;
        }
    } else {
        var145 = 7488021;
    }
    long var146;
    if (input[2] < 798828800) {
        if (input[0] < -107536400) {
            var146 = -18730490;
        } else {
            var146 = 3686406;
        }
    } else {
        if (input[0] < -65443900) {
            var146 = 1131439;
        } else {
            var146 = -1334670;
        }
    }
    long var147;
    if (input[0] < -166813100) {
        if (input[1] < 141381000) {
            var147 = -5984096;
        } else {
            var147 = 6420972;
        }
    } else {
        if (input[2] < 1234438000) {
            var147 = -56543;
        } else {
            var147 = 5149014;
        }
    }
    long var148;
    if (input[3] < -48871400) {
        if (input[2] < 975716000) {
            var148 = -6249440;
        } else {
            var148 = 2274465;
        }
    } else {
        if (input[3] < -9831200) {
            var148 = 2403249;
        } else {
            var148 = -359768;
        }
    }
    long var149;
    if (input[0] < 40984800) {
        if (input[4] < -40546100) {
            var149 = -2975016;
        } else {
            var149 = 130383;
        }
    } else {
        var149 = 7409465;
    }
    long var150;
    if (input[1] < 38769400) {
        if (input[2] < 1130179800) {
            var150 = 7684085;
        } else {
            var150 = -4576934;
        }
    } else {
        if (input[1] < 64845200) {
            var150 = -5738893;
        } else {
            var150 = 295369;
        }
    }
    long var151;
    if (input[1] < 282821900) {
        if (input[2] < 1234438000) {
            var151 = -257488;
        } else {
            var151 = 3095322;
        }
    } else {
        if (input[3] < 23273900) {
            var151 = 8247981;
        } else {
            var151 = -4942382;
        }
    }
    long var152;
    if (input[5] < -5748600) {
        if (input[5] < -11167200) {
            var152 = -41982;
        } else {
            var152 = 5463607;
        }
    } else {
        if (input[3] < -8874900) {
            var152 = 1784662;
        } else {
            var152 = -1198505;
        }
    }
    long var153;
    if (input[0] < 40984800) {
        if (input[0] < 19684100) {
            var153 = 60986;
        } else {
            var153 = -4954964;
        }
    } else {
        var153 = 7254206;
    }
    long var154;
    if (input[2] < 963531300) {
        if (input[5] < 6892900) {
            var154 = -373224;
        } else {
            var154 = 3206408;
        }
    } else {
        if (input[0] < -65443900) {
            var154 = 1252746;
        } else {
            var154 = -1964606;
        }
    }
    long var155;
    if (input[1] < 309840700) {
        if (input[3] < -48871400) {
            var155 = -2741019;
        } else {
            var155 = 133219;
        }
    } else {
        var155 = 7235413;
    }
    long var156;
    if (input[5] < -2323800) {
        if (input[1] < 106847800) {
            var156 = 3812201;
        } else {
            var156 = -199471;
        }
    } else {
        if (input[1] < 115425000) {
            var156 = -2227167;
        } else {
            var156 = 569524;
        }
    }
    long var157;
    if (input[5] < 42935600) {
        if (input[5] < 26899600) {
            var157 = 162442;
        } else {
            var157 = -3071985;
        }
    } else {
        if (input[0] < -66312100) {
            var157 = 8271535;
        } else {
            var157 = -2050939;
        }
    }
    long var158;
    if (input[0] < 29743100) {
        if (input[0] < 26644600) {
            var158 = 21377;
        } else {
            var158 = -15006800;
        }
    } else {
        if (input[1] < 126861200) {
            var158 = 694027;
        } else {
            var158 = 7620104;
        }
    }
    long var159;
    if (input[1] < 42721200) {
        if (input[2] < 1130179800) {
            var159 = 7462827;
        } else {
            var159 = -4786038;
        }
    } else {
        if (input[1] < 64845200) {
            var159 = -5532320;
        } else {
            var159 = 249964;
        }
    }
    long var160;
    if (input[2] < 1234438000) {
        if (input[1] < 35581000) {
            var160 = 4352473;
        } else {
            var160 = -427004;
        }
    } else {
        if (input[1] < -11062000) {
            var160 = -9937435;
        } else {
            var160 = 6774174;
        }
    }
    long var161;
    if (input[4] < -40546100) {
        if (input[2] < 945957900) {
            var161 = 4502510;
        } else {
            var161 = -5238038;
        }
    } else {
        if (input[4] < -36499600) {
            var161 = 7208281;
        } else {
            var161 = 46377;
        }
    }
    long var162;
    if (input[2] < 754550900) {
        if (input[0] < -75488000) {
            var162 = -7305875;
        } else {
            var162 = 5308797;
        }
    } else {
        if (input[1] < 178189500) {
            var162 = 332051;
        } else {
            var162 = -1745455;
        }
    }
    long var163;
    if (input[1] < 309840700) {
        if (input[2] < 1234438000) {
            var163 = -209729;
        } else {
            var163 = 2935856;
        }
    } else {
        var163 = 7112355;
    }
    long var164;
    if (input[0] < -166813100) {
        if (input[3] < 853100) {
            var164 = -7561012;
        } else {
            var164 = 1413349;
        }
    } else {
        if (input[2] < 1234438000) {
            var164 = -32379;
        } else {
            var164 = 4613906;
        }
    }
    long var165;
    if (input[5] < -15002800) {
        if (input[2] < 1076995400) {
            var165 = 299545;
        } else {
            var165 = 7592603;
        }
    } else {
        if (input[5] < -13749700) {
            var165 = -16454425;
        } else {
            var165 = -86254;
        }
    }
    long var166;
    if (input[5] < 45791600) {
        if (input[3] < -75559900) {
            var166 = -6767460;
        } else {
            var166 = 796;
        }
    } else {
        if (input[0] < -54965700) {
            var166 = 6816942;
        } else {
            var166 = -4621677;
        }
    }
    long var167;
    if (input[0] < 40984800) {
        if (input[0] < 22647900) {
            var167 = 42740;
        } else {
            var167 = -4756442;
        }
    } else {
        var167 = 7010283;
    }
    long var168;
    if (input[1] < 309840700) {
        if (input[2] < 754550900) {
            var168 = 2565156;
        } else {
            var168 = -212288;
        }
    } else {
        var168 = 6970723;
    }
    long var169;
    if (input[0] < 29743100) {
        if (input[0] < 26644600) {
            var169 = 18898;
        } else {
            var169 = -12479170;
        }
    } else {
        if (input[1] < 126861200) {
            var169 = 484897;
        } else {
            var169 = 7464791;
        }
    }
    long var170;
    if (input[4] < 2147100) {
        if (input[4] < -4585800) {
            var170 = 607760;
        } else {
            var170 = -1961708;
        }
    } else {
        if (input[5] < 26899600) {
            var170 = 1859103;
        } else {
            var170 = -3309147;
        }
    }
    long var171;
    if (input[4] < 17875300) {
        if (input[4] < 9877200) {
            var171 = -254690;
        } else {
            var171 = 5322969;
        }
    } else {
        if (input[3] < 12516700) {
            var171 = 2156410;
        } else {
            var171 = -6437957;
        }
    }
    long var172;
    if (input[5] < 42935600) {
        if (input[3] < -75559900) {
            var172 = -6094866;
        } else {
            var172 = -20208;
        }
    } else {
        if (input[0] < -66312100) {
            var172 = 7914620;
        } else {
            var172 = -1661239;
        }
    }
    long var173;
    if (input[2] < 963531300) {
        if (input[3] < 4199700) {
            var173 = -529698;
        } else {
            var173 = 2953186;
        }
    } else {
        if (input[2] < 985385900) {
            var173 = -2133150;
        } else {
            var173 = 739161;
        }
    }
    long var174;
    if (input[1] < 122654900) {
        if (input[1] < 103090600) {
            var174 = 856038;
        } else {
            var174 = -4537829;
        }
    } else {
        if (input[2] < 973979600) {
            var174 = -647884;
        } else {
            var174 = 2787392;
        }
    }
    long var175;
    if (input[2] < 963531300) {
        if (input[5] < 6892900) {
            var175 = -356234;
        } else {
            var175 = 2959388;
        }
    } else {
        if (input[0] < -65443900) {
            var175 = 1104286;
        } else {
            var175 = -1725170;
        }
    }
    long var176;
    if (input[0] < -166813100) {
        if (input[1] < 141381000) {
            var176 = -4955460;
        } else {
            var176 = 6177176;
        }
    } else {
        if (input[2] < 1234438000) {
            var176 = -20668;
        } else {
            var176 = 4293439;
        }
    }
    long var177;
    if (input[4] < -40546100) {
        if (input[4] < -41499900) {
            var177 = -1009182;
        } else {
            var177 = -15672357;
        }
    } else {
        if (input[4] < -36499600) {
            var177 = 6898238;
        } else {
            var177 = 39677;
        }
    }
    long var178;
    if (input[5] < -5748600) {
        if (input[0] < -18546400) {
            var178 = 250270;
        } else {
            var178 = 8108348;
        }
    } else {
        if (input[0] < -47406400) {
            var178 = 297694;
        } else {
            var178 = -2290775;
        }
    }
    long var179;
    if (input[4] < 17875300) {
        if (input[4] < 9877200) {
            var179 = -210752;
        } else {
            var179 = 5001801;
        }
    } else {
        if (input[3] < 12516700) {
            var179 = 1992259;
        } else {
            var179 = -5798910;
        }
    }
    long var180;
    if (input[1] < 309840700) {
        if (input[1] < 178189500) {
            var180 = 348176;
        } else {
            var180 = -1223746;
        }
    } else {
        var180 = 6786098;
    }
    long var181;
    if (input[1] < 73272600) {
        if (input[4] < -3194600) {
            var181 = 5205800;
        } else {
            var181 = -4634364;
        }
    } else {
        if (input[1] < 97252800) {
            var181 = 4277005;
        } else {
            var181 = -250026;
        }
    }
    long var182;
    if (input[1] < 115425000) {
        if (input[1] < 103090600) {
            var182 = 739139;
        } else {
            var182 = -6715205;
        }
    } else {
        if (input[2] < 1024469600) {
            var182 = -82577;
        } else {
            var182 = 4939328;
        }
    }
    long var183;
    if (input[2] < 963531300) {
        if (input[3] < 4199700) {
            var183 = -444677;
        } else {
            var183 = 2800048;
        }
    } else {
        if (input[0] < -65443900) {
            var183 = 983654;
        } else {
            var183 = -1587039;
        }
    }
    long var184;
    if (input[5] < 42935600) {
        if (input[4] < 58265400) {
            var184 = -25657;
        } else {
            var184 = -6222590;
        }
    } else {
        if (input[2] < 973979600) {
            var184 = 6878205;
        } else {
            var184 = -2106501;
        }
    }
    long var185;
    if (input[4] < -40546100) {
        if (input[0] < -95995400) {
            var185 = 6126787;
        } else {
            var185 = -3986982;
        }
    } else {
        if (input[4] < -36499600) {
            var185 = 6598886;
        } else {
            var185 = 47860;
        }
    }
    long var186;
    if (input[0] < 40984800) {
        if (input[0] < 19684100) {
            var186 = 60070;
        } else {
            var186 = -3974872;
        }
    } else {
        var186 = 6719684;
    }
    long var187;
    if (input[3] < -48871400) {
        if (input[2] < 983410000) {
            var187 = -4750274;
        } else {
            var187 = 3369815;
        }
    } else {
        if (input[3] < -23171000) {
            var187 = 3131480;
        } else {
            var187 = -116088;
        }
    }
    long var188;
    if (input[2] < 754550900) {
        if (input[0] < -102342200) {
            var188 = -13213344;
        } else {
            var188 = 3921107;
        }
    } else {
        if (input[1] < 178189500) {
            var188 = 319486;
        } else {
            var188 = -1573952;
        }
    }
    long var189;
    if (input[1] < 282821900) {
        if (input[1] < 179252200) {
            var189 = 282795;
        } else {
            var189 = -1151888;
        }
    } else {
        if (input[3] < 21881000) {
            var189 = 7910525;
        } else {
            var189 = -4952685;
        }
    }
    long var190;
    if (input[1] < 115425000) {
        if (input[1] < 103090600) {
            var190 = 632615;
        } else {
            var190 = -5923047;
        }
    } else {
        if (input[2] < 1024469600) {
            var190 = -61259;
        } else {
            var190 = 4716023;
        }
    }
    long var191;
    if (input[1] < 73272600) {
        if (input[4] < -3194600) {
            var191 = 4802303;
        } else {
            var191 = -4273302;
        }
    } else {
        if (input[1] < 97252800) {
            var191 = 3841265;
        } else {
            var191 = -168846;
        }
    }
    long var192;
    if (input[0] < 29743100) {
        if (input[0] < 26644600) {
            var192 = 23521;
        } else {
            var192 = -10829603;
        }
    } else {
        if (input[1] < 126861200) {
            var192 = 281983;
        } else {
            var192 = 7253114;
        }
    }
    long var193;
    if (input[0] < -166813100) {
        if (input[3] < 853100) {
            var193 = -6573205;
        } else {
            var193 = 1420531;
        }
    } else {
        if (input[1] < -69665100) {
            var193 = -8941627;
        } else {
            var193 = 189591;
        }
    }
    long var194;
    if (input[1] < 38769400) {
        if (input[3] < 673600) {
            var194 = -3727469;
        } else {
            var194 = 7898968;
        }
    } else {
        if (input[1] < 64845200) {
            var194 = -4382671;
        } else {
            var194 = 226949;
        }
    }
    long var195;
    if (input[3] < -2212200) {
        if (input[5] < -64784500) {
            var195 = -10249305;
        } else {
            var195 = 1013728;
        }
    } else {
        if (input[5] < -3423300) {
            var195 = 1565299;
        } else {
            var195 = -1397683;
        }
    }
    long var196;
    if (input[4] < -40546100) {
        if (input[2] < 945957900) {
            var196 = 4333929;
        } else {
            var196 = -4416439;
        }
    } else {
        if (input[4] < -36499600) {
            var196 = 6304885;
        } else {
            var196 = 44358;
        }
    }
    long var197;
    if (input[5] < 42935600) {
        if (input[5] < 26899600) {
            var197 = 129652;
        } else {
            var197 = -2409574;
        }
    } else {
        if (input[0] < -66312100) {
            var197 = 7499391;
        } else {
            var197 = -1364061;
        }
    }
    long var198;
    if (input[1] < 309840700) {
        if (input[0] < -42047600) {
            var198 = 258940;
        } else {
            var198 = -1179962;
        }
    } else {
        var198 = 6507856;
    }
    long var199;
    if (input[0] < 40984800) {
        if (input[3] < -47478000) {
            var199 = -2141382;
        } else {
            var199 = 114850;
        }
    } else {
        var199 = 6492969;
    }
    long var200;
    if (input[2] < 798828800) {
        if (input[0] < -74425200) {
            var200 = -7468324;
        } else {
            var200 = 4451546;
        }
    } else {
        if (input[0] < -76760400) {
            var200 = 1220168;
        } else {
            var200 = -713441;
        }
    }
    long var201;
    if (input[4] < 1967900) {
        if (input[0] < -35670800) {
            var201 = 150249;
        } else {
            var201 = -3364834;
        }
    } else {
        if (input[5] < 26899600) {
            var201 = 1645668;
        } else {
            var201 = -2949109;
        }
    }
    long var202;
    if (input[5] < 6892900) {
        if (input[3] < 8316800) {
            var202 = -1716828;
        } else {
            var202 = 2766384;
        }
    } else {
        if (input[3] < 12727300) {
            var202 = 3169114;
        } else {
            var202 = -4274839;
        }
    }
    long var203;
    if (input[0] < 29743100) {
        if (input[0] < 26644600) {
            var203 = 18917;
        } else {
            var203 = -9167758;
        }
    } else {
        if (input[5] < 4852900) {
            var203 = 7128977;
        } else {
            var203 = 234049;
        }
    }
    long var204;
    if (input[5] < 42935600) {
        if (input[1] < 38769400) {
            var204 = 2377682;
        } else {
            var204 = -332674;
        }
    } else {
        if (input[2] < 973979600) {
            var204 = 6536715;
        } else {
            var204 = -1949113;
        }
    }
    long var205;
    if (input[0] < -166813100) {
        if (input[1] < 141381000) {
            var205 = -4230954;
        } else {
            var205 = 5982040;
        }
    } else {
        if (input[2] < 1234438000) {
            var205 = -24096;
        } else {
            var205 = 4030836;
        }
    }
    long var206;
    if (input[1] < 309840700) {
        if (input[4] < 17875300) {
            var206 = 205175;
        } else {
            var206 = -1298783;
        }
    } else {
        var206 = 6391066;
    }
    long var207;
    if (input[2] < 963531300) {
        if (input[5] < 6892900) {
            var207 = -385175;
        } else {
            var207 = 2730635;
        }
    } else {
        if (input[3] < 23273900) {
            var207 = 122763;
        } else {
            var207 = -3077958;
        }
    }
    long var208;
    if (input[3] < 36459600) {
        if (input[3] < 33106000) {
            var208 = 116747;
        } else {
            var208 = -14278674;
        }
    } else {
        if (input[5] < -19873600) {
            var208 = 9020888;
        } else {
            var208 = -568804;
        }
    }
    long var209;
    if (input[4] < 1967900) {
        if (input[0] < -35670800) {
            var209 = 120809;
        } else {
            var209 = -3033648;
        }
    } else {
        if (input[5] < 26899600) {
            var209 = 1554474;
        } else {
            var209 = -2620309;
        }
    }
    long var210;
    if (input[1] < 219758000) {
        if (input[1] < 179252200) {
            var210 = 277222;
        } else {
            var210 = -1699328;
        }
    } else {
        if (input[1] < 233469500) {
            var210 = 8244485;
        } else {
            var210 = 236322;
        }
    }
    long var211;
    if (input[5] < 42935600) {
        if (input[5] < 39785800) {
            var211 = -32894;
        } else {
            var211 = -6007358;
        }
    } else {
        if (input[0] < -54965700) {
            var211 = 5529551;
        } else {
            var211 = -2978420;
        }
    }
    long var212;
    if (input[0] < 40984800) {
        if (input[1] < 115425000) {
            var212 = -743609;
        } else {
            var212 = 377119;
        }
    } else {
        var212 = 6318189;
    }
    long var213;
    if (input[3] < -37483800) {
        if (input[2] < 987556400) {
            var213 = -4136608;
        } else {
            var213 = 4904346;
        }
    } else {
        if (input[3] < -23171000) {
            var213 = 4174883;
        } else {
            var213 = -100027;
        }
    }
    long var214;
    if (input[1] < 274813500) {
        if (input[5] < 6892900) {
            var214 = -497357;
        } else {
            var214 = 769453;
        }
    } else {
        if (input[5] < 18378800) {
            var214 = 8083842;
        } else {
            var214 = -6206118;
        }
    }
    long var215;
    if (input[1] < -69665100) {
        var215 = -5910608;
    } else {
        if (input[1] < 38769400) {
            var215 = 2653002;
        } else {
            var215 = -136495;
        }
    }
    long var216;
    if (input[2] < 754550900) {
        if (input[0] < -107536400) {
            var216 = -13481535;
        } else {
            var216 = 3711454;
        }
    } else {
        if (input[2] < 771705200) {
            var216 = -5584857;
        } else {
            var216 = -20083;
        }
    }
    long var217;
    if (input[2] < 1335313200) {
        if (input[1] < -69665100) {
            var217 = -10683288;
        } else {
            var217 = -703;
        }
    } else {
        if (input[5] < -429400) {
            var217 = -4126777;
        } else {
            var217 = 8550395;
        }
    }
    long var218;
    if (input[0] < 29743100) {
        if (input[0] < 26644600) {
            var218 = 14020;
        } else {
            var218 = -8064885;
        }
    } else {
        if (input[1] < 126861200) {
            var218 = -73358;
        } else {
            var218 = 6979220;
        }
    }
    long var219;
    if (input[4] < -40546100) {
        if (input[4] < -41499900) {
            var219 = -679526;
        } else {
            var219 = -13550903;
        }
    } else {
        if (input[4] < -36499600) {
            var219 = 6110538;
        } else {
            var219 = 32652;
        }
    }
    long var220;
    if (input[4] < 17875300) {
        if (input[4] < 9877200) {
            var220 = -202896;
        } else {
            var220 = 4573810;
        }
    } else {
        if (input[0] < -78047700) {
            var220 = 4478381;
        } else {
            var220 = -3150377;
        }
    }
    long var221;
    if (input[0] < -166813100) {
        if (input[2] < 1135239300) {
            var221 = 1923276;
        } else {
            var221 = -5379349;
        }
    } else {
        if (input[2] < 1234438000) {
            var221 = -21627;
        } else {
            var221 = 3747963;
        }
    }
    long var222;
    if (input[2] < 798828800) {
        if (input[0] < -74425200) {
            var222 = -6423237;
        } else {
            var222 = 4204572;
        }
    } else {
        if (input[0] < -76760400) {
            var222 = 1032338;
        } else {
            var222 = -615971;
        }
    }
    long var223;
    if (input[1] < 309840700) {
        if (input[1] < 178189500) {
            var223 = 272226;
        } else {
            var223 = -944652;
        }
    } else {
        var223 = 6153360;
    }
    long var224;
    if (input[0] < -107536400) {
        if (input[3] < 3104700) {
            var224 = -5305649;
        } else {
            var224 = 4882883;
        }
    } else {
        if (input[1] < 11780500) {
            var224 = 7074853;
        } else {
            var224 = -32528;
        }
    }
    long var225;
    if (input[3] < -2212200) {
        if (input[5] < -64784500) {
            var225 = -8722456;
        } else {
            var225 = 916720;
        }
    } else {
        if (input[3] < -1986400) {
            var225 = -9412789;
        } else {
            var225 = -235515;
        }
    }
    long var226;
    if (input[1] < 115425000) {
        if (input[1] < 105111400) {
            var226 = 490099;
        } else {
            var226 = -5766570;
        }
    } else {
        if (input[2] < 1203946400) {
            var226 = 143299;
        } else {
            var226 = 8705264;
        }
    }
    long var227;
    if (input[1] < 73272600) {
        if (input[4] < -3194600) {
            var227 = 4547909;
        } else {
            var227 = -3778836;
        }
    } else {
        if (input[1] < 97252800) {
            var227 = 3549443;
        } else {
            var227 = -172779;
        }
    }
    long var228;
    if (input[4] < -38664300) {
        if (input[5] < 10620200) {
            var228 = 1819793;
        } else {
            var228 = -6830812;
        }
    } else {
        if (input[4] < -36499600) {
            var228 = 8545054;
        } else {
            var228 = 42635;
        }
    }
    long var229;
    if (input[0] < 40984800) {
        if (input[0] < -42047600) {
            var229 = 241063;
        } else {
            var229 = -1056231;
        }
    } else {
        var229 = 6060432;
    }
    long var230;
    if (input[0] < -6077400) {
        if (input[0] < -14714400) {
            var230 = 16505;
        } else {
            var230 = -6158293;
        }
    } else {
        if (input[4] < -3194600) {
            var230 = 7527145;
        } else {
            var230 = -2972459;
        }
    }
    long var231;
    if (input[3] < -47478000) {
        if (input[2] < 975716000) {
            var231 = -4409796;
        } else {
            var231 = 2587234;
        }
    } else {
        if (input[3] < -23171000) {
            var231 = 2736644;
        } else {
            var231 = -90259;
        }
    }
    long var232;
    if (input[2] < 963531300) {
        if (input[0] < -55774000) {
            var232 = -704966;
        } else {
            var232 = 2276960;
        }
    } else {
        if (input[1] < 122654900) {
            var232 = -1455951;
        } else {
            var232 = 793355;
        }
    }
    long var233;
    if (input[1] < 42721200) {
        if (input[2] < 1130179800) {
            var233 = 6903564;
        } else {
            var233 = -4806858;
        }
    } else {
        if (input[2] < 1226250000) {
            var233 = -350891;
        } else {
            var233 = 6587173;
        }
    }
    long var234;
    if (input[5] < 42935600) {
        if (input[4] < 58265400) {
            var234 = -9134;
        } else {
            var234 = -5177135;
        }
    } else {
        if (input[0] < -66312100) {
            var234 = 7001968;
        } else {
            var234 = -1177964;
        }
    }
    long var235;
    if (input[1] < 309840700) {
        if (input[1] < 178189500) {
            var235 = 269254;
        } else {
            var235 = -891212;
        }
    } else {
        var235 = 5988758;
    }
    long var236;
    if (input[5] < -15002800) {
        if (input[2] < 879915200) {
            var236 = 6546926;
        } else {
            var236 = -175821;
        }
    } else {
        if (input[5] < -13749700) {
            var236 = -13842854;
        } else {
            var236 = -10005;
        }
    }
    long var237;
    if (input[3] < 36459600) {
        if (input[3] < 33106000) {
            var237 = 108149;
        } else {
            var237 = -11869856;
        }
    } else {
        if (input[5] < -19873600) {
            var237 = 8752700;
        } else {
            var237 = -552672;
        }
    }
    long var238;
    if (input[4] < 4745800) {
        if (input[0] < -42047600) {
            var238 = 331011;
        } else {
            var238 = -2619930;
        }
    } else {
        if (input[1] < 103090600) {
            var238 = 4479758;
        } else {
            var238 = -607293;
        }
    }
    long var239;
    if (input[1] < 64845200) {
        if (input[3] < -5214000) {
            var239 = 5081652;
        } else {
            var239 = -3147776;
        }
    } else {
        if (input[1] < 99108900) {
            var239 = 2528412;
        } else {
            var239 = -141303;
        }
    }
    long var240;
    if (input[1] < 115425000) {
        if (input[3] < 3793800) {
            var240 = -2453884;
        } else {
            var240 = 2397535;
        }
    } else {
        if (input[3] < 13226900) {
            var240 = 1273290;
        } else {
            var240 = -1803549;
        }
    }
    long var241;
    if (input[3] < -37483800) {
        if (input[2] < 987556400) {
            var241 = -3649538;
        } else {
            var241 = 4447919;
        }
    } else {
        if (input[3] < -23171000) {
            var241 = 3669104;
        } else {
            var241 = -58288;
        }
    }
    long var242;
    if (input[4] < -38664300) {
        if (input[5] < 10620200) {
            var242 = 1615255;
        } else {
            var242 = -6145791;
        }
    } else {
        if (input[4] < -36499600) {
            var242 = 8343954;
        } else {
            var242 = 50517;
        }
    }
    long var243;
    if (input[1] < 219758000) {
        if (input[5] < 62992300) {
            var243 = -197637;
        } else {
            var243 = 5014967;
        }
    } else {
        if (input[1] < 233469500) {
            var243 = 8135980;
        } else {
            var243 = 127285;
        }
    }
    long var244;
    if (input[3] < 86608400) {
        if (input[1] < 282821900) {
            var244 = -23292;
        } else {
            var244 = 6015417;
        }
    } else {
        var244 = -5345935;
    }
    long var245;
    if (input[1] < 38769400) {
        if (input[3] < 673600) {
            var245 = -3623442;
        } else {
            var245 = 7572869;
        }
    } else {
        if (input[2] < 1226250000) {
            var245 = -320273;
        } else {
            var245 = 6402674;
        }
    }
    long var246;
    if (input[1] < 115425000) {
        if (input[1] < 105111400) {
            var246 = 368946;
        } else {
            var246 = -4822538;
        }
    } else {
        if (input[0] < -82298900) {
            var246 = 2991164;
        } else {
            var246 = -314626;
        }
    }
    long var247;
    if (input[1] < 82733000) {
        if (input[4] < -3194600) {
            var247 = 4838863;
        } else {
            var247 = -3570180;
        }
    } else {
        if (input[1] < 97252800) {
            var247 = 4743004;
        } else {
            var247 = -107491;
        }
    }
    long var248;
    if (input[4] < 548600) {
        if (input[3] < -4414700) {
            var248 = 1120011;
        } else {
            var248 = -1261989;
        }
    } else {
        if (input[0] < 18217100) {
            var248 = 816758;
        } else {
            var248 = -6475473;
        }
    }
    long var249;
    if (input[3] < -37483800) {
        if (input[2] < 879915200) {
            var249 = 4901673;
        } else {
            var249 = -3275387;
        }
    } else {
        if (input[3] < -32910800) {
            var249 = 5823146;
        } else {
            var249 = 52008;
        }
    }
    long var250;
    if (input[4] < 17498500) {
        if (input[4] < 10580300) {
            var250 = -127978;
        } else {
            var250 = 4732585;
        }
    } else {
        if (input[2] < 879915200) {
            var250 = 6100906;
        } else {
            var250 = -2375723;
        }
    }
    long var251;
    if (input[0] < 40984800) {
        if (input[4] < -57218800) {
            var251 = 3281596;
        } else {
            var251 = -93808;
        }
    } else {
        var251 = 5942551;
    }
    long var252;
    if (input[4] < -38664300) {
        if (input[1] < 125543900) {
            var252 = 3014093;
        } else {
            var252 = -4279912;
        }
    } else {
        if (input[4] < -36499600) {
            var252 = 8152772;
        } else {
            var252 = 62703;
        }
    }
    long var253;
    if (input[3] < 35694500) {
        if (input[3] < 33106000) {
            var253 = 98086;
        } else {
            var253 = -11410004;
        }
    } else {
        if (input[5] < -19873600) {
            var253 = 8576017;
        } else {
            var253 = -432413;
        }
    }
    long var254;
    if (input[1] < 110485200) {
        if (input[3] < 8316800) {
            var254 = -2315379;
        } else {
            var254 = 3614437;
        }
    } else {
        if (input[2] < 1024469600) {
            var254 = -187361;
        } else {
            var254 = 4793560;
        }
    }
    long var255;
    if (input[1] < 38769400) {
        if (input[3] < 673600) {
            var255 = -2927608;
        } else {
            var255 = 7299490;
        }
    } else {
        if (input[2] < 1226250000) {
            var255 = -293833;
        } else {
            var255 = 6110978;
        }
    }
    long var256;
    if (input[1] < -69665100) {
        var256 = -5360727;
    } else {
        if (input[1] < 38769400) {
            var256 = 2424961;
        } else {
            var256 = -104172;
        }
    }
    long var257;
    if (input[1] < 80802000) {
        if (input[3] < -5214000) {
            var257 = 5488200;
        } else {
            var257 = -3067554;
        }
    } else {
        if (input[1] < 97252800) {
            var257 = 3856663;
        } else {
            var257 = -83435;
        }
    }
    long var258;
    if (input[1] < 115425000) {
        if (input[3] < 3793800) {
            var258 = -2002608;
        } else {
            var258 = 1937620;
        }
    } else {
        if (input[0] < -57315800) {
            var258 = -665738;
        } else {
            var258 = 1861898;
        }
    }
    long var259;
    if (input[3] < 86608400) {
        if (input[0] < 29743100) {
            var259 = -18413;
        } else {
            var259 = 5942865;
        }
    } else {
        if (input[0] < -78047700) {
            var259 = 5813881;
        } else {
            var259 = -13776813;
        }
    }
    long var260;
    if (input[4] < 17498500) {
        if (input[4] < 10580300) {
            var260 = -102179;
        } else {
            var260 = 4427374;
        }
    } else {
        if (input[3] < 12516700) {
            var260 = 1786493;
        } else {
            var260 = -4356897;
        }
    }
    long var261;
    if (input[2] < 963531300) {
        if (input[3] < 4199700) {
            var261 = -550312;
        } else {
            var261 = 2518799;
        }
    } else {
        if (input[3] < 23273900) {
            var261 = 142630;
        } else {
            var261 = -2707698;
        }
    }
    long var262;
    if (input[3] < 35694500) {
        if (input[3] < 33106000) {
            var262 = 82129;
        } else {
            var262 = -9791826;
        }
    } else {
        if (input[5] < -19873600) {
            var262 = 8309504;
        } else {
            var262 = -319097;
        }
    }
    long var263;
    if (input[4] < -38664300) {
        if (input[5] < 10620200) {
            var263 = 1452233;
        } else {
            var263 = -5356510;
        }
    } else {
        if (input[4] < -36499600) {
            var263 = 7933599;
        } else {
            var263 = 56407;
        }
    }
    long var264;
    if (input[5] < 6892900) {
        if (input[3] < 8316800) {
            var264 = -1425738;
        } else {
            var264 = 2442176;
        }
    } else {
        if (input[3] < 10242000) {
            var264 = 2912888;
        } else {
            var264 = -3238184;
        }
    }
    long var265;
    if (input[3] < -37483800) {
        if (input[2] < 987556400) {
            var265 = -3305235;
        } else {
            var265 = 4201301;
        }
    } else {
        if (input[3] < -32910800) {
            var265 = 5589884;
        } else {
            var265 = 52321;
        }
    }
    long var266;
    if (input[5] < -54454800) {
        if (input[5] < -70121000) {
            var266 = 3537856;
        } else {
            var266 = -5965711;
        }
    } else {
        if (input[4] < 62604300) {
            var266 = 21499;
        } else {
            var266 = 4117483;
        }
    }
    long var267;
    if (input[4] < -57218800) {
        if (input[0] < -65443900) {
            var267 = 8073362;
        } else {
            var267 = -948549;
        }
    } else {
        if (input[4] < -47257600) {
            var267 = -6489067;
        } else {
            var267 = 96073;
        }
    }
    long var268;
    if (input[1] < 309840700) {
        if (input[0] < -42047600) {
            var268 = 233525;
        } else {
            var268 = -960849;
        }
    } else {
        var268 = 5714397;
    }
    long var269;
    if (input[1] < 42721200) {
        if (input[2] < 1130179800) {
            var269 = 6587417;
        } else {
            var269 = -4097774;
        }
    } else {
        if (input[1] < 64845200) {
            var269 = -3724710;
        } else {
            var269 = 185681;
        }
    }
    long var270;
    if (input[0] < 40984800) {
        if (input[0] < 22647900) {
            var270 = 57115;
        } else {
            var270 = -3492258;
        }
    } else {
        var270 = 5631055;
    }
    long var271;
    if (input[0] < -6077400) {
        if (input[0] < -14714400) {
            var271 = 25361;
        } else {
            var271 = -5462855;
        }
    } else {
        if (input[2] < 1024469600) {
            var271 = 4728278;
        } else {
            var271 = -7069430;
        }
    }
    long var272;
    if (input[5] < 74319000) {
        if (input[3] < -37483800) {
            var272 = -1862604;
        } else {
            var272 = 141351;
        }
    } else {
        if (input[0] < -57315800) {
            var272 = 6662340;
        } else {
            var272 = 95384;
        }
    }
    long var273;
    if (input[0] < -107536400) {
        if (input[5] < 2262300) {
            var273 = -5919932;
        } else {
            var273 = 3087355;
        }
    } else {
        if (input[1] < 5688200) {
            var273 = 7149462;
        } else {
            var273 = -3820;
        }
    }
    long var274;
    if (input[1] < -69665100) {
        if (input[4] < -1971800) {
            var274 = 6387961;
        } else {
            var274 = -14006005;
        }
    } else {
        if (input[1] < 38769400) {
            var274 = 2224833;
        } else {
            var274 = -97698;
        }
    }
    long var275;
    if (input[3] < 86608400) {
        if (input[1] < 282821900) {
            var275 = -23537;
        } else {
            var275 = 5742488;
        }
    } else {
        if (input[0] < -63602700) {
            var275 = 5744465;
        } else {
            var275 = -12873176;
        }
    }
    long var276;
    if (input[4] < -57218800) {
        if (input[0] < -65443900) {
            var276 = 7869545;
        } else {
            var276 = -811652;
        }
    } else {
        if (input[4] < -54433900) {
            var276 = -9975221;
        } else {
            var276 = 33633;
        }
    }
    long var277;
    if (input[2] < 756990800) {
        if (input[0] < -107536400) {
            var277 = -11158048;
        } else {
            var277 = 3165730;
        }
    } else {
        if (input[2] < 771705200) {
            var277 = -6803348;
        } else {
            var277 = 4113;
        }
    }
    long var278;
    if (input[4] < 17498500) {
        if (input[4] < 9877200) {
            var278 = -114294;
        } else {
            var278 = 3815624;
        }
    } else {
        if (input[0] < -78047700) {
            var278 = 4117829;
        } else {
            var278 = -2625257;
        }
    }
    long var279;
    if (input[1] < 110485200) {
        if (input[1] < 105111400) {
            var279 = 369809;
        } else {
            var279 = -7981950;
        }
    } else {
        if (input[0] < -82298900) {
            var279 = 3176671;
        } else {
            var279 = -452222;
        }
    }
    long var280;
    if (input[0] < -107536400) {
        if (input[3] < 2313400) {
            var280 = -4651446;
        } else {
            var280 = 4127204;
        }
    } else {
        if (input[1] < 5688200) {
            var280 = 6842869;
        } else {
            var280 = 21780;
        }
    }
    long var281;
    if (input[3] < -1093500) {
        if (input[2] < 1272653500) {
            var281 = 862542;
        } else {
            var281 = -11226978;
        }
    } else {
        if (input[2] < 1234438000) {
            var281 = -711219;
        } else {
            var281 = 5945427;
        }
    }
    long var282;
    if (input[1] < -69665100) {
        if (input[0] < -91235300) {
            var282 = -9026256;
        } else {
            var282 = 1328682;
        }
    } else {
        if (input[5] < 42935600) {
            var282 = -73235;
        } else {
            var282 = 2305984;
        }
    }
    long var283;
    if (input[1] < 82733000) {
        if (input[3] < -5214000) {
            var283 = 5370048;
        } else {
            var283 = -2777450;
        }
    } else {
        if (input[1] < 97252800) {
            var283 = 4259862;
        } else {
            var283 = -99945;
        }
    }
    long var284;
    if (input[3] < -48871400) {
        if (input[2] < 840382400) {
            var284 = 5698657;
        } else {
            var284 = -2915424;
        }
    } else {
        if (input[1] < 115425000) {
            var284 = -673137;
        } else {
            var284 = 604275;
        }
    }
    long var285;
    if (input[1] < 179252200) {
        if (input[0] < -47406400) {
            var285 = 1012965;
        } else {
            var285 = -1973389;
        }
    } else {
        if (input[0] < -76760400) {
            var285 = 5467547;
        } else {
            var285 = -2788771;
        }
    }
    long var286;
    if (input[0] < -54022700) {
        if (input[1] < 178189500) {
            var286 = 678016;
        } else {
            var286 = -3592916;
        }
    } else {
        if (input[1] < 165825200) {
            var286 = -1319803;
        } else {
            var286 = 4000302;
        }
    }
    long var287;
    if (input[0] < -107536400) {
        if (input[5] < 2262300) {
            var287 = -5265651;
        } else {
            var287 = 2594960;
        }
    } else {
        if (input[1] < 5688200) {
            var287 = 6675031;
        } else {
            var287 = 33782;
        }
    }
    long var288;
    if (input[1] < -69665100) {
        if (input[3] < 2313400) {
            var288 = -13272132;
        } else {
            var288 = 6189351;
        }
    } else {
        if (input[1] < 38769400) {
            var288 = 2053258;
        } else {
            var288 = -85159;
        }
    }
    long var289;
    if (input[0] < -107536400) {
        if (input[3] < 4878400) {
            var289 = -3862050;
        } else {
            var289 = 4320297;
        }
    } else {
        if (input[1] < 5688200) {
            var289 = 6391690;
        } else {
            var289 = 32905;
        }
    }
    long var290;
    if (input[1] < -69665100) {
        if (input[0] < -94513500) {
            var290 = -8466981;
        } else {
            var290 = 1167382;
        }
    } else {
        if (input[0] < -6077400) {
            var290 = -83203;
        } else {
            var290 = 1998675;
        }
    }
    long var291;
    if (input[3] < 86608400) {
        if (input[0] < 29743100) {
            var291 = -23910;
        } else {
            var291 = 5695870;
        }
    } else {
        if (input[5] < 24177300) {
            var291 = 1680134;
        } else {
            var291 = -8958305;
        }
    }
    long var292;
    if (input[4] < 17498500) {
        if (input[4] < 10580300) {
            var292 = -57899;
        } else {
            var292 = 3822254;
        }
    } else {
        if (input[2] < 827718800) {
            var292 = 7245108;
        } else {
            var292 = -1944798;
        }
    }
    long var293;
    if (input[2] < 661115200) {
        if (input[4] < -3529600) {
            var293 = 5679789;
        } else {
            var293 = -10332202;
        }
    } else {
        if (input[2] < 696516600) {
            var293 = 6258293;
        } else {
            var293 = -32491;
        }
    }
    long var294;
    if (input[2] < 1335313200) {
        if (input[1] < -69665100) {
            var294 = -8702400;
        } else {
            var294 = 13342;
        }
    } else {
        if (input[5] < -429400) {
            var294 = -4320249;
        } else {
            var294 = 8293682;
        }
    }
    long var295;
    if (input[5] < 18378800) {
        if (input[0] < -104348000) {
            var295 = -2583714;
        } else {
            var295 = 620234;
        }
    } else {
        if (input[3] < 11582100) {
            var295 = 1102618;
        } else {
            var295 = -4272163;
        }
    }
    long var296;
    if (input[3] < 36459600) {
        if (input[3] < 33106000) {
            var296 = 67995;
        } else {
            var296 = -7476184;
        }
    } else {
        if (input[5] < -19873600) {
            var296 = 7926083;
        } else {
            var296 = -227476;
        }
    }
    long var297;
    if (input[5] < -54454800) {
        if (input[3] < 27005900) {
            var297 = -4839700;
        } else {
            var297 = 4529743;
        }
    } else {
        if (input[4] < 62604300) {
            var297 = 9363;
        } else {
            var297 = 4018154;
        }
    }
    long var298;
    if (input[1] < 309840700) {
        if (input[0] < -42047600) {
            var298 = 217805;
        } else {
            var298 = -911016;
        }
    } else {
        var298 = 5431538;
    }
    long var299;
    if (input[4] < -57218800) {
        if (input[0] < -65443900) {
            var299 = 7661865;
        } else {
            var299 = -712093;
        }
    } else {
        if (input[4] < -54433900) {
            var299 = -9104963;
        } else {
            var299 = 31756;
        }
    }
    long var300;
    if (input[2] < 1335313200) {
        if (input[1] < -69665100) {
            var300 = -7713188;
        } else {
            var300 = 8606;
        }
    } else {
        if (input[5] < -429400) {
            var300 = -3843030;
        } else {
            var300 = 8124470;
        }
    }
    long var301;
    if (input[0] < 40984800) {
        if (input[0] < 19684100) {
            var301 = 64006;
        } else {
            var301 = -3274287;
        }
    } else {
        var301 = 5308735;
    }
    long var302;
    if (input[1] < 309840700) {
        if (input[1] < 179252200) {
            var302 = 229640;
        } else {
            var302 = -773143;
        }
    } else {
        var302 = 5302937;
    }
    long var303;
    if (input[2] < 963531300) {
        if (input[5] < 29100200) {
            var303 = -347;
        } else {
            var303 = 4411273;
        }
    } else {
        if (input[1] < 110485200) {
            var303 = -1488214;
        } else {
            var303 = 556062;
        }
    }
    long var304;
    if (input[5] < 18378800) {
        if (input[5] < 6892900) {
            var304 = -225461;
        } else {
            var304 = 2640076;
        }
    } else {
        if (input[3] < 11582100) {
            var304 = 925355;
        } else {
            var304 = -3801991;
        }
    }
    long var305;
    if (input[3] < 35694500) {
        if (input[3] < 33106000) {
            var305 = 55907;
        } else {
            var305 = -7432726;
        }
    } else {
        if (input[5] < -19873600) {
            var305 = 7772390;
        } else {
            var305 = -156515;
        }
    }
    long var306;
    if (input[2] < 987556400) {
        if (input[2] < 983410000) {
            var306 = 143411;
        } else {
            var306 = -5555250;
        }
    } else {
        if (input[0] < -86310500) {
            var306 = -2975117;
        } else {
            var306 = 2027926;
        }
    }
    long var307;
    if (input[2] < 1234438000) {
        if (input[2] < 1203946400) {
            var307 = 27996;
        } else {
            var307 = -5061966;
        }
    } else {
        if (input[3] < -426000) {
            var307 = -5637637;
        } else {
            var307 = 7211095;
        }
    }
    long var308;
    if (input[3] < -88958400) {
        if (input[5] < -30979700) {
            var308 = 3761397;
        } else {
            var308 = -6866964;
        }
    } else {
        if (input[0] < -42047600) {
            var308 = 283016;
        } else {
            var308 = -770702;
        }
    }
    long var309;
    if (input[4] < -57218800) {
        if (input[0] < -65443900) {
            var309 = 7482431;
        } else {
            var309 = -633769;
        }
    } else {
        if (input[4] < -47257600) {
            var309 = -5197155;
        } else {
            var309 = 73496;
        }
    }
    long var310;
    if (input[3] < 86608400) {
        if (input[0] < 29743100) {
            var310 = -27941;
        } else {
            var310 = 5561092;
        }
    } else {
        if (input[5] < 27955900) {
            var310 = 1932845;
        } else {
            var310 = -8493433;
        }
    }
    long var311;
    if (input[3] < 35694500) {
        if (input[3] < 33106000) {
            var311 = 45687;
        } else {
            var311 = -6537661;
        }
    } else {
        if (input[5] < -19873600) {
            var311 = 7528448;
        } else {
            var311 = -120837;
        }
    }
    long var312;
    if (input[1] < 219758000) {
        if (input[1] < 216360100) {
            var312 = -42665;
        } else {
            var312 = -8233400;
        }
    } else {
        if (input[1] < 233469500) {
            var312 = 8000998;
        } else {
            var312 = -246149;
        }
    }
    long var313;
    if (input[5] < 74319000) {
        if (input[3] < -37483800) {
            var313 = -1631155;
        } else {
            var313 = 119883;
        }
    } else {
        if (input[0] < -57315800) {
            var313 = 6270828;
        } else {
            var313 = 4908;
        }
    }
    long var314;
    if (input[1] < 309840700) {
        if (input[1] < 179252200) {
            var314 = 221278;
        } else {
            var314 = -743397;
        }
    } else {
        var314 = 5180315;
    }
    long var315;
    if (input[1] < 208546300) {
        if (input[1] < 179252200) {
            var315 = 199518;
        } else {
            var315 = -1268170;
        }
    } else {
        if (input[0] < 26644600) {
            var315 = 2198073;
        } else {
            var315 = -7148654;
        }
    }
    long var316;
    if (input[2] < 661115200) {
        if (input[1] < 172172000) {
            var316 = -11638683;
        } else {
            var316 = 3592178;
        }
    } else {
        if (input[2] < 696516600) {
            var316 = 6089801;
        } else {
            var316 = -37121;
        }
    }
    long var317;
    if (input[4] < 58265400) {
        if (input[0] < 29743100) {
            var317 = -6980;
        } else {
            var317 = 5409722;
        }
    } else {
        if (input[4] < 62604300) {
            var317 = -16243257;
        } else {
            var317 = 2692362;
        }
    }
    long var318;
    if (input[2] < 963531300) {
        if (input[0] < -55774000) {
            var318 = -771495;
        } else {
            var318 = 2032667;
        }
    } else {
        if (input[0] < -65443900) {
            var318 = 891018;
        } else {
            var318 = -1176796;
        }
    }
    long var319;
    if (input[2] < 985385900) {
        if (input[2] < 983410000) {
            var319 = 117703;
        } else {
            var319 = -8035309;
        }
    } else {
        if (input[4] < 9877200) {
            var319 = -657649;
        } else {
            var319 = 4527115;
        }
    }
    long var320;
    if (input[4] < 16787100) {
        if (input[4] < 10580300) {
            var320 = -40092;
        } else {
            var320 = 3889055;
        }
    } else {
        if (input[1] < 172172000) {
            var320 = 1279172;
        } else {
            var320 = -5210572;
        }
    }
    long var321;
    if (input[4] < -57218800) {
        if (input[0] < -65443900) {
            var321 = 7296261;
        } else {
            var321 = -364473;
        }
    } else {
        if (input[4] < -54433900) {
            var321 = -7500875;
        } else {
            var321 = 19000;
        }
    }
    long var322;
    if (input[4] < 14873500) {
        if (input[4] < 10580300) {
            var322 = -35792;
        } else {
            var322 = 5439209;
        }
    } else {
        if (input[2] < 985385900) {
            var322 = -2850288;
        } else {
            var322 = 3327601;
        }
    }
    long var323;
    if (input[1] < 64845200) {
        if (input[0] < -50759400) {
            var323 = -3139970;
        } else {
            var323 = 3445323;
        }
    } else {
        if (input[0] < -47406400) {
            var323 = 671203;
        } else {
            var323 = -1165082;
        }
    }
    long var324;
    if (input[5] < -11167200) {
        if (input[5] < -15002800) {
            var324 = 596380;
        } else {
            var324 = -7013156;
        }
    } else {
        if (input[5] < -7433400) {
            var324 = 5898656;
        } else {
            var324 = -110071;
        }
    }
    long var325;
    if (input[5] < -54454800) {
        if (input[1] < 174237700) {
            var325 = -5734350;
        } else {
            var325 = 2995926;
        }
    } else {
        if (input[5] < -33696700) {
            var325 = 1910728;
        } else {
            var325 = -62462;
        }
    }
    long var326;
    if (input[5] < 74319000) {
        if (input[3] < -48871400) {
            var326 = -1736982;
        } else {
            var326 = 89234;
        }
    } else {
        if (input[0] < -57315800) {
            var326 = 6039126;
        } else {
            var326 = 167214;
        }
    }
    long var327;
    if (input[3] < -1093500) {
        if (input[2] < 1272653500) {
            var327 = 747100;
        } else {
            var327 = -8792272;
        }
    } else {
        if (input[3] < 160500) {
            var327 = -4654370;
        } else {
            var327 = 115686;
        }
    }
    long var328;
    if (input[2] < 1234438000) {
        if (input[1] < 35581000) {
            var328 = 3136811;
        } else {
            var328 = -248445;
        }
    } else {
        if (input[3] < -426000) {
            var328 = -4328371;
        } else {
            var328 = 6959090;
        }
    }
    long var329;
    if (input[2] < 1309491900) {
        if (input[1] < -69665100) {
            var329 = -7329962;
        } else {
            var329 = -2182;
        }
    } else {
        if (input[5] < 1089700) {
            var329 = -4029972;
        } else {
            var329 = 8871513;
        }
    }
    long var330;
    if (input[4] < -57218800) {
        if (input[0] < -65443900) {
            var330 = 7109100;
        } else {
            var330 = -316448;
        }
    } else {
        if (input[4] < -47257600) {
            var330 = -4262435;
        } else {
            var330 = 58836;
        }
    }
    long var331;
    if (input[1] < 64845200) {
        if (input[4] < -11556400) {
            var331 = 4716637;
        } else {
            var331 = -2441435;
        }
    } else {
        if (input[1] < 103090600) {
            var331 = 1963325;
        } else {
            var331 = -180377;
        }
    }
    long var332;
    if (input[1] < 122654900) {
        if (input[2] < 969923000) {
            var332 = 2604732;
        } else {
            var332 = -1696198;
        }
    } else {
        if (input[2] < 971809100) {
            var332 = -793640;
        } else {
            var332 = 2300712;
        }
    }
    long var333;
    if (input[2] < 1234438000) {
        if (input[1] < 35581000) {
            var333 = 3111808;
        } else {
            var333 = -236819;
        }
    } else {
        if (input[1] < -11062000) {
            var333 = -6102583;
        } else {
            var333 = 5285708;
        }
    }
    long var334;
    if (input[2] < 963531300) {
        if (input[3] < 4199700) {
            var334 = -597324;
        } else {
            var334 = 2330377;
        }
    } else {
        if (input[5] < -29515500) {
            var334 = -3287460;
        } else {
            var334 = 54933;
        }
    }
    long var335;
    if (input[3] < -1093500) {
        if (input[2] < 1272653500) {
            var335 = 736387;
        } else {
            var335 = -7403500;
        }
    } else {
        if (input[2] < 1234438000) {
            var335 = -589150;
        } else {
            var335 = 5413115;
        }
    }
    long var336;
    if (input[0] < -42047600) {
        if (input[0] < -54022700) {
            var336 = -265984;
        } else {
            var336 = 2054637;
        }
    } else {
        if (input[1] < 137549000) {
            var336 = -3575946;
        } else {
            var336 = 1761999;
        }
    }
    long var337;
    if (input[5] < 18378800) {
        if (input[5] < 6892900) {
            var337 = -194018;
        } else {
            var337 = 2397206;
        }
    } else {
        if (input[0] < -92522600) {
            var337 = 4038062;
        } else {
            var337 = -1763342;
        }
    }
    long var338;
    if (input[3] < 86608400) {
        if (input[3] < 57995000) {
            var338 = -43221;
        } else {
            var338 = 4019151;
        }
    } else {
        if (input[2] < 953367500) {
            var338 = -9042160;
        } else {
            var338 = 2410116;
        }
    }
    long var339;
    if (input[4] < 58265400) {
        if (input[0] < 29743100) {
            var339 = -511;
        } else {
            var339 = 5236421;
        }
    } else {
        if (input[4] < 62604300) {
            var339 = -14294045;
        } else {
            var339 = 2463993;
        }
    }
    long var340;
    if (input[5] < 559200) {
        if (input[0] < -87792400) {
            var340 = -3115886;
        } else {
            var340 = 1184442;
        }
    } else {
        if (input[0] < -87792400) {
            var340 = 2644256;
        } else {
            var340 = -1123645;
        }
    }
    long var341;
    if (input[4] < 13493500) {
        if (input[4] < 11151500) {
            var341 = -12332;
        } else {
            var341 = 8207812;
        }
    } else {
        if (input[2] < 985385900) {
            var341 = -2690339;
        } else {
            var341 = 3378354;
        }
    }
    long var342;
    if (input[5] < 74319000) {
        if (input[3] < -48871400) {
            var342 = -1568434;
        } else {
            var342 = 82121;
        }
    } else {
        if (input[1] < 113943100) {
            var342 = 255581;
        } else {
            var342 = 5952491;
        }
    }
    long var343;
    if (input[3] < -1093500) {
        if (input[1] < -11062000) {
            var343 = -7100456;
        } else {
            var343 = 711669;
        }
    } else {
        if (input[3] < 160500) {
            var343 = -3996414;
        } else {
            var343 = 69756;
        }
    }
    long var344;
    if (input[1] < 49532000) {
        if (input[2] < 1130179800) {
            var344 = 4586088;
        } else {
            var344 = -2654986;
        }
    } else {
        if (input[1] < 53079600) {
            var344 = -7530221;
        } else {
            var344 = 21812;
        }
    }
    long var345;
    if (input[2] < 1309491900) {
        if (input[1] < -69665100) {
            var345 = -6267180;
        } else {
            var345 = -8862;
        }
    } else {
        if (input[5] < 1089700) {
            var345 = -3254538;
        } else {
            var345 = 8718593;
        }
    }
    long var346;
    if (input[2] < 1234438000) {
        if (input[1] < 35581000) {
            var346 = 2876825;
        } else {
            var346 = -219366;
        }
    } else {
        if (input[3] < -426000) {
            var346 = -3191406;
        } else {
            var346 = 6392607;
        }
    }
    long var347;
    if (input[2] < 963531300) {
        if (input[5] < 29100200) {
            var347 = -45195;
        } else {
            var347 = 4320488;
        }
    } else {
        if (input[3] < 23273900) {
            var347 = 183658;
        } else {
            var347 = -2495175;
        }
    }
    long var348;
    if (input[2] < 661115200) {
        if (input[4] < -3529600) {
            var348 = 5537915;
        } else {
            var348 = -8635647;
        }
    } else {
        if (input[2] < 696516600) {
            var348 = 5905066;
        } else {
            var348 = -31878;
        }
    }
    long var349;
    if (input[3] < 35694500) {
        if (input[3] < 33106000) {
            var349 = 47810;
        } else {
            var349 = -5925319;
        }
    } else {
        if (input[0] < -59246800) {
            var349 = -1187732;
        } else {
            var349 = 4692799;
        }
    }
    long var350;
    if (input[5] < 559200) {
        if (input[0] < -18546400) {
            var350 = -70544;
        } else {
            var350 = 5774781;
        }
    } else {
        if (input[0] < -87792400) {
            var350 = 2421530;
        } else {
            var350 = -1040190;
        }
    }
    long var351;
    if (input[0] < 18217100) {
        if (input[0] < 3562600) {
            var351 = -51480;
        } else {
            var351 = 6088221;
        }
    } else {
        if (input[4] < -3194600) {
            var351 = 6563174;
        } else {
            var351 = -9104494;
        }
    }
    long var352;
    if (input[0] < -42047600) {
        if (input[1] < 184446400) {
            var352 = 640599;
        } else {
            var352 = -1661216;
        }
    } else {
        if (input[4] < 5195300) {
            var352 = -2354651;
        } else {
            var352 = 3413804;
        }
    }
    long var353;
    if (input[4] < 13493500) {
        if (input[4] < 11151500) {
            var353 = 6626;
        } else {
            var353 = 7977095;
        }
    } else {
        if (input[0] < -39772300) {
            var353 = -2005492;
        } else {
            var353 = 4908386;
        }
    }
    long var354;
    if (input[0] < -42047600) {
        if (input[0] < -54022700) {
            var354 = -219360;
        } else {
            var354 = 1949946;
        }
    } else {
        if (input[1] < 137549000) {
            var354 = -3256386;
        } else {
            var354 = 1542262;
        }
    }
    float var355;
    var355 = sigmoid(var0 + var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21 + var22 + var23 + var24 + var25 + var26 + var27 + var28 + var29 + var30 + var31 + var32 + var33 + var34 + var35 + var36 + var37 + var38 + var39 + var40 + var41 + var42 + var43 + var44 + var45 + var46 + var47 + var48 + var49 + var50 + var51 + var52 + var53 + var54 + var55 + var56 + var57 + var58 + var59 + var60 + var61 + var62 + var63 + var64 + var65 + var66 + var67 + var68 + var69 + var70 + var71 + var72 + var73 + var74 + var75 + var76 + var77 + var78 + var79 + var80 + var81 + var82 + var83 + var84 + var85 + var86 + var87 + var88 + var89 + var90 + var91 + var92 + var93 + var94 + var95 + var96 + var97 + var98 + var99 + var100 + var101 + var102 + var103 + var104 + var105 + var106 + var107 + var108 + var109 + var110 + var111 + var112 + var113 + var114 + var115 + var116 + var117 + var118 + var119 + var120 + var121 + var122 + var123 + var124 + var125 + var126 + var127 + var128 + var129 + var130 + var131 + var132 + var133 + var134 + var135 + var136 + var137 + var138 + var139 + var140 + var141 + var142 + var143 + var144 + var145 + var146 + var147 + var148 + var149 + var150 + var151 + var152 + var153 + var154 + var155 + var156 + var157 + var158 + var159 + var160 + var161 + var162 + var163 + var164 + var165 + var166 + var167 + var168 + var169 + var170 + var171 + var172 + var173 + var174 + var175 + var176 + var177 + var178 + var179 + var180 + var181 + var182 + var183 + var184 + var185 + var186 + var187 + var188 + var189 + var190 + var191 + var192 + var193 + var194 + var195 + var196 + var197 + var198 + var199 + var200 + var201 + var202 + var203 + var204 + var205 + var206 + var207 + var208 + var209 + var210 + var211 + var212 + var213 + var214 + var215 + var216 + var217 + var218 + var219 + var220 + var221 + var222 + var223 + var224 + var225 + var226 + var227 + var228 + var229 + var230 + var231 + var232 + var233 + var234 + var235 + var236 + var237 + var238 + var239 + var240 + var241 + var242 + var243 + var244 + var245 + var246 + var247 + var248 + var249 + var250 + var251 + var252 + var253 + var254 + var255 + var256 + var257 + var258 + var259 + var260 + var261 + var262 + var263 + var264 + var265 + var266 + var267 + var268 + var269 + var270 + var271 + var272 + var273 + var274 + var275 + var276 + var277 + var278 + var279 + var280 + var281 + var282 + var283 + var284 + var285 + var286 + var287 + var288 + var289 + var290 + var291 + var292 + var293 + var294 + var295 + var296 + var297 + var298 + var299 + var300 + var301 + var302 + var303 + var304 + var305 + var306 + var307 + var308 + var309 + var310 + var311 + var312 + var313 + var314 + var315 + var316 + var317 + var318 + var319 + var320 + var321 + var322 + var323 + var324 + var325 + var326 + var327 + var328 + var329 + var330 + var331 + var332 + var333 + var334 + var335 + var336 + var337 + var338 + var339 + var340 + var341 + var342 + var343 + var344 + var345 + var346 + var347 + var348 + var349 + var350 + var351 + var352 + var353 + var354);
    float probas[2] = {1 - var355, var355};
    memcpy(output, probas, 2 * sizeof(double));
}
