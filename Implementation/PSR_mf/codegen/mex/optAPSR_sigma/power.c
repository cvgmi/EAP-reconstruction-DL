/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "power.h"
#include "optAPSR_sigma_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo jb_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p" };

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv0[2];
  int32_T i17;
  int32_T k;
  for (i17 = 0; i17 < 2; i17++) {
    uv0[i17] = (uint32_T)a->size[i17];
  }

  i17 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i17, (int32_T)sizeof(real_T),
                    &jb_emlrtRTEI);
  i17 = (int32_T)uv0[0] * (int32_T)uv0[1];
  for (k = 0; k < i17; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
