/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "logmapSRi.h"
#include "power.h"
#include "logmapSRi_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/scalexpAlloc.p" };

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv0[2];
  int32_T i4;
  int32_T k;
  for (i4 = 0; i4 < 2; i4++) {
    uv0[i4] = (uint32_T)a->size[i4];
  }

  i4 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i4, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  i4 = (int32_T)uv0[0] * (int32_T)uv0[1];
  for (k = 0; k < i4; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
