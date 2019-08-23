/*
 * logmapPSRi.c
 *
 * Code generation for function 'logmapPSRi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedPX.h"
#include "logmapPSRi.h"
#include "EstimatedPX_emxutil.h"
#include "logmapSRi.h"
#include "eml_int_forloop_overflow_check.h"
#include "EstimatedPX_data.h"

/* Variable Definitions */
static emlrtRSInfo e_emlrtRSI = { 15, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRSInfo f_emlrtRSI = { 16, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRSInfo g_emlrtRSI = { 17, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRSInfo h_emlrtRSI = { 22, "squeeze",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/squeeze.m" };

static emlrtRSInfo j_emlrtRSI = { 52, "squeeze",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/squeeze.m" };

static emlrtRTEInfo o_emlrtRTEI = { 1, 15, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRTEInfo p_emlrtRTEI = { 21, 5, "squeeze",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/squeeze.m" };

static emlrtRTEInfo q_emlrtRTEI = { 51, 1, "squeeze",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/squeeze.m" };

static emlrtRTEInfo r_emlrtRTEI = { 16, 5, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtRTEInfo s_emlrtRTEI = { 15, 5, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 15, 21, "X", "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m", 0
};

static emlrtBCInfo f_emlrtBCI = { -1, -1, 16, 22, "YY", "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m", 0
};

static emlrtBCInfo g_emlrtBCI = { -1, -1, 17, 10, "VV", "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m", 0
};

static emlrtECInfo b_emlrtECI = { -1, 17, 5, "logmapPSRi",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/logmapPSRi.m" };

/* Function Declarations */
static int32_T div_nzp_s32_floor(int32_T numerator, int32_T denominator);

/* Function Definitions */
static int32_T div_nzp_s32_floor(int32_T numerator, int32_T denominator)
{
  int32_T quotient;
  uint32_T absNumerator;
  uint32_T absDenominator;
  boolean_T quotientNeedsNegation;
  uint32_T tempAbsQuotient;
  if (numerator >= 0) {
    absNumerator = (uint32_T)numerator;
  } else {
    absNumerator = (uint32_T)-numerator;
  }

  if (denominator >= 0) {
    absDenominator = (uint32_T)denominator;
  } else {
    absDenominator = (uint32_T)-denominator;
  }

  quotientNeedsNegation = ((numerator < 0) != (denominator < 0));
  tempAbsQuotient = absNumerator / absDenominator;
  if (quotientNeedsNegation) {
    absNumerator %= absDenominator;
    if (absNumerator > 0U) {
      tempAbsQuotient++;
    }
  }

  if (quotientNeedsNegation) {
    quotient = -(int32_T)tempAbsQuotient;
  } else {
    quotient = (int32_T)tempAbsQuotient;
  }

  return quotient;
}

void logmapPSRi(const emlrtStack *sp, const emxArray_real_T *X, const
                emxArray_real_T *YY, emxArray_real_T *VV)
{
  uint32_T uv1[3];
  int32_T ub_loop;
  int32_T loop_ub;
  int32_T i;
  emxArray_real_T *r3;
  emxArray_int32_T *r4;
  emxArray_int32_T *r5;
  emxArray_real_T *x;
  emxArray_real_T *Y;
  int32_T i3;
  int32_T i4;
  int32_T b;
  boolean_T overflow;
  int32_T k;
  boolean_T exitg1;
  boolean_T b1;
  int32_T sqsz[3];
  int32_T j;
  boolean_T b2;
  int32_T b_loop_ub;
  int32_T iv5[3];
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
                    &o_emlrtRTEI);
  ub_loop = VV->size[0] * VV->size[1] * VV->size[2];
  VV->size[1] = (int32_T)uv1[1];
  emxEnsureCapacity(sp, (emxArray__common *)VV, ub_loop, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  ub_loop = VV->size[0] * VV->size[1] * VV->size[2];
  VV->size[2] = (int32_T)uv1[2];
  emxEnsureCapacity(sp, (emxArray__common *)VV, ub_loop, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
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
 private(r3,r4,r5,x,Y,i3,i4,b,overflow,k,exitg1,b1,b_loop_ub,unnamed_idx_0,unnamed_idx_2,j,b2,emlrtJBEnviron) \
 firstprivate(st,b_st,c_st,d_st,iv5,emlrtHadParallelError,sqsz)

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
      emxInit_real_T(&st, &r3, 2, &o_emlrtRTEI, true);
      emxInit_int32_T(&st, &r4, 1, &o_emlrtRTEI, true);
      emxInit_int32_T(&st, &r5, 1, &o_emlrtRTEI, true);
      c_emxInit_real_T(&st, &x, 1, &s_emlrtRTEI, true);
      emxInit_real_T(&st, &Y, 2, &r_emlrtRTEI, true);
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
        b_st.site = &e_emlrtRSI;
        i3 = X->size[1];
        i4 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &e_emlrtBCI, &b_st);
        i3 = X->size[0];
        i4 = x->size[0];
        x->size[0] = i3;
        emxEnsureCapacity(&b_st, (emxArray__common *)x, i4, (int32_T)sizeof
                          (real_T), &p_emlrtRTEI);
        b = X->size[0];
        c_st.site = &h_emlrtRSI;
        i3 = X->size[0];
        if (1 > i3) {
          overflow = false;
        } else {
          i3 = X->size[0];
          overflow = (i3 > 2147483646);
        }

        if (overflow) {
          d_st.site = &i_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (k = 0; k + 1 <= b; k++) {
          x->data[k] = X->data[k + X->size[0] * i];
        }

        b_st.site = &f_emlrtRSI;
        i3 = YY->size[1];
        i4 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &f_emlrtBCI, &b_st);
        k = 3;
        exitg1 = false;
        while ((!exitg1) && (k > 2)) {
          i3 = YY->size[2];
          if (i3 == 1) {
            k = 2;
          } else {
            exitg1 = true;
          }
        }

        if (k <= 2) {
          i3 = YY->size[0];
          i4 = Y->size[0] * Y->size[1];
          Y->size[0] = i3;
          Y->size[1] = 1;
          emxEnsureCapacity(&b_st, (emxArray__common *)Y, i4, (int32_T)sizeof
                            (real_T), &p_emlrtRTEI);
          i3 = YY->size[0];
          i4 = YY->size[2];
          b = i3 * i4;
          c_st.site = &h_emlrtRSI;
          if (1 > b) {
            b1 = false;
          } else {
            b1 = (b > 2147483646);
          }

          if (b1) {
            d_st.site = &i_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          for (k = 0; k + 1 <= b; k++) {
            i3 = YY->size[0];
            Y->data[k] = YY->data[(k % i3 + YY->size[0] * i) + YY->size[0] *
              YY->size[1] * div_nzp_s32_floor(k, i3)];
          }
        } else {
          for (i3 = 0; i3 < 3; i3++) {
            sqsz[i3] = 1;
          }

          j = 0;
          i3 = YY->size[0];
          if (i3 != 1) {
            i3 = YY->size[0];
            sqsz[0] = i3;
            j = 1;
          }

          i3 = YY->size[2];
          if (i3 != 1) {
            i3 = YY->size[2];
            sqsz[j] = i3;
          }

          i3 = Y->size[0] * Y->size[1];
          Y->size[0] = sqsz[0];
          Y->size[1] = sqsz[1];
          emxEnsureCapacity(&b_st, (emxArray__common *)Y, i3, (int32_T)sizeof
                            (real_T), &q_emlrtRTEI);
          i3 = YY->size[0];
          i4 = YY->size[2];
          b = i3 * i4;
          c_st.site = &j_emlrtRSI;
          if (1 > b) {
            b2 = false;
          } else {
            b2 = (b > 2147483646);
          }

          if (b2) {
            d_st.site = &i_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          for (k = 0; k + 1 <= b; k++) {
            i3 = YY->size[0];
            Y->data[k] = YY->data[(k % i3 + YY->size[0] * i) + YY->size[0] *
              YY->size[1] * div_nzp_s32_floor(k, i3)];
          }
        }

        b_loop_ub = VV->size[0];
        i3 = r5->size[0];
        r5->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r5, i3, (int32_T)sizeof
                          (int32_T), &o_emlrtRTEI);
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          r5->data[i3] = i3;
        }

        i3 = VV->size[1];
        i4 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &g_emlrtBCI, &st);
        b_loop_ub = VV->size[2];
        i3 = r4->size[0];
        r4->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r4, i3, (int32_T)sizeof
                          (int32_T), &o_emlrtRTEI);
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          r4->data[i3] = i3;
        }

        b_st.site = &g_emlrtRSI;
        logmapSRi(&b_st, x, Y, r3);
        iv5[0] = r5->size[0];
        iv5[1] = 1;
        iv5[2] = r4->size[0];
        emlrtSubAssignSizeCheckR2012b(iv5, 3, *(int32_T (*)[2])r3->size, 2,
          &b_emlrtECI, &st);
        unnamed_idx_0 = r5->size[0];
        unnamed_idx_2 = r4->size[0];
        for (i3 = 0; i3 < unnamed_idx_2; i3++) {
          for (i4 = 0; i4 < unnamed_idx_0; i4++) {
            VV->data[(r5->data[i4] + VV->size[0] * i) + VV->size[0] * VV->size[1]
              * r4->data[i3]] = r3->data[i4 + unnamed_idx_0 * i3];
          }
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      } else {
        emlrtHadParallelError = true;
      }
    }

    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 5);
      emxFree_real_T(&Y);
      emxFree_real_T(&x);
      emxFree_int32_T(&r5);
      emxFree_int32_T(&r4);
      emxFree_real_T(&r3);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (logmapPSRi.c) */
