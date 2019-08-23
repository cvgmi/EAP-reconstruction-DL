/*
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD_revBeta.h"
#include "sqrt.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRSInfo h_emlrtRSI = { 14, "sqrt",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elfun/sqrt.m" };

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, emxArray_real_T *x)
{
  int32_T k;
  int32_T i25;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < x->size[1]; k++) {
    if (x->data[k] < 0.0) {
      st.site = &h_emlrtRSI;
      eml_error(&st);
    }
  }

  i25 = x->size[1];
  for (k = 0; k < i25; k++) {
    x->data[k] = muDoubleScalarSqrt(x->data[k]);
  }
}

/* End of code generation (sqrt.c) */
