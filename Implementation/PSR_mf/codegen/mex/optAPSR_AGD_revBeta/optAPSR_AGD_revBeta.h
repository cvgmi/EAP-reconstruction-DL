/*
 * optAPSR_AGD_revBeta.h
 *
 * Code generation for function 'optAPSR_AGD_revBeta'
 *
 */

#ifndef __OPTAPSR_AGD_REVBETA_H__
#define __OPTAPSR_AGD_REVBETA_H__

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
extern void optAPSR_AGD_revBeta(const emlrtStack *sp, const emxArray_real_T *X,
  const emxArray_real_T *W, emxArray_real_T *A0, struct0_T *param, real_T
  obj_old, emxArray_real_T *A, real_T *obj_new);

#endif

/* End of code generation (optAPSR_AGD_revBeta.h) */
