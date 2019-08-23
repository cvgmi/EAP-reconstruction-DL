/*
 * norm.h
 *
 * Code generation for function 'norm'
 *
 */

#ifndef __NORM_H__
#define __NORM_H__

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
extern real_T norm(const emxArray_real_T *x);

#ifdef __WATCOMC__

#pragma aux norm value [8087];

#endif
#endif

/* End of code generation (norm.h) */
