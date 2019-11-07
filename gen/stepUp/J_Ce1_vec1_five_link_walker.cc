/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:19:49 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t6133;
  double t2923;
  double t4929;
  double t7233;
  double t2515;
  double t7950;
  double t8121;
  double t8157;
  double t8318;
  double t8831;
  double t5805;
  double t7599;
  double t7836;
  double t8856;
  double t8890;
  double t8904;
  double t7939;
  double t8855;
  double t9282;
  double t9405;
  double t9406;
  double t9521;
  double t9524;
  double t9547;
  double t9708;
  double t9720;
  double t10193;
  double t10611;
  double t10728;
  double t10733;
  double t8916;
  double t9202;
  double t9232;
  double t9472;
  double t9514;
  double t9515;
  double t9519;
  double t9520;
  double t9552;
  double t9608;
  double t9620;
  double t9644;
  double t9694;
  double t9695;
  double t10197;
  double t10218;
  double t10251;
  double t10258;
  double t10562;
  double t10567;
  double t10855;
  double t10869;
  double t11006;
  double t11139;
  double t11594;
  double t13338;
  double t13531;
  double t13532;
  double t13536;
  double t13542;
  double t13543;
  double t13557;
  double t13558;
  double t13559;
  double t13620;
  double t13633;
  double t13629;
  double t13639;
  double t13640;
  double t13645;
  double t13647;
  double t13649;
  double t13659;
  double t13667;
  double t13672;
  double t13673;
  double t13698;
  double t13658;
  double t13662;
  double t13674;
  double t13675;
  double t13697;
  double t13699;
  double t13715;
  double t13716;
  double t13718;
  double t13644;
  double t13733;
  double t13737;
  double t13738;
  double t13547;
  double t13548;
  double t13551;
  double t13553;
  double t13554;
  double t13555;
  double t13566;
  double t13586;
  double t13601;
  double t13609;
  double t13613;
  double t13619;
  double t13729;
  double t13730;
  double t13743;
  double t13744;
  double t13745;
  double t13746;
  double t13757;
  double t13758;
  double t13339;
  double t13786;
  double t13787;
  double t13792;
  double t13793;
  double t13794;
  double t13795;
  double t13796;
  double t13797;
  double t9698;
  double t13798;
  double t13799;
  double t13770;
  double t13832;
  double t13837;
  double t13838;
  double t13843;
  double t13845;
  double t13846;
  double t13848;
  double t13849;
  double t13768;
  double t13850;
  double t13851;
  double t13878;
  double t13879;
  double t13885;
  double t13886;
  double t13899;
  double t13900;
  double t13913;
  double t13914;
  double t13895;
  double t13896;
  double t13901;
  double t13907;
  double t13908;
  double t13890;
  double t13883;
  double t13920;
  double t13915;
  double t13525;
  double t13526;
  double t13455;
  double t13458;
  double t13933;
  double t13934;
  double t13935;
  double t13936;
  double t13937;
  double t13938;
  double t13939;
  double t13945;
  double t13946;
  double t13949;
  double t13950;
  double t13951;
  double t13952;
  double t13654;
  double t13655;
  double t13704;
  double t13707;
  double t13975;
  double t13964;
  double t13965;
  double t13971;
  double t13972;
  double t13982;
  double t13983;
  double t13984;
  double t13985;
  double t13986;
  double t13987;
  double t13988;
  double t13989;
  double t13953;
  double t14009;
  double t14010;
  double t14011;
  double t14012;
  double t14013;
  double t14014;
  double t13947;
  double t14015;
  double t14016;
  double t14004;
  double t14028;
  double t14029;
  double t14030;
  double t14033;
  double t14034;
  double t14035;
  double t13990;
  double t14036;
  double t14037;
  double t14046;
  double t14047;
  double t14048;
  double t14049;
  double t14052;
  double t14053;
  double t14054;
  double t14055;
  double t13495;
  double t13513;
  double t13686;
  double t13700;
  double t14066;
  double t14067;
  double t14068;
  double t14069;
  double t14076;
  double t14077;
  double t14078;
  double t14079;
  double t14060;
  double t14061;
  double t14062;
  double t14063;
  double t14070;
  double t14071;
  double t14072;
  double t14073;
  double t14074;
  double t14056;
  double t14050;
  double t14082;
  double t14080;
  double t14096;
  double t14097;
  double t14098;
  double t14099;
  double t14100;
  double t14101;
  double t14102;
  double t14103;
  double t14105;
  double t14106;
  double t14107;
  double t14111;
  double t14112;
  double t14113;
  double t14104;
  double t14108;
  double t14109;
  double t14110;
  double t14115;
  double t14116;
  double t14120;
  double t14121;
  double t14122;
  double t14123;
  double t14132;
  double t14133;
  double t14125;
  double t14135;
  double t14136;
  double t14127;
  double t14090;
  double t14091;
  double t14092;
  double t14093;
  double t14094;
  double t14095;
  double t14155;
  double t14156;
  double t14157;
  double t14158;
  double t14159;
  double t14160;
  double t14161;
  double t14162;
  double t14164;
  double t14165;
  double t14166;
  double t14149;
  double t14150;
  double t14151;
  double t14152;
  double t14153;
  double t14154;
  double t14163;
  double t14167;
  double t14168;
  double t14170;
  double t14171;
  double t14172;
  double t14177;
  double t14178;
  double t14179;
  double t14176;
  double t14181;
  double t14182;
  double t14186;
  double t14195;
  double t14196;
  double t14188;
  double t14198;
  double t14199;
  double t14190;
  double t14114;
  double t14117;
  double t14118;
  double t14119;
  double t14124;
  double t14126;
  double t14128;
  double t14129;
  double t14130;
  double t14218;
  double t14219;
  double t14220;
  double t14212;
  double t14213;
  double t14134;
  double t14137;
  double t14138;
  double t14217;
  double t14223;
  double t14140;
  double t14141;
  double t14142;
  double t14228;
  double t14241;
  double t14242;
  double t14232;
  double t14139;
  double t14143;
  double t14144;
  double t14237;
  double t14238;
  double t14239;
  double t14240;
  double t14243;
  double t14244;
  double t14245;
  double t14246;
  double t14247;
  double t14248;
  double t14249;
  double t14250;
  double t14251;
  double t14252;
  double t14253;
  double t14254;
  double t14255;
  double t14256;
  double t14257;
  double t14180;
  double t14183;
  double t14184;
  double t14185;
  double t14187;
  double t14189;
  double t14191;
  double t14192;
  double t14193;
  double t14284;
  double t14285;
  double t14286;
  double t14278;
  double t14279;
  double t14197;
  double t14200;
  double t14201;
  double t14283;
  double t14289;
  double t14203;
  double t14204;
  double t14205;
  double t14294;
  double t14307;
  double t14308;
  double t14298;
  double t14202;
  double t14206;
  double t14207;
  double t14303;
  double t14304;
  double t14305;
  double t14306;
  double t14309;
  double t14310;
  double t14311;
  double t14312;
  double t14313;
  double t14314;
  double t14315;
  double t14316;
  double t14317;
  double t14318;
  double t14319;
  double t14320;
  double t14321;
  double t14322;
  double t14323;
  double t14344;
  double t14346;
  double t14343;
  double t14357;
  double t14362;
  double t14364;
  double t14354;
  double t14355;
  double t14356;
  double t14358;
  double t14359;
  double t14360;
  double t14345;
  double t14347;
  double t14348;
  double t14350;
  double t14351;
  double t14352;
  double t14363;
  double t14365;
  double t14366;
  double t14368;
  double t14369;
  double t14370;
  double t14378;
  double t14384;
  double t14385;
  double t14386;
  double t14379;
  double t14380;
  double t14381;
  double t14382;
  double t14390;
  double t14391;
  double t14392;
  double t14394;
  double t14395;
  double t14396;
  double t14407;
  double t14408;
  double t14398;
  double t14399;
  double t14400;
  double t14397;
  double t14401;
  double t14402;
  double t14411;
  double t14412;
  double t14413;
  double t14430;
  double t14435;
  double t14436;
  double t14431;
  double t14432;
  double t14433;
  double t14437;
  double t14439;
  double t14440;
  double t14441;
  double t14452;
  double t14453;
  double t14454;
  double t14455;
  double t14456;
  double t14462;
  double t14463;
  double t14469;
  double t14470;
  double t14471;
  double t14464;
  double t14465;
  double t14466;
  double t14467;
  double t14475;
  double t14476;
  double t14477;
  double t14479;
  double t14480;
  double t14481;
  double t14492;
  double t14493;
  double t14483;
  double t14484;
  double t14485;
  double t14482;
  double t14486;
  double t14487;
  double t14496;
  double t14497;
  double t14498;
  double t14515;
  double t14520;
  double t14521;
  double t14516;
  double t14517;
  double t14518;
  double t14522;
  double t14524;
  double t14525;
  double t14526;
  double t14537;
  double t14538;
  double t14539;
  double t14540;
  double t14541;
  double t14547;
  t6133 = Cos(var1[3]);
  t2923 = Cos(var1[4]);
  t4929 = Sin(var1[3]);
  t7233 = Sin(var1[4]);
  t2515 = Sin(var1[2]);
  t7950 = Cos(var1[2]);
  t8121 = t6133*t2923;
  t8157 = -1.*t4929*t7233;
  t8318 = t8121 + t8157;
  t8831 = t7950*t8318;
  t5805 = -1.*t2923*t4929;
  t7599 = -1.*t6133*t7233;
  t7836 = t5805 + t7599;
  t8856 = t2923*t4929;
  t8890 = t6133*t7233;
  t8904 = t8856 + t8890;
  t7939 = t2515*t7836;
  t8855 = t7939 + t8831;
  t9282 = t7950*t7836;
  t9405 = -1.*t2515*t8318;
  t9406 = t9282 + t9405;
  t9521 = -1.*t6133*t2923;
  t9524 = t4929*t7233;
  t9547 = t9521 + t9524;
  t9708 = -1.*t6133*t2515;
  t9720 = -1.*t7950*t4929;
  t10193 = t9708 + t9720;
  t10611 = t7950*t6133;
  t10728 = -1.*t2515*t4929;
  t10733 = t10611 + t10728;
  t8916 = -1.*t2515*t8904;
  t9202 = t8916 + t8831;
  t9232 = 6.4*t8855*t9202;
  t9472 = t7950*t8904;
  t9514 = t2515*t8318;
  t9515 = t9472 + t9514;
  t9519 = 6.4*t9406*t9515;
  t9520 = -1.*t2515*t7836;
  t9552 = t7950*t9547;
  t9608 = t9520 + t9552;
  t9620 = 6.4*t8855*t9608;
  t9644 = t2515*t9547;
  t9694 = t9282 + t9644;
  t9695 = 6.4*t9406*t9694;
  t10197 = Power(t10193,2);
  t10218 = 13.6*t10197;
  t10251 = t6133*t2515;
  t10258 = t7950*t4929;
  t10562 = t10251 + t10258;
  t10567 = 13.6*t10193*t10562;
  t10855 = Power(t10733,2);
  t10869 = 13.6*t10855;
  t11006 = -1.*t7950*t6133;
  t11139 = t2515*t4929;
  t11594 = t11006 + t11139;
  t13338 = 13.6*t10733*t11594;
  t13531 = Cos(var1[5]);
  t13532 = -1.*t13531*t2515;
  t13536 = Sin(var1[5]);
  t13542 = -1.*t7950*t13536;
  t13543 = t13532 + t13542;
  t13557 = t7950*t13531;
  t13558 = -1.*t2515*t13536;
  t13559 = t13557 + t13558;
  t13620 = Cos(var1[6]);
  t13633 = Sin(var1[6]);
  t13629 = -1.*t13620*t13536;
  t13639 = -1.*t13531*t13633;
  t13640 = t13629 + t13639;
  t13645 = t13531*t13620;
  t13647 = -1.*t13536*t13633;
  t13649 = t13645 + t13647;
  t13659 = t7950*t13649;
  t13667 = t13620*t13536;
  t13672 = t13531*t13633;
  t13673 = t13667 + t13672;
  t13698 = -1.*t2515*t13649;
  t13658 = t2515*t13640;
  t13662 = t13658 + t13659;
  t13674 = -1.*t2515*t13673;
  t13675 = t13674 + t13659;
  t13697 = t7950*t13640;
  t13699 = t13697 + t13698;
  t13715 = t7950*t13673;
  t13716 = t2515*t13649;
  t13718 = t13715 + t13716;
  t13644 = -1.*t2515*t13640;
  t13733 = -1.*t13531*t13620;
  t13737 = t13536*t13633;
  t13738 = t13733 + t13737;
  t13547 = Power(t13543,2);
  t13548 = 13.6*t13547;
  t13551 = t13531*t2515;
  t13553 = t7950*t13536;
  t13554 = t13551 + t13553;
  t13555 = 13.6*t13543*t13554;
  t13566 = Power(t13559,2);
  t13586 = 13.6*t13566;
  t13601 = -1.*t7950*t13531;
  t13609 = t2515*t13536;
  t13613 = t13601 + t13609;
  t13619 = 13.6*t13559*t13613;
  t13729 = 6.4*t13662*t13675;
  t13730 = 6.4*t13699*t13718;
  t13743 = t7950*t13738;
  t13744 = t13644 + t13743;
  t13745 = 6.4*t13662*t13744;
  t13746 = t2515*t13738;
  t13757 = t13697 + t13746;
  t13758 = 6.4*t13699*t13757;
  t13339 = t10218 + t10567 + t10869 + t13338 + t9232 + t9519 + t9620 + t9695;
  t13786 = Power(t8855,2);
  t13787 = 6.4*t13786;
  t13792 = t2515*t8904;
  t13793 = t13792 + t9552;
  t13794 = 6.4*t8855*t13793;
  t13795 = 6.4*t9515*t9694;
  t13796 = Power(t9694,2);
  t13797 = 6.4*t13796;
  t9698 = t9232 + t9519 + t9620 + t9695;
  t13798 = t13787 + t13794 + t13795 + t13797;
  t13799 = -0.5*var2[4]*t13798;
  t13770 = t13548 + t13555 + t13586 + t13619 + t13729 + t13730 + t13745 + t13758;
  t13832 = Power(t13662,2);
  t13837 = 6.4*t13832;
  t13838 = t2515*t13673;
  t13843 = t13838 + t13743;
  t13845 = 6.4*t13662*t13843;
  t13846 = 6.4*t13718*t13757;
  t13848 = Power(t13757,2);
  t13849 = 6.4*t13848;
  t13768 = t13729 + t13730 + t13745 + t13758;
  t13850 = t13837 + t13845 + t13846 + t13849;
  t13851 = -0.5*var2[6]*t13850;
  t13878 = 6.4*t8855*t9515;
  t13879 = 6.4*t8855*t9694;
  t13885 = 13.6*t10193*t10733;
  t13886 = 13.6*t10562*t10733;
  t13899 = 13.6*t13543*t13559;
  t13900 = 13.6*t13554*t13559;
  t13913 = 6.4*t13662*t13718;
  t13914 = 6.4*t13662*t13757;
  t13895 = 6.4*t8855*t9406;
  t13896 = 6.4*t9202*t9515;
  t13901 = 6.4*t13662*t13699;
  t13907 = 6.4*t13675*t13718;
  t13908 = t13885 + t13886 + t13895 + t13896 + t13899 + t13900 + t13901 + t13907;
  t13890 = t13885 + t13886 + t13878 + t13879;
  t13883 = t13878 + t13879;
  t13920 = t13899 + t13900 + t13913 + t13914;
  t13915 = t13913 + t13914;
  t13525 = -1.*t7950*t8904;
  t13526 = t13525 + t9405;
  t13455 = -1.*t7950*t8318;
  t13458 = t9520 + t13455;
  t13933 = 6.4*t9202*t9406;
  t13934 = 3.2*t8855*t13526;
  t13935 = 3.2*t13458*t9515;
  t13936 = 6.4*t9406*t9608;
  t13937 = -1.*t7950*t7836;
  t13938 = -1.*t2515*t9547;
  t13939 = t13937 + t13938;
  t13945 = 3.2*t8855*t13939;
  t13946 = 3.2*t13458*t9694;
  t13949 = 20.4*t10193*t10733;
  t13950 = 6.8*t10562*t10733;
  t13951 = 20.4*t10193*t11594;
  t13952 = 6.8*t10562*t11594;
  t13654 = -1.*t7950*t13649;
  t13655 = t13644 + t13654;
  t13704 = -1.*t7950*t13673;
  t13707 = t13704 + t13698;
  t13975 = -1.*t7950*t13640;
  t13964 = 20.4*t13543*t13559;
  t13965 = 6.8*t13554*t13559;
  t13971 = 20.4*t13543*t13613;
  t13972 = 6.8*t13554*t13613;
  t13982 = 6.4*t13675*t13699;
  t13983 = 3.2*t13662*t13707;
  t13984 = 3.2*t13655*t13718;
  t13985 = 6.4*t13699*t13744;
  t13986 = -1.*t2515*t13738;
  t13987 = t13975 + t13986;
  t13988 = 3.2*t13662*t13987;
  t13989 = 3.2*t13655*t13757;
  t13953 = t13949 + t13950 + t13951 + t13952 + t13933 + t13934 + t13935 + t13936 + t13945 + t13946;
  t14009 = 3.2*t9515*t9608;
  t14010 = 3.2*t9406*t13793;
  t14011 = t9472 + t13938;
  t14012 = 3.2*t8855*t14011;
  t14013 = 3.2*t9202*t9694;
  t14014 = 6.4*t9608*t9694;
  t13947 = t13933 + t13934 + t13935 + t13936 + t13945 + t13946;
  t14015 = t13895 + t14009 + t14010 + t14012 + t14013 + t14014;
  t14016 = -0.5*var2[4]*t14015;
  t14004 = t13964 + t13965 + t13971 + t13972 + t13982 + t13983 + t13984 + t13985 + t13988 + t13989;
  t14028 = 3.2*t13718*t13744;
  t14029 = 3.2*t13699*t13843;
  t14030 = t13715 + t13986;
  t14033 = 3.2*t13662*t14030;
  t14034 = 3.2*t13675*t13757;
  t14035 = 6.4*t13744*t13757;
  t13990 = t13982 + t13983 + t13984 + t13985 + t13988 + t13989;
  t14036 = t13901 + t14028 + t14029 + t14033 + t14034 + t14035;
  t14037 = -0.5*var2[6]*t14036;
  t14046 = 3.2*t8855*t9202;
  t14047 = 3.2*t9406*t9515;
  t14048 = 3.2*t8855*t9608;
  t14049 = 3.2*t9406*t9694;
  t14052 = 6.8*t10197;
  t14053 = 6.8*t10193*t10562;
  t14054 = 6.8*t10855;
  t14055 = 6.8*t10733*t11594;
  t13495 = Power(t9202,2);
  t13513 = Power(t9406,2);
  t13686 = Power(t13675,2);
  t13700 = Power(t13699,2);
  t14066 = 6.8*t13547;
  t14067 = 6.8*t13543*t13554;
  t14068 = 6.8*t13566;
  t14069 = 6.8*t13559*t13613;
  t14076 = 3.2*t13662*t13675;
  t14077 = 3.2*t13699*t13718;
  t14078 = 3.2*t13662*t13744;
  t14079 = 3.2*t13699*t13757;
  t14060 = 3.2*t13458*t8855;
  t14061 = 3.2*t13495;
  t14062 = 3.2*t13513;
  t14063 = 3.2*t13526*t9515;
  t14070 = 3.2*t13655*t13662;
  t14071 = 3.2*t13686;
  t14072 = 3.2*t13700;
  t14073 = 3.2*t13707*t13718;
  t14074 = t14052 + t14053 + t14054 + t14055 + t14060 + t14061 + t14062 + t14063 + t14066 + t14067 + t14068 + t14069 + t14070 + t14071 + t14072 + t14073;
  t14056 = t14052 + t14053 + t14054 + t14055 + t14046 + t14047 + t14048 + t14049;
  t14050 = t14046 + t14047 + t14048 + t14049;
  t14082 = t14066 + t14067 + t14068 + t14069 + t14076 + t14077 + t14078 + t14079;
  t14080 = t14076 + t14077 + t14078 + t14079;
  t14096 = -1.*t2923;
  t14097 = 1. + t14096;
  t14098 = 0.4*t14097;
  t14099 = 0.64*t2923;
  t14100 = t14098 + t14099;
  t14101 = t14100*t4929;
  t14102 = 0.24*t6133*t7233;
  t14103 = t14101 + t14102;
  t14105 = t6133*t14100;
  t14106 = -0.24*t4929*t7233;
  t14107 = t14105 + t14106;
  t14111 = -1.*t14100*t4929;
  t14112 = -0.24*t6133*t7233;
  t14113 = t14111 + t14112;
  t14104 = -1.*t14103*t8318;
  t14108 = -1.*t7836*t14107;
  t14109 = t14104 + t14108;
  t14110 = 3.2*t9406*t14109;
  t14115 = t14103*t8318;
  t14116 = t7836*t14107;
  t14120 = t14103*t8904;
  t14121 = t8318*t14107;
  t14122 = t14120 + t14121;
  t14123 = 3.2*t14122*t9608;
  t14132 = -0.24*t2923*t4929;
  t14133 = t14132 + t14112;
  t14125 = -1.*t7836*t14103;
  t14135 = 0.24*t6133*t2923;
  t14136 = t14135 + t14106;
  t14127 = -1.*t14107*t9547;
  t14090 = Power(t6133,2);
  t14091 = 0.11*t14090;
  t14092 = Power(t4929,2);
  t14093 = 0.11*t14092;
  t14094 = t14091 + t14093;
  t14095 = 6.8*t11594*t14094;
  t14155 = -1.*t13620;
  t14156 = 1. + t14155;
  t14157 = 0.4*t14156;
  t14158 = 0.64*t13620;
  t14159 = t14157 + t14158;
  t14160 = t14159*t13536;
  t14161 = 0.24*t13531*t13633;
  t14162 = t14160 + t14161;
  t14164 = t13531*t14159;
  t14165 = -0.24*t13536*t13633;
  t14166 = t14164 + t14165;
  t14149 = Power(t13531,2);
  t14150 = 0.11*t14149;
  t14151 = Power(t13536,2);
  t14152 = 0.11*t14151;
  t14153 = t14150 + t14152;
  t14154 = 6.8*t13613*t14153;
  t14163 = -1.*t14162*t13649;
  t14167 = -1.*t13640*t14166;
  t14168 = t14163 + t14167;
  t14170 = t14162*t13673;
  t14171 = t13649*t14166;
  t14172 = t14170 + t14171;
  t14177 = -1.*t14159*t13536;
  t14178 = -0.24*t13531*t13633;
  t14179 = t14177 + t14178;
  t14176 = 3.2*t13699*t14168;
  t14181 = t14162*t13649;
  t14182 = t13640*t14166;
  t14186 = 3.2*t14172*t13744;
  t14195 = -0.24*t13620*t13536;
  t14196 = t14195 + t14178;
  t14188 = -1.*t13640*t14162;
  t14198 = 0.24*t13531*t13620;
  t14199 = t14198 + t14165;
  t14190 = -1.*t14166*t13738;
  t14114 = t14113*t8318;
  t14117 = t8904*t14107;
  t14118 = t14114 + t14115 + t14116 + t14117;
  t14119 = 3.2*t9406*t14118;
  t14124 = -1.*t7836*t14113;
  t14126 = -1.*t8318*t14107;
  t14128 = t14124 + t14125 + t14126 + t14127;
  t14129 = 3.2*t9202*t14128;
  t14130 = t14095 + t14110 + t14119 + t14123 + t14129;
  t14218 = -1.*t6133*t14100;
  t14219 = 0.24*t4929*t7233;
  t14220 = t14218 + t14219;
  t14212 = 3.2*t14122*t13793;
  t14213 = 3.2*t14109*t9694;
  t14134 = t14133*t8318;
  t14137 = t8904*t14136;
  t14138 = t14134 + t14115 + t14116 + t14137;
  t14217 = -1.*t8904*t14107;
  t14223 = -1.*t14103*t9547;
  t14140 = -1.*t7836*t14133;
  t14141 = -1.*t8318*t14136;
  t14142 = t14140 + t14125 + t14141 + t14127;
  t14228 = t7836*t14103;
  t14241 = -0.24*t6133*t2923;
  t14242 = t14241 + t14219;
  t14232 = t14107*t9547;
  t14139 = 3.2*t9406*t14138;
  t14143 = 3.2*t9202*t14142;
  t14144 = t14110 + t14139 + t14123 + t14143;
  t14237 = 3.2*t14118*t9694;
  t14238 = 3.2*t14138*t9694;
  t14239 = -1.*t14133*t8318;
  t14240 = -1.*t7836*t14136;
  t14243 = -1.*t7836*t14242;
  t14244 = -1.*t14113*t9547;
  t14245 = -1.*t14133*t9547;
  t14246 = t14239 + t14108 + t14217 + t14240 + t14243 + t14244 + t14245 + t14223;
  t14247 = 3.2*t9515*t14246;
  t14248 = 3.2*t8855*t14128;
  t14249 = 3.2*t8855*t14142;
  t14250 = t7836*t14113;
  t14251 = t7836*t14133;
  t14252 = t14133*t8904;
  t14253 = t8318*t14136;
  t14254 = t8318*t14242;
  t14255 = t14250 + t14251 + t14228 + t14252 + t14121 + t14253 + t14254 + t14232;
  t14256 = 3.2*t8855*t14255;
  t14257 = t14212 + t14213 + t14237 + t14238 + t14247 + t14248 + t14249 + t14256;
  t14180 = t14179*t13649;
  t14183 = t13673*t14166;
  t14184 = t14180 + t14181 + t14182 + t14183;
  t14185 = 3.2*t13699*t14184;
  t14187 = -1.*t13640*t14179;
  t14189 = -1.*t13649*t14166;
  t14191 = t14187 + t14188 + t14189 + t14190;
  t14192 = 3.2*t13675*t14191;
  t14193 = t14154 + t14176 + t14185 + t14186 + t14192;
  t14284 = -1.*t13531*t14159;
  t14285 = 0.24*t13536*t13633;
  t14286 = t14284 + t14285;
  t14278 = 3.2*t14172*t13843;
  t14279 = 3.2*t14168*t13757;
  t14197 = t14196*t13649;
  t14200 = t13673*t14199;
  t14201 = t14197 + t14181 + t14182 + t14200;
  t14283 = -1.*t13673*t14166;
  t14289 = -1.*t14162*t13738;
  t14203 = -1.*t13640*t14196;
  t14204 = -1.*t13649*t14199;
  t14205 = t14203 + t14188 + t14204 + t14190;
  t14294 = t13640*t14162;
  t14307 = -0.24*t13531*t13620;
  t14308 = t14307 + t14285;
  t14298 = t14166*t13738;
  t14202 = 3.2*t13699*t14201;
  t14206 = 3.2*t13675*t14205;
  t14207 = t14176 + t14202 + t14186 + t14206;
  t14303 = 3.2*t14184*t13757;
  t14304 = 3.2*t14201*t13757;
  t14305 = -1.*t14196*t13649;
  t14306 = -1.*t13640*t14199;
  t14309 = -1.*t13640*t14308;
  t14310 = -1.*t14179*t13738;
  t14311 = -1.*t14196*t13738;
  t14312 = t14305 + t14167 + t14283 + t14306 + t14309 + t14310 + t14311 + t14289;
  t14313 = 3.2*t13718*t14312;
  t14314 = 3.2*t13662*t14191;
  t14315 = 3.2*t13662*t14205;
  t14316 = t13640*t14179;
  t14317 = t13640*t14196;
  t14318 = t14196*t13673;
  t14319 = t13649*t14199;
  t14320 = t13649*t14308;
  t14321 = t14316 + t14317 + t14294 + t14318 + t14171 + t14319 + t14320 + t14298;
  t14322 = 3.2*t13662*t14321;
  t14323 = t14278 + t14279 + t14303 + t14304 + t14313 + t14314 + t14315 + t14322;
  t14344 = 3.2*t8855*t14109;
  t14346 = 3.2*t14122*t9694;
  t14343 = 6.8*t10193*t14094;
  t14357 = 6.8*t13543*t14153;
  t14362 = 3.2*t13662*t14168;
  t14364 = 3.2*t14172*t13757;
  t14354 = -2.88*t2515;
  t14355 = 3.2*t9202*t14109;
  t14356 = 3.2*t9406*t14122;
  t14358 = 3.2*t13675*t14168;
  t14359 = 3.2*t13699*t14172;
  t14360 = t14354 + t14343 + t14355 + t14356 + t14357 + t14358 + t14359;
  t14345 = 3.2*t8855*t14118;
  t14347 = 3.2*t9515*t14128;
  t14348 = t14343 + t14344 + t14345 + t14346 + t14347;
  t14350 = 3.2*t8855*t14138;
  t14351 = 3.2*t9515*t14142;
  t14352 = t14344 + t14350 + t14346 + t14351;
  t14363 = 3.2*t13662*t14184;
  t14365 = 3.2*t13718*t14191;
  t14366 = t14357 + t14362 + t14363 + t14364 + t14365;
  t14368 = 3.2*t13662*t14201;
  t14369 = 3.2*t13718*t14205;
  t14370 = t14362 + t14368 + t14364 + t14369;
  t14378 = 0.748*t11594;
  t14384 = t14100*t7233;
  t14385 = -0.24*t2923*t7233;
  t14386 = t14384 + t14385;
  t14379 = t14100*t2923;
  t14380 = Power(t7233,2);
  t14381 = 0.24*t14380;
  t14382 = t14379 + t14381;
  t14390 = 3.2*t14386*t9406;
  t14391 = 3.2*t14382*t9608;
  t14392 = t14378 + t14390 + t14391;
  t14394 = Power(t2923,2);
  t14395 = -0.24*t14394;
  t14396 = t14379 + t14395;
  t14407 = 3.2*t14382*t13793;
  t14408 = 3.2*t14386*t9694;
  t14398 = -1.*t14100*t7233;
  t14399 = 0.24*t2923*t7233;
  t14400 = t14398 + t14399;
  t14397 = 3.2*t14396*t9202;
  t14401 = 3.2*t14400*t9406;
  t14402 = t14397 + t14390 + t14401 + t14391;
  t14411 = 3.2*t14396*t8855;
  t14412 = 3.2*t14400*t9694;
  t14413 = t14411 + t14407 + t14408 + t14412;
  t14430 = 0.748*t10193;
  t14435 = 3.2*t14386*t8855;
  t14436 = 3.2*t14382*t9694;
  t14431 = 3.2*t14386*t9202;
  t14432 = 3.2*t14382*t9406;
  t14433 = t14430 + t14431 + t14432;
  t14437 = t14430 + t14435 + t14436;
  t14439 = 3.2*t14400*t8855;
  t14440 = 3.2*t14396*t9515;
  t14441 = t14435 + t14439 + t14440 + t14436;
  t14452 = -0.384*var2[2]*t9608;
  t14453 = -0.384*var2[3]*t13793;
  t14454 = -0.384*var2[4]*t13793;
  t14455 = t14452 + t14453 + t14454;
  t14456 = var2[0]*t14455;
  t14462 = -0.384*var2[0]*t9694;
  t14463 = 0.748*t13613;
  t14469 = t14159*t13633;
  t14470 = -0.24*t13620*t13633;
  t14471 = t14469 + t14470;
  t14464 = t14159*t13620;
  t14465 = Power(t13633,2);
  t14466 = 0.24*t14465;
  t14467 = t14464 + t14466;
  t14475 = 3.2*t14471*t13699;
  t14476 = 3.2*t14467*t13744;
  t14477 = t14463 + t14475 + t14476;
  t14479 = Power(t13620,2);
  t14480 = -0.24*t14479;
  t14481 = t14464 + t14480;
  t14492 = 3.2*t14467*t13843;
  t14493 = 3.2*t14471*t13757;
  t14483 = -1.*t14159*t13633;
  t14484 = 0.24*t13620*t13633;
  t14485 = t14483 + t14484;
  t14482 = 3.2*t14481*t13675;
  t14486 = 3.2*t14485*t13699;
  t14487 = t14482 + t14475 + t14486 + t14476;
  t14496 = 3.2*t14481*t13662;
  t14497 = 3.2*t14485*t13757;
  t14498 = t14496 + t14492 + t14493 + t14497;
  t14515 = 0.748*t13543;
  t14520 = 3.2*t14471*t13662;
  t14521 = 3.2*t14467*t13757;
  t14516 = 3.2*t14471*t13675;
  t14517 = 3.2*t14467*t13699;
  t14518 = t14515 + t14516 + t14517;
  t14522 = t14515 + t14520 + t14521;
  t14524 = 3.2*t14485*t13662;
  t14525 = 3.2*t14481*t13718;
  t14526 = t14520 + t14524 + t14525 + t14521;
  t14537 = -0.384*var2[2]*t13744;
  t14538 = -0.384*var2[5]*t13843;
  t14539 = -0.384*var2[6]*t13843;
  t14540 = t14537 + t14538 + t14539;
  t14541 = var2[0]*t14540;
  t14547 = -0.384*var2[0]*t13757;
  p_output1[0]=var2[0]*(-0.5*(t10218 + t10567 + t10869 + t13338 + 6.4*t13495 + 6.4*t13513 + t13548 + t13555 + t13586 + t13619 + 6.4*t13655*t13662 + 6.4*t13686 + 6.4*t13700 + 6.4*t13707*t13718 + 6.4*t13458*t8855 + 6.4*t13526*t9515)*var2[2] - 0.5*t13339*var2[3] - 0.5*t9698*var2[4] - 0.5*t13770*var2[5] - 0.5*t13768*var2[6]);
  p_output1[1]=var2[0]*(t13799 - 0.5*t13339*var2[2] - 0.5*(t10218 + t10567 + t10869 + t13338 + t13787 + t13794 + t13795 + t13797)*var2[3]);
  p_output1[2]=var2[0]*(t13799 - 0.5*t9698*var2[2] - 0.5*t13798*var2[3]);
  p_output1[3]=var2[0]*(t13851 - 0.5*t13770*var2[2] - 0.5*(t13548 + t13555 + t13586 + t13619 + t13837 + t13845 + t13846 + t13849)*var2[5]);
  p_output1[4]=var2[0]*(t13851 - 0.5*t13768*var2[2] - 0.5*t13850*var2[5]);
  p_output1[5]=-0.5*t13908*var2[2] - 0.5*t13890*var2[3] - 0.5*t13883*var2[4] - 0.5*t13920*var2[5] - 0.5*t13915*var2[6];
  p_output1[6]=-0.5*t13908*var2[0];
  p_output1[7]=-0.5*t13890*var2[0];
  p_output1[8]=-0.5*t13883*var2[0];
  p_output1[9]=-0.5*t13920*var2[0];
  p_output1[10]=-0.5*t13915*var2[0];
  p_output1[11]=var2[0]*(-0.5*(9.6*t13655*t13699 + 9.6*t13675*t13707 + 3.2*t13718*(t13654 + t13838) + t13949 + t13950 + t13951 + t13952 + t13964 + t13965 + t13971 + t13972 + 3.2*t13662*(t13716 + t13975) + 9.6*t13526*t9202 + 9.6*t13458*t9406 + 3.2*t8855*(t13937 + t9514) + 3.2*(t13455 + t13792)*t9515)*var2[2] - 0.5*t13953*var2[3] - 0.5*t13947*var2[4] - 0.5*t14004*var2[5] - 0.5*t13990*var2[6]);
  p_output1[12]=var2[0]*(t14016 - 0.5*t13953*var2[2] - 0.5*(t13895 + t13949 + t13950 + t13951 + t13952 + t14009 + t14010 + t14012 + t14013 + t14014)*var2[3]);
  p_output1[13]=var2[0]*(t14016 - 0.5*t13947*var2[2] - 0.5*t14015*var2[3]);
  p_output1[14]=var2[0]*(t14037 - 0.5*t14004*var2[2] - 0.5*(t13901 + t13964 + t13965 + t13971 + t13972 + t14028 + t14029 + t14033 + t14034 + t14035)*var2[5]);
  p_output1[15]=var2[0]*(t14037 - 0.5*t13990*var2[2] - 0.5*t14036*var2[5]);
  p_output1[16]=-0.5*t14074*var2[2] - 0.5*t14056*var2[3] - 0.5*t14050*var2[4] - 0.5*t14082*var2[5] - 0.5*t14080*var2[6];
  p_output1[17]=-0.5*t14074*var2[0];
  p_output1[18]=-0.5*t14056*var2[0];
  p_output1[19]=-0.5*t14050*var2[0];
  p_output1[20]=-0.5*t14082*var2[0];
  p_output1[21]=-0.5*t14080*var2[0];
  p_output1[22]=var2[0]*(-0.5*(t14095 + 3.2*t13526*t14109 + 3.2*t13458*t14122 + t14154 + 3.2*t13707*t14168 + 3.2*t13655*t14172 - 2.88*t7950)*var2[2] - 0.5*t14130*var2[3] - 0.5*t14144*var2[4] - 0.5*t14193*var2[5] - 0.5*t14207*var2[6]);
  p_output1[23]=var2[0]*(-0.5*t14130*var2[2] - 0.5*(t14095 + t14212 + t14213 + 6.4*t14128*t8855 + 3.2*t8855*(t14228 + t14232 + 2.*t14113*t7836 + 2.*t14107*t8318 + t14220*t8318 + t14113*t8904) + 3.2*t9515*(t14217 + t14223 - 2.*t14107*t7836 - 1.*t14220*t7836 - 1.*t14113*t8318 - 2.*t14113*t9547) + 6.4*t14118*t9694)*var2[3] - 0.5*t14257*var2[4]);
  p_output1[24]=var2[0]*(-0.5*t14144*var2[2] - 0.5*t14257*var2[3] - 0.5*(t14212 + t14213 + 6.4*t14142*t8855 + 3.2*(t14228 + t14232 + t14252 + t14254 + 2.*t14133*t7836 + 2.*t14136*t8318)*t8855 + 3.2*t9515*(t14217 + t14223 + t14239 + t14243 - 2.*t14136*t7836 - 2.*t14133*t9547) + 6.4*t14138*t9694)*var2[4]);
  p_output1[25]=var2[0]*(-0.5*t14193*var2[2] - 0.5*(t14154 + 6.4*t13757*t14184 + 6.4*t13662*t14191 + t14278 + t14279 + 3.2*t13718*(-2.*t13640*t14166 - 1.*t13649*t14179 - 2.*t13738*t14179 + t14283 - 1.*t13640*t14286 + t14289) + 3.2*t13662*(2.*t13649*t14166 + 2.*t13640*t14179 + t13673*t14179 + t13649*t14286 + t14294 + t14298))*var2[5] - 0.5*t14323*var2[6]);
  p_output1[26]=var2[0]*(-0.5*t14207*var2[2] - 0.5*t14323*var2[5] - 0.5*(6.4*t13757*t14201 + 6.4*t13662*t14205 + t14278 + t14279 + 3.2*t13718*(-2.*t13738*t14196 - 2.*t13640*t14199 + t14283 + t14289 + t14305 + t14309) + 3.2*t13662*(2.*t13640*t14196 + 2.*t13649*t14199 + t14294 + t14298 + t14318 + t14320))*var2[6]);
  p_output1[27]=-0.5*t14360*var2[2] - 0.5*t14348*var2[3] - 0.5*t14352*var2[4] - 0.5*t14366*var2[5] - 0.5*t14370*var2[6];
  p_output1[28]=-0.5*t14360*var2[0];
  p_output1[29]=-0.5*t14348*var2[0];
  p_output1[30]=-0.5*t14352*var2[0];
  p_output1[31]=-0.5*t14366*var2[0];
  p_output1[32]=-0.5*t14370*var2[0];
  p_output1[33]=var2[0]*(-0.5*(t14378 + 3.2*t13458*t14382 + 3.2*t13526*t14386)*var2[2] - 0.5*t14392*var2[3] - 0.5*t14402*var2[4]);
  p_output1[34]=var2[0]*(-0.5*t14392*var2[2] - 0.5*(t14378 + t14407 + t14408)*var2[3] - 0.5*t14413*var2[4]);
  p_output1[35]=var2[0]*(-0.5*t14402*var2[2] - 0.5*t14413*var2[3] - 0.5*(t14407 + t14408 + 6.4*t14396*t8855 + 3.2*(0.24*t14394 - 1.*t14100*t2923)*t8855 + 3.2*t14400*t9515 + 6.4*t14400*t9694)*var2[4]);
  p_output1[36]=-0.5*t14433*var2[2] - 0.5*t14437*var2[3] - 0.5*t14441*var2[4];
  p_output1[37]=-0.5*t14433*var2[0];
  p_output1[38]=-0.5*t14437*var2[0];
  p_output1[39]=-0.5*t14441*var2[0];
  p_output1[40]=var2[0]*(-0.384*t13458*var2[2] - 0.384*t9608*var2[3] - 0.384*t9608*var2[4]);
  p_output1[41]=t14456;
  p_output1[42]=t14456;
  p_output1[43]=-0.384*t9406*var2[2] - 0.384*t9694*var2[3] - 0.384*t9694*var2[4];
  p_output1[44]=-0.384*t9406*var2[0];
  p_output1[45]=t14462;
  p_output1[46]=t14462;
  p_output1[47]=var2[0]*(-0.5*(t14463 + 3.2*t13655*t14467 + 3.2*t13707*t14471)*var2[2] - 0.5*t14477*var2[5] - 0.5*t14487*var2[6]);
  p_output1[48]=var2[0]*(-0.5*t14477*var2[2] - 0.5*(t14463 + t14492 + t14493)*var2[5] - 0.5*t14498*var2[6]);
  p_output1[49]=var2[0]*(-0.5*t14487*var2[2] - 0.5*t14498*var2[5] - 0.5*(3.2*t13662*(-1.*t13620*t14159 + 0.24*t14479) + 6.4*t13662*t14481 + 3.2*t13718*t14485 + 6.4*t13757*t14485 + t14492 + t14493)*var2[6]);
  p_output1[50]=-0.5*t14518*var2[2] - 0.5*t14522*var2[5] - 0.5*t14526*var2[6];
  p_output1[51]=-0.5*t14518*var2[0];
  p_output1[52]=-0.5*t14522*var2[0];
  p_output1[53]=-0.5*t14526*var2[0];
  p_output1[54]=var2[0]*(-0.384*t13655*var2[2] - 0.384*t13744*var2[5] - 0.384*t13744*var2[6]);
  p_output1[55]=t14541;
  p_output1[56]=t14541;
  p_output1[57]=-0.384*t13699*var2[2] - 0.384*t13757*var2[5] - 0.384*t13757*var2[6];
  p_output1[58]=-0.384*t13699*var2[0];
  p_output1[59]=t14547;
  p_output1[60]=t14547;
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 61, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce1_vec1_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_Ce1_vec1_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
