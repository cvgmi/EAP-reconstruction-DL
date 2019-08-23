/*
 * squeeze.c
 *
 * Code generation for function 'squeeze'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "costMatrixPSR.h"
#include "squeeze.h"
#include "costMatrixPSR_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "costMatrixPSR_data.h"

/* Variable Definitions */
static emlrtRSInfo e_emlrtRSI = { 22, "squeeze",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/squeeze.m" };

static emlrtRSInfo g_emlrtRSI = { 52, "squeeze",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/squeeze.m" };

static emlrtRTEInfo m_emlrtRTEI = { 21, 5, "squeeze",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/squeeze.m" };

static emlrtRTEInfo n_emlrtRTEI = { 51, 1, "squeeze",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/squeeze.m" };

/* Function Definitions */
void b_squeeze(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T
               *b)
{
  int32_T k;
  int32_T b_b;
  boolean_T b0;
  int32_T sqsz[3];
  boolean_T b1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  k = 3;
  while ((k > 2) && (a->size[2] == 1)) {
    k = 2;
  }

  if (k <= 2) {
    b_b = a->size[0];
    k = b->size[0] * b->size[1];
    b->size[0] = b_b;
    b->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                      &m_emlrtRTEI);
    b_b = a->size[0] * a->size[2];
    st.site = &e_emlrtRSI;
    if (1 > b_b) {
      b0 = false;
    } else {
      b0 = (b_b > 2147483646);
    }

    if (b0) {
      b_st.site = &f_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= b_b; k++) {
      b->data[k] = a->data[k];
    }
  } else {
    for (k = 0; k < 3; k++) {
      sqsz[k] = 1;
    }

    k = 0;
    if (a->size[0] != 1) {
      sqsz[0] = a->size[0];
      k = 1;
    }

    if (a->size[2] != 1) {
      sqsz[k] = a->size[2];
    }

    k = b->size[0] * b->size[1];
    b->size[0] = sqsz[0];
    b->size[1] = sqsz[1];
    emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                      &n_emlrtRTEI);
    b_b = a->size[0] * a->size[2];
    st.site = &g_emlrtRSI;
    if (1 > b_b) {
      b1 = false;
    } else {
      b1 = (b_b > 2147483646);
    }

    if (b1) {
      b_st.site = &f_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= b_b; k++) {
      b->data[k] = a->data[k];
    }
  }
}

void squeeze(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *b)
{
  int32_T k;
  boolean_T overflow;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  k = b->size[0];
  b->size[0] = a->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b, k, (int32_T)sizeof(real_T),
                    &m_emlrtRTEI);
  st.site = &e_emlrtRSI;
  if (1 > a->size[0]) {
    overflow = false;
  } else {
    overflow = (a->size[0] > 2147483646);
  }

  if (overflow) {
    b_st.site = &f_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 0; k + 1 <= a->size[0]; k++) {
    b->data[k] = a->data[k];
  }
}

/* End of code generation (squeeze.c) */
