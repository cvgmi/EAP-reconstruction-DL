/*
 * gradientASR.c
 *
 * Code generation for function 'gradientASR'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "gradientASR.h"
#include "norm.h"
#include "optASR_sigma_disp_emxutil.h"
#include "eml_error.h"
#include "eye.h"
#include "logmapSRi.h"
#include "optASR_sigma_disp_mexutil.h"
#include "optASR_sigma_disp_data.h"

/* Variable Definitions */
static emlrtRSInfo ob_emlrtRSI = { 24, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtRSInfo pb_emlrtRSI = { 25, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtRSInfo qb_emlrtRSI = { 27, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtRSInfo rb_emlrtRSI = { 28, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtRSInfo sb_emlrtRSI = { 29, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtRSInfo tb_emlrtRSI = { 31, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtRSInfo ub_emlrtRSI = { 32, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtRSInfo vb_emlrtRSI = { 33, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtRSInfo wb_emlrtRSI = { 61, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo xb_emlrtRSI = { 30, "eml_xdotu",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 1, 18, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtRTEInfo db_emlrtRTEI = { 31, 13, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtRTEInfo eb_emlrtRTEI = { 27, 9, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtRTEInfo fb_emlrtRTEI = { 25, 9, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtRTEInfo gb_emlrtRTEI = { 24, 9, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtRTEInfo hb_emlrtRTEI = { 14, 1, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtECInfo c_emlrtECI = { -1, 33, 13, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtBCInfo g_emlrtBCI = { -1, -1, 33, 21, "gradA", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtECInfo d_emlrtECI = { -1, 33, 26, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtBCInfo h_emlrtBCI = { -1, -1, 33, 44, "Wt", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 33, 42, "Wt", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 33, 34, "gradA", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtECInfo e_emlrtECI = { 2, 32, 18, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtBCInfo k_emlrtBCI = { -1, -1, 32, 41, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtECInfo f_emlrtECI = { 2, 31, 53, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtBCInfo l_emlrtBCI = { -1, -1, 31, 71, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 31, 64, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtECInfo g_emlrtECI = { 2, 31, 19, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtBCInfo n_emlrtBCI = { -1, -1, 29, 29, "A", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 29, 21, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtECInfo h_emlrtECI = { -1, 27, 15, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m"
};

static emlrtBCInfo p_emlrtBCI = { -1, -1, 27, 43, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 27, 35, "A", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 27, 27, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 27, 19, "A", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 25, 20, "W", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 24, 28, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/gradientASR.m",
  0 };

/* Function Definitions */
void gradientASR(const emlrtStack *sp, const emxArray_real_T *X, const
                 emxArray_real_T *W, const emxArray_real_T *A, emxArray_real_T
                 *gradA)
{
  emxArray_real_T *Wt;
  real_T d;
  real_T n;
  int32_T ub_loop;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T i12;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  int32_T j;
  emxArray_real_T *b_gradA;
  emxArray_real_T *c_gradA;
  emxArray_int32_T *r6;
  emxArray_real_T *b_X;
  emxArray_real_T *c_X;
  emxArray_real_T *d_X;
  emxArray_real_T *b;
  emxArray_real_T *r7;
  emxArray_real_T *b_A;
  emxArray_real_T *a;
  emxArray_real_T *b_b;
  emxArray_real_T *e_X;
  emxArray_real_T *Lg;
  emxArray_real_T *M;
  emxArray_real_T *uij;
  emxArray_real_T *dA;
  real_T inner;
  real_T normu;
  int32_T i;
  int32_T exitg1;
  int32_T c_loop_ub;
  int32_T i13;
  int32_T i14;
  boolean_T guard6 = false;
  const mxArray *y;
  static const int32_T iv29[2] = { 1, 21 };

  const mxArray *m9;
  char_T cv44[21];
  int32_T b_i;
  static const char_T cv45[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *b_y;
  static const int32_T iv30[2] = { 1, 45 };

  char_T cv46[45];
  static const char_T cv47[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  boolean_T guard5 = false;
  uint32_T b_unnamed_idx_0;
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
  int32_T d_loop_ub;
  boolean_T guard4 = false;
  const mxArray *c_y;
  static const int32_T iv31[2] = { 1, 21 };

  const mxArray *d_y;
  static const int32_T iv32[2] = { 1, 45 };

  boolean_T guard3 = false;
  boolean_T guard2 = false;
  const mxArray *e_y;
  static const int32_T iv33[2] = { 1, 21 };

  const mxArray *f_y;
  static const int32_T iv34[2] = { 1, 45 };

  boolean_T guard1 = false;
  int32_T c_A;
  int32_T d_A;
  int32_T e_A[2];
  int32_T b_Lg[2];
  int32_T c_b;
  int32_T d_b;
  const mxArray *g_y;
  static const int32_T iv35[2] = { 1, 45 };

  const mxArray *h_y;
  static const int32_T iv36[2] = { 1, 21 };

  int32_T e_loop_ub;
  int32_T i15;
  uint32_T b_unnamed_idx_1;
  int32_T b_dA;
  int32_T c_dA;
  const mxArray *i_y;
  static const int32_T iv37[2] = { 1, 45 };

  const mxArray *j_y;
  static const int32_T iv38[2] = { 1, 21 };

  int32_T iv39[1];
  int32_T d_gradA[1];
  int32_T e_gradA;
  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  jmp_buf emlrtJBEnviron;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  boolean_T emlrtHadParallelError = false;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &Wt, 2, &hb_emlrtRTEI, true);

  /*  compute the gradient with respect to A */
  /*  Input: */
  /*      X - input square root density data (d-by-n) */
  /*      W - coefficient matrix (m-by-n) */
  /*      A - initial atoms in dictionary (d-by-m) */
  /*  Output: */
  /*      gradA - the gradient with respect to A (d-by-m) */
  /* % Initialization */
  d = X->size[0];
  n = W->size[1];
  ub_loop = Wt->size[0] * Wt->size[1];
  Wt->size[0] = W->size[1];
  Wt->size[1] = W->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)Wt, ub_loop, (int32_T)sizeof(real_T),
                    &cb_emlrtRTEI);
  loop_ub = W->size[0];
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    b_loop_ub = W->size[1];
    for (i12 = 0; i12 < b_loop_ub; i12++) {
      Wt->data[i12 + Wt->size[0] * ub_loop] = W->data[ub_loop + W->size[0] * i12];
    }
  }

  unnamed_idx_0 = (uint32_T)X->size[0];
  unnamed_idx_1 = (uint32_T)W->size[0];
  ub_loop = gradA->size[0] * gradA->size[1];
  gradA->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)gradA, ub_loop, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  ub_loop = gradA->size[0] * gradA->size[1];
  gradA->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)gradA, ub_loop, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    gradA->data[ub_loop] = 0.0;
  }

  ub_loop = W->size[0];
  ub_loop--;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(b_gradA,c_gradA,r6,b_X,c_X,d_X,b,r7,b_A,a,b_b,e_X,Lg,M,uij,dA,inner,normu,i,exitg1,c_loop_ub,i13,i14,guard6,m9,b_i,guard5,d_loop_ub,guard4,guard3,guard2,guard1,c_A,d_A,beta1,c_b,d_b,b_unnamed_idx_0,e_loop_ub,i15,b_dA,c_dA,e_gradA,TRANSB,TRANSA,m_t,n_t,k_t,lda_t,ldb_t,ldc_t,alpha1_t,Aia0_t,Bib0_t,beta1_t,Cic0_t,b_unnamed_idx_1,emlrtJBEnviron) \
 firstprivate(st,b_st,c_st,d_st,e_st,b_y,cv46,y,cv44,d_y,c_y,alpha1,f_y,e_y,e_A,b_Lg,g_y,h_y,i_y,j_y,iv39,d_gradA,emlrtHadParallelError)

  {
    if (setjmp(emlrtJBEnviron) == 0) {
      st.prev = sp;
      st.tls = emlrtAllocTLS(sp, omp_get_thread_num());
      st.site = NULL;
      emlrtSetJmpBuf(&st, &emlrtJBEnviron);
      b_st.prev = &st;
      b_st.tls = st.tls;
      c_st.prev = &b_st;
      c_st.tls = b_st.tls;
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
      e_st.prev = &c_st;
      e_st.tls = c_st.tls;
      b_emxInit_real_T(&st, &b_gradA, 1, &cb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &c_gradA, 1, &cb_emlrtRTEI, true);
      emxInit_int32_T(&st, &r6, 1, &cb_emlrtRTEI, true);
      emxInit_real_T(&st, &b_X, 2, &cb_emlrtRTEI, true);
      emxInit_real_T(&st, &c_X, 2, &cb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &d_X, 1, &cb_emlrtRTEI, true);
      emxInit_real_T(&st, &b, 2, &cb_emlrtRTEI, true);
      emxInit_real_T(&st, &r7, 2, &cb_emlrtRTEI, true);
      emxInit_real_T(&st, &b_A, 2, &cb_emlrtRTEI, true);
      emxInit_real_T(&st, &a, 2, &cb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b_b, 1, &cb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &e_X, 1, &cb_emlrtRTEI, true);
      emxInit_real_T(&st, &Lg, 2, &gb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &M, 1, &fb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &uij, 1, &eb_emlrtRTEI, true);
      emxInit_real_T(&st, &dA, 2, &db_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (j = 0; j <= ub_loop; j++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {
        /* % Main loop for each atom Aj */
        i = 0;
        do {
          exitg1 = 0;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
          if (i <= (int32_T)n - 1) {
            /*          for k=1:m */
            /*              Lg(:,k)=logmapSR(X(:,i),A(:,k)); */
            /*          end */
            c_loop_ub = X->size[0];
            i13 = X->size[1];
            i14 = 1 + i;
            i13 = emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &u_emlrtBCI,
              &st);
            i14 = e_X->size[0];
            e_X->size[0] = c_loop_ub;
            emxEnsureCapacity(&st, (emxArray__common *)e_X, i14, (int32_T)sizeof
                              (real_T), &cb_emlrtRTEI);
            for (i14 = 0; i14 < c_loop_ub; i14++) {
              e_X->data[i14] = X->data[i14 + X->size[0] * (i13 - 1)];
            }

            b_st.site = &ob_emlrtRSI;
            logmapSRi(&b_st, e_X, A, Lg);
            b_st.site = &pb_emlrtRSI;
            c_loop_ub = W->size[0];
            i13 = W->size[1];
            i14 = 1 + i;
            i13 = emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &t_emlrtBCI,
              &b_st);
            i14 = b_b->size[0];
            b_b->size[0] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)b_b, i14, (int32_T)
                              sizeof(real_T), &cb_emlrtRTEI);
            for (i14 = 0; i14 < c_loop_ub; i14++) {
              b_b->data[i14] = W->data[i14 + W->size[0] * (i13 - 1)];
            }

            c_st.site = &u_emlrtRSI;
            i13 = W->size[0];
            if (!(Lg->size[1] == i13)) {
              guard6 = false;
              if ((Lg->size[0] == 1) && (Lg->size[1] == 1)) {
                guard6 = true;
              } else {
                i13 = W->size[0];
                if (i13 == 1) {
                  guard6 = true;
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  y = NULL;
                  m9 = emlrtCreateCharArray(2, iv29);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv44[b_i] = cv45[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m9, cv44);
                  emlrtAssign(&y, m9);
                  d_st.site = &yc_emlrtRSI;
                  e_st.site = &kd_emlrtRSI;
                  error(&d_st, message(&e_st, y, &g_emlrtMCI), &h_emlrtMCI);
                }
              }

              if (guard6) {
                emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                b_y = NULL;
                m9 = emlrtCreateCharArray(2, iv30);
                for (b_i = 0; b_i < 45; b_i++) {
                  cv46[b_i] = cv47[b_i];
                }

                emlrtInitCharArrayR2013a(&c_st, 45, m9, cv46);
                emlrtAssign(&b_y, m9);
                d_st.site = &xc_emlrtRSI;
                e_st.site = &jd_emlrtRSI;
                error(&d_st, message(&e_st, b_y, &e_emlrtMCI), &f_emlrtMCI);
              }
            }

            guard5 = false;
            if (Lg->size[1] == 1) {
              guard5 = true;
            } else {
              i13 = W->size[0];
              if (i13 == 1) {
                guard5 = true;
              } else {
                b_unnamed_idx_0 = (uint32_T)Lg->size[0];
                c_st.site = &t_emlrtRSI;
                d_st.site = &v_emlrtRSI;
                i13 = M->size[0];
                M->size[0] = (int32_T)b_unnamed_idx_0;
                emxEnsureCapacity(&d_st, (emxArray__common *)M, i13, (int32_T)
                                  sizeof(real_T), &cb_emlrtRTEI);
                c_loop_ub = (int32_T)b_unnamed_idx_0;
                for (i13 = 0; i13 < c_loop_ub; i13++) {
                  M->data[i13] = 0.0;
                }

                if ((Lg->size[0] < 1) || (Lg->size[1] < 1)) {
                } else {
                  alpha1 = 1.0;
                  beta1 = 0.0;
                  TRANSB = 'N';
                  TRANSA = 'N';
                  m_t = (ptrdiff_t)(Lg->size[0]);
                  n_t = (ptrdiff_t)(1);
                  k_t = (ptrdiff_t)(Lg->size[1]);
                  lda_t = (ptrdiff_t)(Lg->size[0]);
                  ldb_t = (ptrdiff_t)(Lg->size[1]);
                  ldc_t = (ptrdiff_t)(Lg->size[0]);
                  alpha1_t = (double *)(&alpha1);
                  Aia0_t = (double *)(&Lg->data[0]);
                  Bib0_t = (double *)(&b_b->data[0]);
                  beta1_t = (double *)(&beta1);
                  Cic0_t = (double *)(&M->data[0]);
                  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t,
                        &lda_t, Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
                }
              }
            }

            if (guard5) {
              i13 = M->size[0];
              M->size[0] = Lg->size[0];
              emxEnsureCapacity(&b_st, (emxArray__common *)M, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              c_loop_ub = Lg->size[0];
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                M->data[i13] = 0.0;
                d_loop_ub = Lg->size[1];
                for (i14 = 0; i14 < d_loop_ub; i14++) {
                  M->data[i13] += Lg->data[i13 + Lg->size[0] * i14] * b_b->
                    data[i14];
                }
              }
            }

            i13 = A->size[1];
            i14 = j + 1;
            emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &s_emlrtBCI, &st);
            b_st.site = &qb_emlrtRSI;
            c_loop_ub = X->size[0];
            i13 = X->size[1];
            i14 = 1 + i;
            i13 = emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &r_emlrtBCI,
              &b_st);
            i14 = a->size[0] * a->size[1];
            a->size[0] = 1;
            a->size[1] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)a, i14, (int32_T)sizeof
                              (real_T), &cb_emlrtRTEI);
            for (i14 = 0; i14 < c_loop_ub; i14++) {
              a->data[a->size[0] * i14] = X->data[i14 + X->size[0] * (i13 - 1)];
            }

            c_loop_ub = A->size[0];
            i13 = A->size[1];
            i14 = 1 + j;
            i13 = emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &q_emlrtBCI,
              &b_st);
            i14 = b_b->size[0];
            b_b->size[0] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)b_b, i14, (int32_T)
                              sizeof(real_T), &cb_emlrtRTEI);
            for (i14 = 0; i14 < c_loop_ub; i14++) {
              b_b->data[i14] = A->data[i14 + A->size[0] * (i13 - 1)];
            }

            c_st.site = &u_emlrtRSI;
            i13 = A->size[0];
            if (!(a->size[1] == i13)) {
              guard4 = false;
              if (a->size[1] == 1) {
                guard4 = true;
              } else {
                i13 = A->size[0];
                if (i13 == 1) {
                  guard4 = true;
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  c_y = NULL;
                  m9 = emlrtCreateCharArray(2, iv31);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv44[b_i] = cv45[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m9, cv44);
                  emlrtAssign(&c_y, m9);
                  d_st.site = &yc_emlrtRSI;
                  e_st.site = &kd_emlrtRSI;
                  error(&d_st, message(&e_st, c_y, &g_emlrtMCI), &h_emlrtMCI);
                }
              }

              if (guard4) {
                emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                d_y = NULL;
                m9 = emlrtCreateCharArray(2, iv32);
                for (b_i = 0; b_i < 45; b_i++) {
                  cv46[b_i] = cv47[b_i];
                }

                emlrtInitCharArrayR2013a(&c_st, 45, m9, cv46);
                emlrtAssign(&d_y, m9);
                d_st.site = &xc_emlrtRSI;
                e_st.site = &jd_emlrtRSI;
                error(&d_st, message(&e_st, d_y, &e_emlrtMCI), &f_emlrtMCI);
              }
            }

            guard3 = false;
            if (a->size[1] == 1) {
              guard3 = true;
            } else {
              i13 = A->size[0];
              if (i13 == 1) {
                guard3 = true;
              } else {
                c_st.site = &wb_emlrtRSI;
                d_st.site = &xb_emlrtRSI;
                if (a->size[1] < 1) {
                  alpha1 = 0.0;
                } else {
                  n_t = (ptrdiff_t)(a->size[1]);
                  m_t = (ptrdiff_t)(1);
                  k_t = (ptrdiff_t)(1);
                  alpha1_t = (double *)(&a->data[0]);
                  Aia0_t = (double *)(&b_b->data[0]);
                  alpha1 = ddot(&n_t, alpha1_t, &m_t, Aia0_t, &k_t);
                }
              }
            }

            if (guard3) {
              alpha1 = 0.0;
              for (i13 = 0; i13 < a->size[1]; i13++) {
                alpha1 += a->data[a->size[0] * i13] * b_b->data[i13];
              }
            }

            i13 = X->size[1];
            i14 = i + 1;
            emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &p_emlrtBCI, &st);
            c_loop_ub = X->size[0];
            i13 = b_b->size[0];
            b_b->size[0] = c_loop_ub;
            emxEnsureCapacity(&st, (emxArray__common *)b_b, i13, (int32_T)sizeof
                              (real_T), &cb_emlrtRTEI);
            for (i13 = 0; i13 < c_loop_ub; i13++) {
              b_b->data[i13] = alpha1 * X->data[i13 + X->size[0] * i];
            }

            i13 = A->size[0];
            i14 = b_b->size[0];
            emlrtSizeEqCheck1DFastR2012b(i13, i14, &h_emlrtECI, &st);
            c_loop_ub = A->size[0];
            i13 = uij->size[0];
            uij->size[0] = c_loop_ub;
            emxEnsureCapacity(&st, (emxArray__common *)uij, i13, (int32_T)sizeof
                              (real_T), &cb_emlrtRTEI);
            for (i13 = 0; i13 < c_loop_ub; i13++) {
              uij->data[i13] = A->data[i13 + A->size[0] * j] - b_b->data[i13];
            }

            b_st.site = &rb_emlrtRSI;
            normu = norm(uij);
            b_st.site = &sb_emlrtRSI;
            c_loop_ub = X->size[0];
            i13 = X->size[1];
            i14 = 1 + i;
            i13 = emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &o_emlrtBCI,
              &b_st);
            i14 = a->size[0] * a->size[1];
            a->size[0] = 1;
            a->size[1] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)a, i14, (int32_T)sizeof
                              (real_T), &cb_emlrtRTEI);
            for (i14 = 0; i14 < c_loop_ub; i14++) {
              a->data[a->size[0] * i14] = X->data[i14 + X->size[0] * (i13 - 1)];
            }

            c_loop_ub = A->size[0];
            i13 = A->size[1];
            i14 = 1 + j;
            i13 = emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &n_emlrtBCI,
              &b_st);
            i14 = b_b->size[0];
            b_b->size[0] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)b_b, i14, (int32_T)
                              sizeof(real_T), &cb_emlrtRTEI);
            for (i14 = 0; i14 < c_loop_ub; i14++) {
              b_b->data[i14] = A->data[i14 + A->size[0] * (i13 - 1)];
            }

            c_st.site = &u_emlrtRSI;
            i13 = A->size[0];
            if (!(a->size[1] == i13)) {
              guard2 = false;
              if (a->size[1] == 1) {
                guard2 = true;
              } else {
                i13 = A->size[0];
                if (i13 == 1) {
                  guard2 = true;
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  e_y = NULL;
                  m9 = emlrtCreateCharArray(2, iv33);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv44[b_i] = cv45[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m9, cv44);
                  emlrtAssign(&e_y, m9);
                  d_st.site = &yc_emlrtRSI;
                  e_st.site = &kd_emlrtRSI;
                  error(&d_st, message(&e_st, e_y, &g_emlrtMCI), &h_emlrtMCI);
                }
              }

              if (guard2) {
                emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                f_y = NULL;
                m9 = emlrtCreateCharArray(2, iv34);
                for (b_i = 0; b_i < 45; b_i++) {
                  cv46[b_i] = cv47[b_i];
                }

                emlrtInitCharArrayR2013a(&c_st, 45, m9, cv46);
                emlrtAssign(&f_y, m9);
                d_st.site = &xc_emlrtRSI;
                e_st.site = &jd_emlrtRSI;
                error(&d_st, message(&e_st, f_y, &e_emlrtMCI), &f_emlrtMCI);
              }
            }

            guard1 = false;
            if (a->size[1] == 1) {
              guard1 = true;
            } else {
              i13 = A->size[0];
              if (i13 == 1) {
                guard1 = true;
              } else {
                c_st.site = &wb_emlrtRSI;
                d_st.site = &xb_emlrtRSI;
                if (a->size[1] < 1) {
                  inner = 0.0;
                } else {
                  n_t = (ptrdiff_t)(a->size[1]);
                  m_t = (ptrdiff_t)(1);
                  k_t = (ptrdiff_t)(1);
                  alpha1_t = (double *)(&a->data[0]);
                  Aia0_t = (double *)(&b_b->data[0]);
                  inner = ddot(&n_t, alpha1_t, &m_t, Aia0_t, &k_t);
                }
              }
            }

            if (guard1) {
              inner = 0.0;
              for (i13 = 0; i13 < a->size[1]; i13++) {
                inner += a->data[a->size[0] * i13] * b_b->data[i13];
              }
            }

            if ((normu != 0.0) && (inner * inner < 0.99999)) {
              b_st.site = &tb_emlrtRSI;
              eye(&b_st, d, b_A);
              i13 = b_A->size[0] * b_A->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)b_A, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              c_A = b_A->size[0];
              d_A = b_A->size[1];
              c_loop_ub = c_A * d_A;
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                b_A->data[i13] /= normu;
              }

              alpha1 = muDoubleScalarPower(normu, 3.0);
              i13 = r7->size[0] * r7->size[1];
              r7->size[0] = uij->size[0];
              r7->size[1] = uij->size[0];
              emxEnsureCapacity(&st, (emxArray__common *)r7, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              c_loop_ub = uij->size[0];
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                d_loop_ub = uij->size[0];
                for (i14 = 0; i14 < d_loop_ub; i14++) {
                  beta1 = uij->data[i13] * uij->data[i14];
                  r7->data[i13 + r7->size[0] * i14] = beta1 / alpha1;
                }
              }

              for (i13 = 0; i13 < 2; i13++) {
                e_A[i13] = b_A->size[i13];
              }

              for (i13 = 0; i13 < 2; i13++) {
                b_Lg[i13] = r7->size[i13];
              }

              emlrtSizeEqCheck2DFastR2012b(e_A, b_Lg, &g_emlrtECI, &st);
              b_st.site = &tb_emlrtRSI;
              eye(&b_st, d, b);
              i13 = X->size[1];
              i14 = i + 1;
              emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &m_emlrtBCI, &st);
              i13 = X->size[1];
              i14 = i + 1;
              emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &l_emlrtBCI, &st);
              c_loop_ub = X->size[0];
              d_loop_ub = X->size[0];
              i13 = d_X->size[0];
              d_X->size[0] = c_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)d_X, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                d_X->data[i13] = X->data[i13 + X->size[0] * i];
              }

              i13 = c_X->size[0] * c_X->size[1];
              c_X->size[0] = 1;
              c_X->size[1] = d_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)c_X, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              for (i13 = 0; i13 < d_loop_ub; i13++) {
                c_X->data[c_X->size[0] * i13] = X->data[i13 + X->size[0] * i];
              }

              i13 = Lg->size[0] * Lg->size[1];
              Lg->size[0] = d_X->size[0];
              Lg->size[1] = c_X->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)Lg, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              c_loop_ub = d_X->size[0];
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                d_loop_ub = c_X->size[1];
                for (i14 = 0; i14 < d_loop_ub; i14++) {
                  Lg->data[i13 + Lg->size[0] * i14] = d_X->data[i13] * c_X->
                    data[c_X->size[0] * i14];
                }
              }

              for (i13 = 0; i13 < 2; i13++) {
                e_A[i13] = b->size[i13];
              }

              for (i13 = 0; i13 < 2; i13++) {
                b_Lg[i13] = Lg->size[i13];
              }

              emlrtSizeEqCheck2DFastR2012b(e_A, b_Lg, &f_emlrtECI, &st);
              b_st.site = &tb_emlrtRSI;
              i13 = b_A->size[0] * b_A->size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)b_A, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              c_A = b_A->size[0];
              d_A = b_A->size[1];
              c_loop_ub = c_A * d_A;
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                b_A->data[i13] -= r7->data[i13];
              }

              i13 = b->size[0] * b->size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)b, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              c_b = b->size[0];
              d_b = b->size[1];
              c_loop_ub = c_b * d_b;
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                b->data[i13] -= Lg->data[i13];
              }

              c_st.site = &u_emlrtRSI;
              if (!(b_A->size[1] == b->size[0])) {
                if (((b_A->size[0] == 1) && (b_A->size[1] == 1)) || ((b->size[0]
                      == 1) && (b->size[1] == 1))) {
                  emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                  g_y = NULL;
                  m9 = emlrtCreateCharArray(2, iv35);
                  for (b_i = 0; b_i < 45; b_i++) {
                    cv46[b_i] = cv47[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 45, m9, cv46);
                  emlrtAssign(&g_y, m9);
                  d_st.site = &xc_emlrtRSI;
                  e_st.site = &jd_emlrtRSI;
                  error(&d_st, message(&e_st, g_y, &e_emlrtMCI), &f_emlrtMCI);
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  h_y = NULL;
                  m9 = emlrtCreateCharArray(2, iv36);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv44[b_i] = cv45[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m9, cv44);
                  emlrtAssign(&h_y, m9);
                  d_st.site = &yc_emlrtRSI;
                  e_st.site = &kd_emlrtRSI;
                  error(&d_st, message(&e_st, h_y, &g_emlrtMCI), &h_emlrtMCI);
                }
              }

              if ((b_A->size[1] == 1) || (b->size[0] == 1)) {
                i13 = dA->size[0] * dA->size[1];
                dA->size[0] = b_A->size[0];
                dA->size[1] = b->size[1];
                emxEnsureCapacity(&b_st, (emxArray__common *)dA, i13, (int32_T)
                                  sizeof(real_T), &cb_emlrtRTEI);
                c_loop_ub = b_A->size[0];
                for (i13 = 0; i13 < c_loop_ub; i13++) {
                  d_loop_ub = b->size[1];
                  for (i14 = 0; i14 < d_loop_ub; i14++) {
                    dA->data[i13 + dA->size[0] * i14] = 0.0;
                    e_loop_ub = b_A->size[1];
                    for (i15 = 0; i15 < e_loop_ub; i15++) {
                      dA->data[i13 + dA->size[0] * i14] += b_A->data[i13 +
                        b_A->size[0] * i15] * b->data[i15 + b->size[0] * i14];
                    }
                  }
                }
              } else {
                b_unnamed_idx_0 = (uint32_T)b_A->size[0];
                b_unnamed_idx_1 = (uint32_T)b->size[1];
                i13 = r7->size[0] * r7->size[1];
                r7->size[0] = (int32_T)b_unnamed_idx_0;
                emxEnsureCapacity(&b_st, (emxArray__common *)r7, i13, (int32_T)
                                  sizeof(real_T), &cb_emlrtRTEI);
                i13 = r7->size[0] * r7->size[1];
                r7->size[1] = (int32_T)b_unnamed_idx_1;
                emxEnsureCapacity(&b_st, (emxArray__common *)r7, i13, (int32_T)
                                  sizeof(real_T), &cb_emlrtRTEI);
                c_loop_ub = (int32_T)b_unnamed_idx_0 * (int32_T)b_unnamed_idx_1;
                for (i13 = 0; i13 < c_loop_ub; i13++) {
                  r7->data[i13] = 0.0;
                }

                c_st.site = &t_emlrtRSI;
                d_st.site = &v_emlrtRSI;
                i13 = dA->size[0] * dA->size[1];
                dA->size[0] = (int32_T)b_unnamed_idx_0;
                emxEnsureCapacity(&d_st, (emxArray__common *)dA, i13, (int32_T)
                                  sizeof(real_T), &cb_emlrtRTEI);
                i13 = dA->size[0] * dA->size[1];
                dA->size[1] = (int32_T)b_unnamed_idx_1;
                emxEnsureCapacity(&d_st, (emxArray__common *)dA, i13, (int32_T)
                                  sizeof(real_T), &cb_emlrtRTEI);
                c_loop_ub = (int32_T)b_unnamed_idx_0 * (int32_T)b_unnamed_idx_1;
                for (i13 = 0; i13 < c_loop_ub; i13++) {
                  dA->data[i13] = 0.0;
                }

                if ((b_A->size[0] < 1) || (b->size[1] < 1) || (b_A->size[1] < 1))
                {
                } else {
                  alpha1 = 1.0;
                  beta1 = 0.0;
                  TRANSB = 'N';
                  TRANSA = 'N';
                  m_t = (ptrdiff_t)(b_A->size[0]);
                  n_t = (ptrdiff_t)(b->size[1]);
                  k_t = (ptrdiff_t)(b_A->size[1]);
                  lda_t = (ptrdiff_t)(b_A->size[0]);
                  ldb_t = (ptrdiff_t)(b_A->size[1]);
                  ldc_t = (ptrdiff_t)(b_A->size[0]);
                  alpha1_t = (double *)(&alpha1);
                  Aia0_t = (double *)(&b_A->data[0]);
                  Bib0_t = (double *)(&b->data[0]);
                  beta1_t = (double *)(&beta1);
                  Cic0_t = (double *)(&dA->data[0]);
                  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t,
                        &lda_t, Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
                }
              }

              b_st.site = &ub_emlrtRSI;
              if ((inner < -1.0) || (1.0 < inner)) {
                c_st.site = &nb_emlrtRSI;
                b_eml_error(&c_st);
              }

              alpha1 = muDoubleScalarAcos(inner);
              i13 = dA->size[0] * dA->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)dA, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              b_dA = dA->size[0];
              c_dA = dA->size[1];
              c_loop_ub = b_dA * c_dA;
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                dA->data[i13] *= alpha1;
              }

              i13 = X->size[1];
              i14 = i + 1;
              emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &k_emlrtBCI, &st);
              b_st.site = &ub_emlrtRSI;
              alpha1 = muDoubleScalarSqrt(1.0 - inner * inner);
              c_loop_ub = X->size[0];
              i13 = b_X->size[0] * b_X->size[1];
              b_X->size[0] = 1;
              b_X->size[1] = c_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)b_X, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                b_X->data[b_X->size[0] * i13] = X->data[i13 + X->size[0] * i];
              }

              i13 = r7->size[0] * r7->size[1];
              r7->size[0] = uij->size[0];
              r7->size[1] = b_X->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)r7, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              c_loop_ub = uij->size[0];
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                d_loop_ub = b_X->size[1];
                for (i14 = 0; i14 < d_loop_ub; i14++) {
                  beta1 = uij->data[i13] * b_X->data[b_X->size[0] * i14];
                  r7->data[i13 + r7->size[0] * i14] = beta1 / normu / alpha1;
                }
              }

              for (i13 = 0; i13 < 2; i13++) {
                e_A[i13] = dA->size[i13];
              }

              for (i13 = 0; i13 < 2; i13++) {
                b_Lg[i13] = r7->size[i13];
              }

              emlrtSizeEqCheck2DFastR2012b(e_A, b_Lg, &e_emlrtECI, &st);
              i13 = dA->size[0] * dA->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)dA, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              b_dA = dA->size[0];
              c_dA = dA->size[1];
              c_loop_ub = b_dA * c_dA;
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                dA->data[i13] -= r7->data[i13];
              }

              i13 = gradA->size[1];
              i14 = j + 1;
              emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &j_emlrtBCI, &st);
              i13 = Wt->size[0];
              i14 = i + 1;
              emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &i_emlrtBCI, &st);
              i13 = Wt->size[1];
              i14 = j + 1;
              emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &h_emlrtBCI, &st);
              alpha1 = Wt->data[i + Wt->size[0] * j];
              i13 = Lg->size[0] * Lg->size[1];
              Lg->size[0] = dA->size[1];
              Lg->size[1] = dA->size[0];
              emxEnsureCapacity(&st, (emxArray__common *)Lg, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              c_loop_ub = dA->size[0];
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                d_loop_ub = dA->size[1];
                for (i14 = 0; i14 < d_loop_ub; i14++) {
                  Lg->data[i14 + Lg->size[0] * i13] = alpha1 * dA->data[i13 +
                    dA->size[0] * i14];
                }
              }

              b_st.site = &vb_emlrtRSI;
              c_st.site = &u_emlrtRSI;
              if (!(Lg->size[1] == M->size[0])) {
                if (((Lg->size[0] == 1) && (Lg->size[1] == 1)) || (M->size[0] ==
                     1)) {
                  emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                  i_y = NULL;
                  m9 = emlrtCreateCharArray(2, iv37);
                  for (b_i = 0; b_i < 45; b_i++) {
                    cv46[b_i] = cv47[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 45, m9, cv46);
                  emlrtAssign(&i_y, m9);
                  d_st.site = &xc_emlrtRSI;
                  e_st.site = &jd_emlrtRSI;
                  error(&d_st, message(&e_st, i_y, &e_emlrtMCI), &f_emlrtMCI);
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  j_y = NULL;
                  m9 = emlrtCreateCharArray(2, iv38);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv44[b_i] = cv45[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m9, cv44);
                  emlrtAssign(&j_y, m9);
                  d_st.site = &yc_emlrtRSI;
                  e_st.site = &kd_emlrtRSI;
                  error(&d_st, message(&e_st, j_y, &g_emlrtMCI), &h_emlrtMCI);
                }
              }

              if ((Lg->size[1] == 1) || (M->size[0] == 1)) {
                i13 = b_b->size[0];
                b_b->size[0] = Lg->size[0];
                emxEnsureCapacity(&b_st, (emxArray__common *)b_b, i13, (int32_T)
                                  sizeof(real_T), &cb_emlrtRTEI);
                c_loop_ub = Lg->size[0];
                for (i13 = 0; i13 < c_loop_ub; i13++) {
                  b_b->data[i13] = 0.0;
                  d_loop_ub = Lg->size[1];
                  for (i14 = 0; i14 < d_loop_ub; i14++) {
                    b_b->data[i13] += Lg->data[i13 + Lg->size[0] * i14] *
                      M->data[i14];
                  }
                }
              } else {
                b_unnamed_idx_0 = (uint32_T)Lg->size[0];
                c_st.site = &t_emlrtRSI;
                d_st.site = &v_emlrtRSI;
                i13 = b_b->size[0];
                b_b->size[0] = (int32_T)b_unnamed_idx_0;
                emxEnsureCapacity(&d_st, (emxArray__common *)b_b, i13, (int32_T)
                                  sizeof(real_T), &cb_emlrtRTEI);
                c_loop_ub = (int32_T)b_unnamed_idx_0;
                for (i13 = 0; i13 < c_loop_ub; i13++) {
                  b_b->data[i13] = 0.0;
                }

                if ((Lg->size[0] < 1) || (Lg->size[1] < 1)) {
                } else {
                  alpha1 = 1.0;
                  beta1 = 0.0;
                  TRANSB = 'N';
                  TRANSA = 'N';
                  m_t = (ptrdiff_t)(Lg->size[0]);
                  n_t = (ptrdiff_t)(1);
                  k_t = (ptrdiff_t)(Lg->size[1]);
                  lda_t = (ptrdiff_t)(Lg->size[0]);
                  ldb_t = (ptrdiff_t)(Lg->size[1]);
                  ldc_t = (ptrdiff_t)(Lg->size[0]);
                  alpha1_t = (double *)(&alpha1);
                  Aia0_t = (double *)(&Lg->data[0]);
                  Bib0_t = (double *)(&M->data[0]);
                  beta1_t = (double *)(&beta1);
                  Cic0_t = (double *)(&b_b->data[0]);
                  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t,
                        &lda_t, Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
                }
              }

              i13 = gradA->size[0];
              i14 = b_b->size[0];
              emlrtSizeEqCheck1DFastR2012b(i13, i14, &d_emlrtECI, &st);
              c_loop_ub = gradA->size[0];
              i13 = r6->size[0];
              r6->size[0] = c_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)r6, i13, (int32_T)
                                sizeof(int32_T), &cb_emlrtRTEI);
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                r6->data[i13] = i13;
              }

              i13 = gradA->size[1];
              i14 = j + 1;
              emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &g_emlrtBCI, &st);
              iv39[0] = r6->size[0];
              c_loop_ub = gradA->size[0];
              i13 = c_gradA->size[0];
              c_gradA->size[0] = c_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)c_gradA, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                c_gradA->data[i13] = gradA->data[i13 + gradA->size[0] * j];
              }

              d_gradA[0] = c_gradA->size[0];
              emlrtSubAssignSizeCheckR2012b(iv39, 1, d_gradA, 1, &c_emlrtECI,
                &st);
              e_gradA = gradA->size[0];
              i13 = b_gradA->size[0];
              b_gradA->size[0] = e_gradA;
              emxEnsureCapacity(&st, (emxArray__common *)b_gradA, i13, (int32_T)
                                sizeof(real_T), &cb_emlrtRTEI);
              for (i13 = 0; i13 < e_gradA; i13++) {
                b_gradA->data[i13] = gradA->data[i13 + gradA->size[0] * j] +
                  b_b->data[i13];
              }

              c_loop_ub = b_gradA->size[0];
              for (i13 = 0; i13 < c_loop_ub; i13++) {
                gradA->data[r6->data[i13] + gradA->size[0] * j] = b_gradA->
                  data[i13];
              }
            }

            i++;
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
          } else {
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      } else {
        emlrtHadParallelError = true;
      }
    }

    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 16);
      emxFree_real_T(&dA);
      emxFree_real_T(&uij);
      emxFree_real_T(&M);
      emxFree_real_T(&Lg);
      emxFree_real_T(&e_X);
      emxFree_real_T(&b_b);
      emxFree_real_T(&a);
      emxFree_real_T(&b_A);
      emxFree_real_T(&r7);
      emxFree_real_T(&b);
      emxFree_real_T(&d_X);
      emxFree_real_T(&c_X);
      emxFree_real_T(&b_X);
      emxFree_int32_T(&r6);
      emxFree_real_T(&c_gradA);
      emxFree_real_T(&b_gradA);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emxFree_real_T(&Wt);
  ub_loop = gradA->size[0] * gradA->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)gradA, ub_loop, (int32_T)sizeof
                    (real_T), &cb_emlrtRTEI);
  ub_loop = gradA->size[0];
  loop_ub = gradA->size[1];
  loop_ub *= ub_loop;
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    gradA->data[ub_loop] *= 2.0;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (gradientASR.c) */
