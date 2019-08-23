/*
 * logmapSRi.c
 *
 * Code generation for function 'logmapSRi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedPX.h"
#include "logmapSRi.h"
#include "eml_error.h"
#include "power.h"
#include "EstimatedPX_emxutil.h"
#include "diag.h"
#include "expmapPSR.h"
#include "rdivide.h"
#include "repmat.h"
#include "sqrt.h"
#include "sum.h"
#include "EstimatedPX_mexutil.h"
#include "EstimatedPX_data.h"

/* Variable Definitions */
static emlrtRSInfo k_emlrtRSI = { 11, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo l_emlrtRSI = { 12, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo m_emlrtRSI = { 13, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo n_emlrtRSI = { 14, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo o_emlrtRSI = { 15, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo p_emlrtRSI = { 16, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo q_emlrtRSI = { 17, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo r_emlrtRSI = { 18, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo lb_emlrtRSI = { 15, "acos",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elfun/acos.m" };

static emlrtRTEInfo t_emlrtRTEI = { 1, 14, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRTEInfo u_emlrtRTEI = { 11, 1, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRTEInfo v_emlrtRTEI = { 12, 1, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRTEInfo w_emlrtRTEI = { 13, 1, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtECInfo c_emlrtECI = { 2, 12, 5, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 14, 1, "normU", "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m", 0
};

static emlrtBCInfo i_emlrtBCI = { -1, -1, 16, 1, "temp", "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m", 0
};

static emlrtBCInfo j_emlrtBCI = { -1, -1, 17, 1, "temp", "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m", 0
};

/* Function Definitions */
void logmapSRi(const emlrtStack *sp, const emxArray_real_T *x, const
               emxArray_real_T *Y, emxArray_real_T *V)
{
  emxArray_real_T *normU;
  int32_T i5;
  int32_T loop_ub;
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv10[45];
  int32_T i;
  static const char_T cv11[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv9[2] = { 1, 21 };

  char_T cv12[21];
  static const char_T cv13[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *temp;
  emxArray_real_T *r6;
  int32_T i6;
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
  static const int32_T iv10[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv11[2] = { 1, 21 };

  emxArray_real_T *U;
  emxArray_real_T *r7;
  int32_T b_loop_ub;
  int32_T i7;
  uint32_T unnamed_idx_0;
  int32_T b_Y[2];
  int32_T b_U[2];
  emxArray_boolean_T *b_normU;
  emxArray_int32_T *r8;
  emxArray_real_T *c_U;
  emxArray_boolean_T *b_temp;
  emxArray_boolean_T *c_temp;
  const mxArray *e_y;
  static const int32_T iv12[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv13[2] = { 1, 21 };

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
  emxInit_real_T(sp, &normU, 2, &w_emlrtRTEI, true);

  /*  compute the log map on sphere log_x(Y)  */
  /*  Input: */
  /*      x - d-by-1 vector */
  /*      Y - d-by-m matrix, each column an atom (d-by-1) */
  /*  Output: */
  /*      V - logmap of each column of Y at x (d-by-m matrix) */
  st.site = &k_emlrtRSI;
  i5 = normU->size[0] * normU->size[1];
  normU->size[0] = 1;
  normU->size[1] = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)normU, i5, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = x->size[0];
  for (i5 = 0; i5 < loop_ub; i5++) {
    normU->data[normU->size[0] * i5] = x->data[i5];
  }

  b_st.site = &t_emlrtRSI;
  if (!(normU->size[1] == Y->size[0])) {
    if ((normU->size[1] == 1) || ((Y->size[0] == 1) && (Y->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      y = NULL;
      m2 = emlrtCreateCharArray(2, iv8);
      for (i = 0; i < 45; i++) {
        cv10[i] = cv11[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv10);
      emlrtAssign(&y, m2);
      c_st.site = &tb_emlrtRSI;
      d_st.site = &ec_emlrtRSI;
      error(&c_st, b_message(&d_st, y, &c_emlrtMCI), &d_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      b_y = NULL;
      m2 = emlrtCreateCharArray(2, iv9);
      for (i = 0; i < 21; i++) {
        cv12[i] = cv13[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m2, cv12);
      emlrtAssign(&b_y, m2);
      c_st.site = &ub_emlrtRSI;
      d_st.site = &fc_emlrtRSI;
      error(&c_st, b_message(&d_st, b_y, &e_emlrtMCI), &f_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &temp, 2, &u_emlrtRTEI, true);
  emxInit_real_T(&st, &r6, 2, &t_emlrtRTEI, true);
  if ((normU->size[1] == 1) || (Y->size[0] == 1)) {
    i5 = temp->size[0] * temp->size[1];
    temp->size[0] = 1;
    temp->size[1] = Y->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp, i5, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = Y->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      temp->data[temp->size[0] * i5] = 0.0;
      i = normU->size[1];
      for (i6 = 0; i6 < i; i6++) {
        temp->data[temp->size[0] * i5] += normU->data[normU->size[0] * i6] *
          Y->data[i6 + Y->size[0] * i5];
      }
    }
  } else {
    unnamed_idx_1 = (uint32_T)Y->size[1];
    i5 = r6->size[0] * r6->size[1];
    r6->size[0] = 1;
    emxEnsureCapacity(&st, (emxArray__common *)r6, i5, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    i5 = r6->size[0] * r6->size[1];
    r6->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r6, i5, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_1;
    for (i5 = 0; i5 < loop_ub; i5++) {
      r6->data[i5] = 0.0;
    }

    b_st.site = &s_emlrtRSI;
    c_st.site = &u_emlrtRSI;
    i5 = temp->size[0] * temp->size[1];
    temp->size[0] = 1;
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i5, (int32_T)sizeof
                      (real_T), &t_emlrtRTEI);
    i5 = temp->size[0] * temp->size[1];
    temp->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i5, (int32_T)sizeof
                      (real_T), &t_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_1;
    for (i5 = 0; i5 < loop_ub; i5++) {
      temp->data[i5] = 0.0;
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

  emxInit_real_T(&st, &a, 2, &t_emlrtRTEI, true);
  emxInit_real_T(&st, &b, 2, &t_emlrtRTEI, true);

  /* 1-by-m */
  st.site = &l_emlrtRSI;
  repmat(&st, x, Y->size[1], a);
  st.site = &l_emlrtRSI;
  diag(&st, temp, b);
  st.site = &l_emlrtRSI;
  b_st.site = &t_emlrtRSI;
  if (!(a->size[1] == b->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv10);
      for (i = 0; i < 45; i++) {
        cv10[i] = cv11[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv10);
      emlrtAssign(&c_y, m2);
      c_st.site = &tb_emlrtRSI;
      d_st.site = &ec_emlrtRSI;
      error(&c_st, b_message(&d_st, c_y, &c_emlrtMCI), &d_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      d_y = NULL;
      m2 = emlrtCreateCharArray(2, iv11);
      for (i = 0; i < 21; i++) {
        cv12[i] = cv13[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m2, cv12);
      emlrtAssign(&d_y, m2);
      c_st.site = &ub_emlrtRSI;
      d_st.site = &fc_emlrtRSI;
      error(&c_st, b_message(&d_st, d_y, &e_emlrtMCI), &f_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &U, 2, &v_emlrtRTEI, true);
  emxInit_real_T(&st, &r7, 2, &t_emlrtRTEI, true);
  if ((a->size[1] == 1) || (b->size[0] == 1)) {
    i5 = U->size[0] * U->size[1];
    U->size[0] = a->size[0];
    U->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)U, i5, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = a->size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      i = b->size[1];
      for (i6 = 0; i6 < i; i6++) {
        U->data[i5 + U->size[0] * i6] = 0.0;
        b_loop_ub = a->size[1];
        for (i7 = 0; i7 < b_loop_ub; i7++) {
          U->data[i5 + U->size[0] * i6] += a->data[i5 + a->size[0] * i7] *
            b->data[i7 + b->size[0] * i6];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i5 = r7->size[0] * r7->size[1];
    r7->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r7, i5, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    i5 = r7->size[0] * r7->size[1];
    r7->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r7, i5, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i5 = 0; i5 < loop_ub; i5++) {
      r7->data[i5] = 0.0;
    }

    b_st.site = &s_emlrtRSI;
    c_st.site = &u_emlrtRSI;
    i5 = U->size[0] * U->size[1];
    U->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)U, i5, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    i5 = U->size[0] * U->size[1];
    U->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)U, i5, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i5 = 0; i5 < loop_ub; i5++) {
      U->data[i5] = 0.0;
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
  for (i5 = 0; i5 < 2; i5++) {
    b_Y[i5] = Y->size[i5];
  }

  for (i5 = 0; i5 < 2; i5++) {
    b_U[i5] = U->size[i5];
  }

  emlrtSizeEqCheck2DFastR2012b(b_Y, b_U, &c_emlrtECI, sp);
  i5 = U->size[0] * U->size[1];
  U->size[0] = Y->size[0];
  U->size[1] = Y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)U, i5, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = Y->size[0] * Y->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    U->data[i5] = Y->data[i5] - U->data[i5];
  }

  emxInit_boolean_T(sp, &b_normU, 2, &t_emlrtRTEI, true);

  /*  d-ny-m */
  power(sp, U, r7);
  st.site = &m_emlrtRSI;
  sum(&st, r7, normU);
  st.site = &m_emlrtRSI;
  b_sqrt(&st, normU);

  /* 1-by-m */
  i5 = b_normU->size[0] * b_normU->size[1];
  b_normU->size[0] = 1;
  b_normU->size[1] = normU->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_normU, i5, (int32_T)sizeof
                    (boolean_T), &t_emlrtRTEI);
  loop_ub = normU->size[0] * normU->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    b_normU->data[i5] = (normU->data[i5] == 0.0);
  }

  b_emxInit_int32_T(sp, &r8, 2, &t_emlrtRTEI, true);
  st.site = &n_emlrtRSI;
  eml_li_find(&st, b_normU, r8);
  i = normU->size[1];
  loop_ub = r8->size[0] * r8->size[1];
  emxFree_boolean_T(&b_normU);
  for (i5 = 0; i5 < loop_ub; i5++) {
    i6 = r8->data[i5];
    normU->data[emlrtDynamicBoundsCheckFastR2012b(i6, 1, i, &h_emlrtBCI, sp) - 1]
      = 1.0;
  }

  emxInit_real_T(sp, &c_U, 2, &t_emlrtRTEI, true);
  st.site = &o_emlrtRSI;
  b_repmat(&st, normU, Y->size[0], r7);
  i5 = c_U->size[0] * c_U->size[1];
  c_U->size[0] = U->size[0];
  c_U->size[1] = U->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_U, i5, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = U->size[0] * U->size[1];
  emxFree_real_T(&normU);
  for (i5 = 0; i5 < loop_ub; i5++) {
    c_U->data[i5] = U->data[i5];
  }

  emxInit_boolean_T(sp, &b_temp, 2, &t_emlrtRTEI, true);
  st.site = &o_emlrtRSI;
  rdivide(&st, c_U, r7, U);
  i5 = b_temp->size[0] * b_temp->size[1];
  b_temp->size[0] = 1;
  b_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_temp, i5, (int32_T)sizeof
                    (boolean_T), &t_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  emxFree_real_T(&c_U);
  for (i5 = 0; i5 < loop_ub; i5++) {
    b_temp->data[i5] = (temp->data[i5] > 1.0);
  }

  st.site = &p_emlrtRSI;
  eml_li_find(&st, b_temp, r8);
  i = temp->size[1];
  loop_ub = r8->size[0] * r8->size[1];
  emxFree_boolean_T(&b_temp);
  for (i5 = 0; i5 < loop_ub; i5++) {
    i6 = r8->data[i5];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i6, 1, i, &i_emlrtBCI, sp) - 1]
      = 1.0;
  }

  emxInit_boolean_T(sp, &c_temp, 2, &t_emlrtRTEI, true);
  i5 = c_temp->size[0] * c_temp->size[1];
  c_temp->size[0] = 1;
  c_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_temp, i5, (int32_T)sizeof
                    (boolean_T), &t_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    c_temp->data[i5] = (temp->data[i5] < -1.0);
  }

  st.site = &q_emlrtRSI;
  eml_li_find(&st, c_temp, r8);
  i = temp->size[1];
  loop_ub = r8->size[0] * r8->size[1];
  emxFree_boolean_T(&c_temp);
  for (i5 = 0; i5 < loop_ub; i5++) {
    i6 = r8->data[i5];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i6, 1, i, &j_emlrtBCI, sp) - 1]
      = -1.0;
  }

  emxFree_int32_T(&r8);
  st.site = &r_emlrtRSI;
  i5 = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = temp->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)r6, i5, (int32_T)sizeof(real_T),
                    &t_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    r6->data[i5] = temp->data[i5];
  }

  for (i = 0; i < temp->size[1]; i++) {
    if ((temp->data[i] < -1.0) || (1.0 < temp->data[i])) {
      b_st.site = &lb_emlrtRSI;
      b_eml_error(&b_st);
    }
  }

  for (i = 0; i < temp->size[1]; i++) {
    r6->data[i] = muDoubleScalarAcos(r6->data[i]);
  }

  emxFree_real_T(&temp);
  st.site = &r_emlrtRSI;
  diag(&st, r6, b);
  st.site = &r_emlrtRSI;
  b_st.site = &t_emlrtRSI;
  emxFree_real_T(&r6);
  if (!(U->size[1] == b->size[0])) {
    if (((U->size[0] == 1) && (U->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      e_y = NULL;
      m2 = emlrtCreateCharArray(2, iv12);
      for (i = 0; i < 45; i++) {
        cv10[i] = cv11[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m2, cv10);
      emlrtAssign(&e_y, m2);
      c_st.site = &tb_emlrtRSI;
      d_st.site = &ec_emlrtRSI;
      error(&c_st, b_message(&d_st, e_y, &c_emlrtMCI), &d_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      f_y = NULL;
      m2 = emlrtCreateCharArray(2, iv13);
      for (i = 0; i < 21; i++) {
        cv12[i] = cv13[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m2, cv12);
      emlrtAssign(&f_y, m2);
      c_st.site = &ub_emlrtRSI;
      d_st.site = &fc_emlrtRSI;
      error(&c_st, b_message(&d_st, f_y, &e_emlrtMCI), &f_emlrtMCI);
    }
  }

  if ((U->size[1] == 1) || (b->size[0] == 1)) {
    i5 = V->size[0] * V->size[1];
    V->size[0] = U->size[0];
    V->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)V, i5, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = U->size[0];
    for (i5 = 0; i5 < loop_ub; i5++) {
      i = b->size[1];
      for (i6 = 0; i6 < i; i6++) {
        V->data[i5 + V->size[0] * i6] = 0.0;
        b_loop_ub = U->size[1];
        for (i7 = 0; i7 < b_loop_ub; i7++) {
          V->data[i5 + V->size[0] * i6] += U->data[i5 + U->size[0] * i7] *
            b->data[i7 + b->size[0] * i6];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)U->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i5 = r7->size[0] * r7->size[1];
    r7->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r7, i5, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    i5 = r7->size[0] * r7->size[1];
    r7->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r7, i5, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i5 = 0; i5 < loop_ub; i5++) {
      r7->data[i5] = 0.0;
    }

    b_st.site = &s_emlrtRSI;
    c_st.site = &u_emlrtRSI;
    i5 = V->size[0] * V->size[1];
    V->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)V, i5, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    i5 = V->size[0] * V->size[1];
    V->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)V, i5, (int32_T)sizeof(real_T),
                      &t_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
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

  emxFree_real_T(&r7);
  emxFree_real_T(&b);
  emxFree_real_T(&U);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (logmapSRi.c) */
