/*
 * expmapSRi.c
 *
 * Code generation for function 'expmapSRi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedX.h"
#include "expmapSRi.h"
#include "power.h"
#include "EstimatedX_emxutil.h"
#include "diag.h"
#include "sin.h"
#include "cos.h"
#include "rdivide.h"
#include "repmat.h"
#include "logmapSRi.h"
#include "sqrt.h"
#include "sum.h"
#include "EstimatedX_mexutil.h"
#include "EstimatedX_data.h"

/* Variable Definitions */
static emlrtRSInfo gb_emlrtRSI = { 12, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtRSInfo hb_emlrtRSI = { 14, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtRSInfo ib_emlrtRSI = { 15, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtRSInfo jb_emlrtRSI = { 16, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 1, 14, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 12, 1, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 13, 1, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtECInfo c_emlrtECI = { 2, 16, 5, "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m"
};

static emlrtBCInfo g_emlrtBCI = { -1, -1, 14, 1, "normV", "expmapSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/expmapSRi.m",
  0 };

/* Function Definitions */
void expmapSRi(const emlrtStack *sp, const emxArray_real_T *X, emxArray_real_T
               *V, emxArray_real_T *Y)
{
  emxArray_real_T *normV;
  emxArray_real_T *normV0;
  emxArray_real_T *r4;
  int32_T i7;
  int32_T loop_ub;
  emxArray_boolean_T *b_normV;
  emxArray_int32_T *r5;
  int32_T i;
  int32_T i8;
  emxArray_real_T *b_V;
  emxArray_real_T *b;
  const mxArray *y;
  static const int32_T iv17[2] = { 1, 45 };

  const mxArray *m7;
  char_T cv24[45];
  static const char_T cv25[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv18[2] = { 1, 21 };

  char_T cv26[21];
  static const char_T cv27[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  int32_T b_Y;
  int32_T i9;
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
  static const int32_T iv19[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv20[2] = { 1, 21 };

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
  emxInit_real_T(sp, &normV, 2, &x_emlrtRTEI, true);
  emxInit_real_T(sp, &normV0, 2, &y_emlrtRTEI, true);
  emxInit_real_T(sp, &r4, 2, &w_emlrtRTEI, true);

  /*  compute the exp map on sphere exp_X(V) */
  /*  Input: */
  /*      X - d-by-m matrix, with each column a squre root density x */
  /*      V - d-by-m matrix, with each column a tangent vector v */
  /*      to ensure exp map is a bijection, |v| \in [0,\pi] */
  /*  Output: */
  /*      Y - expmap (d-by-m matrix), each column exp_x(v) */
  power(sp, V, r4);
  st.site = &gb_emlrtRSI;
  sum(&st, r4, normV);
  st.site = &gb_emlrtRSI;
  b_sqrt(&st, normV);

  /* 1-by-m */
  i7 = normV0->size[0] * normV0->size[1];
  normV0->size[0] = 1;
  normV0->size[1] = normV->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)normV0, i7, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  loop_ub = normV->size[0] * normV->size[1];
  for (i7 = 0; i7 < loop_ub; i7++) {
    normV0->data[i7] = normV->data[i7];
  }

  emxInit_boolean_T(sp, &b_normV, 2, &w_emlrtRTEI, true);
  i7 = b_normV->size[0] * b_normV->size[1];
  b_normV->size[0] = 1;
  b_normV->size[1] = normV->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_normV, i7, (int32_T)sizeof
                    (boolean_T), &w_emlrtRTEI);
  loop_ub = normV->size[0] * normV->size[1];
  for (i7 = 0; i7 < loop_ub; i7++) {
    b_normV->data[i7] = (normV->data[i7] == 0.0);
  }

  b_emxInit_int32_T(sp, &r5, 2, &w_emlrtRTEI, true);
  st.site = &hb_emlrtRSI;
  eml_li_find(&st, b_normV, r5);
  i = normV->size[1];
  loop_ub = r5->size[0] * r5->size[1];
  emxFree_boolean_T(&b_normV);
  for (i7 = 0; i7 < loop_ub; i7++) {
    i8 = r5->data[i7];
    normV->data[emlrtDynamicBoundsCheckFastR2012b(i8, 1, i, &g_emlrtBCI, sp) - 1]
      = 1.0;
  }

  emxFree_int32_T(&r5);
  emxInit_real_T(sp, &b_V, 2, &w_emlrtRTEI, true);
  st.site = &ib_emlrtRSI;
  b_repmat(&st, normV, X->size[0], r4);
  i7 = b_V->size[0] * b_V->size[1];
  b_V->size[0] = V->size[0];
  b_V->size[1] = V->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_V, i7, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  loop_ub = V->size[0] * V->size[1];
  for (i7 = 0; i7 < loop_ub; i7++) {
    b_V->data[i7] = V->data[i7];
  }

  st.site = &ib_emlrtRSI;
  rdivide(&st, b_V, r4, V);
  i7 = normV->size[0] * normV->size[1];
  normV->size[0] = 1;
  normV->size[1] = normV0->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)normV, i7, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  loop_ub = normV0->size[0] * normV0->size[1];
  emxFree_real_T(&b_V);
  for (i7 = 0; i7 < loop_ub; i7++) {
    normV->data[i7] = normV0->data[i7];
  }

  emxInit_real_T(sp, &b, 2, &w_emlrtRTEI, true);
  b_cos(normV);
  st.site = &jb_emlrtRSI;
  diag(&st, normV, b);
  st.site = &jb_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  emxFree_real_T(&normV);
  if (!(X->size[1] == b->size[0])) {
    if (((X->size[0] == 1) && (X->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      y = NULL;
      m7 = emlrtCreateCharArray(2, iv17);
      for (i = 0; i < 45; i++) {
        cv24[i] = cv25[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m7, cv24);
      emlrtAssign(&y, m7);
      c_st.site = &kb_emlrtRSI;
      d_st.site = &sb_emlrtRSI;
      error(&c_st, message(&d_st, y, &emlrtMCI), &b_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      b_y = NULL;
      m7 = emlrtCreateCharArray(2, iv18);
      for (i = 0; i < 21; i++) {
        cv26[i] = cv27[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m7, cv26);
      emlrtAssign(&b_y, m7);
      c_st.site = &lb_emlrtRSI;
      d_st.site = &tb_emlrtRSI;
      error(&c_st, message(&d_st, b_y, &c_emlrtMCI), &d_emlrtMCI);
    }
  }

  if ((X->size[1] == 1) || (b->size[0] == 1)) {
    i7 = Y->size[0] * Y->size[1];
    Y->size[0] = X->size[0];
    Y->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)Y, i7, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    loop_ub = X->size[0];
    for (i7 = 0; i7 < loop_ub; i7++) {
      i = b->size[1];
      for (i8 = 0; i8 < i; i8++) {
        Y->data[i7 + Y->size[0] * i8] = 0.0;
        b_Y = X->size[1];
        for (i9 = 0; i9 < b_Y; i9++) {
          Y->data[i7 + Y->size[0] * i8] += X->data[i7 + X->size[0] * i9] *
            b->data[i9 + b->size[0] * i8];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)X->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i7 = r4->size[0] * r4->size[1];
    r4->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r4, i7, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    i7 = r4->size[0] * r4->size[1];
    r4->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r4, i7, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i7 = 0; i7 < loop_ub; i7++) {
      r4->data[i7] = 0.0;
    }

    b_st.site = &l_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    i7 = Y->size[0] * Y->size[1];
    Y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)Y, i7, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    i7 = Y->size[0] * Y->size[1];
    Y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)Y, i7, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i7 = 0; i7 < loop_ub; i7++) {
      Y->data[i7] = 0.0;
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
  st.site = &jb_emlrtRSI;
  diag(&st, normV0, b);
  st.site = &jb_emlrtRSI;
  b_st.site = &m_emlrtRSI;
  emxFree_real_T(&normV0);
  if (!(V->size[1] == b->size[0])) {
    if (((V->size[0] == 1) && (V->size[1] == 1)) || ((b->size[0] == 1) &&
         (b->size[1] == 1))) {
      emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
      c_y = NULL;
      m7 = emlrtCreateCharArray(2, iv19);
      for (i = 0; i < 45; i++) {
        cv24[i] = cv25[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 45, m7, cv24);
      emlrtAssign(&c_y, m7);
      c_st.site = &kb_emlrtRSI;
      d_st.site = &sb_emlrtRSI;
      error(&c_st, message(&d_st, c_y, &emlrtMCI), &b_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
      d_y = NULL;
      m7 = emlrtCreateCharArray(2, iv20);
      for (i = 0; i < 21; i++) {
        cv26[i] = cv27[i];
      }

      emlrtInitCharArrayR2013a(&b_st, 21, m7, cv26);
      emlrtAssign(&d_y, m7);
      c_st.site = &lb_emlrtRSI;
      d_st.site = &tb_emlrtRSI;
      error(&c_st, message(&d_st, d_y, &c_emlrtMCI), &d_emlrtMCI);
    }
  }

  emxInit_real_T(&st, &C, 2, &w_emlrtRTEI, true);
  if ((V->size[1] == 1) || (b->size[0] == 1)) {
    i7 = C->size[0] * C->size[1];
    C->size[0] = V->size[0];
    C->size[1] = b->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)C, i7, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    loop_ub = V->size[0];
    for (i7 = 0; i7 < loop_ub; i7++) {
      i = b->size[1];
      for (i8 = 0; i8 < i; i8++) {
        C->data[i7 + C->size[0] * i8] = 0.0;
        b_Y = V->size[1];
        for (i9 = 0; i9 < b_Y; i9++) {
          C->data[i7 + C->size[0] * i8] += V->data[i7 + V->size[0] * i9] *
            b->data[i9 + b->size[0] * i8];
        }
      }
    }
  } else {
    unnamed_idx_0 = (uint32_T)V->size[0];
    unnamed_idx_1 = (uint32_T)b->size[1];
    i7 = r4->size[0] * r4->size[1];
    r4->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)r4, i7, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    i7 = r4->size[0] * r4->size[1];
    r4->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)r4, i7, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i7 = 0; i7 < loop_ub; i7++) {
      r4->data[i7] = 0.0;
    }

    b_st.site = &l_emlrtRSI;
    c_st.site = &n_emlrtRSI;
    i7 = C->size[0] * C->size[1];
    C->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i7, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    i7 = C->size[0] * C->size[1];
    C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&c_st, (emxArray__common *)C, i7, (int32_T)sizeof(real_T),
                      &w_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i7 = 0; i7 < loop_ub; i7++) {
      C->data[i7] = 0.0;
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

  emxFree_real_T(&r4);
  emxFree_real_T(&b);
  for (i7 = 0; i7 < 2; i7++) {
    c_Y[i7] = Y->size[i7];
  }

  for (i7 = 0; i7 < 2; i7++) {
    b_C[i7] = C->size[i7];
  }

  emlrtSizeEqCheck2DFastR2012b(c_Y, b_C, &c_emlrtECI, sp);
  i7 = Y->size[0] * Y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)Y, i7, (int32_T)sizeof(real_T),
                    &w_emlrtRTEI);
  i = Y->size[0];
  b_Y = Y->size[1];
  loop_ub = i * b_Y;
  for (i7 = 0; i7 < loop_ub; i7++) {
    Y->data[i7] += C->data[i7];
  }

  emxFree_real_T(&C);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (expmapSRi.c) */
