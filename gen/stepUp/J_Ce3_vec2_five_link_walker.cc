/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:20:50 GMT-05:00
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
  double t101;
  double t77;
  double t81;
  double t112;
  double t132;
  double t57;
  double t135;
  double t136;
  double t139;
  double t157;
  double t158;
  double t161;
  double t165;
  double t166;
  double t95;
  double t113;
  double t122;
  double t131;
  double t140;
  double t143;
  double t8928;
  double t7868;
  double t8036;
  double t9152;
  double t9872;
  double t9876;
  double t9877;
  double t9895;
  double t9896;
  double t9897;
  double t9898;
  double t9899;
  double t8667;
  double t9695;
  double t9705;
  double t9708;
  double t9878;
  double t9879;
  double t9934;
  double t10661;
  double t10669;
  double t146;
  double t149;
  double t150;
  double t11915;
  double t11983;
  double t11986;
  double t5811;
  double t3124;
  double t3201;
  double t3238;
  double t3300;
  double t5935;
  double t12646;
  double t12839;
  double t12840;
  double t12845;
  double t9891;
  double t9892;
  double t9893;
  double t12854;
  double t12858;
  double t12859;
  double t9910;
  double t9903;
  double t9904;
  double t9908;
  double t9909;
  double t9920;
  double t12874;
  double t11184;
  double t11283;
  double t11284;
  double t12079;
  double t12084;
  double t12829;
  double t12830;
  double t12147;
  double t12152;
  double t12241;
  double t12248;
  double t12740;
  double t12851;
  double t12852;
  double t12853;
  double t12863;
  double t12864;
  double t12885;
  double t12886;
  double t12867;
  double t12870;
  double t12871;
  double t12873;
  double t12875;
  double t14135;
  double t14188;
  double t14192;
  double t14241;
  double t14311;
  double t14312;
  double t14454;
  double t14462;
  double t14465;
  double t16029;
  double t16090;
  double t16105;
  double t153;
  double t313;
  double t2474;
  double t2809;
  double t6058;
  double t7245;
  double t7569;
  double t7599;
  double t16222;
  double t16224;
  double t16227;
  double t16228;
  double t16229;
  double t10728;
  double t11024;
  double t11172;
  double t12046;
  double t12051;
  double t12067;
  double t12897;
  double t12898;
  double t12899;
  double t12905;
  double t13558;
  double t13560;
  double t13674;
  double t13711;
  double t16258;
  double t16259;
  double t14068;
  double t14072;
  double t14108;
  double t14111;
  double t14125;
  double t14132;
  double t14238;
  double t14313;
  double t14315;
  double t14355;
  double t14363;
  double t14369;
  double t16483;
  double t16484;
  double t16485;
  double t16236;
  double t16241;
  double t16243;
  double t16255;
  double t16257;
  double t16260;
  double t16261;
  double t16297;
  double t16301;
  double t16302;
  double t16303;
  double t16304;
  double t16305;
  double t16464;
  double t16469;
  double t16479;
  double t16512;
  double t16513;
  double t16517;
  double t16567;
  double t16568;
  double t16519;
  double t16608;
  double t16609;
  double t16525;
  double t9894;
  double t9900;
  double t9901;
  double t9902;
  double t9927;
  double t9928;
  double t9929;
  double t9930;
  double t16632;
  double t16633;
  double t16634;
  double t16635;
  double t16636;
  double t12846;
  double t12849;
  double t12850;
  double t12860;
  double t12861;
  double t12862;
  double t13739;
  double t13832;
  double t13837;
  double t13845;
  double t13879;
  double t13935;
  double t13989;
  double t14049;
  double t16644;
  double t16645;
  double t14401;
  double t14430;
  double t14431;
  double t14432;
  double t14436;
  double t14439;
  double t14526;
  double t16112;
  double t16131;
  double t16169;
  double t16174;
  double t16175;
  double t16678;
  double t16679;
  double t16686;
  double t16637;
  double t16638;
  double t16639;
  double t16642;
  double t16643;
  double t16646;
  double t16647;
  double t16653;
  double t16654;
  double t16655;
  double t16657;
  double t16661;
  double t16662;
  double t16663;
  double t16664;
  double t16671;
  double t16690;
  double t16691;
  double t16700;
  double t16776;
  double t16777;
  double t16702;
  double t16779;
  double t16780;
  double t16705;
  double t16792;
  double t16793;
  double t16794;
  double t16795;
  double t16799;
  double t16800;
  double t16801;
  double t16803;
  double t16807;
  double t16808;
  double t16809;
  double t16810;
  double t16811;
  double t16812;
  double t16813;
  double t16814;
  double t16815;
  double t16816;
  double t16817;
  double t16818;
  double t16819;
  double t16820;
  double t16821;
  double t16846;
  double t16847;
  double t16848;
  double t16849;
  double t16850;
  double t16851;
  double t16852;
  double t16853;
  double t16824;
  double t16825;
  double t16826;
  double t16827;
  double t16830;
  double t16831;
  double t16832;
  double t16833;
  double t16244;
  double t16253;
  double t16277;
  double t16281;
  double t16470;
  double t16475;
  double t16503;
  double t16514;
  double t16515;
  double t16516;
  double t16518;
  double t16524;
  double t16532;
  double t16533;
  double t16540;
  double t16541;
  double t16544;
  double t16545;
  double t16861;
  double t16889;
  double t16890;
  double t16891;
  double t16862;
  double t16555;
  double t16556;
  double t16557;
  double t16863;
  double t16546;
  double t16551;
  double t16552;
  double t16864;
  double t16867;
  double t16868;
  double t16869;
  double t16870;
  double t16871;
  double t16874;
  double t16875;
  double t16876;
  double t16877;
  double t16878;
  double t16879;
  double t16880;
  double t16883;
  double t16605;
  double t16615;
  double t16621;
  double t16885;
  double t16888;
  double t16894;
  double t16623;
  double t16624;
  double t16625;
  double t16899;
  double t16922;
  double t16923;
  double t16903;
  double t16835;
  double t16836;
  double t16942;
  double t16943;
  double t16944;
  double t16945;
  double t16946;
  double t16956;
  double t16957;
  double t16958;
  double t16959;
  double t16960;
  double t16949;
  double t16950;
  double t16951;
  double t16554;
  double t16559;
  double t16560;
  double t16561;
  double t16563;
  double t16564;
  double t16565;
  double t16566;
  double t16622;
  double t16627;
  double t16628;
  double t16629;
  double t16630;
  double t16631;
  double t16910;
  double t16911;
  double t16912;
  double t16913;
  double t16914;
  double t16915;
  double t16916;
  double t16917;
  double t16918;
  double t16919;
  double t16920;
  double t16921;
  double t16924;
  double t16925;
  double t16926;
  double t16927;
  double t16928;
  double t16929;
  double t16930;
  double t16931;
  double t16932;
  double t16933;
  double t16934;
  double t16935;
  double t16936;
  double t16937;
  double t16938;
  double t16939;
  double t16940;
  double t16941;
  double t16948;
  double t16989;
  double t16998;
  double t16999;
  double t17000;
  double t16991;
  double t16992;
  double t16993;
  double t16965;
  double t16640;
  double t16641;
  double t16648;
  double t16649;
  double t16665;
  double t16670;
  double t16687;
  double t16692;
  double t16697;
  double t16698;
  double t16701;
  double t16703;
  double t16706;
  double t16707;
  double t16709;
  double t16710;
  double t16711;
  double t16712;
  double t17005;
  double t17033;
  double t17034;
  double t17035;
  double t17006;
  double t16755;
  double t16761;
  double t16767;
  double t17007;
  double t16713;
  double t16714;
  double t16751;
  double t17008;
  double t17011;
  double t17012;
  double t17013;
  double t17014;
  double t17015;
  double t17018;
  double t17019;
  double t17020;
  double t17021;
  double t17022;
  double t17023;
  double t17024;
  double t17027;
  double t16778;
  double t16781;
  double t16782;
  double t17029;
  double t17032;
  double t17038;
  double t16784;
  double t16785;
  double t16786;
  double t17043;
  double t17066;
  double t17067;
  double t17047;
  double t16839;
  double t16840;
  double t17086;
  double t17087;
  double t17088;
  double t17089;
  double t17090;
  double t17100;
  double t17101;
  double t17102;
  double t17103;
  double t17104;
  double t17093;
  double t17094;
  double t17095;
  double t16754;
  double t16768;
  double t16769;
  double t16770;
  double t16771;
  double t16773;
  double t16774;
  double t16775;
  double t16783;
  double t16787;
  double t16788;
  double t16789;
  double t16790;
  double t16791;
  double t17054;
  double t17055;
  double t17056;
  double t17057;
  double t17058;
  double t17059;
  double t17060;
  double t17061;
  double t17062;
  double t17063;
  double t17064;
  double t17065;
  double t17068;
  double t17069;
  double t17070;
  double t17071;
  double t17072;
  double t17073;
  double t17074;
  double t17075;
  double t17076;
  double t17077;
  double t17078;
  double t17079;
  double t17080;
  double t17081;
  double t17082;
  double t17083;
  double t17084;
  double t17085;
  double t17092;
  double t17133;
  double t17142;
  double t17143;
  double t17144;
  double t17135;
  double t17136;
  double t17137;
  double t17109;
  t101 = Cos(var1[3]);
  t77 = Cos(var1[4]);
  t81 = Sin(var1[3]);
  t112 = Sin(var1[4]);
  t132 = Sin(var1[2]);
  t57 = Cos(var1[2]);
  t135 = t101*t77;
  t136 = -1.*t81*t112;
  t139 = t135 + t136;
  t157 = -1.*t77;
  t158 = 1. + t157;
  t161 = 0.4*t158;
  t165 = 0.64*t77;
  t166 = t161 + t165;
  t95 = -1.*t77*t81;
  t113 = -1.*t101*t112;
  t122 = t95 + t113;
  t131 = -1.*t57*t122;
  t140 = t132*t139;
  t143 = t131 + t140;
  t8928 = Cos(var1[5]);
  t7868 = Cos(var1[6]);
  t8036 = Sin(var1[5]);
  t9152 = Sin(var1[6]);
  t9872 = t8928*t7868;
  t9876 = -1.*t8036*t9152;
  t9877 = t9872 + t9876;
  t9895 = -1.*t7868;
  t9896 = 1. + t9895;
  t9897 = 0.4*t9896;
  t9898 = 0.64*t7868;
  t9899 = t9897 + t9898;
  t8667 = -1.*t7868*t8036;
  t9695 = -1.*t8928*t9152;
  t9705 = t8667 + t9695;
  t9708 = -1.*t57*t9705;
  t9878 = t132*t9877;
  t9879 = t9708 + t9878;
  t9934 = -1.*t101*t132;
  t10661 = -1.*t57*t81;
  t10669 = t9934 + t10661;
  t146 = t101*t132;
  t149 = t57*t81;
  t150 = t146 + t149;
  t11915 = -1.*t57*t101;
  t11983 = t132*t81;
  t11986 = t11915 + t11983;
  t5811 = -1.*t57*t139;
  t3124 = t77*t81;
  t3201 = t101*t112;
  t3238 = t3124 + t3201;
  t3300 = t132*t3238;
  t5935 = t3300 + t5811;
  t12646 = -1.*t132*t139;
  t12839 = -1.*t8928*t132;
  t12840 = -1.*t57*t8036;
  t12845 = t12839 + t12840;
  t9891 = t8928*t132;
  t9892 = t57*t8036;
  t9893 = t9891 + t9892;
  t12854 = -1.*t57*t8928;
  t12858 = t132*t8036;
  t12859 = t12854 + t12858;
  t9910 = -1.*t57*t9877;
  t9903 = t7868*t8036;
  t9904 = t8928*t9152;
  t9908 = t9903 + t9904;
  t9909 = t132*t9908;
  t9920 = t9909 + t9910;
  t12874 = -1.*t132*t9877;
  t11184 = t57*t101;
  t11283 = -1.*t132*t81;
  t11284 = t11184 + t11283;
  t12079 = -1.*t132*t122;
  t12084 = t12079 + t5811;
  t12829 = t57*t122;
  t12830 = t12829 + t12646;
  t12147 = -1.*t132*t3238;
  t12152 = t57*t139;
  t12241 = t12147 + t12152;
  t12248 = -1.*t57*t3238;
  t12740 = t12248 + t12646;
  t12851 = t57*t8928;
  t12852 = -1.*t132*t8036;
  t12853 = t12851 + t12852;
  t12863 = -1.*t132*t9705;
  t12864 = t12863 + t9910;
  t12885 = t57*t9705;
  t12886 = t12885 + t12874;
  t12867 = -1.*t132*t9908;
  t12870 = t57*t9877;
  t12871 = t12867 + t12870;
  t12873 = -1.*t57*t9908;
  t12875 = t12873 + t12874;
  t14135 = t166*t81;
  t14188 = 0.24*t101*t112;
  t14192 = t14135 + t14188;
  t14241 = t101*t166;
  t14311 = -0.24*t81*t112;
  t14312 = t14241 + t14311;
  t14454 = t9899*t8036;
  t14462 = 0.24*t8928*t9152;
  t14465 = t14454 + t14462;
  t16029 = t8928*t9899;
  t16090 = -0.24*t8036*t9152;
  t16105 = t16029 + t16090;
  t153 = -0.748*t150;
  t313 = t166*t112;
  t2474 = -0.24*t77*t112;
  t2809 = t313 + t2474;
  t6058 = t166*t77;
  t7245 = Power(t112,2);
  t7569 = 0.24*t7245;
  t7599 = t6058 + t7569;
  t16222 = -1.*t101*t77;
  t16224 = t81*t112;
  t16227 = t16222 + t16224;
  t16228 = -1.*t132*t16227;
  t16229 = t131 + t16228;
  t10728 = Power(t10669,2);
  t11024 = -13.6*t10728;
  t11172 = -13.6*t10669*t150;
  t12046 = -13.6*t11284*t11986;
  t12051 = Power(t11986,2);
  t12067 = -13.6*t12051;
  t12897 = -20.4*t10669*t11284;
  t12898 = -6.8*t150*t11284;
  t12899 = -20.4*t10669*t11986;
  t12905 = -6.8*t150*t11986;
  t13558 = t132*t122;
  t13560 = t13558 + t12152;
  t13674 = t57*t3238;
  t13711 = t13674 + t140;
  t16258 = t57*t16227;
  t16259 = t12079 + t16258;
  t14068 = Power(t101,2);
  t14072 = 0.11*t14068;
  t14108 = Power(t81,2);
  t14111 = 0.11*t14108;
  t14125 = t14072 + t14111;
  t14132 = -6.8*t150*t14125;
  t14238 = -1.*t14192*t139;
  t14313 = -1.*t122*t14312;
  t14315 = t14238 + t14313;
  t14355 = t14192*t3238;
  t14363 = t139*t14312;
  t14369 = t14355 + t14363;
  t16483 = -1.*t166*t81;
  t16484 = -0.24*t101*t112;
  t16485 = t16483 + t16484;
  t16236 = 0.384*var2[4]*t16229;
  t16241 = -3.2*t2809*t12084;
  t16243 = -3.2*t7599*t16229;
  t16255 = -6.4*t12084*t12241;
  t16257 = -6.4*t12830*t12740;
  t16260 = -6.4*t12084*t16259;
  t16261 = -6.4*t12830*t16229;
  t16297 = -6.4*t12241*t12830;
  t16301 = -3.2*t13560*t12740;
  t16302 = -3.2*t12084*t13711;
  t16303 = -6.4*t12830*t16259;
  t16304 = -3.2*t13560*t16229;
  t16305 = t132*t16227;
  t16464 = t12829 + t16305;
  t16469 = -3.2*t12084*t16464;
  t16479 = -3.2*t12084*t14315;
  t16512 = t14192*t139;
  t16513 = t122*t14312;
  t16517 = -3.2*t14369*t16229;
  t16567 = -0.24*t77*t81;
  t16568 = t16567 + t16484;
  t16519 = -1.*t122*t14192;
  t16608 = 0.24*t101*t77;
  t16609 = t16608 + t14311;
  t16525 = -1.*t14312*t16227;
  t9894 = -0.748*t9893;
  t9900 = t9899*t9152;
  t9901 = -0.24*t7868*t9152;
  t9902 = t9900 + t9901;
  t9927 = t9899*t7868;
  t9928 = Power(t9152,2);
  t9929 = 0.24*t9928;
  t9930 = t9927 + t9929;
  t16632 = -1.*t8928*t7868;
  t16633 = t8036*t9152;
  t16634 = t16632 + t16633;
  t16635 = -1.*t132*t16634;
  t16636 = t9708 + t16635;
  t12846 = Power(t12845,2);
  t12849 = -13.6*t12846;
  t12850 = -13.6*t12845*t9893;
  t12860 = -13.6*t12853*t12859;
  t12861 = Power(t12859,2);
  t12862 = -13.6*t12861;
  t13739 = -20.4*t12845*t12853;
  t13832 = -6.8*t9893*t12853;
  t13837 = -20.4*t12845*t12859;
  t13845 = -6.8*t9893*t12859;
  t13879 = t132*t9705;
  t13935 = t13879 + t12870;
  t13989 = t57*t9908;
  t14049 = t13989 + t9878;
  t16644 = t57*t16634;
  t16645 = t12863 + t16644;
  t14401 = Power(t8928,2);
  t14430 = 0.11*t14401;
  t14431 = Power(t8036,2);
  t14432 = 0.11*t14431;
  t14436 = t14430 + t14432;
  t14439 = -6.8*t9893*t14436;
  t14526 = -1.*t14465*t9877;
  t16112 = -1.*t9705*t16105;
  t16131 = t14526 + t16112;
  t16169 = t14465*t9908;
  t16174 = t9877*t16105;
  t16175 = t16169 + t16174;
  t16678 = -1.*t9899*t8036;
  t16679 = -0.24*t8928*t9152;
  t16686 = t16678 + t16679;
  t16637 = 0.384*var2[6]*t16636;
  t16638 = -3.2*t9902*t12864;
  t16639 = -3.2*t9930*t16636;
  t16642 = -6.4*t12864*t12871;
  t16643 = -6.4*t12886*t12875;
  t16646 = -6.4*t12864*t16645;
  t16647 = -6.4*t12886*t16636;
  t16653 = -6.4*t12871*t12886;
  t16654 = -3.2*t13935*t12875;
  t16655 = -3.2*t12864*t14049;
  t16657 = -6.4*t12886*t16645;
  t16661 = -3.2*t13935*t16636;
  t16662 = t132*t16634;
  t16663 = t12885 + t16662;
  t16664 = -3.2*t12864*t16663;
  t16671 = -3.2*t12864*t16131;
  t16690 = t14465*t9877;
  t16691 = t9705*t16105;
  t16700 = -3.2*t16175*t16636;
  t16776 = -0.24*t7868*t8036;
  t16777 = t16776 + t16679;
  t16702 = -1.*t9705*t14465;
  t16779 = 0.24*t8928*t7868;
  t16780 = t16779 + t16090;
  t16705 = -1.*t16105*t16634;
  t16792 = -6.8*t10728;
  t16793 = -6.8*t10669*t150;
  t16794 = Power(t11284,2);
  t16795 = -6.8*t16794;
  t16799 = -6.8*t11284*t11986;
  t16800 = -3.2*t12084*t13560;
  t16801 = Power(t12241,2);
  t16803 = -3.2*t16801;
  t16807 = Power(t12830,2);
  t16808 = -3.2*t16807;
  t16809 = -3.2*t12740*t13711;
  t16810 = -6.8*t12846;
  t16811 = -6.8*t12845*t9893;
  t16812 = Power(t12853,2);
  t16813 = -6.8*t16812;
  t16814 = -6.8*t12853*t12859;
  t16815 = -3.2*t12864*t13935;
  t16816 = Power(t12871,2);
  t16817 = -3.2*t16816;
  t16818 = Power(t12886,2);
  t16819 = -3.2*t16818;
  t16820 = -3.2*t12875*t14049;
  t16821 = t16792 + t16793 + t16795 + t16799 + t16800 + t16803 + t16808 + t16809 + t16810 + t16811 + t16813 + t16814 + t16815 + t16817 + t16819 + t16820;
  t16846 = 2.88*t57;
  t16847 = -6.8*t11986*t14125;
  t16848 = -3.2*t12740*t14315;
  t16849 = -3.2*t12084*t14369;
  t16850 = -6.8*t12859*t14436;
  t16851 = -3.2*t12875*t16131;
  t16852 = -3.2*t12864*t16175;
  t16853 = t16846 + t16847 + t16848 + t16849 + t16850 + t16851 + t16852;
  t16824 = -0.748*t11986;
  t16825 = -3.2*t7599*t12084;
  t16826 = -3.2*t2809*t12740;
  t16827 = t16824 + t16825 + t16826;
  t16830 = -0.748*t12859;
  t16831 = -3.2*t9930*t12864;
  t16832 = -3.2*t9902*t12875;
  t16833 = t16830 + t16831 + t16832;
  t16244 = t153 + t16241 + t16243;
  t16253 = -0.5*var2[3]*t16244;
  t16277 = t11024 + t11172 + t12046 + t12067 + t16255 + t16257 + t16260 + t16261;
  t16281 = -0.5*var2[1]*t16277;
  t16470 = t12897 + t12898 + t12899 + t12905 + t16297 + t16301 + t16302 + t16303 + t16304 + t16469;
  t16475 = -0.5*var2[0]*t16470;
  t16503 = t16485*t139;
  t16514 = t3238*t14312;
  t16515 = t16503 + t16512 + t16513 + t16514;
  t16516 = -3.2*t12084*t16515;
  t16518 = -1.*t122*t16485;
  t16524 = -1.*t139*t14312;
  t16532 = t16518 + t16519 + t16524 + t16525;
  t16533 = -3.2*t12740*t16532;
  t16540 = t14132 + t16479 + t16516 + t16517 + t16533;
  t16541 = -0.5*var2[2]*t16540;
  t16544 = t16236 + t16253 + t16281 + t16475 + t16541;
  t16545 = var2[1]*t16544;
  t16861 = t13674 + t16228;
  t16889 = -1.*t101*t166;
  t16890 = 0.24*t81*t112;
  t16891 = t16889 + t16890;
  t16862 = 0.384*var2[4]*t16861;
  t16555 = Power(t77,2);
  t16556 = -0.24*t16555;
  t16557 = t6058 + t16556;
  t16863 = -3.2*t2809*t16259;
  t16546 = -1.*t166*t112;
  t16551 = 0.24*t77*t112;
  t16552 = t16546 + t16551;
  t16864 = -3.2*t7599*t16861;
  t16867 = -6.4*t16807;
  t16868 = -6.4*t12241*t16259;
  t16869 = Power(t16259,2);
  t16870 = -6.4*t16869;
  t16871 = -6.4*t12830*t16861;
  t16874 = -6.4*t13560*t12830;
  t16875 = -3.2*t13711*t16259;
  t16876 = t3300 + t16258;
  t16877 = -3.2*t12830*t16876;
  t16878 = -3.2*t13560*t16861;
  t16879 = -3.2*t12241*t16464;
  t16880 = -6.4*t16259*t16464;
  t16883 = -3.2*t14315*t16259;
  t16605 = t16568*t139;
  t16615 = t3238*t16609;
  t16621 = t16605 + t16512 + t16513 + t16615;
  t16885 = -3.2*t14369*t16861;
  t16888 = -1.*t3238*t14312;
  t16894 = -1.*t14192*t16227;
  t16623 = -1.*t122*t16568;
  t16624 = -1.*t139*t16609;
  t16625 = t16623 + t16519 + t16624 + t16525;
  t16899 = t122*t14192;
  t16922 = -0.24*t101*t77;
  t16923 = t16922 + t16890;
  t16903 = t14312*t16227;
  t16835 = -13.6*t10669*t11284;
  t16836 = -13.6*t10669*t11986;
  t16942 = -3.2*t13560*t12241;
  t16943 = -3.2*t12830*t13711;
  t16944 = -3.2*t13560*t16259;
  t16945 = -3.2*t12830*t16464;
  t16946 = t16792 + t16793 + t16795 + t16799 + t16942 + t16943 + t16944 + t16945;
  t16956 = -3.2*t12830*t14315;
  t16957 = -3.2*t12830*t16515;
  t16958 = -3.2*t14369*t16259;
  t16959 = -3.2*t12241*t16532;
  t16960 = t16847 + t16956 + t16957 + t16958 + t16959;
  t16949 = -3.2*t2809*t12830;
  t16950 = -3.2*t7599*t16259;
  t16951 = t16824 + t16949 + t16950;
  t16554 = -3.2*t16552*t12084;
  t16559 = -3.2*t16557*t12740;
  t16560 = t16241 + t16554 + t16559 + t16243;
  t16561 = -0.5*var2[3]*t16560;
  t16563 = t16255 + t16257 + t16260 + t16261;
  t16564 = -0.5*var2[1]*t16563;
  t16565 = t16297 + t16301 + t16302 + t16303 + t16304 + t16469;
  t16566 = -0.5*var2[0]*t16565;
  t16622 = -3.2*t12084*t16621;
  t16627 = -3.2*t12740*t16625;
  t16628 = t16479 + t16622 + t16517 + t16627;
  t16629 = -0.5*var2[2]*t16628;
  t16630 = t16236 + t16561 + t16564 + t16566 + t16629;
  t16631 = var2[1]*t16630;
  t16910 = -3.2*t16557*t12830;
  t16911 = -3.2*t16552*t16259;
  t16912 = t16910 + t16863 + t16911 + t16864;
  t16913 = -0.5*var2[3]*t16912;
  t16914 = t16867 + t16868 + t16870 + t16871;
  t16915 = -0.5*var2[1]*t16914;
  t16916 = t16874 + t16875 + t16877 + t16878 + t16879 + t16880;
  t16917 = -0.5*var2[0]*t16916;
  t16918 = -3.2*t16515*t16259;
  t16919 = -3.2*t16621*t16259;
  t16920 = -1.*t16568*t139;
  t16921 = -1.*t122*t16609;
  t16924 = -1.*t122*t16923;
  t16925 = -1.*t16485*t16227;
  t16926 = -1.*t16568*t16227;
  t16927 = t16920 + t14313 + t16888 + t16921 + t16924 + t16925 + t16926 + t16894;
  t16928 = -3.2*t12241*t16927;
  t16929 = -3.2*t12830*t16532;
  t16930 = -3.2*t12830*t16625;
  t16931 = t122*t16485;
  t16932 = t122*t16568;
  t16933 = t16568*t3238;
  t16934 = t139*t16609;
  t16935 = t139*t16923;
  t16936 = t16931 + t16932 + t16899 + t16933 + t14363 + t16934 + t16935 + t16903;
  t16937 = -3.2*t12830*t16936;
  t16938 = t16883 + t16918 + t16919 + t16885 + t16928 + t16929 + t16930 + t16937;
  t16939 = -0.5*var2[2]*t16938;
  t16940 = t16862 + t16913 + t16915 + t16917 + t16939;
  t16941 = var2[1]*t16940;
  t16948 = 0.384*var2[4]*t16259;
  t16989 = t16942 + t16943 + t16944 + t16945;
  t16998 = -3.2*t12830*t16621;
  t16999 = -3.2*t12241*t16625;
  t17000 = t16956 + t16998 + t16958 + t16999;
  t16991 = -3.2*t16557*t12241;
  t16992 = -3.2*t16552*t12830;
  t16993 = t16991 + t16949 + t16992 + t16950;
  t16965 = 0.384*var2[1]*t16259;
  t16640 = t9894 + t16638 + t16639;
  t16641 = -0.5*var2[5]*t16640;
  t16648 = t12849 + t12850 + t12860 + t12862 + t16642 + t16643 + t16646 + t16647;
  t16649 = -0.5*var2[1]*t16648;
  t16665 = t13739 + t13832 + t13837 + t13845 + t16653 + t16654 + t16655 + t16657 + t16661 + t16664;
  t16670 = -0.5*var2[0]*t16665;
  t16687 = t16686*t9877;
  t16692 = t9908*t16105;
  t16697 = t16687 + t16690 + t16691 + t16692;
  t16698 = -3.2*t12864*t16697;
  t16701 = -1.*t9705*t16686;
  t16703 = -1.*t9877*t16105;
  t16706 = t16701 + t16702 + t16703 + t16705;
  t16707 = -3.2*t12875*t16706;
  t16709 = t14439 + t16671 + t16698 + t16700 + t16707;
  t16710 = -0.5*var2[2]*t16709;
  t16711 = t16637 + t16641 + t16649 + t16670 + t16710;
  t16712 = var2[1]*t16711;
  t17005 = t13989 + t16635;
  t17033 = -1.*t8928*t9899;
  t17034 = 0.24*t8036*t9152;
  t17035 = t17033 + t17034;
  t17006 = 0.384*var2[6]*t17005;
  t16755 = Power(t7868,2);
  t16761 = -0.24*t16755;
  t16767 = t9927 + t16761;
  t17007 = -3.2*t9902*t16645;
  t16713 = -1.*t9899*t9152;
  t16714 = 0.24*t7868*t9152;
  t16751 = t16713 + t16714;
  t17008 = -3.2*t9930*t17005;
  t17011 = -6.4*t16818;
  t17012 = -6.4*t12871*t16645;
  t17013 = Power(t16645,2);
  t17014 = -6.4*t17013;
  t17015 = -6.4*t12886*t17005;
  t17018 = -6.4*t13935*t12886;
  t17019 = -3.2*t14049*t16645;
  t17020 = t9909 + t16644;
  t17021 = -3.2*t12886*t17020;
  t17022 = -3.2*t13935*t17005;
  t17023 = -3.2*t12871*t16663;
  t17024 = -6.4*t16645*t16663;
  t17027 = -3.2*t16131*t16645;
  t16778 = t16777*t9877;
  t16781 = t9908*t16780;
  t16782 = t16778 + t16690 + t16691 + t16781;
  t17029 = -3.2*t16175*t17005;
  t17032 = -1.*t9908*t16105;
  t17038 = -1.*t14465*t16634;
  t16784 = -1.*t9705*t16777;
  t16785 = -1.*t9877*t16780;
  t16786 = t16784 + t16702 + t16785 + t16705;
  t17043 = t9705*t14465;
  t17066 = -0.24*t8928*t7868;
  t17067 = t17066 + t17034;
  t17047 = t16105*t16634;
  t16839 = -13.6*t12845*t12853;
  t16840 = -13.6*t12845*t12859;
  t17086 = -3.2*t13935*t12871;
  t17087 = -3.2*t12886*t14049;
  t17088 = -3.2*t13935*t16645;
  t17089 = -3.2*t12886*t16663;
  t17090 = t16810 + t16811 + t16813 + t16814 + t17086 + t17087 + t17088 + t17089;
  t17100 = -3.2*t12886*t16131;
  t17101 = -3.2*t12886*t16697;
  t17102 = -3.2*t16175*t16645;
  t17103 = -3.2*t12871*t16706;
  t17104 = t16850 + t17100 + t17101 + t17102 + t17103;
  t17093 = -3.2*t9902*t12886;
  t17094 = -3.2*t9930*t16645;
  t17095 = t16830 + t17093 + t17094;
  t16754 = -3.2*t16751*t12864;
  t16768 = -3.2*t16767*t12875;
  t16769 = t16638 + t16754 + t16768 + t16639;
  t16770 = -0.5*var2[5]*t16769;
  t16771 = t16642 + t16643 + t16646 + t16647;
  t16773 = -0.5*var2[1]*t16771;
  t16774 = t16653 + t16654 + t16655 + t16657 + t16661 + t16664;
  t16775 = -0.5*var2[0]*t16774;
  t16783 = -3.2*t12864*t16782;
  t16787 = -3.2*t12875*t16786;
  t16788 = t16671 + t16783 + t16700 + t16787;
  t16789 = -0.5*var2[2]*t16788;
  t16790 = t16637 + t16770 + t16773 + t16775 + t16789;
  t16791 = var2[1]*t16790;
  t17054 = -3.2*t16767*t12886;
  t17055 = -3.2*t16751*t16645;
  t17056 = t17054 + t17007 + t17055 + t17008;
  t17057 = -0.5*var2[5]*t17056;
  t17058 = t17011 + t17012 + t17014 + t17015;
  t17059 = -0.5*var2[1]*t17058;
  t17060 = t17018 + t17019 + t17021 + t17022 + t17023 + t17024;
  t17061 = -0.5*var2[0]*t17060;
  t17062 = -3.2*t16697*t16645;
  t17063 = -3.2*t16782*t16645;
  t17064 = -1.*t16777*t9877;
  t17065 = -1.*t9705*t16780;
  t17068 = -1.*t9705*t17067;
  t17069 = -1.*t16686*t16634;
  t17070 = -1.*t16777*t16634;
  t17071 = t17064 + t16112 + t17032 + t17065 + t17068 + t17069 + t17070 + t17038;
  t17072 = -3.2*t12871*t17071;
  t17073 = -3.2*t12886*t16706;
  t17074 = -3.2*t12886*t16786;
  t17075 = t9705*t16686;
  t17076 = t9705*t16777;
  t17077 = t16777*t9908;
  t17078 = t9877*t16780;
  t17079 = t9877*t17067;
  t17080 = t17075 + t17076 + t17043 + t17077 + t16174 + t17078 + t17079 + t17047;
  t17081 = -3.2*t12886*t17080;
  t17082 = t17027 + t17062 + t17063 + t17029 + t17072 + t17073 + t17074 + t17081;
  t17083 = -0.5*var2[2]*t17082;
  t17084 = t17006 + t17057 + t17059 + t17061 + t17083;
  t17085 = var2[1]*t17084;
  t17092 = 0.384*var2[6]*t16645;
  t17133 = t17086 + t17087 + t17088 + t17089;
  t17142 = -3.2*t12886*t16782;
  t17143 = -3.2*t12871*t16786;
  t17144 = t17100 + t17142 + t17102 + t17143;
  t17135 = -3.2*t16767*t12871;
  t17136 = -3.2*t16751*t12886;
  t17137 = t17135 + t17093 + t17136 + t17094;
  t17109 = 0.384*var2[1]*t16645;
  p_output1[0]=var2[1]*(-0.5*(-9.6*t12241*t12740 - 9.6*t12084*t12830 - 9.6*t12871*t12875 - 9.6*t12864*t12886 + t12897 + t12898 + t12899 + t12905 + t13739 + t13832 + t13837 + t13845 - 3.2*t13560*t143 - 3.2*t13711*t5935 - 3.2*t13935*t9879 - 3.2*t14049*t9920)*var2[0] - 0.5*(t11024 + t11172 + t12046 + t12067 - 6.4*Power(t12084,2) - 6.4*Power(t12740,2) + t12849 + t12850 + t12860 + t12862 - 6.4*Power(t12864,2) - 6.4*Power(t12875,2) - 6.4*t12830*t143 - 6.4*t12241*t5935 - 6.4*t12886*t9879 - 6.4*t12871*t9920)*var2[1] - 0.5*(-2.88*t132 + t14132 - 3.2*t143*t14369 + t14439 - 3.2*t14315*t5935 - 3.2*t16175*t9879 - 3.2*t16131*t9920)*var2[2] - 0.5*(t153 - 3.2*t2809*t5935 - 3.2*t143*t7599)*var2[3] + 0.384*t143*var2[4] - 0.5*(t9894 - 3.2*t9902*t9920 - 3.2*t9879*t9930)*var2[5] + 0.384*t9879*var2[6]);
  p_output1[1]=t16545;
  p_output1[2]=t16631;
  p_output1[3]=t16712;
  p_output1[4]=t16791;
  p_output1[5]=-0.5*t16821*var2[1];
  p_output1[6]=-0.5*t16821*var2[0] - 1.*(-6.4*t12241*t12740 - 6.4*t12084*t12830 - 6.4*t12871*t12875 - 6.4*t12864*t12886 + t16835 + t16836 + t16839 + t16840)*var2[1] - 0.5*t16853*var2[2] - 0.5*t16827*var2[3] + 0.384*t12084*var2[4] - 0.5*t16833*var2[5] + 0.384*t12864*var2[6];
  p_output1[7]=-0.5*t16853*var2[1];
  p_output1[8]=-0.5*t16827*var2[1];
  p_output1[9]=0.384*t12084*var2[1];
  p_output1[10]=-0.5*t16833*var2[1];
  p_output1[11]=0.384*t12864*var2[1];
  p_output1[12]=t16545;
  p_output1[13]=var2[1]*(t16862 - 0.5*(t12897 + t12898 + t12899 + t12905 + t16874 + t16875 + t16877 + t16878 + t16879 + t16880)*var2[0] - 0.5*(t11024 + t11172 + t12046 + t12067 + t16867 + t16868 + t16870 + t16871)*var2[1] - 0.5*(t14132 - 6.4*t16259*t16515 - 6.4*t12830*t16532 + t16883 + t16885 - 3.2*t12241*(-2.*t122*t14312 - 1.*t139*t16485 - 2.*t16227*t16485 + t16888 - 1.*t122*t16891 + t16894) - 3.2*t12830*(2.*t139*t14312 + 2.*t122*t16485 + t139*t16891 + t16899 + t16903 + t16485*t3238))*var2[2] - 0.5*(t153 + t16863 + t16864)*var2[3]);
  p_output1[14]=t16941;
  p_output1[15]=-0.5*t16946*var2[1];
  p_output1[16]=t16948 - 0.5*t16946*var2[0] - 1.*(t16297 + t16303 + t16835 + t16836)*var2[1] - 0.5*t16960*var2[2] - 0.5*t16951*var2[3];
  p_output1[17]=-0.5*t16960*var2[1];
  p_output1[18]=-0.5*t16951*var2[1];
  p_output1[19]=t16965;
  p_output1[20]=t16631;
  p_output1[21]=t16941;
  p_output1[22]=var2[1]*(t16862 + t16915 + t16917 - 0.5*(-6.4*t16259*t16621 - 6.4*t12830*t16625 + t16883 + t16885 - 3.2*t12241*(-2.*t16227*t16568 - 2.*t122*t16609 + t16888 + t16894 + t16920 + t16924) - 3.2*t12830*(2.*t122*t16568 + 2.*t139*t16609 + t16899 + t16903 + t16933 + t16935))*var2[2] - 0.5*(-3.2*t12241*t16552 - 6.4*t16259*t16552 - 6.4*t12830*t16557 + t16863 + t16864 - 3.2*t12830*(0.24*t16555 - 1.*t166*t77))*var2[3]);
  p_output1[23]=-0.5*t16989*var2[1];
  p_output1[24]=t16948 - 0.5*t16989*var2[0] - 1.*(t16297 + t16303)*var2[1] - 0.5*t17000*var2[2] - 0.5*t16993*var2[3];
  p_output1[25]=-0.5*t17000*var2[1];
  p_output1[26]=-0.5*t16993*var2[1];
  p_output1[27]=t16965;
  p_output1[28]=t16712;
  p_output1[29]=var2[1]*(t17006 - 0.5*(t13739 + t13832 + t13837 + t13845 + t17018 + t17019 + t17021 + t17022 + t17023 + t17024)*var2[0] - 0.5*(t12849 + t12850 + t12860 + t12862 + t17011 + t17012 + t17014 + t17015)*var2[1] - 0.5*(t14439 - 6.4*t16645*t16697 - 6.4*t12886*t16706 + t17027 + t17029 - 3.2*t12871*(-2.*t16634*t16686 + t17032 + t17038 - 2.*t16105*t9705 - 1.*t17035*t9705 - 1.*t16686*t9877) - 3.2*t12886*(t17043 + t17047 + 2.*t16686*t9705 + 2.*t16105*t9877 + t17035*t9877 + t16686*t9908))*var2[2] - 0.5*(t17007 + t17008 + t9894)*var2[5]);
  p_output1[30]=t17085;
  p_output1[31]=-0.5*t17090*var2[1];
  p_output1[32]=t17092 - 0.5*t17090*var2[0] - 1.*(t16653 + t16657 + t16839 + t16840)*var2[1] - 0.5*t17104*var2[2] - 0.5*t17095*var2[5];
  p_output1[33]=-0.5*t17104*var2[1];
  p_output1[34]=-0.5*t17095*var2[1];
  p_output1[35]=t17109;
  p_output1[36]=t16791;
  p_output1[37]=t17085;
  p_output1[38]=var2[1]*(t17006 + t17059 + t17061 - 0.5*(-6.4*t16645*t16782 - 6.4*t12886*t16786 + t17027 + t17029 - 3.2*t12871*(-2.*t16634*t16777 + t17032 + t17038 + t17064 + t17068 - 2.*t16780*t9705) - 3.2*t12886*(t17043 + t17047 + t17077 + t17079 + 2.*t16777*t9705 + 2.*t16780*t9877))*var2[2] - 0.5*(-3.2*t12871*t16751 - 6.4*t16645*t16751 - 6.4*t12886*t16767 + t17007 + t17008 - 3.2*t12886*(0.24*t16755 - 1.*t7868*t9899))*var2[5]);
  p_output1[39]=-0.5*t17133*var2[1];
  p_output1[40]=t17092 - 0.5*t17133*var2[0] - 1.*(t16653 + t16657)*var2[1] - 0.5*t17144*var2[2] - 0.5*t17137*var2[5];
  p_output1[41]=-0.5*t17144*var2[1];
  p_output1[42]=-0.5*t17137*var2[1];
  p_output1[43]=t17109;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 44, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_Ce3_vec2_five_link_walker.hh"

namespace DoubleSupportConstHeight
{

void J_Ce3_vec2_five_link_walker_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
