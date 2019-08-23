/*
 * EstimatedX_api.c
 *
 * Code generation for function 'EstimatedX_api'
 *
 * C source code generated on: Mon Feb 10 22:17:25 2014
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedX.h"
#include "EstimatedX_api.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[7744]);
static void c_emlrt_marshallIn(const mxArray *W, const char_T *identifier,
  real_T y[12100]);
static void d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[12100]);
static void e_emlrt_marshallIn(const mxArray *A, const char_T *identifier,
  real_T y[6400]);
static void emlrt_marshallIn(const mxArray *X, const char_T *identifier, real_T
  y[7744]);
static const mxArray *emlrt_marshallOut(const real_T u[7744]);
static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[6400]);
static void g_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[7744]);
static void h_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[12100]);
static void i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[6400]);

/* Function Definitions */
static void b_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[7744])
{
  g_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const mxArray *W, const char_T *identifier,
  real_T y[12100])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(emlrtAlias(W), &thisId, y);
  emlrtDestroyArray(&W);
}

static void d_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[12100])
{
  h_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const mxArray *A, const char_T *identifier,
  real_T y[6400])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(emlrtAlias(A), &thisId, y);
  emlrtDestroyArray(&A);
}

static void emlrt_marshallIn(const mxArray *X, const char_T *identifier, real_T
  y[7744])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(emlrtAlias(X), &thisId, y);
  emlrtDestroyArray(&X);
}

static const mxArray *emlrt_marshallOut(const real_T u[7744])
{
  const mxArray *y;
  static const int32_T iv0[2] = { 64, 121 };

  const mxArray *m0;
  real_T (*pData)[];
  int32_T i;
  y = NULL;
  m0 = mxCreateNumericArray(2, (int32_T *)&iv0, mxDOUBLE_CLASS, mxREAL);
  pData = (real_T (*)[])mxGetPr(m0);
  for (i = 0; i < 7744; i++) {
    (*pData)[i] = u[i];
  }

  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const mxArray *u, const emlrtMsgIdentifier
  *parentId, real_T y[6400])
{
  i_emlrt_marshallIn(emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[7744])
{
  int32_T iv1[2];
  int32_T i0;
  int32_T i1;
  for (i0 = 0; i0 < 2; i0++) {
    iv1[i0] = 64 + 57 * i0;
  }

  emlrtCheckBuiltInCtxR2011b(&emlrtContextGlobal, msgId, src, "double", FALSE,
    2U, iv1);
  for (i0 = 0; i0 < 121; i0++) {
    for (i1 = 0; i1 < 64; i1++) {
      ret[i1 + (i0 << 6)] = (*(real_T (*)[7744])mxGetData(src))[i1 + (i0 << 6)];
    }
  }

  emlrtDestroyArray(&src);
}

static void h_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[12100])
{
  int32_T iv2[2];
  int32_T i2;
  int32_T i3;
  for (i2 = 0; i2 < 2; i2++) {
    iv2[i2] = 100 + 21 * i2;
  }

  emlrtCheckBuiltInCtxR2011b(&emlrtContextGlobal, msgId, src, "double", FALSE,
    2U, iv2);
  for (i2 = 0; i2 < 121; i2++) {
    for (i3 = 0; i3 < 100; i3++) {
      ret[i3 + 100 * i2] = (*(real_T (*)[12100])mxGetData(src))[i3 + 100 * i2];
    }
  }

  emlrtDestroyArray(&src);
}

static void i_emlrt_marshallIn(const mxArray *src, const emlrtMsgIdentifier
  *msgId, real_T ret[6400])
{
  int32_T iv3[2];
  int32_T i4;
  int32_T i5;
  for (i4 = 0; i4 < 2; i4++) {
    iv3[i4] = 64 + 36 * i4;
  }

  emlrtCheckBuiltInCtxR2011b(&emlrtContextGlobal, msgId, src, "double", FALSE,
    2U, iv3);
  for (i4 = 0; i4 < 100; i4++) {
    for (i5 = 0; i5 < 64; i5++) {
      ret[i5 + (i4 << 6)] = (*(real_T (*)[6400])mxGetData(src))[i5 + (i4 << 6)];
    }
  }

  emlrtDestroyArray(&src);
}

void EstimatedX_api(EstimatedXStackData *SD, const mxArray * const prhs[3],
                    const mxArray *plhs[1])
{
  real_T X[7744];
  real_T A[6400];
  real_T b_X[7744];

  /* Marshall function inputs */
  emlrt_marshallIn(emlrtAliasP(prhs[0]), "X", X);
  c_emlrt_marshallIn(emlrtAliasP(prhs[1]), "W", SD->f0.W);
  e_emlrt_marshallIn(emlrtAliasP(prhs[2]), "A", A);

  /* Invoke the target function */
  memcpy(&b_X[0], &X[0], 7744U * sizeof(real_T));
  EstimatedX(b_X, SD->f0.W, A, X);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(X);
}

/* End of code generation (EstimatedX_api.c) */
