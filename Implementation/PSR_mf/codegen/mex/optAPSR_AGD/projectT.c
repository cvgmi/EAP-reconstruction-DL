/*
 * projectT.c
 *
 * Code generation for function 'projectT'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD.h"
#include "projectT.h"
#include "optAPSR_AGD_emxutil.h"
#include "eye.h"
#include "optAPSR_AGD_mexutil.h"
#include "optAPSR_AGD_data.h"

/* Variable Definitions */
static emlrtRSInfo lc_emlrtRSI = { 15, "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectT.m"
};

static emlrtRTEInfo hb_emlrtRTEI = { 1, 14, "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectT.m"
};

static emlrtBCInfo s_emlrtBCI = { -1, -1, 15, 26, "A", "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectT.m",
  0 };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 15, 33, "A", "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectT.m",
  0 };

static emlrtECInfo h_emlrtECI = { 2, 15, 15, "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectT.m"
};

static emlrtBCInfo u_emlrtBCI = { -1, -1, 15, 42, "G", "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectT.m",
  0 };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 15, 9, "P", "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectT.m",
  0 };

static emlrtECInfo i_emlrtECI = { -1, 15, 5, "projectT",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectT.m"
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
  emxArray_int32_T *r5;
  emxArray_real_T *r6;
  emxArray_real_T *b_A;
  emxArray_real_T *c_A;
  emxArray_real_T *a;
  int32_T i9;
  int32_T i10;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T b_a[2];
  int32_T iv27[2];
  int32_T c_a;
  int32_T d_a;
  boolean_T guard2 = false;
  const mxArray *y;
  static const int32_T iv28[2] = { 1, 21 };

  const mxArray *m8;
  char_T cv28[21];
  int32_T b_i;
  static const char_T cv29[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *b_y;
  static const int32_T iv29[2] = { 1, 45 };

  char_T cv30[45];
  static const char_T cv31[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  int32_T iv30[1];
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
                    &hb_emlrtRTEI);
  ub_loop = P->size[0] * P->size[1];
  P->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)P, ub_loop, (int32_T)sizeof(real_T),
                    &hb_emlrtRTEI);
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
 private(C,b,r5,r6,b_A,c_A,a,i9,i10,b_loop_ub,c_loop_ub,c_a,d_a,guard2,m8,b_i,guard1,b_unnamed_idx_0,alpha1,beta1,TRANSB,TRANSA,m_t,n_t,k_t,lda_t,ldb_t,ldc_t,alpha1_t,Aia0_t,Bib0_t,beta1_t,Cic0_t,emlrtJBEnviron) \
 firstprivate(st,b_st,c_st,d_st,e_st,b_a,iv27,b_y,cv30,y,cv28,iv30,emlrtHadParallelError)

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
      c_emxInit_real_T(&st, &C, 1, &hb_emlrtRTEI, true);
      c_emxInit_real_T(&st, &b, 1, &hb_emlrtRTEI, true);
      emxInit_int32_T(&st, &r5, 1, &hb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &r6, 2, &hb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b_A, 2, &hb_emlrtRTEI, true);
      c_emxInit_real_T(&st, &c_A, 1, &hb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &a, 2, &hb_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (i = 0; i <= ub_loop; i++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {
        /* for i=1:m */
        b_st.site = &lc_emlrtRSI;
        eye(&b_st, d, a);
        i9 = A->size[1];
        i10 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i10, 1, i9, &s_emlrtBCI, &st);
        i9 = A->size[1];
        i10 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i10, 1, i9, &t_emlrtBCI, &st);
        b_loop_ub = A->size[0];
        c_loop_ub = A->size[0];
        i9 = c_A->size[0];
        c_A->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)c_A, i9, (int32_T)sizeof
                          (real_T), &hb_emlrtRTEI);
        for (i9 = 0; i9 < b_loop_ub; i9++) {
          c_A->data[i9] = A->data[i9 + A->size[0] * i];
        }

        i9 = b_A->size[0] * b_A->size[1];
        b_A->size[0] = 1;
        b_A->size[1] = c_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_A, i9, (int32_T)sizeof
                          (real_T), &hb_emlrtRTEI);
        for (i9 = 0; i9 < c_loop_ub; i9++) {
          b_A->data[b_A->size[0] * i9] = A->data[i9 + A->size[0] * i];
        }

        i9 = r6->size[0] * r6->size[1];
        r6->size[0] = c_A->size[0];
        r6->size[1] = b_A->size[1];
        emxEnsureCapacity(&st, (emxArray__common *)r6, i9, (int32_T)sizeof
                          (real_T), &hb_emlrtRTEI);
        b_loop_ub = c_A->size[0];
        for (i9 = 0; i9 < b_loop_ub; i9++) {
          c_loop_ub = b_A->size[1];
          for (i10 = 0; i10 < c_loop_ub; i10++) {
            r6->data[i9 + r6->size[0] * i10] = c_A->data[i9] * b_A->data
              [b_A->size[0] * i10];
          }
        }

        for (i9 = 0; i9 < 2; i9++) {
          b_a[i9] = a->size[i9];
        }

        for (i9 = 0; i9 < 2; i9++) {
          iv27[i9] = r6->size[i9];
        }

        emlrtSizeEqCheck2DFastR2012b(b_a, iv27, &h_emlrtECI, &st);
        b_loop_ub = P->size[0];
        i9 = r5->size[0];
        r5->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r5, i9, (int32_T)sizeof
                          (int32_T), &hb_emlrtRTEI);
        for (i9 = 0; i9 < b_loop_ub; i9++) {
          r5->data[i9] = i9;
        }

        i9 = P->size[1];
        i10 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i10, 1, i9, &v_emlrtBCI, &st);
        b_st.site = &lc_emlrtRSI;
        i9 = a->size[0] * a->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)a, i9, (int32_T)sizeof
                          (real_T), &hb_emlrtRTEI);
        c_a = a->size[0];
        d_a = a->size[1];
        b_loop_ub = c_a * d_a;
        for (i9 = 0; i9 < b_loop_ub; i9++) {
          a->data[i9] -= r6->data[i9];
        }

        b_loop_ub = G->size[0];
        i9 = G->size[1];
        i10 = 1 + i;
        i9 = emlrtDynamicBoundsCheckFastR2012b(i10, 1, i9, &u_emlrtBCI, &b_st);
        i10 = b->size[0];
        b->size[0] = b_loop_ub;
        emxEnsureCapacity(&b_st, (emxArray__common *)b, i10, (int32_T)sizeof
                          (real_T), &hb_emlrtRTEI);
        for (i10 = 0; i10 < b_loop_ub; i10++) {
          b->data[i10] = G->data[i10 + G->size[0] * (i9 - 1)];
        }

        c_st.site = &gb_emlrtRSI;
        i9 = G->size[0];
        if (!(a->size[1] == i9)) {
          guard2 = false;
          if ((a->size[0] == 1) && (a->size[1] == 1)) {
            guard2 = true;
          } else {
            i9 = G->size[0];
            if (i9 == 1) {
              guard2 = true;
            } else {
              emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
              y = NULL;
              m8 = emlrtCreateCharArray(2, iv28);
              for (b_i = 0; b_i < 21; b_i++) {
                cv28[b_i] = cv29[b_i];
              }

              emlrtInitCharArrayR2013a(&c_st, 21, m8, cv28);
              emlrtAssign(&y, m8);
              d_st.site = &id_emlrtRSI;
              e_st.site = &td_emlrtRSI;
              error(&d_st, b_message(&e_st, y, &g_emlrtMCI), &h_emlrtMCI);
            }
          }

          if (guard2) {
            emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
            b_y = NULL;
            m8 = emlrtCreateCharArray(2, iv29);
            for (b_i = 0; b_i < 45; b_i++) {
              cv30[b_i] = cv31[b_i];
            }

            emlrtInitCharArrayR2013a(&c_st, 45, m8, cv30);
            emlrtAssign(&b_y, m8);
            d_st.site = &hd_emlrtRSI;
            e_st.site = &sd_emlrtRSI;
            error(&d_st, b_message(&e_st, b_y, &e_emlrtMCI), &f_emlrtMCI);
          }
        }

        guard1 = false;
        if (a->size[1] == 1) {
          guard1 = true;
        } else {
          i9 = G->size[0];
          if (i9 == 1) {
            guard1 = true;
          } else {
            b_unnamed_idx_0 = (uint32_T)a->size[0];
            c_st.site = &fb_emlrtRSI;
            d_st.site = &hb_emlrtRSI;
            i9 = C->size[0];
            C->size[0] = (int32_T)b_unnamed_idx_0;
            emxEnsureCapacity(&d_st, (emxArray__common *)C, i9, (int32_T)sizeof
                              (real_T), &hb_emlrtRTEI);
            b_loop_ub = (int32_T)b_unnamed_idx_0;
            for (i9 = 0; i9 < b_loop_ub; i9++) {
              C->data[i9] = 0.0;
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
          i9 = C->size[0];
          C->size[0] = a->size[0];
          emxEnsureCapacity(&b_st, (emxArray__common *)C, i9, (int32_T)sizeof
                            (real_T), &hb_emlrtRTEI);
          b_loop_ub = a->size[0];
          for (i9 = 0; i9 < b_loop_ub; i9++) {
            C->data[i9] = 0.0;
            c_loop_ub = a->size[1];
            for (i10 = 0; i10 < c_loop_ub; i10++) {
              C->data[i9] += a->data[i9 + a->size[0] * i10] * b->data[i10];
            }
          }
        }

        iv30[0] = r5->size[0];
        emlrtSubAssignSizeCheckR2012b(iv30, 1, *(int32_T (*)[1])C->size, 1,
          &i_emlrtECI, &st);
        b_loop_ub = C->size[0];
        for (i9 = 0; i9 < b_loop_ub; i9++) {
          P->data[r5->data[i9] + P->size[0] * i] = C->data[i9];
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
      emxFree_real_T(&r6);
      emxFree_int32_T(&r5);
      emxFree_real_T(&b);
      emxFree_real_T(&C);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (projectT.c) */
