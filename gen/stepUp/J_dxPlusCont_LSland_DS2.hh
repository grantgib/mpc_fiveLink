/*
 * Automatically Generated from Mathematica.
 * Wed 6 Nov 2019 23:27:38 GMT-05:00
 */

#ifndef J_DXPLUSCONT_LSLAND_DS2_HH
#define J_DXPLUSCONT_LSLAND_DS2_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[LSland, Blank[DS2]]
{

  void J_dxPlusCont_LSland_DS2_raw(double *p_output1, const double *var1,const double *var2);

  inline void J_dxPlusCont_LSland_DS2(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 7, 1);
    assert_size_matrix(var2, 7, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 14, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_dxPlusCont_LSland_DS2_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_DXPLUSCONT_LSLAND_DS2_HH
