/*
 * cos.c
 *
 * Code generation for function 'cos'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR.h"
#include "cos.h"

/* Function Definitions */
void b_cos(emxArray_real_T *x)
{
  int32_T i25;
  int32_T k;
  i25 = x->size[1];
  for (k = 0; k < i25; k++) {
    x->data[k] = muDoubleScalarCos(x->data[k]);
  }
}

/* End of code generation (cos.c) */
