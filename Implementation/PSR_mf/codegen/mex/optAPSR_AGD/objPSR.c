/*
 * objPSR.c
 *
 * Code generation for function 'objPSR'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD.h"
#include "objPSR.h"
#include "eml_error.h"
#include "optAPSR_AGD_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "eye.h"
#include "logmapPSRi.h"
#include "optAPSR_AGD_mexutil.h"
#include "optAPSR_AGD_data.h"

/* Variable Definitions */
static emlrtRSInfo wc_emlrtRSI = { 25, "objPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/objPSR.m"
};

static emlrtRSInfo xc_emlrtRSI = { 26, "objPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/objPSR.m"
};

static emlrtRSInfo yc_emlrtRSI = { 27, "objPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/objPSR.m"
};

static emlrtRSInfo ad_emlrtRSI = { 28, "objPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/objPSR.m"
};

static emlrtRSInfo ed_emlrtRSI = { 22, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo fd_emlrtRSI = { 47, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo gd_emlrtRSI = { 54, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo i_emlrtRTEI = { 53, 5, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo j_emlrtRTEI = { 42, 9, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRTEInfo k_emlrtRTEI = { 12, 5, "trace",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/trace.m" };

static emlrtMCInfo q_emlrtMCI = { 53, 5, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtMCInfo r_emlrtMCI = { 52, 15, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtMCInfo s_emlrtMCI = { 42, 9, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo t_emlrtMCI = { 41, 19, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo u_emlrtMCI = { 12, 5, "trace",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/trace.m" };

static emlrtMCInfo v_emlrtMCI = { 11, 15, "trace",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/trace.m" };

static emlrtRTEInfo lb_emlrtRTEI = { 1, 14, "objPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/objPSR.m"
};

static emlrtRTEInfo mb_emlrtRTEI = { 51, 1, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo nb_emlrtRTEI = { 27, 5, "objPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/objPSR.m"
};

static emlrtRTEInfo ob_emlrtRTEI = { 25, 5, "objPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/objPSR.m"
};

static emlrtBCInfo x_emlrtBCI = { -1, -1, 25, 28, "X", "objPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/objPSR.m",
  0 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 27, 25, "W", "objPSR",
  "/cise/research51/cvgmi_04/jsun/DictLearningRecon/TMI_expts_SR/PSR_mf/objPSR.m",
  0 };

static emlrtRSInfo kd_emlrtRSI = { 41, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRSInfo ld_emlrtRSI = { 11, "trace",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/trace.m" };

static emlrtRSInfo md_emlrtRSI = { 52, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo vd_emlrtRSI = { 12, "trace",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/trace.m" };

static emlrtRSInfo wd_emlrtRSI = { 53, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo ae_emlrtRSI = { 42, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

/* Function Declarations */
static void eml_assert_valid_size_arg(const emlrtStack *sp, const real_T
  varargin_1[2]);

/* Function Definitions */
static void eml_assert_valid_size_arg(const emlrtStack *sp, const real_T
  varargin_1[2])
{
  int32_T i;
  int32_T exitg2;
  boolean_T p;
  boolean_T guard1 = false;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv43[2] = { 1, 57 };

  const mxArray *m11;
  char_T cv44[57];
  static const char_T cv45[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't',
    '_', 'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g',
    '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c',
    't', 'o', 'r' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T n;
  const mxArray *d_y;
  static const int32_T iv44[2] = { 1, 21 };

  char_T cv46[21];
  static const char_T cv47[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  i = 0;
  do {
    exitg2 = 0;
    if (i < 2) {
      if (varargin_1[i] != varargin_1[i]) {
        p = false;
        exitg2 = 1;
      } else {
        i++;
      }
    } else {
      p = true;
      exitg2 = 1;
    }
  } while (exitg2 == 0);

  guard1 = false;
  if (p) {
    i = 0;
    do {
      exitg1 = 0;
      if (i < 2) {
        if ((-2.147483648E+9 > varargin_1[i]) || (2.147483647E+9 < varargin_1[i]))
        {
          p = false;
          exitg1 = 1;
        } else {
          i++;
        }
      } else {
        p = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    if (p) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (p) {
  } else {
    emlrtAssertMATLABThread(sp, &j_emlrtRTEI);
    y = NULL;
    m11 = emlrtCreateCharArray(2, iv43);
    for (i = 0; i < 57; i++) {
      cv44[i] = cv45[i];
    }

    emlrtInitCharArrayR2013a(sp, 57, m11, cv44);
    emlrtAssign(&y, m11);
    b_y = NULL;
    m11 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m11) = MIN_int32_T;
    emlrtAssign(&b_y, m11);
    c_y = NULL;
    m11 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m11) = MAX_int32_T;
    emlrtAssign(&c_y, m11);
    st.site = &kd_emlrtRSI;
    b_st.site = &ae_emlrtRSI;
    error(&st, c_message(&b_st, y, b_y, c_y, &s_emlrtMCI), &t_emlrtMCI);
  }

  n = 1.0;
  for (i = 0; i < 2; i++) {
    if (varargin_1[i] <= 0.0) {
      n = 0.0;
    } else {
      n *= varargin_1[i];
    }
  }

  if (2.147483647E+9 >= n) {
  } else {
    emlrtAssertMATLABThread(sp, &g_emlrtRTEI);
    d_y = NULL;
    m11 = emlrtCreateCharArray(2, iv44);
    for (i = 0; i < 21; i++) {
      cv46[i] = cv47[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m11, cv46);
    emlrtAssign(&d_y, m11);
    st.site = &jd_emlrtRSI;
    b_st.site = &ud_emlrtRSI;
    error(&st, b_message(&b_st, d_y, &m_emlrtMCI), &n_emlrtMCI);
  }
}

real_T objPSR(const emlrtStack *sp, const emxArray_real_T *X, const
              emxArray_real_T *W, const emxArray_real_T *A)
{
  real_T obj;
  real_T d;
  real_T N;
  real_T m;
  int32_T ub_loop;
  int32_T i;
  emxArray_real_T *r9;
  emxArray_real_T *C;
  emxArray_real_T *a;
  emxArray_real_T *b_C;
  emxArray_real_T *b;
  emxArray_real_T *b_X;
  emxArray_real_T *LOG;
  emxArray_real_T *M;
  real_T objPrime;
  int32_T loop_ub;
  int32_T b_loop_ub;
  int32_T i14;
  int32_T i15;
  int32_T i16;
  real_T varargin_1[2];
  int32_T nx;
  int32_T sz[2];
  uint32_T b_varargin_1[3];
  int32_T mtmp;
  int32_T ix;
  int32_T maxdimlen;
  const mxArray *y;
  static const int32_T iv35[2] = { 1, 40 };

  const mxArray *m10;
  char_T cv36[40];
  int32_T b_i;
  static const char_T cv37[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  boolean_T b7;
  int32_T k;
  boolean_T guard2 = false;
  const mxArray *b_y;
  static const int32_T iv36[2] = { 1, 21 };

  char_T cv38[21];
  static const char_T cv39[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *c_y;
  static const int32_T iv37[2] = { 1, 45 };

  char_T cv40[45];
  static const char_T cv41[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  boolean_T guard1 = false;
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
  int32_T C_idx_0;
  const mxArray *d_y;
  static const int32_T iv38[2] = { 1, 40 };

  boolean_T overflow;
  const mxArray *e_y;
  static const int32_T iv39[2] = { 1, 45 };

  const mxArray *f_y;
  static const int32_T iv40[2] = { 1, 21 };

  int32_T c_loop_ub;
  const mxArray *g_y;
  static const int32_T iv41[2] = { 1, 19 };

  char_T cv42[19];
  static const char_T cv43[19] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'q', 'u', 'a', 'r', 'e' };

  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  jmp_buf emlrtJBEnviron;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  boolean_T emlrtHadParallelError = false;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  assert(isa(X,'double')); */
  /*  assert(isa(W,'double')); */
  /*  assert(isa(A,'double')); */
  /*  assert(all(size(X) == [64 121])); */
  /*  assert(all(size(W) == [100 121])); */
  /*  assert(all(size(A) == [64 100])); */
  /*  compute the objective function for product of sphere approximation */
  /*  Input: */
  /*      X - input square root density field data (d-by-N-by-n) */
  /*      W - coefficient matrix (m-by-n) */
  /*      A - atoms in dictionary (d-by-N-by-m) */
  /*  Output: */
  /*      obj - the value of objective function */
  /*  initialization */
  d = X->size[0];
  N = X->size[1];
  m = W->size[0];

  /*  main */
  obj = 0.0;
  ub_loop = X->size[2];
  ub_loop--;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(r9,C,a,b_C,b,b_X,LOG,M,objPrime,loop_ub,b_loop_ub,i14,i15,i16,nx,mtmp,ix,maxdimlen,b7,k,guard2,m10,b_i,guard1,C_idx_0,overflow,c_loop_ub,alpha1,beta1,TRANSB,TRANSA,m_t,n_t,k_t,lda_t,ldb_t,ldc_t,alpha1_t,Aia0_t,Bib0_t,beta1_t,Cic0_t,emlrtJBEnviron) \
 firstprivate(st,b_st,c_st,d_st,e_st,f_st,varargin_1,sz,b_varargin_1,c_y,cv40,b_y,cv38,e_y,f_y,g_y,cv42,emlrtHadParallelError,d_y,cv36,y)

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
      d_st.prev = &b_st;
      d_st.tls = b_st.tls;
      e_st.prev = &c_st;
      e_st.tls = c_st.tls;
      f_st.prev = &c_st;
      f_st.tls = c_st.tls;
      b_emxInit_real_T(&st, &r9, 2, &lb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &C, 2, &lb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &a, 2, &lb_emlrtRTEI, true);
      c_emxInit_real_T(&st, &b_C, 1, &lb_emlrtRTEI, true);
      c_emxInit_real_T(&st, &b, 1, &lb_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b_X, 2, &lb_emlrtRTEI, true);
      emxInit_real_T(&st, &LOG, 3, &ob_emlrtRTEI, true);
      b_emxInit_real_T(&st, &M, 2, &nb_emlrtRTEI, true);
      objPrime = 0.0;
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (i = 0; i <= ub_loop; i++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {
        loop_ub = X->size[0];
        b_loop_ub = X->size[1];
        i14 = X->size[2];
        i15 = 1 + i;
        i14 = emlrtDynamicBoundsCheckFastR2012b(i15, 1, i14, &x_emlrtBCI, &st);
        i15 = b_X->size[0] * b_X->size[1];
        b_X->size[0] = loop_ub;
        b_X->size[1] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_X, i15, (int32_T)sizeof
                          (real_T), &lb_emlrtRTEI);
        for (i15 = 0; i15 < b_loop_ub; i15++) {
          for (i16 = 0; i16 < loop_ub; i16++) {
            b_X->data[i16 + b_X->size[0] * i15] = X->data[(i16 + X->size[0] *
              i15) + X->size[0] * X->size[1] * (i14 - 1)];
          }
        }

        b_st.site = &wc_emlrtRSI;
        logmapPSRi(&b_st, b_X, A, LOG);
        b_st.site = &xc_emlrtRSI;
        varargin_1[0] = d * N;
        varargin_1[1] = m;
        nx = LOG->size[0] * LOG->size[1] * LOG->size[2];
        c_st.site = &ed_emlrtRSI;
        eml_assert_valid_size_arg(&c_st, varargin_1);
        for (i14 = 0; i14 < 2; i14++) {
          sz[i14] = (int32_T)varargin_1[i14];
        }

        for (i14 = 0; i14 < 3; i14++) {
          b_varargin_1[i14] = (uint32_T)LOG->size[i14];
        }

        mtmp = (int32_T)b_varargin_1[0];
        for (ix = 0; ix < 2; ix++) {
          if ((int32_T)b_varargin_1[ix + 1] > mtmp) {
            mtmp = (int32_T)b_varargin_1[ix + 1];
          }
        }

        if (nx < mtmp) {
          maxdimlen = mtmp;
        } else {
          maxdimlen = nx;
        }

        if (sz[0] > maxdimlen) {
          c_st.site = &fd_emlrtRSI;
          c_eml_error(&c_st);
        }

        if (sz[1] > maxdimlen) {
          c_st.site = &fd_emlrtRSI;
          c_eml_error(&c_st);
        }

        i14 = M->size[0] * M->size[1];
        M->size[0] = sz[0];
        M->size[1] = sz[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)M, i14, (int32_T)sizeof
                          (real_T), &mb_emlrtRTEI);
        if (nx == sz[0] * sz[1]) {
        } else {
          emlrtAssertMATLABThread(&b_st, &i_emlrtRTEI);
          y = NULL;
          m10 = emlrtCreateCharArray(2, iv35);
          for (b_i = 0; b_i < 40; b_i++) {
            cv36[b_i] = cv37[b_i];
          }

          emlrtInitCharArrayR2013a(&b_st, 40, m10, cv36);
          emlrtAssign(&y, m10);
          c_st.site = &md_emlrtRSI;
          d_st.site = &wd_emlrtRSI;
          error(&c_st, b_message(&d_st, y, &q_emlrtMCI), &r_emlrtMCI);
        }

        c_st.site = &gd_emlrtRSI;
        if (1 > nx) {
          b7 = false;
        } else {
          b7 = (nx > 2147483646);
        }

        if (b7) {
          e_st.site = &n_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (k = 0; k + 1 <= nx; k++) {
          M->data[k] = LOG->data[k];
        }

        b_st.site = &yc_emlrtRSI;
        loop_ub = W->size[0];
        i14 = W->size[1];
        i15 = 1 + i;
        i14 = emlrtDynamicBoundsCheckFastR2012b(i15, 1, i14, &y_emlrtBCI, &b_st);
        i15 = b->size[0];
        b->size[0] = loop_ub;
        emxEnsureCapacity(&b_st, (emxArray__common *)b, i15, (int32_T)sizeof
                          (real_T), &lb_emlrtRTEI);
        for (i15 = 0; i15 < loop_ub; i15++) {
          b->data[i15] = W->data[i15 + W->size[0] * (i14 - 1)];
        }

        c_st.site = &gb_emlrtRSI;
        i14 = W->size[0];
        if (!(M->size[1] == i14)) {
          guard2 = false;
          if ((M->size[0] == 1) && (M->size[1] == 1)) {
            guard2 = true;
          } else {
            i14 = W->size[0];
            if (i14 == 1) {
              guard2 = true;
            } else {
              emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
              b_y = NULL;
              m10 = emlrtCreateCharArray(2, iv36);
              for (b_i = 0; b_i < 21; b_i++) {
                cv38[b_i] = cv39[b_i];
              }

              emlrtInitCharArrayR2013a(&c_st, 21, m10, cv38);
              emlrtAssign(&b_y, m10);
              e_st.site = &id_emlrtRSI;
              f_st.site = &td_emlrtRSI;
              error(&e_st, b_message(&f_st, b_y, &g_emlrtMCI), &h_emlrtMCI);
            }
          }

          if (guard2) {
            emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
            c_y = NULL;
            m10 = emlrtCreateCharArray(2, iv37);
            for (b_i = 0; b_i < 45; b_i++) {
              cv40[b_i] = cv41[b_i];
            }

            emlrtInitCharArrayR2013a(&c_st, 45, m10, cv40);
            emlrtAssign(&c_y, m10);
            e_st.site = &hd_emlrtRSI;
            f_st.site = &sd_emlrtRSI;
            error(&e_st, b_message(&f_st, c_y, &e_emlrtMCI), &f_emlrtMCI);
          }
        }

        guard1 = false;
        if (M->size[1] == 1) {
          guard1 = true;
        } else {
          i14 = W->size[0];
          if (i14 == 1) {
            guard1 = true;
          } else {
            varargin_1[0] = M->size[0];
            c_st.site = &fb_emlrtRSI;
            e_st.site = &hb_emlrtRSI;
            i14 = b_C->size[0];
            b_C->size[0] = (int32_T)varargin_1[0];
            emxEnsureCapacity(&e_st, (emxArray__common *)b_C, i14, (int32_T)
                              sizeof(real_T), &lb_emlrtRTEI);
            loop_ub = (int32_T)varargin_1[0];
            for (i14 = 0; i14 < loop_ub; i14++) {
              b_C->data[i14] = 0.0;
            }

            if ((M->size[0] < 1) || (M->size[1] < 1)) {
            } else {
              alpha1 = 1.0;
              beta1 = 0.0;
              TRANSB = 'N';
              TRANSA = 'N';
              m_t = (ptrdiff_t)(M->size[0]);
              n_t = (ptrdiff_t)(1);
              k_t = (ptrdiff_t)(M->size[1]);
              lda_t = (ptrdiff_t)(M->size[0]);
              ldb_t = (ptrdiff_t)(M->size[1]);
              ldc_t = (ptrdiff_t)(M->size[0]);
              alpha1_t = (double *)(&alpha1);
              Aia0_t = (double *)(&M->data[0]);
              Bib0_t = (double *)(&b->data[0]);
              beta1_t = (double *)(&beta1);
              Cic0_t = (double *)(&b_C->data[0]);
              dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
                    Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
            }
          }
        }

        if (guard1) {
          i14 = b_C->size[0];
          b_C->size[0] = M->size[0];
          emxEnsureCapacity(&b_st, (emxArray__common *)b_C, i14, (int32_T)sizeof
                            (real_T), &lb_emlrtRTEI);
          loop_ub = M->size[0];
          for (i14 = 0; i14 < loop_ub; i14++) {
            b_C->data[i14] = 0.0;
            b_loop_ub = M->size[1];
            for (i15 = 0; i15 < b_loop_ub; i15++) {
              b_C->data[i14] += M->data[i14 + M->size[0] * i15] * b->data[i15];
            }
          }
        }

        b_st.site = &yc_emlrtRSI;
        varargin_1[0] = d;
        varargin_1[1] = N;
        c_st.site = &ed_emlrtRSI;
        eml_assert_valid_size_arg(&c_st, varargin_1);
        for (i14 = 0; i14 < 2; i14++) {
          sz[i14] = (int32_T)varargin_1[i14];
        }

        C_idx_0 = b_C->size[0];
        if (1 > C_idx_0) {
          C_idx_0 = 1;
        }

        if (b_C->size[0] < C_idx_0) {
          maxdimlen = C_idx_0;
        } else {
          maxdimlen = b_C->size[0];
        }

        if (sz[0] > maxdimlen) {
          c_st.site = &fd_emlrtRSI;
          c_eml_error(&c_st);
        }

        if (sz[1] > maxdimlen) {
          c_st.site = &fd_emlrtRSI;
          c_eml_error(&c_st);
        }

        i14 = M->size[0] * M->size[1];
        M->size[0] = sz[0];
        M->size[1] = sz[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)M, i14, (int32_T)sizeof
                          (real_T), &mb_emlrtRTEI);
        if (b_C->size[0] == sz[0] * sz[1]) {
        } else {
          emlrtAssertMATLABThread(&b_st, &i_emlrtRTEI);
          d_y = NULL;
          m10 = emlrtCreateCharArray(2, iv38);
          for (b_i = 0; b_i < 40; b_i++) {
            cv36[b_i] = cv37[b_i];
          }

          emlrtInitCharArrayR2013a(&b_st, 40, m10, cv36);
          emlrtAssign(&d_y, m10);
          c_st.site = &md_emlrtRSI;
          d_st.site = &wd_emlrtRSI;
          error(&c_st, b_message(&d_st, d_y, &q_emlrtMCI), &r_emlrtMCI);
        }

        c_st.site = &gd_emlrtRSI;
        if (1 > b_C->size[0]) {
          overflow = false;
        } else {
          overflow = (b_C->size[0] > 2147483646);
        }

        if (overflow) {
          e_st.site = &n_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (k = 0; k + 1 <= b_C->size[0]; k++) {
          M->data[k] = b_C->data[k];
        }

        b_st.site = &ad_emlrtRSI;
        i14 = a->size[0] * a->size[1];
        a->size[0] = M->size[1];
        a->size[1] = M->size[0];
        emxEnsureCapacity(&b_st, (emxArray__common *)a, i14, (int32_T)sizeof
                          (real_T), &lb_emlrtRTEI);
        loop_ub = M->size[0];
        for (i14 = 0; i14 < loop_ub; i14++) {
          b_loop_ub = M->size[1];
          for (i15 = 0; i15 < b_loop_ub; i15++) {
            a->data[i15 + a->size[0] * i14] = M->data[i14 + M->size[0] * i15];
          }
        }

        c_st.site = &gb_emlrtRSI;
        if (!(a->size[1] == M->size[0])) {
          if (((a->size[0] == 1) && (a->size[1] == 1)) || ((M->size[0] == 1) &&
               (M->size[1] == 1))) {
            emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
            e_y = NULL;
            m10 = emlrtCreateCharArray(2, iv39);
            for (b_i = 0; b_i < 45; b_i++) {
              cv40[b_i] = cv41[b_i];
            }

            emlrtInitCharArrayR2013a(&c_st, 45, m10, cv40);
            emlrtAssign(&e_y, m10);
            e_st.site = &hd_emlrtRSI;
            f_st.site = &sd_emlrtRSI;
            error(&e_st, b_message(&f_st, e_y, &e_emlrtMCI), &f_emlrtMCI);
          } else {
            emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
            f_y = NULL;
            m10 = emlrtCreateCharArray(2, iv40);
            for (b_i = 0; b_i < 21; b_i++) {
              cv38[b_i] = cv39[b_i];
            }

            emlrtInitCharArrayR2013a(&c_st, 21, m10, cv38);
            emlrtAssign(&f_y, m10);
            e_st.site = &id_emlrtRSI;
            f_st.site = &td_emlrtRSI;
            error(&e_st, b_message(&f_st, f_y, &g_emlrtMCI), &h_emlrtMCI);
          }
        }

        if ((a->size[1] == 1) || (M->size[0] == 1)) {
          i14 = C->size[0] * C->size[1];
          C->size[0] = a->size[0];
          C->size[1] = M->size[1];
          emxEnsureCapacity(&b_st, (emxArray__common *)C, i14, (int32_T)sizeof
                            (real_T), &lb_emlrtRTEI);
          loop_ub = a->size[0];
          for (i14 = 0; i14 < loop_ub; i14++) {
            b_loop_ub = M->size[1];
            for (i15 = 0; i15 < b_loop_ub; i15++) {
              C->data[i14 + C->size[0] * i15] = 0.0;
              c_loop_ub = a->size[1];
              for (i16 = 0; i16 < c_loop_ub; i16++) {
                C->data[i14 + C->size[0] * i15] += a->data[i14 + a->size[0] *
                  i16] * M->data[i16 + M->size[0] * i15];
              }
            }
          }
        } else {
          varargin_1[0] = (uint32_T)a->size[0];
          varargin_1[1] = (uint32_T)M->size[1];
          i14 = r9->size[0] * r9->size[1];
          r9->size[0] = (int32_T)varargin_1[0];
          emxEnsureCapacity(&b_st, (emxArray__common *)r9, i14, (int32_T)sizeof
                            (real_T), &lb_emlrtRTEI);
          i14 = r9->size[0] * r9->size[1];
          r9->size[1] = (int32_T)varargin_1[1];
          emxEnsureCapacity(&b_st, (emxArray__common *)r9, i14, (int32_T)sizeof
                            (real_T), &lb_emlrtRTEI);
          loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
          for (i14 = 0; i14 < loop_ub; i14++) {
            r9->data[i14] = 0.0;
          }

          c_st.site = &fb_emlrtRSI;
          e_st.site = &hb_emlrtRSI;
          i14 = C->size[0] * C->size[1];
          C->size[0] = (int32_T)varargin_1[0];
          emxEnsureCapacity(&e_st, (emxArray__common *)C, i14, (int32_T)sizeof
                            (real_T), &lb_emlrtRTEI);
          i14 = C->size[0] * C->size[1];
          C->size[1] = (int32_T)varargin_1[1];
          emxEnsureCapacity(&e_st, (emxArray__common *)C, i14, (int32_T)sizeof
                            (real_T), &lb_emlrtRTEI);
          loop_ub = (int32_T)varargin_1[0] * (int32_T)varargin_1[1];
          for (i14 = 0; i14 < loop_ub; i14++) {
            C->data[i14] = 0.0;
          }

          if ((a->size[0] < 1) || (M->size[1] < 1) || (a->size[1] < 1)) {
          } else {
            alpha1 = 1.0;
            beta1 = 0.0;
            TRANSB = 'N';
            TRANSA = 'N';
            m_t = (ptrdiff_t)(a->size[0]);
            n_t = (ptrdiff_t)(M->size[1]);
            k_t = (ptrdiff_t)(a->size[1]);
            lda_t = (ptrdiff_t)(a->size[0]);
            ldb_t = (ptrdiff_t)(a->size[1]);
            ldc_t = (ptrdiff_t)(a->size[0]);
            alpha1_t = (double *)(&alpha1);
            Aia0_t = (double *)(&a->data[0]);
            Bib0_t = (double *)(&M->data[0]);
            beta1_t = (double *)(&beta1);
            Cic0_t = (double *)(&C->data[0]);
            dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
                  Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
          }
        }

        b_st.site = &ad_emlrtRSI;
        overflow = (C->size[0] == C->size[1]);
        if (overflow) {
        } else {
          emlrtAssertMATLABThread(&b_st, &k_emlrtRTEI);
          g_y = NULL;
          m10 = emlrtCreateCharArray(2, iv41);
          for (b_i = 0; b_i < 19; b_i++) {
            cv42[b_i] = cv43[b_i];
          }

          emlrtInitCharArrayR2013a(&b_st, 19, m10, cv42);
          emlrtAssign(&g_y, m10);
          c_st.site = &ld_emlrtRSI;
          d_st.site = &vd_emlrtRSI;
          error(&c_st, b_message(&d_st, g_y, &u_emlrtMCI), &v_emlrtMCI);
        }

        alpha1 = 0.0;
        for (k = 0; k < C->size[0]; k++) {
          alpha1 += C->data[k + C->size[0] * k];
        }

        objPrime += alpha1;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      } else {
        emlrtHadParallelError = true;
      }
    }

    omp_set_nest_lock(&emlrtNestLockGlobal);
    if (!emlrtHadParallelError) {
      obj += objPrime;
    }

    omp_unset_nest_lock(&emlrtNestLockGlobal);
    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 8);
      emxFree_real_T(&M);
      emxFree_real_T(&LOG);
      emxFree_real_T(&b_X);
      emxFree_real_T(&b);
      emxFree_real_T(&b_C);
      emxFree_real_T(&a);
      emxFree_real_T(&C);
      emxFree_real_T(&r9);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return obj;
}

/* End of code generation (objPSR.c) */
