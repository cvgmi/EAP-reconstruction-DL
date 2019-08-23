/*
 * expmapPSR.c
 *
 * Code generation for function 'expmapPSR'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD.h"
#include "expmapPSR.h"
#include "power.h"
#include "optAPSR_AGD_emxutil.h"
#include "diag.h"
#include "sin.h"
#include "cos.h"
#include "rdivide.h"
#include "repmat.h"
#include "logmapSRi.h"
#include "sqrt.h"
#include "sum.h"
#include "optAPSR_AGD_mexutil.h"
#include "optAPSR_AGD_data.h"

/* Variable Definitions */
static emlrtRSInfo mc_emlrtRSI = { 12, "expmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/expmapPSR.m"
};

static emlrtRSInfo nc_emlrtRSI = { 14, "expmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/expmapPSR.m"
};

static emlrtRSInfo oc_emlrtRSI = { 15, "expmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/expmapPSR.m"
};

static emlrtRSInfo pc_emlrtRSI = { 16, "expmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/expmapPSR.m"
};

static emlrtRTEInfo ib_emlrtRTEI = { 1, 14, "expmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/expmapPSR.m"
};

static emlrtRTEInfo jb_emlrtRTEI = { 12, 1, "expmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/expmapPSR.m"
};

static emlrtRTEInfo kb_emlrtRTEI = { 13, 1, "expmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/expmapPSR.m"
};

static emlrtECInfo j_emlrtECI = { 2, 16, 5, "expmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/expmapPSR.m"
};

static emlrtBCInfo w_emlrtBCI = { -1, -1, 14, 1, "normV", "expmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/expmapPSR.m",
  0 };

