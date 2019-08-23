/*
 * objSR.h
 *
 * Code generation for function 'objSR'
 *
 */

#ifndef __OBJSR_H__
#define __OBJSR_H__

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
extern real_T objSR(const emlrtStack *sp, const emxArray_real_T *X, const
                    emxArray_real_T *W, const emxArray_real_T *A);

#ifdef __WATCOMC__

#pragma aux objSR value [8087];

#endif
#endif

/* End of code generation (objSR.h) */
