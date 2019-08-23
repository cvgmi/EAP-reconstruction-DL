/*
 * logmapSRi.c
 *
 * Code generation for function 'logmapSRi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "objSR.h"
#include "logmapSRi.h"
#include "objSR_emxutil.h"
#include "power.h"
#include "eml_error.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "repmat.h"
#include "sum.h"
#include "objSR_mexutil.h"
#include "objSR_data.h"

/* Variable Definitions */
static emlrtRSInfo d_emlrtRSI = { 11, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo e_emlrtRSI = { 12, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo f_emlrtRSI = { 13, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo g_emlrtRSI = { 14, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo h_emlrtRSI = { 15, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo i_emlrtRSI = { 16, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo j_emlrtRSI = { 17, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo k_emlrtRSI = { 18, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo y_emlrtRSI = { 14, "sqrt",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elfun/sqrt.m" };

static emlrtRSInfo ab_emlrtRSI = { 11, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo bb_emlrtRSI = { 26, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo cb_emlrtRSI = { 39, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo fb_emlrtRSI = { 15, "acos",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elfun/acos.m" };

static emlrtRTEInfo f_emlrtRTEI = { 14, 5, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo h_emlrtRTEI = { 14, 5, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtMCInfo j_emlrtMCI = { 14, 5, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo m_emlrtMCI = { 14, 5, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtMCInfo n_emlrtMCI = { 13, 15, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRTEInfo l_emlrtRTEI = { 1, 14, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 11, 1, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRTEInfo n_emlrtRTEI = { 12, 1, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 13, 1, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRTEInfo u_emlrtRTEI = { 17, 9, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtECInfo b_emlrtECI = { 2, 12, 5, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtBCInfo d_emlrtBCI = { -1, -1, 14, 1, "normU", "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 16, 1, "temp", "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 17, 1, "temp", "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m",
  0 };

static emlrtDCInfo emlrtDCI = { 17, 37, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4 };

static emlrtRSInfo jb_emlrtRSI = { 14, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo nb_emlrtRSI = { 13, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo sb_emlrtRSI = { 14, "rdivide",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/rdivide.m" };

/* Function Declarations */
static void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);

/* Function Definitions */
static void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
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
  st.site = &ab_emlrtRSI;
  k = 0;
  b_st.site = &cb_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &p_emlrtRSI;
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
    st.site = &jb_emlrtRSI;
    error(&st, b_y, &j_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &emlrtDCI, sp);
  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &u_emlrtRTEI);
  j = 0;
  st.site = &bb_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &p_emlrtRSI;
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
  emxArray_real_T *a;
  int32_T i5;
  int32_T loop_ub;
  const mxArray *y;
  static const int32_T iv6[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv8[45];
  int32_T i;
  static const char_T cv9[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv7[2] = { 1, 21 };

  char_T cv10[21];
  static const char_T cv11[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *temp;
  emxArray_real_T *normU;
  int32_T i6;
  uint32_T varargin_1[2];
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
  emxArray_real_T *b_a;
  emxArray_real_T *b;
  const mxArray *c_y;
  static const int32_T iv8[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv9[2] = { 1, 21 };

  emxArray_real_T *U;
  emxArray_real_T *r2;
  int32_T b_U;
  int32_T i7;
  int32_T b_Y[2];
  int32_T c_U[2];
  emxArray_boolean_T *b_normU;
  emxArray_int32_T *r3;
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T b_p;
  boolean_T exitg1;
  const mxArray *e_y;
  static const int32_T iv10[2] = { 1, 15 };

  char_T cv12[15];
  static const char_T cv13[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  emxArray_boolean_T *b_temp;
  emxArray_boolean_T *c_temp;
  const mxArray *f_y;
  static const int32_T iv11[2] = { 1, 45 };

  const mxArray *g_y;
  static const int32_T iv12[2] = { 1, 21 };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &st;
  e_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &a, 2, &l_emlrtRTEI, true);

  /*  compute the log map on sphere at x for each column in Y log_x(Y)  */
  /*  Input: */
  /*      x - d-by-1 vector */
  /*      Y - d-by-m matrix, each column an atom (d-by-1) */
  /*  Output: */
  /*      V - logmap of each column of Y at x (d-by-m matrix) */
  st.site = &d_emlrtRSI;
  i5 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)a, i5, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = x->size[0];
  for (i5 = 0; i5 < loop_ub; i5++) {
    a->data[a->size[0] * i5] = x->data[i5];
  }

  b_st.site = &m_emlrtRSI;
  if (!(a->size[1] == Y->size[0])) {
    if ((a->size[1] == 1) || ((Y->size[0] == 1) && (Y->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      y = NULL;
      m2 = emlrtCreateCharArray(2, iv6);
      for (i = 0; i < 45; i++) {
        cv8[i] = cv9[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv8);
      emlrtAssign(&y, m2);
      c_st.site = &lb_emlrtRSI;
      d_st.site = &qb_emlrtRSI;
      error(&c_st, message(&d_st, y, &emlrtMCI), &b_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv7);
      for (i = 0; i < 21; i++) {
        cv10[i] = cv11[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m2, cv10);
      emlrtAssign(&b_y, m2);
      c_st.site = &mb_emlrtRSI;
      d_st.site = &rb_emlrtRSI;
      error(&c_st, message(&d_st, b_y, &c_emlrtMCI), &d_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &temp, 2, &m_emlrtRTEI, true);
  emxInit_real_T(&st, &normU, 2, &o_emlrtRTEI, true);
  if ((a->size[1] == 1) || (Y->size[0] == 1)) {
    i5 = temp->size[0] * temp->size[1];
    temp->size[0] = 1;
    temp->size[1] = Y->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp, i5, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = Y->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      temp->data[temp->size[0] * i5] = 0.0;
      i = a->size[1];
      for (i6 = 0; i6 < i; i6++) {
        temp->data[temp->size[0] * i5] += a->data[a->size[0] * i6] * Y->data[i6
          + Y->size[0] * i5];
      }
    }
  } else {
    varargin_1[1] = (uint32_T)Y->size[1];
    i5 = normU->size[0] * normU->size[1];
    normU->size[0] = 1;
    emxEnsureCapacity(&st, (emxArray__common *)normU, i5, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i5 = normU->size[0] * normU->size[1];
    normU->size[1] = (int32_T)varargin_1[1];
    emxEnsureCapacity(&st, (emxArray__common *)normU, i5, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = (int32_T)varargin_1[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      normU->data[i5] = 0.0;
    }

    b_st.site = &l_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    i5 = temp->size[0] * temp->size[1];
    temp->size[0] = 1;
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i5, (int32_T)sizeof
                      (real_T), &l_emlrtRTEI);
    i5 = temp->size[0] * temp->size[1];
    temp->size[1] = (int32_T)varargin_1[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i5, (int32_T)sizeof
                      (real_T), &l_emlrtRTEI);
    loop_ub = (int32_T)varargin_1[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      temp->data[i5] = 0.0;
    }

    if ((Y->size[1] < 1) || (a->size[1] < 1)) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(1);
      n_t = (ptrdiff_t)(Y->size[1]);
      k_t = (ptrdiff_t)(a->size[1]);
      lda_t = (ptrdiff_t)(1);
      ldb_t = (ptrdiff_t)(a->size[1]);
      ldc_t = (ptrdiff_t)(1);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&a->data[0]);
      Bib0_t = (double *)(&Y->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&temp->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  emxInit_real_T(&st, &b_a, 2, &l_emlrtRTEI, true);
  emxInit_real_T(&st, &b, 2, &l_emlrtRTEI, true);

  /* 1-by-m */
  st.site = &e_emlrtRSI;
  repmat(&st, x, Y->size[1], b_a);
  st.site = &e_emlrtRSI;
  diag(&st, temp, b);
  st.site = &e_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  if (!(b_a->size[1] == b->size[0])) {
    if (((b_a->size[0] == 1) && (b_a->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv8);
      for (i = 0; i < 45; i++) {
        cv8[i] = cv9[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv8);
      emlrtAssign(&c_y, m2);
      c_st.site = &lb_emlrtRSI;
      d_st.site = &qb_emlrtRSI;
      error(&c_st, message(&d_st, c_y, &emlrtMCI), &b_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      d_y = NULL;
      m2 = emlrtCreateCharArray(2, iv9);
      for (i = 0; i < 21; i++) {
        cv10[i] = cv11[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m2, cv10);
      emlrtAssign(&d_y, m2);
      c_st.site = &mb_emlrtRSI;
      d_st.site = &rb_emlrtRSI;
      error(&c_st, message(&d_st, d_y, &c_emlrtMCI), &d_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &U, 2, &n_emlrtRTEI, true);
  emxInit_real_T(&st, &r2, 2, &l_emlrtRTEI, true);
  if ((b_a->size[1] == 1) || (b->size[0] == 1)) {
    i5 = U->size[0] * U->size[1];
    U->size[0] = b_a->size[0];
    U->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)U, i5, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = b_a->size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      i = b->size[1];
      for (i6 = 0; i6 < i; i6++) {
        U->data[i5 + U->size[0] * i6] = 0.0;
        b_U = b_a->size[1];
        for (i7 = 0; i7 < b_U; i7++) {
          U->data[i5 + U->size[0] * i6] += b_a->data[i5 + b_a->size[0] * i7] *
            b->data[i7 + b->size[0] * i6];
        }
      }
    }
  } else {
    varargin_1[0] = (uint32_T)b_a->size[0];
    varargin_1[1] = (uint32_T)b->size[1];
    i5 = r2->size[0] * r2->size[1];
    r2->size[0] = (int32_T)varargin_1[0];
    emxEnsureCapacity(&st, (emxArray__common *)r2, i5, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i5 = r2->size[0] * r2->size[1];
    r2->size[1] = (int32_T)varargin_1[1];
    emxEnsureCapacity(&st, (emxArray__common *)r2, i5, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      r2->data[i5] = 0.0;
    }

    b_st.site = &l_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    i5 = U->size[0] * U->size[1];
    U->size[0] = (int32_T)varargin_1[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)U, i5, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i5 = U->size[0] * U->size[1];
    U->size[1] = (int32_T)varargin_1[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)U, i5, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      U->data[i5] = 0.0;
    }

    if ((b_a->size[0] < 1) || (b->size[1] < 1) || (b_a->size[1] < 1)) {
    } else {
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSB = 'N';
      TRANSA = 'N';
      m_t = (ptrdiff_t)(b_a->size[0]);
      n_t = (ptrdiff_t)(b->size[1]);
      k_t = (ptrdiff_t)(b_a->size[1]);
      lda_t = (ptrdiff_t)(b_a->size[0]);
      ldb_t = (ptrdiff_t)(b_a->size[1]);
      ldc_t = (ptrdiff_t)(b_a->size[0]);
      alpha1_t = (double *)(&alpha1);
      Aia0_t = (double *)(&b_a->data[0]);
      Bib0_t = (double *)(&b->data[0]);
      beta1_t = (double *)(&beta1);
      Cic0_t = (double *)(&U->data[0]);
      dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t, Bib0_t,
            &ldb_t, beta1_t, Cic0_t, &ldc_t);
    }
  }

  for (i5 = 0; i5 < 2; i5++) {
    b_Y[i5] = Y->size[i5];
  }

  for (i5 = 0; i5 < 2; i5++) {
    c_U[i5] = U->size[i5];
  }

  emlrtSizeEqCheck2DFastR2012b(b_Y, c_U, &b_emlrtECI, sp);
  i5 = U->size[0] * U->size[1];
  U->size[0] = Y->size[0];
  U->size[1] = Y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)U, i5, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = Y->size[0] * Y->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    U->data[i5] = Y->data[i5] - U->data[i5];
  }

  /*  d-ny-m */
  power(sp, U, r2);
  st.site = &f_emlrtRSI;
  sum(&st, r2, a);
  st.site = &f_emlrtRSI;
  i5 = normU->size[0] * normU->size[1];
  normU->size[0] = 1;
  normU->size[1] = a->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)normU, i5, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    normU->data[i5] = a->data[i5];
  }

  for (i = 0; i < a->size[1]; i++) {
    if (a->data[i] < 0.0) {
      b_st.site = &y_emlrtRSI;
      eml_error(&b_st);
    }
  }

  for (i = 0; i < a->size[1]; i++) {
    normU->data[i] = muDoubleScalarSqrt(normU->data[i]);
  }

  emxFree_real_T(&a);
  emxInit_boolean_T(&st, &b_normU, 2, &l_emlrtRTEI, true);

  /* 1-by-m */
  i5 = b_normU->size[0] * b_normU->size[1];
  b_normU->size[0] = 1;
  b_normU->size[1] = normU->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_normU, i5, (int32_T)sizeof
                    (boolean_T), &l_emlrtRTEI);
  loop_ub = normU->size[0] * normU->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    b_normU->data[i5] = (normU->data[i5] == 0.0);
  }

  b_emxInit_int32_T(sp, &r3, 2, &l_emlrtRTEI, true);
  st.site = &g_emlrtRSI;
  eml_li_find(&st, b_normU, r3);
  i = normU->size[1];
  loop_ub = r3->size[0] * r3->size[1];
  emxFree_boolean_T(&b_normU);
  for (i5 = 0; i5 < loop_ub; i5++) {
    i6 = r3->data[i5];
    normU->data[emlrtDynamicBoundsCheckFastR2012b(i6, 1, i, &d_emlrtBCI, sp) - 1]
      = 1.0;
  }

  st.site = &h_emlrtRSI;
  b_repmat(&st, normU, Y->size[0], b_a);
  st.site = &h_emlrtRSI;
  for (i5 = 0; i5 < 2; i5++) {
    varargin_1[i5] = (uint32_T)U->size[i5];
  }

  for (i5 = 0; i5 < 2; i5++) {
    varargin_2[i5] = (uint32_T)b_a->size[i5];
  }

  p = false;
  b_p = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 2)) {
    if (!(varargin_1[i] == varargin_2[i])) {
      b_p = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  if (p) {
  } else {
    emlrtAssertMATLABThread(&st, &h_emlrtRTEI);
    e_y = NULL;
    m2 = emlrtCreateCharArray(2, iv10);
    for (i = 0; i < 15; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(&st, 15, m2, cv12);
    emlrtAssign(&e_y, m2);
    b_st.site = &nb_emlrtRSI;
    e_st.site = &sb_emlrtRSI;
    error(&b_st, message(&e_st, e_y, &m_emlrtMCI), &n_emlrtMCI);
  }

  i5 = U->size[0] * U->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)U, i5, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  i = U->size[0];
  b_U = U->size[1];
  loop_ub = i * b_U;
  for (i5 = 0; i5 < loop_ub; i5++) {
    U->data[i5] /= b_a->data[i5];
  }

  emxFree_real_T(&b_a);
  emxInit_boolean_T(&st, &b_temp, 2, &l_emlrtRTEI, true);
  i5 = b_temp->size[0] * b_temp->size[1];
  b_temp->size[0] = 1;
  b_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_temp, i5, (int32_T)sizeof
                    (boolean_T), &l_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    b_temp->data[i5] = (temp->data[i5] > 1.0);
  }

  st.site = &i_emlrtRSI;
  eml_li_find(&st, b_temp, r3);
  i = temp->size[1];
  loop_ub = r3->size[0] * r3->size[1];
  emxFree_boolean_T(&b_temp);
  for (i5 = 0; i5 < loop_ub; i5++) {
    i6 = r3->data[i5];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i6, 1, i, &e_emlrtBCI, sp) - 1]
      = 1.0;
  }

  emxInit_boolean_T(sp, &c_temp, 2, &l_emlrtRTEI, true);
  i5 = c_temp->size[0] * c_temp->size[1];
  c_temp->size[0] = 1;
  c_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_temp, i5, (int32_T)sizeof
                    (boolean_T), &l_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    c_temp->data[i5] = (temp->data[i5] < -1.0);
  }

  st.site = &j_emlrtRSI;
  eml_li_find(&st, c_temp, r3);
  i = temp->size[1];
  loop_ub = r3->size[0] * r3->size[1];
  emxFree_boolean_T(&c_temp);
  for (i5 = 0; i5 < loop_ub; i5++) {
    i6 = r3->data[i5];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i6, 1, i, &f_emlrtBCI, sp) - 1]
      = -1.0;
  }

  emxFree_int32_T(&r3);
  st.site = &k_emlrtRSI;
  i5 = normU->size[0] * normU->size[1];
  normU->size[0] = 1;
  normU->size[1] = temp->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)normU, i5, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    normU->data[i5] = temp->data[i5];
  }

  for (i = 0; i < temp->size[1]; i++) {
    if ((temp->data[i] < -1.0) || (1.0 < temp->data[i])) {
      b_st.site = &fb_emlrtRSI;
      b_eml_error(&b_st);
    }
  }

  for (i = 0; i < temp->size[1]; i++) {
    normU->data[i] = muDoubleScalarAcos(normU->data[i]);
  }

  emxFree_real_T(&temp);
  st.site = &k_emlrtRSI;
  diag(&st, normU, b);
  st.site = &k_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  emxFree_real_T(&normU);
  if (!(U->size[1] == b->size[0])) {
    if (((U->size[0] == 1) && (U->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      f_y = NULL;
      m2 = emlrtCreateCharArray(2, iv11);
      for (i = 0; i < 45; i++) {
        cv8[i] = cv9[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv8);
      emlrtAssign(&f_y, m2);
      c_st.site = &lb_emlrtRSI;
      d_st.site = &qb_emlrtRSI;
      error(&c_st, message(&d_st, f_y, &emlrtMCI), &b_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      g_y = NULL;
      m2 = emlrtCreateCharArray(2, iv12);
      for (i = 0; i < 21; i++) {
        cv10[i] = cv11[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m2, cv10);
      emlrtAssign(&g_y, m2);
      c_st.site = &mb_emlrtRSI;
      d_st.site = &rb_emlrtRSI;
      error(&c_st, message(&d_st, g_y, &c_emlrtMCI), &d_emlrtMCI);
    }
  }

  if ((U->size[1] == 1) || (b->size[0] == 1)) {
    i5 = V->size[0] * V->size[1];
    V->size[0] = U->size[0];
    V->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)V, i5, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = U->size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      i = b->size[1];
      for (i6 = 0; i6 < i; i6++) {
        V->data[i5 + V->size[0] * i6] = 0.0;
        b_U = U->size[1];
        for (i7 = 0; i7 < b_U; i7++) {
          V->data[i5 + V->size[0] * i6] += U->data[i5 + U->size[0] * i7] *
            b->data[i7 + b->size[0] * i6];
        }
      }
    }
  } else {
    varargin_1[0] = (uint32_T)U->size[0];
    varargin_1[1] = (uint32_T)b->size[1];
    i5 = r2->size[0] * r2->size[1];
    r2->size[0] = (int32_T)varargin_1[0];
    emxEnsureCapacity(&st, (emxArray__common *)r2, i5, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i5 = r2->size[0] * r2->size[1];
    r2->size[1] = (int32_T)varargin_1[1];
    emxEnsureCapacity(&st, (emxArray__common *)r2, i5, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      r2->data[i5] = 0.0;
    }

    b_st.site = &l_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    i5 = V->size[0] * V->size[1];
    V->size[0] = (int32_T)varargin_1[0];
    emxEnsureCapacity(&c_st, (emxArray__common *)V, i5, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i5 = V->size[0] * V->size[1];
    V->size[1] = (int32_T)varargin_1[1];
    emxEnsureCapacity(&c_st, (emxArray__common *)V, i5, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      V->data[i5] = 0.0;
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

  emxFree_real_T(&r2);
  emxFree_real_T(&b);
  emxFree_real_T(&U);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (logmapSRi.c) */