/* Function Definitions */
void expmapPSR(const emlrtStack *sp, const emxArray_real_T *X, emxArray_real_T
               *V, emxArray_real_T *Y)
{
  emxArray_real_T *normV;
  emxArray_real_T *normV0;
  emxArray_real_T *r7;
  int32_T i11;
  int32_T loop_ub;
  emxArray_boolean_T *b_normV;
  emxArray_int32_T *r8;
  int32_T i;
  int32_T i12;
  emxArray_real_T *b_V;
  emxArray_real_T *b;
  const mxArray *y;
  static const int32_T iv31[2] = { 1, 45 };

  const mxArray *m9;
  char_T cv32[45];
  static const char_T cv33[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv32[2] = { 1, 21 };

  char_T cv34[21];
  static const char_T cv35[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  int32_T b_Y;
  int32_T i13;
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
  static const int32_T iv33[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv34[2] = { 1, 21 };

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
  b_emxInit_real_T(sp, &normV, 2, &jb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &normV0, 2, &kb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r7, 2, &ib_emlrtRTEI, true);

  /*  compute the exp map on product space of sphere exp_X(V) */
  /*  Input: */
  /*      X, V - d-by-N matrices */
  /*      to ensure exp map is a bijection, |v| \in [0,\pi] */
  /*  Output: */
  /*      Y - expmap (d-by-N vector) */
  /*  same as expmapSRi in DL_SR */
  power(sp, V, r7);
  st.site = &mc_emlrtRSI;
  sum(&st, r7, normV);
  st.site = &mc_emlrtRSI;
  b_sqrt(&st, normV);

  /* 1-by-m */
  i11 = normV0->size[0] * normV0->size[1];
  normV0->size[0] = 1;
  normV0->size[1] = normV->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)normV0, i11, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = normV->size[0] * normV->size[1];
  for (i11 = 0; i11 < loop_ub; i11++) {
    normV0->data[i11] = normV->data[i11];
  }

  emxInit_boolean_T(sp, &b_normV, 2, &ib_emlrtRTEI, true);
  i11 = b_normV->size[0] * b_normV->size[1];
  b_normV->size[0] = 1;
  b_normV->size[1] = normV->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_normV, i11, (int32_T)sizeof
                    (boolean_T), &ib_emlrtRTEI);
  loop_ub = normV->size[0] * normV->size[1];
  for (i11 = 0; i11 < loop_ub; i11++) {
    b_normV->data[i11] = (normV->data[i11] == 0.0);
  }

  b_emxInit_int32_T(sp, &r8, 2, &ib_emlrtRTEI, true);
  st.site = &nc_emlrtRSI;
  eml_li_find(&st, b_normV, r8);
  i = normV->size[1];
  loop_ub = r8->size[0] * r8->size[1];
  emxFree_boolean_T(&b_normV);
  for (i11 = 0; i11 < loop_ub; i11++) {
    i12 = r8->data[i11];
    normV->data[emlrtDynamicBoundsCheckFastR2012b(i12, 1, i, &w_emlrtBCI, sp) -
      1] = 1.0;
  }

  emxFree_int32_T(&r8);
  b_emxInit_real_T(sp, &b_V, 2, &ib_emlrtRTEI, true);
  st.site = &oc_emlrtRSI;
  b_repmat(&st, normV, X->size[0], r7);
  i11 = b_V->size[0] * b_V->size[1];
  b_V->size[0] = V->size[0];
  b_V->size[1] = V->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_V, i11, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = V->size[0] * V->size[1];
  for (i11 = 0; i11 < loop_ub; i11++) {
    b_V->data[i11] = V->data[i11];
  }

  st.site = &oc_emlrtRSI;
  rdivide(&st, b_V, r7, V);
  i11 = normV->size[0] * normV->size[1];
  normV->size[0] = 1;
  normV->size[1] = normV0->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)normV, i11, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = normV0->size[0] * normV0->size[1];
  emxFree_real_T(&b_V);
  for (i11 = 0; i11 < loop_ub; i11++) {
    normV->data[i11] = normV0->data[i11];
  }

  b_emxInit_real_T(sp, &b, 2, &ib_emlrtRTEI, true);
  b_cos(normV);
  st.site = &pc_emlrtRSI;
  diag(&st, normV, b);
  st.site = &pc_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  emxFree_real_T(&normV);
  if (!(X->size[1] == b->size[0])) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      y = NULL;
      m9 = emlrtCreateCharArray(2, iv31);
      for (i = 0; i < 45; i++) {
        cv32[i] = cv33[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv32);
      emlrtAssign(&y, m9);
      c_st.site = &hd_emlrtRSI;
      d_st.site = &sd_emlrtRSI;
      error(&c_st, b_message(&d_st, y, &e_emlrtMCI), &f_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      b_y = NULL;
      m9 = emlrtCreateCharArray(2, iv32);
      for (i = 0; i < 21; i++) {
        cv34[i] = cv35[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m9, cv34);
      emlrtAssign(&b_y, m9);
      c_st.site = &id_emlrtRSI;
      d_st.site = &td_emlrtRSI;
      error(&c_st, b_message(&d_st, b_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((X->size[1] == 1) || (b->size[0] == 1)) {
    i11 = Y->size[0] * Y->size[1];
    Y->size[0] = X->size[0];
    Y->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)Y, i11, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = X->size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      i = b->size[1];
      for (i12 = 0; i12 < i; i12++) {
        Y->data[i11 + Y->size[0] * i12] = 0.0;
        b_Y = X->size[1];
        for (i13 = 0; i13 < b_Y; i13++) {
          Y->data[i11 + Y->size[0] * i12] += X->data[i11 + X->size[0] * i13] *
            b->data[i13 + b->size[0] * i12];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)X->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i11 = r7->size[0] * r7->size[1];
    r7->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r7, i11, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    i11 = r7->size[0] * r7->size[1];
    r7->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r7, i11, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i11 = 0; i11 < loop_ub; i11++) {
      r7->data[i11] = 0.0;
    }

    b_st.site = &fb_emlrtRSI;
    c_st.site = &hb_emlrtRSI;
    i11 = Y->size[0] * Y->size[1];
    Y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)Y, i11, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    i11 = Y->size[0] * Y->size[1];
    Y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)Y, i11, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i11 = 0; i11 < loop_ub; i11++) {
      Y->data[i11] = 0.0;
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
  st.site = &pc_emlrtRSI;
  diag(&st, normV0, b);
  st.site = &pc_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  emxFree_real_T(&normV0);
  if (!(V->size[1] == b->size[0])) {
    if (((V->size[0] == 1) && (V->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      c_y = NULL;
      m9 = emlrtCreateCharArray(2, iv33);
      for (i = 0; i < 45; i++) {
        cv32[i] = cv33[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m9, cv32);
      emlrtAssign(&c_y, m9);
      c_st.site = &hd_emlrtRSI;
      d_st.site = &sd_emlrtRSI;
      error(&c_st, b_message(&d_st, c_y, &e_emlrtMCI), &f_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      d_y = NULL;
      m9 = emlrtCreateCharArray(2, iv34);
      for (i = 0; i < 21; i++) {
        cv34[i] = cv35[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m9, cv34);
      emlrtAssign(&d_y, m9);
      c_st.site = &id_emlrtRSI;
      d_st.site = &td_emlrtRSI;
      error(&c_st, b_message(&d_st, d_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  b_emxInit_real_T(&st, &C, 2, &ib_emlrtRTEI, true);
  if ((V->size[1] == 1) || (b->size[0] == 1)) {
    i11 = C->size[0] * C->size[1];
    C->size[0] = V->size[0];
    C->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)C, i11, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = V->size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      i = b->size[1];
      for (i12 = 0; i12 < i; i12++) {
        C->data[i11 + C->size[0] * i12] = 0.0;
        b_Y = V->size[1];
        for (i13 = 0; i13 < b_Y; i13++) {
          C->data[i11 + C->size[0] * i12] += V->data[i11 + V->size[0] * i13] *
            b->data[i13 + b->size[0] * i12];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)V->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i11 = r7->size[0] * r7->size[1];
    r7->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r7, i11, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    i11 = r7->size[0] * r7->size[1];
    r7->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r7, i11, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i11 = 0; i11 < loop_ub; i11++) {
      r7->data[i11] = 0.0;
    }

    b_st.site = &fb_emlrtRSI;
    c_st.site = &hb_emlrtRSI;
    i11 = C->size[0] * C->size[1];
    C->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i11, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    i11 = C->size[0] * C->size[1];
    C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i11, (int32_T)sizeof(real_T),
                      &ib_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i11 = 0; i11 < loop_ub; i11++) {
      C->data[i11] = 0.0;
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

  emxFree_real_T(&r7);
  emxFree_real_T(&b);
  for (i11 = 0; i11 < 2; i11++) {
    c_Y[i11] = Y->size[i11];
  }

  for (i11 = 0; i11 < 2; i11++) {
    b_C[i11] = C->size[i11];
  }

  emlrtSizeEqCheck2DFastR2012b(c_Y, b_C, &j_emlrtECI, sp);
  i11 = Y->size[0] * Y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Y, i11, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  i = Y->size[0];
  b_Y = Y->size[1];
  loop_ub = i * b_Y;
  for (i11 = 0; i11 < loop_ub; i11++) {
    Y->data[i11] += C->data[i11];
  }

  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (expmapPSR.c) */
