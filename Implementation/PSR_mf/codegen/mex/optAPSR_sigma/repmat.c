/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "repmat.h"
#include "eye.h"
#include "optAPSR_sigma_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "optAPSR_sigma_mexutil.h"
#include "optAPSR_sigma_data.h"

/* Variable Definitions */
static emlrtRSInfo hb_emlrtRSI = { 12, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo ib_emlrtRSI = { 40, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo jb_emlrtRSI = { 47, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo tb_emlrtRSI = { 42, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo ub_emlrtRSI = { 45, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRTEInfo d_emlrtRTEI = { 24, 5, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtMCInfo k_emlrtMCI = { 24, 5, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRTEInfo hb_emlrtRTEI = { 30, 1, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo od_emlrtRSI = { 24, "repmat",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/repmat.m" };

/* Function Definitions */
void b_repmat(const emlrtStack *sp, const emxArray_real_T *a, real_T varargin_1,
              emxArray_real_T *b)
{
  boolean_T b_varargin_1;
  const mxArray *y;
  static const int32_T iv32[2] = { 1, 28 };

  const mxArray *m6;
  char_T cv28[28];
  int32_T i;
  static const char_T cv29[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T c_varargin_1;
  const mxArray *d_y;
  static const int32_T iv33[2] = { 1, 21 };

  char_T cv30[21];
  static const char_T cv31[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *e_y;
  static const int32_T iv34[2] = { 1, 15 };

  char_T cv32[15];
  static const char_T cv33[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  boolean_T overflow;
  int32_T ibmat;
  boolean_T b7;
  int32_T itilerow;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hb_emlrtRSI;
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
    m6 = emlrtCreateCharArray(2, iv32);
    for (i = 0; i < 28; i++) {
      cv28[i] = cv29[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m6, cv28);
    emlrtAssign(&y, m6);
    b_y = NULL;
    m6 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m6) = MIN_int32_T;
    emlrtAssign(&b_y, m6);
    c_y = NULL;
    m6 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m6) = MAX_int32_T;
    emlrtAssign(&c_y, m6);
    b_st.site = &md_emlrtRSI;
    c_st.site = &be_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &l_emlrtMCI), &m_emlrtMCI);
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
    m6 = emlrtCreateCharArray(2, iv33);
    for (i = 0; i < 21; i++) {
      cv30[i] = cv31[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m6, cv30);
    emlrtAssign(&d_y, m6);
    b_st.site = &gd_emlrtRSI;
    c_st.site = &sd_emlrtRSI;
    error(&b_st, b_message(&c_st, d_y, &o_emlrtMCI), &p_emlrtMCI);
  }

  i = a->size[1];
  if (i == a->size[1]) {
  } else {
    emlrtAssertMATLABThread(sp, &d_emlrtRTEI);
    e_y = NULL;
    m6 = emlrtCreateCharArray(2, iv34);
    for (i = 0; i < 15; i++) {
      cv32[i] = cv33[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m6, cv32);
    emlrtAssign(&e_y, m6);
    st.site = &od_emlrtRSI;
    error(&st, e_y, &k_emlrtMCI);
  }

  i = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &hb_emlrtRTEI);
  i = a->size[1];
  if (((int32_T)varargin_1 == 0) || (i == 0)) {
  } else {
    st.site = &tb_emlrtRSI;
    if (1 > a->size[1]) {
      overflow = false;
    } else {
      overflow = (a->size[1] > 2147483646);
    }

    if (overflow) {
      b_st.site = &l_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 0; i + 1 <= a->size[1]; i++) {
      ibmat = i * (int32_T)varargin_1;
      st.site = &ub_emlrtRSI;
      if (1 > (int32_T)varargin_1) {
        b7 = false;
      } else {
        b7 = ((int32_T)varargin_1 > 2147483646);
      }

      if (b7) {
        b_st.site = &l_emlrtRSI;
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
  static const int32_T iv30[2] = { 1, 28 };

  const mxArray *m4;
  char_T cv24[28];
  int32_T i;
  static const char_T cv25[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  static const int32_T iv31[2] = { 1, 15 };

  char_T cv26[15];
  static const char_T cv27[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  boolean_T b4;
  int32_T jtilecol;
  int32_T ibtile;
  boolean_T b5;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hb_emlrtRSI;
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
    m4 = emlrtCreateCharArray(2, iv30);
    for (i = 0; i < 28; i++) {
      cv24[i] = cv25[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m4, cv24);
    emlrtAssign(&y, m4);
    b_y = NULL;
    m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m4) = MIN_int32_T;
    emlrtAssign(&b_y, m4);
    c_y = NULL;
    m4 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m4) = MAX_int32_T;
    emlrtAssign(&c_y, m4);
    b_st.site = &md_emlrtRSI;
    c_st.site = &be_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &l_emlrtMCI), &m_emlrtMCI);
  }

  i = a->size[0];
  if (i == a->size[0]) {
  } else {
    emlrtAssertMATLABThread(sp, &d_emlrtRTEI);
    d_y = NULL;
    m4 = emlrtCreateCharArray(2, iv31);
    for (i = 0; i < 15; i++) {
      cv26[i] = cv27[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m4, cv26);
    emlrtAssign(&d_y, m4);
    st.site = &od_emlrtRSI;
    error(&st, d_y, &k_emlrtMCI);
  }

  i = b->size[0] * b->size[1];
  b->size[0] = a->size[0];
  b->size[1] = (int32_T)varargin_2;
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &hb_emlrtRTEI);
  i = a->size[0];
  if ((i == 0) || ((int32_T)varargin_2 == 0)) {
  } else {
    i = a->size[0];
    st.site = &ib_emlrtRSI;
    if (1 > (int32_T)varargin_2) {
      b4 = false;
    } else {
      b4 = ((int32_T)varargin_2 > 2147483646);
    }

    if (b4) {
      b_st.site = &l_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (jtilecol = 1; jtilecol <= (int32_T)varargin_2; jtilecol++) {
      ibtile = (jtilecol - 1) * i;
      st.site = &jb_emlrtRSI;
      if (1 > i) {
        b5 = false;
      } else {
        b5 = (i > 2147483646);
      }

      if (b5) {
        b_st.site = &l_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 0; k + 1 <= i; k++) {
        b->data[ibtile + k] = a->data[k];
      }
    }
  }
}

/* End of code generation (repmat.c) */
