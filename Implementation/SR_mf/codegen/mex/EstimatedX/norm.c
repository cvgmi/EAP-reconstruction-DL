/*
 * norm.c
 *
 * Code generation for function 'norm'
 *
 * C source code generated on: Mon Feb 10 22:17:25 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedX.h"
#include "norm.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo m_emlrtRSI = { 38, "norm",
  "/opt/matlab2012a/toolbox/eml/lib/matlab/matfun/norm.m" };

static emlrtRSInfo n_emlrtRSI = { 171, "norm",
  "/opt/matlab2012a/toolbox/eml/lib/matlab/matfun/norm.m" };

static emlrtRSInfo o_emlrtRSI = { 19, "eml_xnrm2",
  "/opt/matlab2012a/toolbox/eml/lib/matlab/eml/blas/eml_xnrm2.m" };

static emlrtRSInfo p_emlrtRSI = { 18, "eml_blas_xnrm2",
  "/opt/matlab2012a/toolbox/eml/lib/matlab/eml/blas/external/eml_blas_xnrm2.m" };

/* Function Declarations */

/* Function Definitions */
real_T norm(const real_T x[64])
{
  real_T y;
  real_T scale;
  int32_T k;
  real_T absxk;
  real_T t;
  EMLRTPUSHRTSTACK(&m_emlrtRSI);
  EMLRTPUSHRTSTACK(&n_emlrtRSI);
  EMLRTPUSHRTSTACK(&o_emlrtRSI);
  EMLRTPUSHRTSTACK(&p_emlrtRSI);
  y = 0.0;
  scale = 2.2250738585072014E-308;
  for (k = 0; k < 64; k++) {
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = 1.0 + y * t * t;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  y = scale * muDoubleScalarSqrt(y);
  EMLRTPOPRTSTACK(&p_emlrtRSI);
  EMLRTPOPRTSTACK(&o_emlrtRSI);
  EMLRTPOPRTSTACK(&n_emlrtRSI);
  EMLRTPOPRTSTACK(&m_emlrtRSI);
  return y;
}

/* End of code generation (norm.c) */
