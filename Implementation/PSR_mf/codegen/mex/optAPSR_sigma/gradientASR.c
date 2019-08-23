/*
 * gradientASR.c
 *
 * Code generation for function 'gradientASR'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "gradientASR.h"
#include "norm.h"
#include "eml_error.h"
#include "optAPSR_sigma_emxutil.h"
#include "eye.h"
#include "logmapSRi.h"
#include "optAPSR_sigma_mexutil.h"
#include "optAPSR_sigma_data.h"

/* Variable Definitions */
static emlrtRSInfo m_emlrtRSI = { 21, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtRSInfo n_emlrtRSI = { 22, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtRSInfo o_emlrtRSI = { 24, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtRSInfo p_emlrtRSI = { 25, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtRSInfo q_emlrtRSI = { 26, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtRSInfo r_emlrtRSI = { 28, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtRSInfo s_emlrtRSI = { 29, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtRSInfo t_emlrtRSI = { 30, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtRSInfo wb_emlrtRSI = { 61, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

static emlrtRSInfo xb_emlrtRSI = { 30, "eml_xdotu",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m" };

static emlrtRTEInfo w_emlrtRTEI = { 1, 18, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtRTEInfo x_emlrtRTEI = { 28, 13, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtRTEInfo y_emlrtRTEI = { 24, 9, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtRTEInfo ab_emlrtRTEI = { 22, 9, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtRTEInfo bb_emlrtRTEI = { 21, 9, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 14, 1, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtECInfo d_emlrtECI = { -1, 30, 13, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 30, 21, "gradA", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtECInfo e_emlrtECI = { -1, 30, 26, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 30, 44, "Wt", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 30, 42, "Wt", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 30, 34, "gradA", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtECInfo f_emlrtECI = { 2, 29, 18, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 29, 41, "X", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtECInfo g_emlrtECI = { 2, 28, 53, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 28, 71, "X", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 28, 64, "X", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtECInfo h_emlrtECI = { 2, 28, 19, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 26, 29, "A", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 26, 21, "X", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtECInfo i_emlrtECI = { -1, 24, 15, "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m" };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 24, 43, "X", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 24, 35, "A", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 24, 27, "X", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 24, 19, "A", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 22, 20, "W", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 21, 28, "X", "gradientASR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientASR.m",
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
  int32_T i9;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  int32_T j;
  emxArray_real_T *b_gradA;
  emxArray_real_T *c_gradA;
  emxArray_int32_T *r8;
  emxArray_real_T *b_X;
  emxArray_real_T *c_X;
  emxArray_real_T *d_X;
  emxArray_real_T *b;
  emxArray_real_T *r9;
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
  int32_T i10;
  int32_T i11;
  boolean_T guard6 = false;
  const mxArray *y;
  static const int32_T iv13[2] = { 1, 21 };

  const mxArray *m2;
  char_T cv16[21];
  int32_T b_i;
  static const char_T cv17[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 45 };

  char_T cv18[45];
  static const char_T cv19[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  static const int32_T iv15[2] = { 1, 21 };

  const mxArray *d_y;
  static const int32_T iv16[2] = { 1, 45 };

  boolean_T guard3 = false;
  boolean_T guard2 = false;
  const mxArray *e_y;
  static const int32_T iv17[2] = { 1, 21 };

  const mxArray *f_y;
  static const int32_T iv18[2] = { 1, 45 };

  boolean_T guard1 = false;
  int32_T c_A;
  int32_T d_A;
  int32_T e_A[2];
  int32_T b_Lg[2];
  int32_T c_b;
  int32_T d_b;
  const mxArray *g_y;
  static const int32_T iv19[2] = { 1, 45 };

  const mxArray *h_y;
  static const int32_T iv20[2] = { 1, 21 };

  int32_T e_loop_ub;
  int32_T i12;
  uint32_T b_unnamed_idx_1;
  int32_T b_dA;
  int32_T c_dA;
  const mxArray *i_y;
  static const int32_T iv21[2] = { 1, 45 };

  const mxArray *j_y;
  static const int32_T iv22[2] = { 1, 21 };

  int32_T iv23[1];
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
  emxInit_real_T(sp, &Wt, 2, &cb_emlrtRTEI, true);

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
                    &w_emlrtRTEI);
  loop_ub = W->size[0];
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    b_loop_ub = W->size[1];
    for (i9 = 0; i9 < b_loop_ub; i9++) {
      Wt->data[i9 + Wt->size[0] * ub_loop] = W->data[ub_loop + W->size[0] * i9];
    }
  }

  unnamed_idx_0 = (uint32_T)X->size[0];
  unnamed_idx_1 = (uint32_T)W->size[0];
  ub_loop = gradA->size[0] * gradA->size[1];
  gradA->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)gradA, ub_loop, (int32_T)sizeof
                    (real_T), &w_emlrtRTEI);
  ub_loop = gradA->size[0] * gradA->size[1];
  gradA->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)gradA, ub_loop, (int32_T)sizeof
                    (real_T), &w_emlrtRTEI);
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
 private(b_gradA,c_gradA,r8,b_X,c_X,d_X,b,r9,b_A,a,b_b,e_X,Lg,M,uij,dA,inner,normu,i,exitg1,c_loop_ub,i10,i11,guard6,m2,b_i,guard5,d_loop_ub,guard4,guard3,guard2,guard1,c_A,d_A,beta1,c_b,d_b,b_unnamed_idx_0,e_loop_ub,i12,b_dA,c_dA,e_gradA,TRANSB,TRANSA,m_t,n_t,k_t,lda_t,ldb_t,ldc_t,alpha1_t,Aia0_t,Bib0_t,beta1_t,Cic0_t,b_unnamed_idx_1,emlrtJBEnviron) \
 firstprivate(st,b_st,c_st,d_st,e_st,b_y,cv18,y,cv16,d_y,c_y,alpha1,f_y,e_y,e_A,b_Lg,g_y,h_y,i_y,j_y,iv23,d_gradA,emlrtHadParallelError)

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
      c_emxInit_real_T(&st, &b_gradA, 1, &w_emlrtRTEI, true);
      c_emxInit_real_T(&st, &c_gradA, 1, &w_emlrtRTEI, true);
      emxInit_int32_T(&st, &r8, 1, &w_emlrtRTEI, true);
      emxInit_real_T(&st, &b_X, 2, &w_emlrtRTEI, true);
      emxInit_real_T(&st, &c_X, 2, &w_emlrtRTEI, true);
      c_emxInit_real_T(&st, &d_X, 1, &w_emlrtRTEI, true);
      emxInit_real_T(&st, &b, 2, &w_emlrtRTEI, true);
      emxInit_real_T(&st, &r9, 2, &w_emlrtRTEI, true);
      emxInit_real_T(&st, &b_A, 2, &w_emlrtRTEI, true);
      emxInit_real_T(&st, &a, 2, &w_emlrtRTEI, true);
      c_emxInit_real_T(&st, &b_b, 1, &w_emlrtRTEI, true);
      c_emxInit_real_T(&st, &e_X, 1, &w_emlrtRTEI, true);
      emxInit_real_T(&st, &Lg, 2, &bb_emlrtRTEI, true);
      c_emxInit_real_T(&st, &M, 1, &ab_emlrtRTEI, true);
      c_emxInit_real_T(&st, &uij, 1, &y_emlrtRTEI, true);
      emxInit_real_T(&st, &dA, 2, &x_emlrtRTEI, true);
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
            i10 = X->size[1];
            i11 = 1 + i;
            i10 = emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &y_emlrtBCI,
              &st);
            i11 = e_X->size[0];
            e_X->size[0] = c_loop_ub;
            emxEnsureCapacity(&st, (emxArray__common *)e_X, i11, (int32_T)sizeof
                              (real_T), &w_emlrtRTEI);
            for (i11 = 0; i11 < c_loop_ub; i11++) {
              e_X->data[i11] = X->data[i11 + X->size[0] * (i10 - 1)];
            }

            b_st.site = &m_emlrtRSI;
            logmapSRi(&b_st, e_X, A, Lg);
            b_st.site = &n_emlrtRSI;
            c_loop_ub = W->size[0];
            i10 = W->size[1];
            i11 = 1 + i;
            i10 = emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &x_emlrtBCI,
              &b_st);
            i11 = b_b->size[0];
            b_b->size[0] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)b_b, i11, (int32_T)
                              sizeof(real_T), &w_emlrtRTEI);
            for (i11 = 0; i11 < c_loop_ub; i11++) {
              b_b->data[i11] = W->data[i11 + W->size[0] * (i10 - 1)];
            }

            c_st.site = &eb_emlrtRSI;
            i10 = W->size[0];
            if (!(Lg->size[1] == i10)) {
              guard6 = false;
              if ((Lg->size[0] == 1) && (Lg->size[1] == 1)) {
                guard6 = true;
              } else {
                i10 = W->size[0];
                if (i10 == 1) {
                  guard6 = true;
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  y = NULL;
                  m2 = emlrtCreateCharArray(2, iv13);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv16[b_i] = cv17[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m2, cv16);
                  emlrtAssign(&y, m2);
                  d_st.site = &kd_emlrtRSI;
                  e_st.site = &vd_emlrtRSI;
                  error(&d_st, b_message(&e_st, y, &i_emlrtMCI), &j_emlrtMCI);
                }
              }

              if (guard6) {
                emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                b_y = NULL;
                m2 = emlrtCreateCharArray(2, iv14);
                for (b_i = 0; b_i < 45; b_i++) {
                  cv18[b_i] = cv19[b_i];
                }

                emlrtInitCharArrayR2013a(&c_st, 45, m2, cv18);
                emlrtAssign(&b_y, m2);
                d_st.site = &jd_emlrtRSI;
                e_st.site = &ud_emlrtRSI;
                error(&d_st, b_message(&e_st, b_y, &g_emlrtMCI), &h_emlrtMCI);
              }
            }

            guard5 = false;
            if (Lg->size[1] == 1) {
              guard5 = true;
            } else {
              i10 = W->size[0];
              if (i10 == 1) {
                guard5 = true;
              } else {
                b_unnamed_idx_0 = (uint32_T)Lg->size[0];
                c_st.site = &db_emlrtRSI;
                d_st.site = &fb_emlrtRSI;
                i10 = M->size[0];
                M->size[0] = (int32_T)b_unnamed_idx_0;
                emxEnsureCapacity(&d_st, (emxArray__common *)M, i10, (int32_T)
                                  sizeof(real_T), &w_emlrtRTEI);
                c_loop_ub = (int32_T)b_unnamed_idx_0;
                for (i10 = 0; i10 < c_loop_ub; i10++) {
                  M->data[i10] = 0.0;
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
              i10 = M->size[0];
              M->size[0] = Lg->size[0];
              emxEnsureCapacity(&b_st, (emxArray__common *)M, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              c_loop_ub = Lg->size[0];
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                M->data[i10] = 0.0;
                d_loop_ub = Lg->size[1];
                for (i11 = 0; i11 < d_loop_ub; i11++) {
                  M->data[i10] += Lg->data[i10 + Lg->size[0] * i11] * b_b->
                    data[i11];
                }
              }
            }

            i10 = A->size[1];
            i11 = j + 1;
            emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &w_emlrtBCI, &st);
            b_st.site = &o_emlrtRSI;
            c_loop_ub = X->size[0];
            i10 = X->size[1];
            i11 = 1 + i;
            i10 = emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &v_emlrtBCI,
              &b_st);
            i11 = a->size[0] * a->size[1];
            a->size[0] = 1;
            a->size[1] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)a, i11, (int32_T)sizeof
                              (real_T), &w_emlrtRTEI);
            for (i11 = 0; i11 < c_loop_ub; i11++) {
              a->data[a->size[0] * i11] = X->data[i11 + X->size[0] * (i10 - 1)];
            }

            c_loop_ub = A->size[0];
            i10 = A->size[1];
            i11 = 1 + j;
            i10 = emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &u_emlrtBCI,
              &b_st);
            i11 = b_b->size[0];
            b_b->size[0] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)b_b, i11, (int32_T)
                              sizeof(real_T), &w_emlrtRTEI);
            for (i11 = 0; i11 < c_loop_ub; i11++) {
              b_b->data[i11] = A->data[i11 + A->size[0] * (i10 - 1)];
            }

            c_st.site = &eb_emlrtRSI;
            i10 = A->size[0];
            if (!(a->size[1] == i10)) {
              guard4 = false;
              if (a->size[1] == 1) {
                guard4 = true;
              } else {
                i10 = A->size[0];
                if (i10 == 1) {
                  guard4 = true;
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  c_y = NULL;
                  m2 = emlrtCreateCharArray(2, iv15);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv16[b_i] = cv17[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m2, cv16);
                  emlrtAssign(&c_y, m2);
                  d_st.site = &kd_emlrtRSI;
                  e_st.site = &vd_emlrtRSI;
                  error(&d_st, b_message(&e_st, c_y, &i_emlrtMCI), &j_emlrtMCI);
                }
              }

              if (guard4) {
                emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                d_y = NULL;
                m2 = emlrtCreateCharArray(2, iv16);
                for (b_i = 0; b_i < 45; b_i++) {
                  cv18[b_i] = cv19[b_i];
                }

                emlrtInitCharArrayR2013a(&c_st, 45, m2, cv18);
                emlrtAssign(&d_y, m2);
                d_st.site = &jd_emlrtRSI;
                e_st.site = &ud_emlrtRSI;
                error(&d_st, b_message(&e_st, d_y, &g_emlrtMCI), &h_emlrtMCI);
              }
            }

            guard3 = false;
            if (a->size[1] == 1) {
              guard3 = true;
            } else {
              i10 = A->size[0];
              if (i10 == 1) {
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
              for (i10 = 0; i10 < a->size[1]; i10++) {
                alpha1 += a->data[a->size[0] * i10] * b_b->data[i10];
              }
            }

            i10 = X->size[1];
            i11 = i + 1;
            emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &t_emlrtBCI, &st);
            c_loop_ub = X->size[0];
            i10 = b_b->size[0];
            b_b->size[0] = c_loop_ub;
            emxEnsureCapacity(&st, (emxArray__common *)b_b, i10, (int32_T)sizeof
                              (real_T), &w_emlrtRTEI);
            for (i10 = 0; i10 < c_loop_ub; i10++) {
              b_b->data[i10] = alpha1 * X->data[i10 + X->size[0] * i];
            }

            i10 = A->size[0];
            i11 = b_b->size[0];
            emlrtSizeEqCheck1DFastR2012b(i10, i11, &i_emlrtECI, &st);
            c_loop_ub = A->size[0];
            i10 = uij->size[0];
            uij->size[0] = c_loop_ub;
            emxEnsureCapacity(&st, (emxArray__common *)uij, i10, (int32_T)sizeof
                              (real_T), &w_emlrtRTEI);
            for (i10 = 0; i10 < c_loop_ub; i10++) {
              uij->data[i10] = A->data[i10 + A->size[0] * j] - b_b->data[i10];
            }

            b_st.site = &p_emlrtRSI;
            normu = norm(uij);
            b_st.site = &q_emlrtRSI;
            c_loop_ub = X->size[0];
            i10 = X->size[1];
            i11 = 1 + i;
            i10 = emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &s_emlrtBCI,
              &b_st);
            i11 = a->size[0] * a->size[1];
            a->size[0] = 1;
            a->size[1] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)a, i11, (int32_T)sizeof
                              (real_T), &w_emlrtRTEI);
            for (i11 = 0; i11 < c_loop_ub; i11++) {
              a->data[a->size[0] * i11] = X->data[i11 + X->size[0] * (i10 - 1)];
            }

            c_loop_ub = A->size[0];
            i10 = A->size[1];
            i11 = 1 + j;
            i10 = emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &r_emlrtBCI,
              &b_st);
            i11 = b_b->size[0];
            b_b->size[0] = c_loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)b_b, i11, (int32_T)
                              sizeof(real_T), &w_emlrtRTEI);
            for (i11 = 0; i11 < c_loop_ub; i11++) {
              b_b->data[i11] = A->data[i11 + A->size[0] * (i10 - 1)];
            }

            c_st.site = &eb_emlrtRSI;
            i10 = A->size[0];
            if (!(a->size[1] == i10)) {
              guard2 = false;
              if (a->size[1] == 1) {
                guard2 = true;
              } else {
                i10 = A->size[0];
                if (i10 == 1) {
                  guard2 = true;
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  e_y = NULL;
                  m2 = emlrtCreateCharArray(2, iv17);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv16[b_i] = cv17[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m2, cv16);
                  emlrtAssign(&e_y, m2);
                  d_st.site = &kd_emlrtRSI;
                  e_st.site = &vd_emlrtRSI;
                  error(&d_st, b_message(&e_st, e_y, &i_emlrtMCI), &j_emlrtMCI);
                }
              }

              if (guard2) {
                emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                f_y = NULL;
                m2 = emlrtCreateCharArray(2, iv18);
                for (b_i = 0; b_i < 45; b_i++) {
                  cv18[b_i] = cv19[b_i];
                }

                emlrtInitCharArrayR2013a(&c_st, 45, m2, cv18);
                emlrtAssign(&f_y, m2);
                d_st.site = &jd_emlrtRSI;
                e_st.site = &ud_emlrtRSI;
                error(&d_st, b_message(&e_st, f_y, &g_emlrtMCI), &h_emlrtMCI);
              }
            }

            guard1 = false;
            if (a->size[1] == 1) {
              guard1 = true;
            } else {
              i10 = A->size[0];
              if (i10 == 1) {
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
              for (i10 = 0; i10 < a->size[1]; i10++) {
                inner += a->data[a->size[0] * i10] * b_b->data[i10];
              }
            }

            if ((normu != 0.0) && (inner * inner < 0.99999)) {
              b_st.site = &r_emlrtRSI;
              eye(&b_st, d, b_A);
              i10 = b_A->size[0] * b_A->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)b_A, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              c_A = b_A->size[0];
              d_A = b_A->size[1];
              c_loop_ub = c_A * d_A;
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                b_A->data[i10] /= normu;
              }

              alpha1 = muDoubleScalarPower(normu, 3.0);
              i10 = r9->size[0] * r9->size[1];
              r9->size[0] = uij->size[0];
              r9->size[1] = uij->size[0];
              emxEnsureCapacity(&st, (emxArray__common *)r9, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              c_loop_ub = uij->size[0];
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                d_loop_ub = uij->size[0];
                for (i11 = 0; i11 < d_loop_ub; i11++) {
                  beta1 = uij->data[i10] * uij->data[i11];
                  r9->data[i10 + r9->size[0] * i11] = beta1 / alpha1;
                }
              }

              for (i10 = 0; i10 < 2; i10++) {
                e_A[i10] = b_A->size[i10];
              }

              for (i10 = 0; i10 < 2; i10++) {
                b_Lg[i10] = r9->size[i10];
              }

              emlrtSizeEqCheck2DFastR2012b(e_A, b_Lg, &h_emlrtECI, &st);
              b_st.site = &r_emlrtRSI;
              eye(&b_st, d, b);
              i10 = X->size[1];
              i11 = i + 1;
              emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &q_emlrtBCI, &st);
              i10 = X->size[1];
              i11 = i + 1;
              emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &p_emlrtBCI, &st);
              c_loop_ub = X->size[0];
              d_loop_ub = X->size[0];
              i10 = d_X->size[0];
              d_X->size[0] = c_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)d_X, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                d_X->data[i10] = X->data[i10 + X->size[0] * i];
              }

              i10 = c_X->size[0] * c_X->size[1];
              c_X->size[0] = 1;
              c_X->size[1] = d_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)c_X, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              for (i10 = 0; i10 < d_loop_ub; i10++) {
                c_X->data[c_X->size[0] * i10] = X->data[i10 + X->size[0] * i];
              }

              i10 = Lg->size[0] * Lg->size[1];
              Lg->size[0] = d_X->size[0];
              Lg->size[1] = c_X->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)Lg, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              c_loop_ub = d_X->size[0];
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                d_loop_ub = c_X->size[1];
                for (i11 = 0; i11 < d_loop_ub; i11++) {
                  Lg->data[i10 + Lg->size[0] * i11] = d_X->data[i10] * c_X->
                    data[c_X->size[0] * i11];
                }
              }

              for (i10 = 0; i10 < 2; i10++) {
                e_A[i10] = b->size[i10];
              }

              for (i10 = 0; i10 < 2; i10++) {
                b_Lg[i10] = Lg->size[i10];
              }

              emlrtSizeEqCheck2DFastR2012b(e_A, b_Lg, &g_emlrtECI, &st);
              b_st.site = &r_emlrtRSI;
              i10 = b_A->size[0] * b_A->size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)b_A, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              c_A = b_A->size[0];
              d_A = b_A->size[1];
              c_loop_ub = c_A * d_A;
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                b_A->data[i10] -= r9->data[i10];
              }

              i10 = b->size[0] * b->size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)b, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              c_b = b->size[0];
              d_b = b->size[1];
              c_loop_ub = c_b * d_b;
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                b->data[i10] -= Lg->data[i10];
              }

              c_st.site = &eb_emlrtRSI;
              if (!(b_A->size[1] == b->size[0])) {
                if (((b_A->size[0] == 1) && (b_A->size[1] == 1)) || ((b->size[0]
                      == 1) && (b->size[1] == 1))) {
                  emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                  g_y = NULL;
                  m2 = emlrtCreateCharArray(2, iv19);
                  for (b_i = 0; b_i < 45; b_i++) {
                    cv18[b_i] = cv19[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 45, m2, cv18);
                  emlrtAssign(&g_y, m2);
                  d_st.site = &jd_emlrtRSI;
                  e_st.site = &ud_emlrtRSI;
                  error(&d_st, b_message(&e_st, g_y, &g_emlrtMCI), &h_emlrtMCI);
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  h_y = NULL;
                  m2 = emlrtCreateCharArray(2, iv20);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv16[b_i] = cv17[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m2, cv16);
                  emlrtAssign(&h_y, m2);
                  d_st.site = &kd_emlrtRSI;
                  e_st.site = &vd_emlrtRSI;
                  error(&d_st, b_message(&e_st, h_y, &i_emlrtMCI), &j_emlrtMCI);
                }
              }

              if ((b_A->size[1] == 1) || (b->size[0] == 1)) {
                i10 = dA->size[0] * dA->size[1];
                dA->size[0] = b_A->size[0];
                dA->size[1] = b->size[1];
                emxEnsureCapacity(&b_st, (emxArray__common *)dA, i10, (int32_T)
                                  sizeof(real_T), &w_emlrtRTEI);
                c_loop_ub = b_A->size[0];
                for (i10 = 0; i10 < c_loop_ub; i10++) {
                  d_loop_ub = b->size[1];
                  for (i11 = 0; i11 < d_loop_ub; i11++) {
                    dA->data[i10 + dA->size[0] * i11] = 0.0;
                    e_loop_ub = b_A->size[1];
                    for (i12 = 0; i12 < e_loop_ub; i12++) {
                      dA->data[i10 + dA->size[0] * i11] += b_A->data[i10 +
                        b_A->size[0] * i12] * b->data[i12 + b->size[0] * i11];
                    }
                  }
                }
              } else {
                b_unnamed_idx_0 = (uint32_T)b_A->size[0];
                b_unnamed_idx_1 = (uint32_T)b->size[1];
                i10 = r9->size[0] * r9->size[1];
                r9->size[0] = (int32_T)b_unnamed_idx_0;
                emxEnsureCapacity(&b_st, (emxArray__common *)r9, i10, (int32_T)
                                  sizeof(real_T), &w_emlrtRTEI);
                i10 = r9->size[0] * r9->size[1];
                r9->size[1] = (int32_T)b_unnamed_idx_1;
                emxEnsureCapacity(&b_st, (emxArray__common *)r9, i10, (int32_T)
                                  sizeof(real_T), &w_emlrtRTEI);
                c_loop_ub = (int32_T)b_unnamed_idx_0 * (int32_T)b_unnamed_idx_1;
                for (i10 = 0; i10 < c_loop_ub; i10++) {
                  r9->data[i10] = 0.0;
                }

                c_st.site = &db_emlrtRSI;
                d_st.site = &fb_emlrtRSI;
                i10 = dA->size[0] * dA->size[1];
                dA->size[0] = (int32_T)b_unnamed_idx_0;
                emxEnsureCapacity(&d_st, (emxArray__common *)dA, i10, (int32_T)
                                  sizeof(real_T), &w_emlrtRTEI);
                i10 = dA->size[0] * dA->size[1];
                dA->size[1] = (int32_T)b_unnamed_idx_1;
                emxEnsureCapacity(&d_st, (emxArray__common *)dA, i10, (int32_T)
                                  sizeof(real_T), &w_emlrtRTEI);
                c_loop_ub = (int32_T)b_unnamed_idx_0 * (int32_T)b_unnamed_idx_1;
                for (i10 = 0; i10 < c_loop_ub; i10++) {
                  dA->data[i10] = 0.0;
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

              b_st.site = &s_emlrtRSI;
              if ((inner < -1.0) || (1.0 < inner)) {
                c_st.site = &vb_emlrtRSI;
                b_eml_error(&c_st);
              }

              alpha1 = muDoubleScalarAcos(inner);
              i10 = dA->size[0] * dA->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)dA, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              b_dA = dA->size[0];
              c_dA = dA->size[1];
              c_loop_ub = b_dA * c_dA;
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                dA->data[i10] *= alpha1;
              }

              i10 = X->size[1];
              i11 = i + 1;
              emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &o_emlrtBCI, &st);
              b_st.site = &s_emlrtRSI;
              alpha1 = muDoubleScalarSqrt(1.0 - inner * inner);
              c_loop_ub = X->size[0];
              i10 = b_X->size[0] * b_X->size[1];
              b_X->size[0] = 1;
              b_X->size[1] = c_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)b_X, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                b_X->data[b_X->size[0] * i10] = X->data[i10 + X->size[0] * i];
              }

              i10 = r9->size[0] * r9->size[1];
              r9->size[0] = uij->size[0];
              r9->size[1] = b_X->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)r9, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              c_loop_ub = uij->size[0];
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                d_loop_ub = b_X->size[1];
                for (i11 = 0; i11 < d_loop_ub; i11++) {
                  beta1 = uij->data[i10] * b_X->data[b_X->size[0] * i11];
                  r9->data[i10 + r9->size[0] * i11] = beta1 / normu / alpha1;
                }
              }

              for (i10 = 0; i10 < 2; i10++) {
                e_A[i10] = dA->size[i10];
              }

              for (i10 = 0; i10 < 2; i10++) {
                b_Lg[i10] = r9->size[i10];
              }

              emlrtSizeEqCheck2DFastR2012b(e_A, b_Lg, &f_emlrtECI, &st);
              i10 = dA->size[0] * dA->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)dA, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              b_dA = dA->size[0];
              c_dA = dA->size[1];
              c_loop_ub = b_dA * c_dA;
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                dA->data[i10] -= r9->data[i10];
              }

              i10 = gradA->size[1];
              i11 = j + 1;
              emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &n_emlrtBCI, &st);
              i10 = Wt->size[0];
              i11 = i + 1;
              emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &m_emlrtBCI, &st);
              i10 = Wt->size[1];
              i11 = j + 1;
              emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &l_emlrtBCI, &st);
              alpha1 = Wt->data[i + Wt->size[0] * j];
              i10 = Lg->size[0] * Lg->size[1];
              Lg->size[0] = dA->size[1];
              Lg->size[1] = dA->size[0];
              emxEnsureCapacity(&st, (emxArray__common *)Lg, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              c_loop_ub = dA->size[0];
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                d_loop_ub = dA->size[1];
                for (i11 = 0; i11 < d_loop_ub; i11++) {
                  Lg->data[i11 + Lg->size[0] * i10] = alpha1 * dA->data[i10 +
                    dA->size[0] * i11];
                }
              }

              b_st.site = &t_emlrtRSI;
              c_st.site = &eb_emlrtRSI;
              if (!(Lg->size[1] == M->size[0])) {
                if (((Lg->size[0] == 1) && (Lg->size[1] == 1)) || (M->size[0] ==
                     1)) {
                  emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
                  i_y = NULL;
                  m2 = emlrtCreateCharArray(2, iv21);
                  for (b_i = 0; b_i < 45; b_i++) {
                    cv18[b_i] = cv19[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 45, m2, cv18);
                  emlrtAssign(&i_y, m2);
                  d_st.site = &jd_emlrtRSI;
                  e_st.site = &ud_emlrtRSI;
                  error(&d_st, b_message(&e_st, i_y, &g_emlrtMCI), &h_emlrtMCI);
                } else {
                  emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
                  j_y = NULL;
                  m2 = emlrtCreateCharArray(2, iv22);
                  for (b_i = 0; b_i < 21; b_i++) {
                    cv16[b_i] = cv17[b_i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m2, cv16);
                  emlrtAssign(&j_y, m2);
                  d_st.site = &kd_emlrtRSI;
                  e_st.site = &vd_emlrtRSI;
                  error(&d_st, b_message(&e_st, j_y, &i_emlrtMCI), &j_emlrtMCI);
                }
              }

              if ((Lg->size[1] == 1) || (M->size[0] == 1)) {
                i10 = b_b->size[0];
                b_b->size[0] = Lg->size[0];
                emxEnsureCapacity(&b_st, (emxArray__common *)b_b, i10, (int32_T)
                                  sizeof(real_T), &w_emlrtRTEI);
                c_loop_ub = Lg->size[0];
                for (i10 = 0; i10 < c_loop_ub; i10++) {
                  b_b->data[i10] = 0.0;
                  d_loop_ub = Lg->size[1];
                  for (i11 = 0; i11 < d_loop_ub; i11++) {
                    b_b->data[i10] += Lg->data[i10 + Lg->size[0] * i11] *
                      M->data[i11];
                  }
                }
              } else {
                b_unnamed_idx_0 = (uint32_T)Lg->size[0];
                c_st.site = &db_emlrtRSI;
                d_st.site = &fb_emlrtRSI;
                i10 = b_b->size[0];
                b_b->size[0] = (int32_T)b_unnamed_idx_0;
                emxEnsureCapacity(&d_st, (emxArray__common *)b_b, i10, (int32_T)
                                  sizeof(real_T), &w_emlrtRTEI);
                c_loop_ub = (int32_T)b_unnamed_idx_0;
                for (i10 = 0; i10 < c_loop_ub; i10++) {
                  b_b->data[i10] = 0.0;
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

              i10 = gradA->size[0];
              i11 = b_b->size[0];
              emlrtSizeEqCheck1DFastR2012b(i10, i11, &e_emlrtECI, &st);
              c_loop_ub = gradA->size[0];
              i10 = r8->size[0];
              r8->size[0] = c_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)r8, i10, (int32_T)
                                sizeof(int32_T), &w_emlrtRTEI);
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                r8->data[i10] = i10;
              }

              i10 = gradA->size[1];
              i11 = j + 1;
              emlrtDynamicBoundsCheckFastR2012b(i11, 1, i10, &k_emlrtBCI, &st);
              iv23[0] = r8->size[0];
              c_loop_ub = gradA->size[0];
              i10 = c_gradA->size[0];
              c_gradA->size[0] = c_loop_ub;
              emxEnsureCapacity(&st, (emxArray__common *)c_gradA, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                c_gradA->data[i10] = gradA->data[i10 + gradA->size[0] * j];
              }

              d_gradA[0] = c_gradA->size[0];
              emlrtSubAssignSizeCheckR2012b(iv23, 1, d_gradA, 1, &d_emlrtECI,
                &st);
              e_gradA = gradA->size[0];
              i10 = b_gradA->size[0];
              b_gradA->size[0] = e_gradA;
              emxEnsureCapacity(&st, (emxArray__common *)b_gradA, i10, (int32_T)
                                sizeof(real_T), &w_emlrtRTEI);
              for (i10 = 0; i10 < e_gradA; i10++) {
                b_gradA->data[i10] = gradA->data[i10 + gradA->size[0] * j] +
                  b_b->data[i10];
              }

              c_loop_ub = b_gradA->size[0];
              for (i10 = 0; i10 < c_loop_ub; i10++) {
                gradA->data[r8->data[i10] + gradA->size[0] * j] = b_gradA->
                  data[i10];
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
      emxFree_real_T(&r9);
      emxFree_real_T(&b);
      emxFree_real_T(&d_X);
      emxFree_real_T(&c_X);
      emxFree_real_T(&b_X);
      emxFree_int32_T(&r8);
      emxFree_real_T(&c_gradA);
      emxFree_real_T(&b_gradA);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emxFree_real_T(&Wt);
  ub_loop = gradA->size[0] * gradA->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)gradA, ub_loop, (int32_T)sizeof
                    (real_T), &w_emlrtRTEI);
  ub_loop = gradA->size[0];
  loop_ub = gradA->size[1];
  loop_ub *= ub_loop;
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    gradA->data[ub_loop] *= 2.0;
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (gradientASR.c) */
