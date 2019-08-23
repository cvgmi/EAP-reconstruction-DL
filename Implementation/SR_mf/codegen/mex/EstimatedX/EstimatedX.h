/*
 * EstimatedX.h
 *
 * Code generation for function 'EstimatedX'
 *
 */

#ifndef __ESTIMATEDX_H__
#define __ESTIMATEDX_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "omp.h"
#include "EstimatedX_types.h"

/* Function Declarations */
extern void EstimatedX(const emlrtStack *sp, const emxArray_real_T *X, const
  emxArray_real_T *W, const emxArray_real_T *A, emxArray_real_T *xh);

#endif

/* End of code generation (EstimatedX.h) */
