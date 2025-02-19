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
    if (input[0] >= -0.3945045) {
        var0 = 0.19834656;
    } else {
        if (input[1] >= 1.992432) {
            var0 = 0.19794671;
        } else {
            var0 = 0.15618877;
        }
    }
    double var1;
    if (input[0] >= -0.3945045) {
        var1 = 0.18034282;
    } else {
        if (input[1] >= 1.992432) {
            var1 = 0.17998566;
        } else {
            var1 = 0.1414784;
        }
    }
    double var2;
    if (input[0] >= -0.3945045) {
        var2 = 0.16676961;
    } else {
        if (input[1] >= 1.992432) {
            var2 = 0.16643216;
        } else {
            var2 = 0.12949839;
        }
    }
    double var3;
    if (input[0] >= -0.3945045) {
        var3 = 0.15618809;
    } else {
        if (input[1] >= 1.992432) {
            var3 = 0.15585618;
        } else {
            var3 = 0.11944091;
        }
    }
    double var4;
    if (input[0] >= -0.3945045) {
        var4 = 0.14772397;
    } else {
        if (input[1] >= 1.992432) {
            var4 = 0.14738794;
        } else {
            var4 = 0.11078324;
        }
    }
    double var5;
    if (input[0] >= -0.3945045) {
        var5 = 0.14081348;
    } else {
        if (input[1] >= 1.992432) {
            var5 = 0.14046612;
        } else {
            var5 = 0.10317277;
        }
    }
    double var6;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var6 = 0.13625185;
        } else {
            var6 = 0.13054359;
        }
    } else {
        if (input[1] >= 1.992432) {
            var6 = 0.13471098;
        } else {
            var6 = 0.096363954;
        }
    }
    double var7;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.23793) {
            var7 = 0.13110416;
        } else {
            var7 = 0.12373304;
        }
    } else {
        if (input[1] >= 2.066228) {
            var7 = 0.13070358;
        } else {
            var7 = 0.09103186;
        }
    }
    double var8;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var8 = 0.12740889;
        } else {
            var8 = 0.12120463;
        }
    } else {
        if (input[1] >= 1.992432) {
            var8 = 0.12573323;
        } else {
            var8 = 0.08444588;
        }
    }
    double var9;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var9 = 0.123930275;
        } else {
            var9 = 0.11739083;
        }
    } else {
        if (input[1] >= 2.010619) {
            var9 = 0.1224035;
        } else {
            var9 = 0.07942098;
        }
    }
    double var10;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.23793) {
            var10 = 0.12050219;
        } else {
            var10 = 0.11181895;
        }
    } else {
        if (input[1] >= 2.066228) {
            var10 = 0.1200155;
        } else {
            var10 = 0.07511094;
        }
    }
    double var11;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var11 = 0.11831873;
        } else {
            var11 = 0.110844724;
        }
    } else {
        if (input[1] >= 1.992432) {
            var11 = 0.116274334;
        } else {
            var11 = 0.06951874;
        }
    }
    double var12;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var12 = 0.11602322;
        } else {
            var12 = 0.10800717;
        }
    } else {
        if (input[1] >= 2.066228) {
            var12 = 0.114950255;
        } else {
            var12 = 0.066027306;
        }
    }
    double var13;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var13 = 0.11399541;
        } else {
            var13 = 0.105368555;
        }
    } else {
        if (input[1] >= 2.066228) {
            var13 = 0.11281891;
        } else {
            var13 = 0.06184814;
        }
    }
    double var14;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var14 = 0.11219156;
        } else {
            var14 = 0.1028849;
        }
    } else {
        if (input[1] >= 2.066228) {
            var14 = 0.11090108;
        } else {
            var14 = 0.057867456;
        }
    }
    double var15;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.23793) {
            var15 = 0.10994681;
        } else {
            var15 = 0.09742293;
        }
    } else {
        if (input[1] >= 1.992432) {
            var15 = 0.107790664;
        } else {
            var15 = 0.053013932;
        }
    }
    double var16;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var16 = 0.10912615;
        } else {
            var16 = 0.09819256;
        }
    } else {
        if (input[1] >= 2.066228) {
            var16 = 0.107584454;
        } else {
            var16 = 0.050397456;
        }
    }
    double var17;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var17 = 0.10780084;
        } else {
            var17 = 0.09597623;
        }
    } else {
        if (input[1] >= 2.0804486) {
            var17 = 0.106380045;
        } else {
            var17 = 0.04711245;
        }
    }
    double var18;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var18 = 0.10658723;
        } else {
            var18 = 0.09379777;
        }
    } else {
        if (input[1] >= 2.0804486) {
            var18 = 0.10502281;
        } else {
            var18 = 0.043821704;
        }
    }
    double var19;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var19 = 0.1054668;
        } else {
            var19 = 0.09163791;
        }
    } else {
        if (input[1] >= 2.066228) {
            var19 = 0.1034367;
        } else {
            var19 = 0.04051217;
        }
    }
    double var20;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var20 = 0.10442344;
        } else {
            var20 = 0.089480154;
        }
    } else {
        if (input[1] >= 2.0804486) {
            var20 = 0.102536716;
        } else {
            var20 = 0.03770986;
        }
    }
    double var21;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var21 = 0.10344293;
        } else {
            var21 = 0.0873105;
        }
    } else {
        if (input[1] >= 2.0804486) {
            var21 = 0.10137184;
        } else {
            var21 = 0.034895495;
        }
    }
    double var22;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var22 = 0.10251266;
        } else {
            var22 = 0.08511723;
        }
    } else {
        if (input[1] >= 1.992432) {
            var22 = 0.09752759;
        } else {
            var22 = 0.030861286;
        }
    }
    double var23;
    if (input[0] >= -0.3945045) {
        if (input[0] >= -0.12671149) {
            var23 = 0.10162121;
        } else {
            var23 = 0.08289068;
        }
    } else {
        if (input[1] >= 2.0804486) {
            var23 = 0.099163644;
        } else {
            var23 = 0.029641906;
        }
    }
    double var24;
    if (input[0] >= -0.2897225) {
        if (input[0] >= -0.0660875) {
            var24 = 0.10134412;
        } else {
            var24 = 0.08697241;
        }
    } else {
        if (input[1] >= 1.992432) {
            var24 = 0.09718463;
        } else {
            var24 = 0.024693703;
        }
    }
    double var25;
    if (input[0] >= -0.2897225) {
        if (input[0] >= -0.0660875) {
            var25 = 0.10055192;
        } else {
            var25 = 0.08502161;
        }
    } else {
        if (input[1] >= 2.0804486) {
            var25 = 0.09882689;
        } else {
            var25 = 0.024049206;
        }
    }
    double var26;
    if (input[0] >= -0.2897225) {
        if (input[0] >= -0.0660875) {
            var26 = 0.09977483;
        } else {
            var26 = 0.083021015;
        }
    } else {
        if (input[1] >= 2.010619) {
            var26 = 0.095468;
        } else {
            var26 = 0.020969715;
        }
    }
    double var27;
    if (input[0] >= -0.2897225) {
        if (input[0] >= -0.0660875) {
            var27 = 0.09900482;
        } else {
            var27 = 0.08096478;
        }
    } else {
        if (input[1] >= 2.0804486) {
            var27 = 0.09687478;
        } else {
            var27 = 0.020128516;
        }
    }
    double var28;
    if (input[0] >= -0.2651735) {
        if (input[0] >= 0.2916685) {
            var28 = 0.10200417;
        } else {
            var28 = 0.087099664;
        }
    } else {
        if (input[1] >= 2.0804486) {
            var28 = 0.09629055;
        } else {
            var28 = 0.018223949;
        }
    }
    double var29;
    if (input[0] >= -0.2651735) {
        if (input[0] >= 0.2916685) {
            var29 = 0.10157495;
        } else {
            var29 = 0.08542546;
        }
    } else {
        if (input[1] >= 2.0804486) {
            var29 = 0.09529309;
        } else {
            var29 = 0.01664568;
        }
    }
    double var30;
    if (input[0] >= -0.249456) {
        if (input[0] >= 0.2916685) {
            var30 = 0.101164855;
        } else {
            var30 = 0.08440494;
        }
    } else {
        if (input[1] >= 1.992432) {
            var30 = 0.09076279;
        } else {
            var30 = 0.01345055;
        }
    }
    double var31;
    if (input[0] >= -0.23793) {
        if (input[0] >= 0.2916685) {
            var31 = 0.10076942;
        } else {
            var31 = 0.08316692;
        }
    } else {
        if (input[2] >= 10.327848) {
            var31 = 0.08131534;
        } else {
            var31 = 0.0068003074;
        }
    }
    double var32;
    if (input[1] >= 1.992432) {
        if (input[1] >= 2.0801492) {
            var32 = 0.09522916;
        } else {
            var32 = 0.06218427;
        }
    } else {
        if (input[0] >= -0.1338965) {
            var32 = 0.09090538;
        } else {
            var32 = 0.009389576;
        }
    }
    double var33;
    if (input[1] >= 1.992432) {
        if (input[1] >= 2.0801492) {
            var33 = 0.094321825;
        } else {
            var33 = 0.05955216;
        }
    } else {
        if (input[0] >= -0.1338965) {
            var33 = 0.08969641;
        } else {
            var33 = 0.0085179405;
        }
    }
    double var34;
    if (input[1] >= 2.0801492) {
        if (input[3] >= 0.862393) {
            var34 = 0.0012476494;
        } else {
            var34 = 0.09373661;
        }
    } else {
        if (input[0] >= -0.1266365) {
            var34 = 0.08850261;
        } else {
            var34 = 0.0089284545;
        }
    }
    double var35;
    if (input[1] >= 2.0801492) {
        if (input[3] >= 0.862393) {
            var35 = 0.0011858618;
        } else {
            var35 = 0.09277608;
        }
    } else {
        if (input[2] >= 10.327848) {
            var35 = 0.074106105;
        } else {
            var35 = 0.0016717945;
        }
    }
    double var36;
    if (input[0] >= -0.23793) {
        if (input[0] >= 0.2916685) {
            var36 = 0.09917214;
        } else {
            var36 = 0.073112756;
        }
    } else {
        if (input[2] >= 10.327848) {
            var36 = 0.07303708;
        } else {
            var36 = -0.0042485963;
        }
    }
    double var37;
    if (input[1] >= 2.0801492) {
        if (input[1] >= 2.745216) {
            var37 = 0.098240204;
        } else {
            var37 = 0.07881986;
        }
    } else {
        if (input[2] >= 9.114771) {
            var37 = -0.0028617366;
        } else {
            var37 = 0.07135744;
        }
    }
    double var38;
    if (input[0] >= -0.23793) {
        if (input[0] >= 0.2916685) {
            var38 = 0.098597385;
        } else {
            var38 = 0.06867113;
        }
    } else {
        if (input[2] >= 10.356064) {
            var38 = 0.070010625;
        } else {
            var38 = -0.0076249014;
        }
    }
    double var39;
    if (input[1] >= 2.0801492) {
        if (input[1] >= 2.745216) {
            var39 = 0.09750335;
        } else {
            var39 = 0.075672016;
        }
    } else {
        if (input[2] >= 9.114771) {
            var39 = -0.0063513904;
        } else {
            var39 = 0.06772345;
        }
    }
    double var40;
    if (input[1] >= 2.0801492) {
        if (input[1] >= 2.745216) {
            var40 = 0.09699123;
        } else {
            var40 = 0.07363024;
        }
    } else {
        if (input[2] >= 10.327848) {
            var40 = 0.065410644;
        } else {
            var40 = -0.007895279;
        }
    }
    double var41;
    if (input[0] >= -0.12671149) {
        if (input[0] >= 0.2916685) {
            var41 = 0.09785957;
        } else {
            var41 = 0.06753459;
        }
    } else {
        if (input[2] >= 9.11507) {
            var41 = -0.011528334;
        } else {
            var41 = 0.06584;
        }
    }
    double var42;
    if (input[1] >= 2.0801492) {
        if (input[1] >= 2.745216) {
            var42 = 0.0961971;
        } else {
            var42 = 0.06976224;
        }
    } else {
        if (input[2] >= 10.356064) {
            var42 = 0.062478464;
        } else {
            var42 = -0.010201993;
        }
    }
    double var43;
    if (input[0] >= -0.12671149) {
        if (input[0] >= 0.2916685) {
            var43 = 0.09728104;
        } else {
            var43 = 0.06327082;
        }
    } else {
        if (input[1] >= 1.2263246) {
            var43 = 0.033898488;
        } else {
            var43 = -0.044309072;
        }
    }
    double var44;
    if (input[2] >= 9.11507) {
        if (input[2] >= 9.981319) {
            var44 = 0.0594213;
        } else {
            var44 = -0.0705187;
        }
    } else {
        if (input[3] >= 0.037021) {
            var44 = 0.09000288;
        } else {
            var44 = 0.049584888;
        }
    }
    double var45;
    if (input[0] >= -0.0660875) {
        if (input[5] >= 0.578866) {
            var45 = -0.046305995;
        } else {
            var45 = 0.08518162;
        }
    } else {
        if (input[2] >= 10.4235) {
            var45 = 0.06150953;
        } else {
            var45 = -0.012706125;
        }
    }
    double var46;
    if (input[2] >= 9.331745) {
        if (input[2] >= 9.981319) {
            var46 = 0.053892404;
        } else {
            var46 = -0.07684371;
        }
    } else {
        if (input[3] >= 0.037021) {
            var46 = 0.08574139;
        } else {
            var46 = 0.04127029;
        }
    }
    double var47;
    if (input[1] >= 1.3153895) {
        if (input[1] >= 2.1874766) {
            var47 = 0.08305034;
        } else {
            var47 = 0.026701901;
        }
    } else {
        if (input[5] >= -0.033218) {
            var47 = -0.059382975;
        } else {
            var47 = 0.034100484;
        }
    }
    double var48;
    if (input[0] >= -0.0660875) {
        if (input[0] >= 0.4043845) {
            var48 = 0.09887487;
        } else {
            var48 = 0.058176037;
        }
    } else {
        if (input[2] >= 9.331594) {
            var48 = -0.017896313;
        } else {
            var48 = 0.04873028;
        }
    }
    double var49;
    if (input[1] >= 2.0801492) {
        if (input[1] >= 2.745216) {
            var49 = 0.09360076;
        } else {
            var49 = 0.056231733;
        }
    } else {
        if (input[0] >= 0.27041298) {
            var49 = 0.09361907;
        } else {
            var49 = -0.0071669663;
        }
    }
    double var50;
    if (input[2] >= 8.978629) {
        if (input[2] >= 9.981319) {
            var50 = 0.049386397;
        } else {
            var50 = -0.04986751;
        }
    } else {
        if (input[0] >= -0.7506145) {
            var50 = 0.07228343;
        } else {
            var50 = 0.009672157;
        }
    }
    double var51;
    if (input[1] >= 1.2784165) {
        if (input[2] >= 10.235041) {
            var51 = 0.085085474;
        } else {
            var51 = 0.020874968;
        }
    } else {
        if (input[0] >= -0.65294254) {
            var51 = -0.06372602;
        } else {
            var51 = 0.02312016;
        }
    }
    double var52;
    if (input[0] >= -0.0660875) {
        if (input[0] >= 0.4043845) {
            var52 = 0.09826666;
        } else {
            var52 = 0.050608855;
        }
    } else {
        if (input[0] >= -0.783695) {
            var52 = -0.021589192;
        } else {
            var52 = 0.04232834;
        }
    }
    double var53;
    if (input[2] >= 9.331745) {
        if (input[2] >= 9.981319) {
            var53 = 0.043799914;
        } else {
            var53 = -0.059626885;
        }
    } else {
        if (input[3] >= 0.037021) {
            var53 = 0.079812124;
        } else {
            var53 = 0.026707401;
        }
    }
    double var54;
    if (input[1] >= 2.0801492) {
        if (input[1] >= 2.745216) {
            var54 = 0.091715746;
        } else {
            var54 = 0.047520828;
        }
    } else {
        if (input[0] >= 0.27041298) {
            var54 = 0.09160051;
        } else {
            var54 = -0.009241855;
        }
    }
    double var55;
    if (input[1] >= 2.1874766) {
        if (input[1] >= 2.8244765) {
            var55 = 0.09266495;
        } else {
            var55 = 0.049354475;
        }
    } else {
        if (input[0] >= 0.27041298) {
            var55 = 0.09112269;
        } else {
            var55 = -0.007937967;
        }
    }
    double var56;
    if (input[2] >= 8.978629) {
        if (input[2] >= 10.327848) {
            var56 = 0.05078384;
        } else {
            var56 = -0.035940737;
        }
    } else {
        if (input[3] >= 0.037021) {
            var56 = 0.08342763;
        } else {
            var56 = 0.028954718;
        }
    }
    double var57;
    if (input[1] >= 1.28171) {
        if (input[2] >= 10.393187) {
            var57 = 0.082687184;
        } else {
            var57 = 0.016652767;
        }
    } else {
        if (input[5] >= -0.033218) {
            var57 = -0.056747522;
        } else {
            var57 = 0.029291546;
        }
    }
    double var58;
    if (input[2] >= 9.331745) {
        if (input[2] >= 10.327848) {
            var58 = 0.04668687;
        } else {
            var58 = -0.0402341;
        }
    } else {
        if (input[3] >= 0.037021) {
            var58 = 0.07489622;
        } else {
            var58 = 0.020153504;
        }
    }
    double var59;
    if (input[0] >= 0.2916685) {
        if (input[3] >= 0.50652254) {
            var59 = 0.00031877653;
        } else {
            var59 = 0.0944956;
        }
    } else {
        if (input[0] >= -0.783695) {
            var59 = -0.017477961;
        } else {
            var59 = 0.038455937;
        }
    }
    double var60;
    if (input[1] >= 2.1874766) {
        if (input[1] >= 2.8244765) {
            var60 = 0.090970956;
        } else {
            var60 = 0.041759215;
        }
    } else {
        if (input[0] >= -0.6551875) {
            var60 = -0.02618429;
        } else {
            var60 = 0.02320848;
        }
    }
    double var61;
    if (input[0] >= 0.2916685) {
        if (input[4] >= 0.43794048) {
            var61 = 0.00022850891;
        } else {
            var61 = 0.09393772;
        }
    } else {
        if (input[1] >= 0.671354) {
            var61 = 0.009177257;
        } else {
            var61 = -0.06711984;
        }
    }
    double var62;
    if (input[2] >= 8.9079) {
        if (input[0] >= -0.671878) {
            var62 = -0.039891038;
        } else {
            var62 = 0.029459635;
        }
    } else {
        if (input[0] >= -0.7506145) {
            var62 = 0.06389134;
        } else {
            var62 = -0.025573596;
        }
    }
    double var63;
    if (input[0] >= 0.2916685) {
        if (input[3] >= 0.49278098) {
            var63 = 0.00025790193;
        } else {
            var63 = 0.09332642;
        }
    } else {
        if (input[1] >= 2.745216) {
            var63 = 0.08608523;
        } else {
            var63 = -0.006905304;
        }
    }
    double var64;
    if (input[0] >= 0.4043845) {
        var64 = 0.09607581;
    } else {
        if (input[1] >= 1.2263246) {
            var64 = 0.017019058;
        } else {
            var64 = -0.029800266;
        }
    }
    double var65;
    if (input[2] >= 10.393187) {
        if (input[0] >= -1.6977695) {
            var65 = 0.056488223;
        } else {
            var65 = -0.15239896;
        }
    } else {
        if (input[2] >= 9.347237) {
            var65 = -0.03609585;
        } else {
            var65 = 0.035690587;
        }
    }
    double var66;
    if (input[1] >= 2.745216) {
        if (input[3] >= 0.331934) {
            var66 = 0.011839693;
        } else {
            var66 = 0.09228546;
        }
    } else {
        if (input[4] >= 0.048171498) {
            var66 = 0.02779249;
        } else {
            var66 = -0.01769442;
        }
    }
    double var67;
    if (input[0] >= 0.4043845) {
        var67 = 0.09549552;
    } else {
        if (input[0] >= -0.783695) {
            var67 = -0.01582688;
        } else {
            var67 = 0.032955233;
        }
    }
    double var68;
    if (input[1] >= 2.745216) {
        if (input[3] >= 0.331934) {
            var68 = 0.010832359;
        } else {
            var68 = 0.091530874;
        }
    } else {
        if (input[0] >= 0.4043845) {
            var68 = 0.0945763;
        } else {
            var68 = -0.0057535744;
        }
    }
    double var69;
    if (input[5] >= -0.033079997) {
        if (input[5] >= 0.036590002) {
            var69 = 0.016336896;
        } else {
            var69 = -0.07672804;
        }
    } else {
        if (input[0] >= -0.1920505) {
            var69 = 0.08883459;
        } else {
            var69 = 0.017362595;
        }
    }
    double var70;
    if (input[2] >= 10.355989) {
        if (input[0] >= -1.6977695) {
            var70 = 0.052132245;
        } else {
            var70 = -0.12511067;
        }
    } else {
        if (input[2] >= 9.347237) {
            var70 = -0.03193588;
        } else {
            var70 = 0.031615023;
        }
    }
    double var71;
    if (input[1] >= 0.64343655) {
        if (input[2] >= 10.4235) {
            var71 = 0.05863871;
        } else {
            var71 = -0.00055095257;
        }
    } else {
        if (input[1] >= 0.496218) {
            var71 = -0.17493936;
        } else {
            var71 = 0.013477594;
        }
    }
    double var72;
    if (input[1] >= 2.745216) {
        if (input[5] >= 0.1872025) {
            var72 = 0.023645062;
        } else {
            var72 = 0.094664074;
        }
    } else {
        if (input[0] >= -0.6551875) {
            var72 = -0.02122315;
        } else {
            var72 = 0.020439044;
        }
    }
    double var73;
    if (input[2] >= 8.9079) {
        if (input[0] >= -0.6551875) {
            var73 = -0.038967676;
        } else {
            var73 = 0.024643956;
        }
    } else {
        if (input[0] >= -0.7506145) {
            var73 = 0.05661127;
        } else {
            var73 = -0.036272094;
        }
    }
    double var74;
    if (input[0] >= 0.4043845) {
        var74 = 0.094277285;
    } else {
        if (input[0] >= -0.783695) {
            var74 = -0.013976397;
        } else {
            var74 = 0.027848441;
        }
    }
    double var75;
    if (input[5] >= -0.033079997) {
        if (input[5] >= 0.036590002) {
            var75 = 0.013811822;
        } else {
            var75 = -0.06525544;
        }
    } else {
        if (input[0] >= -0.1920505) {
            var75 = 0.087236546;
        } else {
            var75 = 0.015092067;
        }
    }
    double var76;
    if (input[1] >= 2.8244765) {
        if (input[3] >= 0.331934) {
            var76 = -0.0043004425;
        } else {
            var76 = 0.094248705;
        }
    } else {
        if (input[4] >= 0.048171498) {
            var76 = 0.02307936;
        } else {
            var76 = -0.015231897;
        }
    }
    double var77;
    if (input[0] >= 0.4043845) {
        var77 = 0.0934655;
    } else {
        if (input[0] >= -0.655113) {
            var77 = -0.01785933;
        } else {
            var77 = 0.017846903;
        }
    }
    double var78;
    if (input[2] >= 8.001685) {
        if (input[0] >= -0.6551875) {
            var78 = -0.027588127;
        } else {
            var78 = 0.01994774;
        }
    } else {
        if (input[0] >= -0.7506145) {
            var78 = 0.06963417;
        } else {
            var78 = -0.11807642;
        }
    }
    double var79;
    if (input[2] >= 10.327848) {
        if (input[0] >= -1.6977695) {
            var79 = 0.047458734;
        } else {
            var79 = -0.12284901;
        }
    } else {
        if (input[0] >= -0.822839) {
            var79 = -0.021717042;
        } else {
            var79 = 0.039611097;
        }
    }
    double var80;
    if (input[0] >= 0.4043845) {
        var80 = 0.09289978;
    } else {
        if (input[1] >= 2.8244765) {
            var80 = 0.08189135;
        } else {
            var80 = -0.0052451626;
        }
    }
    double var81;
    if (input[2] >= 8.707244) {
        if (input[0] >= -0.6551875) {
            var81 = -0.028900942;
        } else {
            var81 = 0.018419735;
        }
    } else {
        if (input[0] >= -0.7506145) {
            var81 = 0.057263374;
        } else {
            var81 = -0.053359825;
        }
    }
    double var82;
    if (input[5] >= -0.0344925) {
        if (input[5] >= 0.0517845) {
            var82 = 0.0144471275;
        } else {
            var82 = -0.05137932;
        }
    } else {
        if (input[2] >= 9.861418) {
            var82 = 0.057723213;
        } else {
            var82 = 0.003958912;
        }
    }
    double var83;
    if (input[0] >= 0.4043845) {
        var83 = 0.092228964;
    } else {
        if (input[1] >= 0.6435865) {
            var83 = 0.0048153265;
        } else {
            var83 = -0.0428823;
        }
    }
    double var84;
    if (input[2] >= 10.393187) {
        if (input[0] >= -1.7232165) {
            var84 = 0.04487973;
        } else {
            var84 = -0.106936686;
        }
    } else {
        if (input[0] >= -0.7839195) {
            var84 = -0.02118821;
        } else {
            var84 = 0.03370053;
        }
    }
    double var85;
    if (input[2] >= 7.5874968) {
        if (input[2] >= 10.327848) {
            var85 = 0.029592162;
        } else {
            var85 = -0.014041823;
        }
    } else {
        if (input[0] >= -0.766556) {
            var85 = 0.0724006;
        } else {
            var85 = -0.11822156;
        }
    }
    double var86;
    if (input[3] >= -0.045691498) {
        if (input[3] >= 0.02259) {
            var86 = 0.017599124;
        } else {
            var86 = -0.07606926;
        }
    } else {
        if (input[2] >= 9.981693) {
            var86 = 0.06740579;
        } else {
            var86 = 0.0059221643;
        }
    }
    double var87;
    if (input[1] >= 2.8244765) {
        if (input[3] >= 0.331934) {
            var87 = -0.01476254;
        } else {
            var87 = 0.092965536;
        }
    } else {
        if (input[0] >= 0.4043845) {
            var87 = 0.090843044;
        } else {
            var87 = -0.004783527;
        }
    }
    double var88;
    if (input[2] >= 8.9079) {
        if (input[0] >= -0.6551875) {
            var88 = -0.026762152;
        } else {
            var88 = 0.01644939;
        }
    } else {
        if (input[0] >= -1.2893435) {
            var88 = 0.038252816;
        } else {
            var88 = -0.13807558;
        }
    }
    double var89;
    if (input[1] >= 3.096386) {
        var89 = 0.09105261;
    } else {
        if (input[4] >= 0.048171498) {
            var89 = 0.019427732;
        } else {
            var89 = -0.012477408;
        }
    }
    double var90;
    if (input[0] >= 0.4043845) {
        var90 = 0.09063749;
    } else {
        if (input[5] >= -0.0331185) {
            var90 = -0.012476146;
        } else {
            var90 = 0.017837701;
        }
    }
    double var91;
    if (input[3] >= -0.045691498) {
        if (input[3] >= 0.02259) {
            var91 = 0.015694426;
        } else {
            var91 = -0.06352078;
        }
    } else {
        if (input[2] >= 9.981693) {
            var91 = 0.064777195;
        } else {
            var91 = 0.0045843963;
        }
    }
    double var92;
    if (input[1] >= 3.096386) {
        var92 = 0.09013661;
    } else {
        if (input[2] >= 7.5874968) {
            var92 = -0.005821943;
        } else {
            var92 = 0.047063142;
        }
    }
    double var93;
    if (input[0] >= 0.4043845) {
        var93 = 0.08968137;
    } else {
        if (input[1] >= 0.6435865) {
            var93 = 0.004226876;
        } else {
            var93 = -0.036139287;
        }
    }
    double var94;
    if (input[1] >= 3.096386) {
        var94 = 0.08919405;
    } else {
        if (input[0] >= 0.4043845) {
            var94 = 0.088402644;
        } else {
            var94 = -0.003365213;
        }
    }
    double var95;
    if (input[0] >= -1.816772) {
        if (input[2] >= 10.619368) {
            var95 = 0.03878379;
        } else {
            var95 = -0.0050408444;
        }
    } else {
        if (input[1] >= 1.4137349) {
            var95 = 0.0571406;
        } else {
            var95 = -0.11810744;
        }
    }
    double var96;
    if (input[2] >= 8.9079) {
        if (input[0] >= -0.6551875) {
            var96 = -0.024832398;
        } else {
            var96 = 0.01625925;
        }
    } else {
        if (input[3] >= 0.037021) {
            var96 = 0.070349105;
        } else {
            var96 = 0.000046587535;
        }
    }
    double var97;
    if (input[3] >= -0.045691498) {
        if (input[3] >= 0.02259) {
            var97 = 0.013568545;
        } else {
            var97 = -0.053434502;
        }
    } else {
        if (input[2] >= 9.948237) {
            var97 = 0.060012203;
        } else {
            var97 = 0.0038111254;
        }
    }
    double var98;
    if (input[1] >= 3.096386) {
        var98 = 0.088152826;
    } else {
        if (input[4] >= 0.0204685) {
            var98 = 0.014656225;
        } else {
            var98 = -0.011707695;
        }
    }
    double var99;
    if (input[2] >= 7.5874968) {
        if (input[0] >= -0.783695) {
            var99 = -0.012746883;
        } else {
            var99 = 0.021520289;
        }
    } else {
        if (input[0] >= -0.766556) {
            var99 = 0.06615264;
        } else {
            var99 = -0.11065067;
        }
    }
    double var100;
    if (input[0] >= 0.4043845) {
        var100 = 0.08784466;
    } else {
        if (input[3] >= -0.983559) {
            var100 = -0.00025324742;
        } else {
            var100 = -0.15560931;
        }
    }
    double var101;
    if (input[0] >= -1.7232165) {
        if (input[2] >= 10.619368) {
            var101 = 0.039118614;
        } else {
            var101 = -0.004769497;
        }
    } else {
        if (input[1] >= 1.4137349) {
            var101 = 0.06781869;
        } else {
            var101 = -0.10834386;
        }
    }
    double var102;
    if (input[1] >= 3.096386) {
        var102 = 0.087103896;
    } else {
        if (input[3] >= -0.045691498) {
            var102 = -0.010007686;
        } else {
            var102 = 0.015883846;
        }
    }
    double var103;
    if (input[0] >= 0.4043845) {
        var103 = 0.08674306;
    } else {
        if (input[1] >= 0.6435865) {
            var103 = 0.003679118;
        } else {
            var103 = -0.030145824;
        }
    }
    double var104;
    if (input[5] >= -0.0344925) {
        if (input[5] >= 0.0517845) {
            var104 = 0.010607808;
        } else {
            var104 = -0.03410313;
        }
    } else {
        if (input[3] >= -0.9837835) {
            var104 = 0.019726353;
        } else {
            var104 = -0.16048735;
        }
    }
    double var105;
    if (input[1] >= 3.096386) {
        var105 = 0.08594734;
    } else {
        if (input[2] >= 12.339291) {
            var105 = 0.04408524;
        } else {
            var105 = -0.004203483;
        }
    }
    double var106;
    if (input[2] >= 7.5874968) {
        if (input[0] >= -0.783695) {
            var106 = -0.012011668;
        } else {
            var106 = 0.020516092;
        }
    } else {
        if (input[0] >= -0.766556) {
            var106 = 0.063536875;
        } else {
            var106 = -0.0950817;
        }
    }
    double var107;
    if (input[0] >= 0.4043845) {
        var107 = 0.08566023;
    } else {
        if (input[3] >= -0.7686105) {
            var107 = 0.00041622482;
        } else {
            var107 = -0.080891155;
        }
    }
    double var108;
    if (input[4] >= 0.0204685) {
        if (input[2] >= 9.921668) {
            var108 = 0.0456243;
        } else {
            var108 = -0.0004702936;
        }
    } else {
        if (input[4] >= -0.045457996) {
            var108 = -0.04510733;
        } else {
            var108 = 0.01408034;
        }
    }
    double var109;
    if (input[2] >= 9.612486) {
        if (input[2] >= 9.865459) {
            var109 = 0.013058016;
        } else {
            var109 = -0.036181223;
        }
    } else {
        if (input[3] >= 0.0412755) {
            var109 = 0.03909596;
        } else {
            var109 = -0.0015236951;
        }
    }
    double var110;
    if (input[0] >= -1.7232165) {
        if (input[2] >= 10.619368) {
            var110 = 0.034309376;
        } else {
            var110 = -0.0037659903;
        }
    } else {
        if (input[3] >= 0.0478575) {
            var110 = 0.023317168;
        } else {
            var110 = -0.11000424;
        }
    }
    double var111;
    if (input[3] >= -0.045691498) {
        if (input[3] >= 0.02259) {
            var111 = 0.010642297;
        } else {
            var111 = -0.040486213;
        }
    } else {
        if (input[1] >= 0.9688605) {
            var111 = 0.004363266;
        } else {
            var111 = 0.056553304;
        }
    }
    double var112;
    if (input[1] >= 1.2262499) {
        if (input[0] >= -0.822839) {
            var112 = -0.0013771818;
        } else {
            var112 = 0.043466236;
        }
    } else {
        if (input[4] >= -0.0455) {
            var112 = -0.035370484;
        } else {
            var112 = 0.028444473;
        }
    }
    double var113;
    if (input[1] >= 3.096386) {
        var113 = 0.084522605;
    } else {
        if (input[0] >= 0.4043845) {
            var113 = 0.08383449;
        } else {
            var113 = -0.0024882683;
        }
    }
    double var114;
    if (input[2] >= 8.707244) {
        if (input[0] >= -0.6551875) {
            var114 = -0.020104228;
        } else {
            var114 = 0.0144064445;
        }
    } else {
        if (input[0] >= -0.7506145) {
            var114 = 0.0459511;
        } else {
            var114 = -0.047433853;
        }
    }
    double var115;
    if (input[1] >= 3.096386) {
        var115 = 0.08338274;
    } else {
        if (input[4] >= 0.0204685) {
            var115 = 0.0121114785;
        } else {
            var115 = -0.009260867;
        }
    }
    double var116;
    if (input[0] >= 0.4043845) {
        var116 = 0.083127975;
    } else {
        if (input[3] >= -0.849511) {
            var116 = 0.0002745275;
        } else {
            var116 = -0.089293115;
        }
    }
    double var117;
    if (input[2] >= 12.339291) {
        if (input[1] >= -0.13225001) {
            var117 = 0.075543575;
        } else {
            var117 = -0.16139211;
        }
    } else {
        if (input[1] >= 0.353116) {
            var117 = -0.0058909385;
        } else {
            var117 = 0.054855723;
        }
    }
    double var118;
    if (input[1] >= 0.64343655) {
        if (input[2] >= 12.256437) {
            var118 = 0.07420989;
        } else {
            var118 = 0.0016970283;
        }
    } else {
        if (input[1] >= 0.496218) {
            var118 = -0.101282336;
        } else {
            var118 = 0.01596348;
        }
    }
    double var119;
    if (input[2] >= 9.641077) {
        if (input[2] >= 9.865459) {
            var119 = 0.010453719;
        } else {
            var119 = -0.032685768;
        }
    } else {
        if (input[5] >= 0.0668695) {
            var119 = 0.037197426;
        } else {
            var119 = -0.001249809;
        }
    }
    double var120;
    if (input[0] >= -1.7232165) {
        if (input[0] >= -0.783695) {
            var120 = -0.004561474;
        } else {
            var120 = 0.022725483;
        }
    } else {
        if (input[1] >= 1.4137349) {
            var120 = 0.06471318;
        } else {
            var120 = -0.083947815;
        }
    }
    double var121;
    if (input[5] >= -0.022928) {
        if (input[3] >= -0.08827) {
            var121 = -0.018772842;
        } else {
            var121 = 0.023783842;
        }
    } else {
        if (input[0] >= -0.1920505) {
            var121 = 0.074238144;
        } else {
            var121 = 0.0063222605;
        }
    }
    double var122;
    if (input[4] >= -0.40674102) {
        if (input[1] >= 0.671354) {
            var122 = 0.007884542;
        } else {
            var122 = -0.025650093;
        }
    } else {
        if (input[2] >= 9.482407) {
            var122 = -0.07664676;
        } else {
            var122 = 0.050222494;
        }
    }
    double var123;
    if (input[1] >= 3.096386) {
        var123 = 0.08185076;
    } else {
        if (input[0] >= 0.4043845) {
            var123 = 0.080936685;
        } else {
            var123 = -0.002072716;
        }
    }
    double var124;
    if (input[3] >= -0.7686105) {
        if (input[3] >= -0.097872004) {
            var124 = -0.0047254134;
        } else {
            var124 = 0.02101986;
        }
    } else {
        if (input[2] >= 9.191561) {
            var124 = -0.107121766;
        } else {
            var124 = 0.06540183;
        }
    }
    double var125;
    if (input[2] >= 7.5874968) {
        if (input[0] >= -0.655113) {
            var125 = -0.012797269;
        } else {
            var125 = 0.010986213;
        }
    } else {
        if (input[0] >= -0.766556) {
            var125 = 0.05799442;
        } else {
            var125 = -0.081710346;
        }
    }
    double var126;
    if (input[1] >= 3.096386) {
        var126 = 0.080668814;
    } else {
        if (input[5] >= 0.436961) {
            var126 = 0.03620043;
        } else {
            var126 = -0.003205327;
        }
    }
    double var127;
    if (input[5] >= -0.0344925) {
        if (input[4] >= -0.044501998) {
            var127 = -0.01821301;
        } else {
            var127 = 0.01627074;
        }
    } else {
        if (input[0] >= -0.1920505) {
            var127 = 0.07780585;
        } else {
            var127 = 0.00615508;
        }
    }
    double var128;
    if (input[4] >= 0.0204685) {
        if (input[5] >= 0.27076697) {
            var128 = -0.029179355;
        } else {
            var128 = 0.022050966;
        }
    } else {
        if (input[4] >= -0.045457996) {
            var128 = -0.031455483;
        } else {
            var128 = 0.009483952;
        }
    }
    double var129;
    if (input[4] >= -0.40674102) {
        if (input[4] >= -0.36298698) {
            var129 = 0.000960298;
        } else {
            var129 = 0.07481211;
        }
    } else {
        if (input[4] >= -0.42169702) {
            var129 = -0.15488234;
        } else {
            var129 = -0.011794279;
        }
    }
    double var130;
    if (input[0] >= 0.4043845) {
        var130 = 0.079638764;
    } else {
        if (input[0] >= 0.2314935) {
            var130 = -0.07244714;
        } else {
            var130 = 0.0003953098;
        }
    }
    double var131;
    if (input[2] >= 12.339291) {
        if (input[1] >= -0.13225001) {
            var131 = 0.07259253;
        } else {
            var131 = -0.12737122;
        }
    } else {
        if (input[1] >= 0.353116) {
            var131 = -0.0054227132;
        } else {
            var131 = 0.05276033;
        }
    }
    double var132;
    if (input[4] >= -0.46908998) {
        if (input[5] >= 0.4027515) {
            var132 = 0.043351505;
        } else {
            var132 = -0.0010657193;
        }
    } else {
        if (input[2] >= 9.32456) {
            var132 = -0.080410935;
        } else {
            var132 = 0.07580966;
        }
    }
    double var133;
    if (input[1] >= 3.096386) {
        var133 = 0.079182945;
    } else {
        if (input[3] >= -0.7686105) {
            var133 = 0.00050944183;
        } else {
            var133 = -0.060061563;
        }
    }
    double var134;
    if (input[0] >= 0.4043845) {
        var134 = 0.078239106;
    } else {
        if (input[2] >= 7.5874968) {
            var134 = -0.0030258335;
        } else {
            var134 = 0.031510096;
        }
    }
    double var135;
    if (input[1] >= 3.096386) {
        var135 = 0.07781799;
    } else {
        if (input[2] >= 12.339291) {
            var135 = 0.034558974;
        } else {
            var135 = -0.0027457417;
        }
    }
    double var136;
    if (input[0] >= -1.6977695) {
        if (input[2] >= 12.322375) {
            var136 = 0.055137284;
        } else {
            var136 = -0.0006584604;
        }
    } else {
        if (input[3] >= 0.0081245005) {
            var136 = 0.0123640355;
        } else {
            var136 = -0.09837403;
        }
    }
    double var137;
    if (input[1] >= 0.64343655) {
        if (input[1] >= 0.968935) {
            var137 = -0.0019927986;
        } else {
            var137 = 0.03919612;
        }
    } else {
        if (input[1] >= 0.48686248) {
            var137 = -0.07959328;
        } else {
            var137 = 0.017570062;
        }
    }
    double var138;
    if (input[1] >= 1.1535015) {
        if (input[2] >= 10.235041) {
            var138 = 0.056943357;
        } else {
            var138 = -0.0008640685;
        }
    } else {
        if (input[1] >= 1.05538) {
            var138 = -0.09212757;
        } else {
            var138 = 0.004102395;
        }
    }
    double var139;
    if (input[2] >= 9.641077) {
        if (input[2] >= 9.865459) {
            var139 = 0.0086342525;
        } else {
            var139 = -0.02568607;
        }
    } else {
        if (input[4] >= 0.014533499) {
            var139 = 0.031854417;
        } else {
            var139 = -0.004657351;
        }
    }
    double var140;
    if (input[5] >= 0.6425265) {
        if (input[0] >= -0.5634285) {
            var140 = -0.021597585;
        } else {
            var140 = 0.095619194;
        }
    } else {
        if (input[3] >= -0.4980515) {
            var140 = 0.0016909766;
        } else {
            var140 = -0.042463668;
        }
    }
    double var141;
    if (input[5] >= -0.022928) {
        if (input[1] >= 1.1332185) {
            var141 = 0.0065255114;
        } else {
            var141 = -0.027592195;
        }
    } else {
        if (input[0] >= -0.1920505) {
            var141 = 0.068772845;
        } else {
            var141 = 0.0054159616;
        }
    }
    double var142;
    if (input[5] >= 0.436961) {
        if (input[0] >= -0.5634285) {
            var142 = -0.058440983;
        } else {
            var142 = 0.07860994;
        }
    } else {
        if (input[3] >= -0.7686105) {
            var142 = -0.00039418042;
        } else {
            var142 = -0.074692;
        }
    }
    double var143;
    if (input[0] >= 0.4043845) {
        var143 = 0.07626161;
    } else {
        if (input[0] >= 0.202304) {
            var143 = -0.06268612;
        } else {
            var143 = 0.00065558;
        }
    }
    double var144;
    if (input[0] >= -1.6977695) {
        if (input[0] >= -0.783695) {
            var144 = -0.004195329;
        } else {
            var144 = 0.0203916;
        }
    } else {
        if (input[2] >= 11.35838) {
            var144 = -0.08428128;
        } else {
            var144 = 0.019954916;
        }
    }
    double var145;
    if (input[1] >= 3.096386) {
        var145 = 0.0759043;
    } else {
        if (input[2] >= 7.553143) {
            var145 = -0.002718741;
        } else {
            var145 = 0.030202433;
        }
    }
    double var146;
    if (input[4] >= -0.46908998) {
        if (input[4] >= -0.43034148) {
            var146 = 0.00048931263;
        } else {
            var146 = 0.08931085;
        }
    } else {
        if (input[2] >= 9.32456) {
            var146 = -0.068384886;
        } else {
            var146 = 0.07398784;
        }
    }
    double var147;
    if (input[5] >= -0.022928) {
        if (input[3] >= -0.08827) {
            var147 = -0.014704796;
        } else {
            var147 = 0.020860514;
        }
    } else {
        if (input[2] >= 9.861418) {
            var147 = 0.03713603;
        } else {
            var147 = -0.0015197458;
        }
    }
    double var148;
    if (input[3] >= 0.02259) {
        if (input[5] >= 0.1031495) {
            var148 = -0.029306635;
        } else {
            var148 = 0.027643481;
        }
    } else {
        if (input[5] >= 0.0517845) {
            var148 = 0.027701197;
        } else {
            var148 = -0.025311587;
        }
    }
    double var149;
    if (input[4] >= -0.40674102) {
        if (input[4] >= -0.36298698) {
            var149 = 0.00064053084;
        } else {
            var149 = 0.0720124;
        }
    } else {
        if (input[4] >= -0.41856) {
            var149 = -0.15311883;
        } else {
            var149 = -0.009382183;
        }
    }
    double var150;
    if (input[0] >= 0.4043845) {
        var150 = 0.0748071;
    } else {
        if (input[0] >= 0.202304) {
            var150 = -0.05470535;
        } else {
            var150 = 0.000598699;
        }
    }
    double var151;
    if (input[1] >= 3.096386) {
        var151 = 0.07451512;
    } else {
        if (input[0] >= -0.655113) {
            var151 = -0.0072970637;
        } else {
            var151 = 0.008231717;
        }
    }
    double var152;
    if (input[0] >= 0.2916685) {
        if (input[1] >= 1.2644205) {
            var152 = 0.07777442;
        } else {
            var152 = 0.01163619;
        }
    } else {
        if (input[0] >= 0.266371) {
            var152 = -0.17215428;
        } else {
            var152 = 0.00014414809;
        }
    }
    double var153;
    if (input[2] >= 8.001685) {
        if (input[0] >= -0.6551875) {
            var153 = -0.013006225;
        } else {
            var153 = 0.011081164;
        }
    } else {
        if (input[0] >= -1.0869646) {
            var153 = 0.036925223;
        } else {
            var153 = -0.22754446;
        }
    }
    double var154;
    if (input[5] >= 0.6425265) {
        if (input[0] >= -0.5634285) {
            var154 = -0.016290685;
        } else {
            var154 = 0.08975717;
        }
    } else {
        if (input[3] >= -0.4980515) {
            var154 = 0.0015421783;
        } else {
            var154 = -0.037927117;
        }
    }
    double var155;
    if (input[0] >= -1.816772) {
        if (input[1] >= -0.6295905) {
            var155 = 0.0021279883;
        } else {
            var155 = -0.10401087;
        }
    } else {
        if (input[3] >= 0.0081245005) {
            var155 = 0.0028544534;
        } else {
            var155 = -0.08003186;
        }
    }
    double var156;
    if (input[1] >= 0.38477498) {
        if (input[1] >= 0.64343655) {
            var156 = 0.0027036315;
        } else {
            var156 = -0.054149456;
        }
    } else {
        if (input[2] >= 11.312576) {
            var156 = -0.048564713;
        } else {
            var156 = 0.08054571;
        }
    }
    double var157;
    if (input[2] >= 12.339291) {
        if (input[1] >= -0.13225001) {
            var157 = 0.06857768;
        } else {
            var157 = -0.09982381;
        }
    } else {
        if (input[1] >= 0.353116) {
            var157 = -0.0047010123;
        } else {
            var157 = 0.04780772;
        }
    }
    double var158;
    if (input[3] >= 0.922359) {
        var158 = -0.09131808;
    } else {
        if (input[1] >= 2.8244765) {
            var158 = 0.06963628;
        } else {
            var158 = -0.0005618434;
        }
    }
    double var159;
    if (input[0] >= 0.2916685) {
        if (input[1] >= 1.2644205) {
            var159 = 0.07629823;
        } else {
            var159 = 0.011035013;
        }
    } else {
        if (input[0] >= 0.266371) {
            var159 = -0.14837371;
        } else {
            var159 = 0.000058858983;
        }
    }
    double var160;
    if (input[5] >= 0.436961) {
        if (input[0] >= -0.5634285) {
            var160 = -0.050671708;
        } else {
            var160 = 0.07372048;
        }
    } else {
        if (input[5] >= 0.3368465) {
            var160 = -0.045108072;
        } else {
            var160 = 0.0005668777;
        }
    }
    double var161;
    if (input[4] >= -0.40674102) {
        if (input[4] >= -0.045457996) {
            var161 = -0.004975296;
        } else {
            var161 = 0.015920863;
        }
    } else {
        if (input[2] >= 9.54767) {
            var161 = -0.055503305;
        } else {
            var161 = 0.03973037;
        }
    }
    double var162;
    if (input[4] >= 0.0204685) {
        if (input[4] >= 0.179346) {
            var162 = -0.015763609;
        } else {
            var162 = 0.02694974;
        }
    } else {
        if (input[4] >= 0.0182035) {
            var162 = -0.1255221;
        } else {
            var162 = -0.0032880032;
        }
    }
    double var163;
    if (input[2] >= 12.339291) {
        if (input[1] >= -0.13225001) {
            var163 = 0.06618934;
        } else {
            var163 = -0.087518826;
        }
    } else {
        if (input[1] >= 0.353116) {
            var163 = -0.004320312;
        } else {
            var163 = 0.0453158;
        }
    }
    double var164;
    if (input[1] >= 3.096386) {
        var164 = 0.071772255;
    } else {
        if (input[1] >= 1.784963) {
            var164 = -0.01434378;
        } else {
            var164 = 0.0038254727;
        }
    }
    double var165;
    if (input[0] >= 0.4043845) {
        var165 = 0.07161266;
    } else {
        if (input[0] >= -0.44135702) {
            var165 = -0.014087443;
        } else {
            var165 = 0.0031875912;
        }
    }
    double var166;
    if (input[2] >= 7.5535927) {
        if (input[2] >= 7.7071733) {
            var166 = -0.00055129454;
        } else {
            var166 = -0.071457975;
        }
    } else {
        if (input[0] >= -0.766556) {
            var166 = 0.054502517;
        } else {
            var166 = -0.088459395;
        }
    }
    double var167;
    if (input[5] >= -0.0344925) {
        if (input[5] >= -0.032591) {
            var167 = -0.003306218;
        } else {
            var167 = -0.14652811;
        }
    } else {
        if (input[3] >= 0.4619945) {
            var167 = 0.101061106;
        } else {
            var167 = 0.0046533877;
        }
    }
    double var168;
    if (input[3] >= -0.045691498) {
        if (input[3] >= 0.02259) {
            var168 = 0.0074379086;
        } else {
            var168 = -0.025253672;
        }
    } else {
        if (input[1] >= 0.9688605) {
            var168 = -0.0014328889;
        } else {
            var168 = 0.053135086;
        }
    }
    double var169;
    if (input[2] >= 9.641077) {
        if (input[2] >= 9.675804) {
            var169 = -0.0017958668;
        } else {
            var169 = -0.0613251;
        }
    } else {
        if (input[5] >= 0.0668695) {
            var169 = 0.031683967;
        } else {
            var169 = -0.0038576734;
        }
    }
    double var170;
    if (input[4] >= 0.590768) {
        if (input[4] >= 0.6450995) {
            var170 = 0.008406586;
        } else {
            var170 = -0.19412519;
        }
    } else {
        if (input[0] >= 0.2916685) {
            var170 = 0.06720226;
        } else {
            var170 = -0.00011670671;
        }
    }
    double var171;
    if (input[1] >= 0.671354) {
        if (input[1] >= 0.97844005) {
            var171 = -0.0024099487;
        } else {
            var171 = 0.03810175;
        }
    } else {
        if (input[4] >= -0.0319665) {
            var171 = -0.048277315;
        } else {
            var171 = 0.047363292;
        }
    }
    double var172;
    if (input[1] >= 1.2262499) {
        if (input[2] >= 9.727746) {
            var172 = 0.031694945;
        } else {
            var172 = -0.008524134;
        }
    } else {
        if (input[2] >= 9.696311) {
            var172 = -0.023480132;
        } else {
            var172 = 0.02870259;
        }
    }
    double var173;
    if (input[2] >= 12.339291) {
        if (input[3] >= -0.0060535) {
            var173 = 0.07712937;
        } else {
            var173 = -0.054091573;
        }
    } else {
        if (input[1] >= 0.353116) {
            var173 = -0.004039425;
        } else {
            var173 = 0.04344593;
        }
    }
    double var174;
    if (input[1] >= 1.2262499) {
        if (input[2] >= 9.727746) {
            var174 = 0.02948744;
        } else {
            var174 = -0.0072027366;
        }
    } else {
        if (input[3] >= 0.0373485) {
            var174 = 0.021448793;
        } else {
            var174 = -0.026415018;
        }
    }
    double var175;
    if (input[2] >= 9.641077) {
        if (input[0] >= -0.6551875) {
            var175 = -0.018428411;
        } else {
            var175 = 0.011155794;
        }
    } else {
        if (input[4] >= 0.014533499) {
            var175 = 0.028817464;
        } else {
            var175 = -0.004770514;
        }
    }
    double var176;
    if (input[3] >= -0.026379) {
        if (input[3] >= 0.02259) {
            var176 = 0.0052575073;
        } else {
            var176 = -0.026774714;
        }
    } else {
        if (input[1] >= -0.51223505) {
            var176 = 0.011143346;
        } else {
            var176 = -0.1250374;
        }
    }
    double var177;
    if (input[4] >= -0.40674102) {
        if (input[4] >= -0.36298698) {
            var177 = 0.00048721238;
        } else {
            var177 = 0.068457805;
        }
    } else {
        if (input[4] >= -0.41856) {
            var177 = -0.13076809;
        } else {
            var177 = -0.008372127;
        }
    }
    double var178;
    if (input[3] >= 0.922359) {
        var178 = -0.082991004;
    } else {
        if (input[1] >= 2.8244765) {
            var178 = 0.06678339;
        } else {
            var178 = -0.00046844824;
        }
    }
    double var179;
    if (input[3] >= -0.4980515) {
        if (input[3] >= -0.097872004) {
            var179 = -0.0034589146;
        } else {
            var179 = 0.022368338;
        }
    } else {
        if (input[2] >= 9.821751) {
            var179 = 0.03349858;
        } else {
            var179 = -0.054505188;
        }
    }
    double var180;
    if (input[4] >= 0.179346) {
        if (input[3] >= 0.125671) {
            var180 = -0.06297041;
        } else {
            var180 = 0.019823972;
        }
    } else {
        if (input[4] >= 0.103334) {
            var180 = 0.05788064;
        } else {
            var180 = -0.00238785;
        }
    }
    double var181;
    if (input[5] >= 0.6425265) {
        if (input[0] >= -0.5634285) {
            var181 = -0.011268059;
        } else {
            var181 = 0.085921556;
        }
    } else {
        if (input[3] >= -0.4980515) {
            var181 = 0.0013651986;
        } else {
            var181 = -0.032863658;
        }
    }
    double var182;
    if (input[4] >= -0.46908998) {
        if (input[4] >= -0.43034148) {
            var182 = 0.00029704956;
        } else {
            var182 = 0.08676957;
        }
    } else {
        if (input[4] >= -0.569426) {
            var182 = -0.08401494;
        } else {
            var182 = 0.028509343;
        }
    }
    double var183;
    if (input[2] >= 8.001685) {
        if (input[0] >= -0.6551875) {
            var183 = -0.01089771;
        } else {
            var183 = 0.009204359;
        }
    } else {
        if (input[0] >= -1.0869646) {
            var183 = 0.03421526;
        } else {
            var183 = -0.18445884;
        }
    }
    double var184;
    if (input[2] >= 12.929812) {
        if (input[3] >= -0.00567) {
            var184 = 0.082061596;
        } else {
            var184 = -0.04159641;
        }
    } else {
        if (input[1] >= -0.6274205) {
            var184 = -0.0002019899;
        } else {
            var184 = -0.13762166;
        }
    }
    double var185;
    if (input[0] >= -1.816772) {
        if (input[2] >= 10.619368) {
            var185 = 0.019578852;
        } else {
            var185 = -0.0019784567;
        }
    } else {
        if (input[1] >= 0.58333695) {
            var185 = -0.08576345;
        } else {
            var185 = 0.002318498;
        }
    }
    double var186;
    if (input[1] >= 1.784963) {
        if (input[0] >= -0.7763605) {
            var186 = -0.033634663;
        } else {
            var186 = 0.05520464;
        }
    } else {
        if (input[0] >= -0.3719015) {
            var186 = -0.031366583;
        } else {
            var186 = 0.009691369;
        }
    }
    double var187;
    if (input[2] >= 9.641077) {
        if (input[2] >= 9.865459) {
            var187 = 0.006502222;
        } else {
            var187 = -0.019539936;
        }
    } else {
        if (input[5] >= 0.0668695) {
            var187 = 0.029274572;
        } else {
            var187 = -0.0030109605;
        }
    }
    double var188;
    if (input[1] >= 3.096386) {
        var188 = 0.06909749;
    } else {
        if (input[1] >= 1.794094) {
            var188 = -0.013162662;
        } else {
            var188 = 0.0034762162;
        }
    }
    double var189;
    if (input[0] >= -1.6977695) {
        if (input[2] >= 12.322375) {
            var189 = 0.04604214;
        } else {
            var189 = -0.00048492147;
        }
    } else {
        if (input[1] >= 1.4137349) {
            var189 = 0.06561599;
        } else {
            var189 = -0.05293569;
        }
    }
    double var190;
    if (input[4] >= 0.590768) {
        if (input[4] >= 0.640527) {
            var190 = 0.011859562;
        } else {
            var190 = -0.1907184;
        }
    } else {
        if (input[0] >= 0.2916685) {
            var190 = 0.06576653;
        } else {
            var190 = -0.00009778509;
        }
    }
    double var191;
    if (input[5] >= -0.022928) {
        if (input[0] >= -0.47421402) {
            var191 = -0.026846012;
        } else {
            var191 = 0.0035123327;
        }
    } else {
        if (input[5] >= -0.027322) {
            var191 = 0.10042242;
        } else {
            var191 = 0.0049395384;
        }
    }
    double var192;
    if (input[2] >= 8.001685) {
        if (input[4] >= 0.1756225) {
            var192 = -0.022574969;
        } else {
            var192 = 0.002056373;
        }
    } else {
        if (input[0] >= -0.7506145) {
            var192 = 0.04647642;
        } else {
            var192 = -0.077374585;
        }
    }
    double var193;
    if (input[5] >= 0.6425265) {
        if (input[0] >= -0.5634285) {
            var193 = -0.009386874;
        } else {
            var193 = 0.08305355;
        }
    } else {
        if (input[3] >= -0.4980515) {
            var193 = 0.0012099434;
        } else {
            var193 = -0.028882293;
        }
    }
    double var194;
    if (input[5] >= -0.164) {
        if (input[5] >= -0.112204) {
            var194 = 0.0009500975;
        } else {
            var194 = -0.06605023;
        }
    } else {
        if (input[2] >= 10.763891) {
            var194 = 0.08204668;
        } else {
            var194 = 0.00239144;
        }
    }
    double var195;
    if (input[1] >= 1.2262499) {
        if (input[2] >= 9.727746) {
            var195 = 0.027877644;
        } else {
            var195 = -0.0067170183;
        }
    } else {
        if (input[4] >= -0.17297551) {
            var195 = -0.017603448;
        } else {
            var195 = 0.0401226;
        }
    }
    double var196;
    if (input[2] >= 9.651554) {
        if (input[2] >= 9.674532) {
            var196 = -0.0024307007;
        } else {
            var196 = -0.06983697;
        }
    } else {
        if (input[3] >= 0.0412755) {
            var196 = 0.028176254;
        } else {
            var196 = -0.0036320877;
        }
    }
    double var197;
    if (input[4] >= -0.390273) {
        if (input[4] >= -0.36298698) {
            var197 = 0.0005311181;
        } else {
            var197 = 0.090425566;
        }
    } else {
        if (input[5] >= 0.108458504) {
            var197 = -0.07801599;
        } else {
            var197 = 0.015158239;
        }
    }
    double var198;
    if (input[3] >= -0.026379) {
        if (input[3] >= 0.017193) {
            var198 = 0.0039447215;
        } else {
            var198 = -0.025130784;
        }
    } else {
        if (input[5] >= -0.652264) {
            var198 = 0.01078562;
        } else {
            var198 = -0.093137406;
        }
    }
    double var199;
    if (input[0] >= 0.4043845) {
        var199 = 0.06758077;
    } else {
        if (input[0] >= 0.2314935) {
            var199 = -0.05504005;
        } else {
            var199 = 0.00056301797;
        }
    }
    double var200;
    if (input[1] >= 3.096386) {
        var200 = 0.067450516;
    } else {
        if (input[1] >= 1.784963) {
            var200 = -0.012180661;
        } else {
            var200 = 0.0034160693;
        }
    }
    double var201;
    if (input[2] >= 9.651554) {
        if (input[3] >= 0.233286) {
            var201 = -0.035382826;
        } else {
            var201 = 0.0011444992;
        }
    } else {
        if (input[4] >= 0.014533499) {
            var201 = 0.024641326;
        } else {
            var201 = -0.0040920046;
        }
    }
    double var202;
    if (input[5] >= 0.6425265) {
        if (input[0] >= -0.5634285) {
            var202 = -0.008533093;
        } else {
            var202 = 0.081059076;
        }
    } else {
        if (input[3] >= -0.9071125) {
            var202 = 0.00014932716;
        } else {
            var202 = -0.06236821;
        }
    }
    double var203;
    if (input[4] >= -0.390273) {
        if (input[4] >= -0.36298698) {
            var203 = 0.00044708676;
        } else {
            var203 = 0.088342845;
        }
    } else {
        if (input[5] >= 0.108458504) {
            var203 = -0.06851595;
        } else {
            var203 = 0.0144209955;
        }
    }
    double var204;
    if (input[5] >= 0.42735398) {
        if (input[0] >= -0.5634285) {
            var204 = -0.03738911;
        } else {
            var204 = 0.06310819;
        }
    } else {
        if (input[5] >= 0.270881) {
            var204 = -0.03044021;
        } else {
            var204 = 0.001833666;
        }
    }
    double var205;
    if (input[2] >= 7.5874968) {
        if (input[2] >= 7.7071733) {
            var205 = -0.00025360714;
        } else {
            var205 = -0.086112686;
        }
    } else {
        if (input[0] >= -1.0444529) {
            var205 = 0.03765064;
        } else {
            var205 = -0.13513918;
        }
    }
    double var206;
    if (input[0] >= 0.4043845) {
        var206 = 0.06613824;
    } else {
        if (input[0] >= 0.202304) {
            var206 = -0.04360741;
        } else {
            var206 = 0.0005807148;
        }
    }
    double var207;
    if (input[1] >= 3.096386) {
        var207 = 0.06601439;
    } else {
        if (input[1] >= 1.794094) {
            var207 = -0.011315554;
        } else {
            var207 = 0.0030451815;
        }
    }
    double var208;
    if (input[1] >= 2.1874766) {
        if (input[1] >= 2.3401585) {
            var208 = 0.001943332;
        } else {
            var208 = 0.08415145;
        }
    } else {
        if (input[1] >= 1.794094) {
            var208 = -0.017965;
        } else {
            var208 = 0.002747371;
        }
    }
    double var209;
    if (input[1] >= 1.1535015) {
        if (input[3] >= 0.131881) {
            var209 = -0.02236531;
        } else {
            var209 = 0.014904352;
        }
    } else {
        if (input[1] >= 1.05538) {
            var209 = -0.07604365;
        } else {
            var209 = 0.00592193;
        }
    }
    double var210;
    if (input[3] >= 0.3595015) {
        if (input[5] >= -0.198597) {
            var210 = -0.0013870464;
        } else {
            var210 = 0.08988302;
        }
    } else {
        if (input[3] >= 0.3303055) {
            var210 = -0.16781817;
        } else {
            var210 = 0.0011744386;
        }
    }
    double var211;
    if (input[1] >= 0.728086) {
        if (input[1] >= 0.97844005) {
            var211 = -0.0022839846;
        } else {
            var211 = 0.041257497;
        }
    } else {
        if (input[4] >= -0.031910002) {
            var211 = -0.042782348;
        } else {
            var211 = 0.04786308;
        }
    }
    double var212;
    if (input[4] >= 0.04817) {
        if (input[1] >= 1.0636129) {
            var212 = -0.0058935233;
        } else {
            var212 = 0.04722832;
        }
    } else {
        if (input[2] >= 9.828636) {
            var212 = -0.022342775;
        } else {
            var212 = 0.0062457584;
        }
    }
    double var213;
    if (input[1] >= 0.827704) {
        if (input[1] >= 0.968935) {
            var213 = -0.0017297141;
        } else {
            var213 = 0.06314828;
        }
    } else {
        if (input[4] >= -0.031910002) {
            var213 = -0.041247346;
        } else {
            var213 = 0.051837124;
        }
    }
    double var214;
    if (input[1] >= 1.1535015) {
        if (input[2] >= 10.235041) {
            var214 = 0.049621385;
        } else {
            var214 = -0.0010120256;
        }
    } else {
        if (input[3] >= 0.0373485) {
            var214 = 0.026380965;
        } else {
            var214 = -0.029204363;
        }
    }
    double var215;
    if (input[1] >= 0.38477498) {
        if (input[2] >= 12.256437) {
            var215 = 0.0681408;
        } else {
            var215 = -0.003926747;
        }
    } else {
        if (input[3] >= 0.0063075) {
            var215 = 0.07905807;
        } else {
            var215 = -0.037290934;
        }
    }
    double var216;
    if (input[1] >= 1.1535015) {
        if (input[2] >= 12.009226) {
            var216 = 0.08788419;
        } else {
            var216 = 0.0020808473;
        }
    } else {
        if (input[1] >= 1.05538) {
            var216 = -0.06379766;
        } else {
            var216 = 0.0045427848;
        }
    }
    double var217;
    if (input[1] >= -0.9996215) {
        if (input[1] >= 0.38477498) {
            var217 = -0.0013714862;
        } else {
            var217 = 0.027038192;
        }
    } else {
        var217 = -0.080317594;
    }
    double var218;
    if (input[1] >= 0.827704) {
        if (input[1] >= 0.968935) {
            var218 = -0.00128395;
        } else {
            var218 = 0.06004415;
        }
    } else {
        if (input[4] >= -0.031910002) {
            var218 = -0.037607387;
        } else {
            var218 = 0.047738906;
        }
    }
    double var219;
    if (input[4] >= 0.0204685) {
        if (input[5] >= 0.27076697) {
            var219 = -0.029137237;
        } else {
            var219 = 0.01768641;
        }
    } else {
        if (input[4] >= 0.0166435) {
            var219 = -0.084075615;
        } else {
            var219 = -0.0021167684;
        }
    }
    double var220;
    if (input[5] >= 0.6425265) {
        if (input[0] >= -0.5634285) {
            var220 = -0.00046974156;
        } else {
            var220 = 0.07871518;
        }
    } else {
        if (input[3] >= -0.3806975) {
            var220 = 0.001568584;
        } else {
            var220 = -0.02340457;
        }
    }
    double var221;
    if (input[2] >= 8.001685) {
        if (input[4] >= 0.179346) {
            var221 = -0.020812646;
        } else {
            var221 = 0.0019612608;
        }
    } else {
        if (input[0] >= -1.0869646) {
            var221 = 0.0313947;
        } else {
            var221 = -0.1432674;
        }
    }
    double var222;
    if (input[4] >= 0.04817) {
        if (input[1] >= 1.0636129) {
            var222 = -0.0048189024;
        } else {
            var222 = 0.04580917;
        }
    } else {
        if (input[0] >= -0.3715275) {
            var222 = -0.033914685;
        } else {
            var222 = 0.0021565536;
        }
    }
    double var223;
    if (input[1] >= 1.1535015) {
        if (input[3] >= 0.131881) {
            var223 = -0.018719867;
        } else {
            var223 = 0.014029413;
        }
    } else {
        if (input[3] >= 0.0373485) {
            var223 = 0.022190021;
        } else {
            var223 = -0.0258723;
        }
    }
    double var224;
    if (input[4] >= -0.40674102) {
        if (input[1] >= 1.1535015) {
            var224 = 0.007964196;
        } else {
            var224 = -0.009113624;
        }
    } else {
        if (input[2] >= 9.482407) {
            var224 = -0.046315942;
        } else {
            var224 = 0.044750985;
        }
    }
    double var225;
    if (input[5] >= 0.42735398) {
        if (input[2] >= 9.750124) {
            var225 = -0.025770226;
        } else {
            var225 = 0.06953796;
        }
    } else {
        if (input[5] >= 0.3368465) {
            var225 = -0.037940837;
        } else {
            var225 = 0.00056753337;
        }
    }
    double var226;
    if (input[3] >= 0.922359) {
        var226 = -0.06661833;
    } else {
        if (input[3] >= 0.5885765) {
            var226 = 0.055890657;
        } else {
            var226 = -0.0006707669;
        }
    }
    double var227;
    if (input[3] >= -0.011286) {
        if (input[3] >= 0.002782) {
            var227 = 0.0007500343;
        } else {
            var227 = -0.055182274;
        }
    } else {
        if (input[3] >= -0.0172415) {
            var227 = 0.081040785;
        } else {
            var227 = 0.0022600305;
        }
    }
    double var228;
    if (input[4] >= 0.590768) {
        if (input[4] >= 0.627698) {
            var228 = 0.014657971;
        } else {
            var228 = -0.1801507;
        }
    } else {
        if (input[0] >= 0.2916685) {
            var228 = 0.06399729;
        } else {
            var228 = -0.00007948582;
        }
    }
    double var229;
    if (input[1] >= 0.40618002) {
        if (input[1] >= 0.6426885) {
            var229 = 0.0020555526;
        } else {
            var229 = -0.044151697;
        }
    } else {
        if (input[2] >= 11.312576) {
            var229 = -0.03849208;
        } else {
            var229 = 0.0673297;
        }
    }
    double var230;
    if (input[5] >= 0.6425265) {
        if (input[0] >= -0.5634285) {
            var230 = -0.00051378424;
        } else {
            var230 = 0.07613067;
        }
    } else {
        if (input[3] >= -0.4980515) {
            var230 = 0.0011555516;
        } else {
            var230 = -0.025834644;
        }
    }
    double var231;
    if (input[1] >= 3.096386) {
        var231 = 0.064436875;
    } else {
        if (input[1] >= 1.78167) {
            var231 = -0.010210716;
        } else {
            var231 = 0.0029798436;
        }
    }
    double var232;
    if (input[3] >= -0.026379) {
        if (input[3] >= -0.020342499) {
            var232 = -0.0021385471;
        } else {
            var232 = -0.07792615;
        }
    } else {
        if (input[5] >= -0.652264) {
            var232 = 0.009756054;
        } else {
            var232 = -0.08403256;
        }
    }
    double var233;
    if (input[4] >= 0.04817) {
        if (input[3] >= 0.125671) {
            var233 = -0.020110793;
        } else {
            var233 = 0.02558188;
        }
    } else {
        if (input[0] >= -0.3715275) {
            var233 = -0.03018549;
        } else {
            var233 = 0.0020823923;
        }
    }
    double var234;
    if (input[4] >= 0.179346) {
        if (input[0] >= -0.776585) {
            var234 = -0.033864245;
        } else {
            var234 = 0.04574896;
        }
    } else {
        if (input[4] >= 0.103334) {
            var234 = 0.052749712;
        } else {
            var234 = -0.0021284458;
        }
    }
    double var235;
    if (input[1] >= 2.1874766) {
        if (input[1] >= 2.3401585) {
            var235 = 0.0021183186;
        } else {
            var235 = 0.08298867;
        }
    } else {
        if (input[1] >= 1.794094) {
            var235 = -0.016257381;
        } else {
            var235 = 0.0025252393;
        }
    }
    double var236;
    if (input[1] >= 2.745216) {
        if (input[5] >= 0.1872025) {
            var236 = -0.067620896;
        } else {
            var236 = 0.0816366;
        }
    } else {
        if (input[3] >= 0.48847002) {
            var236 = 0.029725049;
        } else {
            var236 = -0.0019920033;
        }
    }
    double var237;
    if (input[2] >= 12.929812) {
        if (input[5] >= 0.023416001) {
            var237 = 0.092107855;
        } else {
            var237 = -0.032172445;
        }
    } else {
        if (input[1] >= -0.6274205) {
            var237 = -0.0000012191642;
        } else {
            var237 = -0.11243907;
        }
    }
    double var238;
    if (input[0] >= 0.4043845) {
        var238 = 0.063577674;
    } else {
        if (input[0] >= 0.2314935) {
            var238 = -0.04379466;
        } else {
            var238 = 0.00052343815;
        }
    }
    double var239;
    if (input[0] >= -0.0660875) {
        if (input[4] >= -0.0317285) {
            var239 = -0.02737231;
        } else {
            var239 = 0.07598459;
        }
    } else {
        if (input[0] >= -0.143776) {
            var239 = -0.08152213;
        } else {
            var239 = 0.0002374739;
        }
    }
    double var240;
    if (input[0] >= -1.041085) {
        if (input[0] >= -0.977243) {
            var240 = 0.000041122497;
        } else {
            var240 = 0.08429519;
        }
    } else {
        if (input[5] >= 0.021443501) {
            var240 = 0.03345018;
        } else {
            var240 = -0.07001647;
        }
    }
    double var241;
    if (input[3] >= 0.922359) {
        var241 = -0.062556;
    } else {
        if (input[3] >= 0.5885765) {
            var241 = 0.051133968;
        } else {
            var241 = -0.0005158706;
        }
    }
    double var242;
    if (input[4] >= 0.590768) {
        if (input[4] >= 0.62321246) {
            var242 = 0.01724122;
        } else {
            var242 = -0.1880729;
        }
    } else {
        if (input[0] >= 0.2916685) {
            var242 = 0.061930995;
        } else {
            var242 = -0.000038953152;
        }
    }
    double var243;
    if (input[4] >= -0.390273) {
        if (input[4] >= -0.36298698) {
            var243 = 0.00042157975;
        } else {
            var243 = 0.0860878;
        }
    } else {
        if (input[1] >= 1.1481874) {
            var243 = -0.044272956;
        } else {
            var243 = 0.03707154;
        }
    }
    double var244;
    if (input[2] >= 8.001685) {
        if (input[3] >= -0.7686105) {
            var244 = -0.00042320343;
        } else {
            var244 = -0.053800356;
        }
    } else {
        if (input[0] >= -0.7506145) {
            var244 = 0.042444896;
        } else {
            var244 = -0.064474694;
        }
    }
    double var245;
    if (input[5] >= 0.6425265) {
        if (input[0] >= -0.5634285) {
            var245 = -0.00010783165;
        } else {
            var245 = 0.07411199;
        }
    } else {
        if (input[4] >= 0.590768) {
            var245 = -0.04251299;
        } else {
            var245 = 0.00028040036;
        }
    }
    double var246;
    if (input[1] >= 0.38477498) {
        if (input[2] >= 12.256437) {
            var246 = 0.065172575;
        } else {
            var246 = -0.0034760803;
        }
    } else {
        if (input[2] >= 11.312576) {
            var246 = -0.037209295;
        } else {
            var246 = 0.07154583;
        }
    }
    double var247;
    if (input[1] >= 1.2262499) {
        if (input[2] >= 9.727746) {
            var247 = 0.026181301;
        } else {
            var247 = -0.0068689897;
        }
    } else {
        if (input[2] >= 9.696311) {
            var247 = -0.018611068;
        } else {
            var247 = 0.02543348;
        }
    }
    double var248;
    if (input[1] >= 3.096386) {
        var248 = 0.06203866;
    } else {
        if (input[1] >= 0.38477498) {
            var248 = -0.0018332528;
        } else {
            var248 = 0.018813254;
        }
    }
    double var249;
    if (input[1] >= -0.9996215) {
        if (input[1] >= 0.35326552) {
            var249 = -0.001126592;
        } else {
            var249 = 0.025099149;
        }
    } else {
        var249 = -0.067537434;
    }
    double var250;
    if (input[1] >= 0.827704) {
        if (input[1] >= 0.968935) {
            var250 = -0.0014129011;
        } else {
            var250 = 0.05667139;
        }
    } else {
        if (input[4] >= -0.031910002) {
            var250 = -0.033166047;
        } else {
            var250 = 0.045242015;
        }
    }
    double var251;
    if (input[4] >= 0.009283001) {
        if (input[0] >= 0.18666199) {
            var251 = -0.070149675;
        } else {
            var251 = 0.009007585;
        }
    } else {
        if (input[3] >= -0.0457015) {
            var251 = -0.013387811;
        } else {
            var251 = 0.0130548375;
        }
    }
    double var252;
    if (input[1] >= 1.2262499) {
        if (input[0] >= -0.822839) {
            var252 = -0.0034280748;
        } else {
            var252 = 0.032233577;
        }
    } else {
        if (input[4] >= -0.2813455) {
            var252 = -0.012106671;
        } else {
            var252 = 0.04876612;
        }
    }
    double var253;
    if (input[4] >= -0.390273) {
        if (input[4] >= -0.36298698) {
            var253 = 0.0006289476;
        } else {
            var253 = 0.083772786;
        }
    } else {
        if (input[5] >= 0.108458504) {
            var253 = -0.05991469;
        } else {
            var253 = 0.011946273;
        }
    }
    double var254;
    if (input[0] >= -1.041085) {
        if (input[0] >= -0.977243) {
            var254 = 0.0002455398;
        } else {
            var254 = 0.081681766;
        }
    } else {
        if (input[3] >= 0.022986501) {
            var254 = 0.04376979;
        } else {
            var254 = -0.05139192;
        }
    }
    double var255;
    if (input[2] >= 12.339291) {
        if (input[3] >= -0.0060535) {
            var255 = 0.072481565;
        } else {
            var255 = -0.046871796;
        }
    } else {
        if (input[2] >= 12.11835) {
            var255 = -0.07037121;
        } else {
            var255 = 0.00007959257;
        }
    }
    double var256;
    if (input[4] >= 0.179346) {
        if (input[3] >= 0.125671) {
            var256 = -0.049237173;
        } else {
            var256 = 0.019024914;
        }
    } else {
        if (input[4] >= 0.103334) {
            var256 = 0.04955132;
        } else {
            var256 = -0.0017426637;
        }
    }
    double var257;
    if (input[5] >= -0.52387655) {
        if (input[5] >= -0.341204) {
            var257 = -0.00080561795;
        } else {
            var257 = 0.030356292;
        }
    } else {
        if (input[5] >= -0.692096) {
            var257 = -0.057153415;
        } else {
            var257 = 0.041303422;
        }
    }
    double var258;
    if (input[5] >= 0.6425265) {
        if (input[0] >= -0.5634285) {
            var258 = 0.00025823768;
        } else {
            var258 = 0.07264422;
        }
    } else {
        if (input[3] >= -0.3806975) {
            var258 = 0.001497693;
        } else {
            var258 = -0.020828856;
        }
    }
    double var259;
    if (input[0] >= -0.0660875) {
        if (input[2] >= 10.260414) {
            var259 = -0.06264096;
        } else {
            var259 = 0.04797215;
        }
    } else {
        if (input[0] >= -0.143776) {
            var259 = -0.07106652;
        } else {
            var259 = 0.00032231628;
        }
    }
    double var260;
    if (input[0] >= -0.537682) {
        if (input[1] >= 1.6509914) {
            var260 = 0.041378465;
        } else {
            var260 = -0.013656884;
        }
    } else {
        if (input[1] >= 1.757645) {
            var260 = -0.035800744;
        } else {
            var260 = 0.007711763;
        }
    }
    double var261;
    if (input[3] >= 0.3595015) {
        if (input[5] >= -0.198597) {
            var261 = -0.0036481128;
        } else {
            var261 = 0.085429266;
        }
    } else {
        if (input[3] >= 0.3303055) {
            var261 = -0.13557117;
        } else {
            var261 = 0.0013860812;
        }
    }
    double var262;
    if (input[2] >= 12.929812) {
        if (input[5] >= 0.023416001) {
            var262 = 0.08979001;
        } else {
            var262 = -0.027477851;
        }
    } else {
        if (input[1] >= -0.6274205) {
            var262 = 0.000012582155;
        } else {
            var262 = -0.0930014;
        }
    }
    double var263;
    if (input[1] >= 0.40618002) {
        if (input[2] >= 12.256437) {
            var263 = 0.06223231;
        } else {
            var263 = -0.0032108163;
        }
    } else {
        if (input[3] >= 0.043429002) {
            var263 = 0.08928301;
        } else {
            var263 = -0.018929323;
        }
    }
    double var264;
    if (input[1] >= 3.096386) {
        var264 = 0.060238387;
    } else {
        if (input[0] >= -0.4248915) {
            var264 = -0.010013841;
        } else {
            var264 = 0.0024320965;
        }
    }
    double var265;
    if (input[0] >= 0.4043845) {
        var265 = 0.060377806;
    } else {
        if (input[0] >= 0.2314935) {
            var265 = -0.043633524;
        } else {
            var265 = 0.0006432645;
        }
    }
    double var266;
    if (input[2] >= 7.5874968) {
        if (input[2] >= 7.7071733) {
            var266 = 0.000049212507;
        } else {
            var266 = -0.08375897;
        }
    } else {
        if (input[0] >= -1.084794) {
            var266 = 0.033842165;
        } else {
            var266 = -0.1163972;
        }
    }
    double var267;
    if (input[4] >= -0.46908998) {
        if (input[4] >= -0.43034148) {
            var267 = 0.000027507873;
        } else {
            var267 = 0.08622071;
        }
    } else {
        if (input[4] >= -0.569426) {
            var267 = -0.066972606;
        } else {
            var267 = 0.031028284;
        }
    }
    double var268;
    if (input[0] >= -1.816772) {
        if (input[3] >= 0.922359) {
            var268 = -0.06481426;
        } else {
            var268 = 0.0014342733;
        }
    } else {
        if (input[1] >= 0.58333695) {
            var268 = -0.075640306;
        } else {
            var268 = 0.012370097;
        }
    }
    double var269;
    if (input[0] >= 0.2916685) {
        if (input[5] >= 0.049271) {
            var269 = -0.0045563304;
        } else {
            var269 = 0.06933028;
        }
    } else {
        if (input[0] >= 0.266371) {
            var269 = -0.10392394;
        } else {
            var269 = 0.0003134849;
        }
    }
    double var270;
    if (input[4] >= -0.40674102) {
        if (input[4] >= -0.36298698) {
            var270 = 0.00040548271;
        } else {
            var270 = 0.056646455;
        }
    } else {
        if (input[4] >= -0.41856) {
            var270 = -0.11441567;
        } else {
            var270 = -0.0015021561;
        }
    }
    double var271;
    if (input[3] >= -0.9837835) {
        if (input[3] >= -0.010514) {
            var271 = -0.004145257;
        } else {
            var271 = 0.0069039064;
        }
    } else {
        if (input[5] >= -0.27104747) {
            var271 = -0.07373747;
        } else {
            var271 = -0.00052107975;
        }
    }
    double var272;
    if (input[3] >= 0.3595015) {
        if (input[5] >= -0.198597) {
            var272 = -0.0027225802;
        } else {
            var272 = 0.08304791;
        }
    } else {
        if (input[3] >= 0.3303055) {
            var272 = -0.11278317;
        } else {
            var272 = 0.0010740726;
        }
    }
    double var273;
    if (input[1] >= 1.1535015) {
        if (input[2] >= 10.235041) {
            var273 = 0.044909168;
        } else {
            var273 = -0.0013085477;
        }
    } else {
        if (input[1] >= 1.05538) {
            var273 = -0.052880358;
        } else {
            var273 = 0.004333575;
        }
    }
    double var274;
    if (input[2] >= 9.641077) {
        if (input[2] >= 9.674532) {
            var274 = -0.0011717746;
        } else {
            var274 = -0.042866584;
        }
    } else {
        if (input[3] >= 0.0412755) {
            var274 = 0.025456006;
        } else {
            var274 = -0.005440924;
        }
    }
    double var275;
    if (input[5] >= 0.6425265) {
        if (input[1] >= 1.135539) {
            var275 = 0.06927922;
        } else {
            var275 = -0.00222412;
        }
    } else {
        if (input[3] >= -0.3806975) {
            var275 = 0.001281957;
        } else {
            var275 = -0.01932188;
        }
    }
    double var276;
    if (input[3] >= -0.010514) {
        if (input[3] >= -0.009545) {
            var276 = -0.0022793645;
        } else {
            var276 = -0.15423939;
        }
    } else {
        if (input[3] >= -0.0172415) {
            var276 = 0.06908277;
        } else {
            var276 = 0.001352926;
        }
    }
    double var277;
    if (input[2] >= 9.821152) {
        if (input[2] >= 9.856329) {
            var277 = 0.0049667624;
        } else {
            var277 = -0.08216677;
        }
    } else {
        if (input[1] >= 0.97844005) {
            var277 = -0.0021328968;
        } else {
            var277 = 0.03844833;
        }
    }
    double var278;
    if (input[1] >= 0.827704) {
        if (input[1] >= 0.968935) {
            var278 = -0.0010610563;
        } else {
            var278 = 0.05215689;
        }
    } else {
        if (input[3] >= -0.051039502) {
            var278 = -0.029546559;
        } else {
            var278 = 0.05392749;
        }
    }
    double var279;
    if (input[1] >= 1.1332185) {
        if (input[0] >= -0.8274045) {
            var279 = -0.0037175955;
        } else {
            var279 = 0.03184473;
        }
    } else {
        if (input[1] >= 1.05538) {
            var279 = -0.06158445;
        } else {
            var279 = 0.0030427254;
        }
    }
    double var280;
    if (input[0] >= -1.041085) {
        if (input[1] >= 0.067659) {
            var280 = -0.000029443612;
        } else {
            var280 = 0.07510912;
        }
    } else {
        if (input[5] >= 0.021443501) {
            var280 = 0.0298892;
        } else {
            var280 = -0.059781667;
        }
    }
    double var281;
    if (input[1] >= 0.827704) {
        if (input[1] >= 0.968935) {
            var281 = -0.000743271;
        } else {
            var281 = 0.04868107;
        }
    } else {
        if (input[3] >= 0.13730049) {
            var281 = 0.052711643;
        } else {
            var281 = -0.02863116;
        }
    }
    double var282;
    if (input[1] >= 1.1047025) {
        if (input[2] >= 10.235041) {
            var282 = 0.047888644;
        } else {
            var282 = -0.0018587029;
        }
    } else {
        if (input[1] >= 1.05538) {
            var282 = -0.08078586;
        } else {
            var282 = 0.0024991597;
        }
    }
    double var283;
    if (input[4] >= 0.179346) {
        if (input[2] >= 8.818387) {
            var283 = -0.024580643;
        } else {
            var283 = 0.061336108;
        }
    } else {
        if (input[4] >= 0.103334) {
            var283 = 0.046447754;
        } else {
            var283 = -0.0015168017;
        }
    }
    double var284;
    if (input[5] >= -0.4530955) {
        if (input[5] >= -0.38410848) {
            var284 = -0.00040482005;
        } else {
            var284 = 0.055834062;
        }
    } else {
        if (input[1] >= 1.740655) {
            var284 = 0.03294263;
        } else {
            var284 = -0.046272863;
        }
    }
    double var285;
    if (input[5] >= 0.6425265) {
        if (input[0] >= -0.5634285) {
            var285 = 0.0009955219;
        } else {
            var285 = 0.0688916;
        }
    } else {
        if (input[3] >= -0.3806975) {
            var285 = 0.0013481984;
        } else {
            var285 = -0.018479776;
        }
    }
    double var286;
    if (input[0] >= -0.5696405) {
        if (input[1] >= 1.6509914) {
            var286 = 0.034564193;
        } else {
            var286 = -0.009895515;
        }
    } else {
        if (input[1] >= 1.781146) {
            var286 = -0.035140455;
        } else {
            var286 = 0.0065081194;
        }
    }
    double var287;
    if (input[0] >= -0.44135702) {
        if (input[4] >= 0.0420755) {
            var287 = 0.03134159;
        } else {
            var287 = -0.02746804;
        }
    } else {
        if (input[0] >= -0.537682) {
            var287 = 0.03021614;
        } else {
            var287 = -0.0031452943;
        }
    }
    double var288;
    if (input[4] >= 0.171463) {
        if (input[1] >= 1.7217945) {
            var288 = -0.05790035;
        } else {
            var288 = 0.01270251;
        }
    } else {
        if (input[4] >= 0.103334) {
            var288 = 0.04896901;
        } else {
            var288 = -0.0010637721;
        }
    }
    double var289;
    if (input[2] >= 9.821152) {
        if (input[2] >= 9.856329) {
            var289 = 0.003965061;
        } else {
            var289 = -0.07144525;
        }
    } else {
        if (input[4] >= 0.171445) {
            var289 = -0.026416764;
        } else {
            var289 = 0.009804026;
        }
    }
    double var290;
    if (input[1] >= 3.096386) {
        var290 = 0.05811299;
    } else {
        if (input[0] >= -0.4248915) {
            var290 = -0.009810067;
        } else {
            var290 = 0.0023875164;
        }
    }
    double var291;
    if (input[0] >= 0.4043845) {
        var291 = 0.057971507;
    } else {
        if (input[0] >= 0.202304) {
            var291 = -0.035388123;
        } else {
            var291 = 0.0006762961;
        }
    }
    double var292;
    if (input[0] >= -0.0660875) {
        if (input[4] >= -0.0317285) {
            var292 = -0.025419489;
        } else {
            var292 = 0.07354817;
        }
    } else {
        if (input[0] >= -0.143776) {
            var292 = -0.06347068;
        } else {
            var292 = 0.00027385107;
        }
    }
    double var293;
    if (input[0] >= -1.041085) {
        if (input[1] >= 0.067659) {
            var293 = 0.000007108101;
        } else {
            var293 = 0.07265475;
        }
    } else {
        if (input[3] >= 0.0467745) {
            var293 = 0.044833966;
        } else {
            var293 = -0.041138336;
        }
    }
    double var294;
    if (input[3] >= -0.0108385) {
        if (input[2] >= 12.322375) {
            var294 = 0.056701906;
        } else {
            var294 = -0.0070776865;
        }
    } else {
        if (input[3] >= -0.0172415) {
            var294 = 0.07240855;
        } else {
            var294 = 0.0017087497;
        }
    }
    double var295;
    if (input[1] >= 0.827704) {
        if (input[1] >= 0.968935) {
            var295 = -0.00031689805;
        } else {
            var295 = 0.045386415;
        }
    } else {
        if (input[3] >= -0.051039502) {
            var295 = -0.027809722;
        } else {
            var295 = 0.051918965;
        }
    }
    double var296;
    if (input[1] >= 1.1047025) {
        if (input[0] >= -0.8274045) {
            var296 = -0.004155907;
        } else {
            var296 = 0.03294123;
        }
    } else {
        if (input[3] >= 0.081607) {
            var296 = 0.03453055;
        } else {
            var296 = -0.022599107;
        }
    }
    double var297;
    if (input[3] >= 0.2893505) {
        if (input[3] >= 0.35206652) {
            var297 = 0.012985698;
        } else {
            var297 = -0.061041664;
        }
    } else {
        if (input[3] >= 0.177534) {
            var297 = 0.027027598;
        } else {
            var297 = -0.0009591851;
        }
    }
    double var298;
    if (input[3] >= 0.922359) {
        var298 = -0.055060428;
    } else {
        if (input[0] >= 0.2916685) {
            var298 = 0.058602627;
        } else {
            var298 = -0.00019011543;
        }
    }
    double var299;
    if (input[4] >= -0.46908998) {
        if (input[4] >= -0.43034148) {
            var299 = 0.0001161647;
        } else {
            var299 = 0.084526986;
        }
    } else {
        if (input[2] >= 9.32456) {
            var299 = -0.044529494;
        } else {
            var299 = 0.07228881;
        }
    }
    double var300;
    if (input[0] >= -1.041085) {
        if (input[0] >= -0.977243) {
            var300 = 0.00026646172;
        } else {
            var300 = 0.07760208;
        }
    } else {
        if (input[5] >= 0.021443501) {
            var300 = 0.027205398;
        } else {
            var300 = -0.050756257;
        }
    }
    double var301;
    if (input[5] >= -0.004752) {
        if (input[5] >= -0.000645) {
            var301 = -0.0012384156;
        } else {
            var301 = -0.08304062;
        }
    } else {
        if (input[0] >= -0.88428605) {
            var301 = 0.015294226;
        } else {
            var301 = -0.04224856;
        }
    }
    double var302;
    if (input[1] >= 0.40618002) {
        if (input[1] >= 0.6426885) {
            var302 = 0.0017682033;
        } else {
            var302 = -0.03541827;
        }
    } else {
        if (input[3] >= 0.0063075) {
            var302 = 0.068713;
        } else {
            var302 = -0.027708573;
        }
    }
    double var303;
    if (input[3] >= -0.0104095) {
        if (input[3] >= -0.009545) {
            var303 = -0.0021642984;
        } else {
            var303 = -0.17937182;
        }
    } else {
        if (input[2] >= 12.743225) {
            var303 = -0.08412815;
        } else {
            var303 = 0.008609357;
        }
    }
    double var304;
    if (input[2] >= 12.929812) {
        if (input[5] >= 0.023416001) {
            var304 = 0.08670508;
        } else {
            var304 = -0.02112622;
        }
    } else {
        if (input[1] >= -0.6274205) {
            var304 = 0.000041524632;
        } else {
            var304 = -0.08986028;
        }
    }
    double var305;
    if (input[3] >= 0.922359) {
        var305 = -0.051362436;
    } else {
        if (input[1] >= 2.8244765) {
            var305 = 0.058096804;
        } else {
            var305 = -0.00031637304;
        }
    }
    double var306;
    if (input[1] >= 0.40618002) {
        if (input[2] >= 12.256437) {
            var306 = 0.059756644;
        } else {
            var306 = -0.002917189;
        }
    } else {
        if (input[3] >= 0.0063075) {
            var306 = 0.06586226;
        } else {
            var306 = -0.023311647;
        }
    }
    double var307;
    if (input[4] >= -0.390273) {
        if (input[4] >= -0.36298698) {
            var307 = 0.00041339485;
        } else {
            var307 = 0.0809632;
        }
    } else {
        if (input[1] >= 1.974993) {
            var307 = 0.05934391;
        } else {
            var307 = -0.031390082;
        }
    }
    double var308;
    if (input[4] >= -0.569426) {
        if (input[4] >= -0.540396) {
            var308 = 0.0004214126;
        } else {
            var308 = -0.0991484;
        }
    } else {
        if (input[4] >= -0.648521) {
            var308 = 0.08158963;
        } else {
            var308 = -0.007454233;
        }
    }
    double var309;
    if (input[5] >= 0.6425265) {
        if (input[1] >= 1.135539) {
            var309 = 0.06610557;
        } else {
            var309 = -0.0021761104;
        }
    } else {
        if (input[3] >= -0.4980515) {
            var309 = 0.0010566465;
        } else {
            var309 = -0.020759284;
        }
    }
    double var310;
    if (input[3] >= -0.19710901) {
        if (input[3] >= -0.1820625) {
            var310 = -0.00055097055;
        } else {
            var310 = -0.103502594;
        }
    } else {
        if (input[0] >= -0.8057745) {
            var310 = -0.0048476886;
        } else {
            var310 = 0.06378246;
        }
    }
    double var311;
    if (input[3] >= -0.0104095) {
        if (input[3] >= -0.009545) {
            var311 = -0.002176482;
        } else {
            var311 = -0.16201636;
        }
    } else {
        if (input[2] >= 12.743225) {
            var311 = -0.07684123;
        } else {
            var311 = 0.008234981;
        }
    }
    double var312;
    if (input[4] >= 0.590768) {
        if (input[4] >= 0.618657) {
            var312 = 0.023236386;
        } else {
            var312 = -0.18303399;
        }
    } else {
        if (input[4] >= 0.541685) {
            var312 = 0.07237458;
        } else {
            var312 = 0.00008218658;
        }
    }
    double var313;
    if (input[1] >= 0.40618002) {
        if (input[2] >= 12.256437) {
            var313 = 0.05832478;
        } else {
            var313 = -0.002828165;
        }
    } else {
        if (input[2] >= 11.312576) {
            var313 = -0.028728163;
        } else {
            var313 = 0.058727738;
        }
    }
    double var314;
    if (input[2] >= 7.5535927) {
        if (input[2] >= 7.7071733) {
            var314 = 0.0000908095;
        } else {
            var314 = -0.0655796;
        }
    } else {
        if (input[0] >= -0.766556) {
            var314 = 0.043154035;
        } else {
            var314 = -0.058063697;
        }
    }
    double var315;
    if (input[2] >= 6.585705) {
        if (input[2] >= 6.966139) {
            var315 = -0.00047632825;
        } else {
            var315 = 0.06445705;
        }
    } else {
        if (input[4] >= -0.034135498) {
            var315 = -0.109238386;
        } else {
            var315 = 0.056231696;
        }
    }
    double var316;
    if (input[0] >= -0.44135702) {
        if (input[1] >= 1.3678555) {
            var316 = 0.017030103;
        } else {
            var316 = -0.03728167;
        }
    } else {
        if (input[0] >= -0.537682) {
            var316 = 0.027304625;
        } else {
            var316 = -0.0028763183;
        }
    }
    double var317;
    if (input[3] >= -0.7686105) {
        if (input[3] >= -0.71086097) {
            var317 = 0.00015827607;
        } else {
            var317 = 0.07202535;
        }
    } else {
        if (input[2] >= 9.758282) {
            var317 = 0.049678925;
        } else {
            var317 = -0.074617736;
        }
    }
    double var318;
    if (input[5] >= -0.004752) {
        if (input[3] >= 0.131881) {
            var318 = -0.029285995;
        } else {
            var318 = 0.0047369073;
        }
    } else {
        if (input[0] >= -0.1920505) {
            var318 = 0.070156835;
        } else {
            var318 = -0.0007906989;
        }
    }
    double var319;
    if (input[3] >= -0.3806975) {
        if (input[3] >= -0.230427) {
            var319 = -0.0014401593;
        } else {
            var319 = 0.04304539;
        }
    } else {
        if (input[2] >= 9.86299) {
            var319 = 0.046315886;
        } else {
            var319 = -0.03656591;
        }
    }
    double var320;
    if (input[5] >= -0.52387655) {
        if (input[5] >= -0.335621) {
            var320 = -0.000643316;
        } else {
            var320 = 0.02508661;
        }
    } else {
        if (input[3] >= 0.291489) {
            var320 = 0.050835848;
        } else {
            var320 = -0.04421438;
        }
    }
    double var321;
    if (input[0] >= -0.4248915) {
        if (input[4] >= 0.050474502) {
            var321 = 0.029312283;
        } else {
            var321 = -0.023569278;
        }
    } else {
        if (input[0] >= -0.537682) {
            var321 = 0.022865035;
        } else {
            var321 = -0.002331492;
        }
    }
    double var322;
    if (input[5] >= -0.112204) {
        if (input[5] >= -0.074029) {
            var322 = -0.0009955037;
        } else {
            var322 = 0.060760953;
        }
    } else {
        if (input[5] >= -0.1496875) {
            var322 = -0.08005974;
        } else {
            var322 = 0.006096506;
        }
    }
    double var323;
    if (input[0] >= -0.646281) {
        if (input[2] >= 8.81749) {
            var323 = -0.010140223;
        } else {
            var323 = 0.024898065;
        }
    } else {
        if (input[4] >= 0.090877995) {
            var323 = 0.03003688;
        } else {
            var323 = -0.0029767624;
        }
    }
    double var324;
    if (input[4] >= 0.171463) {
        if (input[2] >= 9.862091) {
            var324 = 0.032915317;
        } else {
            var324 = -0.030790258;
        }
    } else {
        if (input[4] >= 0.103334) {
            var324 = 0.04433914;
        } else {
            var324 = -0.0006562313;
        }
    }
    double var325;
    if (input[2] >= 6.585705) {
        if (input[2] >= 6.966139) {
            var325 = -0.00028809725;
        } else {
            var325 = 0.061865773;
        }
    } else {
        if (input[4] >= -0.034135498) {
            var325 = -0.09971232;
        } else {
            var325 = 0.05417232;
        }
    }
    double var326;
    if (input[2] >= 9.821152) {
        if (input[2] >= 9.865459) {
            var326 = 0.004142951;
        } else {
            var326 = -0.05762459;
        }
    } else {
        if (input[2] >= 9.800046) {
            var326 = 0.064913906;
        } else {
            var326 = 0.00064132496;
        }
    }
    double var327;
    if (input[5] >= 0.6425265) {
        if (input[1] >= 1.135539) {
            var327 = 0.06506019;
        } else {
            var327 = -0.0017682755;
        }
    } else {
        if (input[3] >= -0.4980515) {
            var327 = 0.000977138;
        } else {
            var327 = -0.01914174;
        }
    }
    double var328;
    if (input[4] >= 0.590768) {
        if (input[4] >= 0.61357856) {
            var328 = 0.021908171;
        } else {
            var328 = -0.1687138;
        }
    } else {
        if (input[0] >= 0.2916685) {
            var328 = 0.05576035;
        } else {
            var328 = 0.000025797115;
        }
    }
    double var329;
    if (input[4] >= -0.569426) {
        if (input[4] >= -0.5515105) {
            var329 = 0.0002473955;
        } else {
            var329 = -0.10570984;
        }
    } else {
        if (input[4] >= -0.648521) {
            var329 = 0.07877577;
        } else {
            var329 = -0.0072326623;
        }
    }
    double var330;
    if (input[1] >= 3.096386) {
        var330 = 0.054832917;
    } else {
        if (input[1] >= 1.794094) {
            var330 = -0.008602481;
        } else {
            var330 = 0.002543886;
        }
    }
    double var331;
    if (input[0] >= -0.47421402) {
        if (input[1] >= 1.6509914) {
            var331 = 0.022652064;
        } else {
            var331 = -0.025386123;
        }
    } else {
        if (input[0] >= -0.537682) {
            var331 = 0.035475686;
        } else {
            var331 = -0.0021701322;
        }
    }
    double var332;
    if (input[1] >= 0.35326552) {
        if (input[2] >= 12.256437) {
            var332 = 0.060610272;
        } else {
            var332 = -0.0027337873;
        }
    } else {
        if (input[3] >= 0.043429002) {
            var332 = 0.0935203;
        } else {
            var332 = -0.015354618;
        }
    }
    double var333;
    if (input[4] >= 0.171463) {
        if (input[2] >= 8.818387) {
            var333 = -0.021543724;
        } else {
            var333 = 0.060590763;
        }
    } else {
        if (input[4] >= 0.103334) {
            var333 = 0.041550692;
        } else {
            var333 = -0.0005911167;
        }
    }
    double var334;
    if (input[2] >= 7.043004) {
        if (input[2] >= 7.5535927) {
            var334 = -0.0006263445;
        } else {
            var334 = 0.049351346;
        }
    } else {
        if (input[2] >= 6.966139) {
            var334 = -0.16245367;
        } else {
            var334 = 0.01573406;
        }
    }
    double var335;
    if (input[2] >= 6.585705) {
        if (input[2] >= 6.966139) {
            var335 = -0.00021070156;
        } else {
            var335 = 0.058944404;
        }
    } else {
        if (input[1] >= 1.7122145) {
            var335 = 0.03084522;
        } else {
            var335 = -0.11572088;
        }
    }
    double var336;
    if (input[1] >= 1.784963) {
        if (input[0] >= -0.76708) {
            var336 = -0.028392166;
        } else {
            var336 = 0.0536967;
        }
    } else {
        if (input[0] >= -0.47421402) {
            var336 = -0.016646199;
        } else {
            var336 = 0.009405347;
        }
    }
    double var337;
    if (input[5] >= -0.4530955) {
        if (input[5] >= -0.41806298) {
            var337 = 0.00012665334;
        } else {
            var337 = 0.06879793;
        }
    } else {
        if (input[0] >= -0.548385) {
            var337 = -0.06462624;
        } else {
            var337 = 0.007984194;
        }
    }
    double var338;
    if (input[5] >= -0.692096) {
        if (input[5] >= -0.5878895) {
            var338 = 0.0006586117;
        } else {
            var338 = -0.06658294;
        }
    } else {
        if (input[3] >= -0.400999) {
            var338 = 0.07671343;
        } else {
            var338 = -0.031104466;
        }
    }
    double var339;
    if (input[0] >= -1.816772) {
        if (input[0] >= -1.570534) {
            var339 = 0.00004742895;
        } else {
            var339 = 0.041383144;
        }
    } else {
        if (input[1] >= 0.4046085) {
            var339 = -0.061627205;
        } else {
            var339 = 0.02696206;
        }
    }
    double var340;
    if (input[0] >= -0.0660875) {
        if (input[2] >= 10.260414) {
            var340 = -0.05988604;
        } else {
            var340 = 0.04484315;
        }
    } else {
        if (input[0] >= -0.0858465) {
            var340 = -0.099314526;
        } else {
            var340 = -0.00029505385;
        }
    }
    double var341;
    if (input[2] >= 7.043004) {
        if (input[2] >= 7.5535927) {
            var341 = -0.00059220573;
        } else {
            var341 = 0.046587136;
        }
    } else {
        if (input[4] >= -0.0340215) {
            var341 = -0.08475737;
        } else {
            var341 = 0.05529046;
        }
    }
    double var342;
    if (input[5] >= 0.6425265) {
        if (input[0] >= -0.5634285) {
            var342 = -0.0014109204;
        } else {
            var342 = 0.06452193;
        }
    } else {
        if (input[5] >= 0.187205) {
            var342 = -0.009841105;
        } else {
            var342 = 0.0021740154;
        }
    }
    double var343;
    if (input[1] >= 3.096386) {
        var343 = 0.053573597;
    } else {
        if (input[1] >= 1.794094) {
            var343 = -0.008185673;
        } else {
            var343 = 0.0024329189;
        }
    }
    double var344;
    if (input[5] >= 0.42735398) {
        if (input[2] >= 9.750124) {
            var344 = -0.031180004;
        } else {
            var344 = 0.06345299;
        }
    } else {
        if (input[5] >= 0.3368465) {
            var344 = -0.033397578;
        } else {
            var344 = 0.00083584693;
        }
    }
    double var345;
    if (input[4] >= -0.569426) {
        if (input[4] >= -0.540396) {
            var345 = 0.0003614675;
        } else {
            var345 = -0.08151132;
        }
    } else {
        if (input[0] >= -0.6512205) {
            var345 = -0.007250319;
        } else {
            var345 = 0.07570996;
        }
    }
    double var346;
    if (input[0] >= -1.041085) {
        if (input[1] >= 0.067659) {
            var346 = -0.00006438628;
        } else {
            var346 = 0.070629716;
        }
    } else {
        if (input[4] >= -0.046265997) {
            var346 = -0.033657305;
        } else {
            var346 = 0.051558;
        }
    }
    double var347;
    if (input[5] >= -0.112204) {
        if (input[5] >= -0.057274) {
            var347 = -0.0014469927;
        } else {
            var347 = 0.04767207;
        }
    } else {
        if (input[5] >= -0.1175635) {
            var347 = -0.15909642;
        } else {
            var347 = -0.0016069917;
        }
    }
    double var348;
    if (input[3] >= 0.3595015) {
        if (input[5] >= -0.198597) {
            var348 = -0.0029072894;
        } else {
            var348 = 0.07889143;
        }
    } else {
        if (input[3] >= 0.3303055) {
            var348 = -0.09489623;
        } else {
            var348 = 0.0011664781;
        }
    }
    double var349;
    if (input[5] >= 0.067982) {
        if (input[3] >= 0.102629006) {
            var349 = -0.032720726;
        } else {
            var349 = 0.02836679;
        }
    } else {
        if (input[3] >= 0.0814625) {
            var349 = 0.023176335;
        } else {
            var349 = -0.013155523;
        }
    }
    double var350;
    if (input[1] >= -0.6295905) {
        if (input[1] >= 0.35326552) {
            var350 = -0.0008877252;
        } else {
            var350 = 0.024160555;
        }
    } else {
        if (input[4] >= -0.019402) {
            var350 = -0.12521148;
        } else {
            var350 = 0.06931261;
        }
    }
    double var351;
    if (input[0] >= 0.4043845) {
        var351 = 0.0531754;
    } else {
        if (input[0] >= 0.202304) {
            var351 = -0.038607042;
        } else {
            var351 = 0.00077225786;
        }
    }
    double var352;
    if (input[1] >= 0.64343655) {
        if (input[0] >= -2.2191348) {
            var352 = 0.0025929534;
        } else {
            var352 = -0.11680092;
        }
    } else {
        if (input[0] >= -0.5090165) {
            var352 = 0.036236864;
        } else {
            var352 = -0.034459528;
        }
    }
    double var353;
    if (input[5] >= -0.112204) {
        if (input[5] >= -0.074029) {
            var353 = -0.000583254;
        } else {
            var353 = 0.054882366;
        }
    } else {
        if (input[5] >= -0.1496875) {
            var353 = -0.06669765;
        } else {
            var353 = 0.0048682955;
        }
    }
    double var354;
    if (input[1] >= 3.096386) {
        var354 = 0.052380215;
    } else {
        if (input[1] >= 1.794094) {
            var354 = -0.007553005;
        } else {
            var354 = 0.002212221;
        }
    }
    double var355;
    var355 = sigmoid(var0 + var1 + var2 + var3 + var4 + var5 + var6 + var7 + var8 + var9 + var10 + var11 + var12 + var13 + var14 + var15 + var16 + var17 + var18 + var19 + var20 + var21 + var22 + var23 + var24 + var25 + var26 + var27 + var28 + var29 + var30 + var31 + var32 + var33 + var34 + var35 + var36 + var37 + var38 + var39 + var40 + var41 + var42 + var43 + var44 + var45 + var46 + var47 + var48 + var49 + var50 + var51 + var52 + var53 + var54 + var55 + var56 + var57 + var58 + var59 + var60 + var61 + var62 + var63 + var64 + var65 + var66 + var67 + var68 + var69 + var70 + var71 + var72 + var73 + var74 + var75 + var76 + var77 + var78 + var79 + var80 + var81 + var82 + var83 + var84 + var85 + var86 + var87 + var88 + var89 + var90 + var91 + var92 + var93 + var94 + var95 + var96 + var97 + var98 + var99 + var100 + var101 + var102 + var103 + var104 + var105 + var106 + var107 + var108 + var109 + var110 + var111 + var112 + var113 + var114 + var115 + var116 + var117 + var118 + var119 + var120 + var121 + var122 + var123 + var124 + var125 + var126 + var127 + var128 + var129 + var130 + var131 + var132 + var133 + var134 + var135 + var136 + var137 + var138 + var139 + var140 + var141 + var142 + var143 + var144 + var145 + var146 + var147 + var148 + var149 + var150 + var151 + var152 + var153 + var154 + var155 + var156 + var157 + var158 + var159 + var160 + var161 + var162 + var163 + var164 + var165 + var166 + var167 + var168 + var169 + var170 + var171 + var172 + var173 + var174 + var175 + var176 + var177 + var178 + var179 + var180 + var181 + var182 + var183 + var184 + var185 + var186 + var187 + var188 + var189 + var190 + var191 + var192 + var193 + var194 + var195 + var196 + var197 + var198 + var199 + var200 + var201 + var202 + var203 + var204 + var205 + var206 + var207 + var208 + var209 + var210 + var211 + var212 + var213 + var214 + var215 + var216 + var217 + var218 + var219 + var220 + var221 + var222 + var223 + var224 + var225 + var226 + var227 + var228 + var229 + var230 + var231 + var232 + var233 + var234 + var235 + var236 + var237 + var238 + var239 + var240 + var241 + var242 + var243 + var244 + var245 + var246 + var247 + var248 + var249 + var250 + var251 + var252 + var253 + var254 + var255 + var256 + var257 + var258 + var259 + var260 + var261 + var262 + var263 + var264 + var265 + var266 + var267 + var268 + var269 + var270 + var271 + var272 + var273 + var274 + var275 + var276 + var277 + var278 + var279 + var280 + var281 + var282 + var283 + var284 + var285 + var286 + var287 + var288 + var289 + var290 + var291 + var292 + var293 + var294 + var295 + var296 + var297 + var298 + var299 + var300 + var301 + var302 + var303 + var304 + var305 + var306 + var307 + var308 + var309 + var310 + var311 + var312 + var313 + var314 + var315 + var316 + var317 + var318 + var319 + var320 + var321 + var322 + var323 + var324 + var325 + var326 + var327 + var328 + var329 + var330 + var331 + var332 + var333 + var334 + var335 + var336 + var337 + var338 + var339 + var340 + var341 + var342 + var343 + var344 + var345 + var346 + var347 + var348 + var349 + var350 + var351 + var352 + var353 + var354);
    memcpy(output, (double[]){1.0 - var355, var355}, 2 * sizeof(double));
}
