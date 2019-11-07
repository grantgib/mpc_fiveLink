/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:25:11 GMT-05:00
 */

#ifndef U_RIGHTFOOTLENGTH_LEFTSTANCELIFT_HH
#define U_RIGHTFOOTLENGTH_LEFTSTANCELIFT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace LeftStanceLift
{

  void u_rightFootLength_LeftStanceLift_raw(double *p_output1, const double *var1);

  inline void u_rightFootLength_LeftStanceLift(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 1, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    u_rightFootLength_LeftStanceLift_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // U_RIGHTFOOTLENGTH_LEFTSTANCELIFT_HH
