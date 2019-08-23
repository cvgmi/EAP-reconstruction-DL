/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR.h"
#include "power.h"
#include "optAPSR_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo kb_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p" };

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv1[2];
  int32_T i14;
  int32_T k;
  for (i14 = 0; i14 < 2; i14++) {
    uv1[i14] = (uint32_T)a->size[i14];
  }

  i14 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv1[0];
  y->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i14, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  i14 = (int32_T)uv1[0] * (int32_T)uv1[1];
  for (k = 0; k < i14; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
