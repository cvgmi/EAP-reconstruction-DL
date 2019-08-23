/*
 * expmapSRi.h
 *
 * Code generation for function 'expmapSRi'
 *
 */

#ifndef __EXPMAPSRI_H__
#define __EXPMAPSRI_H__

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
extern void expmapSRi(const emlrtStack *sp, const emxArray_real_T *X,
                      emxArray_real_T *V, emxArray_real_T *Y);

#endif

/* End of code generation (expmapSRi.h) */
