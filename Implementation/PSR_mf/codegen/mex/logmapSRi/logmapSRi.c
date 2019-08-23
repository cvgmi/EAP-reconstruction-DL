/*
 * logmapSRi.c
 *
 * Code generation for function 'logmapSRi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "logmapSRi.h"
#include "logmapSRi_emxutil.h"
#include "power.h"
#include "eml_error.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "repmat.h"
#include "logmapSRi_mexutil.h"
#include "logmapSRi_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 11, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo b_emlrtRSI = { 12, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo c_emlrtRSI = { 13, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo d_emlrtRSI = { 15, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo e_emlrtRSI = { 16, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo f_emlrtRSI = { 17, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo g_emlrtRSI = { 18, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo h_emlrtRSI = { 68, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo i_emlrtRSI = { 21, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo j_emlrtRSI = { 54, "eml_xgemm",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m" };

static emlrtRSInfo k_emlrtRSI = { 1, "xgemm",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/+blas/xgemm.p" };

static emlrtRSInfo r_emlrtRSI = { 13, "sum",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo s_emlrtRSI = { 46, "sumprod",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/private/sumprod.m" };

static emlrtRSInfo t_emlrtRSI = { 36, "combine_vector_elements",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRSInfo u_emlrtRSI = { 14, "sqrt",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elfun/sqrt.m" };

static emlrtRSInfo v_emlrtRSI = { 11, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo w_emlrtRSI = { 26, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo x_emlrtRSI = { 39, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo y_emlrtRSI = { 15, "acos",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elfun/acos.m" };

static emlrtMCInfo emlrtMCI = { 99, 13, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtMCInfo b_emlrtMCI = { 98, 23, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtMCInfo c_emlrtMCI = { 104, 13, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtMCInfo d_emlrtMCI = { 103, 23, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtMCInfo l_emlrtMCI = { 14, 5, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtMCInfo m_emlrtMCI = { 13, 15, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtMCInfo n_emlrtMCI = { 14, 5, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 14, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRTEInfo b_emlrtRTEI = { 11, 1, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRTEInfo g_emlrtRTEI = { 20, 9, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtECInfo emlrtECI = { 2, 12, 5, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 16, 1, "temp", "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m", 0
};

static emlrtBCInfo b_emlrtBCI = { -1, -1, 17, 1, "temp", "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m", 0
};

static emlrtDCInfo emlrtDCI = { 20, 34, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4 };

static emlrtRSInfo ab_emlrtRSI = { 14, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo fb_emlrtRSI = { 98, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo gb_emlrtRSI = { 103, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo hb_emlrtRSI = { 13, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo jb_emlrtRSI = { 99, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo kb_emlrtRSI = { 104, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo lb_emlrtRSI = { 14, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

/* Function Declarations */
static void b_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);
static void eml_li_find(boolean_T x, int32_T y_data[], int32_T y_size[2]);

