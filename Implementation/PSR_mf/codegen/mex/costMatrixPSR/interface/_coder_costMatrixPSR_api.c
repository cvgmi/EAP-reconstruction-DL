/*
 * _coder_costMatrixPSR_api.c
 *
 * Code generation for function '_coder_costMatrixPSR_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "costMatrixPSR.h"
#include "_coder_costMatrixPSR_api.h"
#include "costMatrixPSR_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo y_emlrtRTEI = { 1, 1, "_coder_costMatrixPSR_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *AA, const
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

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *AA, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(sp, emlrtAlias(AA), &thisId, y);
  emlrtDestroyArray(&AA);
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
  int32_T iv19[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv20[2];
  for (i = 0; i < 2; i++) {
    iv19[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv19, bv0, iv20);
  ret->size[0] = iv20[0];
  ret->size[1] = iv20[1];
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
  static const int32_T iv18[2] = { 0, 0 };

  const mxArray *m6;
  y = NULL;
  m6 = emlrtCreateNumericArray(2, iv18, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m6, (void *)u->data);
  emlrtSetDimensions((mxArray *)m6, u->size, 2);
  emlrtAssign(&y, m6);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv21[3];
  boolean_T bv1[3];
  int32_T i;
  int32_T iv22[3];
  for (i = 0; i < 3; i++) {
    iv21[i] = -1;
    bv1[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, iv21, bv1, iv22);
  ret->size[0] = iv22[0];
  ret->size[1] = iv22[1];
  ret->size[2] = iv22[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void costMatrixPSR_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  emxArray_real_T *X;
  emxArray_real_T *AA;
  emxArray_real_T *T;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &X, 2, &y_emlrtRTEI, true);
  c_emxInit_real_T(&st, &AA, 3, &y_emlrtRTEI, true);
  emxInit_real_T(&st, &T, 2, &y_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "X", X);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "AA", AA);

  /* Invoke the target function */
  costMatrixPSR(&st, X, AA, T);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(T);
  T->canFreeData = false;
  emxFree_real_T(&T);
  AA->canFreeData = false;
  emxFree_real_T(&AA);
  X->canFreeData = false;
  emxFree_real_T(&X);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_costMatrixPSR_api.c) */
