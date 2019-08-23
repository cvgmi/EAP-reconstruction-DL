/*
 * sin.c
 *
 * Code generation for function 'sin'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR.h"
#include "sin.h"

/* Function Definitions */
void b_sin(emxArray_real_T *x)
{
  int32_T i26;
  int32_T k;
  i26 = x->size[1];
  for (k = 0; k < i26; k++) {
    x->data[k] = muDoubleScalarSin(x->data[k]);
  }
}

/* End of code generation (sin.c) */
