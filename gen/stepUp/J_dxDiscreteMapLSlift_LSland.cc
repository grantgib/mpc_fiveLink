/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:25:56 GMT-05:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4)
{
  double t4934;
  double t162;
  double t6561;
  double t6566;
  double t6608;
  double t6615;
  double t6630;
  double t6642;
  double t6645;
  double t6736;
  double t6740;
  double t6795;
  double t7220;
  double t7632;
  double t7862;
  double t7879;
  double t6586;
  double t6590;
  double t6592;
  double t6564;
  double t6569;
  double t6577;
  double t6609;
  double t6618;
  double t6621;
  double t6629;
  double t6646;
  double t6656;
  double t6672;
  double t6673;
  double t6676;
  double t6687;
  double t6691;
  double t6694;
  double t6761;
  double t6762;
  double t6763;
  double t6739;
  double t6741;
  double t6755;
  double t7157;
  double t7370;
  double t7372;
  double t7594;
  double t8210;
  double t8318;
  double t9446;
  double t9534;
  double t9535;
  double t9606;
  double t9620;
  double t9628;
  double t12073;
  double t12082;
  double t12085;
  double t12095;
  double t12096;
  double t12097;
  double t12100;
  double t12120;
  double t12126;
  double t12132;
  double t12156;
  double t12217;
  double t12220;
  double t12221;
  double t12226;
  double t12249;
  double t12252;
  double t12758;
  double t12828;
  double t12847;
  double t12857;
  double t12868;
  double t9710;
  double t9724;
  double t10198;
  double t9661;
  double t9662;
  double t9669;
  double t13787;
  double t13793;
  double t13815;
  double t10222;
  double t10255;
  double t13633;
  double t13649;
  double t13662;
  double t13707;
  double t10996;
  double t11059;
  double t11074;
  double t10562;
  double t10733;
  double t10804;
  double t14039;
  double t14040;
  double t14092;
  double t11244;
  double t11280;
  double t13945;
  double t13952;
  double t13975;
  double t13979;
  double t6593;
  double t6764;
  double t11916;
  double t11974;
  double t11985;
  double t12001;
  double t12042;
  double t12125;
  double t12160;
  double t12168;
  double t12177;
  double t12178;
  double t12182;
  double t12194;
  double t12205;
  double t12209;
  double t12210;
  double t12213;
  double t12831;
  double t12878;
  double t12889;
  double t13531;
  double t13536;
  double t13559;
  double t14159;
  double t14161;
  double t14168;
  double t14177;
  double t14184;
  double t16191;
  double t16192;
  double t16195;
  double t16196;
  double t16197;
  double t14326;
  double t14336;
  double t14337;
  double t14341;
  double t14659;
  double t14660;
  double t14682;
  double t14684;
  double t14689;
  double t14690;
  double t14693;
  double t14694;
  double t14695;
  double t14705;
  double t14720;
  double t16103;
  double t16132;
  double t16146;
  double t16282;
  double t16283;
  double t16285;
  double t16210;
  double t16213;
  double t16214;
  double t16233;
  double t16245;
  double t16263;
  double t16265;
  double t16268;
  double t16269;
  double t16271;
  double t16272;
  double t16279;
  double t16291;
  double t16292;
  double t16306;
  double t16341;
  double t16344;
  double t16309;
  double t16347;
  double t16351;
  double t16315;
  double t14256;
  double t14257;
  double t14294;
  double t14301;
  double t14302;
  double t16366;
  double t16367;
  double t16368;
  double t16369;
  double t16371;
  double t14374;
  double t14396;
  double t14884;
  double t14885;
  double t14891;
  double t14896;
  double t14897;
  double t14918;
  double t15736;
  double t15798;
  double t15799;
  double t16158;
  double t16398;
  double t16399;
  double t16401;
  double t16372;
  double t16374;
  double t16376;
  double t16380;
  double t16382;
  double t16385;
  double t16386;
  double t16388;
  double t16391;
  double t16392;
  double t16393;
  double t16397;
  double t16407;
  double t16408;
  double t16414;
  double t16450;
  double t16451;
  double t16417;
  double t16455;
  double t16457;
  double t16419;
  double t2821;
  double t6543;
  double t6578;
  double t6657;
  double t6707;
  double t6756;
  double t8855;
  double t9645;
  double t9673;
  double t9694;
  double t10220;
  double t10257;
  double t10942;
  double t10960;
  double t11150;
  double t11307;
  double t11628;
  double t3171;
  double t6559;
  double t6597;
  double t14796;
  double t14834;
  double t6794;
  double t16078;
  double t16082;
  double t14749;
  double t14763;
  double t14842;
  double t14843;
  double t15938;
  double t16041;
  double t16091;
  double t16092;
  double t14791;
  double t14806;
  double t14841;
  double t14846;
  double t16055;
  double t16081;
  double t16083;
  double t16094;
  double t16095;
  double t11909;
  double t16652;
  double t16726;
  double t16273;
  double t16742;
  double t16288;
  double t16295;
  double t16298;
  double t16307;
  double t16311;
  double t16316;
  double t16758;
  double t16330;
  double t16331;
  double t16332;
  double t16760;
  double t16322;
  double t16323;
  double t16326;
  double t16762;
  double t16765;
  double t16766;
  double t16339;
  double t16798;
  double t16345;
  double t16352;
  double t16353;
  double t16805;
  double t16356;
  double t16358;
  double t16359;
  double t16684;
  double t16734;
  double t16394;
  double t16746;
  double t16402;
  double t16410;
  double t16411;
  double t16415;
  double t16418;
  double t16420;
  double t17802;
  double t16435;
  double t16437;
  double t16438;
  double t17803;
  double t16427;
  double t16429;
  double t16432;
  double t17805;
  double t17814;
  double t17815;
  double t16446;
  double t17976;
  double t16453;
  double t16459;
  double t16461;
  double t18039;
  double t16463;
  double t16465;
  double t16466;
  double t16491;
  double t16492;
  double t16493;
  double t16494;
  double t16495;
  double t16496;
  double t16497;
  double t16499;
  double t16500;
  double t16473;
  double t16476;
  double t16145;
  double t16152;
  double t16153;
  double t16166;
  double t16167;
  double t16170;
  double t14195;
  double t14242;
  double t14244;
  double t14303;
  double t14305;
  double t14322;
  double t12061;
  double t12174;
  double t12191;
  double t12214;
  double t12900;
  double t13613;
  double t13620;
  double t16590;
  double t16591;
  double t16593;
  double t16595;
  double t16596;
  double t16599;
  double t16600;
  double t16602;
  double t16744;
  double t16745;
  double t16747;
  double t16748;
  double t16749;
  double t16802;
  double t16806;
  double t17744;
  double t16299;
  double t16317;
  double t16318;
  double t17790;
  double t17791;
  double t17794;
  double t16354;
  double t16360;
  double t16362;
  double t18642;
  double t18647;
  double t18651;
  double t18654;
  double t18659;
  double t18663;
  double t18667;
  double t18674;
  double t18677;
  double t18684;
  double t18689;
  double t18690;
  double t18693;
  double t18694;
  double t18695;
  double t18696;
  double t17980;
  double t18057;
  double t18058;
  double t16412;
  double t16422;
  double t16424;
  double t18131;
  double t18132;
  double t18286;
  double t16462;
  double t16467;
  double t16468;
  double t16501;
  double t16504;
  double t16506;
  double t16507;
  double t16508;
  double t16509;
  double t16510;
  double t16511;
  double t18428;
  double t18447;
  double t18464;
  double t18487;
  double t18500;
  double t18511;
  double t18862;
  double t13622;
  double t13786;
  double t13854;
  double t13875;
  double t16603;
  double t16604;
  double t16610;
  double t16611;
  double t18529;
  double t18549;
  double t18580;
  double t18597;
  double t16656;
  double t16658;
  double t16659;
  double t16763;
  double t16217;
  double t18750;
  double t18752;
  double t18754;
  double t17774;
  double t17775;
  double t17779;
  double t16327;
  double t16333;
  double t16334;
  double t18779;
  double t18780;
  double t18787;
  double t18791;
  double t18792;
  double t16528;
  double t16534;
  double t16538;
  double t16548;
  double t18959;
  double t18960;
  double t18965;
  double t18967;
  double t19007;
  double t19012;
  double t13921;
  double t16612;
  double t18601;
  double t18609;
  double t19020;
  double t19021;
  double t19093;
  double t19094;
  double t16549;
  double t18354;
  double t18968;
  double t18970;
  double t19080;
  double t19081;
  double t13934;
  double t14010;
  double t14107;
  double t14126;
  double t16613;
  double t16617;
  double t16618;
  double t16619;
  double t18610;
  double t18626;
  double t18630;
  double t18636;
  double t16715;
  double t16717;
  double t16718;
  double t17812;
  double t16377;
  double t18823;
  double t18825;
  double t18830;
  double t18851;
  double t18863;
  double t18873;
  double t18874;
  double t18875;
  double t18876;
  double t18877;
  double t18880;
  double t18883;
  double t18891;
  double t18892;
  double t18895;
  double t18896;
  double t18084;
  double t18091;
  double t18092;
  double t16433;
  double t16439;
  double t16441;
  double t18897;
  double t18898;
  double t18899;
  double t18900;
  double t18901;
  double t16569;
  double t16570;
  double t16571;
  double t16572;
  double t18971;
  double t18972;
  double t18973;
  double t18974;
  double t19099;
  double t19101;
  double t18987;
  double t18988;
  double t18991;
  double t18992;
  double t18993;
  double t18999;
  double t19000;
  double t19004;
  double t19005;
  double t19006;
  double t14138;
  double t16626;
  double t18637;
  double t18640;
  double t19109;
  double t19110;
  double t19158;
  double t19159;
  double t16575;
  double t18414;
  double t18982;
  double t18983;
  double t19152;
  double t19153;
  double t19179;
  t4934 = Sin(var2[2]);
  t162 = Cos(var2[2]);
  t6561 = Cos(var2[3]);
  t6566 = Sin(var2[3]);
  t6608 = Cos(var2[4]);
  t6615 = Sin(var2[4]);
  t6630 = t6561*t6608;
  t6642 = -1.*t6566*t6615;
  t6645 = t6630 + t6642;
  t6736 = Cos(var2[5]);
  t6740 = Sin(var2[5]);
  t6795 = Cos(var2[6]);
  t7220 = Sin(var2[6]);
  t7632 = t6736*t6795;
  t7862 = -1.*t6740*t7220;
  t7879 = t7632 + t7862;
  t6586 = t162*t6561;
  t6590 = -1.*t4934*t6566;
  t6592 = t6586 + t6590;
  t6564 = t6561*t4934;
  t6569 = t162*t6566;
  t6577 = t6564 + t6569;
  t6609 = -1.*t6608*t6566;
  t6618 = -1.*t6561*t6615;
  t6621 = t6609 + t6618;
  t6629 = t4934*t6621;
  t6646 = t162*t6645;
  t6656 = t6629 + t6646;
  t6672 = t6608*t6566;
  t6673 = t6561*t6615;
  t6676 = t6672 + t6673;
  t6687 = t162*t6676;
  t6691 = t4934*t6645;
  t6694 = t6687 + t6691;
  t6761 = t162*t6736;
  t6762 = -1.*t4934*t6740;
  t6763 = t6761 + t6762;
  t6739 = t6736*t4934;
  t6741 = t162*t6740;
  t6755 = t6739 + t6741;
  t7157 = -1.*t6795*t6740;
  t7370 = -1.*t6736*t7220;
  t7372 = t7157 + t7370;
  t7594 = t4934*t7372;
  t8210 = t162*t7879;
  t8318 = t7594 + t8210;
  t9446 = t6795*t6740;
  t9534 = t6736*t7220;
  t9535 = t9446 + t9534;
  t9606 = t162*t9535;
  t9620 = t4934*t7879;
  t9628 = t9606 + t9620;
  t12073 = -1.*t6608;
  t12082 = 1. + t12073;
  t12085 = 0.4*t12082;
  t12095 = 0.64*t6608;
  t12096 = t12085 + t12095;
  t12097 = t12096*t6566;
  t12100 = 0.24*t6561*t6615;
  t12120 = t12097 + t12100;
  t12126 = t6561*t12096;
  t12132 = -0.24*t6566*t6615;
  t12156 = t12126 + t12132;
  t12217 = -1.*t6795;
  t12220 = 1. + t12217;
  t12221 = 0.4*t12220;
  t12226 = 0.64*t6795;
  t12249 = t12221 + t12226;
  t12252 = t12249*t6740;
  t12758 = 0.24*t6736*t7220;
  t12828 = t12252 + t12758;
  t12847 = t6736*t12249;
  t12857 = -0.24*t6740*t7220;
  t12868 = t12847 + t12857;
  t9710 = t162*t6621;
  t9724 = -1.*t4934*t6645;
  t10198 = t9710 + t9724;
  t9661 = -1.*t6561*t4934;
  t9662 = -1.*t162*t6566;
  t9669 = t9661 + t9662;
  t13787 = t12096*t6615;
  t13793 = -0.24*t6608*t6615;
  t13815 = t13787 + t13793;
  t10222 = -1.*t4934*t6676;
  t10255 = t10222 + t6646;
  t13633 = t12096*t6608;
  t13649 = Power(t6615,2);
  t13662 = 0.24*t13649;
  t13707 = t13633 + t13662;
  t10996 = t162*t7372;
  t11059 = -1.*t4934*t7879;
  t11074 = t10996 + t11059;
  t10562 = -1.*t6736*t4934;
  t10733 = -1.*t162*t6740;
  t10804 = t10562 + t10733;
  t14039 = t12249*t7220;
  t14040 = -0.24*t6795*t7220;
  t14092 = t14039 + t14040;
  t11244 = -1.*t4934*t9535;
  t11280 = t11244 + t8210;
  t13945 = t12249*t6795;
  t13952 = Power(t7220,2);
  t13975 = 0.24*t13952;
  t13979 = t13945 + t13975;
  t6593 = Power(t6592,2);
  t6764 = Power(t6763,2);
  t11916 = Power(t6561,2);
  t11974 = 0.11*t11916;
  t11985 = Power(t6566,2);
  t12001 = 0.11*t11985;
  t12042 = t11974 + t12001;
  t12125 = -1.*t12120*t6645;
  t12160 = -1.*t6621*t12156;
  t12168 = t12125 + t12160;
  t12177 = t12120*t6676;
  t12178 = t6645*t12156;
  t12182 = t12177 + t12178;
  t12194 = Power(t6736,2);
  t12205 = 0.11*t12194;
  t12209 = Power(t6740,2);
  t12210 = 0.11*t12209;
  t12213 = t12205 + t12210;
  t12831 = -1.*t12828*t7879;
  t12878 = -1.*t7372*t12868;
  t12889 = t12831 + t12878;
  t13531 = t12828*t9535;
  t13536 = t7879*t12868;
  t13559 = t13531 + t13536;
  t14159 = -1.*var1[4];
  t14161 = var3[4] + t14159;
  t14168 = -1.*var1[3];
  t14177 = var3[3] + t14168;
  t14184 = 0.748*t9669;
  t16191 = -1.*t6561*t6608;
  t16192 = t6566*t6615;
  t16195 = t16191 + t16192;
  t16196 = t4934*t16195;
  t16197 = t9710 + t16196;
  t14326 = -1.*var1[0];
  t14336 = var3[0] + t14326;
  t14337 = 13.6*t9669*t6592;
  t14341 = 13.6*t6577*t6592;
  t14659 = -1.*var1[1];
  t14660 = var3[1] + t14659;
  t14682 = Power(t9669,2);
  t14684 = 6.8*t14682;
  t14689 = 6.8*t9669*t6577;
  t14690 = 6.8*t6593;
  t14693 = -1.*t162*t6561;
  t14694 = t4934*t6566;
  t14695 = t14693 + t14694;
  t14705 = 6.8*t6592*t14695;
  t14720 = -1.*t4934*t6621;
  t16103 = -1.*var1[2];
  t16132 = var3[2] + t16103;
  t16146 = 6.8*t9669*t12042;
  t16282 = -1.*t12096*t6566;
  t16283 = -0.24*t6561*t6615;
  t16285 = t16282 + t16283;
  t16210 = 0.768*t14161*t16197;
  t16213 = 3.2*t13815*t6656;
  t16214 = 3.2*t13707*t16197;
  t16233 = 6.4*t6656*t6694;
  t16245 = 6.4*t6656*t16197;
  t16263 = 3.2*t6656*t10255;
  t16265 = 3.2*t10198*t6694;
  t16268 = t162*t16195;
  t16269 = t14720 + t16268;
  t16271 = 3.2*t6656*t16269;
  t16272 = 3.2*t10198*t16197;
  t16279 = 3.2*t6656*t12168;
  t16291 = t12120*t6645;
  t16292 = t6621*t12156;
  t16306 = 3.2*t12182*t16197;
  t16341 = -0.24*t6608*t6566;
  t16344 = t16341 + t16283;
  t16309 = -1.*t6621*t12120;
  t16347 = 0.24*t6561*t6608;
  t16351 = t16347 + t12132;
  t16315 = -1.*t12156*t16195;
  t14256 = -1.*var1[6];
  t14257 = var3[6] + t14256;
  t14294 = -1.*var1[5];
  t14301 = var3[5] + t14294;
  t14302 = 0.748*t10804;
  t16366 = -1.*t6736*t6795;
  t16367 = t6740*t7220;
  t16368 = t16366 + t16367;
  t16369 = t4934*t16368;
  t16371 = t10996 + t16369;
  t14374 = 13.6*t10804*t6763;
  t14396 = 13.6*t6755*t6763;
  t14884 = Power(t10804,2);
  t14885 = 6.8*t14884;
  t14891 = 6.8*t10804*t6755;
  t14896 = 6.8*t6764;
  t14897 = -1.*t162*t6736;
  t14918 = t4934*t6740;
  t15736 = t14897 + t14918;
  t15798 = 6.8*t6763*t15736;
  t15799 = -1.*t4934*t7372;
  t16158 = 6.8*t10804*t12213;
  t16398 = -1.*t12249*t6740;
  t16399 = -0.24*t6736*t7220;
  t16401 = t16398 + t16399;
  t16372 = 0.768*t14257*t16371;
  t16374 = 3.2*t14092*t8318;
  t16376 = 3.2*t13979*t16371;
  t16380 = 6.4*t8318*t9628;
  t16382 = 6.4*t8318*t16371;
  t16385 = 3.2*t8318*t11280;
  t16386 = 3.2*t11074*t9628;
  t16388 = t162*t16368;
  t16391 = t15799 + t16388;
  t16392 = 3.2*t8318*t16391;
  t16393 = 3.2*t11074*t16371;
  t16397 = 3.2*t8318*t12889;
  t16407 = t12828*t7879;
  t16408 = t7372*t12868;
  t16414 = 3.2*t13559*t16371;
  t16450 = -0.24*t6795*t6740;
  t16451 = t16450 + t16399;
  t16417 = -1.*t7372*t12828;
  t16455 = 0.24*t6736*t6795;
  t16457 = t16455 + t12857;
  t16419 = -1.*t12868*t16368;
  t2821 = Power(t162,2);
  t6543 = Power(t4934,2);
  t6578 = Power(t6577,2);
  t6657 = Power(t6656,2);
  t6707 = Power(t6694,2);
  t6756 = Power(t6755,2);
  t8855 = Power(t8318,2);
  t9645 = Power(t9628,2);
  t9673 = -6.8*t9669*t6592;
  t9694 = -6.8*t6577*t6592;
  t10220 = -3.2*t6656*t10198;
  t10257 = -3.2*t10255*t6694;
  t10942 = -6.8*t10804*t6763;
  t10960 = -6.8*t6755*t6763;
  t11150 = -3.2*t8318*t11074;
  t11307 = -3.2*t11280*t9628;
  t11628 = t9673 + t9694 + t10220 + t10257 + t10942 + t10960 + t11150 + t11307;
  t3171 = -12.*t2821;
  t6559 = -12.*t6543;
  t6597 = -6.8*t6593;
  t14796 = Power(t10255,2);
  t14834 = Power(t10198,2);
  t6794 = -6.8*t6764;
  t16078 = Power(t11280,2);
  t16082 = Power(t11074,2);
  t14749 = -1.*t162*t6645;
  t14763 = t14720 + t14749;
  t14842 = -1.*t162*t6676;
  t14843 = t14842 + t9724;
  t15938 = -1.*t162*t7879;
  t16041 = t15799 + t15938;
  t16091 = -1.*t162*t9535;
  t16092 = t16091 + t11059;
  t14791 = 3.2*t14763*t6656;
  t14806 = 3.2*t14796;
  t14841 = 3.2*t14834;
  t14846 = 3.2*t14843*t6694;
  t16055 = 3.2*t16041*t8318;
  t16081 = 3.2*t16078;
  t16083 = 3.2*t16082;
  t16094 = 3.2*t16092*t9628;
  t16095 = t14684 + t14689 + t14690 + t14705 + t14791 + t14806 + t14841 + t14846 + t14885 + t14891 + t14896 + t15798 + t16055 + t16081 + t16083 + t16094;
  t11909 = -2.88*t162;
  t16652 = 0.748*t14695;
  t16726 = 13.6*t9669*t14695;
  t16273 = t14684 + t14689 + t14690 + t14705 + t16263 + t16265 + t16271 + t16272;
  t16742 = 6.8*t14695*t12042;
  t16288 = t16285*t6645;
  t16295 = t6676*t12156;
  t16298 = t16288 + t16291 + t16292 + t16295;
  t16307 = -1.*t6621*t16285;
  t16311 = -1.*t6645*t12156;
  t16316 = t16307 + t16309 + t16311 + t16315;
  t16758 = 0.768*t14161*t16269;
  t16330 = Power(t6608,2);
  t16331 = -0.24*t16330;
  t16332 = t13633 + t16331;
  t16760 = 3.2*t13815*t10198;
  t16322 = -1.*t12096*t6615;
  t16323 = 0.24*t6608*t6615;
  t16326 = t16322 + t16323;
  t16762 = 3.2*t13707*t16269;
  t16765 = 6.4*t10255*t10198;
  t16766 = 6.4*t10198*t16269;
  t16339 = t16263 + t16265 + t16271 + t16272;
  t16798 = 3.2*t10198*t12168;
  t16345 = t16344*t6645;
  t16352 = t6676*t16351;
  t16353 = t16345 + t16291 + t16292 + t16352;
  t16805 = 3.2*t12182*t16269;
  t16356 = -1.*t6621*t16344;
  t16358 = -1.*t6645*t16351;
  t16359 = t16356 + t16309 + t16358 + t16315;
  t16684 = 0.748*t15736;
  t16734 = 13.6*t10804*t15736;
  t16394 = t14885 + t14891 + t14896 + t15798 + t16385 + t16386 + t16392 + t16393;
  t16746 = 6.8*t15736*t12213;
  t16402 = t16401*t7879;
  t16410 = t9535*t12868;
  t16411 = t16402 + t16407 + t16408 + t16410;
  t16415 = -1.*t7372*t16401;
  t16418 = -1.*t7879*t12868;
  t16420 = t16415 + t16417 + t16418 + t16419;
  t17802 = 0.768*t14257*t16391;
  t16435 = Power(t6795,2);
  t16437 = -0.24*t16435;
  t16438 = t13945 + t16437;
  t17803 = 3.2*t14092*t11074;
  t16427 = -1.*t12249*t7220;
  t16429 = 0.24*t6795*t7220;
  t16432 = t16427 + t16429;
  t17805 = 3.2*t13979*t16391;
  t17814 = 6.4*t11280*t11074;
  t17815 = 6.4*t11074*t16391;
  t16446 = t16385 + t16386 + t16392 + t16393;
  t17976 = 3.2*t11074*t12889;
  t16453 = t16451*t7879;
  t16459 = t9535*t16457;
  t16461 = t16453 + t16407 + t16408 + t16459;
  t18039 = 3.2*t13559*t16391;
  t16463 = -1.*t7372*t16451;
  t16465 = -1.*t7879*t16457;
  t16466 = t16463 + t16417 + t16465 + t16419;
  t16491 = 6.8*t9669*t6592;
  t16492 = 6.8*t6577*t6592;
  t16493 = 3.2*t6656*t10198;
  t16494 = 3.2*t10255*t6694;
  t16495 = 6.8*t10804*t6763;
  t16496 = 6.8*t6755*t6763;
  t16497 = 3.2*t8318*t11074;
  t16499 = 3.2*t11280*t9628;
  t16500 = t16491 + t16492 + t16493 + t16494 + t16495 + t16496 + t16497 + t16499;
  t16473 = 12.*t2821;
  t16476 = 12.*t6543;
  t16145 = -2.88*t4934;
  t16152 = 3.2*t10255*t12168;
  t16153 = 3.2*t10198*t12182;
  t16166 = 3.2*t11280*t12889;
  t16167 = 3.2*t11074*t13559;
  t16170 = t16145 + t16146 + t16152 + t16153 + t16158 + t16166 + t16167;
  t14195 = 3.2*t13815*t10255;
  t14242 = 3.2*t13707*t10198;
  t14244 = t14184 + t14195 + t14242;
  t14303 = 3.2*t14092*t11280;
  t14305 = 3.2*t13979*t11074;
  t14322 = t14302 + t14303 + t14305;
  t12061 = -6.8*t6592*t12042;
  t12174 = -3.2*t6694*t12168;
  t12191 = -3.2*t6656*t12182;
  t12214 = -6.8*t6763*t12213;
  t12900 = -3.2*t9628*t12889;
  t13613 = -3.2*t8318*t13559;
  t13620 = t11909 + t12061 + t12174 + t12191 + t12214 + t12900 + t13613;
  t16590 = 2.88*t4934;
  t16591 = -6.8*t9669*t12042;
  t16593 = -3.2*t10255*t12168;
  t16595 = -3.2*t10198*t12182;
  t16596 = -6.8*t10804*t12213;
  t16599 = -3.2*t11280*t12889;
  t16600 = -3.2*t11074*t13559;
  t16602 = t16590 + t16591 + t16593 + t16595 + t16596 + t16599 + t16600;
  t16744 = 3.2*t14843*t12168;
  t16745 = 3.2*t14763*t12182;
  t16747 = 3.2*t16092*t12889;
  t16748 = 3.2*t16041*t13559;
  t16749 = t11909 + t16742 + t16744 + t16745 + t16746 + t16747 + t16748;
  t16802 = 3.2*t10198*t16298;
  t16806 = 3.2*t10255*t16316;
  t17744 = t16742 + t16798 + t16802 + t16805 + t16806;
  t16299 = 3.2*t6656*t16298;
  t16317 = 3.2*t6694*t16316;
  t16318 = t16146 + t16279 + t16299 + t16306 + t16317;
  t17790 = 3.2*t10198*t16353;
  t17791 = 3.2*t10255*t16359;
  t17794 = t16798 + t17790 + t16805 + t17791;
  t16354 = 3.2*t6656*t16353;
  t16360 = 3.2*t6694*t16359;
  t16362 = t16279 + t16354 + t16306 + t16360;
  t18642 = 0.4*t12220*t15736;
  t18647 = -0.4*t6755*t7220;
  t18651 = t6795*t15736;
  t18654 = t6755*t7220;
  t18659 = t18651 + t18654;
  t18663 = 0.8*t18659;
  t18667 = t18642 + t18647 + t18663;
  t18674 = -1.*var4[2]*t18667;
  t18677 = 0.4*t12220*t10804;
  t18684 = -0.4*t15736*t7220;
  t18689 = t6795*t10804;
  t18690 = t15736*t7220;
  t18693 = t18689 + t18690;
  t18694 = 0.8*t18693;
  t18695 = t18677 + t18684 + t18694;
  t18696 = -1.*var4[0]*t18695;
  t17980 = 3.2*t11074*t16411;
  t18057 = 3.2*t11280*t16420;
  t18058 = t16746 + t17976 + t17980 + t18039 + t18057;
  t16412 = 3.2*t8318*t16411;
  t16422 = 3.2*t9628*t16420;
  t16424 = t16158 + t16397 + t16412 + t16414 + t16422;
  t18131 = 3.2*t11074*t16461;
  t18132 = 3.2*t11280*t16466;
  t18286 = t17976 + t18131 + t18039 + t18132;
  t16462 = 3.2*t8318*t16461;
  t16467 = 3.2*t9628*t16466;
  t16468 = t16397 + t16462 + t16414 + t16467;
  t16501 = 2.88*t162;
  t16504 = 6.8*t6592*t12042;
  t16506 = 3.2*t6694*t12168;
  t16507 = 3.2*t6656*t12182;
  t16508 = 6.8*t6763*t12213;
  t16509 = 3.2*t9628*t12889;
  t16510 = 3.2*t8318*t13559;
  t16511 = t16501 + t16504 + t16506 + t16507 + t16508 + t16509 + t16510;
  t18428 = Power(t12042,2);
  t18447 = Power(t12168,2);
  t18464 = Power(t12182,2);
  t18487 = Power(t12213,2);
  t18500 = Power(t12889,2);
  t18511 = Power(t13559,2);
  t18862 = 0.4*t10804*t7220;
  t13622 = -0.748*t6592;
  t13786 = -3.2*t13707*t6656;
  t13854 = -3.2*t13815*t6694;
  t13875 = t13622 + t13786 + t13854;
  t16603 = -0.748*t9669;
  t16604 = -3.2*t13815*t10255;
  t16610 = -3.2*t13707*t10198;
  t16611 = t16603 + t16604 + t16610;
  t18529 = -0.748*t12042;
  t18549 = -3.2*t13815*t12168;
  t18580 = -3.2*t13707*t12182;
  t18597 = -0.67 + t18529 + t18549 + t18580;
  t16656 = 3.2*t13707*t14763;
  t16658 = 3.2*t13815*t14843;
  t16659 = t16652 + t16656 + t16658;
  t16763 = t16652 + t16760 + t16762;
  t16217 = t14184 + t16213 + t16214;
  t18750 = 3.2*t13707*t16298;
  t18752 = 3.2*t13815*t16316;
  t18754 = t18750 + t18752;
  t17774 = 3.2*t16332*t10255;
  t17775 = 3.2*t16326*t10198;
  t17779 = t17774 + t16760 + t17775 + t16762;
  t16327 = 3.2*t16326*t6656;
  t16333 = 3.2*t16332*t6694;
  t16334 = t16213 + t16327 + t16333 + t16214;
  t18779 = 3.2*t16332*t12168;
  t18780 = 3.2*t16326*t12182;
  t18787 = 3.2*t13707*t16353;
  t18791 = 3.2*t13815*t16359;
  t18792 = t18779 + t18780 + t18787 + t18791;
  t16528 = 0.748*t6592;
  t16534 = 3.2*t13707*t6656;
  t16538 = 3.2*t13815*t6694;
  t16548 = t16528 + t16534 + t16538;
  t18959 = 0.748*t12042;
  t18960 = 3.2*t13815*t12168;
  t18965 = 3.2*t13707*t12182;
  t18967 = 0.67 + t18959 + t18960 + t18965;
  t19007 = Power(t13815,2);
  t19012 = Power(t13707,2);
  t13921 = -0.768*t6656;
  t16612 = -0.768*t10198;
  t18601 = -0.768*t12182;
  t18609 = -0.2 + t18601;
  t19020 = -0.768*t13707;
  t19021 = -0.2 + t19020;
  t19093 = 0.768*t14660*t16269;
  t19094 = 0.768*t14336*t16197;
  t16549 = 0.768*t6656;
  t18354 = 0.768*t10198;
  t18968 = 0.768*t12182;
  t18970 = 0.2 + t18968;
  t19080 = 0.768*t13707;
  t19081 = 0.2 + t19080;
  t13934 = -0.748*t6763;
  t14010 = -3.2*t13979*t8318;
  t14107 = -3.2*t14092*t9628;
  t14126 = t13934 + t14010 + t14107;
  t16613 = -0.748*t10804;
  t16617 = -3.2*t14092*t11280;
  t16618 = -3.2*t13979*t11074;
  t16619 = t16613 + t16617 + t16618;
  t18610 = -0.748*t12213;
  t18626 = -3.2*t14092*t12889;
  t18630 = -3.2*t13979*t13559;
  t18636 = -0.67 + t18610 + t18626 + t18630;
  t16715 = 3.2*t13979*t16041;
  t16717 = 3.2*t14092*t16092;
  t16718 = t16684 + t16715 + t16717;
  t17812 = t16684 + t17803 + t17805;
  t16377 = t14302 + t16374 + t16376;
  t18823 = 3.2*t13979*t16411;
  t18825 = 3.2*t14092*t16420;
  t18830 = t18823 + t18825;
  t18851 = -0.4*t6795*t15736;
  t18863 = -1.*t10804*t7220;
  t18873 = t18651 + t18863;
  t18874 = 0.8*t18873;
  t18875 = t18851 + t18862 + t18874;
  t18876 = -1.*var4[2]*t18875;
  t18877 = -0.4*t6795*t10804;
  t18880 = 0.4*t6763*t7220;
  t18883 = -1.*t6763*t7220;
  t18891 = t18689 + t18883;
  t18892 = 0.8*t18891;
  t18895 = t18877 + t18880 + t18892;
  t18896 = -1.*var4[0]*t18895;
  t18084 = 3.2*t16438*t11280;
  t18091 = 3.2*t16432*t11074;
  t18092 = t18084 + t17803 + t18091 + t17805;
  t16433 = 3.2*t16432*t8318;
  t16439 = 3.2*t16438*t9628;
  t16441 = t16374 + t16433 + t16439 + t16376;
  t18897 = 3.2*t16438*t12889;
  t18898 = 3.2*t16432*t13559;
  t18899 = 3.2*t13979*t16461;
  t18900 = 3.2*t14092*t16466;
  t18901 = t18897 + t18898 + t18899 + t18900;
  t16569 = 0.748*t6763;
  t16570 = 3.2*t13979*t8318;
  t16571 = 3.2*t14092*t9628;
  t16572 = t16569 + t16570 + t16571;
  t18971 = 0.748*t12213;
  t18972 = 3.2*t14092*t12889;
  t18973 = 3.2*t13979*t13559;
  t18974 = 0.67 + t18971 + t18972 + t18973;
  t19099 = Power(t14092,2);
  t19101 = Power(t13979,2);
  t18987 = -0.4*t12220*t6763;
  t18988 = t6795*t6763;
  t18991 = t10804*t7220;
  t18992 = t18988 + t18991;
  t18993 = -0.8*t18992;
  t18999 = t18987 + t18862 + t18993;
  t19000 = -0.4*t12220*t10804;
  t19004 = 0.4*t15736*t7220;
  t19005 = -0.8*t18693;
  t19006 = t19000 + t19004 + t19005;
  t14138 = -0.768*t8318;
  t16626 = -0.768*t11074;
  t18637 = -0.768*t13559;
  t18640 = -0.2 + t18637;
  t19109 = -0.768*t13979;
  t19110 = -0.2 + t19109;
  t19158 = 0.768*t14660*t16391;
  t19159 = 0.768*t14336*t16371;
  t16575 = 0.768*t8318;
  t18414 = 0.768*t11074;
  t18982 = 0.768*t13559;
  t18983 = 0.2 + t18982;
  t19152 = 0.768*t13979;
  t19153 = 0.2 + t19152;
  t19179 = 0.4*t6795*t6763;
  p_output1[0]=t3171 + t6559 - 6.8*t6578 + t6597 - 3.2*t6657 - 3.2*t6707 - 6.8*t6756 + t6794 - 3.2*t8855 - 3.2*t9645;
  p_output1[1]=t11628;
  p_output1[2]=t13620;
  p_output1[3]=t13875;
  p_output1[4]=t13921;
  p_output1[5]=t14126;
  p_output1[6]=t14138;
  p_output1[7]=0.768*t10198*t14161 + t14177*t14244 + 0.768*t11074*t14257 + t14301*t14322 + t14660*t16095 + t16132*t16170 + t14336*(t14337 + t14341 + t14374 + t14396 + 6.4*t10198*t6656 + 6.4*t10255*t6694 + 6.4*t11074*t8318 + 6.4*t11280*t9628);
  p_output1[8]=t16210 + t14177*t16217 + t14336*(t14337 + t14341 + t16233 + t16245) + t14660*t16273 + t16132*t16318;
  p_output1[9]=t16210 + t14336*(t16233 + t16245) + t14177*t16334 + t14660*t16339 + t16132*t16362;
  p_output1[10]=t16372 + t14301*t16377 + t14336*(t14374 + t14396 + t16380 + t16382) + t14660*t16394 + t16132*t16424;
  p_output1[11]=t16372 + t14336*(t16380 + t16382) + t14301*t16441 + t14660*t16446 + t16132*t16468;
  p_output1[12]=t14690 + t14896 + t16473 + t16476 + 6.8*t6578 + 3.2*t6657 + 3.2*t6707 + 6.8*t6756 + 3.2*t8855 + 3.2*t9645;
  p_output1[13]=t16500;
  p_output1[14]=t16511;
  p_output1[15]=t16548;
  p_output1[16]=t16549;
  p_output1[17]=t16572;
  p_output1[18]=t16575;
  p_output1[19]=-1.;
  p_output1[20]=t11628;
  p_output1[21]=-6.8*t14682 - 3.2*t14796 - 3.2*t14834 - 6.8*t14884 - 3.2*t16078 - 3.2*t16082 + t3171 + t6559 + t6597 + t6794;
  p_output1[22]=t16602;
  p_output1[23]=t16611;
  p_output1[24]=t16612;
  p_output1[25]=t16619;
  p_output1[26]=t16626;
  p_output1[27]=0.768*t14161*t14763 + 0.768*t14257*t16041 + t14336*t16095 + t14177*t16659 + t14301*t16718 + t14660*(t14337 + t14374 + 6.4*t10198*t14763 + 6.4*t10255*t14843 + 6.4*t11074*t16041 + 6.4*t11280*t16092 + t16726 + t16734) + t16132*t16749;
  p_output1[28]=t14336*t16273 + t16758 + t14177*t16763 + t14660*(t14337 + t16726 + t16765 + t16766) + t16132*t17744;
  p_output1[29]=t14336*t16339 + t16758 + t14660*(t16765 + t16766) + t14177*t17779 + t16132*t17794;
  p_output1[30]=t14336*t16394 + t17802 + t14301*t17812 + t14660*(t14374 + t16734 + t17814 + t17815) + t16132*t18058;
  p_output1[31]=t14336*t16446 + t17802 + t14660*(t17814 + t17815) + t14301*t18092 + t16132*t18286;
  p_output1[32]=t16500;
  p_output1[33]=t14684 + t14690 + t14806 + t14841 + t14885 + t14896 + t16081 + t16083 + t16473 + t16476;
  p_output1[34]=t16170;
  p_output1[35]=t14244;
  p_output1[36]=t18354;
  p_output1[37]=t14322;
  p_output1[38]=t18414;
  p_output1[39]=-1.;
  p_output1[40]=t13620;
  p_output1[41]=t16602;
  p_output1[42]=-3.3612 - 6.8*t18428 - 3.2*t18447 - 3.2*t18464 - 6.8*t18487 - 3.2*t18500 - 3.2*t18511;
  p_output1[43]=t18597;
  p_output1[44]=t18609;
  p_output1[45]=t18636;
  p_output1[46]=t18640;
  p_output1[47]=t14336*t16170 + t14660*t16749 + t18674 + t18696;
  p_output1[48]=0.768*t14161*t16298 + t16132*(6.4*t12182*t16298 + 6.4*t12168*t16316) + t14336*t16318 + t14660*t17744 + t14177*t18754;
  p_output1[49]=0.768*t14161*t16353 + t16132*(6.4*t12182*t16353 + 6.4*t12168*t16359) + t14336*t16362 + t14660*t17794 + t14177*t18792;
  p_output1[50]=0.768*t14257*t16411 + t16132*(6.4*t13559*t16411 + 6.4*t12889*t16420) + t14336*t16424 + t14660*t18058 + t18674 + t18696 + t14301*t18830;
  p_output1[51]=0.768*t14257*t16461 + t16132*(6.4*t13559*t16461 + 6.4*t12889*t16466) + t14336*t16468 + t14660*t18286 + t18876 + t18896 + t14301*t18901;
  p_output1[52]=t16511;
  p_output1[53]=t16170;
  p_output1[54]=3.3612 + 6.8*t18428 + 3.2*t18447 + 3.2*t18464 + 6.8*t18487 + 3.2*t18500 + 3.2*t18511;
  p_output1[55]=t18967;
  p_output1[56]=t18970;
  p_output1[57]=t18974;
  p_output1[58]=t18983;
  p_output1[59]=t18999;
  p_output1[60]=t19006;
  p_output1[61]=t13875;
  p_output1[62]=t16611;
  p_output1[63]=t18597;
  p_output1[64]=-1.58228 - 3.2*t19007 - 3.2*t19012;
  p_output1[65]=t19021;
  p_output1[66]=t14244*t14336 + t14660*t16659;
  p_output1[67]=t14336*t16217 + t14660*t16763 + t16132*t18754;
  p_output1[68]=0.768*t14161*t16326 + t14177*(6.4*t13707*t16326 + 6.4*t13815*t16332) + t14336*t16334 + t14660*t17779 + t16132*t18792;
  p_output1[69]=t16548;
  p_output1[70]=t14244;
  p_output1[71]=t18967;
  p_output1[72]=1.58228 + 3.2*t19007 + 3.2*t19012;
  p_output1[73]=t19081;
  p_output1[74]=t13921;
  p_output1[75]=t16612;
  p_output1[76]=t18609;
  p_output1[77]=t19021;
  p_output1[78]=-1.2143199999999998;
  p_output1[79]=0.768*t10198*t14336 + 0.768*t14660*t14763;
  p_output1[80]=0.768*t16132*t16298 + t19093 + t19094;
  p_output1[81]=0.768*t14177*t16326 + 0.768*t16132*t16353 + t19093 + t19094;
  p_output1[82]=t16549;
  p_output1[83]=t18354;
  p_output1[84]=t18970;
  p_output1[85]=t19081;
  p_output1[86]=1.2143199999999998;
  p_output1[87]=t14126;
  p_output1[88]=t16619;
  p_output1[89]=t18636;
  p_output1[90]=-1.58228 - 3.2*t19099 - 3.2*t19101;
  p_output1[91]=t19110;
  p_output1[92]=t14322*t14336 + t14660*t16718 + t18674 + t18696;
  p_output1[93]=t14336*t16377 + t14660*t17812 + t18674 + t18696 + t16132*t18830;
  p_output1[94]=0.768*t14257*t16432 + t14301*(6.4*t13979*t16432 + 6.4*t14092*t16438) + t14336*t16441 + t14660*t18092 + t18876 + t18896 + t16132*t18901;
  p_output1[95]=t16572;
  p_output1[96]=t14322;
  p_output1[97]=t18974;
  p_output1[98]=1.58228 + 3.2*t19099 + 3.2*t19101;
  p_output1[99]=t19153;
  p_output1[100]=t18999;
  p_output1[101]=t19006;
  p_output1[102]=t14138;
  p_output1[103]=t16626;
  p_output1[104]=t18640;
  p_output1[105]=t19110;
  p_output1[106]=-1.2143199999999998;
  p_output1[107]=0.768*t11074*t14336 + 0.768*t14660*t16041 + t18876 + t18896;
  p_output1[108]=0.768*t16132*t16411 + t18876 + t18896 + t19158 + t19159;
  p_output1[109]=0.768*t14301*t16432 + 0.768*t16132*t16461 + t19158 + t19159 - 1.*(t18880 + 0.4*t6755*t6795 + 0.8*(t18883 - 1.*t6755*t6795))*var4[0] - 1.*(t18862 + t19179 + 0.8*(t18863 - 1.*t6763*t6795))*var4[2];
  p_output1[110]=t16575;
  p_output1[111]=t18414;
  p_output1[112]=t18983;
  p_output1[113]=t19153;
  p_output1[114]=1.2143199999999998;
  p_output1[115]=t18647 + t19179 - 0.8*(t18988 - 1.*t6755*t7220);
  p_output1[116]=-0.8*t18891 + 0.4*t10804*t6795 - 0.4*t6763*t7220;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2,*var3,*var4;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 4)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Four input(s) required (var1,var2,var3,var4).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 7 && ncols == 1) && 
      !(mrows == 1 && ncols == 7))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 117, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMapLSlift_LSland.hh"

namespace Pattern[LSlift, Blank[LSland]]
{

void J_dxDiscreteMapLSlift_LSland_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4);

}

}

#endif // MATLAB_MEX_FILE
