/*
 * mpower.h
 *
 * Code generation for function 'mpower'
 *
 */

#ifndef __MPOWER_H__
#define __MPOWER_H__

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
extern real_T mpower(const emlrtStack *sp, real_T a, real_T b);

#ifdef __WATCOMC__

#pragma aux mpower value [8087];

#endif
#endif

/* End of code generation (mpower.h) */
