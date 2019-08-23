/*
 * optAPSR_AGD.c
 *
 * Code generation for function 'optAPSR_AGD'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD.h"
#include "norm.h"
#include "optAPSR_AGD_emxutil.h"
#include "gradientASR.h"
#include "squeeze.h"
#include "projectT.h"
#include "expmapPSR.h"
#include "_coder_optAPSR_AGD_api.h"
#include "objPSR.h"
#include "optAPSR_AGD_mexutil.h"
#include "optAPSR_AGD_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 36, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRSInfo b_emlrtRSI = { 40, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRSInfo c_emlrtRSI = { 42, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRSInfo d_emlrtRSI = { 49, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRSInfo e_emlrtRSI = { 50, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRSInfo f_emlrtRSI = { 51, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRSInfo g_emlrtRSI = { 53, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRSInfo i_emlrtRSI = { 17, "gradientAPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientAPSR.m"
};

static emlrtRSInfo j_emlrtRSI = { 18, "gradientAPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientAPSR.m"
};

static emlrtRSInfo k_emlrtRSI = { 19, "gradientAPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientAPSR.m"
};

static emlrtRSInfo ic_emlrtRSI = { 14, "projectTP",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectTP.m"
};

static emlrtRSInfo jc_emlrtRSI = { 15, "projectTP",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectTP.m"
};

static emlrtRSInfo kc_emlrtRSI = { 16, "projectTP",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectTP.m"
};

static emlrtRSInfo qc_emlrtRSI = { 12, "logmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSR.m"
};

static emlrtRSInfo rc_emlrtRSI = { 13, "logmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSR.m"
};

static emlrtRSInfo sc_emlrtRSI = { 15, "logmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSR.m"
};

static emlrtRSInfo tc_emlrtRSI = { 17, "logmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSR.m"
};

static emlrtRSInfo uc_emlrtRSI = { 21, "logmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSR.m"
};

static emlrtRSInfo vc_emlrtRSI = { 24, "logmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSR.m"
};

static emlrtMCInfo emlrtMCI = { 56, 9, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtMCInfo b_emlrtMCI = { 65, 1, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 1, 32, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRTEInfo tb_emlrtRTEI = { 18, 5, "gradientAPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientAPSR.m"
};

static emlrtRTEInfo ub_emlrtRTEI = { 14, 5, "projectTP",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectTP.m"
};

static emlrtRTEInfo vb_emlrtRTEI = { 15, 5, "projectTP",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectTP.m"
};

static emlrtRTEInfo wb_emlrtRTEI = { 17, 1, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRTEInfo xb_emlrtRTEI = { 18, 1, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRTEInfo yb_emlrtRTEI = { 40, 5, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRTEInfo ac_emlrtRTEI = { 42, 5, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRTEInfo bc_emlrtRTEI = { 47, 5, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRTEInfo cc_emlrtRTEI = { 12, 5, "logmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSR.m"
};

static emlrtRTEInfo dc_emlrtRTEI = { 13, 5, "logmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSR.m"
};

static emlrtECInfo l_emlrtECI = { -1, 26, 5, "logmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSR.m"
};

static emlrtBCInfo db_emlrtBCI = { -1, -1, 26, 9, "V", "logmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSR.m",
  0 };

static emlrtECInfo m_emlrtECI = { -1, 16, 9, "logmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSR.m"
};

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 13, 21, "Y", "logmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSR.m",
  0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 12, 21, "X", "logmapPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/logmapPSR.m",
  0 };

static emlrtECInfo n_emlrtECI = { -1, 16, 5, "projectTP",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectTP.m"
};

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 16, 9, "P", "projectTP",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectTP.m",
  0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 15, 22, "GG", "projectTP",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectTP.m",
  0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 14, 22, "AA", "projectTP",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/projectTP.m",
  0 };

static emlrtECInfo o_emlrtECI = { -1, 19, 5, "gradientAPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientAPSR.m"
};

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 19, 13, "gradA", "gradientAPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientAPSR.m",
  0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 18, 22, "XX", "gradientAPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientAPSR.m",
  0 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 17, 22, "AA", "gradientAPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/gradientAPSR.m",
  0 };

static emlrtECInfo p_emlrtECI = { -1, 51, 9, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 51, 15, "A", "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m",
  0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 51, 51, "V", "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m",
  0 };

static emlrtECInfo q_emlrtECI = { -1, 50, 9, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 50, 15, "V", "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m",
  0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 51, 36, "B", "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m",
  0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 50, 46, "B0", "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m",
  0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 50, 36, "B", "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m",
  0 };

static emlrtECInfo r_emlrtECI = { -1, 49, 9, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 49, 15, "B", "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m",
  0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 49, 55, "eta", "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m",
  0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 49, 37, "A0", "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m",
  0 };

static emlrtRTEInfo fc_emlrtRTEI = { 34, 1, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRSInfo ce_emlrtRSI = { 65, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

static emlrtRSInfo de_emlrtRSI = { 56, "optAPSR_AGD",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/optAPSR_AGD.m"
};

/* Function Declarations */
static void b_fprintf(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                      *location);
static void c_fprintf(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                      emlrtMCInfo *location);

/* Function Definitions */
static void b_fprintf(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                      *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "fprintf", true, location);
}

static void c_fprintf(const emlrtStack *sp, const mxArray *b, const mxArray *c,
                      emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = b;
  pArrays[1] = c;
  emlrtCallMATLABR2012b(sp, 0, NULL, 2, pArrays, "fprintf", true, location);
}

