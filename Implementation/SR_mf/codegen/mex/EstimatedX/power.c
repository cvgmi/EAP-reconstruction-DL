/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedX.h"
#include "power.h"
#include "EstimatedX_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo r_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p" };

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv1[2];
  int32_T i6;
  int32_T k;
  for (i6 = 0; i6 < 2; i6++) {
    uv1[i6] = (uint32_T)a->size[i6];
  }

  i6 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv1[0];
  y->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i6, (int32_T)sizeof(real_T),
                    &r_emlrtRTEI);
  i6 = (int32_T)uv1[0] * (int32_T)uv1[1];
  for (k = 0; k < i6; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
