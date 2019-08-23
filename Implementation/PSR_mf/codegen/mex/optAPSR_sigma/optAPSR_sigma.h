/*
 * optAPSR_sigma.h
 *
 * Code generation for function 'optAPSR_sigma'
 *
 */

#ifndef __OPTAPSR_SIGMA_H__
#define __OPTAPSR_SIGMA_H__

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
extern void optAPSR_sigma(const emlrtStack *sp, const emxArray_real_T *X, const
  emxArray_real_T *W, emxArray_real_T *A0, const struct0_T *param, real_T
  obj_old, emxArray_real_T *A, real_T *obj_new);

#endif

/* End of code generation (optAPSR_sigma.h) */