/* Function Definitions */
static void b_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y)
{
  int32_T n;
  int32_T k;
  boolean_T b4;
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
  n = x->size[0] * x->size[1];
  st.site = &v_emlrtRSI;
  k = 0;
  b_st.site = &x_emlrtRSI;
  if (1 > n) {
    b4 = false;
  } else {
    b4 = (n > 2147483646);
  }

  if (b4) {
    c_st.site = &l_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  if (k <= n) {
  } else {
    b_y = NULL;
    m4 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m4);
    st.site = &ab_emlrtRSI;
    error(&st, b_y, &n_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &emlrtDCI, sp);
  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &g_emlrtRTEI);
  j = 0;
  st.site = &w_emlrtRSI;
  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

static void eml_li_find(boolean_T x, int32_T y_data[], int32_T y_size[2])
{
  int32_T k;
  k = 0;
  if (x) {
    k = 1;
  }

  y_size[0] = 1;
  y_size[1] = k;
  if (x) {
    y_data[0] = 1;
  }
}

void logmapSRi(const emlrtStack *sp, const emxArray_real_T *x, const
               emxArray_real_T *Y, emxArray_real_T *V)
{
  emxArray_real_T *a;
  int32_T d;
  int32_T i0;
  int32_T loop_ub;
  int32_T i;
  int32_T i1;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv0[45];
  static const char_T cv1[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 21 };

  char_T cv2[21];
  static const char_T cv3[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *temp;
  emxArray_real_T *r0;
  int32_T b_temp;
  int32_T i2;
  uint32_T varargin_1[2];
  real_T normU;
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
  emxArray_real_T *b;
  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 21 };

  int32_T b_Y[2];
  int32_T b_V[2];
  boolean_T overflow;
  real_T dv0[1];
  int32_T tmp_data[1];
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T exitg1;
  const mxArray *e_y;
  static const int32_T iv4[2] = { 1, 15 };

  char_T cv4[15];
  static const char_T cv5[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  emxArray_boolean_T *c_temp;
  emxArray_int32_T *r1;
  emxArray_boolean_T *d_temp;
  const mxArray *f_y;
  static const int32_T iv5[2] = { 1, 45 };

  const mxArray *g_y;
  static const int32_T iv6[2] = { 1, 21 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &st;
  g_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &emlrtRTEI, true);

  /*  compute the log map on sphere log_x(Y)  */
  /*  Input: */
  /*      x - d-by-1 vector */
  /*      Y - d-by-m matrix, each column an atom (d-by-1) */
  /*  Output: */
  /*      V - logmap of each column of Y at x (d-by-m matrix) */
  d = Y->size[0];
  st.site = &emlrtRSI;
  i0 = a->size[0] * a->size[1];
  a->size[0] = x->size[1];
  a->size[1] = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = x->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    i = x->size[1];
    for (i1 = 0; i1 < i; i1++) {
      a->data[i1 + a->size[0] * i0] = x->data[i0 + x->size[0] * i1];
    }
  }

  b_st.site = &i_emlrtRSI;
  if (!(a->size[1] == Y->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((Y->size[0] == 1) &&
         (Y->size[1] == 1))) {
      y = NULL;
      m0 = emlrtCreateCharArray(2, iv0);
      for (i = 0; i < 45; i++) {
        cv0[i] = cv1[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
      emlrtAssign(&y, m0);
      c_st.site = &fb_emlrtRSI;
      d_st.site = &jb_emlrtRSI;
      error(&c_st, message(&d_st, y, &emlrtMCI), &b_emlrtMCI);
    } else {
      b_y = NULL;
      m0 = emlrtCreateCharArray(2, iv1);
      for (i = 0; i < 21; i++) {
        cv2[i] = cv3[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
      emlrtAssign(&b_y, m0);
      c_st.site = &gb_emlrtRSI;
      d_st.site = &kb_emlrtRSI;
      error(&c_st, message(&d_st, b_y, &c_emlrtMCI), &d_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &temp, 2, &b_emlrtRTEI, true);
  emxInit_real_T(&st, &r0, 2, &emlrtRTEI, true);
  if ((a->size[1] == 1) || (Y->size[0] == 1)) {
    i0 = temp->size[0] * temp->size[1];
    temp->size[0] = a->size[0];
    temp->size[1] = Y->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = a->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      i = Y->size[1];
      for (i1 = 0; i1 < i; i1++) {
        temp->data[i0 + temp->size[0] * i1] = 0.0;
        b_temp = a->size[1];
        for (i2 = 0; i2 < b_temp; i2++) {
          temp->data[i0 + temp->size[0] * i1] += a->data[i0 + a->size[0] * i2] *
            Y->data[i2 + Y->size[0] * i1];
        }
      }
    }
  } else {
    varargin_1[0] = (uint32_T)a->size[0];
    varargin_1[1] = (uint32_T)Y->size[1];
    i0 = r0->size[0] * r0->size[1];
    r0->size[0] = (int32_T)varargin_1[0];
    emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    i0 = r0->size[0] * r0->size[1];
    r0->size[1] = (int32_T)varargin_1[1];
    emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      r0->data[i0] = 0.0;
    }

    b_st.site = &h_emlrtRSI;
    c_st.site = &j_emlrtRSI;
    i0 = temp->size[0] * temp->size[1];
    temp->size[0] = (int32_T)varargin_1[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    i0 = temp->size[0] * temp->size[1];
    temp->size[1] = (int32_T)varargin_1[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      temp->data[i0] = 0.0;
    }

    if ((a->size[0] < 1) || (Y->size[1] < 1) || (a->size[1] < 1)) {
    } else {
      e_st.site = &k_emlrtRSI;
      normU = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(a->size[0]);
      n_t = (ptrdiff_t)(Y->size[1]);
      k_t = (ptrdiff_t)(a->size[1]);
      lda_t = (ptrdiff_t)(a->size[0]);
      ldb_t = (ptrdiff_t)(a->size[1]);
      ldc_t = (ptrdiff_t)(a->size[0]);
      alpha1_t = (double *)(&normU);
      Aia0_t = (double *)(&a->data[0]);
      Bib0_t = (double *)(&Y->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&temp->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&r0);
  b_emxInit_real_T(&st, &b, 1, &emlrtRTEI, true);

  /* 1-by-m */
  st.site = &b_emlrtRSI;
  repmat(&st, x, Y->size[1], a);
  st.site = &b_emlrtRSI;
  diag(&st, temp, b);
  st.site = &b_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  if (!(a->size[1] == b->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || (b->size[0] == 1)) {
      c_y = NULL;
      m0 = emlrtCreateCharArray(2, iv2);
      for (i = 0; i < 45; i++) {
        cv0[i] = cv1[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
      emlrtAssign(&c_y, m0);
      c_st.site = &fb_emlrtRSI;
      d_st.site = &jb_emlrtRSI;
      error(&c_st, message(&d_st, c_y, &emlrtMCI), &b_emlrtMCI);
    } else {
      d_y = NULL;
      m0 = emlrtCreateCharArray(2, iv3);
      for (i = 0; i < 21; i++) {
        cv2[i] = cv3[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
      emlrtAssign(&d_y, m0);
      c_st.site = &gb_emlrtRSI;
      d_st.site = &kb_emlrtRSI;
      error(&c_st, message(&d_st, d_y, &c_emlrtMCI), &d_emlrtMCI);
    }
  }

  if ((a->size[1] == 1) || (b->size[0] == 1)) {
    i0 = V->size[0];
    V->size[0] = a->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)V, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = a->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      V->data[i0] = 0.0;
      i = a->size[1];
      for (i1 = 0; i1 < i; i1++) {
        V->data[i0] += a->data[i0 + a->size[0] * i1] * b->data[i1];
      }
    }
  } else {
    varargin_1[0] = (uint32_T)a->size[0];
    b_st.site = &h_emlrtRSI;
    c_st.site = &j_emlrtRSI;
    i0 = V->size[0];
    V->size[0] = (int32_T)varargin_1[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)V, i0, (int32_T)sizeof(real_T),
                      &emlrtRTEI);
    loop_ub = (int32_T)varargin_1[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      V->data[i0] = 0.0;
    }

    if ((a->size[0] < 1) || (a->size[1] < 1)) {
    } else {
      e_st.site = &k_emlrtRSI;
      normU = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(a->size[0]);
      n_t = (ptrdiff_t)(1);
      k_t = (ptrdiff_t)(a->size[1]);
      lda_t = (ptrdiff_t)(a->size[0]);
      ldb_t = (ptrdiff_t)(a->size[1]);
      ldc_t = (ptrdiff_t)(a->size[0]);
      alpha1_t = (double *)(&normU);
      Aia0_t = (double *)(&a->data[0]);
      Bib0_t = (double *)(&b->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&V->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxFree_real_T(&a);
  for (i0 = 0; i0 < 2; i0++) {
    b_Y[i0] = Y->size[i0];
  }

  b_V[0] = V->size[0];
  b_V[1] = 1;
  emlrtSizeEqCheck2DFastR2012b(b_Y, b_V, &emlrtECI, sp);
  i0 = V->size[0];
  V->size[0] = Y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)V, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = Y->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    V->data[i0] = Y->data[i0] - V->data[i0];
  }

  /*  d-ny-m */
  power(sp, V, b);
  st.site = &c_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  if (b->size[0] == 0) {
    normU = 0.0;
  } else {
    normU = b->data[0];
    e_st.site = &t_emlrtRSI;
    if (2 > b->size[0]) {
      overflow = false;
    } else {
      overflow = (b->size[0] > 2147483646);
    }

    if (overflow) {
      f_st.site = &l_emlrtRSI;
      check_forloop_overflow_error(&f_st);
    }

    for (i = 2; i <= b->size[0]; i++) {
      normU += b->data[i - 1];
    }
  }

  st.site = &c_emlrtRSI;
  if (normU < 0.0) {
    b_st.site = &u_emlrtRSI;
    eml_error(&b_st);
  }

  normU = muDoubleScalarSqrt(normU);

  /* 1-by-m */
  dv0[0] = normU;
  eml_li_find(normU == 0.0, tmp_data, b_Y);
  loop_ub = b_Y[0] * b_Y[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    dv0[tmp_data[i0] - 1] = 1.0;
  }

  st.site = &d_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  st.site = &d_emlrtRSI;
  varargin_1[0] = (uint32_T)V->size[0];
  varargin_1[1] = 1U;
  varargin_2[0] = (uint32_T)d;
  varargin_2[1] = 1U;
  overflow = false;
  p = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 2)) {
    if (!(varargin_1[i] == varargin_2[i])) {
      p = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  if (!p) {
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    e_y = NULL;
    m0 = emlrtCreateCharArray(2, iv4);
    for (i = 0; i < 15; i++) {
      cv4[i] = cv5[i];
    }

    emlrtInitCharArrayR2013a(&st, 15, m0, cv4);
    emlrtAssign(&e_y, m0);
    b_st.site = &hb_emlrtRSI;
    g_st.site = &lb_emlrtRSI;
    error(&b_st, message(&g_st, e_y, &l_emlrtMCI), &m_emlrtMCI);
  }

  i0 = V->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)V, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = V->size[0];
  for (i0 = 0; i0 < loop_ub; i0++) {
    V->data[i0] /= dv0[0];
  }

  emxInit_boolean_T(&st, &c_temp, 2, &emlrtRTEI, true);
  i0 = c_temp->size[0] * c_temp->size[1];
  c_temp->size[0] = temp->size[0];
  c_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_temp, i0, (int32_T)sizeof
                    (boolean_T), &emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    c_temp->data[i0] = (temp->data[i0] > 1.0);
  }

  emxInit_int32_T(sp, &r1, 1, &emlrtRTEI, true);
  st.site = &e_emlrtRSI;
  b_eml_li_find(&st, c_temp, r1);
  i = temp->size[0];
  b_temp = temp->size[1];
  loop_ub = r1->size[0];
  emxFree_boolean_T(&c_temp);
  for (i0 = 0; i0 < loop_ub; i0++) {
    i1 = i * b_temp;
    i2 = r1->data[i0];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &emlrtBCI, sp) - 1] =
      1.0;
  }

  emxInit_boolean_T(sp, &d_temp, 2, &emlrtRTEI, true);
  i0 = d_temp->size[0] * d_temp->size[1];
  d_temp->size[0] = temp->size[0];
  d_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_temp, i0, (int32_T)sizeof
                    (boolean_T), &emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    d_temp->data[i0] = (temp->data[i0] < -1.0);
  }

  st.site = &f_emlrtRSI;
  b_eml_li_find(&st, d_temp, r1);
  i = temp->size[0];
  b_temp = temp->size[1];
  loop_ub = r1->size[0];
  emxFree_boolean_T(&d_temp);
  for (i0 = 0; i0 < loop_ub; i0++) {
    i1 = i * b_temp;
    i2 = r1->data[i0];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &b_emlrtBCI, sp) - 1]
      = -1.0;
  }

  emxFree_int32_T(&r1);
  st.site = &g_emlrtRSI;
  i0 = temp->size[0] * temp->size[1];
  for (i = 0; i < i0; i++) {
    if ((temp->data[i] < -1.0) || (1.0 < temp->data[i])) {
      b_st.site = &y_emlrtRSI;
      b_eml_error(&b_st);
    }
  }

  i0 = temp->size[0] * temp->size[1];
  for (i = 0; i < i0; i++) {
    temp->data[i] = muDoubleScalarAcos(temp->data[i]);
  }

  st.site = &g_emlrtRSI;
  diag(&st, temp, b);
  st.site = &g_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  emxFree_real_T(&temp);
  if (!(1 == b->size[0])) {
    if ((V->size[0] == 1) || (b->size[0] == 1)) {
      f_y = NULL;
      m0 = emlrtCreateCharArray(2, iv5);
      for (i = 0; i < 45; i++) {
        cv0[i] = cv1[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
      emlrtAssign(&f_y, m0);
      c_st.site = &fb_emlrtRSI;
      d_st.site = &jb_emlrtRSI;
      error(&c_st, message(&d_st, f_y, &emlrtMCI), &b_emlrtMCI);
    } else {
      g_y = NULL;
      m0 = emlrtCreateCharArray(2, iv6);
      for (i = 0; i < 21; i++) {
        cv2[i] = cv3[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
      emlrtAssign(&g_y, m0);
      c_st.site = &gb_emlrtRSI;
      d_st.site = &kb_emlrtRSI;
      error(&c_st, message(&d_st, g_y, &c_emlrtMCI), &d_emlrtMCI);
    }
  }

  normU = b->data[0];
  i0 = V->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)V, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  loop_ub = V->size[0];
  emxFree_real_T(&b);
  for (i0 = 0; i0 < loop_ub; i0++) {
    V->data[i0] *= normU;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (logmapSRi.c) */
