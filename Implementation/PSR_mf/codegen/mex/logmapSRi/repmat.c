/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "logmapSRi.h"
#include "repmat.h"
#include "logmapSRi_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "logmapSRi_mexutil.h"
#include "logmapSRi_data.h"

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 40, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo o_emlrtRSI = { 42, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo p_emlrtRSI = { 47, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtMCInfo g_emlrtMCI = { 24, 5, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtMCInfo h_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo i_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRTEInfo c_emlrtRTEI = { 30, 1, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo cb_emlrtRSI = { 24, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo db_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRSInfo nb_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

/* Function Declarations */
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m8;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m8, 3, pArrays, "message", true, location);
}

void repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T varargin_2,
            emxArray_real_T *b)
{
  boolean_T b_varargin_2;
  const mxArray *y;
  static const int32_T iv9[2] = { 1, 28 };

  const mxArray *m2;
  char_T cv10[28];
  int32_T i;
  static const char_T cv11[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  static const int32_T iv10[2] = { 1, 15 };

  char_T cv12[15];
  static const char_T cv13[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  int32_T outsize_idx_1;
  const mxArray *e_y;
  static const int32_T iv11[2] = { 1, 15 };

  boolean_T b0;
  int32_T jtilecol;
  int32_T ibtile;
  boolean_T b1;
  int32_T jcol;
  int32_T iacol;
  int32_T ibmat;
  boolean_T b2;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &m_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if (varargin_2 != varargin_2) {
    b_varargin_2 = false;
  } else {
    b_varargin_2 = true;
  }

  if (b_varargin_2) {
  } else {
    y = NULL;
    m2 = emlrtCreateCharArray(2, iv9);
    for (i = 0; i < 28; i++) {
      cv10[i] = cv11[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m2, cv10);
    emlrtAssign(&y, m2);
    b_y = NULL;
    m2 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m2) = MIN_int32_T;
    emlrtAssign(&b_y, m2);
    c_y = NULL;
    m2 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m2) = MAX_int32_T;
    emlrtAssign(&c_y, m2);
    b_st.site = &db_emlrtRSI;
    c_st.site = &nb_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &h_emlrtMCI), &i_emlrtMCI);
  }

  i = a->size[0];
  if (i == a->size[0]) {
  } else {
    d_y = NULL;
    m2 = emlrtCreateCharArray(2, iv10);
    for (i = 0; i < 15; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m2, cv12);
    emlrtAssign(&d_y, m2);
    st.site = &cb_emlrtRSI;
    error(&st, d_y, &g_emlrtMCI);
  }

  outsize_idx_1 = a->size[1] * (int32_T)varargin_2;
  if (outsize_idx_1 == (real_T)a->size[1] * (real_T)(int32_T)varargin_2) {
  } else {
    e_y = NULL;
    m2 = emlrtCreateCharArray(2, iv11);
    for (i = 0; i < 15; i++) {
      cv12[i] = cv13[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m2, cv12);
    emlrtAssign(&e_y, m2);
    st.site = &cb_emlrtRSI;
    error(&st, e_y, &g_emlrtMCI);
  }

  i = b->size[0] * b->size[1];
  b->size[0] = a->size[0];
  b->size[1] = outsize_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &c_emlrtRTEI);
  i = a->size[0];
  if ((i == 0) || (outsize_idx_1 == 0)) {
  } else {
    i = a->size[0];
    outsize_idx_1 = a->size[1];
    st.site = &n_emlrtRSI;
    if (1 > (int32_T)varargin_2) {
      b0 = false;
    } else {
      b0 = ((int32_T)varargin_2 > 2147483646);
    }

    if (b0) {
      b_st.site = &l_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (jtilecol = 1; jtilecol <= (int32_T)varargin_2; jtilecol++) {
      ibtile = (jtilecol - 1) * (i * outsize_idx_1);
      st.site = &o_emlrtRSI;
      if (1 > outsize_idx_1) {
        b1 = false;
      } else {
        b1 = (outsize_idx_1 > 2147483646);
      }

      if (b1) {
        b_st.site = &l_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (jcol = 0; jcol + 1 <= outsize_idx_1; jcol++) {
        iacol = jcol * i;
        ibmat = ibtile + jcol * i;
        st.site = &p_emlrtRSI;
        if (1 > i) {
          b2 = false;
        } else {
          b2 = (i > 2147483646);
        }

        if (b2) {
          b_st.site = &l_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }

        for (k = 0; k + 1 <= i; k++) {
          b->data[ibmat + k] = a->data[iacol + k];
        }
      }
    }
  }
}

/* End of code generation (repmat.c) */
