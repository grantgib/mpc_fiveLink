/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:05:54 GMT-05:00
 */

#ifndef TORQUES_DOUBLESUPPORTCONSTHEIGHT_INTEGRAL_HH
#define TORQUES_DOUBLESUPPORTCONSTHEIGHT_INTEGRAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DoubleSupportConstHeight
{

  void torques_DoubleSupportConstHeight_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3);

  inline void torques_DoubleSupportConstHeight_integral(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 4, 1);
    assert_size_matrix(var3, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    torques_DoubleSupportConstHeight_integral_raw(p_output1.data(), var1.data(),var2.data(),var3.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TORQUES_DOUBLESUPPORTCONSTHEIGHT_INTEGRAL_HH