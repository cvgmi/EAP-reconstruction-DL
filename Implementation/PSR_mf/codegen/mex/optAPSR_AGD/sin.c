/*
 * sin.c
 *
 * Code generation for function 'sin'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD.h"
#include "sin.h"

/* Function Definitions */
void b_sin(emxArray_real_T *x)
{
  int32_T i28;
  int32_T k;
  i28 = x->size[1];
  for (k = 0; k < i28; k++) {
    x->data[k] = muDoubleScalarSin(x->data[k]);
  }
}

/* End of code generation (sin.c) */
