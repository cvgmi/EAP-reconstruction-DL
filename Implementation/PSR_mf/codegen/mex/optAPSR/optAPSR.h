/*
 * optAPSR.h
 *
 * Code generation for function 'optAPSR'
 *
 */

#ifndef __OPTAPSR_H__
#define __OPTAPSR_H__

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
#include "optAPSR_types.h"

/* Function Declarations */
extern void optAPSR(const emlrtStack *sp, const emxArray_real_T *X, const
                    emxArray_real_T *W, emxArray_real_T *A0, const struct0_T
                    *param, emxArray_real_T *A);

#endif

/* End of code generation (optAPSR.h) */
