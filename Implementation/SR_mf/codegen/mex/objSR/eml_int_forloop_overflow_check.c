/*
 * eml_int_forloop_overflow_check.c
 *
 * Code generation for function 'eml_int_forloop_overflow_check'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "objSR.h"
#include "eml_int_forloop_overflow_check.h"
#include "objSR_mexutil.h"

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = { 87, 9, "eml_int_forloop_overflow_check",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo e_emlrtMCI = { 87, 9, "eml_int_forloop_overflow_check",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtMCInfo f_emlrtMCI = { 86, 15, "eml_int_forloop_overflow_check",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo kb_emlrtRSI = { 86, "eml_int_forloop_overflow_check",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

static emlrtRSInfo ub_emlrtRSI = { 87, "eml_int_forloop_overflow_check",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

/* Function Declarations */
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m9;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m9, 2, pArrays, "message", true, location);
}

void check_forloop_overflow_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv13[2] = { 1, 34 };

  const mxArray *m3;
  char_T cv14[34];
  int32_T i;
  static const char_T cv15[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *b_y;
  static const int32_T iv14[2] = { 1, 5 };

  char_T cv16[5];
  static const char_T cv17[5] = { 'i', 'n', 't', '3', '2' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  emlrtAssertMATLABThread(sp, &emlrtRTEI);
  y = NULL;
  m3 = emlrtCreateCharArray(2, iv13);
  for (i = 0; i < 34; i++) {
    cv14[i] = cv15[i];
  }

  emlrtInitCharArrayR2013a(sp, 34, m3, cv14);
  emlrtAssign(&y, m3);
  b_y = NULL;
  m3 = emlrtCreateCharArray(2, iv14);
  for (i = 0; i < 5; i++) {
    cv16[i] = cv17[i];
  }

  emlrtInitCharArrayR2013a(sp, 5, m3, cv16);
  emlrtAssign(&b_y, m3);
  st.site = &kb_emlrtRSI;
  b_st.site = &ub_emlrtRSI;
  error(&st, b_message(&b_st, y, b_y, &e_emlrtMCI), &f_emlrtMCI);
}

/* End of code generation (eml_int_forloop_overflow_check.c) */
