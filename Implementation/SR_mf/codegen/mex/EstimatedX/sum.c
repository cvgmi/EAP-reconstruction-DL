/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedX.h"
#include "sum.h"
#include "EstimatedX_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "EstimatedX_data.h"

/* Variable Definitions */
static emlrtRSInfo u_emlrtRSI = { 13, "sum",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/sum.m" };

static emlrtRSInfo v_emlrtRSI = { 46, "sumprod",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/private/sumprod.m" };

static emlrtRSInfo w_emlrtRSI = { 45, "combine_vector_elements",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRSInfo x_emlrtRSI = { 51, "combine_vector_elements",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 30, 1, "combine_vector_elements",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/private/combine_vector_elements.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 1, 14, "sum",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/sum.m" };

/* Function Definitions */
void sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T sz[2];
  int32_T ixstart;
  int32_T k;
  int32_T vlen;
  int32_T ix;
  int32_T iy;
  boolean_T overflow;
  int32_T i;
  real_T s;
  boolean_T b2;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &u_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &v_emlrtRSI;
  for (ixstart = 0; ixstart < 2; ixstart++) {
    sz[ixstart] = (uint32_T)x->size[ixstart];
  }

  ixstart = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)y, ixstart, (int32_T)sizeof
                    (real_T), &s_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    ixstart = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity(&b_st, (emxArray__common *)y, ixstart, (int32_T)sizeof
                      (real_T), &t_emlrtRTEI);
    ixstart = y->size[0] * y->size[1];
    y->size[1] = (int32_T)sz[1];
    emxEnsureCapacity(&b_st, (emxArray__common *)y, ixstart, (int32_T)sizeof
                      (real_T), &t_emlrtRTEI);
    k = (int32_T)sz[1];
    for (ixstart = 0; ixstart < k; ixstart++) {
      y->data[ixstart] = 0.0;
    }
  } else {
    vlen = x->size[0];
    ix = -1;
    iy = -1;
    c_st.site = &w_emlrtRSI;
    overflow = (x->size[1] > 2147483646);
    if (overflow) {
      d_st.site = &p_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (i = 1; i <= x->size[1]; i++) {
      ixstart = ix + 1;
      ix++;
      s = x->data[ixstart];
      c_st.site = &x_emlrtRSI;
      if (2 > vlen) {
        b2 = false;
      } else {
        b2 = (vlen > 2147483646);
      }

      if (b2) {
        d_st.site = &p_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (k = 2; k <= vlen; k++) {
        ix++;
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

/* End of code generation (sum.c) */
