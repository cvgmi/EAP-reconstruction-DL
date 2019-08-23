/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "power.h"
#include "optASR_sigma_disp_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo w_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p" };

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv0[2];
  int32_T i11;
  int32_T k;
  for (i11 = 0; i11 < 2; i11++) {
    uv0[i11] = (uint32_T)a->size[i11];
  }

  i11 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i11, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  i11 = (int32_T)uv0[0] * (int32_T)uv0[1];
  for (k = 0; k < i11; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
