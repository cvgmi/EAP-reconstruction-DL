/*
 * expmapPSR.c
 *
 * Code generation for function 'expmapPSR'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR.h"
#include "expmapPSR.h"
#include "power.h"
#include "optAPSR_emxutil.h"
#include "gradientASR.h"
#include "diag.h"
#include "sin.h"
#include "cos.h"
#include "rdivide.h"
#include "repmat.h"
#include "logmapSRi.h"
#include "sqrt.h"
#include "sum.h"
#include "optAPSR_mexutil.h"
#include "optAPSR_data.h"

/* Variable Definitions */
static emlrtRSInfo xc_emlrtRSI = { 12, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRSInfo yc_emlrtRSI = { 14, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRSInfo ad_emlrtRSI = { 15, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRSInfo bd_emlrtRSI = { 16, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRTEInfo xb_emlrtRTEI = { 1, 14, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRTEInfo yb_emlrtRTEI = { 12, 1, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRTEInfo ac_emlrtRTEI = { 13, 1, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtECInfo n_emlrtECI = { 2, 16, 5, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 14, 1, "normV", "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m", 0
};

/* Function Definitions */
void expmapPSR(const emlrtStack *sp, const emxArray_real_T *X, emxArray_real_T
               *V, emxArray_real_T *Y)
{
  emxArray_real_T *normV;
  emxArray_real_T *normV0;
  emxArray_real_T *r14;
  int32_T i21;
  int32_T loop_ub;
  emxArray_boolean_T *b_normV;
  emxArray_int32_T *r15;
  int32_T i;
  int32_T i22;
  emxArray_real_T *b_V;
  emxArray_real_T *b;
  const mxArray *y;
  static const int32_T iv48[2] = { 1, 45 };

  const mxArray *m12;
  char_T cv51[45];
  static const char_T cv52[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv49[2] = { 1, 21 };

  char_T cv53[21];
  static const char_T cv54[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  int32_T b_Y;
  int32_T i23;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  real_T alpha1;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  const mxArray *c_y;
  static const int32_T iv50[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv51[2] = { 1, 21 };

  emxArray_real_T *C;
  int32_T c_Y[2];
  int32_T b_C[2];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &normV, 2, &yb_emlrtRTEI, true);
  emxInit_real_T(sp, &normV0, 2, &ac_emlrtRTEI, true);
  emxInit_real_T(sp, &r14, 2, &xb_emlrtRTEI, true);

  /*  compute the exp map on product space of sphere exp_X(V) */
  /*  Input: */
  /*      X, V - d-by-N matrices */
  /*      to ensure exp map is a bijection, |v| \in [0,\pi] */
  /*  Output: */
  /*      Y - expmap (d-by-N vector) */
  /*  same as expmapSRi in DL_SR */
  power(sp, V, r14);
  st.site = &xc_emlrtRSI;
  sum(&st, r14, normV);
  st.site = &xc_emlrtRSI;
  b_sqrt(&st, normV);

  /* 1-by-m */
  i21 = normV0->size[0] * normV0->size[1];
  normV0->size[0] = 1;
  normV0->size[1] = normV->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)normV0, i21, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  loop_ub = normV->size[0] * normV->size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    normV0->data[i21] = normV->data[i21];
  }

  emxInit_boolean_T(sp, &b_normV, 2, &xb_emlrtRTEI, true);
  i21 = b_normV->size[0] * b_normV->size[1];
  b_normV->size[0] = 1;
  b_normV->size[1] = normV->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_normV, i21, (int32_T)sizeof
                    (boolean_T), &xb_emlrtRTEI);
  loop_ub = normV->size[0] * normV->size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    b_normV->data[i21] = (normV->data[i21] == 0.0);
  }

  b_emxInit_int32_T(sp, &r15, 2, &xb_emlrtRTEI, true);
  st.site = &yc_emlrtRSI;
  eml_li_find(&st, b_normV, r15);
  i = normV->size[1];
  loop_ub = r15->size[0] * r15->size[1];
  emxFree_boolean_T(&b_normV);
  for (i21 = 0; i21 < loop_ub; i21++) {
    i22 = r15->data[i21];
    normV->data[emlrtDynamicBoundsCheckFastR2012b(i22, 1, i, &lb_emlrtBCI, sp) -
      1] = 1.0;
  }

  emxFree_int32_T(&r15);
  emxInit_real_T(sp, &b_V, 2, &xb_emlrtRTEI, true);
  st.site = &ad_emlrtRSI;
  b_repmat(&st, normV, X->size[0], r14);
  i21 = b_V->size[0] * b_V->size[1];
  b_V->size[0] = V->size[0];
  b_V->size[1] = V->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_V, i21, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  loop_ub = V->size[0] * V->size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    b_V->data[i21] = V->data[i21];
  }

  st.site = &ad_emlrtRSI;
  rdivide(&st, b_V, r14, V);
  i21 = normV->size[0] * normV->size[1];
  normV->size[0] = 1;
  normV->size[1] = normV0->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)normV, i21, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  loop_ub = normV0->size[0] * normV0->size[1];
  emxFree_real_T(&b_V);
  for (i21 = 0; i21 < loop_ub; i21++) {
    normV->data[i21] = normV0->data[i21];
  }

  emxInit_real_T(sp, &b, 2, &xb_emlrtRTEI, true);
  b_cos(normV);
  st.site = &bd_emlrtRSI;
  diag(&st, normV, b);
  st.site = &bd_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  emxFree_real_T(&normV);
  if (!(X->size[1] == b->size[0])) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &g_emlrtRTEI);
      y = NULL;
      m12 = emlrtCreateCharArray(2, iv48);
      for (i = 0; i < 45; i++) {
        cv51[i] = cv52[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m12, cv51);
      emlrtAssign(&y, m12);
      c_st.site = &cd_emlrtRSI;
      d_st.site = &nd_emlrtRSI;
      error(&c_st, b_message(&d_st, y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &h_emlrtRTEI);
      b_y = NULL;
      m12 = emlrtCreateCharArray(2, iv49);
      for (i = 0; i < 21; i++) {
        cv53[i] = cv54[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m12, cv53);
      emlrtAssign(&b_y, m12);
      c_st.site = &dd_emlrtRSI;
      d_st.site = &od_emlrtRSI;
      error(&c_st, b_message(&d_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((X->size[1] == 1) || (b->size[0] == 1)) {
    i21 = Y->size[0] * Y->size[1];
    Y->size[0] = X->size[0];
    Y->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)Y, i21, (int32_T)sizeof(real_T),
                      &xb_emlrtRTEI);
    loop_ub = X->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      i = b->size[1];
      for (i22 = 0; i22 < i; i22++) {
        Y->data[i21 + Y->size[0] * i22] = 0.0;
        b_Y = X->size[1];
        for (i23 = 0; i23 < b_Y; i23++) {
          Y->data[i21 + Y->size[0] * i22] += X->data[i21 + X->size[0] * i23] *
            b->data[i23 + b->size[0] * i22];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)X->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i21 = r14->size[0] * r14->size[1];
    r14->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r14, i21, (int32_T)sizeof(real_T),
                      &xb_emlrtRTEI);
    i21 = r14->size[0] * r14->size[1];
    r14->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r14, i21, (int32_T)sizeof(real_T),
                      &xb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i21 = 0; i21 < loop_ub; i21++) {
      r14->data[i21] = 0.0;
    }

    b_st.site = &x_emlrtRSI;
    c_st.site = &ab_emlrtRSI;
    i21 = Y->size[0] * Y->size[1];
    Y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)Y, i21, (int32_T)sizeof(real_T),
                      &xb_emlrtRTEI);
    i21 = Y->size[0] * Y->size[1];
    Y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)Y, i21, (int32_T)sizeof(real_T),
                      &xb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i21 = 0; i21 < loop_ub; i21++) {
      Y->data[i21] = 0.0;
    }

    if ((X->size[0] < 1) || (b->size[1] < 1) || (X->size[1] < 1)) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(X->size[0]);
      n_t = (ptrdiff_t)(b->size[1]);
      k_t = (ptrdiff_t)(X->size[1]);
      lda_t = (ptrdiff_t)(X->size[0]);
      ldb_t = (ptrdiff_t)(X->size[1]);
      ldc_t = (ptrdiff_t)(X->size[0]);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&X->data[0]);
      Bib0_t = (double *)(&b->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&Y->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  b_sin(normV0);
  st.site = &bd_emlrtRSI;
  diag(&st, normV0, b);
  st.site = &bd_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  emxFree_real_T(&normV0);
  if (!(V->size[1] == b->size[0])) {
    if (((V->size[0] == 1) && (V->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &g_emlrtRTEI);
      c_y = NULL;
      m12 = emlrtCreateCharArray(2, iv50);
      for (i = 0; i < 45; i++) {
        cv51[i] = cv52[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m12, cv51);
      emlrtAssign(&c_y, m12);
      c_st.site = &cd_emlrtRSI;
      d_st.site = &nd_emlrtRSI;
      error(&c_st, b_message(&d_st, c_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &h_emlrtRTEI);
      d_y = NULL;
      m12 = emlrtCreateCharArray(2, iv51);
      for (i = 0; i < 21; i++) {
        cv53[i] = cv54[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m12, cv53);
      emlrtAssign(&d_y, m12);
      c_st.site = &dd_emlrtRSI;
      d_st.site = &od_emlrtRSI;
      error(&c_st, b_message(&d_st, d_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &C, 2, &xb_emlrtRTEI, true);
  if ((V->size[1] == 1) || (b->size[0] == 1)) {
    i21 = C->size[0] * C->size[1];
    C->size[0] = V->size[0];
    C->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)C, i21, (int32_T)sizeof(real_T),
                      &xb_emlrtRTEI);
    loop_ub = V->size[0];
    for (i21 = 0; i21 < loop_ub; i21++) {
      i = b->size[1];
      for (i22 = 0; i22 < i; i22++) {
        C->data[i21 + C->size[0] * i22] = 0.0;
        b_Y = V->size[1];
        for (i23 = 0; i23 < b_Y; i23++) {
          C->data[i21 + C->size[0] * i22] += V->data[i21 + V->size[0] * i23] *
            b->data[i23 + b->size[0] * i22];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)V->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i21 = r14->size[0] * r14->size[1];
    r14->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r14, i21, (int32_T)sizeof(real_T),
                      &xb_emlrtRTEI);
    i21 = r14->size[0] * r14->size[1];
    r14->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r14, i21, (int32_T)sizeof(real_T),
                      &xb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i21 = 0; i21 < loop_ub; i21++) {
      r14->data[i21] = 0.0;
    }

    b_st.site = &x_emlrtRSI;
    c_st.site = &ab_emlrtRSI;
    i21 = C->size[0] * C->size[1];
    C->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i21, (int32_T)sizeof(real_T),
                      &xb_emlrtRTEI);
    i21 = C->size[0] * C->size[1];
    C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i21, (int32_T)sizeof(real_T),
                      &xb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i21 = 0; i21 < loop_ub; i21++) {
      C->data[i21] = 0.0;
    }

    if ((V->size[0] < 1) || (b->size[1] < 1) || (V->size[1] < 1)) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(V->size[0]);
      n_t = (ptrdiff_t)(b->size[1]);
      k_t = (ptrdiff_t)(V->size[1]);
      lda_t = (ptrdiff_t)(V->size[0]);
      ldb_t = (ptrdiff_t)(V->size[1]);
      ldc_t = (ptrdiff_t)(V->size[0]);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&V->data[0]);
      Bib0_t = (double *)(&b->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&C->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&r14);
  emxFree_real_T(&b);
  for (i21 = 0; i21 < 2; i21++) {
    c_Y[i21] = Y->size[i21];
  }

  for (i21 = 0; i21 < 2; i21++) {
    b_C[i21] = C->size[i21];
  }

  emlrtSizeEqCheck2DFastR2012b(c_Y, b_C, &n_emlrtECI, sp);
  i21 = Y->size[0] * Y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Y, i21, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  i = Y->size[0];
  b_Y = Y->size[1];
  loop_ub = i * b_Y;
  for (i21 = 0; i21 < loop_ub; i21++) {
    Y->data[i21] += C->data[i21];
  }

  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (expmapPSR.c) */
