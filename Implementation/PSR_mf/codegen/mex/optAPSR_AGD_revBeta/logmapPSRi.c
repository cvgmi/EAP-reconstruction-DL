/*
 * logmapPSRi.c
 *
 * Code generation for function 'logmapPSRi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD_revBeta.h"
#include "logmapPSRi.h"
#include "optAPSR_AGD_revBeta_emxutil.h"
#include "logmapSRi.h"
#include "squeeze.h"
#include "optAPSR_AGD_revBeta_data.h"

/* Variable Definitions */
static emlrtRSInfo bd_emlrtRSI = { 15, "logmapPSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSRi.m"
};

static emlrtRSInfo cd_emlrtRSI = { 16, "logmapPSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSRi.m"
};

static emlrtRSInfo dd_emlrtRSI = { 17, "logmapPSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSRi.m"
};

static emlrtRTEInfo pb_emlrtRTEI = { 1, 15, "logmapPSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSRi.m"
};

static emlrtRTEInfo qb_emlrtRTEI = { 16, 5, "logmapPSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSRi.m"
};

static emlrtRTEInfo rb_emlrtRTEI = { 15, 5, "logmapPSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSRi.m"
};

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 15, 21, "X", "logmapPSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSRi.m",
  0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 16, 22, "YY", "logmapPSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSRi.m",
  0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 17, 10, "VV", "logmapPSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSRi.m",
  0 };

static emlrtECInfo k_emlrtECI = { -1, 17, 5, "logmapPSRi",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSRi.m"
};

/* Function Definitions */
void logmapPSRi(const emlrtStack *sp, const emxArray_real_T *X, const
                emxArray_real_T *YY, emxArray_real_T *VV)
{
  uint32_T uv1[3];
  int32_T ub_loop;
  int32_T loop_ub;
  int32_T i;
  emxArray_real_T *r10;
  emxArray_int32_T *r11;
  emxArray_int32_T *r12;
  emxArray_real_T *b_YY;
  emxArray_real_T *b_X;
  emxArray_real_T *x;
  emxArray_real_T *Y;
  int32_T b_loop_ub;
  int32_T i17;
  int32_T i18;
  int32_T c_loop_ub;
  int32_T i19;
  int32_T iv42[3];
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_2;
  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  jmp_buf emlrtJBEnviron;
  emlrtStack b_st;
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
                    &pb_emlrtRTEI);
  ub_loop = VV->size[0] * VV->size[1] * VV->size[2];
  VV->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity(sp, (emxArray__common *)VV, ub_loop, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
  ub_loop = VV->size[0] * VV->size[1] * VV->size[2];
  VV->size[2] = (int32_T)uv1[2];
  emxEnsureCapacity(sp, (emxArray__common *)VV, ub_loop, (int32_T)sizeof(real_T),
                    &pb_emlrtRTEI);
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
 private(r10,r11,r12,b_YY,b_X,x,Y,b_loop_ub,i17,i18,c_loop_ub,i19,unnamed_idx_0,unnamed_idx_2,emlrtJBEnviron) \
 firstprivate(st,b_st,iv42,emlrtHadParallelError)

  {
    if (setjmp(emlrtJBEnviron) == 0) {
      st.prev = sp;
      st.tls = emlrtAllocTLS(sp, omp_get_thread_num());
      st.site = NULL;
      emlrtSetJmpBuf(&st, &emlrtJBEnviron);
      b_st.prev = &st;
      b_st.tls = st.tls;
      b_emxInit_real_T(&st, &r10, 2, &pb_emlrtRTEI, true);
      emxInit_int32_T(&st, &r11, 1, &pb_emlrtRTEI, true);
      emxInit_int32_T(&st, &r12, 1, &pb_emlrtRTEI, true);
      emxInit_real_T(&st, &b_YY, 3, &pb_emlrtRTEI, true);
      c_emxInit_real_T(&st, &b_X, 1, &pb_emlrtRTEI, true);
      c_emxInit_real_T(&st, &x, 1, &rb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &Y, 2, &qb_emlrtRTEI, true);
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
        b_loop_ub = X->size[0];
        i17 = X->size[1];
        i18 = 1 + i;
        i17 = emlrtDynamicBoundsCheckFastR2012b(i18, 1, i17, &ab_emlrtBCI, &st);
        i18 = b_X->size[0];
        b_X->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_X, i18, (int32_T)sizeof
                          (real_T), &pb_emlrtRTEI);
        for (i18 = 0; i18 < b_loop_ub; i18++) {
          b_X->data[i18] = X->data[i18 + X->size[0] * (i17 - 1)];
        }

        b_st.site = &bd_emlrtRSI;
        b_squeeze(&b_st, b_X, x);
        b_loop_ub = YY->size[0];
        c_loop_ub = YY->size[2];
        i17 = YY->size[1];
        i18 = 1 + i;
        i17 = emlrtDynamicBoundsCheckFastR2012b(i18, 1, i17, &bb_emlrtBCI, &st);
        i18 = b_YY->size[0] * b_YY->size[1] * b_YY->size[2];
        b_YY->size[0] = b_loop_ub;
        b_YY->size[1] = 1;
        b_YY->size[2] = c_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_YY, i18, (int32_T)sizeof
                          (real_T), &pb_emlrtRTEI);
        for (i18 = 0; i18 < c_loop_ub; i18++) {
          for (i19 = 0; i19 < b_loop_ub; i19++) {
            b_YY->data[i19 + b_YY->size[0] * b_YY->size[1] * i18] = YY->data
              [(i19 + YY->size[0] * (i17 - 1)) + YY->size[0] * YY->size[1] * i18];
          }
        }

        b_st.site = &cd_emlrtRSI;
        squeeze(&b_st, b_YY, Y);
        b_loop_ub = VV->size[0];
        i17 = r12->size[0];
        r12->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r12, i17, (int32_T)sizeof
                          (int32_T), &pb_emlrtRTEI);
        for (i17 = 0; i17 < b_loop_ub; i17++) {
          r12->data[i17] = i17;
        }

        i17 = VV->size[1];
        i18 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i18, 1, i17, &cb_emlrtBCI, &st);
        b_loop_ub = VV->size[2];
        i17 = r11->size[0];
        r11->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r11, i17, (int32_T)sizeof
                          (int32_T), &pb_emlrtRTEI);
        for (i17 = 0; i17 < b_loop_ub; i17++) {
          r11->data[i17] = i17;
        }

        b_st.site = &dd_emlrtRSI;
        logmapSRi(&b_st, x, Y, r10);
        iv42[0] = r12->size[0];
        iv42[1] = 1;
        iv42[2] = r11->size[0];
        emlrtSubAssignSizeCheckR2012b(iv42, 3, *(int32_T (*)[2])r10->size, 2,
          &k_emlrtECI, &st);
        unnamed_idx_0 = r12->size[0];
        unnamed_idx_2 = r11->size[0];
        for (i17 = 0; i17 < unnamed_idx_2; i17++) {
          for (i18 = 0; i18 < unnamed_idx_0; i18++) {
            VV->data[(r12->data[i18] + VV->size[0] * i) + VV->size[0] * VV->
              size[1] * r11->data[i17]] = r10->data[i18 + unnamed_idx_0 * i17];
          }
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      } else {
        emlrtHadParallelError = true;
      }
    }

    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 7);
      emxFree_real_T(&Y);
      emxFree_real_T(&x);
      emxFree_real_T(&b_X);
      emxFree_real_T(&b_YY);
      emxFree_int32_T(&r12);
      emxFree_int32_T(&r11);
      emxFree_real_T(&r10);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (logmapPSRi.c) */
