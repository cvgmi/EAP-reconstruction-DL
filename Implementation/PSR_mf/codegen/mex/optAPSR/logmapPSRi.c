/*
 * logmapPSRi.c
 *
 * Code generation for function 'logmapPSRi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR.h"
#include "logmapPSRi.h"
#include "optAPSR_emxutil.h"
#include "logmapSRi.h"
#include "squeeze.h"
#include "eml_int_forloop_overflow_check.h"
#include "optAPSR_data.h"

/* Variable Definitions */
static emlrtRSInfo j_emlrtRSI = { 15, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRSInfo k_emlrtRSI = { 16, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRSInfo l_emlrtRSI = { 17, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRTEInfo y_emlrtRTEI = { 1, 15, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRTEInfo bb_emlrtRTEI = { 16, 5, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 15, 5, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 15, 21, "X", "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m", 0
};

static emlrtBCInfo m_emlrtBCI = { -1, -1, 16, 22, "YY", "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m", 0
};

static emlrtBCInfo n_emlrtBCI = { -1, -1, 17, 10, "VV", "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m", 0
};

static emlrtECInfo d_emlrtECI = { -1, 17, 5, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

/* Function Definitions */
void logmapPSRi(const emlrtStack *sp, const emxArray_real_T *X, const
                emxArray_real_T *YY, emxArray_real_T *VV)
{
  uint32_T uv0[3];
  int32_T ub_loop;
  int32_T loop_ub;
  int32_T i;
  emxArray_real_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_real_T *b_YY;
  emxArray_real_T *x;
  emxArray_real_T *Y;
  int32_T i7;
  int32_T i8;
  int32_T b;
  boolean_T overflow;
  int32_T k;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i9;
  int32_T iv14[3];
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_2;
  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  jmp_buf emlrtJBEnviron;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  boolean_T emlrtHadParallelError = false;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  compute the log map on the product space of spheres log_X(Y) */
  /*  Input: */
  /*      X - d-by-N matrices, a point in the product space */
  /*      YY - d-by-N-by-m matrices, m points in the product space  */
  /*  Output: */
  /*      V - logmap of each d-by-N matrix in Y (d-by-N-m matrix) */
  for (ub_loop = 0; ub_loop < 3; ub_loop++) {
    uv0[ub_loop] = (uint32_T)YY->size[ub_loop];
  }

  ub_loop = VV->size[0] * VV->size[1] * VV->size[2];
  VV->size[0] = (int32_T)uv0[0];
  emxEnsureCapacity(sp, (emxArray__common *)VV, ub_loop, (int32_T)sizeof(real_T),
                    &y_emlrtRTEI);
  ub_loop = VV->size[0] * VV->size[1] * VV->size[2];
  VV->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)VV, ub_loop, (int32_T)sizeof(real_T),
                    &y_emlrtRTEI);
  ub_loop = VV->size[0] * VV->size[1] * VV->size[2];
  VV->size[2] = (int32_T)uv0[2];
  emxEnsureCapacity(sp, (emxArray__common *)VV, ub_loop, (int32_T)sizeof(real_T),
                    &y_emlrtRTEI);
  loop_ub = (int32_T)uv0[0] * (int32_T)uv0[1] * (int32_T)uv0[2];
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    VV->data[ub_loop] = 0.0;
  }

  ub_loop = YY->size[1];
  ub_loop--;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(r4,r5,r6,b_YY,x,Y,i7,i8,b,overflow,k,b_loop_ub,c_loop_ub,i9,unnamed_idx_0,unnamed_idx_2,emlrtJBEnviron) \
 firstprivate(st,b_st,c_st,d_st,iv14,emlrtHadParallelError)

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
      emxInit_real_T(&st, &r4, 2, &y_emlrtRTEI, true);
      emxInit_int32_T(&st, &r5, 1, &y_emlrtRTEI, true);
      emxInit_int32_T(&st, &r6, 1, &y_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b_YY, 3, &y_emlrtRTEI, true);
      c_emxInit_real_T(&st, &x, 1, &cb_emlrtRTEI, true);
      emxInit_real_T(&st, &Y, 2, &bb_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (i = 0; i <= ub_loop; i++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {
        /*  do logmap for each column of X (d-by-1 vector) and the corresponding */
        /*  columns in YY */
        b_st.site = &j_emlrtRSI;
        i7 = X->size[1];
        i8 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i8, 1, i7, &l_emlrtBCI, &b_st);
        i7 = X->size[0];
        i8 = x->size[0];
        x->size[0] = i7;
        emxEnsureCapacity(&b_st, (emxArray__common *)x, i8, (int32_T)sizeof
                          (real_T), &ab_emlrtRTEI);
        b = X->size[0];
        c_st.site = &m_emlrtRSI;
        i7 = X->size[0];
        if (1 > i7) {
          overflow = false;
        } else {
          i7 = X->size[0];
          overflow = (i7 > 2147483646);
        }

        if (overflow) {
          d_st.site = &n_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (k = 0; k + 1 <= b; k++) {
          x->data[k] = X->data[k + X->size[0] * i];
        }

        b_loop_ub = YY->size[0];
        c_loop_ub = YY->size[2];
        i7 = YY->size[1];
        i8 = 1 + i;
        i7 = emlrtDynamicBoundsCheckFastR2012b(i8, 1, i7, &m_emlrtBCI, &st);
        i8 = b_YY->size[0] * b_YY->size[1] * b_YY->size[2];
        b_YY->size[0] = b_loop_ub;
        b_YY->size[1] = 1;
        b_YY->size[2] = c_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_YY, i8, (int32_T)sizeof
                          (real_T), &y_emlrtRTEI);
        for (i8 = 0; i8 < c_loop_ub; i8++) {
          for (i9 = 0; i9 < b_loop_ub; i9++) {
            b_YY->data[i9 + b_YY->size[0] * b_YY->size[1] * i8] = YY->data[(i9 +
              YY->size[0] * (i7 - 1)) + YY->size[0] * YY->size[1] * i8];
          }
        }

        b_st.site = &k_emlrtRSI;
        squeeze(&b_st, b_YY, Y);
        b_loop_ub = VV->size[0];
        i7 = r6->size[0];
        r6->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r6, i7, (int32_T)sizeof
                          (int32_T), &y_emlrtRTEI);
        for (i7 = 0; i7 < b_loop_ub; i7++) {
          r6->data[i7] = i7;
        }

        i7 = VV->size[1];
        i8 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i8, 1, i7, &n_emlrtBCI, &st);
        b_loop_ub = VV->size[2];
        i7 = r5->size[0];
        r5->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r5, i7, (int32_T)sizeof
                          (int32_T), &y_emlrtRTEI);
        for (i7 = 0; i7 < b_loop_ub; i7++) {
          r5->data[i7] = i7;
        }

        b_st.site = &l_emlrtRSI;
        logmapSRi(&b_st, x, Y, r4);
        iv14[0] = r6->size[0];
        iv14[1] = 1;
        iv14[2] = r5->size[0];
        emlrtSubAssignSizeCheckR2012b(iv14, 3, *(int32_T (*)[2])r4->size, 2,
          &d_emlrtECI, &st);
        unnamed_idx_0 = r6->size[0];
        unnamed_idx_2 = r5->size[0];
        for (i7 = 0; i7 < unnamed_idx_2; i7++) {
          for (i8 = 0; i8 < unnamed_idx_0; i8++) {
            VV->data[(r6->data[i8] + VV->size[0] * i) + VV->size[0] * VV->size[1]
              * r5->data[i7]] = r4->data[i8 + unnamed_idx_0 * i7];
          }
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      } else {
        emlrtHadParallelError = true;
      }
    }

    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 6);
      emxFree_real_T(&Y);
      emxFree_real_T(&x);
      emxFree_real_T(&b_YY);
      emxFree_int32_T(&r6);
      emxFree_int32_T(&r5);
      emxFree_real_T(&r4);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (logmapPSRi.c) */
