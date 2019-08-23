/*
 * _coder_optASR_sigma_disp_api.c
 *
 * Code generation for function '_coder_optASR_sigma_disp_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "_coder_optASR_sigma_disp_api.h"
#include "optASR_sigma_disp_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo nb_emlrtRTEI = { 1, 1, "_coder_optASR_sigma_disp_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *param, const
  char_T *identifier, struct0_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *X, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *param, const
  char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(sp, emlrtAlias(param), &thisId, y);
  emlrtDestroyArray(&param);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[10] = { "m", "lambda", "maxiter", "eps",
    "maxiterls", "epsls", "alpha", "beta", "maxk", "sigma" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(sp, parentId, u, 10, fieldNames, 0U, 0);
  thisId.fIdentifier = "m";
  y->m = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "m")),
    &thisId);
  thisId.fIdentifier = "lambda";
  y->lambda = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "lambda")), &thisId);
  thisId.fIdentifier = "maxiter";
  y->maxiter = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "maxiter")), &thisId);
  thisId.fIdentifier = "eps";
  y->eps = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "eps")),
    &thisId);
  thisId.fIdentifier = "maxiterls";
  y->maxiterls = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "maxiterls")), &thisId);
  thisId.fIdentifier = "epsls";
  y->epsls = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "epsls")), &thisId);
  thisId.fIdentifier = "alpha";
  y->alpha = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "alpha")), &thisId);
  thisId.fIdentifier = "beta";
  y->beta = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "beta")), &thisId);
  thisId.fIdentifier = "maxk";
  y->maxk = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "maxk")), &thisId);
  thisId.fIdentifier = "sigma";
  y->sigma = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "sigma")), &thisId);
  emlrtDestroyArray(&u);
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *X, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(X), &thisId, y);
  emlrtDestroyArray(&X);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv50[2] = { 0, 0 };

  const mxArray *m13;
  y = NULL;
  m13 = emlrtCreateNumericArray(2, iv50, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m13, (void *)u->data);
  emlrtSetDimensions((mxArray *)m13, u->size, 2);
  emlrtAssign(&y, m13);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv51[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv52[2];
  for (i = 0; i < 2; i++) {
    iv51[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv51, bv0, iv52);
  ret->size[0] = iv52[0];
  ret->size[1] = iv52[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void optASR_sigma_disp_api(const mxArray *prhs[4], const mxArray *plhs[1])
{
  emxArray_real_T *X;
  emxArray_real_T *W;
  emxArray_real_T *A0;
  emxArray_real_T *A;
  struct0_T param;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &X, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(&st, &W, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(&st, &A0, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(&st, &A, 2, &nb_emlrtRTEI, true);
  prhs[2] = emlrtProtectR2012b(prhs[2], 2, false, -1);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "X", X);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "W", W);
  emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "A0", A0);
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "param", &param);

  /* Invoke the target function */
  optASR_sigma_disp(&st, X, W, A0, &param, A);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(A);
  A->canFreeData = false;
  emxFree_real_T(&A);
  A0->canFreeData = false;
  emxFree_real_T(&A0);
  W->canFreeData = false;
  emxFree_real_T(&W);
  X->canFreeData = false;
  emxFree_real_T(&X);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_optASR_sigma_disp_api.c) */
