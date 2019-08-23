/*
 * eye.c
 *
 * Code generation for function 'eye'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "eye.h"
#include "repmat.h"
#include "optASR_sigma_disp_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "optASR_sigma_disp_mexutil.h"
#include "optASR_sigma_disp_data.h"

/* Variable Definitions */
static emlrtRSInfo fc_emlrtRSI = { 35, "eye",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/eye.m" };

static emlrtRSInfo gc_emlrtRSI = { 81, "eye",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/eye.m" };

static emlrtRTEInfo ib_emlrtRTEI = { 1, 14, "eye",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/eye.m" };

/* Function Definitions */
void eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *I)
{
  boolean_T b_varargin_1;
  const mxArray *y;
  static const int32_T iv40[2] = { 1, 28 };

  const mxArray *m10;
  char_T cv48[28];
  int32_T i;
  static const char_T cv49[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T c_varargin_1;
  const mxArray *d_y;
  static const int32_T iv41[2] = { 1, 21 };

  char_T cv50[21];
  static const char_T cv51[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T loop_ub;
  boolean_T b6;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fc_emlrtRSI;
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
    m10 = emlrtCreateCharArray(2, iv40);
    for (i = 0; i < 28; i++) {
      cv48[i] = cv49[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m10, cv48);
    emlrtAssign(&y, m10);
    b_y = NULL;
    m10 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m10) = MIN_int32_T;
    emlrtAssign(&b_y, m10);
    c_y = NULL;
    m10 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m10) = MAX_int32_T;
    emlrtAssign(&c_y, m10);
    b_st.site = &bd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
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
    m10 = emlrtCreateCharArray(2, iv41);
    for (i = 0; i < 21; i++) {
      cv50[i] = cv51[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m10, cv50);
    emlrtAssign(&d_y, m10);
    b_st.site = &ad_emlrtRSI;
    c_st.site = &ld_emlrtRSI;
    error(&b_st, message(&c_st, d_y, &o_emlrtMCI), &p_emlrtMCI);
  }

  i = I->size[0] * I->size[1];
  I->size[0] = (int32_T)varargin_1;
  I->size[1] = (int32_T)varargin_1;
  emxEnsureCapacity(sp, (emxArray__common *)I, i, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  loop_ub = (int32_T)varargin_1 * (int32_T)varargin_1;
  for (i = 0; i < loop_ub; i++) {
    I->data[i] = 0.0;
  }

  if ((int32_T)varargin_1 > 0) {
    st.site = &gc_emlrtRSI;
    if (1 > (int32_T)varargin_1) {
      b6 = false;
    } else {
      b6 = ((int32_T)varargin_1 > 2147483646);
    }

    if (b6) {
      b_st.site = &x_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 0; i + 1 <= (int32_T)varargin_1; i++) {
      I->data[i + I->size[0] * i] = 1.0;
    }
  }
}

/* End of code generation (eye.c) */
