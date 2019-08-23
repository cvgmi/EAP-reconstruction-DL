/*
 * gradientASR.h
 *
 * Code generation for function 'gradientASR'
 *
 */

#ifndef __GRADIENTASR_H__
#define __GRADIENTASR_H__

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
#include "optAPSR_AGD_revBeta_types.h"

/* Function Declarations */
extern void gradientASR(const emlrtStack *sp, const emxArray_real_T *X, const
  emxArray_real_T *W, const emxArray_real_T *A, emxArray_real_T *gradA);

#endif

/* End of code generation (gradientASR.h) */
