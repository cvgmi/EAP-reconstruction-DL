/*
 * logmapSRi.c
 *
 * Code generation for function 'logmapSRi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD.h"
#include "logmapSRi.h"
#include "power.h"
#include "optAPSR_AGD_emxutil.h"
#include "eml_error.h"
#include "diag.h"
#include "eml_int_forloop_overflow_check.h"
#include "rdivide.h"
#include "repmat.h"
#include "sqrt.h"
#include "sum.h"
#include "optAPSR_AGD_mexutil.h"
#include "optAPSR_AGD_data.h"

/* Variable Definitions */
static emlrtRSInfo w_emlrtRSI = { 11, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m"
};

static emlrtRSInfo x_emlrtRSI = { 12, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m"
};

static emlrtRSInfo y_emlrtRSI = { 13, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m"
};

static emlrtRSInfo ab_emlrtRSI = { 14, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m"
};

static emlrtRSInfo bb_emlrtRSI = { 15, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m"
};

static emlrtRSInfo cb_emlrtRSI = { 16, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m"
};

static emlrtRSInfo db_emlrtRSI = { 17, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m"
};

static emlrtRSInfo eb_emlrtRSI = { 18, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m"
};

static emlrtRSInfo rb_emlrtRSI = { 11, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo sb_emlrtRSI = { 26, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo tb_emlrtRSI = { 39, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo f_emlrtRTEI = { 14, 5, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo l_emlrtMCI = { 14, 5, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRTEInfo u_emlrtRTEI = { 1, 14, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m"
};

static emlrtRTEInfo v_emlrtRTEI = { 11, 1, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 12, 1, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 13, 1, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m"
};

static emlrtRTEInfo eb_emlrtRTEI = { 17, 9, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtECInfo g_emlrtECI = { 2, 12, 5, "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m"
};

static emlrtBCInfo p_emlrtBCI = { -1, -1, 14, 1, "normU", "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 16, 1, "temp", "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 17, 1, "temp", "logmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapSRi.m",
  0 };

static emlrtDCInfo emlrtDCI = { 17, 37, "eml_li_find",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4 };

static emlrtRSInfo qd_emlrtRSI = { 14, "eml_li_find",
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
  st.site = &rb_emlrtRSI;
  k = 0;
  b_st.site = &tb_emlrtRSI;
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
    emlrtAssertMATLABThread(sp, &f_emlrtRTEI);
    b_y = NULL;
    m4 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m4);
    st.site = &qd_emlrtRSI;
    error(&st, b_y, &l_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &emlrtDCI, sp);
  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &eb_emlrtRTEI);
  j = 0;
  st.site = &sb_emlrtRSI;
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
  int32_T i4;
  int32_T loop_ub;
  const mxArray *y;
  static const int32_T iv13[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv8[45];
  int32_T i;
  static const char_T cv9[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 21 };

  char_T cv10[21];
  static const char_T cv11[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *temp;
  emxArray_real_T *r2;
  int32_T i5;
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
  static const int32_T iv15[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv16[2] = { 1, 21 };

  emxArray_real_T *U;
  emxArray_real_T *r3;
  int32_T b_loop_ub;
  int32_T i6;
  uint32_T unnamed_idx_0;
  int32_T b_Y[2];
  int32_T b_U[2];
  emxArray_boolean_T *b_normU;
  emxArray_int32_T *r4;
  emxArray_real_T *c_U;
  emxArray_boolean_T *b_temp;
  emxArray_boolean_T *c_temp;
  const mxArray *e_y;
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv18[2] = { 1, 21 };

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
  b_emxInit_real_T(sp, &normU, 2, &x_emlrtRTEI, true);

  /*  compute the log map on sphere log_x(Y)  */
  /*  Input: */
  /*      x - d-by-1 vector */
  /*      Y - d-by-m matrix, each column an atom (d-by-1) */
  /*  Output: */
  /*      V - logmap of each column of Y at x (d-by-m matrix) */
  st.site = &w_emlrtRSI;
  i4 = normU->size[0] * normU->size[1];
  normU->size[0] = 1;
  normU->size[1] = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)normU, i4, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  loop_ub = x->size[0];
  for (i4 = 0; i4 < loop_ub; i4++) {
    normU->data[normU->size[0] * i4] = x->data[i4];
  }

  b_st.site = &gb_emlrtRSI;
  if (!(normU->size[1] == Y->size[0])) {
    if ((normU->size[1] == 1) || ((Y->size[0] == 1) && (Y->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      y = NULL;
      m2 = emlrtCreateCharArray(2, iv13);
      for (i = 0; i < 45; i++) {
        cv8[i] = cv9[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv8);
      emlrtAssign(&y, m2);
      c_st.site = &hd_emlrtRSI;
      d_st.site = &sd_emlrtRSI;
      error(&c_st, b_message(&d_st, y, &e_emlrtMCI), &f_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv14);
      for (i = 0; i < 21; i++) {
        cv10[i] = cv11[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m2, cv10);
      emlrtAssign(&b_y, m2);
      c_st.site = &id_emlrtRSI;
      d_st.site = &td_emlrtRSI;
      error(&c_st, b_message(&d_st, b_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  b_emxInit_real_T(&st, &temp, 2, &v_emlrtRTEI, true);
  b_emxInit_real_T(&st, &r2, 2, &u_emlrtRTEI, true);
  if ((normU->size[1] == 1) || (Y->size[0] == 1)) {
    i4 = temp->size[0] * temp->size[1];
    temp->size[0] = 1;
    temp->size[1] = Y->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp, i4, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    loop_ub = Y->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      temp->data[temp->size[0] * i4] = 0.0;
      i = normU->size[1];
      for (i5 = 0; i5 < i; i5++) {
        temp->data[temp->size[0] * i4] += normU->data[normU->size[0] * i5] *
          Y->data[i5 + Y->size[0] * i4];
      }
    }
  } else {
    unnamed_idx_1 = (uint32_T)Y->size[1];
    i4 = r2->size[0] * r2->size[1];
    r2->size[0] = 1;
    emxEnsureCapacity(&st, (emxArray__common *)r2, i4, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    i4 = r2->size[0] * r2->size[1];
    r2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r2, i4, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_1;
    for (i4 = 0; i4 < loop_ub; i4++) {
      r2->data[i4] = 0.0;
    }

    b_st.site = &fb_emlrtRSI;
    c_st.site = &hb_emlrtRSI;
    i4 = temp->size[0] * temp->size[1];
    temp->size[0] = 1;
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i4, (int32_T)sizeof
                      (real_T), &u_emlrtRTEI);
    i4 = temp->size[0] * temp->size[1];
    temp->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i4, (int32_T)sizeof
                      (real_T), &u_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_1;
    for (i4 = 0; i4 < loop_ub; i4++) {
      temp->data[i4] = 0.0;
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

  b_emxInit_real_T(&st, &a, 2, &u_emlrtRTEI, true);
  b_emxInit_real_T(&st, &b, 2, &u_emlrtRTEI, true);

  /* 1-by-m */
  st.site = &x_emlrtRSI;
  repmat(&st, x, Y->size[1], a);
  st.site = &x_emlrtRSI;
  diag(&st, temp, b);
  st.site = &x_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  if (!(a->size[1] == b->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv15);
      for (i = 0; i < 45; i++) {
        cv8[i] = cv9[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv8);
      emlrtAssign(&c_y, m2);
      c_st.site = &hd_emlrtRSI;
      d_st.site = &sd_emlrtRSI;
      error(&c_st, b_message(&d_st, c_y, &e_emlrtMCI), &f_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      d_y = NULL;
      m2 = emlrtCreateCharArray(2, iv16);
      for (i = 0; i < 21; i++) {
        cv10[i] = cv11[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m2, cv10);
      emlrtAssign(&d_y, m2);
      c_st.site = &id_emlrtRSI;
      d_st.site = &td_emlrtRSI;
      error(&c_st, b_message(&d_st, d_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  b_emxInit_real_T(&st, &U, 2, &w_emlrtRTEI, true);
  b_emxInit_real_T(&st, &r3, 2, &u_emlrtRTEI, true);
  if ((a->size[1] == 1) || (b->size[0] == 1)) {
    i4 = U->size[0] * U->size[1];
    U->size[0] = a->size[0];
    U->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)U, i4, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    loop_ub = a->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      i = b->size[1];
      for (i5 = 0; i5 < i; i5++) {
        U->data[i4 + U->size[0] * i5] = 0.0;
        b_loop_ub = a->size[1];
        for (i6 = 0; i6 < b_loop_ub; i6++) {
          U->data[i4 + U->size[0] * i5] += a->data[i4 + a->size[0] * i6] *
            b->data[i6 + b->size[0] * i5];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i4 = r3->size[0] * r3->size[1];
    r3->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r3, i4, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    i4 = r3->size[0] * r3->size[1];
    r3->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r3, i4, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i4 = 0; i4 < loop_ub; i4++) {
      r3->data[i4] = 0.0;
    }

    b_st.site = &fb_emlrtRSI;
    c_st.site = &hb_emlrtRSI;
    i4 = U->size[0] * U->size[1];
    U->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)U, i4, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    i4 = U->size[0] * U->size[1];
    U->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)U, i4, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i4 = 0; i4 < loop_ub; i4++) {
      U->data[i4] = 0.0;
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
  for (i4 = 0; i4 < 2; i4++) {
    b_Y[i4] = Y->size[i4];
  }

  for (i4 = 0; i4 < 2; i4++) {
    b_U[i4] = U->size[i4];
  }

  emlrtSizeEqCheck2DFastR2012b(b_Y, b_U, &g_emlrtECI, sp);
  i4 = U->size[0] * U->size[1];
  U->size[0] = Y->size[0];
  U->size[1] = Y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)U, i4, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  loop_ub = Y->size[0] * Y->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    U->data[i4] = Y->data[i4] - U->data[i4];
  }

  emxInit_boolean_T(sp, &b_normU, 2, &u_emlrtRTEI, true);

  /*  d-ny-m */
  power(sp, U, r3);
  st.site = &y_emlrtRSI;
  sum(&st, r3, normU);
  st.site = &y_emlrtRSI;
  b_sqrt(&st, normU);

  /* 1-by-m */
  i4 = b_normU->size[0] * b_normU->size[1];
  b_normU->size[0] = 1;
  b_normU->size[1] = normU->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_normU, i4, (int32_T)sizeof
                    (boolean_T), &u_emlrtRTEI);
  loop_ub = normU->size[0] * normU->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    b_normU->data[i4] = (normU->data[i4] == 0.0);
  }

  b_emxInit_int32_T(sp, &r4, 2, &u_emlrtRTEI, true);
  st.site = &ab_emlrtRSI;
  eml_li_find(&st, b_normU, r4);
  i = normU->size[1];
  loop_ub = r4->size[0] * r4->size[1];
  emxFree_boolean_T(&b_normU);
  for (i4 = 0; i4 < loop_ub; i4++) {
    i5 = r4->data[i4];
    normU->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, i, &p_emlrtBCI, sp) - 1]
      = 1.0;
  }

  b_emxInit_real_T(sp, &c_U, 2, &u_emlrtRTEI, true);
  st.site = &bb_emlrtRSI;
  b_repmat(&st, normU, Y->size[0], r3);
  i4 = c_U->size[0] * c_U->size[1];
  c_U->size[0] = U->size[0];
  c_U->size[1] = U->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_U, i4, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  loop_ub = U->size[0] * U->size[1];
  emxFree_real_T(&normU);
  for (i4 = 0; i4 < loop_ub; i4++) {
    c_U->data[i4] = U->data[i4];
  }

  emxInit_boolean_T(sp, &b_temp, 2, &u_emlrtRTEI, true);
  st.site = &bb_emlrtRSI;
  rdivide(&st, c_U, r3, U);
  i4 = b_temp->size[0] * b_temp->size[1];
  b_temp->size[0] = 1;
  b_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_temp, i4, (int32_T)sizeof
                    (boolean_T), &u_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  emxFree_real_T(&c_U);
  for (i4 = 0; i4 < loop_ub; i4++) {
    b_temp->data[i4] = (temp->data[i4] > 1.0);
  }

  st.site = &cb_emlrtRSI;
  eml_li_find(&st, b_temp, r4);
  i = temp->size[1];
  loop_ub = r4->size[0] * r4->size[1];
  emxFree_boolean_T(&b_temp);
  for (i4 = 0; i4 < loop_ub; i4++) {
    i5 = r4->data[i4];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, i, &q_emlrtBCI, sp) - 1]
      = 1.0;
  }

  emxInit_boolean_T(sp, &c_temp, 2, &u_emlrtRTEI, true);
  i4 = c_temp->size[0] * c_temp->size[1];
  c_temp->size[0] = 1;
  c_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_temp, i4, (int32_T)sizeof
                    (boolean_T), &u_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    c_temp->data[i4] = (temp->data[i4] < -1.0);
  }

  st.site = &db_emlrtRSI;
  eml_li_find(&st, c_temp, r4);
  i = temp->size[1];
  loop_ub = r4->size[0] * r4->size[1];
  emxFree_boolean_T(&c_temp);
  for (i4 = 0; i4 < loop_ub; i4++) {
    i5 = r4->data[i4];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, i, &r_emlrtBCI, sp) - 1]
      = -1.0;
  }

  emxFree_int32_T(&r4);
  st.site = &eb_emlrtRSI;
  i4 = r2->size[0] * r2->size[1];
  r2->size[0] = 1;
  r2->size[1] = temp->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)r2, i4, (int32_T)sizeof(real_T),
                    &u_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i4 = 0; i4 < loop_ub; i4++) {
    r2->data[i4] = temp->data[i4];
  }

  for (i = 0; i < temp->size[1]; i++) {
    if ((temp->data[i] < -1.0) || (1.0 < temp->data[i])) {
      b_st.site = &wb_emlrtRSI;
      b_eml_error(&b_st);
    }
  }

  for (i = 0; i < temp->size[1]; i++) {
    r2->data[i] = muDoubleScalarAcos(r2->data[i]);
  }

  emxFree_real_T(&temp);
  st.site = &eb_emlrtRSI;
  diag(&st, r2, b);
  st.site = &eb_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  emxFree_real_T(&r2);
  if (!(U->size[1] == b->size[0])) {
    if (((U->size[0] == 1) && (U->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      e_y = NULL;
      m2 = emlrtCreateCharArray(2, iv17);
      for (i = 0; i < 45; i++) {
        cv8[i] = cv9[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv8);
      emlrtAssign(&e_y, m2);
      c_st.site = &hd_emlrtRSI;
      d_st.site = &sd_emlrtRSI;
      error(&c_st, b_message(&d_st, e_y, &e_emlrtMCI), &f_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      f_y = NULL;
      m2 = emlrtCreateCharArray(2, iv18);
      for (i = 0; i < 21; i++) {
        cv10[i] = cv11[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m2, cv10);
      emlrtAssign(&f_y, m2);
      c_st.site = &id_emlrtRSI;
      d_st.site = &td_emlrtRSI;
      error(&c_st, b_message(&d_st, f_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((U->size[1] == 1) || (b->size[0] == 1)) {
    i4 = V->size[0] * V->size[1];
    V->size[0] = U->size[0];
    V->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)V, i4, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    loop_ub = U->size[0];
    for (i4 = 0; i4 < loop_ub; i4++) {
      i = b->size[1];
      for (i5 = 0; i5 < i; i5++) {
        V->data[i4 + V->size[0] * i5] = 0.0;
        b_loop_ub = U->size[1];
        for (i6 = 0; i6 < b_loop_ub; i6++) {
          V->data[i4 + V->size[0] * i5] += U->data[i4 + U->size[0] * i6] *
            b->data[i6 + b->size[0] * i5];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)U->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i4 = r3->size[0] * r3->size[1];
    r3->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r3, i4, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    i4 = r3->size[0] * r3->size[1];
    r3->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r3, i4, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i4 = 0; i4 < loop_ub; i4++) {
      r3->data[i4] = 0.0;
    }

    b_st.site = &fb_emlrtRSI;
    c_st.site = &hb_emlrtRSI;
    i4 = V->size[0] * V->size[1];
    V->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)V, i4, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    i4 = V->size[0] * V->size[1];
    V->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)V, i4, (int32_T)sizeof(real_T),
                      &u_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i4 = 0; i4 < loop_ub; i4++) {
      V->data[i4] = 0.0;
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

  emxFree_real_T(&r3);
  emxFree_real_T(&b);
  emxFree_real_T(&U);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (logmapSRi.c) */
