/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:18:37 GMT-05:00
 */

#ifndef TORQUE_DOUBLESUPPORTCONSTHEIGHT_INTEGRAL_HH
#define TORQUE_DOUBLESUPPORTCONSTHEIGHT_INTEGRAL_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DoubleSupportDiffHeight
{

  void torque_DoubleSupportConstHeight_integral_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4);

  inline void torque_DoubleSupportConstHeight_integral(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2,const Eigen::VectorXd &var3,const Eigen::VectorXd &var4)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 4, 1);
    assert_size_matrix(var3, 2, 1);
    assert_size_matrix(var4, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    torque_DoubleSupportConstHeight_integral_raw(p_output1.data(), var1.data(),var2.data(),var3.data(),var4.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TORQUE_DOUBLESUPPORTCONSTHEIGHT_INTEGRAL_HH