/*
 * optAPSR_sigma.c
 *
 * Code generation for function 'optAPSR_sigma'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "power.h"
#include "eml_error.h"
#include "optAPSR_sigma_emxutil.h"
#include "projectT.h"
#include "squeeze.h"
#include "eml_int_forloop_overflow_check.h"
#include "expmapPSR.h"
#include "objPSR.h"
#include "gradientAPSR.h"
#include "optAPSR_sigma_mexutil.h"
#include "optAPSR_sigma_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 30, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtRSInfo b_emlrtRSI = { 32, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtRSInfo c_emlrtRSI = { 40, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtRSInfo d_emlrtRSI = { 41, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtRSInfo e_emlrtRSI = { 42, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtRSInfo f_emlrtRSI = { 44, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtRSInfo hc_emlrtRSI = { 14, "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m" };

static emlrtRSInfo ic_emlrtRSI = { 15, "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m" };

static emlrtRSInfo jc_emlrtRSI = { 16, "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m" };

static emlrtRSInfo lc_emlrtRSI = { 37, "mpower",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/mpower.m" };

static emlrtRSInfo mc_emlrtRSI = { 42, "power",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo nc_emlrtRSI = { 56, "power",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo sc_emlrtRSI = { 19, "sumprod",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/private/sumprod.m" };

static emlrtRSInfo tc_emlrtRSI = { 38, "sumprod",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/private/sumprod.m" };

static emlrtRSInfo uc_emlrtRSI = { 36, "combine_vector_elements",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtMCInfo emlrtMCI = { 49, 5, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtMCInfo b_emlrtMCI = { 51, 9, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtMCInfo c_emlrtMCI = { 55, 9, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtMCInfo d_emlrtMCI = { 61, 1, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtMCInfo s_emlrtMCI = { 28, 19, "assert",
  "/opt/matlab2014b/toolbox/shared/coder/coder/+coder/+internal/assert.m" };

static emlrtRTEInfo l_emlrtRTEI = { 1, 25, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 15, 5, "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m" };

static emlrtRTEInfo p_emlrtRTEI = { 14, 5, "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m" };

static emlrtRTEInfo q_emlrtRTEI = { 30, 5, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 32, 5, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtRTEInfo bc_emlrtRTEI = { 28, 1, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtRTEInfo cc_emlrtRTEI = { 37, 5, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 40, 41, "A0", "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 40, 65, "eta", "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 41, 49, "eta", "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 40, 19, "A", "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m",
  0 };

static emlrtECInfo emlrtECI = { -1, 40, 13, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtBCInfo e_emlrtBCI = { -1, -1, 14, 22, "AA", "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m", 0
};

static emlrtBCInfo f_emlrtBCI = { -1, -1, 15, 22, "GG", "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m", 0
};

static emlrtBCInfo g_emlrtBCI = { -1, -1, 16, 9, "P", "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m", 0
};

static emlrtECInfo b_emlrtECI = { -1, 16, 5, "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m" };

static emlrtRSInfo rd_emlrtRSI = { 28, "assert",
  "/opt/matlab2014b/toolbox/shared/coder/coder/+coder/+internal/assert.m" };

static emlrtRSInfo ce_emlrtRSI = { 61, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtRSInfo de_emlrtRSI = { 49, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtRSInfo ee_emlrtRSI = { 55, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

static emlrtRSInfo fe_emlrtRSI = { 51, "optAPSR_sigma",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR_sigma.m"
};

/* Function Declarations */
static void b_fprintf(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                      emlrtMCInfo *location);
static void c_fprintf(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                      *location);
static int32_T div_nzp_s32_floor(int32_T numerator, int32_T denominator);

/* Function Definitions */
static void b_fprintf(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                      emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "fprintf", true, location);
}

static void c_fprintf(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                      *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "fprintf", true, location);
}

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

