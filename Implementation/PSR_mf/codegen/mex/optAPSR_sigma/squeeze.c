/*
 * squeeze.c
 *
 * Code generation for function 'squeeze'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "squeeze.h"
#include "optAPSR_sigma_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "optAPSR_sigma_data.h"

/* Variable Definitions */
static emlrtRSInfo k_emlrtRSI = { 52, "squeeze",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/squeeze.m" };

static emlrtRTEInfo v_emlrtRTEI = { 51, 1, "squeeze",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/squeeze.m" };

/* Function Definitions */
void squeeze(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *b)
{
  int32_T k;
  int32_T b_b;
  boolean_T b2;
  int32_T sqsz[3];
  boolean_T b3;
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
    st.site = &j_emlrtRSI;
    if (1 > b_b) {
      b2 = false;
    } else {
      b2 = (b_b > 2147483646);
    }

    if (b2) {
      b_st.site = &l_emlrtRSI;
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
                      &v_emlrtRTEI);
    b_b = a->size[0] * a->size[2];
    st.site = &k_emlrtRSI;
    if (1 > b_b) {
      b3 = false;
    } else {
      b3 = (b_b > 2147483646);
    }

    if (b3) {
      b_st.site = &l_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 0; k + 1 <= b_b; k++) {
      b->data[k] = a->data[k];
    }
  }
}

/* End of code generation (squeeze.c) */
