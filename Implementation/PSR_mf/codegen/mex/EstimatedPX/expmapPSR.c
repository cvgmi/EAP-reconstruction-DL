/*
 * expmapPSR.c
 *
 * Code generation for function 'expmapPSR'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedPX.h"
#include "expmapPSR.h"
#include "power.h"
#include "EstimatedPX_emxutil.h"
#include "diag.h"
#include "sin.h"
#include "cos.h"
#include "rdivide.h"
#include "repmat.h"
#include "eml_int_forloop_overflow_check.h"
#include "sqrt.h"
#include "sum.h"
#include "EstimatedPX_mexutil.h"
#include "EstimatedPX_data.h"

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = { 11, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo hb_emlrtRSI = { 26, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo ib_emlrtRSI = { 39, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo pb_emlrtRSI = { 12, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRSInfo qb_emlrtRSI = { 14, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRSInfo rb_emlrtRSI = { 15, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRSInfo sb_emlrtRSI = { 16, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRTEInfo f_emlrtRTEI = { 14, 5, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo j_emlrtMCI = { 14, 5, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo db_emlrtRTEI = { 17, 9, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 1, 14, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 12, 1, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRTEInfo hb_emlrtRTEI = { 13, 1, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtDCInfo emlrtDCI = { 17, 37, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4 };

static emlrtECInfo d_emlrtECI = { 2, 16, 5, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 14, 1, "normV", "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m", 0
};

static emlrtRSInfo bc_emlrtRSI = { 14, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

/* Function Definitions */
void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                 emxArray_int32_T *y)
{
  int32_T n;
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m4;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  n = x->size[1];
  st.site = &gb_emlrtRSI;
  k = 0;
  b_st.site = &ib_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &i_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  if (k <= x->size[1]) {
  } else {
    emlrtAssertMATLABThread(sp, &f_emlrtRTEI);
    b_y = NULL;
    m4 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m4);
    st.site = &bc_emlrtRSI;
    error(&st, b_y, &j_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &emlrtDCI, sp);
  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &db_emlrtRTEI);
  j = 0;
  st.site = &hb_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &i_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

