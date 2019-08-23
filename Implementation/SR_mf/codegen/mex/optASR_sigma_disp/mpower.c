/*
 * mpower.c
 *
 * Code generation for function 'mpower'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "mpower.h"
#include "eml_error.h"
#include "optASR_sigma_disp_data.h"

/* Function Definitions */
real_T mpower(const emlrtStack *sp, real_T a, real_T b)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ic_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &jc_emlrtRSI;
  if ((a < 0.0) && (b != b)) {
    c_st.site = &kc_emlrtRSI;
    c_eml_error(&c_st);
  }

  return muDoubleScalarPower(a, b);
}

/* End of code generation (mpower.c) */
