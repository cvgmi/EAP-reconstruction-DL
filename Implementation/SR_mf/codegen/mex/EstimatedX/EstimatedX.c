/*
 * EstimatedX.c
 *
 * Code generation for function 'EstimatedX'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedX.h"
#include "EstimatedX_emxutil.h"
#include "logmapSRi.h"
#include "expmapSRi.h"
#include "EstimatedX_mexutil.h"
#include "EstimatedX_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 7, "EstimatedX",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/EstimatedX.m"
};

static emlrtRSInfo b_emlrtRSI = { 8, "EstimatedX",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/EstimatedX.m"
};

static emlrtRSInfo c_emlrtRSI = { 10, "EstimatedX",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/EstimatedX.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 1, 15, "EstimatedX",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/EstimatedX.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 7, 5, "EstimatedX",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/EstimatedX.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 4, 1, "EstimatedX",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/EstimatedX.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 7, 25, "X", "EstimatedX",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/EstimatedX.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 8, 22, "W", "EstimatedX",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/EstimatedX.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 8, 9, "M", "EstimatedX",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/EstimatedX.m",
  0 };

static emlrtECInfo emlrtECI = { -1, 8, 5, "EstimatedX",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/EstimatedX.m"
};

/* Function Definitions */
void EstimatedX(const emlrtStack *sp, const emxArray_real_T *X, const
                emxArray_real_T *W, const emxArray_real_T *A, emxArray_real_T
                *xh)
{
  uint32_T uv0[2];
  int32_T ub_loop;
  emxArray_real_T *M;
  int32_T loop_ub;
  int32_T i;
  emxArray_real_T *C;
  emxArray_real_T *b;
  emxArray_int32_T *r0;
  emxArray_real_T *b_X;
  emxArray_real_T *LOG;
  int32_T b_loop_ub;
  int32_T i0;
  int32_T i1;
  boolean_T guard2 = false;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 21 };

  const mxArray *m0;
  char_T cv0[21];
  int32_T b_i;
  static const char_T cv1[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 45 };

  char_T cv2[45];
  static const char_T cv3[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  int32_T c_loop_ub;
  int32_T iv2[1];
  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  jmp_buf emlrtJBEnviron;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  boolean_T emlrtHadParallelError = false;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  for (ub_loop = 0; ub_loop < 2; ub_loop++) {
    uv0[ub_loop] = (uint32_T)X->size[ub_loop];
  }

  emxInit_real_T(sp, &M, 2, &k_emlrtRTEI, true);
  ub_loop = M->size[0] * M->size[1];
  M->size[0] = (int32_T)uv0[0];
  emxEnsureCapacity(sp, (emxArray__common *)M, ub_loop, (int32_T)sizeof(real_T),
                    &i_emlrtRTEI);
  ub_loop = M->size[0] * M->size[1];
  M->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)M, ub_loop, (int32_T)sizeof(real_T),
                    &i_emlrtRTEI);
  loop_ub = (int32_T)uv0[0] * (int32_T)uv0[1];
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    M->data[ub_loop] = 0.0;
  }

  ub_loop = X->size[1];
  ub_loop--;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(C,b,r0,b_X,LOG,b_loop_ub,i0,i1,guard2,m0,b_i,guard1,c_loop_ub,unnamed_idx_0,alpha1,beta1,TRANSB,TRANSA,m_t,n_t,k_t,lda_t,ldb_t,ldc_t,alpha1_t,Aia0_t,Bib0_t,beta1_t,Cic0_t,emlrtJBEnviron) \
 firstprivate(st,c_st,d_st,e_st,f_st,b_y,cv2,y,cv0,iv2,emlrtHadParallelError)

  {
    if (setjmp(emlrtJBEnviron) == 0) {
      st.prev = sp;
      st.tls = emlrtAllocTLS(sp, omp_get_thread_num());
      st.site = NULL;
      emlrtSetJmpBuf(&st, &emlrtJBEnviron);
      c_st.prev = &st;
      c_st.tls = st.tls;
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
      e_st.prev = &d_st;
      e_st.tls = d_st.tls;
      f_st.prev = &d_st;
      f_st.tls = d_st.tls;
      b_emxInit_real_T(&st, &C, 1, &i_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b, 1, &i_emlrtRTEI, true);
      emxInit_int32_T(&st, &r0, 1, &i_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b_X, 1, &i_emlrtRTEI, true);
      emxInit_real_T(&st, &LOG, 2, &j_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (i = 0; i <= ub_loop; i++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {
        /*  main */
        b_loop_ub = X->size[0];
        i0 = X->size[1];
        i1 = 1 + i;
        i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &emlrtBCI, &st);
        i1 = b_X->size[0];
        b_X->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_X, i1, (int32_T)sizeof
                          (real_T), &i_emlrtRTEI);
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          b_X->data[i1] = X->data[i1 + X->size[0] * (i0 - 1)];
        }

        c_st.site = &emlrtRSI;
        logmapSRi(&c_st, b_X, A, LOG);

        /*  LOG d-by-m matrix with the jth column log(x_i,a_j) */
        b_loop_ub = M->size[0];
        i0 = r0->size[0];
        r0->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r0, i0, (int32_T)sizeof
                          (int32_T), &i_emlrtRTEI);
        for (i0 = 0; i0 < b_loop_ub; i0++) {
          r0->data[i0] = i0;
        }

        i0 = M->size[1];
        i1 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &c_emlrtBCI, &st);
        c_st.site = &b_emlrtRSI;
        b_loop_ub = W->size[0];
        i0 = W->size[1];
        i1 = 1 + i;
        i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &b_emlrtBCI, &c_st);
        i1 = b->size[0];
        b->size[0] = b_loop_ub;
        emxEnsureCapacity(&c_st, (emxArray__common *)b, i1, (int32_T)sizeof
                          (real_T), &i_emlrtRTEI);
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          b->data[i1] = W->data[i1 + W->size[0] * (i0 - 1)];
        }

        d_st.site = &m_emlrtRSI;
        i0 = W->size[0];
        if (!(LOG->size[1] == i0)) {
          guard2 = false;
          if ((LOG->size[0] == 1) && (LOG->size[1] == 1)) {
            guard2 = true;
          } else {
            i0 = W->size[0];
            if (i0 == 1) {
              guard2 = true;
            } else {
              emlrtAssertMATLABThread(&d_st, &c_emlrtRTEI);
              y = NULL;
              m0 = emlrtCreateCharArray(2, iv0);
              for (b_i = 0; b_i < 21; b_i++) {
                cv0[b_i] = cv1[b_i];
              }

              emlrtInitCharArrayR2013a(&d_st, 21, m0, cv0);
              emlrtAssign(&y, m0);
              e_st.site = &lb_emlrtRSI;
              f_st.site = &tb_emlrtRSI;
              error(&e_st, message(&f_st, y, &c_emlrtMCI), &d_emlrtMCI);
            }
          }

          if (guard2) {
            emlrtAssertMATLABThread(&d_st, &b_emlrtRTEI);
            b_y = NULL;
            m0 = emlrtCreateCharArray(2, iv1);
            for (b_i = 0; b_i < 45; b_i++) {
              cv2[b_i] = cv3[b_i];
            }

            emlrtInitCharArrayR2013a(&d_st, 45, m0, cv2);
            emlrtAssign(&b_y, m0);
            e_st.site = &kb_emlrtRSI;
            f_st.site = &sb_emlrtRSI;
            error(&e_st, message(&f_st, b_y, &emlrtMCI), &b_emlrtMCI);
          }
        }

        guard1 = false;
        if (LOG->size[1] == 1) {
          guard1 = true;
        } else {
          i0 = W->size[0];
          if (i0 == 1) {
            guard1 = true;
          } else {
            unnamed_idx_0 = (uint32_T)LOG->size[0];
            d_st.site = &l_emlrtRSI;
            e_st.site = &n_emlrtRSI;
            i0 = C->size[0];
            C->size[0] = (int32_T)unnamed_idx_0;
            emxEnsureCapacity(&e_st, (emxArray__common *)C, i0, (int32_T)sizeof
                              (real_T), &i_emlrtRTEI);
            b_loop_ub = (int32_T)unnamed_idx_0;
            for (i0 = 0; i0 < b_loop_ub; i0++) {
              C->data[i0] = 0.0;
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
          i0 = C->size[0];
          C->size[0] = LOG->size[0];
          emxEnsureCapacity(&c_st, (emxArray__common *)C, i0, (int32_T)sizeof
                            (real_T), &i_emlrtRTEI);
          b_loop_ub = LOG->size[0];
          for (i0 = 0; i0 < b_loop_ub; i0++) {
            C->data[i0] = 0.0;
            c_loop_ub = LOG->size[1];
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              C->data[i0] += LOG->data[i0 + LOG->size[0] * i1] * b->data[i1];
            }
          }
        }

        iv2[0] = r0->size[0];
        emlrtSubAssignSizeCheckR2012b(iv2, 1, *(int32_T (*)[1])C->size, 1,
          &emlrtECI, &st);
        b_loop_ub = C->size[0];
        for (i0 = 0; i0 < b_loop_ub; i0++) {
          M->data[r0->data[i0] + M->size[0] * i] = C->data[i0];
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
      emxFree_int32_T(&r0);
      emxFree_real_T(&b);
      emxFree_real_T(&C);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  b_st.site = &c_emlrtRSI;
  expmapSRi(&b_st, X, M, xh);
  emxFree_real_T(&M);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (EstimatedX.c) */
