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
static emlrtRTEInfo k_emlrtRTEI = { 1, 1, "_coder_logmapSRi_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y, const
  char_T *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
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

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Y, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(sp, emlrtAlias(Y), &thisId, y);
  emlrtDestroyArray(&Y);
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
  int32_T iv15[1];
  boolean_T bv0[1];
  int32_T iv16[1];
  iv15[0] = -1;
  bv0[0] = true;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, iv15, bv0, iv16);
  ret->size[0] = iv16[0];
  ret->allocatedSize = ret->size[0];
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
  static const int32_T iv14[2] = { 0, 0 };

  const mxArray *m5;
  y = NULL;
  m5 = emlrtCreateNumericArray(2, iv14, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m5, (void *)u->data);
  emlrtSetDimensions((mxArray *)m5, u->size, 2);
  emlrtAssign(&y, m5);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv17[2];
  boolean_T bv1[2];
  int32_T i;
  int32_T iv18[2];
  for (i = 0; i < 2; i++) {
    iv17[i] = -1;
    bv1[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv17, bv1, iv18);
  ret->size[0] = iv18[0];
  ret->size[1] = iv18[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

void logmapSRi_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  emxArray_real_T *x;
  emxArray_real_T *Y;
  emxArray_real_T *V;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  b_emxInit_real_T(&st, &x, 1, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &Y, 2, &k_emlrtRTEI, true);
  emxInit_real_T(&st, &V, 2, &k_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "x", x);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "Y", Y);

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
