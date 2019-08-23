/*
 * logmapPSRi.h
 *
 * Code generation for function 'logmapPSRi'
 *
 */

#ifndef __LOGMAPPSRI_H__
#define __LOGMAPPSRI_H__

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
extern void logmapPSRi(const emlrtStack *sp, const emxArray_real_T *X, const
  emxArray_real_T *YY, emxArray_real_T *VV);

#endif

/* End of code generation (logmapPSRi.h) */
