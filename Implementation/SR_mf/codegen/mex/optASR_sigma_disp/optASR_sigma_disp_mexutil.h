/*
 * optASR_sigma_disp_mexutil.h
 *
 * Code generation for function 'optASR_sigma_disp_mexutil'
 *
 */

#ifndef __OPTASR_SIGMA_DISP_MEXUTIL_H__
#define __OPTASR_SIGMA_DISP_MEXUTIL_H__

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
#include "optASR_sigma_disp_types.h"

/* Function Declarations */
extern const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
extern void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

#endif

/* End of code generation (optASR_sigma_disp_mexutil.h) */
