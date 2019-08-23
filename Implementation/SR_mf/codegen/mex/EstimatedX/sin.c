/*
 * sin.c
 *
 * Code generation for function 'sin'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedX.h"
#include "sin.h"

/* Function Definitions */
void b_sin(emxArray_real_T *x)
{
  int32_T i12;
  int32_T k;
  i12 = x->size[1];
  for (k = 0; k < i12; k++) {
    x->data[k] = muDoubleScalarSin(x->data[k]);
  }
}

/* End of code generation (sin.c) */
