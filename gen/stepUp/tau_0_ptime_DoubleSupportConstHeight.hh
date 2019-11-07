/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:22:37 GMT-05:00
 */

#ifndef TAU_0_PTIME_DOUBLESUPPORTCONSTHEIGHT_HH
#define TAU_0_PTIME_DOUBLESUPPORTCONSTHEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DoubleSupportConstHeight
{

  void tau_0_ptime_DoubleSupportConstHeight_raw(double *p_output1, const double *var1,const double *var2);

  inline void tau_0_ptime_DoubleSupportConstHeight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 2, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    tau_0_ptime_DoubleSupportConstHeight_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // TAU_0_PTIME_DOUBLESUPPORTCONSTHEIGHT_HH
