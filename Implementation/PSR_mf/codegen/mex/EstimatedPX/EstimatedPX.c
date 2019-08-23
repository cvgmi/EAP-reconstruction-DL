/*
 * EstimatedPX.c
 *
 * Code generation for function 'EstimatedPX'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedPX.h"
#include "EstimatedPX_emxutil.h"
#include "eml_error.h"
#include "expmapPSR.h"
#include "eml_int_forloop_overflow_check.h"
#include "repmat.h"
#include "logmapPSRi.h"
#include "EstimatedPX_mexutil.h"
#include "EstimatedPX_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 23, "EstimatedPX",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/EstimatedPX.m" };

static emlrtRSInfo b_emlrtRSI = { 24, "EstimatedPX",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/EstimatedPX.m" };

static emlrtRSInfo c_emlrtRSI = { 25, "EstimatedPX",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/EstimatedPX.m" };

static emlrtRSInfo d_emlrtRSI = { 26, "EstimatedPX",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/EstimatedPX.m" };

static emlrtRSInfo mb_emlrtRSI = { 22, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo nb_emlrtRSI = { 47, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo ob_emlrtRSI = { 54, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo i_emlrtRTEI = { 53, 5, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo j_emlrtRTEI = { 42, 9, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo o_emlrtMCI = { 53, 5, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtMCInfo p_emlrtMCI = { 52, 15, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtMCInfo q_emlrtMCI = { 42, 9, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo r_emlrtMCI = { 41, 19, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRTEInfo k_emlrtRTEI = { 1, 15, "EstimatedPX",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/EstimatedPX.m" };

static emlrtRTEInfo l_emlrtRTEI = { 51, 1, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRTEInfo m_emlrtRTEI = { 25, 5, "EstimatedPX",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/EstimatedPX.m" };

static emlrtRTEInfo n_emlrtRTEI = { 23, 5, "EstimatedPX",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/EstimatedPX.m" };

static emlrtBCInfo emlrtBCI = { -1, -1, 23, 28, "X", "EstimatedPX",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/EstimatedPX.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 25, 25, "W", "EstimatedPX",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/EstimatedPX.m",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 26, 33, "X", "EstimatedPX",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/EstimatedPX.m",
  0 };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 26, 12, "Xh", "EstimatedPX",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/EstimatedPX.m",
  0 };

static emlrtECInfo emlrtECI = { -1, 26, 5, "EstimatedPX",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/EstimatedPX.m" };

static emlrtRSInfo wb_emlrtRSI = { 41, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRSInfo dc_emlrtRSI = { 52, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo ic_emlrtRSI = { 53, "reshape",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/reshape.m" };

static emlrtRSInfo kc_emlrtRSI = { 42, "eml_assert_valid_size_arg",
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
  static const int32_T iv20[2] = { 1, 57 };

  const mxArray *m7;
  char_T cv26[57];
  static const char_T cv27[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't',
    '_', 'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g',
    '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c',
    't', 'o', 'r' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T n;
  const mxArray *d_y;
  static const int32_T iv21[2] = { 1, 21 };

  char_T cv28[21];
  static const char_T cv29[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
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
        if (2.147483647E+9 < varargin_1[i]) {
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
    m7 = emlrtCreateCharArray(2, iv20);
    for (i = 0; i < 57; i++) {
      cv26[i] = cv27[i];
    }

    emlrtInitCharArrayR2013a(sp, 57, m7, cv26);
    emlrtAssign(&y, m7);
    b_y = NULL;
    m7 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m7) = MIN_int32_T;
    emlrtAssign(&b_y, m7);
    c_y = NULL;
    m7 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m7) = MAX_int32_T;
    emlrtAssign(&c_y, m7);
    st.site = &wb_emlrtRSI;
    b_st.site = &kc_emlrtRSI;
    error(&st, c_message(&b_st, y, b_y, c_y, &q_emlrtMCI), &r_emlrtMCI);
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
    m7 = emlrtCreateCharArray(2, iv21);
    for (i = 0; i < 21; i++) {
      cv28[i] = cv29[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m7, cv28);
    emlrtAssign(&d_y, m7);
    st.site = &vb_emlrtRSI;
    b_st.site = &gc_emlrtRSI;
    error(&st, b_message(&b_st, d_y, &k_emlrtMCI), &l_emlrtMCI);
  }
}

void EstimatedPX(const emlrtStack *sp, const emxArray_real_T *X, const
                 emxArray_real_T *W, const emxArray_real_T *A, emxArray_real_T
                 *Xh)
{
  real_T d;
  real_T N;
  real_T m;
  uint32_T uv0[3];
  int32_T ub_loop;
  int32_T loop_ub;
  int32_T i;
  emxArray_real_T *r0;
  emxArray_real_T *b_X;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *C;
  emxArray_real_T *b;
  emxArray_real_T *c_X;
  emxArray_real_T *LOG;
  emxArray_real_T *M;
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T i0;
  int32_T i1;
  int32_T i2;
  real_T varargin_1[2];
  int32_T nx;
  int32_T sz[2];
  uint32_T b_varargin_1[3];
  int32_T mtmp;
  int32_T ix;
  int32_T maxdimlen;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 40 };

  const mxArray *m0;
  char_T cv0[40];
  int32_T b_i;
  static const char_T cv1[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  boolean_T b0;
  int32_T k;
  boolean_T guard2 = false;
  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 21 };

  char_T cv2[21];
  static const char_T cv3[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 45 };

  char_T cv4[45];
  static const char_T cv5[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  static const int32_T iv3[2] = { 1, 40 };

  boolean_T overflow;
  int32_T iv4[2];
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
  /*  estimate new Xh from old X and weights and atoms learned from DL */
  /*  Input: */
  /*      X - input square root density field data (d-by-N-by-n) */
  /*      W - coefficient matrix (m-by-n) */
  /*      A - atoms in dictionary (d-by-N-by-m) */
  /*  Output: */
  /*      Xh - output square root density field (d-by-N-by-n) */
  d = X->size[0];
  N = X->size[1];
  m = W->size[0];
  for (ub_loop = 0; ub_loop < 3; ub_loop++) {
    uv0[ub_loop] = (uint32_T)X->size[ub_loop];
  }

  ub_loop = Xh->size[0] * Xh->size[1] * Xh->size[2];
  Xh->size[0] = (int32_T)uv0[0];
  emxEnsureCapacity(sp, (emxArray__common *)Xh, ub_loop, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  ub_loop = Xh->size[0] * Xh->size[1] * Xh->size[2];
  Xh->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)Xh, ub_loop, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  ub_loop = Xh->size[0] * Xh->size[1] * Xh->size[2];
  Xh->size[2] = (int32_T)uv0[2];
  emxEnsureCapacity(sp, (emxArray__common *)Xh, ub_loop, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  loop_ub = (int32_T)uv0[0] * (int32_T)uv0[1] * (int32_T)uv0[2];
  for (ub_loop = 0; ub_loop < loop_ub; ub_loop++) {
    Xh->data[ub_loop] = 0.0;
  }

  ub_loop = X->size[2];
  ub_loop--;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(r0,b_X,r1,r2,C,b,c_X,LOG,M,b_loop_ub,c_loop_ub,i0,i1,i2,nx,mtmp,ix,maxdimlen,b0,k,guard2,m0,b_i,guard1,C_idx_0,overflow,alpha1,beta1,TRANSB,TRANSA,m_t,n_t,k_t,lda_t,ldb_t,ldc_t,alpha1_t,Aia0_t,Bib0_t,beta1_t,Cic0_t,emlrtJBEnviron) \
 firstprivate(st,b_st,c_st,d_st,e_st,f_st,varargin_1,sz,b_varargin_1,c_y,cv4,b_y,cv2,iv4,d_y,cv0,emlrtHadParallelError,y)

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
      emxInit_real_T(&st, &r0, 2, &k_emlrtRTEI, true);
      emxInit_real_T(&st, &b_X, 2, &k_emlrtRTEI, true);
      emxInit_int32_T(&st, &r1, 1, &k_emlrtRTEI, true);
      emxInit_int32_T(&st, &r2, 1, &k_emlrtRTEI, true);
      c_emxInit_real_T(&st, &C, 1, &k_emlrtRTEI, true);
      c_emxInit_real_T(&st, &b, 1, &k_emlrtRTEI, true);
      emxInit_real_T(&st, &c_X, 2, &k_emlrtRTEI, true);
      b_emxInit_real_T(&st, &LOG, 3, &n_emlrtRTEI, true);
      emxInit_real_T(&st, &M, 2, &m_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (i = 0; i <= ub_loop; i++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {
        /*  main */
        b_loop_ub = X->size[0];
        c_loop_ub = X->size[1];
        i0 = X->size[2];
        i1 = 1 + i;
        i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &emlrtBCI, &st);
        i1 = c_X->size[0] * c_X->size[1];
        c_X->size[0] = b_loop_ub;
        c_X->size[1] = c_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)c_X, i1, (int32_T)sizeof
                          (real_T), &k_emlrtRTEI);
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            c_X->data[i2 + c_X->size[0] * i1] = X->data[(i2 + X->size[0] * i1) +
              X->size[0] * X->size[1] * (i0 - 1)];
          }
        }

        b_st.site = &emlrtRSI;
        logmapPSRi(&b_st, c_X, A, LOG);
        b_st.site = &b_emlrtRSI;
        varargin_1[0] = d * N;
        varargin_1[1] = m;
        nx = LOG->size[0] * LOG->size[1] * LOG->size[2];
        c_st.site = &mb_emlrtRSI;
        eml_assert_valid_size_arg(&c_st, varargin_1);
        for (i0 = 0; i0 < 2; i0++) {
          sz[i0] = (int32_T)varargin_1[i0];
        }

        for (i0 = 0; i0 < 3; i0++) {
          b_varargin_1[i0] = (uint32_T)LOG->size[i0];
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
          c_st.site = &nb_emlrtRSI;
          c_eml_error(&c_st);
        }

        if (sz[1] > maxdimlen) {
          c_st.site = &nb_emlrtRSI;
          c_eml_error(&c_st);
        }

        i0 = M->size[0] * M->size[1];
        M->size[0] = sz[0];
        M->size[1] = sz[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)M, i0, (int32_T)sizeof
                          (real_T), &l_emlrtRTEI);
        if (nx == sz[0] * sz[1]) {
        } else {
          emlrtAssertMATLABThread(&b_st, &i_emlrtRTEI);
          y = NULL;
          m0 = emlrtCreateCharArray(2, iv0);
          for (b_i = 0; b_i < 40; b_i++) {
            cv0[b_i] = cv1[b_i];
          }

          emlrtInitCharArrayR2013a(&b_st, 40, m0, cv0);
          emlrtAssign(&y, m0);
          c_st.site = &dc_emlrtRSI;
          d_st.site = &ic_emlrtRSI;
          error(&c_st, b_message(&d_st, y, &o_emlrtMCI), &p_emlrtMCI);
        }

        c_st.site = &ob_emlrtRSI;
        if (1 > nx) {
          b0 = false;
        } else {
          b0 = (nx > 2147483646);
        }

        if (b0) {
          e_st.site = &i_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (k = 0; k + 1 <= nx; k++) {
          M->data[k] = LOG->data[k];
        }

        b_st.site = &c_emlrtRSI;
        b_loop_ub = W->size[0];
        i0 = W->size[1];
        i1 = 1 + i;
        i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &b_emlrtBCI, &b_st);
        i1 = b->size[0];
        b->size[0] = b_loop_ub;
        emxEnsureCapacity(&b_st, (emxArray__common *)b, i1, (int32_T)sizeof
                          (real_T), &k_emlrtRTEI);
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          b->data[i1] = W->data[i1 + W->size[0] * (i0 - 1)];
        }

        c_st.site = &t_emlrtRSI;
        i0 = W->size[0];
        if (!(M->size[1] == i0)) {
          guard2 = false;
          if ((M->size[0] == 1) && (M->size[1] == 1)) {
            guard2 = true;
          } else {
            i0 = W->size[0];
            if (i0 == 1) {
              guard2 = true;
            } else {
              emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
              b_y = NULL;
              m0 = emlrtCreateCharArray(2, iv1);
              for (b_i = 0; b_i < 21; b_i++) {
                cv2[b_i] = cv3[b_i];
              }

              emlrtInitCharArrayR2013a(&c_st, 21, m0, cv2);
              emlrtAssign(&b_y, m0);
              e_st.site = &ub_emlrtRSI;
              f_st.site = &fc_emlrtRSI;
              error(&e_st, b_message(&f_st, b_y, &e_emlrtMCI), &f_emlrtMCI);
            }
          }

          if (guard2) {
            emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
            c_y = NULL;
            m0 = emlrtCreateCharArray(2, iv2);
            for (b_i = 0; b_i < 45; b_i++) {
              cv4[b_i] = cv5[b_i];
            }

            emlrtInitCharArrayR2013a(&c_st, 45, m0, cv4);
            emlrtAssign(&c_y, m0);
            e_st.site = &tb_emlrtRSI;
            f_st.site = &ec_emlrtRSI;
            error(&e_st, b_message(&f_st, c_y, &c_emlrtMCI), &d_emlrtMCI);
          }
        }

        guard1 = false;
        if (M->size[1] == 1) {
          guard1 = true;
        } else {
          i0 = W->size[0];
          if (i0 == 1) {
            guard1 = true;
          } else {
            varargin_1[0] = M->size[0];
            c_st.site = &s_emlrtRSI;
            e_st.site = &u_emlrtRSI;
            i0 = C->size[0];
            C->size[0] = (int32_T)varargin_1[0];
            emxEnsureCapacity(&e_st, (emxArray__common *)C, i0, (int32_T)sizeof
                              (real_T), &k_emlrtRTEI);
            b_loop_ub = (int32_T)varargin_1[0];
            for (i0 = 0; i0 < b_loop_ub; i0++) {
              C->data[i0] = 0.0;
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
              Cic0_t = (double *)(&C->data[0]);
              dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
                    Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
            }
          }
        }

        if (guard1) {
          i0 = C->size[0];
          C->size[0] = M->size[0];
          emxEnsureCapacity(&b_st, (emxArray__common *)C, i0, (int32_T)sizeof
                            (real_T), &k_emlrtRTEI);
          b_loop_ub = M->size[0];
          for (i0 = 0; i0 < b_loop_ub; i0++) {
            C->data[i0] = 0.0;
            c_loop_ub = M->size[1];
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              C->data[i0] += M->data[i0 + M->size[0] * i1] * b->data[i1];
            }
          }
        }

        b_st.site = &c_emlrtRSI;
        varargin_1[0] = d;
        varargin_1[1] = N;
        c_st.site = &mb_emlrtRSI;
        eml_assert_valid_size_arg(&c_st, varargin_1);
        for (i0 = 0; i0 < 2; i0++) {
          sz[i0] = (int32_T)varargin_1[i0];
        }

        C_idx_0 = C->size[0];
        if (1 > C_idx_0) {
          C_idx_0 = 1;
        }

        if (C->size[0] < C_idx_0) {
          maxdimlen = C_idx_0;
        } else {
          maxdimlen = C->size[0];
        }

        if (sz[0] > maxdimlen) {
          c_st.site = &nb_emlrtRSI;
          c_eml_error(&c_st);
        }

        if (sz[1] > maxdimlen) {
          c_st.site = &nb_emlrtRSI;
          c_eml_error(&c_st);
        }

        i0 = M->size[0] * M->size[1];
        M->size[0] = sz[0];
        M->size[1] = sz[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)M, i0, (int32_T)sizeof
                          (real_T), &l_emlrtRTEI);
        if (C->size[0] == sz[0] * sz[1]) {
        } else {
          emlrtAssertMATLABThread(&b_st, &i_emlrtRTEI);
          d_y = NULL;
          m0 = emlrtCreateCharArray(2, iv3);
          for (b_i = 0; b_i < 40; b_i++) {
            cv0[b_i] = cv1[b_i];
          }

          emlrtInitCharArrayR2013a(&b_st, 40, m0, cv0);
          emlrtAssign(&d_y, m0);
          c_st.site = &dc_emlrtRSI;
          d_st.site = &ic_emlrtRSI;
          error(&c_st, b_message(&d_st, d_y, &o_emlrtMCI), &p_emlrtMCI);
        }

        c_st.site = &ob_emlrtRSI;
        if (1 > C->size[0]) {
          overflow = false;
        } else {
          overflow = (C->size[0] > 2147483646);
        }

        if (overflow) {
          e_st.site = &i_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        for (k = 0; k + 1 <= C->size[0]; k++) {
          M->data[k] = C->data[k];
        }

        b_loop_ub = Xh->size[0];
        i0 = r2->size[0];
        r2->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r2, i0, (int32_T)sizeof
                          (int32_T), &k_emlrtRTEI);
        for (i0 = 0; i0 < b_loop_ub; i0++) {
          r2->data[i0] = i0;
        }

        b_loop_ub = Xh->size[1];
        i0 = r1->size[0];
        r1->size[0] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)r1, i0, (int32_T)sizeof
                          (int32_T), &k_emlrtRTEI);
        for (i0 = 0; i0 < b_loop_ub; i0++) {
          r1->data[i0] = i0;
        }

        i0 = Xh->size[2];
        i1 = i + 1;
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &d_emlrtBCI, &st);
        b_loop_ub = X->size[0];
        c_loop_ub = X->size[1];
        i0 = X->size[2];
        i1 = 1 + i;
        i0 = emlrtDynamicBoundsCheckFastR2012b(i1, 1, i0, &c_emlrtBCI, &st);
        i1 = b_X->size[0] * b_X->size[1];
        b_X->size[0] = b_loop_ub;
        b_X->size[1] = c_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_X, i1, (int32_T)sizeof
                          (real_T), &k_emlrtRTEI);
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            b_X->data[i2 + b_X->size[0] * i1] = X->data[(i2 + X->size[0] * i1) +
              X->size[0] * X->size[1] * (i0 - 1)];
          }
        }

        b_st.site = &d_emlrtRSI;
        expmapPSR(&b_st, b_X, M, r0);
        iv4[0] = r2->size[0];
        iv4[1] = r1->size[0];
        emlrtSubAssignSizeCheckR2012b(iv4, 2, *(int32_T (*)[2])r0->size, 2,
          &emlrtECI, &st);
        b_loop_ub = r0->size[1];
        for (i0 = 0; i0 < b_loop_ub; i0++) {
          c_loop_ub = r0->size[0];
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            Xh->data[(r2->data[i1] + Xh->size[0] * r1->data[i0]) + Xh->size[0] *
              Xh->size[1] * i] = r0->data[i1 + r0->size[0] * i0];
          }
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      } else {
        emlrtHadParallelError = true;
      }
    }

    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 9);
      emxFree_real_T(&M);
      emxFree_real_T(&LOG);
      emxFree_real_T(&c_X);
      emxFree_real_T(&b);
      emxFree_real_T(&C);
      emxFree_int32_T(&r2);
      emxFree_int32_T(&r1);
      emxFree_real_T(&b_X);
      emxFree_real_T(&r0);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (EstimatedPX.c) */
