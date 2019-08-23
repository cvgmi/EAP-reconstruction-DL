/*
 * gradientAPSR.c
 *
 * Code generation for function 'gradientAPSR'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "gradientAPSR.h"
#include "optAPSR_sigma_emxutil.h"
#include "gradientASR.h"
#include "squeeze.h"
#include "optAPSR_sigma_data.h"

/* Variable Definitions */
static emlrtRSInfo g_emlrtRSI = { 17, "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m"
};

static emlrtRSInfo h_emlrtRSI = { 18, "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m"
};

static emlrtRSInfo i_emlrtRSI = { 19, "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 1, 18, "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 18, 5, "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m"
};

static emlrtRTEInfo u_emlrtRTEI = { 17, 5, "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m"
};

static emlrtBCInfo h_emlrtBCI = { -1, -1, 17, 22, "AA", "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 18, 22, "XX", "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m",
  0 };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 19, 13, "gradA", "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m",
  0 };

static emlrtECInfo c_emlrtECI = { -1, 19, 5, "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m"
};

/* Function Definitions */
void gradientAPSR(const emlrtStack *sp, const emxArray_real_T *XX, const
                  emxArray_real_T *W, const emxArray_real_T *AA, emxArray_real_T
                  *gradA)
{
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  uint32_T unnamed_idx_2;
  int32_T ub_loop;
  int32_T loop_ub;
  int32_T i;
  emxArray_real_T *r5;
  emxArray_int32_T *r6;
  emxArray_int32_T *r7;
  emxArray_real_T *b_XX;
  emxArray_real_T *b_AA;
  emxArray_real_T *A;
  emxArray_real_T *X;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  int32_T iv10[3];
  int32_T b_unnamed_idx_0;
  int32_T b_unnamed_idx_2;
  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  jmp_buf emlrtJBEnviron;
  emlrtStack b_st;
  boolean_T emlrtHadParallelError = false;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  compute the gradient with respect to A */
  /*  Input: */
  /*      XX - input square root density data (d-by-N-by-n) */
  /*      W - coefficient matrix (m-by-n) */
  /*      AA - initial atoms in dictionary (d-by-N-by-m) */
  /*  Output: */
  /*      gradA - the gradient with respect to A (d-by-N-by-m) */
  /* % Initialization */
  unnamed_idx_0 = (uint32_T)AA->size[0];
  unnamed_idx_1 = (uint32_T)AA->size[1];
  unnamed_idx_2 = (uint32_T)AA->size[2];
  ub_loop = gradA->size[0] * gradA->size[1] * gradA->size[2];
  gradA->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)gradA, ub_loop, (int32_T)sizeof
                    (real_T), &s_emlrtRTEI);
  ub_loop = gradA->size[0] * gradA->size[1] * gradA->size[2];
  gradA->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)gradA, ub_loop, (int32_T)sizeof
                    (real_T), &s_emlrtRTEI);
  ub_loop = gradA->size[0] * gradA->size[1] * gradA->size[2];
  gradA->size[2] = (int32_T)unnamed_idx_2;
  emxEnsureCapacity(sp, (emxArray__common *)gradA, ub_loop, (int32_T)sizeof
                    (real_T), &s_emlrtRTEI);
  loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1 * (int32_T)
    unnamed_idx_2;
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    gradA->data[ub_loop] = 0.0;
  }

  ub_loop = AA->size[1];
  ub_loop--;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(r5,r6,r7,b_XX,b_AA,A,X,b_loop_ub,c_loop_ub,i6,i7,i8,b_unnamed_idx_0,b_unnamed_idx_2,emlrtJBEnviron) \
 firstprivate(st,b_st,iv10,emlrtHadParallelError)

  {
    if (setjmp(emlrtJBEnviron) == 0) {
      st.prev = sp;
      st.tls = emlrtAllocTLS(sp, omp_get_thread_num());
      st.site = NULL;
      emlrtSetJmpBuf(&st, &emlrtJBEnviron);
      b_st.prev = &st;
      b_st.tls = st.tls;
      emxInit_real_T(&st, &r5, 2, &s_emlrtRTEI, true);
      emxInit_int32_T(&st, &r6, 1, &s_emlrtRTEI, true);
      emxInit_int32_T(&st, &r7, 1, &s_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b_XX, 3, &s_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b_AA, 3, &s_emlrtRTEI, true);
      emxInit_real_T(&st, &A, 2, &u_emlrtRTEI, true);
      emxInit_real_T(&st, &X, 2, &t_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (i = 0; i <= ub_loop; i++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {
        /* % for each N SR components */
        b_loop_ub = AA->size[0];
        c_loop_ub = AA->size[2];
        i6 = AA->size[1];
        i7 = 1 + i;
        i6 = emlrtDynamicBoundsCheckFastR2012b(i7, 1, i6, &h_emlrtBCI, &st);
        i7 = b_AA->size[0] * b_AA->size[1] * b_AA->size[2];
        b_AA->size[0] = b_loop_ub;
        b_AA->size[1] = 1;
        b_AA->size[2] = c_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_AA, i7, (int32_T)sizeof
                          (real_T), &s_emlrtRTEI);
        for (i7 = 0; i7 < c_loop_ub; i7++) {
          for (i8 = 0; i8 < b_loop_ub; i8++) {
            b_AA->data[i8 + b_AA->size[0] * b_AA->size[1] * i7] = AA->data[(i8 +
              AA->size[0] * (i6 - 1)) + AA->size[0] * AA->size[1] * i7];
          }
        }

        b_st.site = &g_emlrtRSI;
        squeeze(&b_st, b_AA, A);
        b_loop_ub = XX->size[0];
        c_loop_ub = XX->size[2];
        i6 = XX->size[1];
        i7 = 1 + i;
        i6 = emlrtDynamicBoundsCheckFastR2012b(i7, 1, i6, &i_emlrtBCI, &st);
        i7 = b_XX->size[0] * b_XX->size[1] * b_XX->size[2];
        b_XX->size[0] = b_loop_ub;
        b_XX->size[1] = 1;
        b_XX->size[2] = c_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_XX, i7, (int32_T)sizeof
                          (real_T), &s_emlrtRTEI);
        for (i7 = 0; i7 < c_loop_ub; i7++) {
          for (i8 = 0; i8 < b_loop_ub; i8++) {
            b_XX->data[i8 + b_XX->size[0] * b_XX->size[1] * i7] = XX->data[(i8 +
              XX->size[0] * (i6 - 1)) + XX->size[0] * XX->size[1] * i7];
          }
        }

        b_st.site = &h_emlrtRSI;
        squeeze(&b_st, b_XX, X);
        b_loop_ub = gradA->size[0];
        i6 = r7->size[0];
        r7->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r7, i6, (int32_T)sizeof
                          (int32_T), &s_emlrtRTEI);
        for (i6 = 0; i6 < b_loop_ub; i6++) {
          r7->data[i6] = i6;
        }

        i6 = gradA->size[1];
        i7 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i7, 1, i6, &j_emlrtBCI, &st);
        b_loop_ub = gradA->size[2];
        i6 = r6->size[0];
        r6->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r6, i6, (int32_T)sizeof
                          (int32_T), &s_emlrtRTEI);
        for (i6 = 0; i6 < b_loop_ub; i6++) {
          r6->data[i6] = i6;
        }

        b_st.site = &i_emlrtRSI;
        gradientASR(&b_st, X, W, A, r5);
        iv10[0] = r7->size[0];
        iv10[1] = 1;
        iv10[2] = r6->size[0];
        emlrtSubAssignSizeCheckR2012b(iv10, 3, *(int32_T (*)[2])r5->size, 2,
          &c_emlrtECI, &st);
        b_unnamed_idx_0 = r7->size[0];
        b_unnamed_idx_2 = r6->size[0];
        for (i6 = 0; i6 < b_unnamed_idx_2; i6++) {
          for (i7 = 0; i7 < b_unnamed_idx_0; i7++) {
            gradA->data[(r7->data[i7] + gradA->size[0] * i) + gradA->size[0] *
              gradA->size[1] * r6->data[i6]] = r5->data[i7 + b_unnamed_idx_0 *
              i6];
          }
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      } else {
        emlrtHadParallelError = true;
      }
    }

    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 7);
      emxFree_real_T(&X);
      emxFree_real_T(&A);
      emxFree_real_T(&b_AA);
      emxFree_real_T(&b_XX);
      emxFree_int32_T(&r7);
      emxFree_int32_T(&r6);
      emxFree_real_T(&r5);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (gradientAPSR.c) */
