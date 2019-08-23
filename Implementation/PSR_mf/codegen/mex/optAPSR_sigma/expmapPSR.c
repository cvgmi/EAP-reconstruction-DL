/*
 * expmapPSR.c
 *
 * Code generation for function 'expmapPSR'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "expmapPSR.h"
#include "optAPSR_sigma_emxutil.h"
#include "power.h"
#include "diag.h"
#include "sin.h"
#include "cos.h"
#include "rdivide.h"
#include "repmat.h"
#include "eml_int_forloop_overflow_check.h"
#include "sqrt.h"
#include "sum.h"
#include "optAPSR_sigma_mexutil.h"
#include "optAPSR_sigma_data.h"

/* Variable Definitions */
static emlrtRSInfo qb_emlrtRSI = { 11, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo rb_emlrtRSI = { 26, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo sb_emlrtRSI = { 39, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo oc_emlrtRSI = { 12, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRSInfo pc_emlrtRSI = { 14, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRSInfo qc_emlrtRSI = { 15, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRSInfo rc_emlrtRSI = { 16, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRTEInfo f_emlrtRTEI = { 14, 5, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo n_emlrtMCI = { 14, 5, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo lb_emlrtRTEI = { 17, 9, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo pb_emlrtRTEI = { 1, 14, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRTEInfo qb_emlrtRTEI = { 12, 1, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtRTEInfo rb_emlrtRTEI = { 13, 1, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtDCInfo emlrtDCI = { 17, 37, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4 };

static emlrtECInfo m_emlrtECI = { 2, 16, 5, "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m" };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 14, 1, "normV", "expmapPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/expmapPSR.m", 0
};

static emlrtRSInfo pd_emlrtRSI = { 14, "eml_li_find",
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
  const mxArray *m5;
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
  st.site = &qb_emlrtRSI;
  k = 0;
  b_st.site = &sb_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &l_emlrtRSI;
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
    m5 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m5);
    st.site = &pd_emlrtRSI;
    error(&st, b_y, &n_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &emlrtDCI, sp);
  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &lb_emlrtRTEI);
  j = 0;
  st.site = &rb_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &l_emlrtRSI;
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
  emxArray_real_T *r15;
  int32_T i20;
  int32_T loop_ub;
  emxArray_boolean_T *b_normV;
  emxArray_int32_T *r16;
  int32_T i;
  int32_T i21;
  emxArray_real_T *b_V;
  emxArray_real_T *b;
  const mxArray *y;
  static const int32_T iv42[2] = { 1, 45 };

  const mxArray *m10;
  char_T cv44[45];
  static const char_T cv45[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv43[2] = { 1, 21 };

  char_T cv46[21];
  static const char_T cv47[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  int32_T b_Y;
  int32_T i22;
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
  static const int32_T iv44[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv45[2] = { 1, 21 };

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
  emxInit_real_T(sp, &normV, 2, &qb_emlrtRTEI, true);
  emxInit_real_T(sp, &normV0, 2, &rb_emlrtRTEI, true);
  emxInit_real_T(sp, &r15, 2, &pb_emlrtRTEI, true);

  /*  compute the exp map on product space of sphere exp_X(V) */
  /*  Input: */
  /*      X, V - d-by-N matrices */
  /*      to ensure exp map is a bijection, |v| \in [0,\pi] */
  /*  Output: */
  /*      Y - expmap (d-by-N vector) */
  /*  same as expmapSRi in DL_SR */
  power(sp, V, r15);
  st.site = &oc_emlrtRSI;
  sum(&st, r15, normV);
  st.site = &oc_emlrtRSI;
  b_sqrt(&st, normV);

  /* 1-by-m */
  i20 = normV0->size[0] * normV0->size[1];
  normV0->size[0] = 1;
  normV0->size[1] = normV->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)normV0, i20, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  loop_ub = normV->size[0] * normV->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    normV0->data[i20] = normV->data[i20];
  }

  emxInit_boolean_T(sp, &b_normV, 2, &pb_emlrtRTEI, true);
  i20 = b_normV->size[0] * b_normV->size[1];
  b_normV->size[0] = 1;
  b_normV->size[1] = normV->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_normV, i20, (int32_T)sizeof
                    (boolean_T), &pb_emlrtRTEI);
  loop_ub = normV->size[0] * normV->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    b_normV->data[i20] = (normV->data[i20] == 0.0);
  }

  b_emxInit_int32_T(sp, &r16, 2, &pb_emlrtRTEI, true);
  st.site = &pc_emlrtRSI;
  eml_li_find(&st, b_normV, r16);
  i = normV->size[1];
  loop_ub = r16->size[0] * r16->size[1];
  emxFree_boolean_T(&b_normV);
  for (i20 = 0; i20 < loop_ub; i20++) {
    i21 = r16->data[i20];
    normV->data[emlrtDynamicBoundsCheckFastR2012b(i21, 1, i, &hb_emlrtBCI, sp) -
      1] = 1.0;
  }

  emxFree_int32_T(&r16);
  emxInit_real_T(sp, &b_V, 2, &pb_emlrtRTEI, true);
  st.site = &qc_emlrtRSI;
  b_repmat(&st, normV, X->size[0], r15);
  i20 = b_V->size[0] * b_V->size[1];
  b_V->size[0] = V->size[0];
  b_V->size[1] = V->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_V, i20, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  loop_ub = V->size[0] * V->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    b_V->data[i20] = V->data[i20];
  }

  st.site = &qc_emlrtRSI;
  rdivide(&st, b_V, r15, V);
  i20 = normV->size[0] * normV->size[1];
  normV->size[0] = 1;
  normV->size[1] = normV0->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)normV, i20, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  loop_ub = normV0->size[0] * normV0->size[1];
  emxFree_real_T(&b_V);
  for (i20 = 0; i20 < loop_ub; i20++) {
    normV->data[i20] = normV0->data[i20];
  }

  emxInit_real_T(sp, &b, 2, &pb_emlrtRTEI, true);
  b_cos(normV);
  st.site = &rc_emlrtRSI;
  diag(&st, normV, b);
  st.site = &rc_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  emxFree_real_T(&normV);
  if (!(X->size[1] == b->size[0])) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      y = NULL;
      m10 = emlrtCreateCharArray(2, iv42);
      for (i = 0; i < 45; i++) {
        cv44[i] = cv45[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv44);
      emlrtAssign(&y, m10);
      c_st.site = &jd_emlrtRSI;
      d_st.site = &ud_emlrtRSI;
      error(&c_st, b_message(&d_st, y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      b_y = NULL;
      m10 = emlrtCreateCharArray(2, iv43);
      for (i = 0; i < 21; i++) {
        cv46[i] = cv47[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m10, cv46);
      emlrtAssign(&b_y, m10);
      c_st.site = &kd_emlrtRSI;
      d_st.site = &vd_emlrtRSI;
      error(&c_st, b_message(&d_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((X->size[1] == 1) || (b->size[0] == 1)) {
    i20 = Y->size[0] * Y->size[1];
    Y->size[0] = X->size[0];
    Y->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)Y, i20, (int32_T)sizeof(real_T),
                      &pb_emlrtRTEI);
    loop_ub = X->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      i = b->size[1];
      for (i21 = 0; i21 < i; i21++) {
        Y->data[i20 + Y->size[0] * i21] = 0.0;
        b_Y = X->size[1];
        for (i22 = 0; i22 < b_Y; i22++) {
          Y->data[i20 + Y->size[0] * i21] += X->data[i20 + X->size[0] * i22] *
            b->data[i22 + b->size[0] * i21];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)X->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i20 = r15->size[0] * r15->size[1];
    r15->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r15, i20, (int32_T)sizeof(real_T),
                      &pb_emlrtRTEI);
    i20 = r15->size[0] * r15->size[1];
    r15->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r15, i20, (int32_T)sizeof(real_T),
                      &pb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i20 = 0; i20 < loop_ub; i20++) {
      r15->data[i20] = 0.0;
    }

    b_st.site = &db_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    i20 = Y->size[0] * Y->size[1];
    Y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)Y, i20, (int32_T)sizeof(real_T),
                      &pb_emlrtRTEI);
    i20 = Y->size[0] * Y->size[1];
    Y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)Y, i20, (int32_T)sizeof(real_T),
                      &pb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i20 = 0; i20 < loop_ub; i20++) {
      Y->data[i20] = 0.0;
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
  st.site = &rc_emlrtRSI;
  diag(&st, normV0, b);
  st.site = &rc_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  emxFree_real_T(&normV0);
  if (!(V->size[1] == b->size[0])) {
    if (((V->size[0] == 1) && (V->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      c_y = NULL;
      m10 = emlrtCreateCharArray(2, iv44);
      for (i = 0; i < 45; i++) {
        cv44[i] = cv45[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m10, cv44);
      emlrtAssign(&c_y, m10);
      c_st.site = &jd_emlrtRSI;
      d_st.site = &ud_emlrtRSI;
      error(&c_st, b_message(&d_st, c_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      d_y = NULL;
      m10 = emlrtCreateCharArray(2, iv45);
      for (i = 0; i < 21; i++) {
        cv46[i] = cv47[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m10, cv46);
      emlrtAssign(&d_y, m10);
      c_st.site = &kd_emlrtRSI;
      d_st.site = &vd_emlrtRSI;
      error(&c_st, b_message(&d_st, d_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &C, 2, &pb_emlrtRTEI, true);
  if ((V->size[1] == 1) || (b->size[0] == 1)) {
    i20 = C->size[0] * C->size[1];
    C->size[0] = V->size[0];
    C->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)C, i20, (int32_T)sizeof(real_T),
                      &pb_emlrtRTEI);
    loop_ub = V->size[0];
    for (i20 = 0; i20 < loop_ub; i20++) {
      i = b->size[1];
      for (i21 = 0; i21 < i; i21++) {
        C->data[i20 + C->size[0] * i21] = 0.0;
        b_Y = V->size[1];
        for (i22 = 0; i22 < b_Y; i22++) {
          C->data[i20 + C->size[0] * i21] += V->data[i20 + V->size[0] * i22] *
            b->data[i22 + b->size[0] * i21];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)V->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i20 = r15->size[0] * r15->size[1];
    r15->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r15, i20, (int32_T)sizeof(real_T),
                      &pb_emlrtRTEI);
    i20 = r15->size[0] * r15->size[1];
    r15->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r15, i20, (int32_T)sizeof(real_T),
                      &pb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i20 = 0; i20 < loop_ub; i20++) {
      r15->data[i20] = 0.0;
    }

    b_st.site = &db_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    i20 = C->size[0] * C->size[1];
    C->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i20, (int32_T)sizeof(real_T),
                      &pb_emlrtRTEI);
    i20 = C->size[0] * C->size[1];
    C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i20, (int32_T)sizeof(real_T),
                      &pb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i20 = 0; i20 < loop_ub; i20++) {
      C->data[i20] = 0.0;
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

  emxFree_real_T(&r15);
  emxFree_real_T(&b);
  for (i20 = 0; i20 < 2; i20++) {
    c_Y[i20] = Y->size[i20];
  }

  for (i20 = 0; i20 < 2; i20++) {
    b_C[i20] = C->size[i20];
  }

  emlrtSizeEqCheck2DFastR2012b(c_Y, b_C, &m_emlrtECI, sp);
  i20 = Y->size[0] * Y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Y, i20, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  i = Y->size[0];
  b_Y = Y->size[1];
  loop_ub = i * b_Y;
  for (i20 = 0; i20 < loop_ub; i20++) {
    Y->data[i20] += C->data[i20];
  }

  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (expmapPSR.c) */