void expmapPSR(const emlrtStack *sp, const emxArray_real_T *X, emxArray_real_T
               *V, emxArray_real_T *Y)
{
  emxArray_real_T *normV;
  emxArray_real_T *normV0;
  emxArray_real_T *r9;
  int32_T i10;
  int32_T loop_ub;
  emxArray_boolean_T *b_normV;
  emxArray_int32_T *r10;
  int32_T i;
  int32_T i11;
  emxArray_real_T *b_V;
  emxArray_real_T *b;
  const mxArray *y;
  static const int32_T iv22[2] = { 1, 45 };

  const mxArray *m8;
  char_T cv30[45];
  static const char_T cv31[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv23[2] = { 1, 21 };

  char_T cv32[21];
  static const char_T cv33[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  int32_T b_Y;
  int32_T i12;
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
  static const int32_T iv24[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv25[2] = { 1, 21 };

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
  emxInit_real_T(sp, &normV, 2, &gb_emlrtRTEI, true);
  emxInit_real_T(sp, &normV0, 2, &hb_emlrtRTEI, true);
  emxInit_real_T(sp, &r9, 2, &fb_emlrtRTEI, true);

  /*  compute the exp map on product space of sphere exp_X(V) */
  /*  Input: */
  /*      X, V - d-by-N matrices */
  /*      to ensure exp map is a bijection, |v| \in [0,\pi] */
  /*  Output: */
  /*      Y - expmap (d-by-N vector) */
  /*  same as expmapSRi in DL_SR */
  power(sp, V, r9);
  st.site = &pb_emlrtRSI;
  sum(&st, r9, normV);
  st.site = &pb_emlrtRSI;
  b_sqrt(&st, normV);

  /* 1-by-m */
  i10 = normV0->size[0] * normV0->size[1];
  normV0->size[0] = 1;
  normV0->size[1] = normV->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)normV0, i10, (int32_T)sizeof(real_T),
                    &fb_emlrtRTEI);
  loop_ub = normV->size[0] * normV->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    normV0->data[i10] = normV->data[i10];
  }

  emxInit_boolean_T(sp, &b_normV, 2, &fb_emlrtRTEI, true);
  i10 = b_normV->size[0] * b_normV->size[1];
  b_normV->size[0] = 1;
  b_normV->size[1] = normV->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_normV, i10, (int32_T)sizeof
                    (boolean_T), &fb_emlrtRTEI);
  loop_ub = normV->size[0] * normV->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    b_normV->data[i10] = (normV->data[i10] == 0.0);
  }

  b_emxInit_int32_T(sp, &r10, 2, &fb_emlrtRTEI, true);
  st.site = &qb_emlrtRSI;
  eml_li_find(&st, b_normV, r10);
  i = normV->size[1];
  loop_ub = r10->size[0] * r10->size[1];
  emxFree_boolean_T(&b_normV);
  for (i10 = 0; i10 < loop_ub; i10++) {
    i11 = r10->data[i10];
    normV->data[emlrtDynamicBoundsCheckFastR2012b(i11, 1, i, &k_emlrtBCI, sp) -
      1] = 1.0;
  }

  emxFree_int32_T(&r10);
  emxInit_real_T(sp, &b_V, 2, &fb_emlrtRTEI, true);
  st.site = &rb_emlrtRSI;
  b_repmat(&st, normV, X->size[0], r9);
  i10 = b_V->size[0] * b_V->size[1];
  b_V->size[0] = V->size[0];
  b_V->size[1] = V->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_V, i10, (int32_T)sizeof(real_T),
                    &fb_emlrtRTEI);
  loop_ub = V->size[0] * V->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    b_V->data[i10] = V->data[i10];
  }

  st.site = &rb_emlrtRSI;
  rdivide(&st, b_V, r9, V);
  i10 = normV->size[0] * normV->size[1];
  normV->size[0] = 1;
  normV->size[1] = normV0->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)normV, i10, (int32_T)sizeof(real_T),
                    &fb_emlrtRTEI);
  loop_ub = normV0->size[0] * normV0->size[1];
  emxFree_real_T(&b_V);
  for (i10 = 0; i10 < loop_ub; i10++) {
    normV->data[i10] = normV0->data[i10];
  }

  emxInit_real_T(sp, &b, 2, &fb_emlrtRTEI, true);
  b_cos(normV);
  st.site = &sb_emlrtRSI;
  diag(&st, normV, b);
  st.site = &sb_emlrtRSI;
  b_st.site = &t_emlrtRSI;
  emxFree_real_T(&normV);
  if (!(X->size[1] == b->size[0])) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      y = NULL;
      m8 = emlrtCreateCharArray(2, iv22);
      for (i = 0; i < 45; i++) {
        cv30[i] = cv31[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m8, cv30);
      emlrtAssign(&y, m8);
      c_st.site = &tb_emlrtRSI;
      d_st.site = &ec_emlrtRSI;
      error(&c_st, b_message(&d_st, y, &c_emlrtMCI), &d_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      b_y = NULL;
      m8 = emlrtCreateCharArray(2, iv23);
      for (i = 0; i < 21; i++) {
        cv32[i] = cv33[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m8, cv32);
      emlrtAssign(&b_y, m8);
      c_st.site = &ub_emlrtRSI;
      d_st.site = &fc_emlrtRSI;
      error(&c_st, b_message(&d_st, b_y, &e_emlrtMCI), &f_emlrtMCI);
    }
  }

  if ((X->size[1] == 1) || (b->size[0] == 1)) {
    i10 = Y->size[0] * Y->size[1];
    Y->size[0] = X->size[0];
    Y->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)Y, i10, (int32_T)sizeof(real_T),
                      &fb_emlrtRTEI);
    loop_ub = X->size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      i = b->size[1];
      for (i11 = 0; i11 < i; i11++) {
        Y->data[i10 + Y->size[0] * i11] = 0.0;
        b_Y = X->size[1];
        for (i12 = 0; i12 < b_Y; i12++) {
          Y->data[i10 + Y->size[0] * i11] += X->data[i10 + X->size[0] * i12] *
            b->data[i12 + b->size[0] * i11];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)X->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i10 = r9->size[0] * r9->size[1];
    r9->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r9, i10, (int32_T)sizeof(real_T),
                      &fb_emlrtRTEI);
    i10 = r9->size[0] * r9->size[1];
    r9->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r9, i10, (int32_T)sizeof(real_T),
                      &fb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i10 = 0; i10 < loop_ub; i10++) {
      r9->data[i10] = 0.0;
    }

    b_st.site = &s_emlrtRSI;
    c_st.site = &u_emlrtRSI;
    i10 = Y->size[0] * Y->size[1];
    Y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)Y, i10, (int32_T)sizeof(real_T),
                      &fb_emlrtRTEI);
    i10 = Y->size[0] * Y->size[1];
    Y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)Y, i10, (int32_T)sizeof(real_T),
                      &fb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i10 = 0; i10 < loop_ub; i10++) {
      Y->data[i10] = 0.0;
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
  st.site = &sb_emlrtRSI;
  diag(&st, normV0, b);
  st.site = &sb_emlrtRSI;
  b_st.site = &t_emlrtRSI;
  emxFree_real_T(&normV0);
  if (!(V->size[1] == b->size[0])) {
    if (((V->size[0] == 1) && (V->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      c_y = NULL;
      m8 = emlrtCreateCharArray(2, iv24);
      for (i = 0; i < 45; i++) {
        cv30[i] = cv31[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m8, cv30);
      emlrtAssign(&c_y, m8);
      c_st.site = &tb_emlrtRSI;
      d_st.site = &ec_emlrtRSI;
      error(&c_st, b_message(&d_st, c_y, &c_emlrtMCI), &d_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      d_y = NULL;
      m8 = emlrtCreateCharArray(2, iv25);
      for (i = 0; i < 21; i++) {
        cv32[i] = cv33[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m8, cv32);
      emlrtAssign(&d_y, m8);
      c_st.site = &ub_emlrtRSI;
      d_st.site = &fc_emlrtRSI;
      error(&c_st, b_message(&d_st, d_y, &e_emlrtMCI), &f_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &C, 2, &fb_emlrtRTEI, true);
  if ((V->size[1] == 1) || (b->size[0] == 1)) {
    i10 = C->size[0] * C->size[1];
    C->size[0] = V->size[0];
    C->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)C, i10, (int32_T)sizeof(real_T),
                      &fb_emlrtRTEI);
    loop_ub = V->size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      i = b->size[1];
      for (i11 = 0; i11 < i; i11++) {
        C->data[i10 + C->size[0] * i11] = 0.0;
        b_Y = V->size[1];
        for (i12 = 0; i12 < b_Y; i12++) {
          C->data[i10 + C->size[0] * i11] += V->data[i10 + V->size[0] * i12] *
            b->data[i12 + b->size[0] * i11];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)V->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i10 = r9->size[0] * r9->size[1];
    r9->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r9, i10, (int32_T)sizeof(real_T),
                      &fb_emlrtRTEI);
    i10 = r9->size[0] * r9->size[1];
    r9->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r9, i10, (int32_T)sizeof(real_T),
                      &fb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i10 = 0; i10 < loop_ub; i10++) {
      r9->data[i10] = 0.0;
    }

    b_st.site = &s_emlrtRSI;
    c_st.site = &u_emlrtRSI;
    i10 = C->size[0] * C->size[1];
    C->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i10, (int32_T)sizeof(real_T),
                      &fb_emlrtRTEI);
    i10 = C->size[0] * C->size[1];
    C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i10, (int32_T)sizeof(real_T),
                      &fb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i10 = 0; i10 < loop_ub; i10++) {
      C->data[i10] = 0.0;
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

  emxFree_real_T(&r9);
  emxFree_real_T(&b);
  for (i10 = 0; i10 < 2; i10++) {
    c_Y[i10] = Y->size[i10];
  }

  for (i10 = 0; i10 < 2; i10++) {
    b_C[i10] = C->size[i10];
  }

  emlrtSizeEqCheck2DFastR2012b(c_Y, b_C, &d_emlrtECI, sp);
  i10 = Y->size[0] * Y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Y, i10, (int32_T)sizeof(real_T),
                    &fb_emlrtRTEI);
  i = Y->size[0];
  b_Y = Y->size[1];
  loop_ub = i * b_Y;
  for (i10 = 0; i10 < loop_ub; i10++) {
    Y->data[i10] += C->data[i10];
  }

  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (expmapPSR.c) */
