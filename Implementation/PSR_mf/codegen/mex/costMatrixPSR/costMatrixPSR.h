/*
 * costMatrixPSR.h
 *
 * Code generation for function 'costMatrixPSR'
 *
 */

#ifndef __COSTMATRIXPSR_H__
#define __COSTMATRIXPSR_H__

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
#include "costMatrixPSR_types.h"

/* Function Declarations */
extern void costMatrixPSR(const emlrtStack *sp, const emxArray_real_T *X, const
  emxArray_real_T *AA, emxArray_real_T *T);

#endif

/* End of code generation (costMatrixPSR.h) */
