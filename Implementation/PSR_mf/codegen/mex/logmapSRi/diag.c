/*
 * diag.c
 *
 * Code generation for function 'diag'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "logmapSRi.h"
#include "diag.h"
#include "logmapSRi_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "logmapSRi_mexutil.h"
#include "logmapSRi_data.h"

/* Variable Definitions */
static emlrtRSInfo q_emlrtRSI = { 90, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtMCInfo j_emlrtMCI = { 87, 9, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtMCInfo k_emlrtMCI = { 86, 19, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtRTEInfo d_emlrtRTEI = { 1, 14, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtRTEInfo e_emlrtRTEI = { 89, 5, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtRSInfo bb_emlrtRSI = { 86, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

static emlrtRSInfo ib_emlrtRSI = { 87, "diag",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/diag.m" };

/* Function Definitions */
void diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T i;
  const mxArray *y;
  static const int32_T iv12[2] = { 1, 39 };

  const mxArray *m3;
  char_T cv14[39];
  static const char_T cv15[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'd', 'i', 'a', 'g', '_', 'v', 'a', 'r', 's', 'i',
    'z', 'e', 'd', 'M', 'a', 't', 'r', 'i', 'x', 'V', 'e', 'c', 't', 'o', 'r' };

  int32_T n;
  int32_T stride;
  boolean_T b3;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    i = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)d, i, (int32_T)sizeof(real_T),
                      &d_emlrtRTEI);
    d->data[0] = v->data[0];
  } else {
    if (!((v->size[0] == 1) || (v->size[1] == 1))) {
    } else {
      y = NULL;
      m3 = emlrtCreateCharArray(2, iv12);
      for (i = 0; i < 39; i++) {
        cv14[i] = cv15[i];
      }

      emlrtInitCharArrayR2013a(sp, 39, m3, cv14);
      emlrtAssign(&y, m3);
      st.site = &bb_emlrtRSI;
      b_st.site = &ib_emlrtRSI;
      error(&st, message(&b_st, y, &j_emlrtMCI), &k_emlrtMCI);
    }

    i = v->size[0];
    n = v->size[1];
    if (0 < v->size[1]) {
      n = muIntScalarMin_sint32(i, n);
      stride = v->size[0] + 1;
    } else {
      n = 0;
      stride = 0;
    }

    i = d->size[0];
    d->size[0] = n;
    emxEnsureCapacity(sp, (emxArray__common *)d, i, (int32_T)sizeof(real_T),
                      &e_emlrtRTEI);
    st.site = &q_emlrtRSI;
    if (1 > n) {
      b3 = false;
    } else {
      b3 = (n > 2147483646);
    }

    if (b3) {
      c_st.site = &l_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 0; i + 1 <= n; i++) {
      d->data[i] = v->data[i * stride];
    }
  }
}

/* End of code generation (diag.c) */
