/*
 * logmapSRi.c
 *
 * Code generation for function 'logmapSRi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR.h"
#include "logmapSRi.h"
#include "power.h"
#include "optAPSR_emxutil.h"
#include "eml_error.h"
#include "gradientASR.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "rdivide.h"
#include "repmat.h"
#include "sqrt.h"
#include "sum.h"
#include "optAPSR_mexutil.h"
#include "optAPSR_data.h"

/* Variable Definitions */
static emlrtRSInfo p_emlrtRSI = { 11, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo q_emlrtRSI = { 12, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo r_emlrtRSI = { 13, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo s_emlrtRSI = { 14, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo t_emlrtRSI = { 15, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo u_emlrtRSI = { 16, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo v_emlrtRSI = { 17, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo w_emlrtRSI = { 18, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo lb_emlrtRSI = { 11, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo mb_emlrtRSI = { 26, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo nb_emlrtRSI = { 39, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo b_emlrtRTEI = { 14, 5, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo n_emlrtMCI = { 14, 5, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 1, 14, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 11, 1, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 12, 1, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRTEInfo hb_emlrtRTEI = { 13, 1, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRTEInfo nb_emlrtRTEI = { 17, 9, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtECInfo e_emlrtECI = { 2, 12, 5, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 14, 1, "normU", "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m", 0
};

static emlrtBCInfo p_emlrtBCI = { -1, -1, 16, 1, "temp", "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m", 0
};

static emlrtBCInfo q_emlrtBCI = { -1, -1, 17, 1, "temp", "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m", 0
};

static emlrtDCInfo emlrtDCI = { 17, 37, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4 };

static emlrtRSInfo jd_emlrtRSI = { 14, "eml_li_find",
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
  st.site = &lb_emlrtRSI;
  k = 0;
  b_st.site = &nb_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &n_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  if (k <= x->size[1]) {
  } else {
    emlrtAssertMATLABThread(sp, &b_emlrtRTEI);
    b_y = NULL;
    m5 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m5);
    st.site = &jd_emlrtRSI;
    error(&st, b_y, &n_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &emlrtDCI, sp);
  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &nb_emlrtRTEI);
  j = 0;
  st.site = &mb_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &n_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

void logmapSRi(const emlrtStack *sp, const emxArray_real_T *x, const
               emxArray_real_T *Y, emxArray_real_T *V)
{
  emxArray_real_T *normU;
  int32_T i10;
  int32_T loop_ub;
  const mxArray *y;
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *m3;
  char_T cv19[45];
  int32_T i;
  static const char_T cv20[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv18[2] = { 1, 21 };

  char_T cv21[21];
  static const char_T cv22[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *temp;
  emxArray_real_T *r7;
  int32_T i11;
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
  emxArray_real_T *a;
  emxArray_real_T *b;
  const mxArray *c_y;
  static const int32_T iv19[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv20[2] = { 1, 21 };

  emxArray_real_T *U;
  emxArray_real_T *r8;
  int32_T b_loop_ub;
  int32_T i12;
  uint32_T unnamed_idx_0;
  int32_T b_Y[2];
  int32_T b_U[2];
  emxArray_boolean_T *b_normU;
  emxArray_int32_T *r9;
  emxArray_real_T *c_U;
  emxArray_boolean_T *b_temp;
  emxArray_boolean_T *c_temp;
  const mxArray *e_y;
  static const int32_T iv21[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv22[2] = { 1, 21 };

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
  emxInit_real_T(sp, &normU, 2, &hb_emlrtRTEI, true);

  /*  compute the log map on sphere log_x(Y)  */
  /*  Input: */
  /*      x - d-by-1 vector */
  /*      Y - d-by-m matrix, each column an atom (d-by-1) */
  /*  Output: */
  /*      V - logmap of each column of Y at x (d-by-m matrix) */
  st.site = &p_emlrtRSI;
  i10 = normU->size[0] * normU->size[1];
  normU->size[0] = 1;
  normU->size[1] = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)normU, i10, (int32_T)sizeof(real_T),
                    &eb_emlrtRTEI);
  loop_ub = x->size[0];
  for (i10 = 0; i10 < loop_ub; i10++) {
    normU->data[normU->size[0] * i10] = x->data[i10];
  }

  b_st.site = &y_emlrtRSI;
  if (!(normU->size[1] == Y->size[0])) {
    if ((normU->size[1] == 1) || ((Y->size[0] == 1) && (Y->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &g_emlrtRTEI);
      y = NULL;
      m3 = emlrtCreateCharArray(2, iv17);
      for (i = 0; i < 45; i++) {
        cv19[i] = cv20[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv19);
      emlrtAssign(&y, m3);
      c_st.site = &cd_emlrtRSI;
      d_st.site = &nd_emlrtRSI;
      error(&c_st, b_message(&d_st, y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &h_emlrtRTEI);
      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv18);
      for (i = 0; i < 21; i++) {
        cv21[i] = cv22[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m3, cv21);
      emlrtAssign(&b_y, m3);
      c_st.site = &dd_emlrtRSI;
      d_st.site = &od_emlrtRSI;
      error(&c_st, b_message(&d_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &temp, 2, &fb_emlrtRTEI, true);
  emxInit_real_T(&st, &r7, 2, &eb_emlrtRTEI, true);
  if ((normU->size[1] == 1) || (Y->size[0] == 1)) {
    i10 = temp->size[0] * temp->size[1];
    temp->size[0] = 1;
    temp->size[1] = Y->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp, i10, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    loop_ub = Y->size[1];
    for (i10 = 0; i10 < loop_ub; i10++) {
      temp->data[temp->size[0] * i10] = 0.0;
      i = normU->size[1];
      for (i11 = 0; i11 < i; i11++) {
        temp->data[temp->size[0] * i10] += normU->data[normU->size[0] * i11] *
          Y->data[i11 + Y->size[0] * i10];
      }
    }
  } else {
    unnamed_idx_1 = (uint32_T)Y->size[1];
    i10 = r7->size[0] * r7->size[1];
    r7->size[0] = 1;
    emxEnsureCapacity(&st, (emxArray__common *)r7, i10, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    i10 = r7->size[0] * r7->size[1];
    r7->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r7, i10, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_1;
    for (i10 = 0; i10 < loop_ub; i10++) {
      r7->data[i10] = 0.0;
    }

    b_st.site = &x_emlrtRSI;
    c_st.site = &ab_emlrtRSI;
    i10 = temp->size[0] * temp->size[1];
    temp->size[0] = 1;
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i10, (int32_T)sizeof
                      (real_T), &eb_emlrtRTEI);
    i10 = temp->size[0] * temp->size[1];
    temp->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i10, (int32_T)sizeof
                      (real_T), &eb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_1;
    for (i10 = 0; i10 < loop_ub; i10++) {
      temp->data[i10] = 0.0;
    }

    if ((Y->size[1] < 1) || (normU->size[1] < 1)) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(1);
      n_t = (ptrdiff_t)(Y->size[1]);
      k_t = (ptrdiff_t)(normU->size[1]);
      lda_t = (ptrdiff_t)(1);
      ldb_t = (ptrdiff_t)(normU->size[1]);
      ldc_t = (ptrdiff_t)(1);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&normU->data[0]);
      Bib0_t = (double *)(&Y->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&temp->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxInit_real_T(&st, &a, 2, &eb_emlrtRTEI, true);
  emxInit_real_T(&st, &b, 2, &eb_emlrtRTEI, true);

  /* 1-by-m */
  st.site = &q_emlrtRSI;
  repmat(&st, x, Y->size[1], a);
  st.site = &q_emlrtRSI;
  diag(&st, temp, b);
  st.site = &q_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  if (!(a->size[1] == b->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &g_emlrtRTEI);
      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv19);
      for (i = 0; i < 45; i++) {
        cv19[i] = cv20[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv19);
      emlrtAssign(&c_y, m3);
      c_st.site = &cd_emlrtRSI;
      d_st.site = &nd_emlrtRSI;
      error(&c_st, b_message(&d_st, c_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &h_emlrtRTEI);
      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv20);
      for (i = 0; i < 21; i++) {
        cv21[i] = cv22[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m3, cv21);
      emlrtAssign(&d_y, m3);
      c_st.site = &dd_emlrtRSI;
      d_st.site = &od_emlrtRSI;
      error(&c_st, b_message(&d_st, d_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &U, 2, &gb_emlrtRTEI, true);
  emxInit_real_T(&st, &r8, 2, &eb_emlrtRTEI, true);
  if ((a->size[1] == 1) || (b->size[0] == 1)) {
    i10 = U->size[0] * U->size[1];
    U->size[0] = a->size[0];
    U->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)U, i10, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    loop_ub = a->size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      i = b->size[1];
      for (i11 = 0; i11 < i; i11++) {
        U->data[i10 + U->size[0] * i11] = 0.0;
        b_loop_ub = a->size[1];
        for (i12 = 0; i12 < b_loop_ub; i12++) {
          U->data[i10 + U->size[0] * i11] += a->data[i10 + a->size[0] * i12] *
            b->data[i12 + b->size[0] * i11];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i10 = r8->size[0] * r8->size[1];
    r8->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r8, i10, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    i10 = r8->size[0] * r8->size[1];
    r8->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r8, i10, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i10 = 0; i10 < loop_ub; i10++) {
      r8->data[i10] = 0.0;
    }

    b_st.site = &x_emlrtRSI;
    c_st.site = &ab_emlrtRSI;
    i10 = U->size[0] * U->size[1];
    U->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)U, i10, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    i10 = U->size[0] * U->size[1];
    U->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)U, i10, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i10 = 0; i10 < loop_ub; i10++) {
      U->data[i10] = 0.0;
    }

    if ((a->size[0] < 1) || (b->size[1] < 1) || (a->size[1] < 1)) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(a->size[0]);
      n_t = (ptrdiff_t)(b->size[1]);
      k_t = (ptrdiff_t)(a->size[1]);
      lda_t = (ptrdiff_t)(a->size[0]);
      ldb_t = (ptrdiff_t)(a->size[1]);
      ldc_t = (ptrdiff_t)(a->size[0]);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&a->data[0]);
      Bib0_t = (double *)(&b->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&U->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&a);
  for (i10 = 0; i10 < 2; i10++) {
    b_Y[i10] = Y->size[i10];
  }

  for (i10 = 0; i10 < 2; i10++) {
    b_U[i10] = U->size[i10];
  }

  emlrtSizeEqCheck2DFastR2012b(b_Y, b_U, &e_emlrtECI, sp);
  i10 = U->size[0] * U->size[1];
  U->size[0] = Y->size[0];
  U->size[1] = Y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)U, i10, (int32_T)sizeof(real_T),
                    &eb_emlrtRTEI);
  loop_ub = Y->size[0] * Y->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    U->data[i10] = Y->data[i10] - U->data[i10];
  }

  emxInit_boolean_T(sp, &b_normU, 2, &eb_emlrtRTEI, true);

  /*  d-ny-m */
  power(sp, U, r8);
  st.site = &r_emlrtRSI;
  sum(&st, r8, normU);
  st.site = &r_emlrtRSI;
  b_sqrt(&st, normU);

  /* 1-by-m */
  i10 = b_normU->size[0] * b_normU->size[1];
  b_normU->size[0] = 1;
  b_normU->size[1] = normU->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_normU, i10, (int32_T)sizeof
                    (boolean_T), &eb_emlrtRTEI);
  loop_ub = normU->size[0] * normU->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    b_normU->data[i10] = (normU->data[i10] == 0.0);
  }

  b_emxInit_int32_T(sp, &r9, 2, &eb_emlrtRTEI, true);
  st.site = &s_emlrtRSI;
  eml_li_find(&st, b_normU, r9);
  i = normU->size[1];
  loop_ub = r9->size[0] * r9->size[1];
  emxFree_boolean_T(&b_normU);
  for (i10 = 0; i10 < loop_ub; i10++) {
    i11 = r9->data[i10];
    normU->data[emlrtDynamicBoundsCheckFastR2012b(i11, 1, i, &o_emlrtBCI, sp) -
      1] = 1.0;
  }

  emxInit_real_T(sp, &c_U, 2, &eb_emlrtRTEI, true);
  st.site = &t_emlrtRSI;
  b_repmat(&st, normU, Y->size[0], r8);
  i10 = c_U->size[0] * c_U->size[1];
  c_U->size[0] = U->size[0];
  c_U->size[1] = U->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_U, i10, (int32_T)sizeof(real_T),
                    &eb_emlrtRTEI);
  loop_ub = U->size[0] * U->size[1];
  emxFree_real_T(&normU);
  for (i10 = 0; i10 < loop_ub; i10++) {
    c_U->data[i10] = U->data[i10];
  }

  emxInit_boolean_T(sp, &b_temp, 2, &eb_emlrtRTEI, true);
  st.site = &t_emlrtRSI;
  rdivide(&st, c_U, r8, U);
  i10 = b_temp->size[0] * b_temp->size[1];
  b_temp->size[0] = 1;
  b_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_temp, i10, (int32_T)sizeof
                    (boolean_T), &eb_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  emxFree_real_T(&c_U);
  for (i10 = 0; i10 < loop_ub; i10++) {
    b_temp->data[i10] = (temp->data[i10] > 1.0);
  }

  st.site = &u_emlrtRSI;
  eml_li_find(&st, b_temp, r9);
  i = temp->size[1];
  loop_ub = r9->size[0] * r9->size[1];
  emxFree_boolean_T(&b_temp);
  for (i10 = 0; i10 < loop_ub; i10++) {
    i11 = r9->data[i10];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i11, 1, i, &p_emlrtBCI, sp) - 1]
      = 1.0;
  }

  emxInit_boolean_T(sp, &c_temp, 2, &eb_emlrtRTEI, true);
  i10 = c_temp->size[0] * c_temp->size[1];
  c_temp->size[0] = 1;
  c_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_temp, i10, (int32_T)sizeof
                    (boolean_T), &eb_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    c_temp->data[i10] = (temp->data[i10] < -1.0);
  }

  st.site = &v_emlrtRSI;
  eml_li_find(&st, c_temp, r9);
  i = temp->size[1];
  loop_ub = r9->size[0] * r9->size[1];
  emxFree_boolean_T(&c_temp);
  for (i10 = 0; i10 < loop_ub; i10++) {
    i11 = r9->data[i10];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i11, 1, i, &q_emlrtBCI, sp) - 1]
      = -1.0;
  }

  emxFree_int32_T(&r9);
  st.site = &w_emlrtRSI;
  i10 = r7->size[0] * r7->size[1];
  r7->size[0] = 1;
  r7->size[1] = temp->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)r7, i10, (int32_T)sizeof(real_T),
                    &eb_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i10 = 0; i10 < loop_ub; i10++) {
    r7->data[i10] = temp->data[i10];
  }

  for (i = 0; i < temp->size[1]; i++) {
    if ((temp->data[i] < -1.0) || (1.0 < temp->data[i])) {
      b_st.site = &qb_emlrtRSI;
      b_eml_error(&b_st);
    }
  }

  for (i = 0; i < temp->size[1]; i++) {
    r7->data[i] = muDoubleScalarAcos(r7->data[i]);
  }

  emxFree_real_T(&temp);
  st.site = &w_emlrtRSI;
  diag(&st, r7, b);
  st.site = &w_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  emxFree_real_T(&r7);
  if (!(U->size[1] == b->size[0])) {
    if (((U->size[0] == 1) && (U->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &g_emlrtRTEI);
      e_y = NULL;
      m3 = emlrtCreateCharArray(2, iv21);
      for (i = 0; i < 45; i++) {
        cv19[i] = cv20[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv19);
      emlrtAssign(&e_y, m3);
      c_st.site = &cd_emlrtRSI;
      d_st.site = &nd_emlrtRSI;
      error(&c_st, b_message(&d_st, e_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &h_emlrtRTEI);
      f_y = NULL;
      m3 = emlrtCreateCharArray(2, iv22);
      for (i = 0; i < 21; i++) {
        cv21[i] = cv22[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m3, cv21);
      emlrtAssign(&f_y, m3);
      c_st.site = &dd_emlrtRSI;
      d_st.site = &od_emlrtRSI;
      error(&c_st, b_message(&d_st, f_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((U->size[1] == 1) || (b->size[0] == 1)) {
    i10 = V->size[0] * V->size[1];
    V->size[0] = U->size[0];
    V->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)V, i10, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    loop_ub = U->size[0];
    for (i10 = 0; i10 < loop_ub; i10++) {
      i = b->size[1];
      for (i11 = 0; i11 < i; i11++) {
        V->data[i10 + V->size[0] * i11] = 0.0;
        b_loop_ub = U->size[1];
        for (i12 = 0; i12 < b_loop_ub; i12++) {
          V->data[i10 + V->size[0] * i11] += U->data[i10 + U->size[0] * i12] *
            b->data[i12 + b->size[0] * i11];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)U->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i10 = r8->size[0] * r8->size[1];
    r8->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r8, i10, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    i10 = r8->size[0] * r8->size[1];
    r8->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r8, i10, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i10 = 0; i10 < loop_ub; i10++) {
      r8->data[i10] = 0.0;
    }

    b_st.site = &x_emlrtRSI;
    c_st.site = &ab_emlrtRSI;
    i10 = V->size[0] * V->size[1];
    V->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)V, i10, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    i10 = V->size[0] * V->size[1];
    V->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)V, i10, (int32_T)sizeof(real_T),
                      &eb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i10 = 0; i10 < loop_ub; i10++) {
      V->data[i10] = 0.0;
    }

    if ((U->size[0] < 1) || (b->size[1] < 1) || (U->size[1] < 1)) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(U->size[0]);
      n_t = (ptrdiff_t)(b->size[1]);
      k_t = (ptrdiff_t)(U->size[1]);
      lda_t = (ptrdiff_t)(U->size[0]);
      ldb_t = (ptrdiff_t)(U->size[1]);
      ldc_t = (ptrdiff_t)(U->size[0]);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&U->data[0]);
      Bib0_t = (double *)(&b->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&V->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&r8);
  emxFree_real_T(&b);
  emxFree_real_T(&U);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (logmapSRi.c) */
