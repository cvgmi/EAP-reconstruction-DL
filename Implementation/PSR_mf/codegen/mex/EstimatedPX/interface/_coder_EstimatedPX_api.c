/*
 * _coder_EstimatedPX_api.c
 *
 * Code generation for function '_coder_EstimatedPX_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedPX.h"
#include "_coder_EstimatedPX_api.h"
#include "EstimatedPX_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo ib_emlrtRTEI = { 1, 1, "_coder_EstimatedPX_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *W, const
  char_T *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *X, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *W, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(sp, emlrtAlias(W), &thisId, y);
  emlrtDestroyArray(&W);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv27[3];
  boolean_T bv0[3];
  int32_T i;
  int32_T iv28[3];
  for (i = 0; i < 3; i++) {
    iv27[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, iv27, bv0, iv28);
  ret->size[0] = iv28[0];
  ret->size[1] = iv28[1];
  ret->size[2] = iv28[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
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
  static const int32_T iv26[3] = { 0, 0, 0 };

  const mxArray *m9;
  y = NULL;
  m9 = emlrtCreateNumericArray(3, iv26, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m9, (void *)u->data);
  emlrtSetDimensions((mxArray *)m9, u->size, 3);
  emlrtAssign(&y, m9);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv29[2];
  boolean_T bv1[2];
  int32_T i;
  int32_T iv30[2];
  for (i = 0; i < 2; i++) {
    iv29[i] = -1;
    bv1[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv29, bv1, iv30);
  ret->size[0] = iv30[0];
  ret->size[1] = iv30[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void EstimatedPX_api(const mxArray * const prhs[3], const mxArray *plhs[1])
{
  emxArray_real_T *X;
  emxArray_real_T *W;
  emxArray_real_T *A;
  emxArray_real_T *Xh;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  b_emxInit_real_T(&st, &X, 3, &ib_emlrtRTEI, true);
  emxInit_real_T(&st, &W, 2, &ib_emlrtRTEI, true);
  b_emxInit_real_T(&st, &A, 3, &ib_emlrtRTEI, true);
  b_emxInit_real_T(&st, &Xh, 3, &ib_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "X", X);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "W", W);
  emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "A", A);

  /* Invoke the target function */
  EstimatedPX(&st, X, W, A, Xh);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(Xh);
  Xh->canFreeData = false;
  emxFree_real_T(&Xh);
  A->canFreeData = false;
  emxFree_real_T(&A);
  W->canFreeData = false;
  emxFree_real_T(&W);
  X->canFreeData = false;
  emxFree_real_T(&X);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_EstimatedPX_api.c) */
