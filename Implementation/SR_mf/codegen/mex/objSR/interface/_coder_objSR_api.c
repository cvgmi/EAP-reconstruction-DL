/*
 * _coder_objSR_api.c
 *
 * Code generation for function '_coder_objSR_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "objSR.h"
#include "_coder_objSR_api.h"
#include "objSR_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo v_emlrtRTEI = { 1, 1, "_coder_objSR_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *X, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const real_T u);

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
  int32_T iv20[2];
  boolean_T bv0[2];
  int32_T i;
  int32_T iv21[2];
  for (i = 0; i < 2; i++) {
    iv20[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv20, bv0, iv21);
  ret->size[0] = iv21[0];
  ret->size[1] = iv21[1];
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

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m7;
  y = NULL;
  m7 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m7);
  return y;
}

void objSR_api(const mxArray * const prhs[3], const mxArray *plhs[1])
{
  emxArray_real_T *X;
  emxArray_real_T *W;
  emxArray_real_T *A;
  real_T obj;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &X, 2, &v_emlrtRTEI, true);
  emxInit_real_T(&st, &W, 2, &v_emlrtRTEI, true);
  emxInit_real_T(&st, &A, 2, &v_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "X", X);
  emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "W", W);
  emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "A", A);

  /* Invoke the target function */
  obj = objSR(&st, X, W, A);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(obj);
  A->canFreeData = false;
  emxFree_real_T(&A);
  W->canFreeData = false;
  emxFree_real_T(&W);
  X->canFreeData = false;
  emxFree_real_T(&X);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_objSR_api.c) */
