/*
 * projectT.c
 *
 * Code generation for function 'projectT'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "projectT.h"
#include "optASR_sigma_disp_emxutil.h"
#include "eye.h"
#include "optASR_sigma_disp_mexutil.h"
#include "optASR_sigma_disp_data.h"

/* Variable Definitions */
static emlrtRSInfo hc_emlrtRSI = { 15, "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/projectT.m"
};

static emlrtRTEInfo jb_emlrtRTEI = { 1, 14, "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/projectT.m"
};

static emlrtBCInfo v_emlrtBCI = { -1, -1, 15, 26, "A", "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/projectT.m",
  0 };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 15, 33, "A", "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/projectT.m",
  0 };

static emlrtECInfo i_emlrtECI = { 2, 15, 15, "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/projectT.m"
};

static emlrtBCInfo x_emlrtBCI = { -1, -1, 15, 42, "G", "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/projectT.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 15, 9, "P", "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/projectT.m",
  0 };

static emlrtECInfo j_emlrtECI = { -1, 15, 5, "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/DL_Manifold/DictL_original/SR_mf/projectT.m"
};

/* Function Definitions */
void projectT(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *G, emxArray_real_T *P)
{
  real_T d;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  int32_T ub_loop;
  int32_T loop_ub;
  int32_T i;
  emxArray_real_T *C;
  emxArray_real_T *b;
  emxArray_int32_T *r8;
  emxArray_real_T *r9;
  emxArray_real_T *b_A;
  emxArray_real_T *c_A;
  emxArray_real_T *a;
  int32_T i16;
  int32_T i17;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T b_a[2];
  int32_T iv42[2];
  int32_T c_a;
  int32_T d_a;
  boolean_T guard2 = false;
  const mxArray *y;
  static const int32_T iv43[2] = { 1, 21 };

  const mxArray *m11;
  char_T cv52[21];
  int32_T b_i;
  static const char_T cv53[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *b_y;
  static const int32_T iv44[2] = { 1, 45 };

  char_T cv54[45];
  static const char_T cv55[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  boolean_T guard1 = false;
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
  int32_T iv45[1];
  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  jmp_buf emlrtJBEnviron;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  boolean_T emlrtHadParallelError = false;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  project the gradient G to the tangent plane at A */
  /*  Input: */
  /*      A - atoms in dictionary (d-by-m) */
  /*      G - gradient with respect to A (d-by-m) */
  /*  Output: */
  /*      P - projected gradient (d-by-m) */
  d = A->size[0];
  unnamed_idx_0 = (uint32_T)A->size[0];
  unnamed_idx_1 = (uint32_T)A->size[1];
  ub_loop = P->size[0] * P->size[1];
  P->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)P, ub_loop, (int32_T)sizeof(real_T),
                    &jb_emlrtRTEI);
  ub_loop = P->size[0] * P->size[1];
  P->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)P, ub_loop, (int32_T)sizeof(real_T),
                    &jb_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    P->data[ub_loop] = 0.0;
  }

  ub_loop = A->size[1];
  ub_loop--;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(C,b,r8,r9,b_A,c_A,a,i16,i17,b_loop_ub,c_loop_ub,c_a,d_a,guard2,m11,b_i,guard1,b_unnamed_idx_0,alpha1,beta1,TRANSB,TRANSA,m_t,n_t,k_t,lda_t,ldb_t,ldc_t,alpha1_t,Aia0_t,Bib0_t,beta1_t,Cic0_t,emlrtJBEnviron) \
 firstprivate(st,b_st,c_st,d_st,e_st,b_a,iv42,b_y,cv54,y,cv52,iv45,emlrtHadParallelError)

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
      b_emxInit_real_T(&st, &C, 1, &jb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b, 1, &jb_emlrtRTEI, true);
      emxInit_int32_T(&st, &r8, 1, &jb_emlrtRTEI, true);
      emxInit_real_T(&st, &r9, 2, &jb_emlrtRTEI, true);
      emxInit_real_T(&st, &b_A, 2, &jb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &c_A, 1, &jb_emlrtRTEI, true);
      emxInit_real_T(&st, &a, 2, &jb_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (i = 0; i <= ub_loop; i++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {
        /* for i=1:m */
        b_st.site = &hc_emlrtRSI;
        eye(&b_st, d, a);
        i16 = A->size[1];
        i17 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i17, 1, i16, &v_emlrtBCI, &st);
        i16 = A->size[1];
        i17 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i17, 1, i16, &w_emlrtBCI, &st);
        b_loop_ub = A->size[0];
        c_loop_ub = A->size[0];
        i16 = c_A->size[0];
        c_A->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)c_A, i16, (int32_T)sizeof
                          (real_T), &jb_emlrtRTEI);
        for (i16 = 0; i16 < b_loop_ub; i16++) {
          c_A->data[i16] = A->data[i16 + A->size[0] * i];
        }

        i16 = b_A->size[0] * b_A->size[1];
        b_A->size[0] = 1;
        b_A->size[1] = c_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_A, i16, (int32_T)sizeof
                          (real_T), &jb_emlrtRTEI);
        for (i16 = 0; i16 < c_loop_ub; i16++) {
          b_A->data[b_A->size[0] * i16] = A->data[i16 + A->size[0] * i];
        }

        i16 = r9->size[0] * r9->size[1];
        r9->size[0] = c_A->size[0];
        r9->size[1] = b_A->size[1];
        emxEnsureCapacity(&st, (emxArray__common *)r9, i16, (int32_T)sizeof
                          (real_T), &jb_emlrtRTEI);
        b_loop_ub = c_A->size[0];
        for (i16 = 0; i16 < b_loop_ub; i16++) {
          c_loop_ub = b_A->size[1];
          for (i17 = 0; i17 < c_loop_ub; i17++) {
            r9->data[i16 + r9->size[0] * i17] = c_A->data[i16] * b_A->data
              [b_A->size[0] * i17];
          }
        }

        for (i16 = 0; i16 < 2; i16++) {
          b_a[i16] = a->size[i16];
        }

        for (i16 = 0; i16 < 2; i16++) {
          iv42[i16] = r9->size[i16];
        }

        emlrtSizeEqCheck2DFastR2012b(b_a, iv42, &i_emlrtECI, &st);
        b_loop_ub = P->size[0];
        i16 = r8->size[0];
        r8->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r8, i16, (int32_T)sizeof
                          (int32_T), &jb_emlrtRTEI);
        for (i16 = 0; i16 < b_loop_ub; i16++) {
          r8->data[i16] = i16;
        }

        i16 = P->size[1];
        i17 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i17, 1, i16, &y_emlrtBCI, &st);
        b_st.site = &hc_emlrtRSI;
        i16 = a->size[0] * a->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)a, i16, (int32_T)sizeof
                          (real_T), &jb_emlrtRTEI);
        c_a = a->size[0];
        d_a = a->size[1];
        b_loop_ub = c_a * d_a;
        for (i16 = 0; i16 < b_loop_ub; i16++) {
          a->data[i16] -= r9->data[i16];
        }

        b_loop_ub = G->size[0];
        i16 = G->size[1];
        i17 = 1 + i;
        i16 = emlrtDynamicBoundsCheckFastR2012b(i17, 1, i16, &x_emlrtBCI, &b_st);
        i17 = b->size[0];
        b->size[0] = b_loop_ub;
        emxEnsureCapacity(&b_st, (emxArray__common *)b, i17, (int32_T)sizeof
                          (real_T), &jb_emlrtRTEI);
        for (i17 = 0; i17 < b_loop_ub; i17++) {
          b->data[i17] = G->data[i17 + G->size[0] * (i16 - 1)];
        }

        c_st.site = &u_emlrtRSI;
        i16 = G->size[0];
        if (!(a->size[1] == i16)) {
          guard2 = false;
          if ((a->size[0] == 1) && (a->size[1] == 1)) {
            guard2 = true;
          } else {
            i16 = G->size[0];
            if (i16 == 1) {
              guard2 = true;
            } else {
              emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
              y = NULL;
              m11 = emlrtCreateCharArray(2, iv43);
              for (b_i = 0; b_i < 21; b_i++) {
                cv52[b_i] = cv53[b_i];
              }

              emlrtInitCharArrayR2013a(&c_st, 21, m11, cv52);
              emlrtAssign(&y, m11);
              d_st.site = &yc_emlrtRSI;
              e_st.site = &kd_emlrtRSI;
              error(&d_st, message(&e_st, y, &g_emlrtMCI), &h_emlrtMCI);
            }
          }

          if (guard2) {
            emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
            b_y = NULL;
            m11 = emlrtCreateCharArray(2, iv44);
            for (b_i = 0; b_i < 45; b_i++) {
              cv54[b_i] = cv55[b_i];
            }

            emlrtInitCharArrayR2013a(&c_st, 45, m11, cv54);
            emlrtAssign(&b_y, m11);
            d_st.site = &xc_emlrtRSI;
            e_st.site = &jd_emlrtRSI;
            error(&d_st, message(&e_st, b_y, &e_emlrtMCI), &f_emlrtMCI);
          }
        }

        guard1 = false;
        if (a->size[1] == 1) {
          guard1 = true;
        } else {
          i16 = G->size[0];
          if (i16 == 1) {
            guard1 = true;
          } else {
            b_unnamed_idx_0 = (uint32_T)a->size[0];
            c_st.site = &t_emlrtRSI;
            d_st.site = &v_emlrtRSI;
            i16 = C->size[0];
            C->size[0] = (int32_T)b_unnamed_idx_0;
            emxEnsureCapacity(&d_st, (emxArray__common *)C, i16, (int32_T)sizeof
                              (real_T), &jb_emlrtRTEI);
            b_loop_ub = (int32_T)b_unnamed_idx_0;
            for (i16 = 0; i16 < b_loop_ub; i16++) {
              C->data[i16] = 0.0;
            }

            if ((a->size[0] < 1) || (a->size[1] < 1)) {
            } else {
              alpha1 = 1.0;
              beta1 = 0.0;
              TRANSB = 'N';
              TRANSA = 'N';
              m_t = (ptrdiff_t)(a->size[0]);
              n_t = (ptrdiff_t)(1);
              k_t = (ptrdiff_t)(a->size[1]);
              lda_t = (ptrdiff_t)(a->size[0]);
              ldb_t = (ptrdiff_t)(a->size[1]);
              ldc_t = (ptrdiff_t)(a->size[0]);
              alpha1_t = (double *)(&alpha1);
              Aia0_t = (double *)(&a->data[0]);
              Bib0_t = (double *)(&b->data[0]);
              beta1_t = (double *)(&beta1);
              Cic0_t = (double *)(&C->data[0]);
              dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
                    Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
            }
          }
        }

        if (guard1) {
          i16 = C->size[0];
          C->size[0] = a->size[0];
          emxEnsureCapacity(&b_st, (emxArray__common *)C, i16, (int32_T)sizeof
                            (real_T), &jb_emlrtRTEI);
          b_loop_ub = a->size[0];
          for (i16 = 0; i16 < b_loop_ub; i16++) {
            C->data[i16] = 0.0;
            c_loop_ub = a->size[1];
            for (i17 = 0; i17 < c_loop_ub; i17++) {
              C->data[i16] += a->data[i16 + a->size[0] * i17] * b->data[i17];
            }
          }
        }

        iv45[0] = r8->size[0];
        emlrtSubAssignSizeCheckR2012b(iv45, 1, *(int32_T (*)[1])C->size, 1,
          &j_emlrtECI, &st);
        b_loop_ub = C->size[0];
        for (i16 = 0; i16 < b_loop_ub; i16++) {
          P->data[r8->data[i16] + P->size[0] * i] = C->data[i16];
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      } else {
        emlrtHadParallelError = true;
      }
    }

    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 7);
      emxFree_real_T(&a);
      emxFree_real_T(&c_A);
      emxFree_real_T(&b_A);
      emxFree_real_T(&r9);
      emxFree_int32_T(&r8);
      emxFree_real_T(&b);
      emxFree_real_T(&C);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (projectT.c) */
