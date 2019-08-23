/*
 * logmapPSRi.c
 *
 * Code generation for function 'logmapPSRi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "logmapPSRi.h"
#include "optAPSR_sigma_emxutil.h"
#include "logmapSRi.h"
#include "squeeze.h"
#include "eml_int_forloop_overflow_check.h"
#include "optAPSR_sigma_data.h"

/* Variable Definitions */
static emlrtRSInfo ad_emlrtRSI = { 15, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRSInfo bd_emlrtRSI = { 16, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRSInfo cd_emlrtRSI = { 17, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRTEInfo wb_emlrtRTEI = { 1, 15, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRTEInfo xb_emlrtRTEI = { 16, 5, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRTEInfo yb_emlrtRTEI = { 15, 5, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 15, 21, "X", "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m", 0
};

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 16, 22, "YY", "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m", 0
};

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 17, 10, "VV", "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m", 0
};

static emlrtECInfo n_emlrtECI = { -1, 17, 5, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

/* Function Definitions */
void logmapPSRi(const emlrtStack *sp, const emxArray_real_T *X, const
                emxArray_real_T *YY, emxArray_real_T *VV)
{
  uint32_T uv1[3];
  int32_T ub_loop;
  int32_T loop_ub;
  int32_T i;
  emxArray_real_T *r18;
  emxArray_int32_T *r19;
  emxArray_int32_T *r20;
  emxArray_real_T *b_YY;
  emxArray_real_T *x;
  emxArray_real_T *Y;
  int32_T i26;
  int32_T i27;
  int32_T b;
  boolean_T overflow;
  int32_T k;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i28;
  int32_T iv53[3];
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
    uv1[ub_loop] = (uint32_T)YY->size[ub_loop];
  }

  ub_loop = VV->size[0] * VV->size[1] * VV->size[2];
  VV->size[0] = (int32_T)uv1[0];
  emxEnsureCapacity(sp, (emxArray__common *)VV, ub_loop, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  ub_loop = VV->size[0] * VV->size[1] * VV->size[2];
  VV->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity(sp, (emxArray__common *)VV, ub_loop, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  ub_loop = VV->size[0] * VV->size[1] * VV->size[2];
  VV->size[2] = (int32_T)uv1[2];
  emxEnsureCapacity(sp, (emxArray__common *)VV, ub_loop, (int32_T)sizeof(real_T),
                    &wb_emlrtRTEI);
  loop_ub = (int32_T)uv1[0] * (int32_T)uv1[1] * (int32_T)uv1[2];
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    VV->data[ub_loop] = 0.0;
  }

  ub_loop = YY->size[1];
  ub_loop--;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(r18,r19,r20,b_YY,x,Y,i26,i27,b,overflow,k,b_loop_ub,c_loop_ub,i28,unnamed_idx_0,unnamed_idx_2,emlrtJBEnviron) \
 firstprivate(st,b_st,c_st,d_st,iv53,emlrtHadParallelError)

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
      emxInit_real_T(&st, &r18, 2, &wb_emlrtRTEI, true);
      emxInit_int32_T(&st, &r19, 1, &wb_emlrtRTEI, true);
      emxInit_int32_T(&st, &r20, 1, &wb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b_YY, 3, &wb_emlrtRTEI, true);
      c_emxInit_real_T(&st, &x, 1, &yb_emlrtRTEI, true);
      emxInit_real_T(&st, &Y, 2, &xb_emlrtRTEI, true);
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
        b_st.site = &ad_emlrtRSI;
        i26 = X->size[1];
        i27 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i27, 1, i26, &kb_emlrtBCI, &b_st);
        i26 = X->size[0];
        i27 = x->size[0];
        x->size[0] = i26;
        emxEnsureCapacity(&b_st, (emxArray__common *)x, i27, (int32_T)sizeof
                          (real_T), &m_emlrtRTEI);
        b = X->size[0];
        c_st.site = &j_emlrtRSI;
        i26 = X->size[0];
        if (1 > i26) {
          overflow = false;
        } else {
          i26 = X->size[0];
          overflow = (i26 > 2147483646);
        }

        if (overflow) {
          d_st.site = &l_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (k = 0; k + 1 <= b; k++) {
          x->data[k] = X->data[k + X->size[0] * i];
        }

        b_loop_ub = YY->size[0];
        c_loop_ub = YY->size[2];
        i26 = YY->size[1];
        i27 = 1 + i;
        i26 = emlrtDynamicBoundsCheckFastR2012b(i27, 1, i26, &lb_emlrtBCI, &st);
        i27 = b_YY->size[0] * b_YY->size[1] * b_YY->size[2];
        b_YY->size[0] = b_loop_ub;
        b_YY->size[1] = 1;
        b_YY->size[2] = c_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_YY, i27, (int32_T)sizeof
                          (real_T), &wb_emlrtRTEI);
        for (i27 = 0; i27 < c_loop_ub; i27++) {
          for (i28 = 0; i28 < b_loop_ub; i28++) {
            b_YY->data[i28 + b_YY->size[0] * b_YY->size[1] * i27] = YY->data
              [(i28 + YY->size[0] * (i26 - 1)) + YY->size[0] * YY->size[1] * i27];
          }
        }

        b_st.site = &bd_emlrtRSI;
        squeeze(&b_st, b_YY, Y);
        b_loop_ub = VV->size[0];
        i26 = r20->size[0];
        r20->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r20, i26, (int32_T)sizeof
                          (int32_T), &wb_emlrtRTEI);
        for (i26 = 0; i26 < b_loop_ub; i26++) {
          r20->data[i26] = i26;
        }

        i26 = VV->size[1];
        i27 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i27, 1, i26, &mb_emlrtBCI, &st);
        b_loop_ub = VV->size[2];
        i26 = r19->size[0];
        r19->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r19, i26, (int32_T)sizeof
                          (int32_T), &wb_emlrtRTEI);
        for (i26 = 0; i26 < b_loop_ub; i26++) {
          r19->data[i26] = i26;
        }

        b_st.site = &cd_emlrtRSI;
        logmapSRi(&b_st, x, Y, r18);
        iv53[0] = r20->size[0];
        iv53[1] = 1;
        iv53[2] = r19->size[0];
        emlrtSubAssignSizeCheckR2012b(iv53, 3, *(int32_T (*)[2])r18->size, 2,
          &n_emlrtECI, &st);
        unnamed_idx_0 = r20->size[0];
        unnamed_idx_2 = r19->size[0];
        for (i26 = 0; i26 < unnamed_idx_2; i26++) {
          for (i27 = 0; i27 < unnamed_idx_0; i27++) {
            VV->data[(r20->data[i27] + VV->size[0] * i) + VV->size[0] * VV->
              size[1] * r19->data[i26]] = r18->data[i27 + unnamed_idx_0 * i26];
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
      emxFree_int32_T(&r20);
      emxFree_int32_T(&r19);
      emxFree_real_T(&r18);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (logmapPSRi.c) */
