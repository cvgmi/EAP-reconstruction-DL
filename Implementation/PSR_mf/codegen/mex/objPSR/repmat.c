/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "objPSR.h"
#include "repmat.h"
#include "objPSR_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "objPSR_mexutil.h"
#include "objPSR_data.h"

/* Variable Definitions */
static emlrtRSInfo w_emlrtRSI = { 12, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo x_emlrtRSI = { 40, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo y_emlrtRSI = { 47, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo jb_emlrtRSI = { 42, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo kb_emlrtRSI = { 45, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRTEInfo d_emlrtRTEI = { 24, 5, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRTEInfo e_emlrtRTEI = { 51, 13, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo g_emlrtMCI = { 24, 5, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtMCInfo h_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtMCInfo i_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRTEInfo y_emlrtRTEI = { 30, 1, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo rb_emlrtRSI = { 24, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo sb_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

static emlrtRSInfo jc_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

/* Function Definitions */
void b_repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T varargin_1,
              emxArray_real_T *b)
{
  boolean_T b_varargin_1;
  const mxArray *y;
  static const int32_T iv19[2] = { 1, 28 };

  const mxArray *m5;
  char_T cv22[28];
  int32_T i;
  static const char_T cv23[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T c_varargin_1;
  const mxArray *d_y;
  static const int32_T iv20[2] = { 1, 21 };

  char_T cv24[21];
  static const char_T cv25[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *e_y;
  static const int32_T iv21[2] = { 1, 15 };

  char_T cv26[15];
  static const char_T cv27[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  boolean_T overflow;
  int32_T ibmat;
  boolean_T b6;
  int32_T itilerow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &w_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if (varargin_1 != varargin_1) {
    b_varargin_1 = false;
  } else {
    b_varargin_1 = true;
  }

  if (b_varargin_1) {
  } else {
    emlrtAssertMATLABThread(&st, &e_emlrtRTEI);
    y = NULL;
    m5 = emlrtCreateCharArray(2, iv19);
    for (i = 0; i < 28; i++) {
      cv22[i] = cv23[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m5, cv22);
    emlrtAssign(&y, m5);
    b_y = NULL;
    m5 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m5) = MIN_int32_T;
    emlrtAssign(&b_y, m5);
    c_y = NULL;
    m5 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m5) = MAX_int32_T;
    emlrtAssign(&c_y, m5);
    b_st.site = &sb_emlrtRSI;
    c_st.site = &jc_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &h_emlrtMCI), &i_emlrtMCI);
  }

  if (varargin_1 <= 0.0) {
    c_varargin_1 = 0.0;
  } else {
    c_varargin_1 = varargin_1;
  }

  if (2.147483647E+9 >= c_varargin_1) {
  } else {
    emlrtAssertMATLABThread(&st, &g_emlrtRTEI);
    d_y = NULL;
    m5 = emlrtCreateCharArray(2, iv20);
    for (i = 0; i < 21; i++) {
      cv24[i] = cv25[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m5, cv24);
    emlrtAssign(&d_y, m5);
    b_st.site = &pb_emlrtRSI;
    c_st.site = &bc_emlrtRSI;
    error(&b_st, b_message(&c_st, d_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  i = a->size[1];
  if (i == a->size[1]) {
  } else {
    emlrtAssertMATLABThread(sp, &d_emlrtRTEI);
    e_y = NULL;
    m5 = emlrtCreateCharArray(2, iv21);
    for (i = 0; i < 15; i++) {
      cv26[i] = cv27[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m5, cv26);
    emlrtAssign(&e_y, m5);
    st.site = &rb_emlrtRSI;
    error(&st, e_y, &g_emlrtMCI);
  }

  i = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &y_emlrtRTEI);
  i = a->size[1];
  if (((int32_T)varargin_1 == 0) || (i == 0)) {
  } else {
    st.site = &jb_emlrtRSI;
    if (1 > a->size[1]) {
      overflow = false;
    } else {
      overflow = (a->size[1] > 2147483646);
    }

    if (overflow) {
      b_st.site = &i_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 0; i + 1 <= a->size[1]; i++) {
      ibmat = i * (int32_T)varargin_1;
      st.site = &kb_emlrtRSI;
      if (1 > (int32_T)varargin_1) {
        b6 = false;
      } else {
        b6 = ((int32_T)varargin_1 > 2147483646);
      }

      if (b6) {
        b_st.site = &i_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (itilerow = 1; itilerow <= (int32_T)varargin_1; itilerow++) {
        b->data[(ibmat + itilerow) - 1] = a->data[i];
      }
    }
  }
}

void repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T varargin_2,
            emxArray_real_T *b)
{
  boolean_T b_varargin_2;
  const mxArray *y;
  static const int32_T iv17[2] = { 1, 28 };

  const mxArray *m3;
  char_T cv18[28];
  int32_T i;
  static const char_T cv19[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  static const int32_T iv18[2] = { 1, 15 };

  char_T cv20[15];
  static const char_T cv21[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  boolean_T b3;
  int32_T jtilecol;
  int32_T ibtile;
  boolean_T b4;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &w_emlrtRSI;
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
    emlrtAssertMATLABThread(&st, &e_emlrtRTEI);
    y = NULL;
    m3 = emlrtCreateCharArray(2, iv17);
    for (i = 0; i < 28; i++) {
      cv18[i] = cv19[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m3, cv18);
    emlrtAssign(&y, m3);
    b_y = NULL;
    m3 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m3) = MIN_int32_T;
    emlrtAssign(&b_y, m3);
    c_y = NULL;
    m3 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m3) = MAX_int32_T;
    emlrtAssign(&c_y, m3);
    b_st.site = &sb_emlrtRSI;
    c_st.site = &jc_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &h_emlrtMCI), &i_emlrtMCI);
  }

  i = a->size[0];
  if (i == a->size[0]) {
  } else {
    emlrtAssertMATLABThread(sp, &d_emlrtRTEI);
    d_y = NULL;
    m3 = emlrtCreateCharArray(2, iv18);
    for (i = 0; i < 15; i++) {
      cv20[i] = cv21[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m3, cv20);
    emlrtAssign(&d_y, m3);
    st.site = &rb_emlrtRSI;
    error(&st, d_y, &g_emlrtMCI);
  }

  i = b->size[0] * b->size[1];
  b->size[0] = a->size[0];
  b->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &y_emlrtRTEI);
  i = a->size[0];
  if ((i == 0) || ((int32_T)varargin_2 == 0)) {
  } else {
    i = a->size[0];
    st.site = &x_emlrtRSI;
    if (1 > (int32_T)varargin_2) {
      b3 = false;
    } else {
      b3 = ((int32_T)varargin_2 > 2147483646);
    }

    if (b3) {
      b_st.site = &i_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (jtilecol = 1; jtilecol <= (int32_T)varargin_2; jtilecol++) {
      ibtile = (jtilecol - 1) * i;
      st.site = &y_emlrtRSI;
      if (1 > i) {
        b4 = false;
      } else {
        b4 = (i > 2147483646);
      }

      if (b4) {
        b_st.site = &i_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 0; k + 1 <= i; k++) {
        b->data[ibtile + k] = a->data[k];
      }
    }
  }
}

/* End of code generation (repmat.c) */
