/*
 * objPSR.h
 *
 * Code generation for function 'objPSR'
 *
 */

#ifndef __OBJPSR_H__
#define __OBJPSR_H__

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
extern real_T objPSR(const emlrtStack *sp, const emxArray_real_T *X, const
                     emxArray_real_T *W, const emxArray_real_T *A);

#ifdef __WATCOMC__

#pragma aux objPSR value [8087];

#endif
#endif

/* End of code generation (objPSR.h) */
