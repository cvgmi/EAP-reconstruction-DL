/*
 * logmapSRi_mexutil.h
 *
 * Code generation for function 'logmapSRi_mexutil'
 *
 */

#ifndef __LOGMAPSRI_MEXUTIL_H__
#define __LOGMAPSRI_MEXUTIL_H__

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
#include "logmapSRi_types.h"

/* Function Declarations */
extern void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
extern const mxArray *message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);

#endif

/* End of code generation (logmapSRi_mexutil.h) */
