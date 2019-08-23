/*
 * expmapPSR.h
 *
 * Code generation for function 'expmapPSR'
 *
 */

#ifndef __EXPMAPPSR_H__
#define __EXPMAPPSR_H__

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
extern void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);
extern void expmapPSR(const emlrtStack *sp, const emxArray_real_T *X,
                      emxArray_real_T *V, emxArray_real_T *Y);

#endif

/* End of code generation (expmapPSR.h) */