void optAPSR_sigma(const emlrtStack *sp, const emxArray_real_T *X, const
                   emxArray_real_T *W, emxArray_real_T *A0, const struct0_T
                   *param, real_T obj_old, emxArray_real_T *A, real_T *obj_new)
{
  int32_T n;
  int32_T m;
  int32_T i0;
  int32_T loop_ub;
  real_T eps;
  real_T alpha;
  real_T beta;
  real_T sigma;
  real_T maxk;
  real_T iter;
  int32_T b_iter;
  emxArray_real_T *gradA;
  emxArray_real_T *eta;
  emxArray_int32_T *r0;
  emxArray_int32_T *r1;
  emxArray_real_T *x;
  emxArray_real_T *b_x;
  emxArray_real_T *AA;
  emxArray_real_T *b;
  emxArray_real_T *b_A0;
  emxArray_real_T *a;
  boolean_T exitg1;
  int32_T i1;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  uint32_T unnamed_idx_2;
  int32_T ixstart;
  int32_T i;
  emxArray_real_T *r2;
  emxArray_int32_T *r3;
  emxArray_int32_T *r4;
  emxArray_real_T *b_gradA;
  emxArray_real_T *b_AA;
  emxArray_real_T *b_A;
  emxArray_real_T *G;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i2;
  int32_T i3;
  int32_T i4;
  int32_T iv0[3];
  int32_T b_unnamed_idx_0;
  int32_T b_unnamed_idx_2;
  int32_T b_i;
  real_T s;
  real_T k;
  int32_T b_k;
  boolean_T exitg2;
  int32_T c_i;
  int32_T i5;
  real_T b_s;
  int32_T iv1[2];
  int32_T b_b;
  boolean_T b0;
  int32_T c_k;
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv2[2] = { 1, 36 };

  const mxArray *m0;
  char_T cv0[36];
  static const char_T cv1[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T p;
  int32_T exitg4;
  const mxArray *b_y;
  static const int32_T iv3[2] = { 1, 37 };

  char_T cv2[37];
  static const char_T cv3[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'U', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p', 't', 'y' };

  uint32_T sz[2];
  int32_T vlen;
  int32_T ix;
  int32_T iy;
  boolean_T b1;
  const mxArray *c_y;
  static const int32_T iv4[2] = { 1, 36 };

  int32_T exitg3;
  const mxArray *d_y;
  static const int32_T iv5[2] = { 1, 37 };

  const mxArray *e_y;
  static const int32_T iv6[2] = { 1, 13 };

  char_T cv4[13];
  static const char_T cv5[13] = { '-', '-', '-', 'm', 'a', 'x', 'k', ':', ' ',
    '%', 'd', '\\', 'n' };

  const mxArray *f_y;
  static const int32_T iv7[2] = { 1, 28 };

  char_T cv6[28];
  static const char_T cv7[28] = { '-', '-', '-', '*', '*', 'm', 'a', 'x', 'k',
    ' ', 'n', 'o', 't', ' ', 'b', 'i', 'g', ' ', 'e', 'n', 'o', 'u', 'g', 'h',
    '*', '*', '\\', 'n' };

  const mxArray *g_y;
  static const int32_T iv8[2] = { 1, 20 };

  char_T cv8[20];
  static const char_T cv9[20] = { '-', '-', '-', '*', '*', 'e', 'p', 's', ' ',
    'r', 'e', 'a', 'c', 'h', 'e', 'd', '*', '*', '\\', 'n' };

  const mxArray *h_y;
  static const int32_T iv9[2] = { 1, 16 };

  char_T cv10[16];
  static const char_T cv11[16] = { '-', '-', '-', 'm', 'a', 'x', 'i', 't', 'e',
    'r', ':', ' ', '%', 'd', '\\', 'n' };

  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  emlrtStack b_st;
  jmp_buf emlrtJBEnviron;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  boolean_T emlrtHadParallelError = false;
  st.prev = sp;
  st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  minimize the square root density cost function with respect to A */
  /*  Input: */
  /*      X - input square root density data (d-by-N-by-n) */
  /*      W - coefficient matrix (m-by-n) */
  /*      A0 - initial atoms in dictionary (d-by-N-by-m) */
  /*  Output: */
  /*      A - final atoms in dictionary (d-by-N-by-m) */
  /* % Initialization */
  n = W->size[1];
  m = W->size[0];
  i0 = A->size[0] * A->size[1] * A->size[2];
  A->size[0] = A0->size[0];
  A->size[1] = A0->size[1];
  A->size[2] = A0->size[2];
  emxEnsureCapacity(sp, (emxArray__common *)A, i0, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = A0->size[0] * A0->size[1] * A0->size[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    A->data[i0] = A0->data[i0];
  }

  /*  parameters */
  eps = param->eps;
  alpha = param->alpha;
  beta = param->beta;
  sigma = param->sigma;
  maxk = param->maxk;

  /*  initial objective values */
  *obj_new = 2.0 * obj_old;

  /* % Main loop */
  i0 = (int32_T)param->maxiterAPSR;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, param->maxiterAPSR, mxDOUBLE_CLASS,
    (int32_T)param->maxiterAPSR, &bc_emlrtRTEI, sp);
  iter = 1.0;
  b_iter = 0;
  b_emxInit_real_T(sp, &gradA, 3, &q_emlrtRTEI, true);
  b_emxInit_real_T(sp, &eta, 3, &r_emlrtRTEI, true);
  emxInit_int32_T(sp, &r0, 1, &l_emlrtRTEI, true);
  emxInit_int32_T(sp, &r1, 1, &l_emlrtRTEI, true);
  emxInit_real_T(sp, &x, 2, &l_emlrtRTEI, true);
  emxInit_real_T(sp, &b_x, 2, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &AA, 3, &l_emlrtRTEI, true);
  emxInit_real_T(sp, &b, 2, &l_emlrtRTEI, true);
  emxInit_real_T(sp, &b_A0, 2, &l_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &l_emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && (b_iter <= i0 - 1)) {
    iter = 1.0 + (real_T)b_iter;

    /*  compute gradient */
    st.site = &emlrtRSI;
    gradientAPSR(&st, X, W, A0, gradA);

    /*  project to the tangent plane */
    st.site = &b_emlrtRSI;
    i1 = AA->size[0] * AA->size[1] * AA->size[2];
    AA->size[0] = A0->size[0];
    AA->size[1] = A0->size[1];
    AA->size[2] = A0->size[2];
    emxEnsureCapacity(&st, (emxArray__common *)AA, i1, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = A0->size[0] * A0->size[1] * A0->size[2];
    for (i1 = 0; i1 < loop_ub; i1++) {
      AA->data[i1] = A0->data[i1];
    }

    /*  project the gradient G to the tangent plane at A */
    /*  Input: */
    /*      AA - atoms in dictionary (d-by-N-by-m) */
    /*      GG - gradient with respect to A (d-by-N-by-m) */
    /*  Output: */
    /*      P - projected gradient (d-by-N-by-m) */
    unnamed_idx_0 = (uint32_T)A0->size[0];
    unnamed_idx_1 = (uint32_T)A0->size[1];
    unnamed_idx_2 = (uint32_T)A0->size[2];
    i1 = eta->size[0] * eta->size[1] * eta->size[2];
    eta->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)eta, i1, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i1 = eta->size[0] * eta->size[1] * eta->size[2];
    eta->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)eta, i1, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i1 = eta->size[0] * eta->size[1] * eta->size[2];
    eta->size[2] = (int32_T)unnamed_idx_2;
    emxEnsureCapacity(&st, (emxArray__common *)eta, i1, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1 * (int32_T)
      unnamed_idx_2;
    for (i1 = 0; i1 < loop_ub; i1++) {
      eta->data[i1] = 0.0;
    }

    i1 = A0->size[1];
    ixstart = i1 - 1;
    emlrtEnterParallelRegion(&st, omp_in_parallel());
    emlrtPushJmpBuf(&st, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(st.tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(r2,r3,r4,b_gradA,b_AA,b_A,G,b_loop_ub,c_loop_ub,i2,i3,i4,b_unnamed_idx_0,b_unnamed_idx_2,emlrtJBEnviron) \
 firstprivate(b_st,st,g_st,iv0,emlrtHadParallelError)

    {
      if (setjmp(emlrtJBEnviron) == 0) {
        b_st.prev = &st;
        b_st.tls = emlrtAllocTLS(&st, omp_get_thread_num());
        b_st.site = NULL;
        emlrtSetJmpBuf(&b_st, &emlrtJBEnviron);
        g_st.prev = &b_st;
        g_st.tls = b_st.tls;
        emxInit_real_T(&b_st, &r2, 2, &l_emlrtRTEI, true);
        emxInit_int32_T(&b_st, &r3, 1, &l_emlrtRTEI, true);
        emxInit_int32_T(&b_st, &r4, 1, &l_emlrtRTEI, true);
        b_emxInit_real_T(&b_st, &b_gradA, 3, &l_emlrtRTEI, true);
        b_emxInit_real_T(&b_st, &b_AA, 3, &l_emlrtRTEI, true);
        emxInit_real_T(&b_st, &b_A, 2, &p_emlrtRTEI, true);
        emxInit_real_T(&b_st, &G, 2, &o_emlrtRTEI, true);
      } else {
        emlrtHadParallelError = true;
      }

#pragma omp for nowait

      for (i = 0; i <= ixstart; i++) {
        if (emlrtHadParallelError)
          continue;
        if (setjmp(emlrtJBEnviron) == 0) {
          b_loop_ub = AA->size[0];
          c_loop_ub = AA->size[2];
          i2 = AA->size[1];
          i3 = 1 + i;
          i2 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &e_emlrtBCI, &b_st);
          i3 = b_AA->size[0] * b_AA->size[1] * b_AA->size[2];
          b_AA->size[0] = b_loop_ub;
          b_AA->size[1] = 1;
          b_AA->size[2] = c_loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)b_AA, i3, (int32_T)sizeof
                            (real_T), &l_emlrtRTEI);
          for (i3 = 0; i3 < c_loop_ub; i3++) {
            for (i4 = 0; i4 < b_loop_ub; i4++) {
              b_AA->data[i4 + b_AA->size[0] * b_AA->size[1] * i3] = AA->data[(i4
                + AA->size[0] * (i2 - 1)) + AA->size[0] * AA->size[1] * i3];
            }
          }

          g_st.site = &hc_emlrtRSI;
          squeeze(&g_st, b_AA, b_A);
          b_loop_ub = gradA->size[0];
          c_loop_ub = gradA->size[2];
          i2 = gradA->size[1];
          i3 = 1 + i;
          i2 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &f_emlrtBCI, &b_st);
          i3 = b_gradA->size[0] * b_gradA->size[1] * b_gradA->size[2];
          b_gradA->size[0] = b_loop_ub;
          b_gradA->size[1] = 1;
          b_gradA->size[2] = c_loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)b_gradA, i3, (int32_T)
                            sizeof(real_T), &l_emlrtRTEI);
          for (i3 = 0; i3 < c_loop_ub; i3++) {
            for (i4 = 0; i4 < b_loop_ub; i4++) {
              b_gradA->data[i4 + b_gradA->size[0] * b_gradA->size[1] * i3] =
                gradA->data[(i4 + gradA->size[0] * (i2 - 1)) + gradA->size[0] *
                gradA->size[1] * i3];
            }
          }

          g_st.site = &ic_emlrtRSI;
          squeeze(&g_st, b_gradA, G);
          b_loop_ub = eta->size[0];
          i2 = r4->size[0];
          r4->size[0] = b_loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)r4, i2, (int32_T)sizeof
                            (int32_T), &l_emlrtRTEI);
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            r4->data[i2] = i2;
          }

          i2 = eta->size[1];
          i3 = i + 1;
          emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &g_emlrtBCI, &b_st);
          b_loop_ub = eta->size[2];
          i2 = r3->size[0];
          r3->size[0] = b_loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)r3, i2, (int32_T)sizeof
                            (int32_T), &l_emlrtRTEI);
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            r3->data[i2] = i2;
          }

          g_st.site = &jc_emlrtRSI;
          projectT(&g_st, b_A, G, r2);
          iv0[0] = r4->size[0];
          iv0[1] = 1;
          iv0[2] = r3->size[0];
          emlrtSubAssignSizeCheckR2012b(iv0, 3, *(int32_T (*)[2])r2->size, 2,
            &b_emlrtECI, &b_st);
          b_unnamed_idx_0 = r4->size[0];
          b_unnamed_idx_2 = r3->size[0];
          for (i2 = 0; i2 < b_unnamed_idx_2; i2++) {
            for (i3 = 0; i3 < b_unnamed_idx_0; i3++) {
              eta->data[(r4->data[i3] + eta->size[0] * i) + eta->size[0] *
                eta->size[1] * r3->data[i2]] = r2->data[i3 + b_unnamed_idx_0 *
                i2];
            }
          }

          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &b_st);
        } else {
          emlrtHadParallelError = true;
        }
      }

      if (!emlrtHadParallelError) {
        emlrtHeapReferenceStackLeaveScope(&b_st, 7);
        emxFree_real_T(&G);
        emxFree_real_T(&b_A);
        emxFree_real_T(&b_AA);
        emxFree_real_T(&b_gradA);
        emxFree_int32_T(&r4);
        emxFree_int32_T(&r3);
        emxFree_real_T(&r2);
      }
    }

    emlrtPopJmpBuf(&st, &emlrtJBStack);
    emlrtExitParallelRegion(&st, omp_in_parallel());

    /*  set the descent direction (negative gradient) */
    i1 = eta->size[0] * eta->size[1] * eta->size[2];
    emxEnsureCapacity(sp, (emxArray__common *)eta, i1, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    ixstart = eta->size[0];
    loop_ub = eta->size[1];
    b_i = eta->size[2];
    loop_ub = ixstart * loop_ub * b_i;
    for (i1 = 0; i1 < loop_ub; i1++) {
      eta->data[i1] = -eta->data[i1];
    }

    s = 0.0;

    /*  update the dictionary atoms */
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, maxk, mxDOUBLE_CLASS, (int32_T)maxk,
      &cc_emlrtRTEI, sp);
    k = 1.0;
    b_k = 0;
    exitg2 = false;
    while ((!exitg2) && (b_k <= (int32_T)maxk - 1)) {
      k = 1.0 + (real_T)b_k;
      s = 0.0;
      c_i = 0;
      while (c_i <= m - 1) {
        loop_ub = A->size[0];
        i1 = r0->size[0];
        r0->size[0] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)r0, i1, (int32_T)sizeof
                          (int32_T), &l_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          r0->data[i1] = i1;
        }

        loop_ub = A->size[1];
        i1 = r1->size[0];
        r1->size[0] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)r1, i1, (int32_T)sizeof
                          (int32_T), &l_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          r1->data[i1] = i1;
        }

        i1 = A->size[2];
        i5 = c_i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i5, 1, i1, &d_emlrtBCI, sp);
        i1 = A0->size[2];
        i5 = c_i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i5, 1, i1, &emlrtBCI, sp);
        st.site = &c_emlrtRSI;
        c_st.site = &lc_emlrtRSI;
        d_st.site = &mc_emlrtRSI;
        if ((beta < 0.0) && (1.0 + (real_T)b_k != 1.0 + (real_T)b_k)) {
          e_st.site = &nc_emlrtRSI;
          c_eml_error(&e_st);
        }

        b_s = alpha * muDoubleScalarPower(beta, 1.0 + (real_T)b_k);
        i1 = eta->size[2];
        i5 = c_i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i5, 1, i1, &b_emlrtBCI, sp);
        loop_ub = A0->size[0];
        b_i = A0->size[1];
        i1 = b_A0->size[0] * b_A0->size[1];
        b_A0->size[0] = loop_ub;
        b_A0->size[1] = b_i;
        emxEnsureCapacity(sp, (emxArray__common *)b_A0, i1, (int32_T)sizeof
                          (real_T), &l_emlrtRTEI);
        for (i1 = 0; i1 < b_i; i1++) {
          for (i5 = 0; i5 < loop_ub; i5++) {
            b_A0->data[i5 + b_A0->size[0] * i1] = A0->data[(i5 + A0->size[0] *
              i1) + A0->size[0] * A0->size[1] * c_i];
          }
        }

        loop_ub = eta->size[0];
        b_i = eta->size[1];
        i1 = a->size[0] * a->size[1];
        a->size[0] = loop_ub;
        a->size[1] = b_i;
        emxEnsureCapacity(sp, (emxArray__common *)a, i1, (int32_T)sizeof(real_T),
                          &l_emlrtRTEI);
        for (i1 = 0; i1 < b_i; i1++) {
          for (i5 = 0; i5 < loop_ub; i5++) {
            a->data[i5 + a->size[0] * i1] = b_s * eta->data[(i5 + eta->size[0] *
              i1) + eta->size[0] * eta->size[1] * c_i];
          }
        }

        st.site = &c_emlrtRSI;
        expmapPSR(&st, b_A0, a, x);
        iv1[0] = r0->size[0];
        iv1[1] = r1->size[0];
        emlrtSubAssignSizeCheckR2012b(iv1, 2, *(int32_T (*)[2])x->size, 2,
          &emlrtECI, sp);
        loop_ub = x->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_i = x->size[0];
          for (i5 = 0; i5 < b_i; i5++) {
            A->data[(r0->data[i5] + A->size[0] * r1->data[i1]) + A->size[0] *
              A->size[1] * c_i] = x->data[i5 + x->size[0] * i1];
          }
        }

        st.site = &d_emlrtRSI;
        i1 = eta->size[2];
        i5 = c_i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i5, 1, i1, &c_emlrtBCI, &st);
        i1 = eta->size[0];
        i5 = eta->size[1];
        ixstart = b->size[0] * b->size[1];
        b->size[0] = i1;
        b->size[1] = i5;
        emxEnsureCapacity(&st, (emxArray__common *)b, ixstart, (int32_T)sizeof
                          (real_T), &m_emlrtRTEI);
        i1 = eta->size[0];
        i5 = eta->size[1];
        b_b = i1 * i5;
        c_st.site = &j_emlrtRSI;
        if (1 > b_b) {
          b0 = false;
        } else {
          b0 = (b_b > 2147483646);
        }

        if (b0) {
          d_st.site = &l_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (c_k = 0; c_k + 1 <= b_b; c_k++) {
          loop_ub = eta->size[0];
          b_i = eta->size[1];
          i1 = x->size[0] * x->size[1];
          x->size[0] = loop_ub;
          x->size[1] = b_i;
          emxEnsureCapacity(&st, (emxArray__common *)x, i1, (int32_T)sizeof
                            (real_T), &l_emlrtRTEI);
          for (i1 = 0; i1 < b_i; i1++) {
            for (i5 = 0; i5 < loop_ub; i5++) {
              x->data[i5 + x->size[0] * i1] = eta->data[(i5 + eta->size[0] * i1)
                + eta->size[0] * eta->size[1] * c_i];
            }
          }

          i1 = x->size[0];
          b->data[c_k] = x->data[c_k % x->size[0] + x->size[0] *
            div_nzp_s32_floor(c_k, i1)];
        }

        power(sp, b, x);
        st.site = &d_emlrtRSI;
        c_st.site = &lb_emlrtRSI;
        if (((x->size[0] == 1) && (x->size[1] == 1)) || (x->size[0] != 1)) {
          overflow = true;
        } else {
          overflow = false;
        }

        d_st.site = &sc_emlrtRSI;
        if (overflow) {
        } else {
          y = NULL;
          m0 = emlrtCreateCharArray(2, iv2);
          for (b_i = 0; b_i < 36; b_i++) {
            cv0[b_i] = cv1[b_i];
          }

          emlrtInitCharArrayR2013a(&d_st, 36, m0, cv0);
          emlrtAssign(&y, m0);
          e_st.site = &rd_emlrtRSI;
          error(&e_st, b_message(&e_st, y, &s_emlrtMCI), &s_emlrtMCI);
        }

        overflow = false;
        p = false;
        c_k = 0;
        do {
          exitg4 = 0;
          if (c_k < 2) {
            if (x->size[c_k] != 0) {
              exitg4 = 1;
            } else {
              c_k++;
            }
          } else {
            p = true;
            exitg4 = 1;
          }
        } while (exitg4 == 0);

        if (!p) {
        } else {
          overflow = true;
        }

        d_st.site = &tc_emlrtRSI;
        if (!overflow) {
        } else {
          b_y = NULL;
          m0 = emlrtCreateCharArray(2, iv3);
          for (b_i = 0; b_i < 37; b_i++) {
            cv2[b_i] = cv3[b_i];
          }

          emlrtInitCharArrayR2013a(&d_st, 37, m0, cv2);
          emlrtAssign(&b_y, m0);
          e_st.site = &rd_emlrtRSI;
          error(&e_st, b_message(&e_st, b_y, &s_emlrtMCI), &s_emlrtMCI);
        }

        d_st.site = &mb_emlrtRSI;
        for (i1 = 0; i1 < 2; i1++) {
          sz[i1] = (uint32_T)x->size[i1];
        }

        i1 = b_x->size[0] * b_x->size[1];
        b_x->size[0] = 1;
        b_x->size[1] = (int32_T)sz[1];
        emxEnsureCapacity(&d_st, (emxArray__common *)b_x, i1, (int32_T)sizeof
                          (real_T), &n_emlrtRTEI);
        if ((x->size[0] == 0) || (x->size[1] == 0)) {
          i1 = b_x->size[0] * b_x->size[1];
          b_x->size[0] = 1;
          emxEnsureCapacity(&d_st, (emxArray__common *)b_x, i1, (int32_T)sizeof
                            (real_T), &l_emlrtRTEI);
          i1 = b_x->size[0] * b_x->size[1];
          b_x->size[1] = (int32_T)sz[1];
          emxEnsureCapacity(&d_st, (emxArray__common *)b_x, i1, (int32_T)sizeof
                            (real_T), &l_emlrtRTEI);
          loop_ub = (int32_T)sz[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_x->data[i1] = 0.0;
          }
        } else {
          vlen = x->size[0];
          ix = -1;
          iy = -1;
          e_st.site = &nb_emlrtRSI;
          overflow = (x->size[1] > 2147483646);
          if (overflow) {
            f_st.site = &l_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          for (b_i = 1; b_i <= x->size[1]; b_i++) {
            ixstart = ix + 1;
            ix++;
            b_s = x->data[ixstart];
            e_st.site = &ob_emlrtRSI;
            if (2 > vlen) {
              b1 = false;
            } else {
              b1 = (vlen > 2147483646);
            }

            if (b1) {
              f_st.site = &l_emlrtRSI;
              check_forloop_overflow_error(&f_st);
            }

            for (c_k = 2; c_k <= vlen; c_k++) {
              ix++;
              b_s += x->data[ix];
            }

            iy++;
            b_x->data[iy] = b_s;
          }
        }

        st.site = &d_emlrtRSI;
        c_st.site = &lb_emlrtRSI;
        if ((b_x->size[1] == 1) || (b_x->size[1] != 1)) {
          overflow = true;
        } else {
          overflow = false;
        }

        d_st.site = &sc_emlrtRSI;
        if (overflow) {
        } else {
          c_y = NULL;
          m0 = emlrtCreateCharArray(2, iv4);
          for (b_i = 0; b_i < 36; b_i++) {
            cv0[b_i] = cv1[b_i];
          }

          emlrtInitCharArrayR2013a(&d_st, 36, m0, cv0);
          emlrtAssign(&c_y, m0);
          e_st.site = &rd_emlrtRSI;
          error(&e_st, b_message(&e_st, c_y, &s_emlrtMCI), &s_emlrtMCI);
        }

        overflow = false;
        p = false;
        c_k = 0;
        do {
          exitg3 = 0;
          if (c_k < 2) {
            if (b_x->size[c_k] != 0) {
              exitg3 = 1;
            } else {
              c_k++;
            }
          } else {
            p = true;
            exitg3 = 1;
          }
        } while (exitg3 == 0);

        if (!p) {
        } else {
          overflow = true;
        }

        d_st.site = &tc_emlrtRSI;
        if (!overflow) {
        } else {
          d_y = NULL;
          m0 = emlrtCreateCharArray(2, iv5);
          for (b_i = 0; b_i < 37; b_i++) {
            cv2[b_i] = cv3[b_i];
          }

          emlrtInitCharArrayR2013a(&d_st, 37, m0, cv2);
          emlrtAssign(&d_y, m0);
          e_st.site = &rd_emlrtRSI;
          error(&e_st, b_message(&e_st, d_y, &s_emlrtMCI), &s_emlrtMCI);
        }

        d_st.site = &mb_emlrtRSI;
        if (b_x->size[1] == 0) {
          b_s = 0.0;
        } else {
          b_s = b_x->data[0];
          e_st.site = &uc_emlrtRSI;
          if (2 > b_x->size[1]) {
            overflow = false;
          } else {
            overflow = (b_x->size[1] > 2147483646);
          }

          if (overflow) {
            f_st.site = &l_emlrtRSI;
            check_forloop_overflow_error(&f_st);
          }

          for (c_k = 2; c_k <= b_x->size[1]; c_k++) {
            b_s += b_x->data[c_k - 1];
          }
        }

        st.site = &d_emlrtRSI;
        if (b_s < 0.0) {
          c_st.site = &pb_emlrtRSI;
          eml_error(&c_st);
        }

        st.site = &e_emlrtRSI;
        c_st.site = &lc_emlrtRSI;
        d_st.site = &mc_emlrtRSI;
        if ((beta < 0.0) && (1.0 + (real_T)b_k != 1.0 + (real_T)b_k)) {
          e_st.site = &nc_emlrtRSI;
          c_eml_error(&e_st);
        }

        s += sigma * alpha * muDoubleScalarPower(beta, 1.0 + (real_T)b_k) *
          muDoubleScalarSqrt(b_s);
        c_i++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }

      st.site = &f_emlrtRSI;
      *obj_new = objPSR(&st, X, W, A);
      if (*obj_new < obj_old - s) {
        exitg2 = true;
      } else {
        b_k++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }
    }

    e_y = NULL;
    m0 = emlrtCreateCharArray(2, iv6);
    for (c_i = 0; c_i < 13; c_i++) {
      cv4[c_i] = cv5[c_i];
    }

    emlrtInitCharArrayR2013a(sp, 13, m0, cv4);
    emlrtAssign(&e_y, m0);
    st.site = &de_emlrtRSI;
    b_fprintf(&st, e_y, emlrt_marshallOut(k), &emlrtMCI);
    if (obj_old - *obj_new < s) {
      f_y = NULL;
      m0 = emlrtCreateCharArray(2, iv7);
      for (c_i = 0; c_i < 28; c_i++) {
        cv6[c_i] = cv7[c_i];
      }

      emlrtInitCharArrayR2013a(sp, 28, m0, cv6);
      emlrtAssign(&f_y, m0);
      st.site = &fe_emlrtRSI;
      c_fprintf(&st, f_y, &b_emlrtMCI);
    }

    if ((obj_old - *obj_new) / (real_T)n < eps) {
      g_y = NULL;
      m0 = emlrtCreateCharArray(2, iv8);
      for (c_i = 0; c_i < 20; c_i++) {
        cv8[c_i] = cv9[c_i];
      }

      emlrtInitCharArrayR2013a(sp, 20, m0, cv8);
      emlrtAssign(&g_y, m0);
      st.site = &ee_emlrtRSI;
      c_fprintf(&st, g_y, &c_emlrtMCI);
      exitg1 = true;
    } else {
      i1 = A0->size[0] * A0->size[1] * A0->size[2];
      A0->size[0] = A->size[0];
      A0->size[1] = A->size[1];
      A0->size[2] = A->size[2];
      emxEnsureCapacity(sp, (emxArray__common *)A0, i1, (int32_T)sizeof(real_T),
                        &l_emlrtRTEI);
      loop_ub = A->size[0] * A->size[1] * A->size[2];
      for (i1 = 0; i1 < loop_ub; i1++) {
        A0->data[i1] = A->data[i1];
      }

      obj_old = *obj_new;
      b_iter++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }
  }

  emxFree_real_T(&a);
  emxFree_real_T(&b_A0);
  emxFree_real_T(&b);
  emxFree_real_T(&AA);
  emxFree_real_T(&b_x);
  emxFree_real_T(&x);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r0);
  emxFree_real_T(&eta);
  emxFree_real_T(&gradA);
  h_y = NULL;
  m0 = emlrtCreateCharArray(2, iv9);
  for (c_i = 0; c_i < 16; c_i++) {
    cv10[c_i] = cv11[c_i];
  }

  emlrtInitCharArrayR2013a(sp, 16, m0, cv10);
  emlrtAssign(&h_y, m0);
  st.site = &ce_emlrtRSI;
  b_fprintf(&st, h_y, emlrt_marshallOut(iter), &d_emlrtMCI);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (optAPSR_sigma.c) */
