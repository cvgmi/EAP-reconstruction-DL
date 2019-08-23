/*
 * _coder_logmapSRi_api.c
 *
 * Code generation for function '_coder_logmapSRi_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "logmapSRi.h"
#include "_coder_logmapSRi_api.h"
#include "logmapSRi_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo h_emlrtRTEI = { 1, 1, "_coder_logmapSRi_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
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
  int32_T iv14[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv15[2];
  for (i = 0; i < 2; i++) {
    iv14[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv14, bv0, iv15);
  ret->size[0] = iv15[0];
  ret->size[1] = iv15[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(x), &thisId, y);
  emlrtDestroyArray(&x);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv13[1] = { 0 };

  const mxArray *m5;
  y = NULL;
  m5 = emlrtCreateNumericArray(1, iv13, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m5, (void *)u->data);
  emlrtSetDimensions((mxArray *)m5, u->size, 1);
  emlrtAssign(&y, m5);
  return y;
}

void logmapSRi_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  emxArray_real_T *x;
  emxArray_real_T *Y;
  emxArray_real_T *V;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &x, 2, &h_emlrtRTEI, true);
  emxInit_real_T(&st, &Y, 2, &h_emlrtRTEI, true);
  b_emxInit_real_T(&st, &V, 1, &h_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "x", x);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "Y", Y);

  /* Invoke the target function */
  logmapSRi(&st, x, Y, V);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(V);
  V->canFreeData = false;
  emxFree_real_T(&V);
  Y->canFreeData = false;
  emxFree_real_T(&Y);
  x->canFreeData = false;
  emxFree_real_T(&x);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_logmapSRi_api.c) */
