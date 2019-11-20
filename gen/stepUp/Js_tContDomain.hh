/*
 * Automatically Generated from Mathematica.
 * Tue 19 Nov 2019 21:08:35 GMT-05:00
 */

#ifndef JS_TCONTDOMAIN_HH
#define JS_TCONTDOMAIN_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace leftLand
{

  void Js_tContDomain_raw(double *p_output1, const double *var1);

  inline void Js_tContDomain(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_tContDomain_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_TCONTDOMAIN_HH