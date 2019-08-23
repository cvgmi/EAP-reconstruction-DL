/*
 * optASR_sigma_disp.h
 *
 * Code generation for function 'optASR_sigma_disp'
 *
 */

#ifndef __OPTASR_SIGMA_DISP_H__
#define __OPTASR_SIGMA_DISP_H__

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
extern void optASR_sigma_disp(const emlrtStack *sp, const emxArray_real_T *X,
  const emxArray_real_T *W, emxArray_real_T *A0, const struct0_T *param,
  emxArray_real_T *A);

#endif

/* End of code generation (optASR_sigma_disp.h) */
