/*
 * logmapSRi.c
 *
 * Code generation for function 'logmapSRi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "logmapSRi.h"
#include "power.h"
#include "optASR_sigma_disp_emxutil.h"
#include "eml_error.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "rdivide.h"
#include "repmat.h"
#include "sqrt.h"
#include "sum.h"
#include "optASR_sigma_disp_mexutil.h"
#include "optASR_sigma_disp_data.h"

/* Variable Definitions */
static emlrtRSInfo l_emlrtRSI = { 11, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo m_emlrtRSI = { 12, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo n_emlrtRSI = { 13, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo o_emlrtRSI = { 14, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo p_emlrtRSI = { 15, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo q_emlrtRSI = { 16, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo r_emlrtRSI = { 17, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo s_emlrtRSI = { 18, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRSInfo ib_emlrtRSI = { 11, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo jb_emlrtRSI = { 26, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo kb_emlrtRSI = { 39, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo f_emlrtRTEI = { 14, 5, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo n_emlrtMCI = { 14, 5, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo q_emlrtRTEI = { 1, 14, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 11, 1, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 12, 1, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 13, 1, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/logmapSRi.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 17, 9, "eml_li_find",
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

static emlrtRSInfo ed_emlrtRSI = { 14, "eml_li_find",
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
  const mxArray *m6;
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
  st.site = &ib_emlrtRSI;
  k = 0;
  b_st.site = &kb_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &x_emlrtRSI;
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
    m6 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m6);
    st.site = &ed_emlrtRSI;
    error(&st, b_y, &n_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &emlrtDCI, sp);
  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &ab_emlrtRTEI);
  j = 0;
  st.site = &jb_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &x_emlrtRSI;
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
  int32_T i7;
  int32_T loop_ub;
  const mxArray *y;
  static const int32_T iv15[2] = { 1, 45 };

  const mxArray *m3;
  char_T cv24[45];
  int32_T i;
  static const char_T cv25[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv16[2] = { 1, 21 };

  char_T cv26[21];
  static const char_T cv27[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *temp;
  emxArray_real_T *r3;
  int32_T i8;
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
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv18[2] = { 1, 21 };

  emxArray_real_T *U;
  emxArray_real_T *r4;
  int32_T b_loop_ub;
  int32_T i9;
  uint32_T unnamed_idx_0;
  int32_T b_Y[2];
  int32_T b_U[2];
  emxArray_boolean_T *b_normU;
  emxArray_int32_T *r5;
  emxArray_real_T *c_U;
  emxArray_boolean_T *b_temp;
  emxArray_boolean_T *c_temp;
  const mxArray *e_y;
  static const int32_T iv19[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv20[2] = { 1, 21 };

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
  emxInit_real_T(sp, &normU, 2, &t_emlrtRTEI, true);

  /*  compute the log map on sphere at x for each column in Y log_x(Y)  */
  /*  Input: */
  /*      x - d-by-1 vector */
  /*      Y - d-by-m matrix, each column an atom (d-by-1) */
  /*  Output: */
  /*      V - logmap of each column of Y at x (d-by-m matrix) */
  st.site = &l_emlrtRSI;
  i7 = normU->size[0] * normU->size[1];
  normU->size[0] = 1;
  normU->size[1] = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)normU, i7, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  loop_ub = x->size[0];
  for (i7 = 0; i7 < loop_ub; i7++) {
    normU->data[normU->size[0] * i7] = x->data[i7];
  }

  b_st.site = &u_emlrtRSI;
  if (!(normU->size[1] == Y->size[0])) {
    if ((normU->size[1] == 1) || ((Y->size[0] == 1) && (Y->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      y = NULL;
      m3 = emlrtCreateCharArray(2, iv15);
      for (i = 0; i < 45; i++) {
        cv24[i] = cv25[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv24);
      emlrtAssign(&y, m3);
      c_st.site = &xc_emlrtRSI;
      d_st.site = &jd_emlrtRSI;
      error(&c_st, message(&d_st, y, &e_emlrtMCI), &f_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv16);
      for (i = 0; i < 21; i++) {
        cv26[i] = cv27[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m3, cv26);
      emlrtAssign(&b_y, m3);
      c_st.site = &yc_emlrtRSI;
      d_st.site = &kd_emlrtRSI;
      error(&c_st, message(&d_st, b_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &temp, 2, &r_emlrtRTEI, true);
  emxInit_real_T(&st, &r3, 2, &q_emlrtRTEI, true);
  if ((normU->size[1] == 1) || (Y->size[0] == 1)) {
    i7 = temp->size[0] * temp->size[1];
    temp->size[0] = 1;
    temp->size[1] = Y->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp, i7, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    loop_ub = Y->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      temp->data[temp->size[0] * i7] = 0.0;
      i = normU->size[1];
      for (i8 = 0; i8 < i; i8++) {
        temp->data[temp->size[0] * i7] += normU->data[normU->size[0] * i8] *
          Y->data[i8 + Y->size[0] * i7];
      }
    }
  } else {
    unnamed_idx_1 = (uint32_T)Y->size[1];
    i7 = r3->size[0] * r3->size[1];
    r3->size[0] = 1;
    emxEnsureCapacity(&st, (emxArray__common *)r3, i7, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    i7 = r3->size[0] * r3->size[1];
    r3->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r3, i7, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_1;
    for (i7 = 0; i7 < loop_ub; i7++) {
      r3->data[i7] = 0.0;
    }

    b_st.site = &t_emlrtRSI;
    c_st.site = &v_emlrtRSI;
    i7 = temp->size[0] * temp->size[1];
    temp->size[0] = 1;
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i7, (int32_T)sizeof
                      (real_T), &q_emlrtRTEI);
    i7 = temp->size[0] * temp->size[1];
    temp->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i7, (int32_T)sizeof
                      (real_T), &q_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_1;
    for (i7 = 0; i7 < loop_ub; i7++) {
      temp->data[i7] = 0.0;
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

  emxInit_real_T(&st, &a, 2, &q_emlrtRTEI, true);
  emxInit_real_T(&st, &b, 2, &q_emlrtRTEI, true);

  /* 1-by-m */
  st.site = &m_emlrtRSI;
  repmat(&st, x, Y->size[1], a);
  st.site = &m_emlrtRSI;
  diag(&st, temp, b);
  st.site = &m_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  if (!(a->size[1] == b->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv17);
      for (i = 0; i < 45; i++) {
        cv24[i] = cv25[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv24);
      emlrtAssign(&c_y, m3);
      c_st.site = &xc_emlrtRSI;
      d_st.site = &jd_emlrtRSI;
      error(&c_st, message(&d_st, c_y, &e_emlrtMCI), &f_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv18);
      for (i = 0; i < 21; i++) {
        cv26[i] = cv27[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m3, cv26);
      emlrtAssign(&d_y, m3);
      c_st.site = &yc_emlrtRSI;
      d_st.site = &kd_emlrtRSI;
      error(&c_st, message(&d_st, d_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &U, 2, &s_emlrtRTEI, true);
  emxInit_real_T(&st, &r4, 2, &q_emlrtRTEI, true);
  if ((a->size[1] == 1) || (b->size[0] == 1)) {
    i7 = U->size[0] * U->size[1];
    U->size[0] = a->size[0];
    U->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)U, i7, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    loop_ub = a->size[0];
    for (i7 = 0; i7 < loop_ub; i7++) {
      i = b->size[1];
      for (i8 = 0; i8 < i; i8++) {
        U->data[i7 + U->size[0] * i8] = 0.0;
        b_loop_ub = a->size[1];
        for (i9 = 0; i9 < b_loop_ub; i9++) {
          U->data[i7 + U->size[0] * i8] += a->data[i7 + a->size[0] * i9] *
            b->data[i9 + b->size[0] * i8];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i7 = r4->size[0] * r4->size[1];
    r4->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r4, i7, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    i7 = r4->size[0] * r4->size[1];
    r4->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r4, i7, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i7 = 0; i7 < loop_ub; i7++) {
      r4->data[i7] = 0.0;
    }

    b_st.site = &t_emlrtRSI;
    c_st.site = &v_emlrtRSI;
    i7 = U->size[0] * U->size[1];
    U->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)U, i7, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    i7 = U->size[0] * U->size[1];
    U->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)U, i7, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i7 = 0; i7 < loop_ub; i7++) {
      U->data[i7] = 0.0;
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
  for (i7 = 0; i7 < 2; i7++) {
    b_Y[i7] = Y->size[i7];
  }

  for (i7 = 0; i7 < 2; i7++) {
    b_U[i7] = U->size[i7];
  }

  emlrtSizeEqCheck2DFastR2012b(b_Y, b_U, &b_emlrtECI, sp);
  i7 = U->size[0] * U->size[1];
  U->size[0] = Y->size[0];
  U->size[1] = Y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)U, i7, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  loop_ub = Y->size[0] * Y->size[1];
  for (i7 = 0; i7 < loop_ub; i7++) {
    U->data[i7] = Y->data[i7] - U->data[i7];
  }

  emxInit_boolean_T(sp, &b_normU, 2, &q_emlrtRTEI, true);

  /*  d-ny-m */
  power(sp, U, r4);
  st.site = &n_emlrtRSI;
  sum(&st, r4, normU);
  st.site = &n_emlrtRSI;
  b_sqrt(&st, normU);

  /* 1-by-m */
  i7 = b_normU->size[0] * b_normU->size[1];
  b_normU->size[0] = 1;
  b_normU->size[1] = normU->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_normU, i7, (int32_T)sizeof
                    (boolean_T), &q_emlrtRTEI);
  loop_ub = normU->size[0] * normU->size[1];
  for (i7 = 0; i7 < loop_ub; i7++) {
    b_normU->data[i7] = (normU->data[i7] == 0.0);
  }

  b_emxInit_int32_T(sp, &r5, 2, &q_emlrtRTEI, true);
  st.site = &o_emlrtRSI;
  eml_li_find(&st, b_normU, r5);
  i = normU->size[1];
  loop_ub = r5->size[0] * r5->size[1];
  emxFree_boolean_T(&b_normU);
  for (i7 = 0; i7 < loop_ub; i7++) {
    i8 = r5->data[i7];
    normU->data[emlrtDynamicBoundsCheckFastR2012b(i8, 1, i, &d_emlrtBCI, sp) - 1]
      = 1.0;
  }

  emxInit_real_T(sp, &c_U, 2, &q_emlrtRTEI, true);
  st.site = &p_emlrtRSI;
  b_repmat(&st, normU, Y->size[0], r4);
  i7 = c_U->size[0] * c_U->size[1];
  c_U->size[0] = U->size[0];
  c_U->size[1] = U->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_U, i7, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  loop_ub = U->size[0] * U->size[1];
  emxFree_real_T(&normU);
  for (i7 = 0; i7 < loop_ub; i7++) {
    c_U->data[i7] = U->data[i7];
  }

  emxInit_boolean_T(sp, &b_temp, 2, &q_emlrtRTEI, true);
  st.site = &p_emlrtRSI;
  rdivide(&st, c_U, r4, U);
  i7 = b_temp->size[0] * b_temp->size[1];
  b_temp->size[0] = 1;
  b_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_temp, i7, (int32_T)sizeof
                    (boolean_T), &q_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  emxFree_real_T(&c_U);
  for (i7 = 0; i7 < loop_ub; i7++) {
    b_temp->data[i7] = (temp->data[i7] > 1.0);
  }

  st.site = &q_emlrtRSI;
  eml_li_find(&st, b_temp, r5);
  i = temp->size[1];
  loop_ub = r5->size[0] * r5->size[1];
  emxFree_boolean_T(&b_temp);
  for (i7 = 0; i7 < loop_ub; i7++) {
    i8 = r5->data[i7];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i8, 1, i, &e_emlrtBCI, sp) - 1]
      = 1.0;
  }

  emxInit_boolean_T(sp, &c_temp, 2, &q_emlrtRTEI, true);
  i7 = c_temp->size[0] * c_temp->size[1];
  c_temp->size[0] = 1;
  c_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_temp, i7, (int32_T)sizeof
                    (boolean_T), &q_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i7 = 0; i7 < loop_ub; i7++) {
    c_temp->data[i7] = (temp->data[i7] < -1.0);
  }

  st.site = &r_emlrtRSI;
  eml_li_find(&st, c_temp, r5);
  i = temp->size[1];
  loop_ub = r5->size[0] * r5->size[1];
  emxFree_boolean_T(&c_temp);
  for (i7 = 0; i7 < loop_ub; i7++) {
    i8 = r5->data[i7];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i8, 1, i, &f_emlrtBCI, sp) - 1]
      = -1.0;
  }

  emxFree_int32_T(&r5);
  st.site = &s_emlrtRSI;
  i7 = r3->size[0] * r3->size[1];
  r3->size[0] = 1;
  r3->size[1] = temp->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)r3, i7, (int32_T)sizeof(real_T),
                    &q_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i7 = 0; i7 < loop_ub; i7++) {
    r3->data[i7] = temp->data[i7];
  }

  for (i = 0; i < temp->size[1]; i++) {
    if ((temp->data[i] < -1.0) || (1.0 < temp->data[i])) {
      b_st.site = &nb_emlrtRSI;
      b_eml_error(&b_st);
    }
  }

  for (i = 0; i < temp->size[1]; i++) {
    r3->data[i] = muDoubleScalarAcos(r3->data[i]);
  }

  emxFree_real_T(&temp);
  st.site = &s_emlrtRSI;
  diag(&st, r3, b);
  st.site = &s_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  emxFree_real_T(&r3);
  if (!(U->size[1] == b->size[0])) {
    if (((U->size[0] == 1) && (U->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      e_y = NULL;
      m3 = emlrtCreateCharArray(2, iv19);
      for (i = 0; i < 45; i++) {
        cv24[i] = cv25[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv24);
      emlrtAssign(&e_y, m3);
      c_st.site = &xc_emlrtRSI;
      d_st.site = &jd_emlrtRSI;
      error(&c_st, message(&d_st, e_y, &e_emlrtMCI), &f_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      f_y = NULL;
      m3 = emlrtCreateCharArray(2, iv20);
      for (i = 0; i < 21; i++) {
        cv26[i] = cv27[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m3, cv26);
      emlrtAssign(&f_y, m3);
      c_st.site = &yc_emlrtRSI;
      d_st.site = &kd_emlrtRSI;
      error(&c_st, message(&d_st, f_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((U->size[1] == 1) || (b->size[0] == 1)) {
    i7 = V->size[0] * V->size[1];
    V->size[0] = U->size[0];
    V->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)V, i7, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    loop_ub = U->size[0];
    for (i7 = 0; i7 < loop_ub; i7++) {
      i = b->size[1];
      for (i8 = 0; i8 < i; i8++) {
        V->data[i7 + V->size[0] * i8] = 0.0;
        b_loop_ub = U->size[1];
        for (i9 = 0; i9 < b_loop_ub; i9++) {
          V->data[i7 + V->size[0] * i8] += U->data[i7 + U->size[0] * i9] *
            b->data[i9 + b->size[0] * i8];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)U->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i7 = r4->size[0] * r4->size[1];
    r4->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r4, i7, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    i7 = r4->size[0] * r4->size[1];
    r4->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r4, i7, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i7 = 0; i7 < loop_ub; i7++) {
      r4->data[i7] = 0.0;
    }

    b_st.site = &t_emlrtRSI;
    c_st.site = &v_emlrtRSI;
    i7 = V->size[0] * V->size[1];
    V->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)V, i7, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    i7 = V->size[0] * V->size[1];
    V->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)V, i7, (int32_T)sizeof(real_T),
                      &q_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i7 = 0; i7 < loop_ub; i7++) {
      V->data[i7] = 0.0;
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

  emxFree_real_T(&r4);
  emxFree_real_T(&b);
  emxFree_real_T(&U);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (logmapSRi.c) */
