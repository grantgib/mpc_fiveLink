/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:28:05 GMT-05:00
 */

#ifndef FLEFTTOE_VEC_DOUBLESUPPORTDIFFHEIGHT_HH
#define FLEFTTOE_VEC_DOUBLESUPPORTDIFFHEIGHT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace DoubleSupportDiffHeight
{

  void fLeftToe_vec_DoubleSupportDiffHeight_raw(double *p_output1, const double *var1,const double *var2);

  inline void fLeftToe_vec_DoubleSupportDiffHeight(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 3, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 7, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    fLeftToe_vec_DoubleSupportDiffHeight_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FLEFTTOE_VEC_DOUBLESUPPORTDIFFHEIGHT_HH