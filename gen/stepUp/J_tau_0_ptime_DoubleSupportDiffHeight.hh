/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:29:17 GMT-05:00
 */

#ifndef J_TAU_0_PTIME_DOUBLESUPPORTDIFFHEIGHT_HH
#define J_TAU_0_PTIME_DOUBLESUPPORTDIFFHEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DoubleSupportDiffHeight
{

  void J_tau_0_ptime_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_tau_0_ptime_DoubleSupportDiffHeight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_tau_0_ptime_DoubleSupportDiffHeight_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_TAU_0_PTIME_DOUBLESUPPORTDIFFHEIGHT_HH