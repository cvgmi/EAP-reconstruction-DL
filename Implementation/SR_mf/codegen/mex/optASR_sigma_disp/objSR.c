/*
 * objSR.c
 *
 * Code generation for function 'objSR'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "objSR.h"
#include "optASR_sigma_disp_emxutil.h"
#include "logmapSRi.h"
#include "optASR_sigma_disp_mexutil.h"
#include "optASR_sigma_disp_data.h"

/* Variable Definitions */
static emlrtRSInfo i_emlrtRSI = { 16, "objSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/objSR.m"
};

static emlrtRSInfo j_emlrtRSI = { 17, "objSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/objSR.m"
};

static emlrtRSInfo k_emlrtRSI = { 19, "objSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/objSR.m"
};

static emlrtMCInfo s_emlrtMCI = { 12, 5, "trace",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/trace.m" };

static emlrtMCInfo t_emlrtMCI = { 11, 15, "trace",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/trace.m" };

static emlrtRTEInfo n_emlrtRTEI = { 1, 14, "objSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/objSR.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 16, 5, "objSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/objSR.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 14, 1, "objSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/objSR.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 16, 25, "X", "objSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/objSR.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 17, 22, "W", "objSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/objSR.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 17, 9, "T", "objSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/objSR.m",
  0 };

static emlrtECInfo emlrtECI = { -1, 17, 5, "objSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/objSR.m"
};

static emlrtRSInfo gd_emlrtRSI = { 11, "trace",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/trace.m" };

static emlrtRSInfo nd_emlrtRSI = { 12, "trace",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/trace.m" };

/* Function Definitions */
real_T objSR(const emlrtStack *sp, const emxArray_real_T *X, const
             emxArray_real_T *W, const emxArray_real_T *A)
{
  real_T obj;
  emxArray_real_T *T;
  int32_T i;
  int32_T i2;
  int32_T b_i;
  emxArray_real_T *C;
  emxArray_real_T *b;
  emxArray_int32_T *r1;
  emxArray_real_T *b_X;
  emxArray_real_T *LOG;
  int32_T loop_ub;
  int32_T i3;
  int32_T i4;
  boolean_T guard2 = false;
  const mxArray *y;
  static const int32_T iv9[2] = { 1, 21 };

  const mxArray *m1;
  char_T cv16[21];
  int32_T c_i;
  static const char_T cv17[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *b_y;
  static const int32_T iv10[2] = { 1, 45 };

  char_T cv18[45];
  static const char_T cv19[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  boolean_T guard1 = false;
  uint32_T unnamed_idx_0;
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
  int32_T b_loop_ub;
  int32_T iv11[1];
  emxArray_real_T *a;
  int32_T c_loop_ub;
  int32_T i5;
  const mxArray *c_y;
  static const int32_T iv12[2] = { 1, 45 };

  const mxArray *m2;
  char_T cv20[45];
  const mxArray *d_y;
  static const int32_T iv13[2] = { 1, 21 };

  char_T cv21[21];
  emxArray_real_T *b_C;
  emxArray_real_T *r2;
  int32_T d_loop_ub;
  int32_T i6;
  uint32_T b_unnamed_idx_0;
  uint32_T unnamed_idx_1;
  real_T b_alpha1;
  real_T b_beta1;
  char_T b_TRANSB;
  char_T b_TRANSA;
  ptrdiff_t b_m_t;
  ptrdiff_t b_n_t;
  ptrdiff_t b_k_t;
  ptrdiff_t b_lda_t;
  ptrdiff_t b_ldb_t;
  ptrdiff_t b_ldc_t;
  double * b_alpha1_t;
  double * b_Aia0_t;
  double * b_Bib0_t;
  double * b_beta1_t;
  double * b_Cic0_t;
  boolean_T b1;
  const mxArray *e_y;
  static const int32_T iv14[2] = { 1, 19 };

  char_T cv22[19];
  static const char_T cv23[19] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'q', 'u', 'a', 'r', 'e' };

  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  jmp_buf emlrtJBEnviron;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  boolean_T emlrtHadParallelError = false;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &b_st;
  f_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &T, 2, &p_emlrtRTEI, true);

  /*  compute the objective function for sphere approximation */
  /*  Input: */
  /*      X - input square root density data (d-by-n) */
  /*      W - coefficient matrix (m-by-n) */
  /*      A - atoms in dictionary (d-by-m) */
  /*  Output: */
  /*      obj - the value of objective function */
  /*  initialization */
  i = X->size[0];
  i2 = T->size[0] * T->size[1];
  T->size[0] = i;
  emxEnsureCapacity(sp, (emxArray__common *)T, i2, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  i = W->size[1];
  i2 = T->size[0] * T->size[1];
  T->size[1] = i;
  emxEnsureCapacity(sp, (emxArray__common *)T, i2, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  i = X->size[0] * W->size[1];
  for (i2 = 0; i2 < i; i2++) {
    T->data[i2] = 0.0;
  }

  i2 = W->size[1];
  i = i2 - 1;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(C,b,r1,b_X,LOG,loop_ub,i3,i4,guard2,m1,c_i,guard1,b_loop_ub,unnamed_idx_0,alpha1,beta1,TRANSB,TRANSA,m_t,n_t,k_t,lda_t,ldb_t,ldc_t,alpha1_t,Aia0_t,Bib0_t,beta1_t,Cic0_t,emlrtJBEnviron) \
 firstprivate(st,g_st,h_st,i_st,j_st,b_y,cv18,y,cv16,iv11,emlrtHadParallelError)

  {
    if (setjmp(emlrtJBEnviron) == 0) {
      st.prev = sp;
      st.tls = emlrtAllocTLS(sp, omp_get_thread_num());
      st.site = NULL;
      emlrtSetJmpBuf(&st, &emlrtJBEnviron);
      g_st.prev = &st;
      g_st.tls = st.tls;
      h_st.prev = &g_st;
      h_st.tls = g_st.tls;
      i_st.prev = &h_st;
      i_st.tls = h_st.tls;
      j_st.prev = &h_st;
      j_st.tls = h_st.tls;
      b_emxInit_real_T(&st, &C, 1, &n_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b, 1, &n_emlrtRTEI, true);
      emxInit_int32_T(&st, &r1, 1, &n_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b_X, 1, &n_emlrtRTEI, true);
      emxInit_real_T(&st, &LOG, 2, &o_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (b_i = 0; b_i <= i; b_i++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {
        loop_ub = X->size[0];
        i3 = X->size[1];
        i4 = 1 + b_i;
        i3 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &emlrtBCI, &st);
        i4 = b_X->size[0];
        b_X->size[0] = loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_X, i4, (int32_T)sizeof
                          (real_T), &n_emlrtRTEI);
        for (i4 = 0; i4 < loop_ub; i4++) {
          b_X->data[i4] = X->data[i4 + X->size[0] * (i3 - 1)];
        }

        g_st.site = &i_emlrtRSI;
        logmapSRi(&g_st, b_X, A, LOG);

        /*  LOG d-by-m matrix with the jth column log(x_i,a_j) */
        loop_ub = T->size[0];
        i3 = r1->size[0];
        r1->size[0] = loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r1, i3, (int32_T)sizeof
                          (int32_T), &n_emlrtRTEI);
        for (i3 = 0; i3 < loop_ub; i3++) {
          r1->data[i3] = i3;
        }

        i3 = T->size[1];
        i4 = b_i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &c_emlrtBCI, &st);
        g_st.site = &j_emlrtRSI;
        loop_ub = W->size[0];
        i3 = W->size[1];
        i4 = 1 + b_i;
        i3 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &b_emlrtBCI, &g_st);
        i4 = b->size[0];
        b->size[0] = loop_ub;
        emxEnsureCapacity(&g_st, (emxArray__common *)b, i4, (int32_T)sizeof
                          (real_T), &n_emlrtRTEI);
        for (i4 = 0; i4 < loop_ub; i4++) {
          b->data[i4] = W->data[i4 + W->size[0] * (i3 - 1)];
        }

        h_st.site = &u_emlrtRSI;
        i3 = W->size[0];
        if (!(LOG->size[1] == i3)) {
          guard2 = false;
          if ((LOG->size[0] == 1) && (LOG->size[1] == 1)) {
            guard2 = true;
          } else {
            i3 = W->size[0];
            if (i3 == 1) {
              guard2 = true;
            } else {
              emlrtAssertMATLABThread(&h_st, &c_emlrtRTEI);
              y = NULL;
              m1 = emlrtCreateCharArray(2, iv9);
              for (c_i = 0; c_i < 21; c_i++) {
                cv16[c_i] = cv17[c_i];
              }

              emlrtInitCharArrayR2013a(&h_st, 21, m1, cv16);
              emlrtAssign(&y, m1);
              i_st.site = &yc_emlrtRSI;
              j_st.site = &kd_emlrtRSI;
              error(&i_st, message(&j_st, y, &g_emlrtMCI), &h_emlrtMCI);
            }
          }

          if (guard2) {
            emlrtAssertMATLABThread(&h_st, &b_emlrtRTEI);
            b_y = NULL;
            m1 = emlrtCreateCharArray(2, iv10);
            for (c_i = 0; c_i < 45; c_i++) {
              cv18[c_i] = cv19[c_i];
            }

            emlrtInitCharArrayR2013a(&h_st, 45, m1, cv18);
            emlrtAssign(&b_y, m1);
            i_st.site = &xc_emlrtRSI;
            j_st.site = &jd_emlrtRSI;
            error(&i_st, message(&j_st, b_y, &e_emlrtMCI), &f_emlrtMCI);
          }
        }

        guard1 = false;
        if (LOG->size[1] == 1) {
          guard1 = true;
        } else {
          i3 = W->size[0];
          if (i3 == 1) {
            guard1 = true;
          } else {
            unnamed_idx_0 = (uint32_T)LOG->size[0];
            h_st.site = &t_emlrtRSI;
            i_st.site = &v_emlrtRSI;
            i3 = C->size[0];
            C->size[0] = (int32_T)unnamed_idx_0;
            emxEnsureCapacity(&i_st, (emxArray__common *)C, i3, (int32_T)sizeof
                              (real_T), &n_emlrtRTEI);
            loop_ub = (int32_T)unnamed_idx_0;
            for (i3 = 0; i3 < loop_ub; i3++) {
              C->data[i3] = 0.0;
            }

            if ((LOG->size[0] < 1) || (LOG->size[1] < 1)) {
            } else {
              alpha1 = 1.0;
              beta1 = 0.0;
              TRANSB = 'N';
              TRANSA = 'N';
              m_t = (ptrdiff_t)(LOG->size[0]);
              n_t = (ptrdiff_t)(1);
              k_t = (ptrdiff_t)(LOG->size[1]);
              lda_t = (ptrdiff_t)(LOG->size[0]);
              ldb_t = (ptrdiff_t)(LOG->size[1]);
              ldc_t = (ptrdiff_t)(LOG->size[0]);
              alpha1_t = (double *)(&alpha1);
              Aia0_t = (double *)(&LOG->data[0]);
              Bib0_t = (double *)(&b->data[0]);
              beta1_t = (double *)(&beta1);
              Cic0_t = (double *)(&C->data[0]);
              dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
                    Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
            }
          }
        }

        if (guard1) {
          i3 = C->size[0];
          C->size[0] = LOG->size[0];
          emxEnsureCapacity(&g_st, (emxArray__common *)C, i3, (int32_T)sizeof
                            (real_T), &n_emlrtRTEI);
          loop_ub = LOG->size[0];
          for (i3 = 0; i3 < loop_ub; i3++) {
            C->data[i3] = 0.0;
            b_loop_ub = LOG->size[1];
            for (i4 = 0; i4 < b_loop_ub; i4++) {
              C->data[i3] += LOG->data[i3 + LOG->size[0] * i4] * b->data[i4];
            }
          }
        }

        iv11[0] = r1->size[0];
        emlrtSubAssignSizeCheckR2012b(iv11, 1, *(int32_T (*)[1])C->size, 1,
          &emlrtECI, &st);
        loop_ub = C->size[0];
        for (i3 = 0; i3 < loop_ub; i3++) {
          T->data[r1->data[i3] + T->size[0] * b_i] = C->data[i3];
        }

        /*  T: d-by-n matrix with the ith column sum of W_ji*log(x_i,a_j) */
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      } else {
        emlrtHadParallelError = true;
      }
    }

    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 5);
      emxFree_real_T(&LOG);
      emxFree_real_T(&b_X);
      emxFree_int32_T(&r1);
      emxFree_real_T(&b);
      emxFree_real_T(&C);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emxInit_real_T(sp, &a, 2, &n_emlrtRTEI, true);
  b_st.site = &k_emlrtRSI;
  i2 = a->size[0] * a->size[1];
  a->size[0] = T->size[1];
  a->size[1] = T->size[0];
  emxEnsureCapacity(&b_st, (emxArray__common *)a, i2, (int32_T)sizeof(real_T),
                    &n_emlrtRTEI);
  i = T->size[0];
  for (i2 = 0; i2 < i; i2++) {
    c_loop_ub = T->size[1];
    for (i5 = 0; i5 < c_loop_ub; i5++) {
      a->data[i5 + a->size[0] * i2] = T->data[i2 + T->size[0] * i5];
    }
  }

  c_st.site = &u_emlrtRSI;
  if (!(a->size[1] == T->size[0])) {
    if (((a->size[0] == 1) && (a->size[1] == 1)) || ((T->size[0] == 1) &&
         (T->size[1] == 1))) {
      emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
      c_y = NULL;
      m2 = emlrtCreateCharArray(2, iv12);
      for (i = 0; i < 45; i++) {
        cv20[i] = cv19[i];
      }

      emlrtInitCharArrayR2013a(&c_st, 45, m2, cv20);
      emlrtAssign(&c_y, m2);
      d_st.site = &xc_emlrtRSI;
      e_st.site = &jd_emlrtRSI;
      error(&d_st, message(&e_st, c_y, &e_emlrtMCI), &f_emlrtMCI);
    } else {
      emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
      d_y = NULL;
      m2 = emlrtCreateCharArray(2, iv13);
      for (i = 0; i < 21; i++) {
        cv21[i] = cv17[i];
      }

      emlrtInitCharArrayR2013a(&c_st, 21, m2, cv21);
      emlrtAssign(&d_y, m2);
      d_st.site = &yc_emlrtRSI;
      e_st.site = &kd_emlrtRSI;
      error(&d_st, message(&e_st, d_y, &g_emlrtMCI), &h_emlrtMCI);
    }
  }

  emxInit_real_T(&b_st, &b_C, 2, &n_emlrtRTEI, true);
  emxInit_real_T(&b_st, &r2, 2, &n_emlrtRTEI, true);
  if ((a->size[1] == 1) || (T->size[0] == 1)) {
    i2 = b_C->size[0] * b_C->size[1];
    b_C->size[0] = a->size[0];
    b_C->size[1] = T->size[1];
    emxEnsureCapacity(&b_st, (emxArray__common *)b_C, i2, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    i = a->size[0];
    for (i2 = 0; i2 < i; i2++) {
      c_loop_ub = T->size[1];
      for (i5 = 0; i5 < c_loop_ub; i5++) {
        b_C->data[i2 + b_C->size[0] * i5] = 0.0;
        d_loop_ub = a->size[1];
        for (i6 = 0; i6 < d_loop_ub; i6++) {
          b_C->data[i2 + b_C->size[0] * i5] += a->data[i2 + a->size[0] * i6] *
            T->data[i6 + T->size[0] * i5];
        }
      }
    }
  } else {
    b_unnamed_idx_0 = (uint32_T)a->size[0];
    unnamed_idx_1 = (uint32_T)T->size[1];
    i2 = r2->size[0] * r2->size[1];
    r2->size[0] = (int32_T)b_unnamed_idx_0;
    emxEnsureCapacity(&b_st, (emxArray__common *)r2, i2, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    i2 = r2->size[0] * r2->size[1];
    r2->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&b_st, (emxArray__common *)r2, i2, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    i = (int32_T)b_unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i2 = 0; i2 < i; i2++) {
      r2->data[i2] = 0.0;
    }

    c_st.site = &t_emlrtRSI;
    d_st.site = &v_emlrtRSI;
    i2 = b_C->size[0] * b_C->size[1];
    b_C->size[0] = (int32_T)b_unnamed_idx_0;
    emxEnsureCapacity(&d_st, (emxArray__common *)b_C, i2, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    i2 = b_C->size[0] * b_C->size[1];
    b_C->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&d_st, (emxArray__common *)b_C, i2, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    i = (int32_T)b_unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i2 = 0; i2 < i; i2++) {
      b_C->data[i2] = 0.0;
    }

    if ((a->size[0] < 1) || (T->size[1] < 1) || (a->size[1] < 1)) {
    } else {
      b_alpha1 = 1.0;
      b_beta1 = 0.0;
      b_TRANSB = 'N';
      b_TRANSA = 'N';
      b_m_t = (ptrdiff_t)(a->size[0]);
      b_n_t = (ptrdiff_t)(T->size[1]);
      b_k_t = (ptrdiff_t)(a->size[1]);
      b_lda_t = (ptrdiff_t)(a->size[0]);
      b_ldb_t = (ptrdiff_t)(a->size[1]);
      b_ldc_t = (ptrdiff_t)(a->size[0]);
      b_alpha1_t = (double *)(&b_alpha1);
      b_Aia0_t = (double *)(&a->data[0]);
      b_Bib0_t = (double *)(&T->data[0]);
      b_beta1_t = (double *)(&b_beta1);
      b_Cic0_t = (double *)(&b_C->data[0]);
      dgemm(&b_TRANSA, &b_TRANSB, &b_m_t, &b_n_t, &b_k_t, b_alpha1_t, b_Aia0_t,
            &b_lda_t, b_Bib0_t, &b_ldb_t, b_beta1_t, b_Cic0_t, &b_ldc_t);
    }
  }

  emxFree_real_T(&r2);
  emxFree_real_T(&a);
  emxFree_real_T(&T);
  b_st.site = &k_emlrtRSI;
  b1 = (b_C->size[0] == b_C->size[1]);
  if (b1) {
  } else {
    e_y = NULL;
    m2 = emlrtCreateCharArray(2, iv14);
    for (i = 0; i < 19; i++) {
      cv22[i] = cv23[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 19, m2, cv22);
    emlrtAssign(&e_y, m2);
    c_st.site = &gd_emlrtRSI;
    f_st.site = &nd_emlrtRSI;
    error(&c_st, message(&f_st, e_y, &s_emlrtMCI), &t_emlrtMCI);
  }

  obj = 0.0;
  for (i = 0; i < b_C->size[0]; i++) {
    obj += b_C->data[i + b_C->size[0] * i];
  }

  emxFree_real_T(&b_C);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return obj;
}

/* End of code generation (objSR.c) */
