/*
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "sqrt.h"
#include "eml_error.h"
#include "optASR_sigma_disp_data.h"

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, emxArray_real_T *x)
{
  int32_T k;
  int32_T i21;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < x->size[1]; k++) {
    if (x->data[k] < 0.0) {
      st.site = &hb_emlrtRSI;
      eml_error(&st);
    }
  }

  i21 = x->size[1];
  for (k = 0; k < i21; k++) {
    x->data[k] = muDoubleScalarSqrt(x->data[k]);
  }
}

/* End of code generation (sqrt.c) */
