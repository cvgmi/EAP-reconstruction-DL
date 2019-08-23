/*
 * EstimatedX_mexutil.h
 *
 * Code generation for function 'EstimatedX_mexutil'
 *
 */

#ifndef __ESTIMATEDX_MEXUTIL_H__
#define __ESTIMATEDX_MEXUTIL_H__

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
extern void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

#endif

/* End of code generation (EstimatedX_mexutil.h) */
