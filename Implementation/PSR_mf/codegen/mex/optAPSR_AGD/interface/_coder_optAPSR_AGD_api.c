/*
 * _coder_optAPSR_AGD_api.c
 *
 * Code generation for function '_coder_optAPSR_AGD_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD.h"
#include "_coder_optAPSR_AGD_api.h"
#include "optAPSR_AGD_emxutil.h"
#include "optAPSR_AGD_mexutil.h"

/* Variable Definitions */
static emlrtRTEInfo sb_emlrtRTEI = { 1, 1, "_coder_optAPSR_AGD_api", "" };

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *W, const
  char_T *identifier, emxArray_real_T *y);
static const mxArray *c_emlrt_marshallOut(const struct0_T u);
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
  static const int32_T iv45[3] = { 0, 0, 0 };

  const mxArray *m13;
  y = NULL;
  m13 = emlrtCreateNumericArray(3, iv45, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m13, (void *)u->data);
  emlrtSetDimensions((mxArray *)m13, u->size, 3);
  emlrtAssign(&y, m13);
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

static const mxArray *c_emlrt_marshallOut(const struct0_T u)
{
  const mxArray *y;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 0, NULL));
  emlrtAddField(y, emlrt_marshallOut(u.maxiter), "maxiter", 0);
  emlrtAddField(y, emlrt_marshallOut(u.eps), "eps", 0);
  emlrtAddField(y, emlrt_marshallOut(u.lambda), "lambda", 0);
  emlrtAddField(y, emlrt_marshallOut(u.m), "m", 0);
  emlrtAddField(y, emlrt_marshallOut(u.maxiterAGD), "maxiterAGD", 0);
  emlrtAddField(y, emlrt_marshallOut(u.epsAGD), "epsAGD", 0);
  emlrtAddField(y, emlrt_marshallOut(u.beta), "beta", 0);
  return y;
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
  static const char * fieldNames[7] = { "maxiter", "eps", "lambda", "m",
    "maxiterAGD", "epsAGD", "beta" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(sp, parentId, u, 7, fieldNames, 0U, 0);
  thisId.fIdentifier = "maxiter";
  y.maxiter = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "maxiter")), &thisId);
  thisId.fIdentifier = "eps";
  y.eps = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "eps")),
    &thisId);
  thisId.fIdentifier = "lambda";
  y.lambda = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "lambda")), &thisId);
  thisId.fIdentifier = "m";
  y.m = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "m")),
    &thisId);
  thisId.fIdentifier = "maxiterAGD";
  y.maxiterAGD = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "maxiterAGD")), &thisId);
  thisId.fIdentifier = "epsAGD";
  y.epsAGD = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "epsAGD")), &thisId);
  thisId.fIdentifier = "beta";
  y.beta = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "beta")), &thisId);
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
  int32_T iv46[3];
  boolean_T bv0[3];
  int32_T i;
  int32_T iv47[3];
  for (i = 0; i < 3; i++) {
    iv46[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, iv46, bv0, iv47);
  ret->size[0] = iv47[0];
  ret->size[1] = iv47[1];
  ret->size[2] = iv47[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv48[2];
  boolean_T bv1[2];
  int32_T i;
  int32_T iv49[2];
  for (i = 0; i < 2; i++) {
    iv48[i] = -1;
    bv1[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv48, bv1, iv49);
  ret->size[0] = iv49[0];
  ret->size[1] = iv49[1];
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

void optAPSR_AGD_api(const mxArray *prhs[5], const mxArray *plhs[3])
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
  emxInit_real_T(&st, &X, 3, &sb_emlrtRTEI, true);
  b_emxInit_real_T(&st, &W, 2, &sb_emlrtRTEI, true);
  emxInit_real_T(&st, &A0, 3, &sb_emlrtRTEI, true);
  emxInit_real_T(&st, &A, 3, &sb_emlrtRTEI, true);
  prhs[2] = emlrtProtectR2012b(prhs[2], 2, false, -1);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "X", X);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "W", W);
  emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "A0", A0);
  param = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "param");
  obj_old = h_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "obj_old");

  /* Invoke the target function */
  optAPSR_AGD(&st, X, W, A0, &param, obj_old, A, &obj_new);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(A);
  plhs[1] = emlrt_marshallOut(obj_new);
  plhs[2] = c_emlrt_marshallOut(param);
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

/* End of code generation (_coder_optAPSR_AGD_api.c) */
