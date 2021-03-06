/*
 * Automatically Generated from Mathematica.
 * Tue 3 Dec 2019 15:23:24 GMT-05:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t8866;
  double t8867;
  double t8869;
  double t8875;
  double t8876;
  double t8877;
  double t8878;
  double t8879;
  double t8880;
  double t8885;
  double t8886;
  double t8887;
  double t8868;
  double t8881;
  double t8883;
  double t8884;
  double t8893;
  double t8894;
  double t8895;
  double t8931;
  double t8932;
  double t8933;
  double t8935;
  double t8937;
  t8866 = -1.*var4[1];
  t8867 = var4[0] + t8866;
  t8869 = -1. + var5[0];
  t8875 = -1. + var6[0];
  t8876 = 1/t8875;
  t8877 = -1.*var1[0];
  t8878 = t8877 + var1[1];
  t8879 = t8869*t8876*t8878;
  t8880 = t8866 + var1[0] + t8879;
  t8885 = 1/t8867;
  t8886 = -1.*t8885*t8880;
  t8887 = 1. + t8886;
  t8868 = Power(t8867,-5);
  t8881 = Power(t8880,5);
  t8883 = Power(t8867,-4);
  t8884 = Power(t8880,4);
  t8893 = Power(t8867,-3);
  t8894 = Power(t8880,3);
  t8895 = Power(t8887,2);
  t8931 = Power(t8867,-2);
  t8932 = Power(t8880,2);
  t8933 = Power(t8887,3);
  t8935 = Power(t8887,4);
  t8937 = Power(t8887,5);
  p_output1[0]=var2[3] - 1.*t8937*var3[0] - 5.*t8880*t8885*t8935*var3[4] - 10.*t8931*t8932*t8933*var3[8] - 10.*t8893*t8894*t8895*var3[12] - 5.*t8883*t8884*t8887*var3[16] - 1.*t8868*t8881*var3[20];
  p_output1[1]=var2[4] - 1.*t8937*var3[1] - 5.*t8880*t8885*t8935*var3[5] - 10.*t8931*t8932*t8933*var3[9] - 10.*t8893*t8894*t8895*var3[13] - 5.*t8883*t8884*t8887*var3[17] - 1.*t8868*t8881*var3[21];
  p_output1[2]=var2[5] - 1.*t8937*var3[2] - 5.*t8880*t8885*t8935*var3[6] - 10.*t8931*t8932*t8933*var3[10] - 10.*t8893*t8894*t8895*var3[14] - 5.*t8883*t8884*t8887*var3[18] - 1.*t8868*t8881*var3[22];
  p_output1[3]=var2[6] - 1.*t8937*var3[3] - 5.*t8880*t8885*t8935*var3[7] - 10.*t8931*t8932*t8933*var3[11] - 10.*t8893*t8894*t8895*var3[15] - 5.*t8883*t8884*t8887*var3[19] - 1.*t8868*t8881*var3[23];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
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
    ( !(mrows == 24 && ncols == 1) && 
      !(mrows == 1 && ncols == 24))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "y_time_RightStance.hh"

namespace RightStance
{

void y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