void optAPSR_AGD(const emlrtStack *sp, const emxArray_real_T *X, const
                 emxArray_real_T *W, emxArray_real_T *A0, const struct0_T *param,
                 real_T obj_old, emxArray_real_T *A, real_T *obj_new)
{
  int32_T n;
  int32_T m;
  int32_T i20;
  int32_T loop_ub;
  emxArray_real_T *B0;
  emxArray_real_T *B;
  real_T lambda0;
  real_T epsAGD;
  real_T beta;
  real_T s;
  int32_T b_s;
  emxArray_real_T *gradA;
  emxArray_real_T *eta;
  emxArray_real_T *V;
  emxArray_int32_T *r13;
  emxArray_int32_T *r14;
  emxArray_real_T *b_W;
  emxArray_real_T *AA;
  emxArray_real_T *b_X;
  emxArray_real_T *Y;
  emxArray_real_T *b_A;
  emxArray_int32_T *r15;
  emxArray_int32_T *r16;
  emxArray_real_T *r17;
  emxArray_real_T *x;
  emxArray_real_T *y;
  emxArray_int32_T *r18;
  emxArray_real_T *a;
  emxArray_real_T *b_B;
  emxArray_real_T *b_gamma;
  emxArray_real_T *b_A0;
  emxArray_real_T *b_y;
  emxArray_real_T *b_Y;
  emxArray_real_T *c_X;
  emxArray_real_T *c_B;
  boolean_T exitg1;
  real_T lambda;
  real_T c_gamma;
  int32_T i21;
  uint32_T uv2[3];
  int32_T ub_loop;
  int32_T i;
  emxArray_real_T *b_V;
  emxArray_real_T *b_AA;
  emxArray_real_T *d_X;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i22;
  int32_T i23;
  int32_T i24;
  int32_T iv50[3];
  int32_T unnamed_idx_0;
  int32_T unnamed_idx_2;
  emxArray_real_T *b_gradA;
  emxArray_real_T *c_AA;
  emxArray_real_T *G;
  int32_T iv51[3];
  int32_T b_i;
  int32_T c_i;
  int32_T iv52[2];
  int32_T i25;
  uint32_T uv3[2];
  const mxArray *c_y;
  static const int32_T iv53[2] = { 1, 45 };

  const mxArray *m17;
  char_T cv48[45];
  static const char_T cv49[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *d_y;
  static const int32_T iv54[2] = { 1, 21 };

  char_T cv50[21];
  static const char_T cv51[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  real_T temp;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * xix0_t;
  double * yiy0_t;
  int32_T iv55[1];
  int32_T iv56[2];
  int32_T iv57[2];
  const mxArray *e_y;
  static const int32_T iv58[2] = { 1, 13 };

  char_T cv52[13];
  static const char_T cv53[13] = { 'e', 'p', 's', ' ', 'r', 'e', 'a', 'c', 'h',
    'e', 'd', '\\', 'n' };

  const mxArray *f_y;
  static const int32_T iv59[2] = { 1, 13 };

  static const char_T cv54[13] = { 'm', 'a', 'x', 'i', 't', 'e', 'r', ':', ' ',
    '%', 'd', '\\', 'n' };

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
  boolean_T emlrtHadParallelError = false;
  st.prev = sp;
  st.tls = sp->tls;
  d_st.prev = &st;
  d_st.tls = st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &e_st;
  g_st.tls = e_st.tls;
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

  /*  initialization for AGD */
  i20 = A->size[0] * A->size[1] * A->size[2];
  A->size[0] = A0->size[0];
  A->size[1] = A0->size[1];
  A->size[2] = A0->size[2];
  emxEnsureCapacity(sp, (emxArray__common *)A, i20, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = A0->size[0] * A0->size[1] * A0->size[2];
  for (i20 = 0; i20 < loop_ub; i20++) {
    A->data[i20] = A0->data[i20];
  }

  emxInit_real_T(sp, &B0, 3, &wb_emlrtRTEI, true);
  i20 = B0->size[0] * B0->size[1] * B0->size[2];
  B0->size[0] = A0->size[0];
  B0->size[1] = A0->size[1];
  B0->size[2] = A0->size[2];
  emxEnsureCapacity(sp, (emxArray__common *)B0, i20, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = A0->size[0] * A0->size[1] * A0->size[2];
  for (i20 = 0; i20 < loop_ub; i20++) {
    B0->data[i20] = A0->data[i20];
  }

  emxInit_real_T(sp, &B, 3, &xb_emlrtRTEI, true);
  i20 = B->size[0] * B->size[1] * B->size[2];
  B->size[0] = A0->size[0];
  B->size[1] = A0->size[1];
  B->size[2] = A0->size[2];
  emxEnsureCapacity(sp, (emxArray__common *)B, i20, (int32_T)sizeof(real_T),
                    &l_emlrtRTEI);
  loop_ub = A0->size[0] * A0->size[1] * A0->size[2];
  for (i20 = 0; i20 < loop_ub; i20++) {
    B->data[i20] = A0->data[i20];
  }

  lambda0 = 1.0;

  /*  parameters */
  epsAGD = param->epsAGD;
  beta = param->beta;

  /*  initial objective values */
  /*  obj_old = objPSR(X,W,A0); */
  *obj_new = 2.0 * obj_old;

  /* % Main loop */
  i20 = (int32_T)param->maxiterAGD;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, param->maxiterAGD, mxDOUBLE_CLASS,
    (int32_T)param->maxiterAGD, &fc_emlrtRTEI, sp);
  s = 1.0;
  b_s = 0;
  emxInit_real_T(sp, &gradA, 3, &yb_emlrtRTEI, true);
  emxInit_real_T(sp, &eta, 3, &ac_emlrtRTEI, true);
  emxInit_real_T(sp, &V, 3, &bc_emlrtRTEI, true);
  emxInit_int32_T(sp, &r13, 1, &l_emlrtRTEI, true);
  emxInit_int32_T(sp, &r14, 1, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_W, 2, &l_emlrtRTEI, true);
  emxInit_real_T(sp, &AA, 3, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_X, 2, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &Y, 2, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_A, 2, &ub_emlrtRTEI, true);
  emxInit_int32_T(sp, &r15, 1, &l_emlrtRTEI, true);
  emxInit_int32_T(sp, &r16, 1, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r17, 2, &l_emlrtRTEI, true);
  c_emxInit_real_T(sp, &x, 1, &cc_emlrtRTEI, true);
  c_emxInit_real_T(sp, &y, 1, &dc_emlrtRTEI, true);
  emxInit_int32_T(sp, &r18, 1, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &a, 2, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_B, 2, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_gamma, 2, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_A0, 2, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_y, 2, &l_emlrtRTEI, true);
  c_emxInit_real_T(sp, &b_Y, 1, &l_emlrtRTEI, true);
  c_emxInit_real_T(sp, &c_X, 1, &l_emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_B, 2, &l_emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && (b_s <= i20 - 1)) {
    s = 1.0 + (real_T)b_s;
    st.site = &emlrtRSI;
    lambda = (1.0 + muDoubleScalarSqrt(1.0 + 4.0 * (lambda0 * lambda0))) / 2.0;
    c_gamma = (1.0 - lambda0) / lambda;

    /*  compute gradient */
    st.site = &b_emlrtRSI;
    i21 = V->size[0] * V->size[1] * V->size[2];
    V->size[0] = X->size[0];
    V->size[1] = X->size[1];
    V->size[2] = X->size[2];
    emxEnsureCapacity(&st, (emxArray__common *)V, i21, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = X->size[0] * X->size[1] * X->size[2];
    for (i21 = 0; i21 < loop_ub; i21++) {
      V->data[i21] = X->data[i21];
    }

    i21 = b_W->size[0] * b_W->size[1];
    b_W->size[0] = W->size[0];
    b_W->size[1] = W->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b_W, i21, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = W->size[0] * W->size[1];
    for (i21 = 0; i21 < loop_ub; i21++) {
      b_W->data[i21] = W->data[i21];
    }

    i21 = AA->size[0] * AA->size[1] * AA->size[2];
    AA->size[0] = A0->size[0];
    AA->size[1] = A0->size[1];
    AA->size[2] = A0->size[2];
    emxEnsureCapacity(&st, (emxArray__common *)AA, i21, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = A0->size[0] * A0->size[1] * A0->size[2];
    for (i21 = 0; i21 < loop_ub; i21++) {
      AA->data[i21] = A0->data[i21];
    }

    /*  compute the gradient with respect to A */
    /*  Input: */
    /*      XX - input square root density data (d-by-N-by-n) */
    /*      W - coefficient matrix (m-by-n) */
    /*      AA - initial atoms in dictionary (d-by-N-by-m) */
    /*  Output: */
    /*      gradA - the gradient with respect to A (d-by-N-by-m) */
    /* % Initialization */
    uv2[0] = (uint32_T)A0->size[0];
    uv2[1] = (uint32_T)A0->size[1];
    uv2[2] = (uint32_T)A0->size[2];
    i21 = gradA->size[0] * gradA->size[1] * gradA->size[2];
    gradA->size[0] = (int32_T)uv2[0];
    emxEnsureCapacity(&st, (emxArray__common *)gradA, i21, (int32_T)sizeof
                      (real_T), &l_emlrtRTEI);
    i21 = gradA->size[0] * gradA->size[1] * gradA->size[2];
    gradA->size[1] = (int32_T)uv2[1];
    emxEnsureCapacity(&st, (emxArray__common *)gradA, i21, (int32_T)sizeof
                      (real_T), &l_emlrtRTEI);
    i21 = gradA->size[0] * gradA->size[1] * gradA->size[2];
    gradA->size[2] = (int32_T)uv2[2];
    emxEnsureCapacity(&st, (emxArray__common *)gradA, i21, (int32_T)sizeof
                      (real_T), &l_emlrtRTEI);
    loop_ub = (int32_T)uv2[0] * (int32_T)uv2[1] * (int32_T)uv2[2];
    for (i21 = 0; i21 < loop_ub; i21++) {
      gradA->data[i21] = 0.0;
    }

    i21 = A0->size[1];
    ub_loop = i21 - 1;
    emlrtEnterParallelRegion(&st, omp_in_parallel());
    emlrtPushJmpBuf(&st, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(st.tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(r17,r16,r15,b_V,b_AA,b_A,d_X,b_loop_ub,c_loop_ub,i22,i23,i24,unnamed_idx_0,unnamed_idx_2,emlrtJBEnviron) \
 firstprivate(b_st,st,i_st,iv50,emlrtHadParallelError)

    {
      if (setjmp(emlrtJBEnviron) == 0) {
        b_st.prev = &st;
        b_st.tls = emlrtAllocTLS(&st, omp_get_thread_num());
        b_st.site = NULL;
        emlrtSetJmpBuf(&b_st, &emlrtJBEnviron);
        i_st.prev = &b_st;
        i_st.tls = b_st.tls;
        b_emxInit_real_T(&b_st, &r17, 2, &l_emlrtRTEI, true);
        emxInit_int32_T(&b_st, &r16, 1, &l_emlrtRTEI, true);
        emxInit_int32_T(&b_st, &r15, 1, &l_emlrtRTEI, true);
        emxInit_real_T(&b_st, &b_V, 3, &l_emlrtRTEI, true);
        emxInit_real_T(&b_st, &b_AA, 3, &l_emlrtRTEI, true);
        b_emxInit_real_T(&b_st, &b_A, 2, &ub_emlrtRTEI, true);
        b_emxInit_real_T(&b_st, &d_X, 2, &tb_emlrtRTEI, true);
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
          i22 = AA->size[1];
          i23 = 1 + i;
          i22 = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &lb_emlrtBCI,
            &b_st);
          i23 = b_AA->size[0] * b_AA->size[1] * b_AA->size[2];
          b_AA->size[0] = b_loop_ub;
          b_AA->size[1] = 1;
          b_AA->size[2] = c_loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)b_AA, i23, (int32_T)
                            sizeof(real_T), &l_emlrtRTEI);
          for (i23 = 0; i23 < c_loop_ub; i23++) {
            for (i24 = 0; i24 < b_loop_ub; i24++) {
              b_AA->data[i24 + b_AA->size[0] * b_AA->size[1] * i23] = AA->data
                [(i24 + AA->size[0] * (i22 - 1)) + AA->size[0] * AA->size[1] *
                i23];
            }
          }

          i_st.site = &i_emlrtRSI;
          squeeze(&i_st, b_AA, b_A);
          b_loop_ub = V->size[0];
          c_loop_ub = V->size[2];
          i22 = V->size[1];
          i23 = 1 + i;
          i22 = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &kb_emlrtBCI,
            &b_st);
          i23 = b_V->size[0] * b_V->size[1] * b_V->size[2];
          b_V->size[0] = b_loop_ub;
          b_V->size[1] = 1;
          b_V->size[2] = c_loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)b_V, i23, (int32_T)sizeof
                            (real_T), &l_emlrtRTEI);
          for (i23 = 0; i23 < c_loop_ub; i23++) {
            for (i24 = 0; i24 < b_loop_ub; i24++) {
              b_V->data[i24 + b_V->size[0] * b_V->size[1] * i23] = V->data[(i24
                + V->size[0] * (i22 - 1)) + V->size[0] * V->size[1] * i23];
            }
          }

          i_st.site = &j_emlrtRSI;
          squeeze(&i_st, b_V, d_X);
          b_loop_ub = gradA->size[0];
          i22 = r15->size[0];
          r15->size[0] = b_loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)r15, i22, (int32_T)sizeof
                            (int32_T), &l_emlrtRTEI);
          for (i22 = 0; i22 < b_loop_ub; i22++) {
            r15->data[i22] = i22;
          }

          i22 = gradA->size[1];
          i23 = i + 1;
          emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &jb_emlrtBCI, &b_st);
          b_loop_ub = gradA->size[2];
          i22 = r16->size[0];
          r16->size[0] = b_loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)r16, i22, (int32_T)sizeof
                            (int32_T), &l_emlrtRTEI);
          for (i22 = 0; i22 < b_loop_ub; i22++) {
            r16->data[i22] = i22;
          }

          i_st.site = &k_emlrtRSI;
          gradientASR(&i_st, d_X, b_W, b_A, r17);
          iv50[0] = r15->size[0];
          iv50[1] = 1;
          iv50[2] = r16->size[0];
          emlrtSubAssignSizeCheckR2012b(iv50, 3, *(int32_T (*)[2])r17->size, 2,
            &o_emlrtECI, &b_st);
          unnamed_idx_0 = r15->size[0];
          unnamed_idx_2 = r16->size[0];
          for (i22 = 0; i22 < unnamed_idx_2; i22++) {
            for (i23 = 0; i23 < unnamed_idx_0; i23++) {
              gradA->data[(r15->data[i23] + gradA->size[0] * i) + gradA->size[0]
                * gradA->size[1] * r16->data[i22]] = r17->data[i23 +
                unnamed_idx_0 * i22];
            }
          }

          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &b_st);
        } else {
          emlrtHadParallelError = true;
        }
      }

      if (!emlrtHadParallelError) {
        emlrtHeapReferenceStackLeaveScope(&b_st, 7);
        emxFree_real_T(&d_X);
        emxFree_real_T(&b_A);
        emxFree_real_T(&b_AA);
        emxFree_real_T(&b_V);
        emxFree_int32_T(&r15);
        emxFree_int32_T(&r16);
        emxFree_real_T(&r17);
      }
    }

    emlrtPopJmpBuf(&st, &emlrtJBStack);
    emlrtExitParallelRegion(&st, omp_in_parallel());

    /*  project to the tangent plane */
    st.site = &c_emlrtRSI;
    i21 = AA->size[0] * AA->size[1] * AA->size[2];
    AA->size[0] = A0->size[0];
    AA->size[1] = A0->size[1];
    AA->size[2] = A0->size[2];
    emxEnsureCapacity(&st, (emxArray__common *)AA, i21, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = A0->size[0] * A0->size[1] * A0->size[2];
    for (i21 = 0; i21 < loop_ub; i21++) {
      AA->data[i21] = A0->data[i21];
    }

    /*  project the gradient G to the tangent plane at A */
    /*  Input: */
    /*      AA - atoms in dictionary (d-by-N-by-m) */
    /*      GG - gradient with respect to A (d-by-N-by-m) */
    /*  Output: */
    /*      P - projected gradient (d-by-N-by-m) */
    uv2[0] = (uint32_T)A0->size[0];
    uv2[1] = (uint32_T)A0->size[1];
    uv2[2] = (uint32_T)A0->size[2];
    i21 = eta->size[0] * eta->size[1] * eta->size[2];
    eta->size[0] = (int32_T)uv2[0];
    emxEnsureCapacity(&st, (emxArray__common *)eta, i21, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i21 = eta->size[0] * eta->size[1] * eta->size[2];
    eta->size[1] = (int32_T)uv2[1];
    emxEnsureCapacity(&st, (emxArray__common *)eta, i21, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i21 = eta->size[0] * eta->size[1] * eta->size[2];
    eta->size[2] = (int32_T)uv2[2];
    emxEnsureCapacity(&st, (emxArray__common *)eta, i21, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = (int32_T)uv2[0] * (int32_T)uv2[1] * (int32_T)uv2[2];
    for (i21 = 0; i21 < loop_ub; i21++) {
      eta->data[i21] = 0.0;
    }

    i21 = A0->size[1];
    ub_loop = i21 - 1;
    emlrtEnterParallelRegion(&st, omp_in_parallel());
    emlrtPushJmpBuf(&st, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(st.tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(r17,r16,r15,b_gradA,c_AA,b_A,G,b_loop_ub,c_loop_ub,i22,i23,i24,unnamed_idx_0,unnamed_idx_2,emlrtJBEnviron) \
 firstprivate(c_st,st,h_st,iv51,emlrtHadParallelError)

    {
      if (setjmp(emlrtJBEnviron) == 0) {
        c_st.prev = &st;
        c_st.tls = emlrtAllocTLS(&st, omp_get_thread_num());
        c_st.site = NULL;
        emlrtSetJmpBuf(&c_st, &emlrtJBEnviron);
        h_st.prev = &c_st;
        h_st.tls = c_st.tls;
        b_emxInit_real_T(&c_st, &r17, 2, &l_emlrtRTEI, true);
        emxInit_int32_T(&c_st, &r16, 1, &l_emlrtRTEI, true);
        emxInit_int32_T(&c_st, &r15, 1, &l_emlrtRTEI, true);
        emxInit_real_T(&c_st, &b_gradA, 3, &l_emlrtRTEI, true);
        emxInit_real_T(&c_st, &c_AA, 3, &l_emlrtRTEI, true);
        b_emxInit_real_T(&c_st, &b_A, 2, &ub_emlrtRTEI, true);
        b_emxInit_real_T(&c_st, &G, 2, &vb_emlrtRTEI, true);
      } else {
        emlrtHadParallelError = true;
      }

#pragma omp for nowait

      for (i = 0; i <= ub_loop; i++) {
        if (emlrtHadParallelError)
          continue;
        if (setjmp(emlrtJBEnviron) == 0) {
          b_loop_ub = AA->size[0];
          c_loop_ub = AA->size[2];
          i22 = AA->size[1];
          i23 = 1 + i;
          i22 = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &ib_emlrtBCI,
            &c_st);
          i23 = c_AA->size[0] * c_AA->size[1] * c_AA->size[2];
          c_AA->size[0] = b_loop_ub;
          c_AA->size[1] = 1;
          c_AA->size[2] = c_loop_ub;
          emxEnsureCapacity(&c_st, (emxArray__common *)c_AA, i23, (int32_T)
                            sizeof(real_T), &l_emlrtRTEI);
          for (i23 = 0; i23 < c_loop_ub; i23++) {
            for (i24 = 0; i24 < b_loop_ub; i24++) {
              c_AA->data[i24 + c_AA->size[0] * c_AA->size[1] * i23] = AA->data
                [(i24 + AA->size[0] * (i22 - 1)) + AA->size[0] * AA->size[1] *
                i23];
            }
          }

          h_st.site = &ic_emlrtRSI;
          squeeze(&h_st, c_AA, b_A);
          b_loop_ub = gradA->size[0];
          c_loop_ub = gradA->size[2];
          i22 = gradA->size[1];
          i23 = 1 + i;
          i22 = emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &hb_emlrtBCI,
            &c_st);
          i23 = b_gradA->size[0] * b_gradA->size[1] * b_gradA->size[2];
          b_gradA->size[0] = b_loop_ub;
          b_gradA->size[1] = 1;
          b_gradA->size[2] = c_loop_ub;
          emxEnsureCapacity(&c_st, (emxArray__common *)b_gradA, i23, (int32_T)
                            sizeof(real_T), &l_emlrtRTEI);
          for (i23 = 0; i23 < c_loop_ub; i23++) {
            for (i24 = 0; i24 < b_loop_ub; i24++) {
              b_gradA->data[i24 + b_gradA->size[0] * b_gradA->size[1] * i23] =
                gradA->data[(i24 + gradA->size[0] * (i22 - 1)) + gradA->size[0] *
                gradA->size[1] * i23];
            }
          }

          h_st.site = &jc_emlrtRSI;
          squeeze(&h_st, b_gradA, G);
          b_loop_ub = eta->size[0];
          i22 = r15->size[0];
          r15->size[0] = b_loop_ub;
          emxEnsureCapacity(&c_st, (emxArray__common *)r15, i22, (int32_T)sizeof
                            (int32_T), &l_emlrtRTEI);
          for (i22 = 0; i22 < b_loop_ub; i22++) {
            r15->data[i22] = i22;
          }

          i22 = eta->size[1];
          i23 = i + 1;
          emlrtDynamicBoundsCheckFastR2012b(i23, 1, i22, &gb_emlrtBCI, &c_st);
          b_loop_ub = eta->size[2];
          i22 = r16->size[0];
          r16->size[0] = b_loop_ub;
          emxEnsureCapacity(&c_st, (emxArray__common *)r16, i22, (int32_T)sizeof
                            (int32_T), &l_emlrtRTEI);
          for (i22 = 0; i22 < b_loop_ub; i22++) {
            r16->data[i22] = i22;
          }

          h_st.site = &kc_emlrtRSI;
          projectT(&h_st, b_A, G, r17);
          iv51[0] = r15->size[0];
          iv51[1] = 1;
          iv51[2] = r16->size[0];
          emlrtSubAssignSizeCheckR2012b(iv51, 3, *(int32_T (*)[2])r17->size, 2,
            &n_emlrtECI, &c_st);
          unnamed_idx_0 = r15->size[0];
          unnamed_idx_2 = r16->size[0];
          for (i22 = 0; i22 < unnamed_idx_2; i22++) {
            for (i23 = 0; i23 < unnamed_idx_0; i23++) {
              eta->data[(r15->data[i23] + eta->size[0] * i) + eta->size[0] *
                eta->size[1] * r16->data[i22]] = r17->data[i23 + unnamed_idx_0 *
                i22];
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
        emxFree_int32_T(&r15);
        emxFree_int32_T(&r16);
        emxFree_real_T(&r17);
      }
    }

    emlrtPopJmpBuf(&st, &emlrtJBStack);
    emlrtExitParallelRegion(&st, omp_in_parallel());

    /*  set the descent direction (negative gradient) */
    i21 = eta->size[0] * eta->size[1] * eta->size[2];
    emxEnsureCapacity(sp, (emxArray__common *)eta, i21, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    b_i = eta->size[0];
    ub_loop = eta->size[1];
    loop_ub = eta->size[2];
    loop_ub *= b_i * ub_loop;
    for (i21 = 0; i21 < loop_ub; i21++) {
      eta->data[i21] = -eta->data[i21];
    }

    /*  update the dictionary atoms */
    for (i21 = 0; i21 < 3; i21++) {
      uv2[i21] = (uint32_T)B->size[i21];
    }

    i21 = V->size[0] * V->size[1] * V->size[2];
    V->size[0] = (int32_T)uv2[0];
    emxEnsureCapacity(sp, (emxArray__common *)V, i21, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i21 = V->size[0] * V->size[1] * V->size[2];
    V->size[1] = (int32_T)uv2[1];
    emxEnsureCapacity(sp, (emxArray__common *)V, i21, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    i21 = V->size[0] * V->size[1] * V->size[2];
    V->size[2] = (int32_T)uv2[2];
    emxEnsureCapacity(sp, (emxArray__common *)V, i21, (int32_T)sizeof(real_T),
                      &l_emlrtRTEI);
    loop_ub = (int32_T)uv2[0] * (int32_T)uv2[1] * (int32_T)uv2[2];
    for (i21 = 0; i21 < loop_ub; i21++) {
      V->data[i21] = 0.0;
    }

    c_i = 0;
    while (c_i <= m - 1) {
      loop_ub = B->size[0];
      i21 = r13->size[0];
      r13->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)r13, i21, (int32_T)sizeof
                        (int32_T), &l_emlrtRTEI);
      for (i21 = 0; i21 < loop_ub; i21++) {
        r13->data[i21] = i21;
      }

      loop_ub = B->size[1];
      i21 = r14->size[0];
      r14->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)r14, i21, (int32_T)sizeof
                        (int32_T), &l_emlrtRTEI);
      for (i21 = 0; i21 < loop_ub; i21++) {
        r14->data[i21] = i21;
      }

      i21 = B->size[2];
      b_i = c_i + 1;
      emlrtDynamicBoundsCheckFastR2012b(b_i, 1, i21, &sb_emlrtBCI, sp);
      i21 = A0->size[2];
      b_i = c_i + 1;
      emlrtDynamicBoundsCheckFastR2012b(b_i, 1, i21, &ub_emlrtBCI, sp);
      lambda0 = 1.0 / beta;
      i21 = eta->size[2];
      b_i = c_i + 1;
      emlrtDynamicBoundsCheckFastR2012b(b_i, 1, i21, &tb_emlrtBCI, sp);
      loop_ub = A0->size[0];
      ub_loop = A0->size[1];
      i21 = b_A0->size[0] * b_A0->size[1];
      b_A0->size[0] = loop_ub;
      b_A0->size[1] = ub_loop;
      emxEnsureCapacity(sp, (emxArray__common *)b_A0, i21, (int32_T)sizeof
                        (real_T), &l_emlrtRTEI);
      for (i21 = 0; i21 < ub_loop; i21++) {
        for (b_i = 0; b_i < loop_ub; b_i++) {
          b_A0->data[b_i + b_A0->size[0] * i21] = A0->data[(b_i + A0->size[0] *
            i21) + A0->size[0] * A0->size[1] * c_i];
        }
      }

      loop_ub = eta->size[0];
      ub_loop = eta->size[1];
      i21 = b_y->size[0] * b_y->size[1];
      b_y->size[0] = loop_ub;
      b_y->size[1] = ub_loop;
      emxEnsureCapacity(sp, (emxArray__common *)b_y, i21, (int32_T)sizeof(real_T),
                        &l_emlrtRTEI);
      for (i21 = 0; i21 < ub_loop; i21++) {
        for (b_i = 0; b_i < loop_ub; b_i++) {
          b_y->data[b_i + b_y->size[0] * i21] = lambda0 * eta->data[(b_i +
            eta->size[0] * i21) + eta->size[0] * eta->size[1] * c_i];
        }
      }

      st.site = &d_emlrtRSI;
      expmapPSR(&st, b_A0, b_y, b_W);
      iv52[0] = r13->size[0];
      iv52[1] = r14->size[0];
      emlrtSubAssignSizeCheckR2012b(iv52, 2, *(int32_T (*)[2])b_W->size, 2,
        &r_emlrtECI, sp);
      loop_ub = b_W->size[1];
      for (i21 = 0; i21 < loop_ub; i21++) {
        ub_loop = b_W->size[0];
        for (b_i = 0; b_i < ub_loop; b_i++) {
          B->data[(r13->data[b_i] + B->size[0] * r14->data[i21]) + B->size[0] *
            B->size[1] * c_i] = b_W->data[b_i + b_W->size[0] * i21];
        }
      }

      loop_ub = V->size[0];
      i21 = r13->size[0];
      r13->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)r13, i21, (int32_T)sizeof
                        (int32_T), &l_emlrtRTEI);
      for (i21 = 0; i21 < loop_ub; i21++) {
        r13->data[i21] = i21;
      }

      loop_ub = V->size[1];
      i21 = r14->size[0];
      r14->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)r14, i21, (int32_T)sizeof
                        (int32_T), &l_emlrtRTEI);
      for (i21 = 0; i21 < loop_ub; i21++) {
        r14->data[i21] = i21;
      }

      i21 = V->size[2];
      b_i = c_i + 1;
      emlrtDynamicBoundsCheckFastR2012b(b_i, 1, i21, &ob_emlrtBCI, sp);
      st.site = &e_emlrtRSI;
      loop_ub = B->size[0];
      ub_loop = B->size[1];
      i21 = B->size[2];
      b_i = 1 + c_i;
      i21 = emlrtDynamicBoundsCheckFastR2012b(b_i, 1, i21, &rb_emlrtBCI, &st);
      b_i = b_X->size[0] * b_X->size[1];
      b_X->size[0] = loop_ub;
      b_X->size[1] = ub_loop;
      emxEnsureCapacity(&st, (emxArray__common *)b_X, b_i, (int32_T)sizeof
                        (real_T), &l_emlrtRTEI);
      for (b_i = 0; b_i < ub_loop; b_i++) {
        for (i25 = 0; i25 < loop_ub; i25++) {
          b_X->data[i25 + b_X->size[0] * b_i] = B->data[(i25 + B->size[0] * b_i)
            + B->size[0] * B->size[1] * (i21 - 1)];
        }
      }

      loop_ub = B0->size[0];
      ub_loop = B0->size[1];
      i21 = B0->size[2];
      b_i = 1 + c_i;
      i21 = emlrtDynamicBoundsCheckFastR2012b(b_i, 1, i21, &qb_emlrtBCI, &st);
      b_i = Y->size[0] * Y->size[1];
      Y->size[0] = loop_ub;
      Y->size[1] = ub_loop;
      emxEnsureCapacity(&st, (emxArray__common *)Y, b_i, (int32_T)sizeof(real_T),
                        &l_emlrtRTEI);
      for (b_i = 0; b_i < ub_loop; b_i++) {
        for (i25 = 0; i25 < loop_ub; i25++) {
          Y->data[i25 + Y->size[0] * b_i] = B0->data[(i25 + B0->size[0] * b_i) +
            B0->size[0] * B0->size[1] * (i21 - 1)];
        }
      }

      /*  compute the log map on the product space of spheres log_X(Y) */
      /*  Input: */
      /*      X, Y - d-by-N matrices, points in the product space */
      /*  Output: */
      /*      V - logmap (d-by-N matrix) */
      loop_ub = B->size[0];
      ub_loop = B->size[1];
      i21 = c_B->size[0] * c_B->size[1];
      c_B->size[0] = loop_ub;
      c_B->size[1] = ub_loop;
      emxEnsureCapacity(&st, (emxArray__common *)c_B, i21, (int32_T)sizeof
                        (real_T), &l_emlrtRTEI);
      for (i21 = 0; i21 < ub_loop; i21++) {
        for (b_i = 0; b_i < loop_ub; b_i++) {
          c_B->data[b_i + c_B->size[0] * i21] = B->data[(b_i + B->size[0] * i21)
            + B->size[0] * B->size[1] * c_i];
        }
      }

      for (i21 = 0; i21 < 2; i21++) {
        uv3[i21] = (uint32_T)c_B->size[i21];
      }

      i21 = b_W->size[0] * b_W->size[1];
      b_W->size[0] = (int32_T)uv3[0];
      emxEnsureCapacity(&st, (emxArray__common *)b_W, i21, (int32_T)sizeof
                        (real_T), &l_emlrtRTEI);
      i21 = b_W->size[0] * b_W->size[1];
      b_W->size[1] = (int32_T)uv3[1];
      emxEnsureCapacity(&st, (emxArray__common *)b_W, i21, (int32_T)sizeof
                        (real_T), &l_emlrtRTEI);
      loop_ub = (int32_T)uv3[0] * (int32_T)uv3[1];
      for (i21 = 0; i21 < loop_ub; i21++) {
        b_W->data[i21] = 0.0;
      }

      /*  do logmap for each column of X and Y, which are d-by-1 vectors */
      i21 = B->size[1];
      ub_loop = 0;
      while (ub_loop <= i21 - 1) {
        loop_ub = B->size[0];
        b_i = B->size[1];
        i25 = 1 + ub_loop;
        emlrtDynamicBoundsCheckFastR2012b(i25, 1, b_i, &fb_emlrtBCI, &st);
        b_i = c_X->size[0];
        c_X->size[0] = loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)c_X, b_i, (int32_T)sizeof
                          (real_T), &l_emlrtRTEI);
        for (b_i = 0; b_i < loop_ub; b_i++) {
          c_X->data[b_i] = b_X->data[b_i + b_X->size[0] * ub_loop];
        }

        d_st.site = &qc_emlrtRSI;
        b_squeeze(&d_st, c_X, x);
        loop_ub = B0->size[0];
        b_i = B0->size[1];
        i25 = 1 + ub_loop;
        emlrtDynamicBoundsCheckFastR2012b(i25, 1, b_i, &eb_emlrtBCI, &st);
        b_i = b_Y->size[0];
        b_Y->size[0] = loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_Y, b_i, (int32_T)sizeof
                          (real_T), &l_emlrtRTEI);
        for (b_i = 0; b_i < loop_ub; b_i++) {
          b_Y->data[b_i] = Y->data[b_i + Y->size[0] * ub_loop];
        }

        d_st.site = &rc_emlrtRSI;
        b_squeeze(&d_st, b_Y, y);

        /*  logmap of SR */
        d_st.site = &sc_emlrtRSI;
        b_i = a->size[0] * a->size[1];
        a->size[0] = 1;
        a->size[1] = x->size[0];
        emxEnsureCapacity(&d_st, (emxArray__common *)a, b_i, (int32_T)sizeof
                          (real_T), &l_emlrtRTEI);
        loop_ub = x->size[0];
        for (b_i = 0; b_i < loop_ub; b_i++) {
          a->data[a->size[0] * b_i] = x->data[b_i];
        }

        e_st.site = &gb_emlrtRSI;
        if (!(a->size[1] == y->size[0])) {
          if ((a->size[1] == 1) || (y->size[0] == 1)) {
            emlrtAssertMATLABThread(&e_st, &b_emlrtRTEI);
            c_y = NULL;
            m17 = emlrtCreateCharArray(2, iv53);
            for (b_i = 0; b_i < 45; b_i++) {
              cv48[b_i] = cv49[b_i];
            }

            emlrtInitCharArrayR2013a(&e_st, 45, m17, cv48);
            emlrtAssign(&c_y, m17);
            f_st.site = &hd_emlrtRSI;
            g_st.site = &sd_emlrtRSI;
            error(&f_st, b_message(&g_st, c_y, &e_emlrtMCI), &f_emlrtMCI);
          } else {
            emlrtAssertMATLABThread(&e_st, &c_emlrtRTEI);
            d_y = NULL;
            m17 = emlrtCreateCharArray(2, iv54);
            for (b_i = 0; b_i < 21; b_i++) {
              cv50[b_i] = cv51[b_i];
            }

            emlrtInitCharArrayR2013a(&e_st, 21, m17, cv50);
            emlrtAssign(&d_y, m17);
            f_st.site = &id_emlrtRSI;
            g_st.site = &td_emlrtRSI;
            error(&f_st, b_message(&g_st, d_y, &g_emlrtMCI), &h_emlrtMCI);
          }
        }

        if ((a->size[1] == 1) || (y->size[0] == 1)) {
          temp = 0.0;
          for (b_i = 0; b_i < a->size[1]; b_i++) {
            temp += a->data[a->size[0] * b_i] * y->data[b_i];
          }
        } else {
          e_st.site = &xb_emlrtRSI;
          f_st.site = &yb_emlrtRSI;
          if (a->size[1] < 1) {
            temp = 0.0;
          } else {
            n_t = (ptrdiff_t)(a->size[1]);
            incx_t = (ptrdiff_t)(1);
            incy_t = (ptrdiff_t)(1);
            xix0_t = (double *)(&a->data[0]);
            yiy0_t = (double *)(&y->data[0]);
            temp = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
          }
        }

        b_i = x->size[0];
        emxEnsureCapacity(&st, (emxArray__common *)x, b_i, (int32_T)sizeof
                          (real_T), &l_emlrtRTEI);
        loop_ub = x->size[0];
        for (b_i = 0; b_i < loop_ub; b_i++) {
          x->data[b_i] *= temp;
        }

        b_i = y->size[0];
        i25 = x->size[0];
        emlrtSizeEqCheck1DFastR2012b(b_i, i25, &m_emlrtECI, &st);
        b_i = y->size[0];
        emxEnsureCapacity(&st, (emxArray__common *)y, b_i, (int32_T)sizeof
                          (real_T), &l_emlrtRTEI);
        loop_ub = y->size[0];
        for (b_i = 0; b_i < loop_ub; b_i++) {
          y->data[b_i] -= x->data[b_i];
        }

        d_st.site = &tc_emlrtRSI;
        lambda0 = norm(y);
        if (lambda0 == 0.0) {
        } else {
          d_st.site = &uc_emlrtRSI;
          lambda0 = norm(y);
          b_i = y->size[0];
          emxEnsureCapacity(&st, (emxArray__common *)y, b_i, (int32_T)sizeof
                            (real_T), &l_emlrtRTEI);
          loop_ub = y->size[0];
          for (b_i = 0; b_i < loop_ub; b_i++) {
            y->data[b_i] /= lambda0;
          }

          if (temp > 1.0) {
            temp = 1.0;
          }

          if (temp < -1.0) {
            temp = -1.0;
          }

          d_st.site = &vc_emlrtRSI;
          lambda0 = muDoubleScalarAcos(temp);
          b_i = y->size[0];
          emxEnsureCapacity(&st, (emxArray__common *)y, b_i, (int32_T)sizeof
                            (real_T), &l_emlrtRTEI);
          loop_ub = y->size[0];
          for (b_i = 0; b_i < loop_ub; b_i++) {
            y->data[b_i] *= lambda0;
          }
        }

        loop_ub = b_W->size[0];
        b_i = r18->size[0];
        r18->size[0] = loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r18, b_i, (int32_T)sizeof
                          (int32_T), &l_emlrtRTEI);
        for (b_i = 0; b_i < loop_ub; b_i++) {
          r18->data[b_i] = b_i;
        }

        b_i = b_W->size[1];
        i25 = ub_loop + 1;
        emlrtDynamicBoundsCheckFastR2012b(i25, 1, b_i, &db_emlrtBCI, &st);
        iv55[0] = r18->size[0];
        emlrtSubAssignSizeCheckR2012b(iv55, 1, *(int32_T (*)[1])y->size, 1,
          &l_emlrtECI, &st);
        loop_ub = y->size[0];
        for (b_i = 0; b_i < loop_ub; b_i++) {
          b_W->data[r18->data[b_i] + b_W->size[0] * ub_loop] = y->data[b_i];
        }

        ub_loop++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      }

      iv56[0] = r13->size[0];
      iv56[1] = r14->size[0];
      emlrtSubAssignSizeCheckR2012b(iv56, 2, *(int32_T (*)[2])b_W->size, 2,
        &q_emlrtECI, sp);
      loop_ub = b_W->size[1];
      for (i21 = 0; i21 < loop_ub; i21++) {
        ub_loop = b_W->size[0];
        for (b_i = 0; b_i < ub_loop; b_i++) {
          V->data[(r13->data[b_i] + V->size[0] * r14->data[i21]) + V->size[0] *
            V->size[1] * c_i] = b_W->data[b_i + b_W->size[0] * i21];
        }
      }

      loop_ub = A->size[0];
      i21 = r13->size[0];
      r13->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)r13, i21, (int32_T)sizeof
                        (int32_T), &l_emlrtRTEI);
      for (i21 = 0; i21 < loop_ub; i21++) {
        r13->data[i21] = i21;
      }

      loop_ub = A->size[1];
      i21 = r14->size[0];
      r14->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)r14, i21, (int32_T)sizeof
                        (int32_T), &l_emlrtRTEI);
      for (i21 = 0; i21 < loop_ub; i21++) {
        r14->data[i21] = i21;
      }

      i21 = A->size[2];
      b_i = c_i + 1;
      emlrtDynamicBoundsCheckFastR2012b(b_i, 1, i21, &mb_emlrtBCI, sp);
      i21 = B->size[2];
      b_i = c_i + 1;
      emlrtDynamicBoundsCheckFastR2012b(b_i, 1, i21, &pb_emlrtBCI, sp);
      i21 = V->size[2];
      b_i = c_i + 1;
      emlrtDynamicBoundsCheckFastR2012b(b_i, 1, i21, &nb_emlrtBCI, sp);
      loop_ub = B->size[0];
      ub_loop = B->size[1];
      i21 = b_B->size[0] * b_B->size[1];
      b_B->size[0] = loop_ub;
      b_B->size[1] = ub_loop;
      emxEnsureCapacity(sp, (emxArray__common *)b_B, i21, (int32_T)sizeof(real_T),
                        &l_emlrtRTEI);
      for (i21 = 0; i21 < ub_loop; i21++) {
        for (b_i = 0; b_i < loop_ub; b_i++) {
          b_B->data[b_i + b_B->size[0] * i21] = B->data[(b_i + B->size[0] * i21)
            + B->size[0] * B->size[1] * c_i];
        }
      }

      loop_ub = V->size[0];
      ub_loop = V->size[1];
      i21 = b_gamma->size[0] * b_gamma->size[1];
      b_gamma->size[0] = loop_ub;
      b_gamma->size[1] = ub_loop;
      emxEnsureCapacity(sp, (emxArray__common *)b_gamma, i21, (int32_T)sizeof
                        (real_T), &l_emlrtRTEI);
      for (i21 = 0; i21 < ub_loop; i21++) {
        for (b_i = 0; b_i < loop_ub; b_i++) {
          b_gamma->data[b_i + b_gamma->size[0] * i21] = c_gamma * V->data[(b_i +
            V->size[0] * i21) + V->size[0] * V->size[1] * c_i];
        }
      }

      st.site = &f_emlrtRSI;
      expmapPSR(&st, b_B, b_gamma, b_W);
      iv57[0] = r13->size[0];
      iv57[1] = r14->size[0];
      emlrtSubAssignSizeCheckR2012b(iv57, 2, *(int32_T (*)[2])b_W->size, 2,
        &p_emlrtECI, sp);
      loop_ub = b_W->size[1];
      for (i21 = 0; i21 < loop_ub; i21++) {
        ub_loop = b_W->size[0];
        for (b_i = 0; b_i < ub_loop; b_i++) {
          A->data[(r13->data[b_i] + A->size[0] * r14->data[i21]) + A->size[0] *
            A->size[1] * c_i] = b_W->data[b_i + b_W->size[0] * i21];
        }
      }

      c_i++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    st.site = &g_emlrtRSI;
    *obj_new = objPSR(&st, X, W, A);
    if ((obj_old - *obj_new) / (real_T)n < epsAGD) {
      e_y = NULL;
      m17 = emlrtCreateCharArray(2, iv58);
      for (c_i = 0; c_i < 13; c_i++) {
        cv52[c_i] = cv53[c_i];
      }

      emlrtInitCharArrayR2013a(sp, 13, m17, cv52);
      emlrtAssign(&e_y, m17);
      st.site = &de_emlrtRSI;
      b_fprintf(&st, e_y, &emlrtMCI);
      exitg1 = true;
    } else {
      i21 = A0->size[0] * A0->size[1] * A0->size[2];
      A0->size[0] = A->size[0];
      A0->size[1] = A->size[1];
      A0->size[2] = A->size[2];
      emxEnsureCapacity(sp, (emxArray__common *)A0, i21, (int32_T)sizeof(real_T),
                        &l_emlrtRTEI);
      loop_ub = A->size[0] * A->size[1] * A->size[2];
      for (i21 = 0; i21 < loop_ub; i21++) {
        A0->data[i21] = A->data[i21];
      }

      i21 = B0->size[0] * B0->size[1] * B0->size[2];
      B0->size[0] = B->size[0];
      B0->size[1] = B->size[1];
      B0->size[2] = B->size[2];
      emxEnsureCapacity(sp, (emxArray__common *)B0, i21, (int32_T)sizeof(real_T),
                        &l_emlrtRTEI);
      loop_ub = B->size[0] * B->size[1] * B->size[2];
      for (i21 = 0; i21 < loop_ub; i21++) {
        B0->data[i21] = B->data[i21];
      }

      lambda0 = lambda;
      obj_old = *obj_new;
      b_s++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }
  }

  emxFree_real_T(&c_B);
  emxFree_real_T(&c_X);
  emxFree_real_T(&b_Y);
  emxFree_real_T(&b_y);
  emxFree_real_T(&b_A0);
  emxFree_real_T(&b_gamma);
  emxFree_real_T(&b_B);
  emxFree_real_T(&a);
  emxFree_int32_T(&r18);
  emxFree_real_T(&y);
  emxFree_real_T(&x);
  emxFree_real_T(&r17);
  emxFree_int32_T(&r16);
  emxFree_int32_T(&r15);
  emxFree_real_T(&b_A);
  emxFree_real_T(&Y);
  emxFree_real_T(&b_X);
  emxFree_real_T(&AA);
  emxFree_real_T(&b_W);
  emxFree_int32_T(&r14);
  emxFree_int32_T(&r13);
  emxFree_real_T(&V);
  emxFree_real_T(&eta);
  emxFree_real_T(&gradA);
  emxFree_real_T(&B);
  emxFree_real_T(&B0);
  f_y = NULL;
  m17 = emlrtCreateCharArray(2, iv59);
  for (c_i = 0; c_i < 13; c_i++) {
    cv52[c_i] = cv54[c_i];
  }

  emlrtInitCharArrayR2013a(sp, 13, m17, cv52);
  emlrtAssign(&f_y, m17);
  st.site = &ce_emlrtRSI;
  c_fprintf(&st, f_y, emlrt_marshallOut(s), &b_emlrtMCI);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (optAPSR_AGD.c) */
