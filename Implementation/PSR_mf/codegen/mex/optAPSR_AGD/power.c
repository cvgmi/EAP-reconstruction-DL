/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD.h"
#include "power.h"
#include "optAPSR_AGD_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo bb_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p" };

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv0[2];
  int32_T i8;
  int32_T k;
  for (i8 = 0; i8 < 2; i8++) {
    uv0[i8] = (uint32_T)a->size[i8];
  }

  i8 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i8, (int32_T)sizeof(real_T),
                    &bb_emlrtRTEI);
  i8 = (int32_T)uv0[0] * (int32_T)uv0[1];
  for (k = 0; k < i8; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
