/*
 * eye.c
 *
 * Code generation for function 'eye'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD_revBeta.h"
#include "eye.h"
#include "optAPSR_AGD_revBeta_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "optAPSR_AGD_revBeta_mexutil.h"
#include "optAPSR_AGD_revBeta_data.h"

/* Variable Definitions */
static emlrtRSInfo gc_emlrtRSI = { 35, "eye",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/eye.m" };

static emlrtRSInfo hc_emlrtRSI = { 81, "eye",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/eye.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 1, 14, "eye",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/eye.m" };

/* Function Definitions */
void eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *I)
{
  boolean_T b_varargin_1;
  const mxArray *y;
  static const int32_T iv25[2] = { 1, 28 };

  const mxArray *m7;
  char_T cv24[28];
  int32_T i;
  static const char_T cv25[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T c_varargin_1;
  const mxArray *d_y;
  static const int32_T iv26[2] = { 1, 21 };

  char_T cv26[21];
  static const char_T cv27[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T loop_ub;
  boolean_T b6;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &gc_emlrtRSI;
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
    m7 = emlrtCreateCharArray(2, iv25);
    for (i = 0; i < 28; i++) {
      cv24[i] = cv25[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m7, cv24);
    emlrtAssign(&y, m7);
    b_y = NULL;
    m7 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m7) = MIN_int32_T;
    emlrtAssign(&b_y, m7);
    c_y = NULL;
    m7 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m7) = MAX_int32_T;
    emlrtAssign(&c_y, m7);
    b_st.site = &nd_emlrtRSI;
    c_st.site = &be_emlrtRSI;
    error(&b_st, c_message(&c_st, y, b_y, c_y, &k_emlrtMCI), &l_emlrtMCI);
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
    m7 = emlrtCreateCharArray(2, iv26);
    for (i = 0; i < 21; i++) {
      cv26[i] = cv27[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m7, cv26);
    emlrtAssign(&d_y, m7);
    b_st.site = &jd_emlrtRSI;
    c_st.site = &ud_emlrtRSI;
    error(&b_st, b_message(&c_st, d_y, &n_emlrtMCI), &o_emlrtMCI);
  }

  i = I->size[0] * I->size[1];
  I->size[0] = (int32_T)varargin_1;
  I->size[1] = (int32_T)varargin_1;
  emxEnsureCapacity(sp, (emxArray__common *)I, i, (int32_T)sizeof(real_T),
                    &gb_emlrtRTEI);
  loop_ub = (int32_T)varargin_1 * (int32_T)varargin_1;
  for (i = 0; i < loop_ub; i++) {
    I->data[i] = 0.0;
  }

  if ((int32_T)varargin_1 > 0) {
    st.site = &hc_emlrtRSI;
    if (1 > (int32_T)varargin_1) {
      b6 = false;
    } else {
      b6 = ((int32_T)varargin_1 > 2147483646);
    }

    if (b6) {
      b_st.site = &n_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 0; i + 1 <= (int32_T)varargin_1; i++) {
      I->data[i + I->size[0] * i] = 1.0;
    }
  }
}

/* End of code generation (eye.c) */
