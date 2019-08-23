/*
 * gradientAPSR.h
 *
 * Code generation for function 'gradientAPSR'
 *
 */

#ifndef __GRADIENTAPSR_H__
#define __GRADIENTAPSR_H__

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
#include "optAPSR_sigma_types.h"

/* Function Declarations */
extern void gradientAPSR(const emlrtStack *sp, const emxArray_real_T *XX, const
  emxArray_real_T *W, const emxArray_real_T *AA, emxArray_real_T *gradA);

#endif

/* End of code generation (gradientAPSR.h) */
