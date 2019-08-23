/*
 * optAPSR.c
 *
 * Code generation for function 'optAPSR'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR.h"
#include "eml_error.h"
#include "optAPSR_emxutil.h"
#include "gradientASR.h"
#include "squeeze.h"
#include "projectT.h"
#include "expmapPSR.h"
#include "objPSR.h"
#include "optAPSR_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 31, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRSInfo b_emlrtRSI = { 37, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRSInfo c_emlrtRSI = { 39, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRSInfo d_emlrtRSI = { 47, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRSInfo e_emlrtRSI = { 50, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRSInfo ub_emlrtRSI = { 17, "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m"
};

static emlrtRSInfo vb_emlrtRSI = { 18, "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m"
};

static emlrtRSInfo wb_emlrtRSI = { 19, "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m"
};

static emlrtRSInfo qc_emlrtRSI = { 14, "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m" };

static emlrtRSInfo rc_emlrtRSI = { 15, "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m" };

static emlrtRSInfo sc_emlrtRSI = { 16, "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m" };

static emlrtRSInfo uc_emlrtRSI = { 37, "mpower",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/mpower.m" };

static emlrtRSInfo vc_emlrtRSI = { 42, "power",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRSInfo wc_emlrtRSI = { 56, "power",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/power.m" };

static emlrtRTEInfo i_emlrtRTEI = { 55, 5, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRTEInfo j_emlrtRTEI = { 57, 9, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRTEInfo k_emlrtRTEI = { 61, 9, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRTEInfo l_emlrtRTEI = { 67, 1, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtMCInfo emlrtMCI = { 55, 5, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtMCInfo b_emlrtMCI = { 57, 9, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtMCInfo c_emlrtMCI = { 61, 9, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtMCInfo d_emlrtMCI = { 67, 1, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRTEInfo p_emlrtRTEI = { 1, 14, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRTEInfo q_emlrtRTEI = { 15, 5, "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m" };

static emlrtRTEInfo r_emlrtRTEI = { 14, 5, "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m" };

static emlrtRTEInfo s_emlrtRTEI = { 37, 5, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRTEInfo t_emlrtRTEI = { 39, 5, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtECInfo emlrtECI = { -1, 16, 5, "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 16, 9, "P", "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m", 0
};

static emlrtBCInfo b_emlrtBCI = { -1, -1, 15, 22, "GG", "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m", 0
};

static emlrtBCInfo c_emlrtBCI = { -1, -1, 14, 22, "AA", "projectTP",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/projectTP.m", 0
};

static emlrtECInfo b_emlrtECI = { -1, 19, 5, "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m"
};

static emlrtBCInfo d_emlrtBCI = { -1, -1, 19, 13, "gradA", "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m",
  0 };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 18, 22, "XX", "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 17, 22, "AA", "gradientAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/gradientAPSR.m",
  0 };

static emlrtECInfo c_emlrtECI = { -1, 47, 13, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 47, 19, "A", "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m", 0 };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 47, 65, "eta", "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 47, 41, "A0", "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m", 0 };

static emlrtRTEInfo cc_emlrtRTEI = { 43, 5, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRTEInfo dc_emlrtRTEI = { 35, 1, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRSInfo wd_emlrtRSI = { 67, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRSInfo xd_emlrtRSI = { 55, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRSInfo yd_emlrtRSI = { 61, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

static emlrtRSInfo ae_emlrtRSI = { 57, "optAPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/optAPSR.m" };

/* Function Declarations */
static void b_fprintf(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                      emlrtMCInfo *location);
static void c_fprintf(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                      *location);

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

