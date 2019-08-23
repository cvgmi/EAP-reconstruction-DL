/*
 * EstimatedPX.h
 *
 * Code generation for function 'EstimatedPX'
 *
 */

#ifndef __ESTIMATEDPX_H__
#define __ESTIMATEDPX_H__

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
#include "EstimatedPX_types.h"

/* Function Declarations */
extern void EstimatedPX(const emlrtStack *sp, const emxArray_real_T *X, const
  emxArray_real_T *W, const emxArray_real_T *A, emxArray_real_T *Xh);

#endif

/* End of code generation (EstimatedPX.h) */
