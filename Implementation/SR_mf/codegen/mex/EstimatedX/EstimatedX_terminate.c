/*
 * EstimatedX_terminate.c
 *
 * Code generation for function 'EstimatedX_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedX.h"
#include "EstimatedX_terminate.h"

/* Function Definitions */
void EstimatedX_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                     emlrtLockerFunction, omp_get_num_procs());
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void EstimatedX_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (EstimatedX_terminate.c) */
