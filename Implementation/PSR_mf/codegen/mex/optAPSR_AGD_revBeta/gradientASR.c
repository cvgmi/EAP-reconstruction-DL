/*
 * gradientASR.c
 *
 * Code generation for function 'gradientASR'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD_revBeta.h"
#include "gradientASR.h"
#include "norm.h"
#include "optAPSR_AGD_revBeta_emxutil.h"
#include "eml_error.h"
#include "eye.h"
#include "logmapSRi.h"
#include "optAPSR_AGD_revBeta_mexutil.h"
#include "optAPSR_AGD_revBeta_data.h"

/* Variable Definitions */
static emlrtRSInfo o_emlrtRSI = { 21, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtRSInfo p_emlrtRSI = { 22, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtRSInfo q_emlrtRSI = { 24, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtRSInfo r_emlrtRSI = { 25, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtRSInfo s_emlrtRSI = { 26, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtRSInfo t_emlrtRSI = { 28, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtRSInfo u_emlrtRSI = { 29, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtRSInfo v_emlrtRSI = { 30, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 1, 18, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 28, 13, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 24, 9, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 22, 9, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 21, 9, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 14, 1, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtECInfo emlrtECI = { -1, 30, 13, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 30, 21, "gradA", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtECInfo b_emlrtECI = { -1, 30, 26, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtBCInfo b_emlrtBCI = { -1, -1, 30, 44, "Wt", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 30, 42, "Wt", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 30, 34, "gradA", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtECInfo c_emlrtECI = { 2, 29, 18, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtBCInfo e_emlrtBCI = { -1, -1, 29, 41, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtECInfo d_emlrtECI = { 2, 28, 53, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtBCInfo f_emlrtBCI = { -1, -1, 28, 71, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 28, 64, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtECInfo e_emlrtECI = { 2, 28, 19, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtBCInfo h_emlrtBCI = { -1, -1, 26, 29, "A", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 26, 21, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtECInfo f_emlrtECI = { -1, 24, 15, "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m"
};

static emlrtBCInfo j_emlrtBCI = { -1, -1, 24, 43, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 24, 35, "A", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 24, 27, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 24, 19, "A", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 22, 20, "W", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
  0 };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 21, 28, "X", "gradientASR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientASR.m",
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
  int32_T i0;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  int32_T j;
  emxArray_real_T *b_gradA;
  emxArray_real_T *c_gradA;
  emxArray_int32_T *r0;
  emxArray_real_T *b_X;
  emxArray_real_T *c_X;
  emxArray_real_T *d_X;
  emxArray_real_T *b;
  emxArray_real_T *r1;
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
  int32_T i1;
  int32_T i2;
  boolean_T guard6 = false;
  const mxArray *y;
  static const int32_T iv2[2] = { 1, 21 };

  const mxArray *m1;
  char_T cv4[21];
  int32_T b_i;
  static const char_T cv5[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *b_y;
  static const int32_T iv3[2] = { 1, 45 };

  char_T cv6[45];
  static const char_T cv7[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  static const int32_T iv4[2] = { 1, 21 };

  const mxArray *d_y;
  static const int32_T iv5[2] = { 1, 45 };

  boolean_T guard3 = false;
  boolean_T guard2 = false;
  const mxArray *e_y;
  static const int32_T iv6[2] = { 1, 21 };

  const mxArray *f_y;
  static const int32_T iv7[2] = { 1, 45 };

  boolean_T guard1 = false;
  int32_T c_A;
  int32_T d_A;
  int32_T e_A[2];
  int32_T b_Lg[2];
  int32_T c_b;
  int32_T d_b;
  const mxArray *g_y;
  static const int32_T iv8[2] = { 1, 45 };

  const mxArray *h_y;
  static const int32_T iv9[2] = { 1, 21 };

  int32_T e_loop_ub;
  int32_T i3;
  uint32_T b_unnamed_idx_1;
  int32_T b_dA;
  int32_T c_dA;
  const mxArray *i_y;
  static const int32_T iv10[2] = { 1, 45 };

  const mxArray *j_y;
  static const int32_T iv11[2] = { 1, 21 };

  int32_T iv12[1];
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
  b_emxInit_real_T(sp, &Wt, 2, &t_emlrtRTEI, true);

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
                    &o_emlrtRTEI);
  loop_ub = W->size[0];
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    b_loop_ub = W->size[1];
    for (i0 = 0; i0 < b_loop_ub; i0++) {
      Wt->data[i0 + Wt->size[0] * ub_loop] = W->data[ub_loop + W->size[0] * i0];
    }
  }

  unnamed_idx_0 = (uint32_T)X->size[0];
  unnamed_idx_1 = (uint32_T)W->size[0];
  ub_loop = gradA->size[0] * gradA->size[1];
  gradA->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)gradA, ub_loop, (int32_T)sizeof
                    (real_T), &o_emlrtRTEI);
  ub_loop = gradA->size[0] * gradA->size[1];
  gradA->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)gradA, ub_loop, (int32_T)sizeof
                    (real_T), &o_emlrtRTEI);
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
 private(b_gradA,c_gradA,r0,b_X,c_X,d_X,b,r1,b_A,a,b_b,e_X,Lg,M,uij,dA,inner,normu,i,exitg1,c_loop_ub,i1,i2,guard6,m1,b_i,guard5,d_loop_ub,guard4,guard3,guard2,guard1,c_A,d_A,beta1,c_b,d_b,b_unnamed_idx_0,e_loop_ub,i3,b_dA,c_dA,e_gradA,TRANSB,TRANSA,m_t,n_t,k_t,lda_t,ldb_t,ldc_t,alpha1_t,Aia0_t,Bib0_t,beta1_t,Cic0_t,b_unnamed_idx_1,emlrtJBEnviron) \
 firstprivate(st,b_st,c_st,d_st,e_st,b_y,cv6,y,cv4,d_y,c_y,alpha1,f_y,e_y,e_A,b_Lg,g_y,h_y,i_y,j_y,iv12,d_gradA,emlrtHadParallelError)

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
      c_emxInit_real_T(&st, &b_gradA, 1, &o_emlrtRTEI, true);
      c_emxInit_real_T(&st, &c_gradA, 1, &o_emlrtRTEI, true);
      emxInit_int32_T(&st, &r0, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b_X, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(&st, &c_X, 2, &o_emlrtRTEI, true);
      c_emxInit_real_T(&st, &d_X, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(&st, &r1, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b_A, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(&st, &a, 2, &o_emlrtRTEI, true);
      c_emxInit_real_T(&st, &b_b, 1, &o_emlrtRTEI, true);
      c_emxInit_real_T(&st, &e_X, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(&st, &Lg, 2, &s_emlrtRTEI, true);
      c_emxInit_real_T(&st, &M, 1, &r_emlrtRTEI, true);
      c_emxInit_real_T(&st, &uij, 1, &q_emlrtRTEI, true);
      b_emxInit_real_T(&st, &dA, 2, &p_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (j = 0; j <= ub_loop; j++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {
        /*  Lg = zeros(d,m); */
        /* % Main loop for each atom Aj */
        i = 0;
        do {
          exitg1 = 0;
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
          if (i <= (int32_T)n - 1) {
            c_loop_ub = X->size[0];
            i1 = X->size[1];
            i2 = 1 + i;
            i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &o_emlrtBCI, &st);
            i2 = e_X->size[0];
            e_X->size[0] = c_loop_ub;
            emxEnsureCapacity(&st, (emxArray__common *)e_X, i2, (int32_T)sizeof
                              (real_T), &o_emlrtRTEI);
            for (i2 = 0; i2 < c_loop_ub; i2++) {
              e_X->data[i2] = X->data[i2 + X->size[0] * (i1 - 1)];
            }

            b_st.site = &o_emlrtRSI;
            logmapSRi(&b_st, e_X, A, Lg);
            b_st.site = &p_emlrtRSI;
            c_loop_ub = W->size[0];
            i1 = W->size[1];
            i2 = 1 + i;
            i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &n_emlrtBCI, &b_st);
            i2 = b_b->size[0];
            b_b->size[0] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)b_b, i2, (int32_T)
                              sizeof(real_T), &o_emlrtRTEI);
            for (i2 = 0; i2 < c_loop_ub; i2++) {
              b_b->data[i2] = W->data[i2 + W->size[0] * (i1 - 1)];
            }

            c_st.site = &gb_emlrtRSI;
            i1 = W->size[0];
            if (!(Lg->size[1] == i1)) {
              guard6 = false;
              if ((Lg->size[0] == 1) && (Lg->size[1] == 1)) {
                guard6 = true;
              } else {
                i1 = W->size[0];
                if (i1 == 1) {
                  guard6 = true;
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  y = NULL;
                  m1 = emlrtCreateCharArray(2, iv2);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv4[b_i] = cv5[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m1, cv4);
                  emlrtAssign(&y, m1);
                  d_st.site = &id_emlrtRSI;
                  e_st.site = &td_emlrtRSI;
                  error(&d_st, b_message(&e_st, y, &h_emlrtMCI), &i_emlrtMCI);
                }
              }

              if (guard6) {
                emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                b_y = NULL;
                m1 = emlrtCreateCharArray(2, iv3);
                for (b_i = 0; b_i < 45; b_i++) {
                  cv6[b_i] = cv7[b_i];
                }

                emlrtInitCharArrayR2013a(&c_st, 45, m1, cv6);
                emlrtAssign(&b_y, m1);
                d_st.site = &hd_emlrtRSI;
                e_st.site = &sd_emlrtRSI;
                error(&d_st, b_message(&e_st, b_y, &f_emlrtMCI), &g_emlrtMCI);
              }
            }

            guard5 = false;
            if (Lg->size[1] == 1) {
              guard5 = true;
            } else {
              i1 = W->size[0];
              if (i1 == 1) {
                guard5 = true;
              } else {
                b_unnamed_idx_0 = (uint32_T)Lg->size[0];
                c_st.site = &fb_emlrtRSI;
                d_st.site = &hb_emlrtRSI;
                i1 = M->size[0];
                M->size[0] = (int32_T)b_unnamed_idx_0;
                emxEnsureCapacity(&d_st, (emxArray__common *)M, i1, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                c_loop_ub = (int32_T)b_unnamed_idx_0;
                for (i1 = 0; i1 < c_loop_ub; i1++) {
                  M->data[i1] = 0.0;
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
              i1 = M->size[0];
              M->size[0] = Lg->size[0];
              emxEnsureCapacity(&b_st, (emxArray__common *)M, i1, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              c_loop_ub = Lg->size[0];
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                M->data[i1] = 0.0;
                d_loop_ub = Lg->size[1];
                for (i2 = 0; i2 < d_loop_ub; i2++) {
                  M->data[i1] += Lg->data[i1 + Lg->size[0] * i2] * b_b->data[i2];
                }
              }
            }

            i1 = A->size[1];
            i2 = j + 1;
            emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &m_emlrtBCI, &st);
            b_st.site = &q_emlrtRSI;
            c_loop_ub = X->size[0];
            i1 = X->size[1];
            i2 = 1 + i;
            i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &l_emlrtBCI, &b_st);
            i2 = a->size[0] * a->size[1];
            a->size[0] = 1;
            a->size[1] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)a, i2, (int32_T)sizeof
                              (real_T), &o_emlrtRTEI);
            for (i2 = 0; i2 < c_loop_ub; i2++) {
              a->data[a->size[0] * i2] = X->data[i2 + X->size[0] * (i1 - 1)];
            }

            c_loop_ub = A->size[0];
            i1 = A->size[1];
            i2 = 1 + j;
            i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &k_emlrtBCI, &b_st);
            i2 = b_b->size[0];
            b_b->size[0] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)b_b, i2, (int32_T)
                              sizeof(real_T), &o_emlrtRTEI);
            for (i2 = 0; i2 < c_loop_ub; i2++) {
              b_b->data[i2] = A->data[i2 + A->size[0] * (i1 - 1)];
            }

            c_st.site = &gb_emlrtRSI;
            i1 = A->size[0];
            if (!(a->size[1] == i1)) {
              guard4 = false;
              if (a->size[1] == 1) {
                guard4 = true;
              } else {
                i1 = A->size[0];
                if (i1 == 1) {
                  guard4 = true;
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  c_y = NULL;
                  m1 = emlrtCreateCharArray(2, iv4);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv4[b_i] = cv5[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m1, cv4);
                  emlrtAssign(&c_y, m1);
                  d_st.site = &id_emlrtRSI;
                  e_st.site = &td_emlrtRSI;
                  error(&d_st, b_message(&e_st, c_y, &h_emlrtMCI), &i_emlrtMCI);
                }
              }

              if (guard4) {
                emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                d_y = NULL;
                m1 = emlrtCreateCharArray(2, iv5);
                for (b_i = 0; b_i < 45; b_i++) {
                  cv6[b_i] = cv7[b_i];
                }

                emlrtInitCharArrayR2013a(&c_st, 45, m1, cv6);
                emlrtAssign(&d_y, m1);
                d_st.site = &hd_emlrtRSI;
                e_st.site = &sd_emlrtRSI;
                error(&d_st, b_message(&e_st, d_y, &f_emlrtMCI), &g_emlrtMCI);
              }
            }

            guard3 = false;
            if (a->size[1] == 1) {
              guard3 = true;
            } else {
              i1 = A->size[0];
              if (i1 == 1) {
                guard3 = true;
              } else {
                c_st.site = &xb_emlrtRSI;
                d_st.site = &yb_emlrtRSI;
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
              for (i1 = 0; i1 < a->size[1]; i1++) {
                alpha1 += a->data[a->size[0] * i1] * b_b->data[i1];
              }
            }

            i1 = X->size[1];
            i2 = i + 1;
            emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &j_emlrtBCI, &st);
            c_loop_ub = X->size[0];
            i1 = b_b->size[0];
            b_b->size[0] = c_loop_ub;
            emxEnsureCapacity(&st, (emxArray__common *)b_b, i1, (int32_T)sizeof
                              (real_T), &o_emlrtRTEI);
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              b_b->data[i1] = alpha1 * X->data[i1 + X->size[0] * i];
            }

            i1 = A->size[0];
            i2 = b_b->size[0];
            emlrtSizeEqCheck1DFastR2012b(i1, i2, &f_emlrtECI, &st);
            c_loop_ub = A->size[0];
            i1 = uij->size[0];
            uij->size[0] = c_loop_ub;
            emxEnsureCapacity(&st, (emxArray__common *)uij, i1, (int32_T)sizeof
                              (real_T), &o_emlrtRTEI);
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              uij->data[i1] = A->data[i1 + A->size[0] * j] - b_b->data[i1];
            }

            b_st.site = &r_emlrtRSI;
            normu = norm(uij);
            b_st.site = &s_emlrtRSI;
            c_loop_ub = X->size[0];
            i1 = X->size[1];
            i2 = 1 + i;
            i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &i_emlrtBCI, &b_st);
            i2 = a->size[0] * a->size[1];
            a->size[0] = 1;
            a->size[1] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)a, i2, (int32_T)sizeof
                              (real_T), &o_emlrtRTEI);
            for (i2 = 0; i2 < c_loop_ub; i2++) {
              a->data[a->size[0] * i2] = X->data[i2 + X->size[0] * (i1 - 1)];
            }

            c_loop_ub = A->size[0];
            i1 = A->size[1];
            i2 = 1 + j;
            i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &h_emlrtBCI, &b_st);
            i2 = b_b->size[0];
            b_b->size[0] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)b_b, i2, (int32_T)
                              sizeof(real_T), &o_emlrtRTEI);
            for (i2 = 0; i2 < c_loop_ub; i2++) {
              b_b->data[i2] = A->data[i2 + A->size[0] * (i1 - 1)];
            }

            c_st.site = &gb_emlrtRSI;
            i1 = A->size[0];
            if (!(a->size[1] == i1)) {
              guard2 = false;
              if (a->size[1] == 1) {
                guard2 = true;
              } else {
                i1 = A->size[0];
                if (i1 == 1) {
                  guard2 = true;
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  e_y = NULL;
                  m1 = emlrtCreateCharArray(2, iv6);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv4[b_i] = cv5[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m1, cv4);
                  emlrtAssign(&e_y, m1);
                  d_st.site = &id_emlrtRSI;
                  e_st.site = &td_emlrtRSI;
                  error(&d_st, b_message(&e_st, e_y, &h_emlrtMCI), &i_emlrtMCI);
                }
              }

              if (guard2) {
                emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                f_y = NULL;
                m1 = emlrtCreateCharArray(2, iv7);
                for (b_i = 0; b_i < 45; b_i++) {
                  cv6[b_i] = cv7[b_i];
                }

                emlrtInitCharArrayR2013a(&c_st, 45, m1, cv6);
                emlrtAssign(&f_y, m1);
                d_st.site = &hd_emlrtRSI;
                e_st.site = &sd_emlrtRSI;
                error(&d_st, b_message(&e_st, f_y, &f_emlrtMCI), &g_emlrtMCI);
              }
            }

            guard1 = false;
            if (a->size[1] == 1) {
              guard1 = true;
            } else {
              i1 = A->size[0];
              if (i1 == 1) {
                guard1 = true;
              } else {
                c_st.site = &xb_emlrtRSI;
                d_st.site = &yb_emlrtRSI;
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
              for (i1 = 0; i1 < a->size[1]; i1++) {
                inner += a->data[a->size[0] * i1] * b_b->data[i1];
              }
            }

            if ((normu != 0.0) && (inner * inner < 0.99999)) {
              b_st.site = &t_emlrtRSI;
              eye(&b_st, d, b_A);
              i1 = b_A->size[0] * b_A->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)b_A, i1, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              c_A = b_A->size[0];
              d_A = b_A->size[1];
              c_loop_ub = c_A * d_A;
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                b_A->data[i1] /= normu;
              }

              alpha1 = muDoubleScalarPower(normu, 3.0);
              i1 = r1->size[0] * r1->size[1];
              r1->size[0] = uij->size[0];
              r1->size[1] = uij->size[0];
              emxEnsureCapacity(&st, (emxArray__common *)r1, i1, (int32_T)sizeof
                                (real_T), &o_emlrtRTEI);
              c_loop_ub = uij->size[0];
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                d_loop_ub = uij->size[0];
                for (i2 = 0; i2 < d_loop_ub; i2++) {
                  beta1 = uij->data[i1] * uij->data[i2];
                  r1->data[i1 + r1->size[0] * i2] = beta1 / alpha1;
                }
              }

              for (i1 = 0; i1 < 2; i1++) {
                e_A[i1] = b_A->size[i1];
              }

              for (i1 = 0; i1 < 2; i1++) {
                b_Lg[i1] = r1->size[i1];
              }

              emlrtSizeEqCheck2DFastR2012b(e_A, b_Lg, &e_emlrtECI, &st);
              b_st.site = &t_emlrtRSI;
              eye(&b_st, d, b);
              i1 = X->size[1];
              i2 = i + 1;
              emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &g_emlrtBCI, &st);
              i1 = X->size[1];
              i2 = i + 1;
              emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &f_emlrtBCI, &st);
              c_loop_ub = X->size[0];
              d_loop_ub = X->size[0];
              i1 = d_X->size[0];
              d_X->size[0] = c_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)d_X, i1, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                d_X->data[i1] = X->data[i1 + X->size[0] * i];
              }

              i1 = c_X->size[0] * c_X->size[1];
              c_X->size[0] = 1;
              c_X->size[1] = d_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)c_X, i1, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              for (i1 = 0; i1 < d_loop_ub; i1++) {
                c_X->data[c_X->size[0] * i1] = X->data[i1 + X->size[0] * i];
              }

              i1 = Lg->size[0] * Lg->size[1];
              Lg->size[0] = d_X->size[0];
              Lg->size[1] = c_X->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)Lg, i1, (int32_T)sizeof
                                (real_T), &o_emlrtRTEI);
              c_loop_ub = d_X->size[0];
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                d_loop_ub = c_X->size[1];
                for (i2 = 0; i2 < d_loop_ub; i2++) {
                  Lg->data[i1 + Lg->size[0] * i2] = d_X->data[i1] * c_X->
                    data[c_X->size[0] * i2];
                }
              }

              for (i1 = 0; i1 < 2; i1++) {
                e_A[i1] = b->size[i1];
              }

              for (i1 = 0; i1 < 2; i1++) {
                b_Lg[i1] = Lg->size[i1];
              }

              emlrtSizeEqCheck2DFastR2012b(e_A, b_Lg, &d_emlrtECI, &st);
              b_st.site = &t_emlrtRSI;
              i1 = b_A->size[0] * b_A->size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)b_A, i1, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              c_A = b_A->size[0];
              d_A = b_A->size[1];
              c_loop_ub = c_A * d_A;
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                b_A->data[i1] -= r1->data[i1];
              }

              i1 = b->size[0] * b->size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)b, i1, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              c_b = b->size[0];
              d_b = b->size[1];
              c_loop_ub = c_b * d_b;
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                b->data[i1] -= Lg->data[i1];
              }

              c_st.site = &gb_emlrtRSI;
              if (!(b_A->size[1] == b->size[0])) {
                if (((b_A->size[0] == 1) && (b_A->size[1] == 1)) || ((b->size[0]
                      == 1) && (b->size[1] == 1))) {
                  emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                  g_y = NULL;
                  m1 = emlrtCreateCharArray(2, iv8);
                  for (b_i = 0; b_i < 45; b_i++) {
                    cv6[b_i] = cv7[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 45, m1, cv6);
                  emlrtAssign(&g_y, m1);
                  d_st.site = &hd_emlrtRSI;
                  e_st.site = &sd_emlrtRSI;
                  error(&d_st, b_message(&e_st, g_y, &f_emlrtMCI), &g_emlrtMCI);
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  h_y = NULL;
                  m1 = emlrtCreateCharArray(2, iv9);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv4[b_i] = cv5[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m1, cv4);
                  emlrtAssign(&h_y, m1);
                  d_st.site = &id_emlrtRSI;
                  e_st.site = &td_emlrtRSI;
                  error(&d_st, b_message(&e_st, h_y, &h_emlrtMCI), &i_emlrtMCI);
                }
              }

              if ((b_A->size[1] == 1) || (b->size[0] == 1)) {
                i1 = dA->size[0] * dA->size[1];
                dA->size[0] = b_A->size[0];
                dA->size[1] = b->size[1];
                emxEnsureCapacity(&b_st, (emxArray__common *)dA, i1, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                c_loop_ub = b_A->size[0];
                for (i1 = 0; i1 < c_loop_ub; i1++) {
                  d_loop_ub = b->size[1];
                  for (i2 = 0; i2 < d_loop_ub; i2++) {
                    dA->data[i1 + dA->size[0] * i2] = 0.0;
                    e_loop_ub = b_A->size[1];
                    for (i3 = 0; i3 < e_loop_ub; i3++) {
                      dA->data[i1 + dA->size[0] * i2] += b_A->data[i1 +
                        b_A->size[0] * i3] * b->data[i3 + b->size[0] * i2];
                    }
                  }
                }
              } else {
                b_unnamed_idx_0 = (uint32_T)b_A->size[0];
                b_unnamed_idx_1 = (uint32_T)b->size[1];
                i1 = r1->size[0] * r1->size[1];
                r1->size[0] = (int32_T)b_unnamed_idx_0;
                emxEnsureCapacity(&b_st, (emxArray__common *)r1, i1, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                i1 = r1->size[0] * r1->size[1];
                r1->size[1] = (int32_T)b_unnamed_idx_1;
                emxEnsureCapacity(&b_st, (emxArray__common *)r1, i1, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                c_loop_ub = (int32_T)b_unnamed_idx_0 * (int32_T)b_unnamed_idx_1;
                for (i1 = 0; i1 < c_loop_ub; i1++) {
                  r1->data[i1] = 0.0;
                }

                c_st.site = &fb_emlrtRSI;
                d_st.site = &hb_emlrtRSI;
                i1 = dA->size[0] * dA->size[1];
                dA->size[0] = (int32_T)b_unnamed_idx_0;
                emxEnsureCapacity(&d_st, (emxArray__common *)dA, i1, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                i1 = dA->size[0] * dA->size[1];
                dA->size[1] = (int32_T)b_unnamed_idx_1;
                emxEnsureCapacity(&d_st, (emxArray__common *)dA, i1, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                c_loop_ub = (int32_T)b_unnamed_idx_0 * (int32_T)b_unnamed_idx_1;
                for (i1 = 0; i1 < c_loop_ub; i1++) {
                  dA->data[i1] = 0.0;
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

              b_st.site = &u_emlrtRSI;
              if ((inner < -1.0) || (1.0 < inner)) {
                c_st.site = &wb_emlrtRSI;
                b_eml_error(&c_st);
              }

              alpha1 = muDoubleScalarAcos(inner);
              i1 = dA->size[0] * dA->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)dA, i1, (int32_T)sizeof
                                (real_T), &o_emlrtRTEI);
              b_dA = dA->size[0];
              c_dA = dA->size[1];
              c_loop_ub = b_dA * c_dA;
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                dA->data[i1] *= alpha1;
              }

              i1 = X->size[1];
              i2 = i + 1;
              emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &e_emlrtBCI, &st);
              b_st.site = &u_emlrtRSI;
              alpha1 = muDoubleScalarSqrt(1.0 - inner * inner);
              c_loop_ub = X->size[0];
              i1 = b_X->size[0] * b_X->size[1];
              b_X->size[0] = 1;
              b_X->size[1] = c_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)b_X, i1, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                b_X->data[b_X->size[0] * i1] = X->data[i1 + X->size[0] * i];
              }

              i1 = r1->size[0] * r1->size[1];
              r1->size[0] = uij->size[0];
              r1->size[1] = b_X->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)r1, i1, (int32_T)sizeof
                                (real_T), &o_emlrtRTEI);
              c_loop_ub = uij->size[0];
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                d_loop_ub = b_X->size[1];
                for (i2 = 0; i2 < d_loop_ub; i2++) {
                  beta1 = uij->data[i1] * b_X->data[b_X->size[0] * i2];
                  r1->data[i1 + r1->size[0] * i2] = beta1 / normu / alpha1;
                }
              }

              for (i1 = 0; i1 < 2; i1++) {
                e_A[i1] = dA->size[i1];
              }

              for (i1 = 0; i1 < 2; i1++) {
                b_Lg[i1] = r1->size[i1];
              }

              emlrtSizeEqCheck2DFastR2012b(e_A, b_Lg, &c_emlrtECI, &st);
              i1 = dA->size[0] * dA->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)dA, i1, (int32_T)sizeof
                                (real_T), &o_emlrtRTEI);
              b_dA = dA->size[0];
              c_dA = dA->size[1];
              c_loop_ub = b_dA * c_dA;
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                dA->data[i1] -= r1->data[i1];
              }

              i1 = gradA->size[1];
              i2 = j + 1;
              emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &d_emlrtBCI, &st);
              i1 = Wt->size[0];
              i2 = i + 1;
              emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &c_emlrtBCI, &st);
              i1 = Wt->size[1];
              i2 = j + 1;
              emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &b_emlrtBCI, &st);
              alpha1 = Wt->data[i + Wt->size[0] * j];
              i1 = Lg->size[0] * Lg->size[1];
              Lg->size[0] = dA->size[1];
              Lg->size[1] = dA->size[0];
              emxEnsureCapacity(&st, (emxArray__common *)Lg, i1, (int32_T)sizeof
                                (real_T), &o_emlrtRTEI);
              c_loop_ub = dA->size[0];
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                d_loop_ub = dA->size[1];
                for (i2 = 0; i2 < d_loop_ub; i2++) {
                  Lg->data[i2 + Lg->size[0] * i1] = alpha1 * dA->data[i1 +
                    dA->size[0] * i2];
                }
              }

              b_st.site = &v_emlrtRSI;
              c_st.site = &gb_emlrtRSI;
              if (!(Lg->size[1] == M->size[0])) {
                if (((Lg->size[0] == 1) && (Lg->size[1] == 1)) || (M->size[0] ==
                     1)) {
                  emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                  i_y = NULL;
                  m1 = emlrtCreateCharArray(2, iv10);
                  for (b_i = 0; b_i < 45; b_i++) {
                    cv6[b_i] = cv7[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 45, m1, cv6);
                  emlrtAssign(&i_y, m1);
                  d_st.site = &hd_emlrtRSI;
                  e_st.site = &sd_emlrtRSI;
                  error(&d_st, b_message(&e_st, i_y, &f_emlrtMCI), &g_emlrtMCI);
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  j_y = NULL;
                  m1 = emlrtCreateCharArray(2, iv11);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv4[b_i] = cv5[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m1, cv4);
                  emlrtAssign(&j_y, m1);
                  d_st.site = &id_emlrtRSI;
                  e_st.site = &td_emlrtRSI;
                  error(&d_st, b_message(&e_st, j_y, &h_emlrtMCI), &i_emlrtMCI);
                }
              }

              if ((Lg->size[1] == 1) || (M->size[0] == 1)) {
                i1 = b_b->size[0];
                b_b->size[0] = Lg->size[0];
                emxEnsureCapacity(&b_st, (emxArray__common *)b_b, i1, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                c_loop_ub = Lg->size[0];
                for (i1 = 0; i1 < c_loop_ub; i1++) {
                  b_b->data[i1] = 0.0;
                  d_loop_ub = Lg->size[1];
                  for (i2 = 0; i2 < d_loop_ub; i2++) {
                    b_b->data[i1] += Lg->data[i1 + Lg->size[0] * i2] * M->
                      data[i2];
                  }
                }
              } else {
                b_unnamed_idx_0 = (uint32_T)Lg->size[0];
                c_st.site = &fb_emlrtRSI;
                d_st.site = &hb_emlrtRSI;
                i1 = b_b->size[0];
                b_b->size[0] = (int32_T)b_unnamed_idx_0;
                emxEnsureCapacity(&d_st, (emxArray__common *)b_b, i1, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                c_loop_ub = (int32_T)b_unnamed_idx_0;
                for (i1 = 0; i1 < c_loop_ub; i1++) {
                  b_b->data[i1] = 0.0;
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

              i1 = gradA->size[0];
              i2 = b_b->size[0];
              emlrtSizeEqCheck1DFastR2012b(i1, i2, &b_emlrtECI, &st);
              c_loop_ub = gradA->size[0];
              i1 = r0->size[0];
              r0->size[0] = c_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)r0, i1, (int32_T)sizeof
                                (int32_T), &o_emlrtRTEI);
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                r0->data[i1] = i1;
              }

              i1 = gradA->size[1];
              i2 = j + 1;
              emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &emlrtBCI, &st);
              iv12[0] = r0->size[0];
              c_loop_ub = gradA->size[0];
              i1 = c_gradA->size[0];
              c_gradA->size[0] = c_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)c_gradA, i1, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                c_gradA->data[i1] = gradA->data[i1 + gradA->size[0] * j];
              }

              d_gradA[0] = c_gradA->size[0];
              emlrtSubAssignSizeCheckR2012b(iv12, 1, d_gradA, 1, &emlrtECI, &st);
              e_gradA = gradA->size[0];
              i1 = b_gradA->size[0];
              b_gradA->size[0] = e_gradA;
              emxEnsureCapacity(&st, (emxArray__common *)b_gradA, i1, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              for (i1 = 0; i1 < e_gradA; i1++) {
                b_gradA->data[i1] = gradA->data[i1 + gradA->size[0] * j] +
                  b_b->data[i1];
              }

              c_loop_ub = b_gradA->size[0];
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                gradA->data[r0->data[i1] + gradA->size[0] * j] = b_gradA->
                  data[i1];
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
      emxFree_real_T(&r1);
      emxFree_real_T(&b);
      emxFree_real_T(&d_X);
      emxFree_real_T(&c_X);
      emxFree_real_T(&b_X);
      emxFree_int32_T(&r0);
      emxFree_real_T(&c_gradA);
      emxFree_real_T(&b_gradA);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emxFree_real_T(&Wt);
  ub_loop = gradA->size[0] * gradA->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)gradA, ub_loop, (int32_T)sizeof
                    (real_T), &o_emlrtRTEI);
  ub_loop = gradA->size[0];
  loop_ub = gradA->size[1];
  loop_ub *= ub_loop;
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    gradA->data[ub_loop] *= 2.0;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (gradientASR.c) */
