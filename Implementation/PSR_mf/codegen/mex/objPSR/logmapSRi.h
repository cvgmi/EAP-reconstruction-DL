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
#include "objPSR_types.h"

/* Function Declarations */
extern void logmapSRi(const emlrtStack *sp, const emxArray_real_T *x, const
                      emxArray_real_T *Y, emxArray_real_T *V);

#endif

/* End of code generation (logmapSRi.h) */
