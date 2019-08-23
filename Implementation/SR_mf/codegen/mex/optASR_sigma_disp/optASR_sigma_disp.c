/*
 * optASR_sigma_disp.c
 *
 * Code generation for function 'optASR_sigma_disp'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "eml_error.h"
#include "optASR_sigma_disp_emxutil.h"
#include "objSR.h"
#include "eml_int_forloop_overflow_check.h"
#include "expmapSRi.h"
#include "mpower.h"
#include "projectT.h"
#include "gradientASR.h"
#include "optASR_sigma_disp_mexutil.h"
#include "optASR_sigma_disp_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 34, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRSInfo b_emlrtRSI = { 40, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRSInfo c_emlrtRSI = { 42, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRSInfo d_emlrtRSI = { 47, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRSInfo e_emlrtRSI = { 48, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRSInfo f_emlrtRSI = { 49, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRSInfo g_emlrtRSI = { 50, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRSInfo h_emlrtRSI = { 52, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRSInfo w_emlrtRSI = { 1, "xgemm",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/+blas/xgemm.p" };

static emlrtRSInfo pc_emlrtRSI = { 90, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtRSInfo qc_emlrtRSI = { 19, "sumprod",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/private/sumprod.m" };

static emlrtRSInfo rc_emlrtRSI = { 38, "sumprod",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/private/sumprod.m" };

static emlrtRSInfo sc_emlrtRSI = { 36, "combine_vector_elements",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtMCInfo emlrtMCI = { 58, 5, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtMCInfo b_emlrtMCI = { 60, 9, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtMCInfo c_emlrtMCI = { 64, 9, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtMCInfo d_emlrtMCI = { 70, 1, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtMCInfo u_emlrtMCI = { 87, 9, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtMCInfo v_emlrtMCI = { 86, 19, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtMCInfo w_emlrtMCI = { 28, 19, "assert",
  "/opt/matlab2014b/toolbox/shared/coder/coder/+coder/+internal/assert.m" };

static emlrtRTEInfo i_emlrtRTEI = { 1, 14, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 89, 5, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtRTEInfo k_emlrtRTEI = { 40, 5, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 42, 5, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 48, 9, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRTEInfo ob_emlrtRTEI = { 38, 1, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRTEInfo pb_emlrtRTEI = { 46, 5, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRSInfo tc_emlrtRSI = { 70, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRSInfo uc_emlrtRSI = { 58, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRSInfo vc_emlrtRSI = { 64, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRSInfo wc_emlrtRSI = { 60, "optASR_sigma_disp",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/optASR_sigma_disp.m"
};

static emlrtRSInfo hd_emlrtRSI = { 28, "assert",
  "/opt/matlab2014b/toolbox/shared/coder/coder/+coder/+internal/assert.m" };

static emlrtRSInfo id_emlrtRSI = { 86, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtRSInfo od_emlrtRSI = { 87, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

/* Function Declarations */
static void b_fprintf(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                      emlrtMCInfo *location);
static void c_fprintf(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                      *location);

/* Function Definitions */
static void b_fprintf(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                      emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "fprintf", true, location);
}

static void c_fprintf(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                      *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "fprintf", true, location);
}

