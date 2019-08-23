/*
 * logmapSRi.c
 *
 * Code generation for function 'logmapSRi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "logmapSRi.h"
#include "eml_error.h"
#include "optAPSR_sigma_emxutil.h"
#include "power.h"
#include "diag.h"
#include "expmapPSR.h"
#include "rdivide.h"
#include "repmat.h"
#include "sqrt.h"
#include "sum.h"
#include "optAPSR_sigma_mexutil.h"
#include "optAPSR_sigma_data.h"

/* Variable Definitions */
static emlrtRSInfo u_emlrtRSI = { 11, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo v_emlrtRSI = { 12, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo w_emlrtRSI = { 13, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo x_emlrtRSI = { 14, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo y_emlrtRSI = { 15, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo ab_emlrtRSI = { 16, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo bb_emlrtRSI = { 17, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRSInfo cb_emlrtRSI = { 18, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRTEInfo db_emlrtRTEI = { 1, 14, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 11, 1, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 12, 1, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 13, 1, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtECInfo j_emlrtECI = { 2, 12, 5, "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m" };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 14, 1, "normU", "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m", 0
};

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 16, 1, "temp", "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m", 0
};

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 17, 1, "temp", "logmapSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapSRi.m", 0
};

/* Function Definitions */
void logmapSRi(const emlrtStack *sp, const emxArray_real_T *x, const
               emxArray_real_T *Y, emxArray_real_T *V)
{
  emxArray_real_T *normU;
  int32_T i13;
  int32_T loop_ub;
  const mxArray *y;
  static const int32_T iv24[2] = { 1, 45 };

  const mxArray *m3;
  char_T cv20[45];
  int32_T i;
  static const char_T cv21[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv25[2] = { 1, 21 };

  char_T cv22[21];
  static const char_T cv23[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *temp;
  emxArray_real_T *r10;
  int32_T i14;
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
  static const int32_T iv26[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv27[2] = { 1, 21 };

  emxArray_real_T *U;
  emxArray_real_T *r11;
  int32_T b_loop_ub;
  int32_T i15;
  uint32_T unnamed_idx_0;
  int32_T b_Y[2];
  int32_T b_U[2];
  emxArray_boolean_T *b_normU;
  emxArray_int32_T *r12;
  emxArray_real_T *c_U;
  emxArray_boolean_T *b_temp;
  emxArray_boolean_T *c_temp;
  const mxArray *e_y;
  static const int32_T iv28[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv29[2] = { 1, 21 };

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
  emxInit_real_T(sp, &normU, 2, &gb_emlrtRTEI, true);

  /*  compute the log map on sphere log_x(Y)  */
  /*  Input: */
  /*      x - d-by-1 vector */
  /*      Y - d-by-m matrix, each column an atom (d-by-1) */
  /*  Output: */
  /*      V - logmap of each column of Y at x (d-by-m matrix) */
  st.site = &u_emlrtRSI;
  i13 = normU->size[0] * normU->size[1];
  normU->size[0] = 1;
  normU->size[1] = x->size[0];
  emxEnsureCapacity(&st, (emxArray__common *)normU, i13, (int32_T)sizeof(real_T),
                    &db_emlrtRTEI);
  loop_ub = x->size[0];
  for (i13 = 0; i13 < loop_ub; i13++) {
    normU->data[normU->size[0] * i13] = x->data[i13];
  }

  b_st.site = &eb_emlrtRSI;
  if (!(normU->size[1] == Y->size[0])) {
    if ((normU->size[1] == 1) || ((Y->size[0] == 1) && (Y->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      y = NULL;
      m3 = emlrtCreateCharArray(2, iv24);
      for (i = 0; i < 45; i++) {
        cv20[i] = cv21[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv20);
      emlrtAssign(&y, m3);
      c_st.site = &jd_emlrtRSI;
      d_st.site = &ud_emlrtRSI;
      error(&c_st, b_message(&d_st, y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      b_y = NULL;
      m3 = emlrtCreateCharArray(2, iv25);
      for (i = 0; i < 21; i++) {
        cv22[i] = cv23[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m3, cv22);
      emlrtAssign(&b_y, m3);
      c_st.site = &kd_emlrtRSI;
      d_st.site = &vd_emlrtRSI;
      error(&c_st, b_message(&d_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &temp, 2, &eb_emlrtRTEI, true);
  emxInit_real_T(&st, &r10, 2, &db_emlrtRTEI, true);
  if ((normU->size[1] == 1) || (Y->size[0] == 1)) {
    i13 = temp->size[0] * temp->size[1];
    temp->size[0] = 1;
    temp->size[1] = Y->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)temp, i13, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    loop_ub = Y->size[1];
    for (i13 = 0; i13 < loop_ub; i13++) {
      temp->data[temp->size[0] * i13] = 0.0;
      i = normU->size[1];
      for (i14 = 0; i14 < i; i14++) {
        temp->data[temp->size[0] * i13] += normU->data[normU->size[0] * i14] *
          Y->data[i14 + Y->size[0] * i13];
      }
    }
  } else {
    unnamed_idx_1 = (uint32_T)Y->size[1];
    i13 = r10->size[0] * r10->size[1];
    r10->size[0] = 1;
    emxEnsureCapacity(&st, (emxArray__common *)r10, i13, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    i13 = r10->size[0] * r10->size[1];
    r10->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r10, i13, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_1;
    for (i13 = 0; i13 < loop_ub; i13++) {
      r10->data[i13] = 0.0;
    }

    b_st.site = &db_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    i13 = temp->size[0] * temp->size[1];
    temp->size[0] = 1;
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i13, (int32_T)sizeof
                      (real_T), &db_emlrtRTEI);
    i13 = temp->size[0] * temp->size[1];
    temp->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)temp, i13, (int32_T)sizeof
                      (real_T), &db_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_1;
    for (i13 = 0; i13 < loop_ub; i13++) {
      temp->data[i13] = 0.0;
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

  emxInit_real_T(&st, &a, 2, &db_emlrtRTEI, true);
  emxInit_real_T(&st, &b, 2, &db_emlrtRTEI, true);

  /* 1-by-m */
  st.site = &v_emlrtRSI;
  repmat(&st, x, Y->size[1], a);
  st.site = &v_emlrtRSI;
  diag(&st, temp, b);
  st.site = &v_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  if (!(a->size[1] == b->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      c_y = NULL;
      m3 = emlrtCreateCharArray(2, iv26);
      for (i = 0; i < 45; i++) {
        cv20[i] = cv21[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv20);
      emlrtAssign(&c_y, m3);
      c_st.site = &jd_emlrtRSI;
      d_st.site = &ud_emlrtRSI;
      error(&c_st, b_message(&d_st, c_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      d_y = NULL;
      m3 = emlrtCreateCharArray(2, iv27);
      for (i = 0; i < 21; i++) {
        cv22[i] = cv23[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m3, cv22);
      emlrtAssign(&d_y, m3);
      c_st.site = &kd_emlrtRSI;
      d_st.site = &vd_emlrtRSI;
      error(&c_st, b_message(&d_st, d_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &U, 2, &fb_emlrtRTEI, true);
  emxInit_real_T(&st, &r11, 2, &db_emlrtRTEI, true);
  if ((a->size[1] == 1) || (b->size[0] == 1)) {
    i13 = U->size[0] * U->size[1];
    U->size[0] = a->size[0];
    U->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)U, i13, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    loop_ub = a->size[0];
    for (i13 = 0; i13 < loop_ub; i13++) {
      i = b->size[1];
      for (i14 = 0; i14 < i; i14++) {
        U->data[i13 + U->size[0] * i14] = 0.0;
        b_loop_ub = a->size[1];
        for (i15 = 0; i15 < b_loop_ub; i15++) {
          U->data[i13 + U->size[0] * i14] += a->data[i13 + a->size[0] * i15] *
            b->data[i15 + b->size[0] * i14];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i13 = r11->size[0] * r11->size[1];
    r11->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r11, i13, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    i13 = r11->size[0] * r11->size[1];
    r11->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r11, i13, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i13 = 0; i13 < loop_ub; i13++) {
      r11->data[i13] = 0.0;
    }

    b_st.site = &db_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    i13 = U->size[0] * U->size[1];
    U->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)U, i13, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    i13 = U->size[0] * U->size[1];
    U->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)U, i13, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i13 = 0; i13 < loop_ub; i13++) {
      U->data[i13] = 0.0;
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
  for (i13 = 0; i13 < 2; i13++) {
    b_Y[i13] = Y->size[i13];
  }

  for (i13 = 0; i13 < 2; i13++) {
    b_U[i13] = U->size[i13];
  }

  emlrtSizeEqCheck2DFastR2012b(b_Y, b_U, &j_emlrtECI, sp);
  i13 = U->size[0] * U->size[1];
  U->size[0] = Y->size[0];
  U->size[1] = Y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)U, i13, (int32_T)sizeof(real_T),
                    &db_emlrtRTEI);
  loop_ub = Y->size[0] * Y->size[1];
  for (i13 = 0; i13 < loop_ub; i13++) {
    U->data[i13] = Y->data[i13] - U->data[i13];
  }

  emxInit_boolean_T(sp, &b_normU, 2, &db_emlrtRTEI, true);

  /*  d-ny-m */
  power(sp, U, r11);
  st.site = &w_emlrtRSI;
  sum(&st, r11, normU);
  st.site = &w_emlrtRSI;
  b_sqrt(&st, normU);

  /* 1-by-m */
  i13 = b_normU->size[0] * b_normU->size[1];
  b_normU->size[0] = 1;
  b_normU->size[1] = normU->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_normU, i13, (int32_T)sizeof
                    (boolean_T), &db_emlrtRTEI);
  loop_ub = normU->size[0] * normU->size[1];
  for (i13 = 0; i13 < loop_ub; i13++) {
    b_normU->data[i13] = (normU->data[i13] == 0.0);
  }

  b_emxInit_int32_T(sp, &r12, 2, &db_emlrtRTEI, true);
  st.site = &x_emlrtRSI;
  eml_li_find(&st, b_normU, r12);
  i = normU->size[1];
  loop_ub = r12->size[0] * r12->size[1];
  emxFree_boolean_T(&b_normU);
  for (i13 = 0; i13 < loop_ub; i13++) {
    i14 = r12->data[i13];
    normU->data[emlrtDynamicBoundsCheckFastR2012b(i14, 1, i, &ab_emlrtBCI, sp) -
      1] = 1.0;
  }

  emxInit_real_T(sp, &c_U, 2, &db_emlrtRTEI, true);
  st.site = &y_emlrtRSI;
  b_repmat(&st, normU, Y->size[0], r11);
  i13 = c_U->size[0] * c_U->size[1];
  c_U->size[0] = U->size[0];
  c_U->size[1] = U->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_U, i13, (int32_T)sizeof(real_T),
                    &db_emlrtRTEI);
  loop_ub = U->size[0] * U->size[1];
  emxFree_real_T(&normU);
  for (i13 = 0; i13 < loop_ub; i13++) {
    c_U->data[i13] = U->data[i13];
  }

  emxInit_boolean_T(sp, &b_temp, 2, &db_emlrtRTEI, true);
  st.site = &y_emlrtRSI;
  rdivide(&st, c_U, r11, U);
  i13 = b_temp->size[0] * b_temp->size[1];
  b_temp->size[0] = 1;
  b_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_temp, i13, (int32_T)sizeof
                    (boolean_T), &db_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  emxFree_real_T(&c_U);
  for (i13 = 0; i13 < loop_ub; i13++) {
    b_temp->data[i13] = (temp->data[i13] > 1.0);
  }

  st.site = &ab_emlrtRSI;
  eml_li_find(&st, b_temp, r12);
  i = temp->size[1];
  loop_ub = r12->size[0] * r12->size[1];
  emxFree_boolean_T(&b_temp);
  for (i13 = 0; i13 < loop_ub; i13++) {
    i14 = r12->data[i13];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i14, 1, i, &bb_emlrtBCI, sp) -
      1] = 1.0;
  }

  emxInit_boolean_T(sp, &c_temp, 2, &db_emlrtRTEI, true);
  i13 = c_temp->size[0] * c_temp->size[1];
  c_temp->size[0] = 1;
  c_temp->size[1] = temp->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_temp, i13, (int32_T)sizeof
                    (boolean_T), &db_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i13 = 0; i13 < loop_ub; i13++) {
    c_temp->data[i13] = (temp->data[i13] < -1.0);
  }

  st.site = &bb_emlrtRSI;
  eml_li_find(&st, c_temp, r12);
  i = temp->size[1];
  loop_ub = r12->size[0] * r12->size[1];
  emxFree_boolean_T(&c_temp);
  for (i13 = 0; i13 < loop_ub; i13++) {
    i14 = r12->data[i13];
    temp->data[emlrtDynamicBoundsCheckFastR2012b(i14, 1, i, &cb_emlrtBCI, sp) -
      1] = -1.0;
  }

  emxFree_int32_T(&r12);
  st.site = &cb_emlrtRSI;
  i13 = r10->size[0] * r10->size[1];
  r10->size[0] = 1;
  r10->size[1] = temp->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)r10, i13, (int32_T)sizeof(real_T),
                    &db_emlrtRTEI);
  loop_ub = temp->size[0] * temp->size[1];
  for (i13 = 0; i13 < loop_ub; i13++) {
    r10->data[i13] = temp->data[i13];
  }

  for (i = 0; i < temp->size[1]; i++) {
    if ((temp->data[i] < -1.0) || (1.0 < temp->data[i])) {
      b_st.site = &vb_emlrtRSI;
      b_eml_error(&b_st);
    }
  }

  for (i = 0; i < temp->size[1]; i++) {
    r10->data[i] = muDoubleScalarAcos(r10->data[i]);
  }

  emxFree_real_T(&temp);
  st.site = &cb_emlrtRSI;
  diag(&st, r10, b);
  st.site = &cb_emlrtRSI;
  b_st.site = &eb_emlrtRSI;
  emxFree_real_T(&r10);
  if (!(U->size[1] == b->size[0])) {
    if (((U->size[0] == 1) && (U->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      e_y = NULL;
      m3 = emlrtCreateCharArray(2, iv28);
      for (i = 0; i < 45; i++) {
        cv20[i] = cv21[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m3, cv20);
      emlrtAssign(&e_y, m3);
      c_st.site = &jd_emlrtRSI;
      d_st.site = &ud_emlrtRSI;
      error(&c_st, b_message(&d_st, e_y, &g_emlrtMCI), &h_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      f_y = NULL;
      m3 = emlrtCreateCharArray(2, iv29);
      for (i = 0; i < 21; i++) {
        cv22[i] = cv23[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m3, cv22);
      emlrtAssign(&f_y, m3);
      c_st.site = &kd_emlrtRSI;
      d_st.site = &vd_emlrtRSI;
      error(&c_st, b_message(&d_st, f_y, &i_emlrtMCI), &j_emlrtMCI);
    }
  }

  if ((U->size[1] == 1) || (b->size[0] == 1)) {
    i13 = V->size[0] * V->size[1];
    V->size[0] = U->size[0];
    V->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)V, i13, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    loop_ub = U->size[0];
    for (i13 = 0; i13 < loop_ub; i13++) {
      i = b->size[1];
      for (i14 = 0; i14 < i; i14++) {
        V->data[i13 + V->size[0] * i14] = 0.0;
        b_loop_ub = U->size[1];
        for (i15 = 0; i15 < b_loop_ub; i15++) {
          V->data[i13 + V->size[0] * i14] += U->data[i13 + U->size[0] * i15] *
            b->data[i15 + b->size[0] * i14];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)U->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i13 = r11->size[0] * r11->size[1];
    r11->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r11, i13, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    i13 = r11->size[0] * r11->size[1];
    r11->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r11, i13, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i13 = 0; i13 < loop_ub; i13++) {
      r11->data[i13] = 0.0;
    }

    b_st.site = &db_emlrtRSI;
    c_st.site = &fb_emlrtRSI;
    i13 = V->size[0] * V->size[1];
    V->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)V, i13, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    i13 = V->size[0] * V->size[1];
    V->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)V, i13, (int32_T)sizeof(real_T),
                      &db_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i13 = 0; i13 < loop_ub; i13++) {
      V->data[i13] = 0.0;
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

  emxFree_real_T(&r11);
  emxFree_real_T(&b);
  emxFree_real_T(&U);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (logmapSRi.c) */
