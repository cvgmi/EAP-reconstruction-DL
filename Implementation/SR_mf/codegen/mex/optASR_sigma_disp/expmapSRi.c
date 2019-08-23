/*
 * expmapSRi.c
 *
 * Code generation for function 'expmapSRi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "expmapSRi.h"
#include "power.h"
#include "optASR_sigma_disp_emxutil.h"
#include "diag.h"
#include "sin.h"
#include "cos.h"
#include "rdivide.h"
#include "repmat.h"
#include "logmapSRi.h"
#include "sqrt.h"
#include "sum.h"
#include "optASR_sigma_disp_mexutil.h"
#include "optASR_sigma_disp_data.h"

/* Variable Definitions */
static emlrtRSInfo lc_emlrtRSI = { 12, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtRSInfo mc_emlrtRSI = { 14, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtRSInfo nc_emlrtRSI = { 15, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtRSInfo oc_emlrtRSI = { 16, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtRTEInfo kb_emlrtRTEI = { 1, 14, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtRTEInfo lb_emlrtRTEI = { 12, 1, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtRTEInfo mb_emlrtRTEI = { 13, 1, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtECInfo k_emlrtECI = { 2, 16, 5, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 14, 1, "normV", "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m",
  0 };

/* Function Definitions */
void expmapSRi(const emlrtStack *sp, const emxArray_real_T *X, emxArray_real_T
               *V, emxArray_real_T *Y)
{
  emxArray_real_T *normV;
  emxArray_real_T *normV0;
  emxArray_real_T *r10;
  int32_T i18;
  int32_T loop_ub;
  emxArray_boolean_T *b_normV;
  emxArray_int32_T *r11;
  int32_T i;
  int32_T i19;
  emxArray_real_T *b_V;
  emxArray_real_T *b;
  const mxArray *y;
  static const int32_T iv46[2] = { 1, 45 };

  const mxArray *m12;
  char_T cv56[45];
  static const char_T cv57[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv47[2] = { 1, 21 };

  char_T cv58[21];
  static const char_T cv59[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  int32_T b_Y;
  int32_T i20;
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
  static const int32_T iv48[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv49[2] = { 1, 21 };

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
  emxInit_real_T(sp, &normV, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(sp, &normV0, 2, &mb_emlrtRTEI, true);
  emxInit_real_T(sp, &r10, 2, &kb_emlrtRTEI, true);

  /*  compute the exp map on sphere exp_X(V) */
  /*  Input: */
  /*      X - d-by-m matrix, with each column a squre root density x */
  /*      V - d-by-m matrix, with each column a tangent vector v */
  /*      to ensure exp map is a bijection, |v| \in [0,\pi] */
  /*  Output: */
  /*      Y - expmap (d-by-m matrix), each column exp_x(v) */
  power(sp, V, r10);
  st.site = &lc_emlrtRSI;
  sum(&st, r10, normV);
  st.site = &lc_emlrtRSI;
  b_sqrt(&st, normV);

  /* 1-by-m */
  i18 = normV0->size[0] * normV0->size[1];
  normV0->size[0] = 1;
  normV0->size[1] = normV->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)normV0, i18, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = normV->size[0] * normV->size[1];
  for (i18 = 0; i18 < loop_ub; i18++) {
    normV0->data[i18] = normV->data[i18];
  }

  emxInit_boolean_T(sp, &b_normV, 2, &kb_emlrtRTEI, true);
  i18 = b_normV->size[0] * b_normV->size[1];
  b_normV->size[0] = 1;
  b_normV->size[1] = normV->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_normV, i18, (int32_T)sizeof
                    (boolean_T), &kb_emlrtRTEI);
  loop_ub = normV->size[0] * normV->size[1];
  for (i18 = 0; i18 < loop_ub; i18++) {
    b_normV->data[i18] = (normV->data[i18] == 0.0);
  }

  b_emxInit_int32_T(sp, &r11, 2, &kb_emlrtRTEI, true);
  st.site = &mc_emlrtRSI;
  eml_li_find(&st, b_normV, r11);
  i = normV->size[1];
  loop_ub = r11->size[0] * r11->size[1];
  emxFree_boolean_T(&b_normV);
  for (i18 = 0; i18 < loop_ub; i18++) {
    i19 = r11->data[i18];
    normV->data[emlrtDynamicBoundsCheckFastR2012b(i19, 1, i, &ab_emlrtBCI, sp) -
      1] = 1.0;
  }

  emxFree_int32_T(&r11);
  emxInit_real_T(sp, &b_V, 2, &kb_emlrtRTEI, true);
  st.site = &nc_emlrtRSI;
  b_repmat(&st, normV, X->size[0], r10);
  i18 = b_V->size[0] * b_V->size[1];
  b_V->size[0] = V->size[0];
  b_V->size[1] = V->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_V, i18, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = V->size[0] * V->size[1];
  for (i18 = 0; i18 < loop_ub; i18++) {
    b_V->data[i18] = V->data[i18];
  }

  st.site = &nc_emlrtRSI;
  rdivide(&st, b_V, r10, V);
  i18 = normV->size[0] * normV->size[1];
  normV->size[0] = 1;
  normV->size[1] = normV0->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)normV, i18, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  loop_ub = normV0->size[0] * normV0->size[1];
  emxFree_real_T(&b_V);
  for (i18 = 0; i18 < loop_ub; i18++) {
    normV->data[i18] = normV0->data[i18];
  }

  emxInit_real_T(sp, &b, 2, &kb_emlrtRTEI, true);
  b_cos(normV);
  st.site = &oc_emlrtRSI;
  diag(&st, normV, b);
  st.site = &oc_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  emxFree_real_T(&normV);
  if (!(X->size[1] == b->size[0])) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      y = NULL;
      m12 = emlrtCreateCharArray(2, iv46);
      for (i = 0; i < 45; i++) {
        cv56[i] = cv57[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m12, cv56);
      emlrtAssign(&y, m12);
      c_st.site = &xc_emlrtRSI;
      d_st.site = &jd_emlrtRSI;
      error(&c_st, message(&d_st, y, &e_emlrtMCI), &f_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      b_y = NULL;
      m12 = emlrtCreateCharArray(2, iv47);
      for (i = 0; i < 21; i++) {
        cv58[i] = cv59[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m12, cv58);
      emlrtAssign(&b_y, m12);
      c_st.site = &yc_emlrtRSI;
      d_st.site = &kd_emlrtRSI;
      error(&c_st, message(&d_st, b_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  if ((X->size[1] == 1) || (b->size[0] == 1)) {
    i18 = Y->size[0] * Y->size[1];
    Y->size[0] = X->size[0];
    Y->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)Y, i18, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    loop_ub = X->size[0];
    for (i18 = 0; i18 < loop_ub; i18++) {
      i = b->size[1];
      for (i19 = 0; i19 < i; i19++) {
        Y->data[i18 + Y->size[0] * i19] = 0.0;
        b_Y = X->size[1];
        for (i20 = 0; i20 < b_Y; i20++) {
          Y->data[i18 + Y->size[0] * i19] += X->data[i18 + X->size[0] * i20] *
            b->data[i20 + b->size[0] * i19];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)X->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i18 = r10->size[0] * r10->size[1];
    r10->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r10, i18, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    i18 = r10->size[0] * r10->size[1];
    r10->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r10, i18, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i18 = 0; i18 < loop_ub; i18++) {
      r10->data[i18] = 0.0;
    }

    b_st.site = &t_emlrtRSI;
    c_st.site = &v_emlrtRSI;
    i18 = Y->size[0] * Y->size[1];
    Y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)Y, i18, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    i18 = Y->size[0] * Y->size[1];
    Y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)Y, i18, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i18 = 0; i18 < loop_ub; i18++) {
      Y->data[i18] = 0.0;
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
  st.site = &oc_emlrtRSI;
  diag(&st, normV0, b);
  st.site = &oc_emlrtRSI;
  b_st.site = &u_emlrtRSI;
  emxFree_real_T(&normV0);
  if (!(V->size[1] == b->size[0])) {
    if (((V->size[0] == 1) && (V->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      c_y = NULL;
      m12 = emlrtCreateCharArray(2, iv48);
      for (i = 0; i < 45; i++) {
        cv56[i] = cv57[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m12, cv56);
      emlrtAssign(&c_y, m12);
      c_st.site = &xc_emlrtRSI;
      d_st.site = &jd_emlrtRSI;
      error(&c_st, message(&d_st, c_y, &e_emlrtMCI), &f_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      d_y = NULL;
      m12 = emlrtCreateCharArray(2, iv49);
      for (i = 0; i < 21; i++) {
        cv58[i] = cv59[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m12, cv58);
      emlrtAssign(&d_y, m12);
      c_st.site = &yc_emlrtRSI;
      d_st.site = &kd_emlrtRSI;
      error(&c_st, message(&d_st, d_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &C, 2, &kb_emlrtRTEI, true);
  if ((V->size[1] == 1) || (b->size[0] == 1)) {
    i18 = C->size[0] * C->size[1];
    C->size[0] = V->size[0];
    C->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)C, i18, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    loop_ub = V->size[0];
    for (i18 = 0; i18 < loop_ub; i18++) {
      i = b->size[1];
      for (i19 = 0; i19 < i; i19++) {
        C->data[i18 + C->size[0] * i19] = 0.0;
        b_Y = V->size[1];
        for (i20 = 0; i20 < b_Y; i20++) {
          C->data[i18 + C->size[0] * i19] += V->data[i18 + V->size[0] * i20] *
            b->data[i20 + b->size[0] * i19];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)V->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i18 = r10->size[0] * r10->size[1];
    r10->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r10, i18, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    i18 = r10->size[0] * r10->size[1];
    r10->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r10, i18, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i18 = 0; i18 < loop_ub; i18++) {
      r10->data[i18] = 0.0;
    }

    b_st.site = &t_emlrtRSI;
    c_st.site = &v_emlrtRSI;
    i18 = C->size[0] * C->size[1];
    C->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i18, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    i18 = C->size[0] * C->size[1];
    C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i18, (int32_T)sizeof(real_T),
                      &kb_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i18 = 0; i18 < loop_ub; i18++) {
      C->data[i18] = 0.0;
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

  emxFree_real_T(&r10);
  emxFree_real_T(&b);
  for (i18 = 0; i18 < 2; i18++) {
    c_Y[i18] = Y->size[i18];
  }

  for (i18 = 0; i18 < 2; i18++) {
    b_C[i18] = C->size[i18];
  }

  emlrtSizeEqCheck2DFastR2012b(c_Y, b_C, &k_emlrtECI, sp);
  i18 = Y->size[0] * Y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Y, i18, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  i = Y->size[0];
  b_Y = Y->size[1];
  loop_ub = i * b_Y;
  for (i18 = 0; i18 < loop_ub; i18++) {
    Y->data[i18] += C->data[i18];
  }

  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (expmapSRi.c) */
