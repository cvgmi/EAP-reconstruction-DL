/*
 * _coder_EstimatedX_api.c
 *
 * Code generation for function '_coder_EstimatedX_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedX.h"
#include "_coder_EstimatedX_api.h"
#include "EstimatedX_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo ab_emlrtRTEI = { 1, 1, "_coder_EstimatedX_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *X, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  c_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv22[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv23[2];
  for (i = 0; i < 2; i++) {
    iv22[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv22, bv0, iv23);
  ret->size[0] = iv23[0];
  ret->size[1] = iv23[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
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
  static const int32_T iv21[2] = { 0, 0 };

  const mxArray *m8;
  y = NULL;
  m8 = emlrtCreateNumericArray(2, iv21, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m8, (void *)u->data);
  emlrtSetDimensions((mxArray *)m8, u->size, 2);
  emlrtAssign(&y, m8);
  return y;
}

void EstimatedX_api(const mxArray * const prhs[3], const mxArray *plhs[1])
{
  emxArray_real_T *X;
  emxArray_real_T *W;
  emxArray_real_T *A;
  emxArray_real_T *xh;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &X, 2, &ab_emlrtRTEI, true);
  emxInit_real_T(&st, &W, 2, &ab_emlrtRTEI, true);
  emxInit_real_T(&st, &A, 2, &ab_emlrtRTEI, true);
  emxInit_real_T(&st, &xh, 2, &ab_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "X", X);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "W", W);
  emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "A", A);

  /* Invoke the target function */
  EstimatedX(&st, X, W, A, xh);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(xh);
  xh->canFreeData = false;
  emxFree_real_T(&xh);
  A->canFreeData = false;
  emxFree_real_T(&A);
  W->canFreeData = false;
  emxFree_real_T(&W);
  X->canFreeData = false;
  emxFree_real_T(&X);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_EstimatedX_api.c) */
