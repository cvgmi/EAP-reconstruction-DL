/*
 * objSR_mexutil.h
 *
 * Code generation for function 'objSR_mexutil'
 *
 */

#ifndef __OBJSR_MEXUTIL_H__
#define __OBJSR_MEXUTIL_H__

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
#include "objSR_types.h"

/* Function Declarations */
extern void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

#endif

/* End of code generation (objSR_mexutil.h) */
