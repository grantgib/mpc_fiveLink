/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:23:51 GMT-05:00
 */

#ifndef JS_DXDISCRETEMAPDS1_LSLIFT_HH
#define JS_DXDISCRETEMAPDS1_LSLIFT_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[ds1, Blank[LSlift]]
{

  void Js_dxDiscreteMapds1_LSlift_raw(double *p_output1, const double *var1);

  inline void Js_dxDiscreteMapds1_LSlift(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 117, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_dxDiscreteMapds1_LSlift_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_DXDISCRETEMAPDS1_LSLIFT_HH