void optAPSR(const emlrtStack *sp, const emxArray_real_T *X, const
             emxArray_real_T *W, emxArray_real_T *A0, const struct0_T *param,
             emxArray_real_T *A)
{
  int32_T m;
  int32_T n;
  int32_T i0;
  int32_T i;
  real_T eps;
  real_T alpha;
  real_T beta;
  real_T maxk;
  real_T obj_old;
  real_T obj_new;
  real_T iter;
  int32_T b_iter;
  emxArray_real_T *gradA;
  emxArray_real_T *eta;
  emxArray_int32_T *r0;
  emxArray_int32_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *b_W;
  emxArray_real_T *AA;
  emxArray_real_T *b_A;
  emxArray_real_T *G;
  boolean_T exitg1;
  int32_T b_eta;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  uint32_T unnamed_idx_2;
  int32_T b_i;
  emxArray_real_T *c_eta;
  emxArray_real_T *b_AA;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T iv0[3];
  int32_T b_unnamed_idx_0;
  int32_T b_unnamed_idx_2;
  emxArray_real_T *b_gradA;
  emxArray_real_T *c_AA;
  int32_T iv1[3];
  int32_T d_eta;
  real_T k;
  boolean_T exitg2;
  emxArray_real_T *a;
  emxArray_real_T *b_A0;
  real_T b_a;
  int32_T iv2[2];
  const mxArray *y;
  static const int32_T iv3[2] = { 1, 10 };

  const mxArray *m0;
  char_T cv0[10];
  static const char_T cv1[10] = { 'm', 'a', 'x', 'k', ':', ' ', '%', 'd', '\\',
    'n' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv4[2] = { 1, 21 };

  char_T cv2[21];
  static const char_T cv3[21] = { 'm', 'a', 'x', 'k', ' ', 'n', 'o', 't', ' ',
    'b', 'i', 'g', ' ', 'e', 'n', 'o', 'u', 'g', 'h', '\\', 'n' };

  const mxArray *d_y;
  static const int32_T iv5[2] = { 1, 13 };

  char_T cv4[13];
  static const char_T cv5[13] = { 'e', 'p', 's', ' ', 'r', 'e', 'a', 'c', 'h',
    'e', 'd', '\\', 'n' };

  const mxArray *e_y;
  static const int32_T iv6[2] = { 1, 13 };

  static const char_T cv6[13] = { 'm', 'a', 'x', 'i', 't', 'e', 'r', ':', ' ',
    '%', 'd', '\\', 'n' };

  const mxArray *f_y;
  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  emlrtStack b_st;
  jmp_buf emlrtJBEnviron;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  boolean_T emlrtHadParallelError = false;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  assert(isa(X,'double')); */
  /*  assert(isa(W,'double')); */
  /*  assert(isa(A0,'double')); */
  /*  assert(all(size(X) == [64 121])); */
  /*  assert(all(size(W) == [100 121])); */
  /*  assert(all(size(A0) == [64 100])); */
  /*  minimize the square root density cost function with respect to A */
  /*  Input: */
  /*      X - input square root density data (d-by-N-by-n) */
  /*      W - coefficient matrix (m-by-n) */
  /*      A0 - initial atoms in dictionary (d-by-N-by-m) */
  /*  Output: */
  /*      A - final atoms in dictionary (d-by-N-by-m) */
  /* % Initialization */
  m = W->size[0] - 1;
  n = W->size[1];
  i0 = A->size[0] * A->size[1] * A->size[2];
  A->size[0] = A0->size[0];
  A->size[1] = A0->size[1];
  A->size[2] = A0->size[2];
  emxEnsureCapacity(sp, (emxArray__common *)A, i0, (int32_T)sizeof(real_T),
                    &p_emlrtRTEI);
  i = A0->size[0] * A0->size[1] * A0->size[2];
  for (i0 = 0; i0 < i; i0++) {
    A->data[i0] = A0->data[i0];
  }

  /*  parameters */
  eps = param->eps;
  alpha = param->alpha;
  beta = param->beta;

  /* sigma = param.sigma; */
  maxk = param->maxk;

  /*  initial objective values */
  st.site = &emlrtRSI;
  obj_old = objPSR(&st, X, W, A0);
  obj_new = 2.0 * obj_old;

  /* % Main loop */
  i0 = (int32_T)param->maxiterAPSR;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, param->maxiterAPSR, mxDOUBLE_CLASS,
    (int32_T)param->maxiterAPSR, &dc_emlrtRTEI, sp);
  iter = 1.0;
  b_iter = 0;
  b_emxInit_real_T(sp, &gradA, 3, &s_emlrtRTEI, true);
  b_emxInit_real_T(sp, &eta, 3, &t_emlrtRTEI, true);
  emxInit_int32_T(sp, &r0, 1, &p_emlrtRTEI, true);
  emxInit_int32_T(sp, &r1, 1, &p_emlrtRTEI, true);
  emxInit_real_T(sp, &r2, 2, &p_emlrtRTEI, true);
  emxInit_real_T(sp, &b_W, 2, &p_emlrtRTEI, true);
  b_emxInit_real_T(sp, &AA, 3, &p_emlrtRTEI, true);
  emxInit_real_T(sp, &b_A, 2, &r_emlrtRTEI, true);
  emxInit_real_T(sp, &G, 2, &q_emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && (b_iter <= i0 - 1)) {
    iter = 1.0 + (real_T)b_iter;

    /*  compute gradient */
    st.site = &b_emlrtRSI;
    b_eta = eta->size[0] * eta->size[1] * eta->size[2];
    eta->size[0] = X->size[0];
    eta->size[1] = X->size[1];
    eta->size[2] = X->size[2];
    emxEnsureCapacity(&st, (emxArray__common *)eta, b_eta, (int32_T)sizeof
                      (real_T), &p_emlrtRTEI);
    i = X->size[0] * X->size[1] * X->size[2];
    for (b_eta = 0; b_eta < i; b_eta++) {
      eta->data[b_eta] = X->data[b_eta];
    }

    b_eta = b_W->size[0] * b_W->size[1];
    b_W->size[0] = W->size[0];
    b_W->size[1] = W->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b_W, b_eta, (int32_T)sizeof
                      (real_T), &p_emlrtRTEI);
    i = W->size[0] * W->size[1];
    for (b_eta = 0; b_eta < i; b_eta++) {
      b_W->data[b_eta] = W->data[b_eta];
    }

    b_eta = AA->size[0] * AA->size[1] * AA->size[2];
    AA->size[0] = A0->size[0];
    AA->size[1] = A0->size[1];
    AA->size[2] = A0->size[2];
    emxEnsureCapacity(&st, (emxArray__common *)AA, b_eta, (int32_T)sizeof(real_T),
                      &p_emlrtRTEI);
    i = A0->size[0] * A0->size[1] * A0->size[2];
    for (b_eta = 0; b_eta < i; b_eta++) {
      AA->data[b_eta] = A0->data[b_eta];
    }

    /*  compute the gradient with respect to A */
    /*  Input: */
    /*      XX - input square root density data (d-by-N-by-n) */
    /*      W - coefficient matrix (m-by-n) */
    /*      AA - initial atoms in dictionary (d-by-N-by-m) */
    /*  Output: */
    /*      gradA - the gradient with respect to A (d-by-N-by-m) */
    /* % Initialization */
    unnamed_idx_0 = (uint32_T)A0->size[0];
    unnamed_idx_1 = (uint32_T)A0->size[1];
    unnamed_idx_2 = (uint32_T)A0->size[2];
    b_eta = gradA->size[0] * gradA->size[1] * gradA->size[2];
    gradA->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)gradA, b_eta, (int32_T)sizeof
                      (real_T), &p_emlrtRTEI);
    b_eta = gradA->size[0] * gradA->size[1] * gradA->size[2];
    gradA->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)gradA, b_eta, (int32_T)sizeof
                      (real_T), &p_emlrtRTEI);
    b_eta = gradA->size[0] * gradA->size[1] * gradA->size[2];
    gradA->size[2] = (int32_T)unnamed_idx_2;
    emxEnsureCapacity(&st, (emxArray__common *)gradA, b_eta, (int32_T)sizeof
                      (real_T), &p_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1 * (int32_T)unnamed_idx_2;
    for (b_eta = 0; b_eta < i; b_eta++) {
      gradA->data[b_eta] = 0.0;
    }

    b_eta = A0->size[1];
    i = b_eta - 1;
    emlrtEnterParallelRegion(&st, omp_in_parallel());
    emlrtPushJmpBuf(&st, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(st.tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(r2,r1,r0,c_eta,b_AA,b_A,G,loop_ub,b_loop_ub,i1,i2,i3,b_unnamed_idx_0,b_unnamed_idx_2,emlrtJBEnviron) \
 firstprivate(b_st,st,j_st,iv0,emlrtHadParallelError)

    {
      if (setjmp(emlrtJBEnviron) == 0) {
        b_st.prev = &st;
        b_st.tls = emlrtAllocTLS(&st, omp_get_thread_num());
        b_st.site = NULL;
        emlrtSetJmpBuf(&b_st, &emlrtJBEnviron);
        j_st.prev = &b_st;
        j_st.tls = b_st.tls;
        emxInit_real_T(&b_st, &r2, 2, &p_emlrtRTEI, true);
        emxInit_int32_T(&b_st, &r1, 1, &p_emlrtRTEI, true);
        emxInit_int32_T(&b_st, &r0, 1, &p_emlrtRTEI, true);
        b_emxInit_real_T(&b_st, &c_eta, 3, &p_emlrtRTEI, true);
        b_emxInit_real_T(&b_st, &b_AA, 3, &p_emlrtRTEI, true);
        emxInit_real_T(&b_st, &b_A, 2, &r_emlrtRTEI, true);
        emxInit_real_T(&b_st, &G, 2, &q_emlrtRTEI, true);
      } else {
        emlrtHadParallelError = true;
      }

#pragma omp for nowait

      for (b_i = 0; b_i <= i; b_i++) {
        if (emlrtHadParallelError)
          continue;
        if (setjmp(emlrtJBEnviron) == 0) {
          /* % for each N SR components */
          loop_ub = AA->size[0];
          b_loop_ub = AA->size[2];
          i1 = AA->size[1];
          i2 = 1 + b_i;
          i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &f_emlrtBCI, &b_st);
          i2 = b_AA->size[0] * b_AA->size[1] * b_AA->size[2];
          b_AA->size[0] = loop_ub;
          b_AA->size[1] = 1;
          b_AA->size[2] = b_loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)b_AA, i2, (int32_T)sizeof
                            (real_T), &p_emlrtRTEI);
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_AA->data[i3 + b_AA->size[0] * b_AA->size[1] * i2] = AA->data[(i3
                + AA->size[0] * (i1 - 1)) + AA->size[0] * AA->size[1] * i2];
            }
          }

          j_st.site = &ub_emlrtRSI;
          squeeze(&j_st, b_AA, b_A);
          loop_ub = eta->size[0];
          b_loop_ub = eta->size[2];
          i1 = eta->size[1];
          i2 = 1 + b_i;
          i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &e_emlrtBCI, &b_st);
          i2 = c_eta->size[0] * c_eta->size[1] * c_eta->size[2];
          c_eta->size[0] = loop_ub;
          c_eta->size[1] = 1;
          c_eta->size[2] = b_loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)c_eta, i2, (int32_T)
                            sizeof(real_T), &p_emlrtRTEI);
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            for (i3 = 0; i3 < loop_ub; i3++) {
              c_eta->data[i3 + c_eta->size[0] * c_eta->size[1] * i2] = eta->
                data[(i3 + eta->size[0] * (i1 - 1)) + eta->size[0] * eta->size[1]
                * i2];
            }
          }

          j_st.site = &vb_emlrtRSI;
          squeeze(&j_st, c_eta, G);
          loop_ub = gradA->size[0];
          i1 = r0->size[0];
          r0->size[0] = loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)r0, i1, (int32_T)sizeof
                            (int32_T), &p_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            r0->data[i1] = i1;
          }

          i1 = gradA->size[1];
          i2 = b_i + 1;
          emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &d_emlrtBCI, &b_st);
          loop_ub = gradA->size[2];
          i1 = r1->size[0];
          r1->size[0] = loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)r1, i1, (int32_T)sizeof
                            (int32_T), &p_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            r1->data[i1] = i1;
          }

          j_st.site = &wb_emlrtRSI;
          gradientASR(&j_st, G, b_W, b_A, r2);
          iv0[0] = r0->size[0];
          iv0[1] = 1;
          iv0[2] = r1->size[0];
          emlrtSubAssignSizeCheckR2012b(iv0, 3, *(int32_T (*)[2])r2->size, 2,
            &b_emlrtECI, &b_st);
          b_unnamed_idx_0 = r0->size[0];
          b_unnamed_idx_2 = r1->size[0];
          for (i1 = 0; i1 < b_unnamed_idx_2; i1++) {
            for (i2 = 0; i2 < b_unnamed_idx_0; i2++) {
              gradA->data[(r0->data[i2] + gradA->size[0] * b_i) + gradA->size[0]
                * gradA->size[1] * r1->data[i1]] = r2->data[i2 + b_unnamed_idx_0
                * i1];
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
        emxFree_real_T(&c_eta);
        emxFree_int32_T(&r0);
        emxFree_int32_T(&r1);
        emxFree_real_T(&r2);
      }
    }

    emlrtPopJmpBuf(&st, &emlrtJBStack);
    emlrtExitParallelRegion(&st, omp_in_parallel());

    /*  project to the tangent plane */
    st.site = &c_emlrtRSI;
    b_eta = AA->size[0] * AA->size[1] * AA->size[2];
    AA->size[0] = A0->size[0];
    AA->size[1] = A0->size[1];
    AA->size[2] = A0->size[2];
    emxEnsureCapacity(&st, (emxArray__common *)AA, b_eta, (int32_T)sizeof(real_T),
                      &p_emlrtRTEI);
    i = A0->size[0] * A0->size[1] * A0->size[2];
    for (b_eta = 0; b_eta < i; b_eta++) {
      AA->data[b_eta] = A0->data[b_eta];
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
    b_eta = eta->size[0] * eta->size[1] * eta->size[2];
    eta->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(&st, (emxArray__common *)eta, b_eta, (int32_T)sizeof
                      (real_T), &p_emlrtRTEI);
    b_eta = eta->size[0] * eta->size[1] * eta->size[2];
    eta->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(&st, (emxArray__common *)eta, b_eta, (int32_T)sizeof
                      (real_T), &p_emlrtRTEI);
    b_eta = eta->size[0] * eta->size[1] * eta->size[2];
    eta->size[2] = (int32_T)unnamed_idx_2;
    emxEnsureCapacity(&st, (emxArray__common *)eta, b_eta, (int32_T)sizeof
                      (real_T), &p_emlrtRTEI);
    i = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1 * (int32_T)unnamed_idx_2;
    for (b_eta = 0; b_eta < i; b_eta++) {
      eta->data[b_eta] = 0.0;
    }

    b_eta = A0->size[1];
    i = b_eta - 1;
    emlrtEnterParallelRegion(&st, omp_in_parallel());
    emlrtPushJmpBuf(&st, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(st.tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(r2,r1,r0,b_gradA,c_AA,b_A,G,loop_ub,b_loop_ub,i1,i2,i3,b_unnamed_idx_0,b_unnamed_idx_2,emlrtJBEnviron) \
 firstprivate(c_st,st,i_st,iv1,emlrtHadParallelError)

    {
      if (setjmp(emlrtJBEnviron) == 0) {
        c_st.prev = &st;
        c_st.tls = emlrtAllocTLS(&st, omp_get_thread_num());
        c_st.site = NULL;
        emlrtSetJmpBuf(&c_st, &emlrtJBEnviron);
        i_st.prev = &c_st;
        i_st.tls = c_st.tls;
        emxInit_real_T(&c_st, &r2, 2, &p_emlrtRTEI, true);
        emxInit_int32_T(&c_st, &r1, 1, &p_emlrtRTEI, true);
        emxInit_int32_T(&c_st, &r0, 1, &p_emlrtRTEI, true);
        b_emxInit_real_T(&c_st, &b_gradA, 3, &p_emlrtRTEI, true);
        b_emxInit_real_T(&c_st, &c_AA, 3, &p_emlrtRTEI, true);
        emxInit_real_T(&c_st, &b_A, 2, &r_emlrtRTEI, true);
        emxInit_real_T(&c_st, &G, 2, &q_emlrtRTEI, true);
      } else {
        emlrtHadParallelError = true;
      }

#pragma omp for nowait

      for (b_i = 0; b_i <= i; b_i++) {
        if (emlrtHadParallelError)
          continue;
        if (setjmp(emlrtJBEnviron) == 0) {
          loop_ub = AA->size[0];
          b_loop_ub = AA->size[2];
          i1 = AA->size[1];
          i2 = 1 + b_i;
          i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &c_emlrtBCI, &c_st);
          i2 = c_AA->size[0] * c_AA->size[1] * c_AA->size[2];
          c_AA->size[0] = loop_ub;
          c_AA->size[1] = 1;
          c_AA->size[2] = b_loop_ub;
          emxEnsureCapacity(&c_st, (emxArray__common *)c_AA, i2, (int32_T)sizeof
                            (real_T), &p_emlrtRTEI);
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            for (i3 = 0; i3 < loop_ub; i3++) {
              c_AA->data[i3 + c_AA->size[0] * c_AA->size[1] * i2] = AA->data[(i3
                + AA->size[0] * (i1 - 1)) + AA->size[0] * AA->size[1] * i2];
            }
          }

          i_st.site = &qc_emlrtRSI;
          squeeze(&i_st, c_AA, b_A);
          loop_ub = gradA->size[0];
          b_loop_ub = gradA->size[2];
          i1 = gradA->size[1];
          i2 = 1 + b_i;
          i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &b_emlrtBCI, &c_st);
          i2 = b_gradA->size[0] * b_gradA->size[1] * b_gradA->size[2];
          b_gradA->size[0] = loop_ub;
          b_gradA->size[1] = 1;
          b_gradA->size[2] = b_loop_ub;
          emxEnsureCapacity(&c_st, (emxArray__common *)b_gradA, i2, (int32_T)
                            sizeof(real_T), &p_emlrtRTEI);
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            for (i3 = 0; i3 < loop_ub; i3++) {
              b_gradA->data[i3 + b_gradA->size[0] * b_gradA->size[1] * i2] =
                gradA->data[(i3 + gradA->size[0] * (i1 - 1)) + gradA->size[0] *
                gradA->size[1] * i2];
            }
          }

          i_st.site = &rc_emlrtRSI;
          squeeze(&i_st, b_gradA, G);
          loop_ub = eta->size[0];
          i1 = r0->size[0];
          r0->size[0] = loop_ub;
          emxEnsureCapacity(&c_st, (emxArray__common *)r0, i1, (int32_T)sizeof
                            (int32_T), &p_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            r0->data[i1] = i1;
          }

          i1 = eta->size[1];
          i2 = b_i + 1;
          emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &emlrtBCI, &c_st);
          loop_ub = eta->size[2];
          i1 = r1->size[0];
          r1->size[0] = loop_ub;
          emxEnsureCapacity(&c_st, (emxArray__common *)r1, i1, (int32_T)sizeof
                            (int32_T), &p_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            r1->data[i1] = i1;
          }

          i_st.site = &sc_emlrtRSI;
          projectT(&i_st, b_A, G, r2);
          iv1[0] = r0->size[0];
          iv1[1] = 1;
          iv1[2] = r1->size[0];
          emlrtSubAssignSizeCheckR2012b(iv1, 3, *(int32_T (*)[2])r2->size, 2,
            &emlrtECI, &c_st);
          b_unnamed_idx_0 = r0->size[0];
          b_unnamed_idx_2 = r1->size[0];
          for (i1 = 0; i1 < b_unnamed_idx_2; i1++) {
            for (i2 = 0; i2 < b_unnamed_idx_0; i2++) {
              eta->data[(r0->data[i2] + eta->size[0] * b_i) + eta->size[0] *
                eta->size[1] * r1->data[i1]] = r2->data[i2 + b_unnamed_idx_0 *
                i1];
            }
          }

          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &c_st);
        } else {
          emlrtHadParallelError = true;
        }
      }

      if (!emlrtHadParallelError) {
        emlrtHeapReferenceStackLeaveScope(&c_st, 7);
        emxFree_real_T(&G);
        emxFree_real_T(&b_A);
        emxFree_real_T(&c_AA);
        emxFree_real_T(&b_gradA);
        emxFree_int32_T(&r0);
        emxFree_int32_T(&r1);
        emxFree_real_T(&r2);
      }
    }

    emlrtPopJmpBuf(&st, &emlrtJBStack);
    emlrtExitParallelRegion(&st, omp_in_parallel());

    /*  set the descent direction (negative gradient) */
    b_eta = eta->size[0] * eta->size[1] * eta->size[2];
    emxEnsureCapacity(sp, (emxArray__common *)eta, b_eta, (int32_T)sizeof(real_T),
                      &p_emlrtRTEI);
    i = eta->size[0];
    b_eta = eta->size[1];
    d_eta = eta->size[2];
    i = i * b_eta * d_eta;
    for (b_eta = 0; b_eta < i; b_eta++) {
      eta->data[b_eta] = -eta->data[b_eta];
    }

    /*  update the dictionary atoms */
    b_eta = (int32_T)maxk;
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, maxk, mxDOUBLE_CLASS, (int32_T)maxk,
      &cc_emlrtRTEI, sp);
    k = 1.0;
    i = 0;
    exitg2 = false;
    while ((!exitg2) && (i <= b_eta - 1)) {
      k = 1.0 + (real_T)i;
      emlrtEnterParallelRegion(sp, omp_in_parallel());
      emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(r2,a,b_A0,r1,r0,loop_ub,i1,i2,b_a,b_loop_ub,emlrtJBEnviron) \
 firstprivate(d_st,e_st,f_st,g_st,h_st,emlrtHadParallelError,iv2)

      {
        if (setjmp(emlrtJBEnviron) == 0) {
          d_st.prev = sp;
          d_st.tls = emlrtAllocTLS(sp, omp_get_thread_num());
          d_st.site = NULL;
          emlrtSetJmpBuf(&d_st, &emlrtJBEnviron);
          e_st.prev = &d_st;
          e_st.tls = d_st.tls;
          f_st.prev = &e_st;
          f_st.tls = e_st.tls;
          g_st.prev = &f_st;
          g_st.tls = f_st.tls;
          h_st.prev = &g_st;
          h_st.tls = g_st.tls;
          emxInit_real_T(&d_st, &r2, 2, &p_emlrtRTEI, true);
          emxInit_real_T(&d_st, &a, 2, &p_emlrtRTEI, true);
          emxInit_real_T(&d_st, &b_A0, 2, &p_emlrtRTEI, true);
          emxInit_int32_T(&d_st, &r1, 1, &p_emlrtRTEI, true);
          emxInit_int32_T(&d_st, &r0, 1, &p_emlrtRTEI, true);
        } else {
          emlrtHadParallelError = true;
        }

#pragma omp for nowait

        for (b_i = 0; b_i <= m; b_i++) {
          if (emlrtHadParallelError)
            continue;
          if (setjmp(emlrtJBEnviron) == 0) {
            /* sum = 0; */
            /* for i=1:m */
            loop_ub = A->size[0];
            i1 = r0->size[0];
            r0->size[0] = loop_ub;
            emxEnsureCapacity(&d_st, (emxArray__common *)r0, i1, (int32_T)sizeof
                              (int32_T), &p_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              r0->data[i1] = i1;
            }

            loop_ub = A->size[1];
            i1 = r1->size[0];
            r1->size[0] = loop_ub;
            emxEnsureCapacity(&d_st, (emxArray__common *)r1, i1, (int32_T)sizeof
                              (int32_T), &p_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              r1->data[i1] = i1;
            }

            i1 = A->size[2];
            i2 = b_i + 1;
            emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &g_emlrtBCI, &d_st);
            i1 = A0->size[2];
            i2 = b_i + 1;
            emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &i_emlrtBCI, &d_st);
            e_st.site = &d_emlrtRSI;
            f_st.site = &uc_emlrtRSI;
            g_st.site = &vc_emlrtRSI;
            if ((beta < 0.0) && (k != k)) {
              h_st.site = &wc_emlrtRSI;
              d_eml_error(&h_st);
            }

            b_a = alpha * muDoubleScalarPower(beta, k);
            i1 = eta->size[2];
            i2 = b_i + 1;
            emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &h_emlrtBCI, &d_st);
            loop_ub = A0->size[0];
            b_loop_ub = A0->size[1];
            i1 = b_A0->size[0] * b_A0->size[1];
            b_A0->size[0] = loop_ub;
            b_A0->size[1] = b_loop_ub;
            emxEnsureCapacity(&d_st, (emxArray__common *)b_A0, i1, (int32_T)
                              sizeof(real_T), &p_emlrtRTEI);
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              for (i2 = 0; i2 < loop_ub; i2++) {
                b_A0->data[i2 + b_A0->size[0] * i1] = A0->data[(i2 + A0->size[0]
                  * i1) + A0->size[0] * A0->size[1] * b_i];
              }
            }

            loop_ub = eta->size[0];
            b_loop_ub = eta->size[1];
            i1 = a->size[0] * a->size[1];
            a->size[0] = loop_ub;
            a->size[1] = b_loop_ub;
            emxEnsureCapacity(&d_st, (emxArray__common *)a, i1, (int32_T)sizeof
                              (real_T), &p_emlrtRTEI);
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              for (i2 = 0; i2 < loop_ub; i2++) {
                a->data[i2 + a->size[0] * i1] = b_a * eta->data[(i2 + eta->size
                  [0] * i1) + eta->size[0] * eta->size[1] * b_i];
              }
            }

            e_st.site = &d_emlrtRSI;
            expmapPSR(&e_st, b_A0, a, r2);
            iv2[0] = r0->size[0];
            iv2[1] = r1->size[0];
            emlrtSubAssignSizeCheckR2012b(iv2, 2, *(int32_T (*)[2])r2->size, 2,
              &c_emlrtECI, &d_st);
            loop_ub = r2->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              b_loop_ub = r2->size[0];
              for (i2 = 0; i2 < b_loop_ub; i2++) {
                A->data[(r0->data[i2] + A->size[0] * r1->data[i1]) + A->size[0] *
                  A->size[1] * b_i] = r2->data[i2 + r2->size[0] * i1];
              }
            }

            /* sum = sum + sigma*alpha*beta^k*sqrt(eta(:,i)'*eta(:,i)); */
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &d_st);
          } else {
            emlrtHadParallelError = true;
          }
        }

        if (!emlrtHadParallelError) {
          emlrtHeapReferenceStackLeaveScope(&d_st, 5);
          emxFree_int32_T(&r0);
          emxFree_int32_T(&r1);
          emxFree_real_T(&b_A0);
          emxFree_real_T(&a);
          emxFree_real_T(&r2);
        }
      }

      emlrtPopJmpBuf(sp, &emlrtJBStack);
      emlrtExitParallelRegion(sp, omp_in_parallel());
      st.site = &e_emlrtRSI;
      obj_new = objPSR(&st, X, W, A);
      if (obj_new < obj_old) {
        exitg2 = true;
      } else {
        i++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }
    }

    emlrtAssertMATLABThread(sp, &i_emlrtRTEI);
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv3);
    for (i = 0; i < 10; i++) {
      cv0[i] = cv1[i];
    }

    emlrtInitCharArrayR2013a(sp, 10, m0, cv0);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m0 = emlrtCreateDoubleScalar(k);
    emlrtAssign(&b_y, m0);
    st.site = &xd_emlrtRSI;
    b_fprintf(&st, y, b_y, &emlrtMCI);
    if (obj_old < obj_new) {
      emlrtAssertMATLABThread(sp, &j_emlrtRTEI);
      c_y = NULL;
      m0 = emlrtCreateCharArray(2, iv4);
      for (i = 0; i < 21; i++) {
        cv2[i] = cv3[i];
      }

      emlrtInitCharArrayR2013a(sp, 21, m0, cv2);
      emlrtAssign(&c_y, m0);
      st.site = &ae_emlrtRSI;
      c_fprintf(&st, c_y, &b_emlrtMCI);
    }

    if ((obj_old - obj_new) / (real_T)n < eps) {
      emlrtAssertMATLABThread(sp, &k_emlrtRTEI);
      d_y = NULL;
      m0 = emlrtCreateCharArray(2, iv5);
      for (i = 0; i < 13; i++) {
        cv4[i] = cv5[i];
      }

      emlrtInitCharArrayR2013a(sp, 13, m0, cv4);
      emlrtAssign(&d_y, m0);
      st.site = &yd_emlrtRSI;
      c_fprintf(&st, d_y, &c_emlrtMCI);
      exitg1 = true;
    } else {
      b_eta = A0->size[0] * A0->size[1] * A0->size[2];
      A0->size[0] = A->size[0];
      A0->size[1] = A->size[1];
      A0->size[2] = A->size[2];
      emxEnsureCapacity(sp, (emxArray__common *)A0, b_eta, (int32_T)sizeof
                        (real_T), &p_emlrtRTEI);
      i = A->size[0] * A->size[1] * A->size[2];
      for (b_eta = 0; b_eta < i; b_eta++) {
        A0->data[b_eta] = A->data[b_eta];
      }

      obj_old = obj_new;
      b_iter++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }
  }

  emxFree_real_T(&G);
  emxFree_real_T(&b_A);
  emxFree_real_T(&AA);
  emxFree_real_T(&b_W);
  emxFree_real_T(&r2);
  emxFree_int32_T(&r1);
  emxFree_int32_T(&r0);
  emxFree_real_T(&eta);
  emxFree_real_T(&gradA);
  emlrtAssertMATLABThread(sp, &l_emlrtRTEI);
  e_y = NULL;
  m0 = emlrtCreateCharArray(2, iv6);
  for (i = 0; i < 13; i++) {
    cv4[i] = cv6[i];
  }

  emlrtInitCharArrayR2013a(sp, 13, m0, cv4);
  emlrtAssign(&e_y, m0);
  f_y = NULL;
  m0 = emlrtCreateDoubleScalar(iter);
  emlrtAssign(&f_y, m0);
  st.site = &wd_emlrtRSI;
  b_fprintf(&st, e_y, f_y, &d_emlrtMCI);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (optAPSR.c) */
