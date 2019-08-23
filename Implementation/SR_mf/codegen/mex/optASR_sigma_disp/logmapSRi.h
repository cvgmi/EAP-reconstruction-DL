/*
 * logmapSRi.h
 *
 * Code generation for function 'logmapSRi'
 *
 */

#ifndef __LOGMAPSRI_H__
#define __LOGMAPSRI_H__

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
extern void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);
extern void logmapSRi(const emlrtStack *sp, const emxArray_real_T *x, const
                      emxArray_real_T *Y, emxArray_real_T *V);

#endif

/* End of code generation (logmapSRi.h) */
