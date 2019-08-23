/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "objPSR.h"
#include "power.h"
#include "objPSR_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo bb_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p" };

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv1[2];
  int32_T i9;
  int32_T k;
  for (i9 = 0; i9 < 2; i9++) {
    uv1[i9] = (uint32_T)a->size[i9];
  }

  i9 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv1[0];
  y->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i9, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  i9 = (int32_T)uv1[0] * (int32_T)uv1[1];
  for (k = 0; k < i9; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