void optASR_sigma_disp(const emlrtStack *sp, const emxArray_real_T *X, const
  emxArray_real_T *W, emxArray_real_T *A0, const struct0_T *param,
  emxArray_real_T *A)
{
  int32_T i0;
  int32_T i;
  real_T s;
  real_T alpha;
  real_T beta;
  real_T maxk;
  real_T obj_old;
  real_T obj_new;
  real_T iter;
  int32_T b_iter;
  emxArray_real_T *gradA;
  emxArray_real_T *eta;
  emxArray_real_T *temp;
  emxArray_real_T *C;
  emxArray_real_T *r0;
  emxArray_real_T *a;
  boolean_T exitg1;
  int32_T m;
  real_T k;
  int32_T b_k;
  boolean_T exitg2;
  int32_T stride;
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

  int32_T loop_ub;
  int32_T i1;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
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
  static const int32_T iv2[2] = { 1, 39 };

  char_T cv4[39];
  static const char_T cv5[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'd', 'i', 'a', 'g', '_', 'v', 'a', 'r', 's', 'i',
    'z', 'e', 'd', 'M', 'a', 't', 'r', 'i', 'x', 'V', 'e', 'c', 't', 'o', 'r' };

  boolean_T b0;
  boolean_T overflow;
  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 36 };

  char_T cv6[36];
  static const char_T cv7[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T p;
  int32_T exitg3;
  const mxArray *e_y;
  static const int32_T iv4[2] = { 1, 37 };

  char_T cv8[37];
  static const char_T cv9[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'U', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *f_y;
  static const int32_T iv5[2] = { 1, 10 };

  char_T cv10[10];
  static const char_T cv11[10] = { 'm', 'a', 'x', 'k', ':', ' ', '%', 'd', '\\',
    'n' };

  const mxArray *g_y;
  const mxArray *h_y;
  static const int32_T iv6[2] = { 1, 21 };

  static const char_T cv12[21] = { 'm', 'a', 'x', 'k', ' ', 'n', 'o', 't', ' ',
    'b', 'i', 'g', ' ', 'e', 'n', 'o', 'u', 'g', 'h', '\\', 'n' };

  const mxArray *i_y;
  static const int32_T iv7[2] = { 1, 13 };

  char_T cv13[13];
  static const char_T cv14[13] = { 'e', 'p', 's', ' ', 'r', 'e', 'a', 'c', 'h',
    'e', 'd', '\\', 'n' };

  const mxArray *j_y;
  static const int32_T iv8[2] = { 1, 13 };

  static const char_T cv15[13] = { 'm', 'a', 'x', 'i', 't', 'e', 'r', ':', ' ',
    '%', 'd', '\\', 'n' };

  const mxArray *k_y;
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

  /*  minimize the square root density cost function with respect to A */
  /*  Input: */
  /*      X - input square root density data (d-by-n) */
  /*      W - coefficient matrix (m-by-n) */
  /*      A0 - initial atoms in dictionary (d-by-m) */
  /*  Output: */
  /*      A - final atoms in dictionary (d-by-m) */
  /* % Initialization */
  i0 = A->size[0] * A->size[1];
  A->size[0] = A0->size[0];
  A->size[1] = A0->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)A, i0, (int32_T)sizeof(real_T),
                    &i_emlrtRTEI);
  i = A0->size[0] * A0->size[1];
  for (i0 = 0; i0 < i; i0++) {
    A->data[i0] = A0->data[i0];
  }

  s = 0.0;

  /*  parameters */
  /*  maxiter = 5; */
  /*  eps = 1e-7; */
  /*  alpha = 1; */
  /*  beta = 0.1; */
  /*  sigma = 0.9; */
  /*  maxk = 30; */
  /*  parameters */
  alpha = param->alpha;
  beta = param->beta;
  maxk = param->maxk;

  /*  initial objective values */
  st.site = &emlrtRSI;
  obj_old = objSR(&st, X, W, A0);
  obj_new = 2.0 * obj_old;

  /* % Main loop */
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, param->maxiterls, mxDOUBLE_CLASS,
    (int32_T)param->maxiterls, &ob_emlrtRTEI, sp);
  iter = 1.0;
  b_iter = 0;
  emxInit_real_T(sp, &gradA, 2, &k_emlrtRTEI, true);
  emxInit_real_T(sp, &eta, 2, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &temp, 1, &m_emlrtRTEI, true);
  emxInit_real_T(sp, &C, 2, &i_emlrtRTEI, true);
  emxInit_real_T(sp, &r0, 2, &i_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &i_emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && (b_iter <= (int32_T)param->maxiterls - 1)) {
    iter = 1.0 + (real_T)b_iter;

    /*  compute gradient */
    st.site = &b_emlrtRSI;
    gradientASR(&st, X, W, A0, gradA);

    /*  project to the tangent plane */
    st.site = &c_emlrtRSI;
    projectT(&st, A0, gradA, eta);

    /*  set the descent direction (negative gradient) */
    i0 = eta->size[0] * eta->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)eta, i0, (int32_T)sizeof(real_T),
                      &i_emlrtRTEI);
    i = eta->size[0];
    m = eta->size[1];
    i *= m;
    for (i0 = 0; i0 < i; i0++) {
      eta->data[i0] = -eta->data[i0];
    }

    /*  update the dictionary atoms */
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, maxk, mxDOUBLE_CLASS, (int32_T)maxk,
      &pb_emlrtRTEI, sp);
    k = 1.0;
    b_k = 0;
    exitg2 = false;
    while ((!exitg2) && (b_k <= (int32_T)maxk - 1)) {
      k = 1.0 + (real_T)b_k;
      st.site = &d_emlrtRSI;
      s = alpha * mpower(&st, beta, 1.0 + (real_T)b_k);
      i0 = a->size[0] * a->size[1];
      a->size[0] = eta->size[0];
      a->size[1] = eta->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)a, i0, (int32_T)sizeof(real_T),
                        &i_emlrtRTEI);
      i = eta->size[0] * eta->size[1];
      for (i0 = 0; i0 < i; i0++) {
        a->data[i0] = s * eta->data[i0];
      }

      st.site = &d_emlrtRSI;
      expmapSRi(&st, A0, a, A);
      st.site = &e_emlrtRSI;
      i0 = gradA->size[0] * gradA->size[1];
      gradA->size[0] = eta->size[1];
      gradA->size[1] = eta->size[0];
      emxEnsureCapacity(&st, (emxArray__common *)gradA, i0, (int32_T)sizeof
                        (real_T), &i_emlrtRTEI);
      i = eta->size[0];
      for (i0 = 0; i0 < i; i0++) {
        m = eta->size[1];
        for (stride = 0; stride < m; stride++) {
          gradA->data[stride + gradA->size[0] * i0] = eta->data[i0 + eta->size[0]
            * stride];
        }
      }

      b_st.site = &u_emlrtRSI;
      if (!(gradA->size[1] == eta->size[0])) {
        if (((gradA->size[0] == 1) && (gradA->size[1] == 1)) || ((eta->size[0] ==
              1) && (eta->size[1] == 1))) {
          emlrtAssertMATLABThread(&b_st, &b_emlrtRTEI);
          y = NULL;
          m0 = emlrtCreateCharArray(2, iv0);
          for (i = 0; i < 45; i++) {
            cv0[i] = cv1[i];
          }

          emlrtInitCharArrayR2013a(&b_st, 45, m0, cv0);
          emlrtAssign(&y, m0);
          c_st.site = &xc_emlrtRSI;
          d_st.site = &jd_emlrtRSI;
          error(&c_st, message(&d_st, y, &e_emlrtMCI), &f_emlrtMCI);
        } else {
          emlrtAssertMATLABThread(&b_st, &c_emlrtRTEI);
          b_y = NULL;
          m0 = emlrtCreateCharArray(2, iv1);
          for (i = 0; i < 21; i++) {
            cv2[i] = cv3[i];
          }

          emlrtInitCharArrayR2013a(&b_st, 21, m0, cv2);
          emlrtAssign(&b_y, m0);
          c_st.site = &yc_emlrtRSI;
          d_st.site = &kd_emlrtRSI;
          error(&c_st, message(&d_st, b_y, &g_emlrtMCI), &h_emlrtMCI);
        }
      }

      if ((gradA->size[1] == 1) || (eta->size[0] == 1)) {
        i0 = C->size[0] * C->size[1];
        C->size[0] = gradA->size[0];
        C->size[1] = eta->size[1];
        emxEnsureCapacity(&st, (emxArray__common *)C, i0, (int32_T)sizeof(real_T),
                          &i_emlrtRTEI);
        i = gradA->size[0];
        for (i0 = 0; i0 < i; i0++) {
          m = eta->size[1];
          for (stride = 0; stride < m; stride++) {
            C->data[i0 + C->size[0] * stride] = 0.0;
            loop_ub = gradA->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              C->data[i0 + C->size[0] * stride] += gradA->data[i0 + gradA->size
                [0] * i1] * eta->data[i1 + eta->size[0] * stride];
            }
          }
        }
      } else {
        unnamed_idx_0 = (uint32_T)gradA->size[0];
        unnamed_idx_1 = (uint32_T)eta->size[1];
        i0 = r0->size[0] * r0->size[1];
        r0->size[0] = (int32_T)unnamed_idx_0;
        emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof
                          (real_T), &i_emlrtRTEI);
        i0 = r0->size[0] * r0->size[1];
        r0->size[1] = (int32_T)unnamed_idx_1;
        emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof
                          (real_T), &i_emlrtRTEI);
        i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
        for (i0 = 0; i0 < i; i0++) {
          r0->data[i0] = 0.0;
        }

        b_st.site = &t_emlrtRSI;
        c_st.site = &v_emlrtRSI;
        i0 = C->size[0] * C->size[1];
        C->size[0] = (int32_T)unnamed_idx_0;
        emxEnsureCapacity(&c_st, (emxArray__common *)C, i0, (int32_T)sizeof
                          (real_T), &i_emlrtRTEI);
        i0 = C->size[0] * C->size[1];
        C->size[1] = (int32_T)unnamed_idx_1;
        emxEnsureCapacity(&c_st, (emxArray__common *)C, i0, (int32_T)sizeof
                          (real_T), &i_emlrtRTEI);
        i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
        for (i0 = 0; i0 < i; i0++) {
          C->data[i0] = 0.0;
        }

        if ((gradA->size[0] < 1) || (eta->size[1] < 1) || (gradA->size[1] < 1))
        {
        } else {
          e_st.site = &w_emlrtRSI;
          s = 1.0;
          obj_new = 0.0;
          TRANSB = 'N';
          TRANSA = 'N';
          m_t = (ptrdiff_t)(gradA->size[0]);
          n_t = (ptrdiff_t)(eta->size[1]);
          k_t = (ptrdiff_t)(gradA->size[1]);
          lda_t = (ptrdiff_t)(gradA->size[0]);
          ldb_t = (ptrdiff_t)(gradA->size[1]);
          ldc_t = (ptrdiff_t)(gradA->size[0]);
          alpha1_t = (double *)(&s);
          Aia0_t = (double *)(&gradA->data[0]);
          Bib0_t = (double *)(&eta->data[0]);
          beta1_t = (double *)(&obj_new);
          Cic0_t = (double *)(&C->data[0]);
          dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
                Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
        }
      }

      st.site = &e_emlrtRSI;
      if ((C->size[0] == 1) && (C->size[1] == 1)) {
        i0 = temp->size[0];
        temp->size[0] = 1;
        emxEnsureCapacity(&st, (emxArray__common *)temp, i0, (int32_T)sizeof
                          (real_T), &i_emlrtRTEI);
        temp->data[0] = C->data[0];
      } else {
        if (!((C->size[0] == 1) || (C->size[1] == 1))) {
        } else {
          c_y = NULL;
          m0 = emlrtCreateCharArray(2, iv2);
          for (i = 0; i < 39; i++) {
            cv4[i] = cv5[i];
          }

          emlrtInitCharArrayR2013a(&st, 39, m0, cv4);
          emlrtAssign(&c_y, m0);
          b_st.site = &id_emlrtRSI;
          g_st.site = &od_emlrtRSI;
          error(&b_st, message(&g_st, c_y, &u_emlrtMCI), &v_emlrtMCI);
        }

        m = C->size[0];
        i = C->size[1];
        if (0 < C->size[1]) {
          m = muIntScalarMin_sint32(m, i);
          stride = C->size[0] + 1;
        } else {
          m = 0;
          stride = 0;
        }

        i0 = temp->size[0];
        temp->size[0] = m;
        emxEnsureCapacity(&st, (emxArray__common *)temp, i0, (int32_T)sizeof
                          (real_T), &j_emlrtRTEI);
        b_st.site = &pc_emlrtRSI;
        if (1 > m) {
          b0 = false;
        } else {
          b0 = (m > 2147483646);
        }

        if (b0) {
          c_st.site = &x_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 0; i + 1 <= m; i++) {
          temp->data[i] = C->data[i * stride];
        }
      }

      st.site = &f_emlrtRSI;
      for (i = 0; i < temp->size[0]; i++) {
        if (temp->data[i] < 0.0) {
          b_st.site = &hb_emlrtRSI;
          eml_error(&b_st);
        }
      }

      i0 = temp->size[0];
      for (i = 0; i < i0; i++) {
        temp->data[i] = muDoubleScalarSqrt(temp->data[i]);
      }

      st.site = &g_emlrtRSI;
      b_st.site = &ic_emlrtRSI;
      c_st.site = &jc_emlrtRSI;
      if ((beta < 0.0) && (1.0 + (real_T)b_k != 1.0 + (real_T)b_k)) {
        e_st.site = &kc_emlrtRSI;
        c_eml_error(&e_st);
      }

      st.site = &g_emlrtRSI;
      b_st.site = &db_emlrtRSI;
      if ((temp->size[0] == 1) || (temp->size[0] != 1)) {
        overflow = true;
      } else {
        overflow = false;
      }

      c_st.site = &qc_emlrtRSI;
      if (overflow) {
      } else {
        d_y = NULL;
        m0 = emlrtCreateCharArray(2, iv3);
        for (i = 0; i < 36; i++) {
          cv6[i] = cv7[i];
        }

        emlrtInitCharArrayR2013a(&c_st, 36, m0, cv6);
        emlrtAssign(&d_y, m0);
        e_st.site = &hd_emlrtRSI;
        error(&e_st, message(&e_st, d_y, &w_emlrtMCI), &w_emlrtMCI);
      }

      overflow = false;
      p = false;
      i = 0;
      do {
        exitg3 = 0;
        if (i < 2) {
          if (i + 1 <= 1) {
            i0 = temp->size[0];
          } else {
            i0 = 1;
          }

          if (i0 != 0) {
            exitg3 = 1;
          } else {
            i++;
          }
        } else {
          p = true;
          exitg3 = 1;
        }
      } while (exitg3 == 0);

      if (!p) {
      } else {
        overflow = true;
      }

      c_st.site = &rc_emlrtRSI;
      if (!overflow) {
      } else {
        e_y = NULL;
        m0 = emlrtCreateCharArray(2, iv4);
        for (i = 0; i < 37; i++) {
          cv8[i] = cv9[i];
        }

        emlrtInitCharArrayR2013a(&c_st, 37, m0, cv8);
        emlrtAssign(&e_y, m0);
        e_st.site = &hd_emlrtRSI;
        error(&e_st, message(&e_st, e_y, &w_emlrtMCI), &w_emlrtMCI);
      }

      c_st.site = &eb_emlrtRSI;
      if (temp->size[0] == 0) {
        s = 0.0;
      } else {
        s = temp->data[0];
        e_st.site = &sc_emlrtRSI;
        if (2 > temp->size[0]) {
          overflow = false;
        } else {
          overflow = (temp->size[0] > 2147483646);
        }

        if (overflow) {
          f_st.site = &x_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (i = 2; i <= temp->size[0]; i++) {
          s += temp->data[i - 1];
        }
      }

      s *= param->sigma * alpha * muDoubleScalarPower(beta, 1.0 + (real_T)b_k);
      st.site = &h_emlrtRSI;
      obj_new = objSR(&st, X, W, A);
      if (obj_new < obj_old - s) {
        exitg2 = true;
      } else {
        b_k++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }
    }

    f_y = NULL;
    m0 = emlrtCreateCharArray(2, iv5);
    for (i = 0; i < 10; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(sp, 10, m0, cv10);
    emlrtAssign(&f_y, m0);
    g_y = NULL;
    m0 = emlrtCreateDoubleScalar(k);
    emlrtAssign(&g_y, m0);
    st.site = &uc_emlrtRSI;
    b_fprintf(&st, f_y, g_y, &emlrtMCI);
    if (obj_old - obj_new < s) {
      h_y = NULL;
      m0 = emlrtCreateCharArray(2, iv6);
      for (i = 0; i < 21; i++) {
        cv2[i] = cv12[i];
      }

      emlrtInitCharArrayR2013a(sp, 21, m0, cv2);
      emlrtAssign(&h_y, m0);
      st.site = &wc_emlrtRSI;
      c_fprintf(&st, h_y, &b_emlrtMCI);
    }

    if ((obj_old - obj_new) / (real_T)W->size[1] < param->epsls) {
      i_y = NULL;
      m0 = emlrtCreateCharArray(2, iv7);
      for (i = 0; i < 13; i++) {
        cv13[i] = cv14[i];
      }

      emlrtInitCharArrayR2013a(sp, 13, m0, cv13);
      emlrtAssign(&i_y, m0);
      st.site = &vc_emlrtRSI;
      c_fprintf(&st, i_y, &c_emlrtMCI);
      exitg1 = true;
    } else {
      i0 = A0->size[0] * A0->size[1];
      A0->size[0] = A->size[0];
      A0->size[1] = A->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)A0, i0, (int32_T)sizeof(real_T),
                        &i_emlrtRTEI);
      i = A->size[0] * A->size[1];
      for (i0 = 0; i0 < i; i0++) {
        A0->data[i0] = A->data[i0];
      }

      obj_old = obj_new;
      b_iter++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }
  }

  emxFree_real_T(&a);
  emxFree_real_T(&r0);
  emxFree_real_T(&C);
  emxFree_real_T(&temp);
  emxFree_real_T(&eta);
  emxFree_real_T(&gradA);
  j_y = NULL;
  m0 = emlrtCreateCharArray(2, iv8);
  for (i = 0; i < 13; i++) {
    cv13[i] = cv15[i];
  }

  emlrtInitCharArrayR2013a(sp, 13, m0, cv13);
  emlrtAssign(&j_y, m0);
  k_y = NULL;
  m0 = emlrtCreateDoubleScalar(iter);
  emlrtAssign(&k_y, m0);
  st.site = &tc_emlrtRSI;
  b_fprintf(&st, j_y, k_y, &d_emlrtMCI);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (optASR_sigma_disp.c) */
