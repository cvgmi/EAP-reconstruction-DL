/*
 * norm.c
 *
 * Code generation for function 'norm'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "norm.h"

/* Function Definitions */
real_T norm(const emxArray_real_T *x)
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  if (1 > x->size[0]) {
    y = 0.0;
  } else {
    n_t = (ptrdiff_t)(x->size[0]);
    incx_t = (ptrdiff_t)(1);
    xix0_t = (double *)(&x->data[0]);
    y = dnrm2(&n_t, xix0_t, &incx_t);
  }

  return y;
}

/* End of code generation (norm.c) */
