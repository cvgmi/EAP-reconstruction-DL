/*
 * projectT.c
 *
 * Code generation for function 'projectT'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "projectT.h"
#include "optAPSR_sigma_emxutil.h"
#include "eye.h"
#include "optAPSR_sigma_mexutil.h"
#include "optAPSR_sigma_data.h"

/* Variable Definitions */
static emlrtRSInfo kc_emlrtRSI = { 15, "projectT",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectT.m" };

static emlrtRTEInfo ob_emlrtRTEI = { 1, 14, "projectT",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectT.m" };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 15, 26, "A", "projectT",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectT.m", 0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 15, 33, "A", "projectT",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectT.m", 0 };

static emlrtECInfo k_emlrtECI = { 2, 15, 15, "projectT",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectT.m" };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 15, 42, "G", "projectT",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectT.m", 0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 15, 9, "P", "projectT",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectT.m", 0 };

static emlrtECInfo l_emlrtECI = { -1, 15, 5, "projectT",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectT.m" };

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
  emxArray_int32_T *r13;
  emxArray_real_T *r14;
  emxArray_real_T *b_A;
  emxArray_real_T *c_A;
  emxArray_real_T *a;
  int32_T i18;
  int32_T i19;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T b_a[2];
  int32_T iv38[2];
  int32_T c_a;
  int32_T d_a;
  boolean_T guard2 = false;
  const mxArray *y;
  static const int32_T iv39[2] = { 1, 21 };

  const mxArray *m9;
  char_T cv40[21];
  int32_T b_i;
  static const char_T cv41[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *b_y;
  static const int32_T iv40[2] = { 1, 45 };

  char_T cv42[45];
  static const char_T cv43[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  int32_T iv41[1];
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
                    &ob_emlrtRTEI);
  ub_loop = P->size[0] * P->size[1];
  P->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)P, ub_loop, (int32_T)sizeof(real_T),
                    &ob_emlrtRTEI);
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
 private(C,b,r13,r14,b_A,c_A,a,i18,i19,b_loop_ub,c_loop_ub,c_a,d_a,guard2,m9,b_i,guard1,b_unnamed_idx_0,alpha1,beta1,TRANSB,TRANSA,m_t,n_t,k_t,lda_t,ldb_t,ldc_t,alpha1_t,Aia0_t,Bib0_t,beta1_t,Cic0_t,emlrtJBEnviron) \
 firstprivate(st,b_st,c_st,d_st,e_st,b_a,iv38,b_y,cv42,y,cv40,iv41,emlrtHadParallelError)

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
      c_emxInit_real_T(&st, &C, 1, &ob_emlrtRTEI, true);
      c_emxInit_real_T(&st, &b, 1, &ob_emlrtRTEI, true);
      emxInit_int32_T(&st, &r13, 1, &ob_emlrtRTEI, true);
      emxInit_real_T(&st, &r14, 2, &ob_emlrtRTEI, true);
      emxInit_real_T(&st, &b_A, 2, &ob_emlrtRTEI, true);
      c_emxInit_real_T(&st, &c_A, 1, &ob_emlrtRTEI, true);
      emxInit_real_T(&st, &a, 2, &ob_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (i = 0; i <= ub_loop; i++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {
        /* for i=1:m */
        b_st.site = &kc_emlrtRSI;
        eye(&b_st, d, a);
        i18 = A->size[1];
        i19 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i19, 1, i18, &db_emlrtBCI, &st);
        i18 = A->size[1];
        i19 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i19, 1, i18, &eb_emlrtBCI, &st);
        b_loop_ub = A->size[0];
        c_loop_ub = A->size[0];
        i18 = c_A->size[0];
        c_A->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)c_A, i18, (int32_T)sizeof
                          (real_T), &ob_emlrtRTEI);
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          c_A->data[i18] = A->data[i18 + A->size[0] * i];
        }

        i18 = b_A->size[0] * b_A->size[1];
        b_A->size[0] = 1;
        b_A->size[1] = c_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_A, i18, (int32_T)sizeof
                          (real_T), &ob_emlrtRTEI);
        for (i18 = 0; i18 < c_loop_ub; i18++) {
          b_A->data[b_A->size[0] * i18] = A->data[i18 + A->size[0] * i];
        }

        i18 = r14->size[0] * r14->size[1];
        r14->size[0] = c_A->size[0];
        r14->size[1] = b_A->size[1];
        emxEnsureCapacity(&st, (emxArray__common *)r14, i18, (int32_T)sizeof
                          (real_T), &ob_emlrtRTEI);
        b_loop_ub = c_A->size[0];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          c_loop_ub = b_A->size[1];
          for (i19 = 0; i19 < c_loop_ub; i19++) {
            r14->data[i18 + r14->size[0] * i19] = c_A->data[i18] * b_A->data
              [b_A->size[0] * i19];
          }
        }

        for (i18 = 0; i18 < 2; i18++) {
          b_a[i18] = a->size[i18];
        }

        for (i18 = 0; i18 < 2; i18++) {
          iv38[i18] = r14->size[i18];
        }

        emlrtSizeEqCheck2DFastR2012b(b_a, iv38, &k_emlrtECI, &st);
        b_loop_ub = P->size[0];
        i18 = r13->size[0];
        r13->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r13, i18, (int32_T)sizeof
                          (int32_T), &ob_emlrtRTEI);
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          r13->data[i18] = i18;
        }

        i18 = P->size[1];
        i19 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i19, 1, i18, &gb_emlrtBCI, &st);
        b_st.site = &kc_emlrtRSI;
        i18 = a->size[0] * a->size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)a, i18, (int32_T)sizeof
                          (real_T), &ob_emlrtRTEI);
        c_a = a->size[0];
        d_a = a->size[1];
        b_loop_ub = c_a * d_a;
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          a->data[i18] -= r14->data[i18];
        }

        b_loop_ub = G->size[0];
        i18 = G->size[1];
        i19 = 1 + i;
        i18 = emlrtDynamicBoundsCheckFastR2012b(i19, 1, i18, &fb_emlrtBCI, &b_st);
        i19 = b->size[0];
        b->size[0] = b_loop_ub;
        emxEnsureCapacity(&b_st, (emxArray__common *)b, i19, (int32_T)sizeof
                          (real_T), &ob_emlrtRTEI);
        for (i19 = 0; i19 < b_loop_ub; i19++) {
          b->data[i19] = G->data[i19 + G->size[0] * (i18 - 1)];
        }

        c_st.site = &eb_emlrtRSI;
        i18 = G->size[0];
        if (!(a->size[1] == i18)) {
          guard2 = false;
          if ((a->size[0] == 1) && (a->size[1] == 1)) {
            guard2 = true;
          } else {
            i18 = G->size[0];
            if (i18 == 1) {
              guard2 = true;
            } else {
              emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
              y = NULL;
              m9 = emlrtCreateCharArray(2, iv39);
              for (b_i = 0; b_i < 21; b_i++) {
                cv40[b_i] = cv41[b_i];
              }

              emlrtInitCharArrayR2013a(&c_st, 21, m9, cv40);
              emlrtAssign(&y, m9);
              d_st.site = &kd_emlrtRSI;
              e_st.site = &vd_emlrtRSI;
              error(&d_st, b_message(&e_st, y, &i_emlrtMCI), &j_emlrtMCI);
            }
          }

          if (guard2) {
            emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
            b_y = NULL;
            m9 = emlrtCreateCharArray(2, iv40);
            for (b_i = 0; b_i < 45; b_i++) {
              cv42[b_i] = cv43[b_i];
            }

            emlrtInitCharArrayR2013a(&c_st, 45, m9, cv42);
            emlrtAssign(&b_y, m9);
            d_st.site = &jd_emlrtRSI;
            e_st.site = &ud_emlrtRSI;
            error(&d_st, b_message(&e_st, b_y, &g_emlrtMCI), &h_emlrtMCI);
          }
        }

        guard1 = false;
        if (a->size[1] == 1) {
          guard1 = true;
        } else {
          i18 = G->size[0];
          if (i18 == 1) {
            guard1 = true;
          } else {
            b_unnamed_idx_0 = (uint32_T)a->size[0];
            c_st.site = &db_emlrtRSI;
            d_st.site = &fb_emlrtRSI;
            i18 = C->size[0];
            C->size[0] = (int32_T)b_unnamed_idx_0;
            emxEnsureCapacity(&d_st, (emxArray__common *)C, i18, (int32_T)sizeof
                              (real_T), &ob_emlrtRTEI);
            b_loop_ub = (int32_T)b_unnamed_idx_0;
            for (i18 = 0; i18 < b_loop_ub; i18++) {
              C->data[i18] = 0.0;
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
          i18 = C->size[0];
          C->size[0] = a->size[0];
          emxEnsureCapacity(&b_st, (emxArray__common *)C, i18, (int32_T)sizeof
                            (real_T), &ob_emlrtRTEI);
          b_loop_ub = a->size[0];
          for (i18 = 0; i18 < b_loop_ub; i18++) {
            C->data[i18] = 0.0;
            c_loop_ub = a->size[1];
            for (i19 = 0; i19 < c_loop_ub; i19++) {
              C->data[i18] += a->data[i18 + a->size[0] * i19] * b->data[i19];
            }
          }
        }

        iv41[0] = r13->size[0];
        emlrtSubAssignSizeCheckR2012b(iv41, 1, *(int32_T (*)[1])C->size, 1,
          &l_emlrtECI, &st);
        b_loop_ub = C->size[0];
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          P->data[r13->data[i18] + P->size[0] * i] = C->data[i18];
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
      emxFree_real_T(&r14);
      emxFree_int32_T(&r13);
      emxFree_real_T(&b);
      emxFree_real_T(&C);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (projectT.c) */
