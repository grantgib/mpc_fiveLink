/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:27:49 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5)
{
  double t3310;
  double t709;
  double t5972;
  double t6970;
  double t7010;
  double t7024;
  double t7033;
  double t7041;
  double t7042;
  double t7101;
  double t7117;
  double t7135;
  double t7139;
  double t7178;
  double t7187;
  double t7191;
  double t6998;
  double t7003;
  double t7006;
  double t6968;
  double t6982;
  double t6984;
  double t7014;
  double t7025;
  double t7028;
  double t7030;
  double t7047;
  double t7050;
  double t7054;
  double t7058;
  double t7068;
  double t7069;
  double t7073;
  double t7088;
  double t7126;
  double t7127;
  double t7132;
  double t7108;
  double t7120;
  double t7123;
  double t7136;
  double t7167;
  double t7171;
  double t7177;
  double t7197;
  double t7198;
  double t7207;
  double t7208;
  double t7209;
  double t7215;
  double t7216;
  double t7249;
  double t7727;
  double t7730;
  double t7737;
  double t7742;
  double t7743;
  double t7744;
  double t7749;
  double t7756;
  double t7766;
  double t7770;
  double t7771;
  double t9153;
  double t9164;
  double t9202;
  double t9229;
  double t9240;
  double t9255;
  double t9698;
  double t9716;
  double t10668;
  double t10878;
  double t10925;
  double t7269;
  double t7270;
  double t7271;
  double t7257;
  double t7263;
  double t7264;
  double t12818;
  double t12819;
  double t12820;
  double t7273;
  double t7274;
  double t11981;
  double t12083;
  double t12119;
  double t12150;
  double t7329;
  double t7334;
  double t7338;
  double t7291;
  double t7292;
  double t7305;
  double t12893;
  double t12901;
  double t12902;
  double t7350;
  double t7360;
  double t12883;
  double t12884;
  double t12890;
  double t12891;
  double t7007;
  double t7133;
  double t7399;
  double t7401;
  double t7402;
  double t7403;
  double t7694;
  double t7765;
  double t7776;
  double t7777;
  double t7780;
  double t7782;
  double t7784;
  double t7915;
  double t8206;
  double t8220;
  double t8881;
  double t8994;
  double t10232;
  double t10984;
  double t10999;
  double t11033;
  double t11094;
  double t11105;
  double t12911;
  double t12912;
  double t12915;
  double t12916;
  double t12917;
  double t13022;
  double t13023;
  double t13037;
  double t13038;
  double t13039;
  double t12936;
  double t12937;
  double t12938;
  double t12939;
  double t12948;
  double t12949;
  double t12950;
  double t12951;
  double t12952;
  double t12953;
  double t12955;
  double t12956;
  double t12957;
  double t12958;
  double t12962;
  double t13000;
  double t13001;
  double t13003;
  double t13060;
  double t13061;
  double t13062;
  double t13040;
  double t13041;
  double t13042;
  double t13045;
  double t13046;
  double t13049;
  double t13050;
  double t13051;
  double t13053;
  double t13054;
  double t13055;
  double t13059;
  double t13064;
  double t13065;
  double t13069;
  double t13105;
  double t13106;
  double t13071;
  double t13109;
  double t13113;
  double t13074;
  double t12925;
  double t12926;
  double t12928;
  double t12929;
  double t12930;
  double t13158;
  double t13159;
  double t13160;
  double t13161;
  double t13164;
  double t12942;
  double t12943;
  double t12974;
  double t12975;
  double t12977;
  double t12978;
  double t12979;
  double t12980;
  double t12981;
  double t12982;
  double t12983;
  double t13016;
  double t13214;
  double t13215;
  double t13572;
  double t13165;
  double t13168;
  double t13169;
  double t13172;
  double t13173;
  double t13178;
  double t13179;
  double t13181;
  double t13182;
  double t13186;
  double t13188;
  double t13212;
  double t13796;
  double t13844;
  double t13955;
  double t16346;
  double t16416;
  double t14433;
  double t16458;
  double t16498;
  double t14441;
  double t2704;
  double t5967;
  double t6987;
  double t7051;
  double t7089;
  double t7124;
  double t7203;
  double t7253;
  double t7265;
  double t7266;
  double t7272;
  double t7277;
  double t7318;
  double t7322;
  double t7345;
  double t7393;
  double t7394;
  double t2738;
  double t5971;
  double t7009;
  double t12966;
  double t12968;
  double t7134;
  double t12988;
  double t12990;
  double t12963;
  double t12964;
  double t12970;
  double t12971;
  double t12984;
  double t12985;
  double t12995;
  double t12996;
  double t12965;
  double t12967;
  double t12969;
  double t12973;
  double t12986;
  double t12989;
  double t12994;
  double t12997;
  double t12998;
  double t7395;
  double t18412;
  double t18546;
  double t13057;
  double t18749;
  double t13063;
  double t13066;
  double t13067;
  double t13070;
  double t13073;
  double t13075;
  double t18778;
  double t13091;
  double t13092;
  double t13095;
  double t18802;
  double t13085;
  double t13086;
  double t13087;
  double t18803;
  double t18806;
  double t18809;
  double t13103;
  double t18831;
  double t13108;
  double t13115;
  double t13117;
  double t18835;
  double t13139;
  double t13141;
  double t13142;
  double t18507;
  double t18654;
  double t13190;
  double t18763;
  double t13579;
  double t13859;
  double t13896;
  double t14378;
  double t14437;
  double t14463;
  double t18933;
  double t16053;
  double t16079;
  double t16096;
  double t18934;
  double t14653;
  double t15746;
  double t15760;
  double t18935;
  double t18952;
  double t18954;
  double t16320;
  double t19006;
  double t16440;
  double t16588;
  double t16669;
  double t19016;
  double t16693;
  double t16695;
  double t16704;
  double t16733;
  double t16743;
  double t16752;
  double t16753;
  double t16757;
  double t16763;
  double t16764;
  double t16772;
  double t17772;
  double t16723;
  double t16724;
  double t13002;
  double t13014;
  double t13015;
  double t13017;
  double t13018;
  double t13019;
  double t12918;
  double t12922;
  double t12923;
  double t12931;
  double t12932;
  double t12933;
  double t7723;
  double t7779;
  double t7786;
  double t8995;
  double t11007;
  double t11286;
  double t11318;
  double t17985;
  double t18000;
  double t18001;
  double t18038;
  double t18040;
  double t18059;
  double t18076;
  double t18090;
  double t18759;
  double t18760;
  double t18764;
  double t18767;
  double t18771;
  double t19126;
  double t19127;
  double t19147;
  double t19148;
  double t19149;
  double t19150;
  double t19151;
  double t19154;
  double t19155;
  double t19156;
  double t19157;
  double t19160;
  double t19161;
  double t19176;
  double t19183;
  double t19185;
  double t18834;
  double t18836;
  double t18838;
  double t13068;
  double t13081;
  double t13082;
  double t18927;
  double t18929;
  double t18930;
  double t13138;
  double t13154;
  double t13155;
  double t19187;
  double t19188;
  double t19191;
  double t19192;
  double t19193;
  double t19194;
  double t19195;
  double t19196;
  double t19197;
  double t19198;
  double t19199;
  double t19200;
  double t19201;
  double t19202;
  double t19203;
  double t19204;
  double t19011;
  double t19017;
  double t19022;
  double t13947;
  double t14477;
  double t14492;
  double t19046;
  double t19048;
  double t19050;
  double t16689;
  double t16708;
  double t16716;
  double t17797;
  double t17804;
  double t17808;
  double t17812;
  double t17813;
  double t17816;
  double t17818;
  double t17819;
  double t19073;
  double t19086;
  double t19088;
  double t19095;
  double t19097;
  double t19100;
  double t19230;
  double t19275;
  double t11724;
  double t12169;
  double t12825;
  double t12826;
  double t18095;
  double t18097;
  double t18098;
  double t18103;
  double t19111;
  double t19112;
  double t19113;
  double t19114;
  double t18440;
  double t18441;
  double t18463;
  double t18804;
  double t13043;
  double t19209;
  double t19212;
  double t19213;
  double t19229;
  double t19231;
  double t19232;
  double t19233;
  double t19234;
  double t19235;
  double t19236;
  double t19237;
  double t19238;
  double t19239;
  double t19240;
  double t19241;
  double t19242;
  double t18848;
  double t18849;
  double t18850;
  double t13088;
  double t13096;
  double t13097;
  double t19243;
  double t19244;
  double t19245;
  double t19246;
  double t19247;
  double t17820;
  double t17821;
  double t17832;
  double t17847;
  double t19308;
  double t19309;
  double t19310;
  double t19311;
  double t19340;
  double t19342;
  double t19320;
  double t19321;
  double t19322;
  double t19323;
  double t19324;
  double t19325;
  double t19326;
  double t19327;
  double t19328;
  double t19329;
  double t12881;
  double t18104;
  double t19115;
  double t19119;
  double t19345;
  double t19346;
  double t19372;
  double t19373;
  double t17848;
  double t19057;
  double t19312;
  double t19313;
  double t19366;
  double t19367;
  double t19377;
  double t12882;
  double t12892;
  double t12903;
  double t12904;
  double t18107;
  double t18108;
  double t18133;
  double t18288;
  double t19120;
  double t19121;
  double t19122;
  double t19123;
  double t18514;
  double t18519;
  double t18521;
  double t18943;
  double t13170;
  double t19262;
  double t19263;
  double t19264;
  double t19274;
  double t19276;
  double t19277;
  double t19278;
  double t19279;
  double t19280;
  double t19281;
  double t19282;
  double t19283;
  double t19284;
  double t19285;
  double t19286;
  double t19287;
  double t19033;
  double t19034;
  double t19035;
  double t15761;
  double t16190;
  double t16193;
  double t19288;
  double t19289;
  double t19290;
  double t19291;
  double t19292;
  double t17849;
  double t17852;
  double t17854;
  double t17861;
  double t19314;
  double t19315;
  double t19316;
  double t19317;
  double t19398;
  double t19400;
  double t19330;
  double t19331;
  double t19332;
  double t19333;
  double t19334;
  double t19335;
  double t19336;
  double t19337;
  double t19338;
  double t19339;
  double t12910;
  double t18344;
  double t19124;
  double t19125;
  double t19403;
  double t19404;
  double t19430;
  double t19431;
  double t17862;
  double t19072;
  double t19318;
  double t19319;
  double t19424;
  double t19425;
  double t19435;
  t3310 = Sin(var2[2]);
  t709 = Cos(var2[2]);
  t5972 = Cos(var2[3]);
  t6970 = Sin(var2[3]);
  t7010 = Cos(var2[4]);
  t7024 = Sin(var2[4]);
  t7033 = t5972*t7010;
  t7041 = -1.*t6970*t7024;
  t7042 = t7033 + t7041;
  t7101 = Cos(var2[5]);
  t7117 = Sin(var2[5]);
  t7135 = Cos(var2[6]);
  t7139 = Sin(var2[6]);
  t7178 = t7101*t7135;
  t7187 = -1.*t7117*t7139;
  t7191 = t7178 + t7187;
  t6998 = t709*t5972;
  t7003 = -1.*t3310*t6970;
  t7006 = t6998 + t7003;
  t6968 = t5972*t3310;
  t6982 = t709*t6970;
  t6984 = t6968 + t6982;
  t7014 = -1.*t7010*t6970;
  t7025 = -1.*t5972*t7024;
  t7028 = t7014 + t7025;
  t7030 = t3310*t7028;
  t7047 = t709*t7042;
  t7050 = t7030 + t7047;
  t7054 = t7010*t6970;
  t7058 = t5972*t7024;
  t7068 = t7054 + t7058;
  t7069 = t709*t7068;
  t7073 = t3310*t7042;
  t7088 = t7069 + t7073;
  t7126 = t709*t7101;
  t7127 = -1.*t3310*t7117;
  t7132 = t7126 + t7127;
  t7108 = t7101*t3310;
  t7120 = t709*t7117;
  t7123 = t7108 + t7120;
  t7136 = -1.*t7135*t7117;
  t7167 = -1.*t7101*t7139;
  t7171 = t7136 + t7167;
  t7177 = t3310*t7171;
  t7197 = t709*t7191;
  t7198 = t7177 + t7197;
  t7207 = t7135*t7117;
  t7208 = t7101*t7139;
  t7209 = t7207 + t7208;
  t7215 = t709*t7209;
  t7216 = t3310*t7191;
  t7249 = t7215 + t7216;
  t7727 = -1.*t7010;
  t7730 = 1. + t7727;
  t7737 = 0.4*t7730;
  t7742 = 0.64*t7010;
  t7743 = t7737 + t7742;
  t7744 = t7743*t6970;
  t7749 = 0.24*t5972*t7024;
  t7756 = t7744 + t7749;
  t7766 = t5972*t7743;
  t7770 = -0.24*t6970*t7024;
  t7771 = t7766 + t7770;
  t9153 = -1.*t7135;
  t9164 = 1. + t9153;
  t9202 = 0.4*t9164;
  t9229 = 0.64*t7135;
  t9240 = t9202 + t9229;
  t9255 = t9240*t7117;
  t9698 = 0.24*t7101*t7139;
  t9716 = t9255 + t9698;
  t10668 = t7101*t9240;
  t10878 = -0.24*t7117*t7139;
  t10925 = t10668 + t10878;
  t7269 = t709*t7028;
  t7270 = -1.*t3310*t7042;
  t7271 = t7269 + t7270;
  t7257 = -1.*t5972*t3310;
  t7263 = -1.*t709*t6970;
  t7264 = t7257 + t7263;
  t12818 = t7743*t7024;
  t12819 = -0.24*t7010*t7024;
  t12820 = t12818 + t12819;
  t7273 = -1.*t3310*t7068;
  t7274 = t7273 + t7047;
  t11981 = t7743*t7010;
  t12083 = Power(t7024,2);
  t12119 = 0.24*t12083;
  t12150 = t11981 + t12119;
  t7329 = t709*t7171;
  t7334 = -1.*t3310*t7191;
  t7338 = t7329 + t7334;
  t7291 = -1.*t7101*t3310;
  t7292 = -1.*t709*t7117;
  t7305 = t7291 + t7292;
  t12893 = t9240*t7139;
  t12901 = -0.24*t7135*t7139;
  t12902 = t12893 + t12901;
  t7350 = -1.*t3310*t7209;
  t7360 = t7350 + t7197;
  t12883 = t9240*t7135;
  t12884 = Power(t7139,2);
  t12890 = 0.24*t12884;
  t12891 = t12883 + t12890;
  t7007 = Power(t7006,2);
  t7133 = Power(t7132,2);
  t7399 = Power(t5972,2);
  t7401 = 0.11*t7399;
  t7402 = Power(t6970,2);
  t7403 = 0.11*t7402;
  t7694 = t7401 + t7403;
  t7765 = -1.*t7756*t7042;
  t7776 = -1.*t7028*t7771;
  t7777 = t7765 + t7776;
  t7780 = t7756*t7068;
  t7782 = t7042*t7771;
  t7784 = t7780 + t7782;
  t7915 = Power(t7101,2);
  t8206 = 0.11*t7915;
  t8220 = Power(t7117,2);
  t8881 = 0.11*t8220;
  t8994 = t8206 + t8881;
  t10232 = -1.*t9716*t7191;
  t10984 = -1.*t7171*t10925;
  t10999 = t10232 + t10984;
  t11033 = t9716*t7209;
  t11094 = t7191*t10925;
  t11105 = t11033 + t11094;
  t12911 = -1.*var1[4];
  t12912 = var3[4] + t12911;
  t12915 = -1.*var1[3];
  t12916 = var3[3] + t12915;
  t12917 = 0.748*t7264;
  t13022 = -1.*t5972*t7010;
  t13023 = t6970*t7024;
  t13037 = t13022 + t13023;
  t13038 = t3310*t13037;
  t13039 = t7269 + t13038;
  t12936 = -1.*var1[0];
  t12937 = var3[0] + t12936;
  t12938 = 13.6*t7264*t7006;
  t12939 = 13.6*t6984*t7006;
  t12948 = -1.*var1[1];
  t12949 = var3[1] + t12948;
  t12950 = Power(t7264,2);
  t12951 = 6.8*t12950;
  t12952 = 6.8*t7264*t6984;
  t12953 = 6.8*t7007;
  t12955 = -1.*t709*t5972;
  t12956 = t3310*t6970;
  t12957 = t12955 + t12956;
  t12958 = 6.8*t7006*t12957;
  t12962 = -1.*t3310*t7028;
  t13000 = -1.*var1[2];
  t13001 = var3[2] + t13000;
  t13003 = 6.8*t7264*t7694;
  t13060 = -1.*t7743*t6970;
  t13061 = -0.24*t5972*t7024;
  t13062 = t13060 + t13061;
  t13040 = 0.768*t12912*t13039;
  t13041 = 3.2*t12820*t7050;
  t13042 = 3.2*t12150*t13039;
  t13045 = 6.4*t7050*t7088;
  t13046 = 6.4*t7050*t13039;
  t13049 = 3.2*t7050*t7274;
  t13050 = 3.2*t7271*t7088;
  t13051 = t709*t13037;
  t13053 = t12962 + t13051;
  t13054 = 3.2*t7050*t13053;
  t13055 = 3.2*t7271*t13039;
  t13059 = 3.2*t7050*t7777;
  t13064 = t7756*t7042;
  t13065 = t7028*t7771;
  t13069 = 3.2*t7784*t13039;
  t13105 = -0.24*t7010*t6970;
  t13106 = t13105 + t13061;
  t13071 = -1.*t7028*t7756;
  t13109 = 0.24*t5972*t7010;
  t13113 = t13109 + t7770;
  t13074 = -1.*t7771*t13037;
  t12925 = -1.*var1[6];
  t12926 = var3[6] + t12925;
  t12928 = -1.*var1[5];
  t12929 = var3[5] + t12928;
  t12930 = 0.748*t7305;
  t13158 = -1.*t7101*t7135;
  t13159 = t7117*t7139;
  t13160 = t13158 + t13159;
  t13161 = t3310*t13160;
  t13164 = t7329 + t13161;
  t12942 = 13.6*t7305*t7132;
  t12943 = 13.6*t7123*t7132;
  t12974 = Power(t7305,2);
  t12975 = 6.8*t12974;
  t12977 = 6.8*t7305*t7123;
  t12978 = 6.8*t7133;
  t12979 = -1.*t709*t7101;
  t12980 = t3310*t7117;
  t12981 = t12979 + t12980;
  t12982 = 6.8*t7132*t12981;
  t12983 = -1.*t3310*t7171;
  t13016 = 6.8*t7305*t8994;
  t13214 = -1.*t9240*t7117;
  t13215 = -0.24*t7101*t7139;
  t13572 = t13214 + t13215;
  t13165 = 0.768*t12926*t13164;
  t13168 = 3.2*t12902*t7198;
  t13169 = 3.2*t12891*t13164;
  t13172 = 6.4*t7198*t7249;
  t13173 = 6.4*t7198*t13164;
  t13178 = 3.2*t7198*t7360;
  t13179 = 3.2*t7338*t7249;
  t13181 = t709*t13160;
  t13182 = t12983 + t13181;
  t13186 = 3.2*t7198*t13182;
  t13188 = 3.2*t7338*t13164;
  t13212 = 3.2*t7198*t10999;
  t13796 = t9716*t7191;
  t13844 = t7171*t10925;
  t13955 = 3.2*t11105*t13164;
  t16346 = -0.24*t7135*t7117;
  t16416 = t16346 + t13215;
  t14433 = -1.*t7171*t9716;
  t16458 = 0.24*t7101*t7135;
  t16498 = t16458 + t10878;
  t14441 = -1.*t10925*t13160;
  t2704 = Power(t709,2);
  t5967 = Power(t3310,2);
  t6987 = Power(t6984,2);
  t7051 = Power(t7050,2);
  t7089 = Power(t7088,2);
  t7124 = Power(t7123,2);
  t7203 = Power(t7198,2);
  t7253 = Power(t7249,2);
  t7265 = -6.8*t7264*t7006;
  t7266 = -6.8*t6984*t7006;
  t7272 = -3.2*t7050*t7271;
  t7277 = -3.2*t7274*t7088;
  t7318 = -6.8*t7305*t7132;
  t7322 = -6.8*t7123*t7132;
  t7345 = -3.2*t7198*t7338;
  t7393 = -3.2*t7360*t7249;
  t7394 = t7265 + t7266 + t7272 + t7277 + t7318 + t7322 + t7345 + t7393;
  t2738 = -12.*t2704;
  t5971 = -12.*t5967;
  t7009 = -6.8*t7007;
  t12966 = Power(t7274,2);
  t12968 = Power(t7271,2);
  t7134 = -6.8*t7133;
  t12988 = Power(t7360,2);
  t12990 = Power(t7338,2);
  t12963 = -1.*t709*t7042;
  t12964 = t12962 + t12963;
  t12970 = -1.*t709*t7068;
  t12971 = t12970 + t7270;
  t12984 = -1.*t709*t7191;
  t12985 = t12983 + t12984;
  t12995 = -1.*t709*t7209;
  t12996 = t12995 + t7334;
  t12965 = 3.2*t12964*t7050;
  t12967 = 3.2*t12966;
  t12969 = 3.2*t12968;
  t12973 = 3.2*t12971*t7088;
  t12986 = 3.2*t12985*t7198;
  t12989 = 3.2*t12988;
  t12994 = 3.2*t12990;
  t12997 = 3.2*t12996*t7249;
  t12998 = t12951 + t12952 + t12953 + t12958 + t12965 + t12967 + t12969 + t12973 + t12975 + t12977 + t12978 + t12982 + t12986 + t12989 + t12994 + t12997;
  t7395 = -2.88*t709;
  t18412 = 0.748*t12957;
  t18546 = 13.6*t7264*t12957;
  t13057 = t12951 + t12952 + t12953 + t12958 + t13049 + t13050 + t13054 + t13055;
  t18749 = 6.8*t12957*t7694;
  t13063 = t13062*t7042;
  t13066 = t7068*t7771;
  t13067 = t13063 + t13064 + t13065 + t13066;
  t13070 = -1.*t7028*t13062;
  t13073 = -1.*t7042*t7771;
  t13075 = t13070 + t13071 + t13073 + t13074;
  t18778 = 0.768*t12912*t13053;
  t13091 = Power(t7010,2);
  t13092 = -0.24*t13091;
  t13095 = t11981 + t13092;
  t18802 = 3.2*t12820*t7271;
  t13085 = -1.*t7743*t7024;
  t13086 = 0.24*t7010*t7024;
  t13087 = t13085 + t13086;
  t18803 = 3.2*t12150*t13053;
  t18806 = 6.4*t7274*t7271;
  t18809 = 6.4*t7271*t13053;
  t13103 = t13049 + t13050 + t13054 + t13055;
  t18831 = 3.2*t7271*t7777;
  t13108 = t13106*t7042;
  t13115 = t7068*t13113;
  t13117 = t13108 + t13064 + t13065 + t13115;
  t18835 = 3.2*t7784*t13053;
  t13139 = -1.*t7028*t13106;
  t13141 = -1.*t7042*t13113;
  t13142 = t13139 + t13071 + t13141 + t13074;
  t18507 = 0.748*t12981;
  t18654 = 13.6*t7305*t12981;
  t13190 = t12975 + t12977 + t12978 + t12982 + t13178 + t13179 + t13186 + t13188;
  t18763 = 6.8*t12981*t8994;
  t13579 = t13572*t7191;
  t13859 = t7209*t10925;
  t13896 = t13579 + t13796 + t13844 + t13859;
  t14378 = -1.*t7171*t13572;
  t14437 = -1.*t7191*t10925;
  t14463 = t14378 + t14433 + t14437 + t14441;
  t18933 = 0.768*t12926*t13182;
  t16053 = Power(t7135,2);
  t16079 = -0.24*t16053;
  t16096 = t12883 + t16079;
  t18934 = 3.2*t12902*t7338;
  t14653 = -1.*t9240*t7139;
  t15746 = 0.24*t7135*t7139;
  t15760 = t14653 + t15746;
  t18935 = 3.2*t12891*t13182;
  t18952 = 6.4*t7360*t7338;
  t18954 = 6.4*t7338*t13182;
  t16320 = t13178 + t13179 + t13186 + t13188;
  t19006 = 3.2*t7338*t10999;
  t16440 = t16416*t7191;
  t16588 = t7209*t16498;
  t16669 = t16440 + t13796 + t13844 + t16588;
  t19016 = 3.2*t11105*t13182;
  t16693 = -1.*t7171*t16416;
  t16695 = -1.*t7191*t16498;
  t16704 = t16693 + t14433 + t16695 + t14441;
  t16733 = 6.8*t7264*t7006;
  t16743 = 6.8*t6984*t7006;
  t16752 = 3.2*t7050*t7271;
  t16753 = 3.2*t7274*t7088;
  t16757 = 6.8*t7305*t7132;
  t16763 = 6.8*t7123*t7132;
  t16764 = 3.2*t7198*t7338;
  t16772 = 3.2*t7360*t7249;
  t17772 = t16733 + t16743 + t16752 + t16753 + t16757 + t16763 + t16764 + t16772;
  t16723 = 12.*t2704;
  t16724 = 12.*t5967;
  t13002 = -2.88*t3310;
  t13014 = 3.2*t7274*t7777;
  t13015 = 3.2*t7271*t7784;
  t13017 = 3.2*t7360*t10999;
  t13018 = 3.2*t7338*t11105;
  t13019 = t13002 + t13003 + t13014 + t13015 + t13016 + t13017 + t13018;
  t12918 = 3.2*t12820*t7274;
  t12922 = 3.2*t12150*t7271;
  t12923 = t12917 + t12918 + t12922;
  t12931 = 3.2*t12902*t7360;
  t12932 = 3.2*t12891*t7338;
  t12933 = t12930 + t12931 + t12932;
  t7723 = -6.8*t7006*t7694;
  t7779 = -3.2*t7088*t7777;
  t7786 = -3.2*t7050*t7784;
  t8995 = -6.8*t7132*t8994;
  t11007 = -3.2*t7249*t10999;
  t11286 = -3.2*t7198*t11105;
  t11318 = t7395 + t7723 + t7779 + t7786 + t8995 + t11007 + t11286;
  t17985 = 2.88*t3310;
  t18000 = -6.8*t7264*t7694;
  t18001 = -3.2*t7274*t7777;
  t18038 = -3.2*t7271*t7784;
  t18040 = -6.8*t7305*t8994;
  t18059 = -3.2*t7360*t10999;
  t18076 = -3.2*t7338*t11105;
  t18090 = t17985 + t18000 + t18001 + t18038 + t18040 + t18059 + t18076;
  t18759 = 3.2*t12971*t7777;
  t18760 = 3.2*t12964*t7784;
  t18764 = 3.2*t12996*t10999;
  t18767 = 3.2*t12985*t11105;
  t18771 = t7395 + t18749 + t18759 + t18760 + t18763 + t18764 + t18767;
  t19126 = 0.4*t7730*t12957;
  t19127 = -0.4*t6984*t7024;
  t19147 = t7010*t12957;
  t19148 = t6984*t7024;
  t19149 = t19147 + t19148;
  t19150 = 0.8*t19149;
  t19151 = t19126 + t19127 + t19150;
  t19154 = -1.*var4[2]*t19151;
  t19155 = 0.4*t7730*t7264;
  t19156 = -0.4*t12957*t7024;
  t19157 = t7010*t7264;
  t19160 = t12957*t7024;
  t19161 = t19157 + t19160;
  t19176 = 0.8*t19161;
  t19183 = t19155 + t19156 + t19176;
  t19185 = -1.*var4[0]*t19183;
  t18834 = 3.2*t7271*t13067;
  t18836 = 3.2*t7274*t13075;
  t18838 = t18749 + t18831 + t18834 + t18835 + t18836;
  t13068 = 3.2*t7050*t13067;
  t13081 = 3.2*t7088*t13075;
  t13082 = t13003 + t13059 + t13068 + t13069 + t13081;
  t18927 = 3.2*t7271*t13117;
  t18929 = 3.2*t7274*t13142;
  t18930 = t18831 + t18927 + t18835 + t18929;
  t13138 = 3.2*t7050*t13117;
  t13154 = 3.2*t7088*t13142;
  t13155 = t13059 + t13138 + t13069 + t13154;
  t19187 = 0.4*t9164*t12981;
  t19188 = -0.4*t7123*t7139;
  t19191 = t7135*t12981;
  t19192 = t7123*t7139;
  t19193 = t19191 + t19192;
  t19194 = 0.8*t19193;
  t19195 = t19187 + t19188 + t19194;
  t19196 = -1.*var5[2]*t19195;
  t19197 = 0.4*t9164*t7305;
  t19198 = -0.4*t12981*t7139;
  t19199 = t7135*t7305;
  t19200 = t12981*t7139;
  t19201 = t19199 + t19200;
  t19202 = 0.8*t19201;
  t19203 = t19197 + t19198 + t19202;
  t19204 = -1.*var5[0]*t19203;
  t19011 = 3.2*t7338*t13896;
  t19017 = 3.2*t7360*t14463;
  t19022 = t18763 + t19006 + t19011 + t19016 + t19017;
  t13947 = 3.2*t7198*t13896;
  t14477 = 3.2*t7249*t14463;
  t14492 = t13016 + t13212 + t13947 + t13955 + t14477;
  t19046 = 3.2*t7338*t16669;
  t19048 = 3.2*t7360*t16704;
  t19050 = t19006 + t19046 + t19016 + t19048;
  t16689 = 3.2*t7198*t16669;
  t16708 = 3.2*t7249*t16704;
  t16716 = t13212 + t16689 + t13955 + t16708;
  t17797 = 2.88*t709;
  t17804 = 6.8*t7006*t7694;
  t17808 = 3.2*t7088*t7777;
  t17812 = 3.2*t7050*t7784;
  t17813 = 6.8*t7132*t8994;
  t17816 = 3.2*t7249*t10999;
  t17818 = 3.2*t7198*t11105;
  t17819 = t17797 + t17804 + t17808 + t17812 + t17813 + t17816 + t17818;
  t19073 = Power(t7694,2);
  t19086 = Power(t7777,2);
  t19088 = Power(t7784,2);
  t19095 = Power(t8994,2);
  t19097 = Power(t10999,2);
  t19100 = Power(t11105,2);
  t19230 = 0.4*t7264*t7024;
  t19275 = 0.4*t7305*t7139;
  t11724 = -0.748*t7006;
  t12169 = -3.2*t12150*t7050;
  t12825 = -3.2*t12820*t7088;
  t12826 = t11724 + t12169 + t12825;
  t18095 = -0.748*t7264;
  t18097 = -3.2*t12820*t7274;
  t18098 = -3.2*t12150*t7271;
  t18103 = t18095 + t18097 + t18098;
  t19111 = -0.748*t7694;
  t19112 = -3.2*t12820*t7777;
  t19113 = -3.2*t12150*t7784;
  t19114 = -0.67 + t19111 + t19112 + t19113;
  t18440 = 3.2*t12150*t12964;
  t18441 = 3.2*t12820*t12971;
  t18463 = t18412 + t18440 + t18441;
  t18804 = t18412 + t18802 + t18803;
  t13043 = t12917 + t13041 + t13042;
  t19209 = 3.2*t12150*t13067;
  t19212 = 3.2*t12820*t13075;
  t19213 = t19209 + t19212;
  t19229 = -0.4*t7010*t12957;
  t19231 = -1.*t7264*t7024;
  t19232 = t19147 + t19231;
  t19233 = 0.8*t19232;
  t19234 = t19229 + t19230 + t19233;
  t19235 = -1.*var4[2]*t19234;
  t19236 = -0.4*t7010*t7264;
  t19237 = 0.4*t7006*t7024;
  t19238 = -1.*t7006*t7024;
  t19239 = t19157 + t19238;
  t19240 = 0.8*t19239;
  t19241 = t19236 + t19237 + t19240;
  t19242 = -1.*var4[0]*t19241;
  t18848 = 3.2*t13095*t7274;
  t18849 = 3.2*t13087*t7271;
  t18850 = t18848 + t18802 + t18849 + t18803;
  t13088 = 3.2*t13087*t7050;
  t13096 = 3.2*t13095*t7088;
  t13097 = t13041 + t13088 + t13096 + t13042;
  t19243 = 3.2*t13095*t7777;
  t19244 = 3.2*t13087*t7784;
  t19245 = 3.2*t12150*t13117;
  t19246 = 3.2*t12820*t13142;
  t19247 = t19243 + t19244 + t19245 + t19246;
  t17820 = 0.748*t7006;
  t17821 = 3.2*t12150*t7050;
  t17832 = 3.2*t12820*t7088;
  t17847 = t17820 + t17821 + t17832;
  t19308 = 0.748*t7694;
  t19309 = 3.2*t12820*t7777;
  t19310 = 3.2*t12150*t7784;
  t19311 = 0.67 + t19308 + t19309 + t19310;
  t19340 = Power(t12820,2);
  t19342 = Power(t12150,2);
  t19320 = -0.4*t7730*t7006;
  t19321 = t7010*t7006;
  t19322 = t7264*t7024;
  t19323 = t19321 + t19322;
  t19324 = -0.8*t19323;
  t19325 = t19320 + t19230 + t19324;
  t19326 = -0.4*t7730*t7264;
  t19327 = 0.4*t12957*t7024;
  t19328 = -0.8*t19161;
  t19329 = t19326 + t19327 + t19328;
  t12881 = -0.768*t7050;
  t18104 = -0.768*t7271;
  t19115 = -0.768*t7784;
  t19119 = -0.2 + t19115;
  t19345 = -0.768*t12150;
  t19346 = -0.2 + t19345;
  t19372 = 0.768*t12949*t13053;
  t19373 = 0.768*t12937*t13039;
  t17848 = 0.768*t7050;
  t19057 = 0.768*t7271;
  t19312 = 0.768*t7784;
  t19313 = 0.2 + t19312;
  t19366 = 0.768*t12150;
  t19367 = 0.2 + t19366;
  t19377 = 0.4*t7010*t7006;
  t12882 = -0.748*t7132;
  t12892 = -3.2*t12891*t7198;
  t12903 = -3.2*t12902*t7249;
  t12904 = t12882 + t12892 + t12903;
  t18107 = -0.748*t7305;
  t18108 = -3.2*t12902*t7360;
  t18133 = -3.2*t12891*t7338;
  t18288 = t18107 + t18108 + t18133;
  t19120 = -0.748*t8994;
  t19121 = -3.2*t12902*t10999;
  t19122 = -3.2*t12891*t11105;
  t19123 = -0.67 + t19120 + t19121 + t19122;
  t18514 = 3.2*t12891*t12985;
  t18519 = 3.2*t12902*t12996;
  t18521 = t18507 + t18514 + t18519;
  t18943 = t18507 + t18934 + t18935;
  t13170 = t12930 + t13168 + t13169;
  t19262 = 3.2*t12891*t13896;
  t19263 = 3.2*t12902*t14463;
  t19264 = t19262 + t19263;
  t19274 = -0.4*t7135*t12981;
  t19276 = -1.*t7305*t7139;
  t19277 = t19191 + t19276;
  t19278 = 0.8*t19277;
  t19279 = t19274 + t19275 + t19278;
  t19280 = -1.*var5[2]*t19279;
  t19281 = -0.4*t7135*t7305;
  t19282 = 0.4*t7132*t7139;
  t19283 = -1.*t7132*t7139;
  t19284 = t19199 + t19283;
  t19285 = 0.8*t19284;
  t19286 = t19281 + t19282 + t19285;
  t19287 = -1.*var5[0]*t19286;
  t19033 = 3.2*t16096*t7360;
  t19034 = 3.2*t15760*t7338;
  t19035 = t19033 + t18934 + t19034 + t18935;
  t15761 = 3.2*t15760*t7198;
  t16190 = 3.2*t16096*t7249;
  t16193 = t13168 + t15761 + t16190 + t13169;
  t19288 = 3.2*t16096*t10999;
  t19289 = 3.2*t15760*t11105;
  t19290 = 3.2*t12891*t16669;
  t19291 = 3.2*t12902*t16704;
  t19292 = t19288 + t19289 + t19290 + t19291;
  t17849 = 0.748*t7132;
  t17852 = 3.2*t12891*t7198;
  t17854 = 3.2*t12902*t7249;
  t17861 = t17849 + t17852 + t17854;
  t19314 = 0.748*t8994;
  t19315 = 3.2*t12902*t10999;
  t19316 = 3.2*t12891*t11105;
  t19317 = 0.67 + t19314 + t19315 + t19316;
  t19398 = Power(t12902,2);
  t19400 = Power(t12891,2);
  t19330 = -0.4*t9164*t7132;
  t19331 = t7135*t7132;
  t19332 = t7305*t7139;
  t19333 = t19331 + t19332;
  t19334 = -0.8*t19333;
  t19335 = t19330 + t19275 + t19334;
  t19336 = -0.4*t9164*t7305;
  t19337 = 0.4*t12981*t7139;
  t19338 = -0.8*t19201;
  t19339 = t19336 + t19337 + t19338;
  t12910 = -0.768*t7198;
  t18344 = -0.768*t7338;
  t19124 = -0.768*t11105;
  t19125 = -0.2 + t19124;
  t19403 = -0.768*t12891;
  t19404 = -0.2 + t19403;
  t19430 = 0.768*t12949*t13182;
  t19431 = 0.768*t12937*t13164;
  t17862 = 0.768*t7198;
  t19072 = 0.768*t7338;
  t19318 = 0.768*t11105;
  t19319 = 0.2 + t19318;
  t19424 = 0.768*t12891;
  t19425 = 0.2 + t19424;
  t19435 = 0.4*t7135*t7132;
  p_output1[0]=t2738 + t5971 - 6.8*t6987 + t7009 - 3.2*t7051 - 3.2*t7089 - 6.8*t7124 + t7134 - 3.2*t7203 - 3.2*t7253;
  p_output1[1]=t7394;
  p_output1[2]=t11318;
  p_output1[3]=t12826;
  p_output1[4]=t12881;
  p_output1[5]=t12904;
  p_output1[6]=t12910;
  p_output1[7]=t12916*t12923 + t12929*t12933 + t12949*t12998 + t13001*t13019 + 0.768*t12912*t7271 + 0.768*t12926*t7338 + t12937*(t12938 + t12939 + t12942 + t12943 + 6.4*t7050*t7271 + 6.4*t7088*t7274 + 6.4*t7198*t7338 + 6.4*t7249*t7360);
  p_output1[8]=t13040 + t12916*t13043 + t12937*(t12938 + t12939 + t13045 + t13046) + t12949*t13057 + t13001*t13082;
  p_output1[9]=t13040 + t12937*(t13045 + t13046) + t12916*t13097 + t12949*t13103 + t13001*t13155;
  p_output1[10]=t13165 + t12929*t13170 + t12937*(t12942 + t12943 + t13172 + t13173) + t12949*t13190 + t13001*t14492;
  p_output1[11]=t13165 + t12937*(t13172 + t13173) + t12929*t16193 + t12949*t16320 + t13001*t16716;
  p_output1[12]=t12953 + t12978 + t16723 + t16724 + 6.8*t6987 + 3.2*t7051 + 3.2*t7089 + 6.8*t7124 + 3.2*t7203 + 3.2*t7253;
  p_output1[13]=t17772;
  p_output1[14]=t17819;
  p_output1[15]=t17847;
  p_output1[16]=t17848;
  p_output1[17]=t17861;
  p_output1[18]=t17862;
  p_output1[19]=-1.;
  p_output1[20]=-1.;
  p_output1[21]=t7394;
  p_output1[22]=-6.8*t12950 - 3.2*t12966 - 3.2*t12968 - 6.8*t12974 - 3.2*t12988 - 3.2*t12990 + t2738 + t5971 + t7009 + t7134;
  p_output1[23]=t18090;
  p_output1[24]=t18103;
  p_output1[25]=t18104;
  p_output1[26]=t18288;
  p_output1[27]=t18344;
  p_output1[28]=0.768*t12912*t12964 + 0.768*t12926*t12985 + t12937*t12998 + t12916*t18463 + t12929*t18521 + t13001*t18771 + t12949*(t12938 + t12942 + t18546 + t18654 + 6.4*t12964*t7271 + 6.4*t12971*t7274 + 6.4*t12985*t7338 + 6.4*t12996*t7360);
  p_output1[29]=t12937*t13057 + t18778 + t12916*t18804 + t12949*(t12938 + t18546 + t18806 + t18809) + t13001*t18838;
  p_output1[30]=t12937*t13103 + t18778 + t12949*(t18806 + t18809) + t12916*t18850 + t13001*t18930;
  p_output1[31]=t12937*t13190 + t18933 + t12929*t18943 + t12949*(t12942 + t18654 + t18952 + t18954) + t13001*t19022;
  p_output1[32]=t12937*t16320 + t18933 + t12949*(t18952 + t18954) + t12929*t19035 + t13001*t19050;
  p_output1[33]=t17772;
  p_output1[34]=t12951 + t12953 + t12967 + t12969 + t12975 + t12978 + t12989 + t12994 + t16723 + t16724;
  p_output1[35]=t13019;
  p_output1[36]=t12923;
  p_output1[37]=t19057;
  p_output1[38]=t12933;
  p_output1[39]=t19072;
  p_output1[40]=-1.;
  p_output1[41]=-1.;
  p_output1[42]=t11318;
  p_output1[43]=t18090;
  p_output1[44]=-3.3612 - 6.8*t19073 - 3.2*t19086 - 3.2*t19088 - 6.8*t19095 - 3.2*t19097 - 3.2*t19100;
  p_output1[45]=t19114;
  p_output1[46]=t19119;
  p_output1[47]=t19123;
  p_output1[48]=t19125;
  p_output1[49]=t12937*t13019 + t12949*t18771 + t19154 + t19185 + t19196 + t19204;
  p_output1[50]=0.768*t12912*t13067 + t12937*t13082 + t12949*t18838 + t19154 + t19185 + t12916*t19213 + t13001*(6.4*t13075*t7777 + 6.4*t13067*t7784);
  p_output1[51]=0.768*t12912*t13117 + t12937*t13155 + t12949*t18930 + t19235 + t19242 + t12916*t19247 + t13001*(6.4*t13142*t7777 + 6.4*t13117*t7784);
  p_output1[52]=0.768*t12926*t13896 + t13001*(6.4*t11105*t13896 + 6.4*t10999*t14463) + t12937*t14492 + t12949*t19022 + t19196 + t19204 + t12929*t19264;
  p_output1[53]=0.768*t12926*t16669 + t13001*(6.4*t11105*t16669 + 6.4*t10999*t16704) + t12937*t16716 + t12949*t19050 + t19280 + t19287 + t12929*t19292;
  p_output1[54]=t17819;
  p_output1[55]=t13019;
  p_output1[56]=3.3612 + 6.8*t19073 + 3.2*t19086 + 3.2*t19088 + 6.8*t19095 + 3.2*t19097 + 3.2*t19100;
  p_output1[57]=t19311;
  p_output1[58]=t19313;
  p_output1[59]=t19317;
  p_output1[60]=t19319;
  p_output1[61]=t19325;
  p_output1[62]=t19329;
  p_output1[63]=t19335;
  p_output1[64]=t19339;
  p_output1[65]=t12826;
  p_output1[66]=t18103;
  p_output1[67]=t19114;
  p_output1[68]=-1.58228 - 3.2*t19340 - 3.2*t19342;
  p_output1[69]=t19346;
  p_output1[70]=t12923*t12937 + t12949*t18463 + t19154 + t19185;
  p_output1[71]=t12937*t13043 + t12949*t18804 + t19154 + t19185 + t13001*t19213;
  p_output1[72]=0.768*t12912*t13087 + t12916*(6.4*t12150*t13087 + 6.4*t12820*t13095) + t12937*t13097 + t12949*t18850 + t19235 + t19242 + t13001*t19247;
  p_output1[73]=t17847;
  p_output1[74]=t12923;
  p_output1[75]=t19311;
  p_output1[76]=1.58228 + 3.2*t19340 + 3.2*t19342;
  p_output1[77]=t19367;
  p_output1[78]=t19325;
  p_output1[79]=t19329;
  p_output1[80]=t12881;
  p_output1[81]=t18104;
  p_output1[82]=t19119;
  p_output1[83]=t19346;
  p_output1[84]=-1.2143199999999998;
  p_output1[85]=0.768*t12949*t12964 + t19235 + t19242 + 0.768*t12937*t7271;
  p_output1[86]=0.768*t13001*t13067 + t19235 + t19242 + t19372 + t19373;
  p_output1[87]=0.768*t12916*t13087 + 0.768*t13001*t13117 + t19372 + t19373 - 1.*(t19237 + 0.4*t6984*t7010 + 0.8*(t19238 - 1.*t6984*t7010))*var4[0] - 1.*(t19230 + t19377 + 0.8*(t19231 - 1.*t7006*t7010))*var4[2];
  p_output1[88]=t17848;
  p_output1[89]=t19057;
  p_output1[90]=t19313;
  p_output1[91]=t19367;
  p_output1[92]=1.2143199999999998;
  p_output1[93]=t19127 + t19377 - 0.8*(t19321 - 1.*t6984*t7024);
  p_output1[94]=-0.8*t19239 - 0.4*t7006*t7024 + 0.4*t7010*t7264;
  p_output1[95]=t12904;
  p_output1[96]=t18288;
  p_output1[97]=t19123;
  p_output1[98]=-1.58228 - 3.2*t19398 - 3.2*t19400;
  p_output1[99]=t19404;
  p_output1[100]=t12933*t12937 + t12949*t18521 + t19196 + t19204;
  p_output1[101]=t12937*t13170 + t12949*t18943 + t19196 + t19204 + t13001*t19264;
  p_output1[102]=0.768*t12926*t15760 + t12929*(6.4*t12891*t15760 + 6.4*t12902*t16096) + t12937*t16193 + t12949*t19035 + t19280 + t19287 + t13001*t19292;
  p_output1[103]=t17861;
  p_output1[104]=t12933;
  p_output1[105]=t19317;
  p_output1[106]=1.58228 + 3.2*t19398 + 3.2*t19400;
  p_output1[107]=t19425;
  p_output1[108]=t19335;
  p_output1[109]=t19339;
  p_output1[110]=t12910;
  p_output1[111]=t18344;
  p_output1[112]=t19125;
  p_output1[113]=t19404;
  p_output1[114]=-1.2143199999999998;
  p_output1[115]=0.768*t12949*t12985 + t19280 + t19287 + 0.768*t12937*t7338;
  p_output1[116]=0.768*t13001*t13896 + t19280 + t19287 + t19430 + t19431;
  p_output1[117]=0.768*t12929*t15760 + 0.768*t13001*t16669 + t19430 + t19431 - 1.*(t19282 + 0.4*t7123*t7135 + 0.8*(t19283 - 1.*t7123*t7135))*var5[0] - 1.*(t19275 + t19435 + 0.8*(t19276 - 1.*t7132*t7135))*var5[2];
  p_output1[118]=t17862;
  p_output1[119]=t19072;
  p_output1[120]=t19319;
  p_output1[121]=t19425;
  p_output1[122]=1.2143199999999998;
  p_output1[123]=t19188 + t19435 - 0.8*(t19331 - 1.*t7123*t7139);
  p_output1[124]=-0.8*t19284 - 0.4*t7132*t7139 + 0.4*t7135*t7305;
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

  double *var1,*var2,*var3,*var4,*var5;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 5)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Five input(s) required (var1,var2,var3,var4,var5).");
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
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 3 && ncols == 1) && 
      !(mrows == 1 && ncols == 3))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 125, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5);


}

#else // MATLAB_MEX_FILE

#include "J_dxDiscreteMapLSland_DS2.hh"

namespace Pattern[LSland, Blank[DS2]]
{

void J_dxDiscreteMapLSland_DS2_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5);

}

}

#endif // MATLAB_MEX_FILE