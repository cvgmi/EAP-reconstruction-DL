/*
 * diag.c
 *
 * Code generation for function 'diag'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "diag.h"
#include "optASR_sigma_disp_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "optASR_sigma_disp_data.h"

/* Variable Definitions */
static emlrtRSInfo cb_emlrtRSI = { 74, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtRTEInfo v_emlrtRTEI = { 1, 14, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

/* Function Definitions */
void diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_1;
  int32_T i10;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  unnamed_idx_0 = v->size[1];
  unnamed_idx_1 = v->size[1];
  i10 = d->size[0] * d->size[1];
  d->size[0] = unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)d, i10, (int32_T)sizeof(real_T),
                    &v_emlrtRTEI);
  i10 = d->size[0] * d->size[1];
  d->size[1] = unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)d, i10, (int32_T)sizeof(real_T),
                    &v_emlrtRTEI);
  unnamed_idx_0 *= unnamed_idx_1;
  for (i10 = 0; i10 < unnamed_idx_0; i10++) {
    d->data[i10] = 0.0;
  }

  st.site = &cb_emlrtRSI;
  if (1 > v->size[1]) {
    overflow = false;
  } else {
    overflow = (v->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &x_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (unnamed_idx_0 = 0; unnamed_idx_0 + 1 <= v->size[1]; unnamed_idx_0++) {
    d->data[unnamed_idx_0 + d->size[0] * unnamed_idx_0] = v->data[unnamed_idx_0];
  }
}

/* End of code generation (diag.c) */
