/*
 * projectT.h
 *
 * Code generation for function 'projectT'
 *
 */

#ifndef __PROJECTT_H__
#define __PROJECTT_H__

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
extern void projectT(const emlrtStack *sp, const emxArray_real_T *A, const
                     emxArray_real_T *G, emxArray_real_T *P);

#endif

/* End of code generation (projectT.h) */
