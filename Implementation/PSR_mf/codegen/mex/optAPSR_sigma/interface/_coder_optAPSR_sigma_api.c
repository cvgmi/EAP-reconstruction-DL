/*
 * _coder_optAPSR_sigma_api.c
 *
 * Code generation for function '_coder_optAPSR_sigma_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "_coder_optAPSR_sigma_api.h"
#include "optAPSR_sigma_emxutil.h"
#include "optAPSR_sigma_mexutil.h"

/* Variable Definitions */
static emlrtRTEInfo ac_emlrtRTEI = { 1, 1, "_coder_optAPSR_sigma_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *W, const
  char_T *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static struct0_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *param,
  const char_T *identifier);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *X, const
  char_T *identifier, emxArray_real_T *y);
static struct0_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *obj_old,
  const char_T *identifier);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  i_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  static const int32_T iv56[3] = { 0, 0, 0 };

  const mxArray *m14;
  y = NULL;
  m14 = emlrtCreateNumericArray(3, iv56, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m14, (void *)u->data);
  emlrtSetDimensions((mxArray *)m14, u->size, 3);
  emlrtAssign(&y, m14);
  return y;
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
  j_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static struct0_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *param,
  const char_T *identifier)
{
  struct0_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = f_emlrt_marshallIn(sp, emlrtAlias(param), &thisId);
  emlrtDestroyArray(&param);
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

static struct0_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  struct0_T y;
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[6] = { "maxiterAPSR", "eps", "alpha", "beta",
    "maxk", "sigma" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(sp, parentId, u, 6, fieldNames, 0U, 0);
  thisId.fIdentifier = "maxiterAPSR";
  y.maxiterAPSR = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "maxiterAPSR")), &thisId);
  thisId.fIdentifier = "eps";
  y.eps = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "eps")),
    &thisId);
  thisId.fIdentifier = "alpha";
  y.alpha = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "alpha")), &thisId);
  thisId.fIdentifier = "beta";
  y.beta = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "beta")), &thisId);
  thisId.fIdentifier = "maxk";
  y.maxk = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "maxk")), &thisId);
  thisId.fIdentifier = "sigma";
  y.sigma = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "sigma")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *obj_old,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = g_emlrt_marshallIn(sp, emlrtAlias(obj_old), &thisId);
  emlrtDestroyArray(&obj_old);
  return y;
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv57[3];
  boolean_T bv0[3];
  int32_T i;
  int32_T iv58[3];
  for (i = 0; i < 3; i++) {
    iv57[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, iv57, bv0, iv58);
  ret->size[0] = iv58[0];
  ret->size[1] = iv58[1];
  ret->size[2] = iv58[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv59[2];
  boolean_T bv1[2];
  int32_T i;
  int32_T iv60[2];
  for (i = 0; i < 2; i++) {
    iv59[i] = -1;
    bv1[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv59, bv1, iv60);
  ret->size[0] = iv60[0];
  ret->size[1] = iv60[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void optAPSR_sigma_api(const mxArray *prhs[5], const mxArray *plhs[2])
{
  emxArray_real_T *X;
  emxArray_real_T *W;
  emxArray_real_T *A0;
  emxArray_real_T *A;
  struct0_T param;
  real_T obj_old;
  real_T obj_new;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  b_emxInit_real_T(&st, &X, 3, &ac_emlrtRTEI, true);
  emxInit_real_T(&st, &W, 2, &ac_emlrtRTEI, true);
  b_emxInit_real_T(&st, &A0, 3, &ac_emlrtRTEI, true);
  b_emxInit_real_T(&st, &A, 3, &ac_emlrtRTEI, true);
  prhs[2] = emlrtProtectR2012b(prhs[2], 2, false, -1);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "X", X);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "W", W);
  emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "A0", A0);
  param = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "param");
  obj_old = h_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "obj_old");

  /* Invoke the target function */
  optAPSR_sigma(&st, X, W, A0, &param, obj_old, A, &obj_new);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(A);
  plhs[1] = emlrt_marshallOut(obj_new);
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

/* End of code generation (_coder_optAPSR_sigma_api.c) */
