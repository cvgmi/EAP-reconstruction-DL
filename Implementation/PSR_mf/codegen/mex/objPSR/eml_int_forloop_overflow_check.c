/*
 * eml_int_forloop_overflow_check.c
 *
 * Code generation for function 'eml_int_forloop_overflow_check'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "objPSR.h"
#include "eml_int_forloop_overflow_check.h"
#include "objPSR_mexutil.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 87, 9, "eml_int_forloop_overflow_check",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo emlrtMCI = { 87, 9, "eml_int_forloop_overflow_check",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo b_emlrtMCI = { 86, 15, "eml_int_forloop_overflow_check",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo xb_emlrtRSI = { 86, "eml_int_forloop_overflow_check",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo hc_emlrtRSI = { 87, "eml_int_forloop_overflow_check",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

/* Function Declarations */
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m8;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m8, 2, pArrays, "message", true, location);
}

void check_forloop_overflow_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 34 };

  const mxArray *m1;
  char_T cv8[34];
  int32_T i;
  static const char_T cv9[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv9[2] = { 1, 5 };

  char_T cv10[5];
  static const char_T cv11[5] = { 'i', 'n', 't', '3', '2' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  emlrtAssertMATLABThread(sp, &emlrtRTEI);
  y = NULL;
  m1 = emlrtCreateCharArray(2, iv8);
  for (i = 0; i < 34; i++) {
    cv8[i] = cv9[i];
  }

  emlrtInitCharArrayR2013a(sp, 34, m1, cv8);
  emlrtAssign(&y, m1);
  b_y = NULL;
  m1 = emlrtCreateCharArray(2, iv9);
  for (i = 0; i < 5; i++) {
    cv10[i] = cv11[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m1, cv10);
  emlrtAssign(&b_y, m1);
  st.site = &xb_emlrtRSI;
  b_st.site = &hc_emlrtRSI;
  error(&st, message(&b_st, y, b_y, &emlrtMCI), &b_emlrtMCI);
}

/* End of code generation (eml_int_forloop_overflow_check.c) */
