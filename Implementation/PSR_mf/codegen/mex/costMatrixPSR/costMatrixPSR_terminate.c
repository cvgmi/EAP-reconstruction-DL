/*
 * costMatrixPSR_terminate.c
 *
 * Code generation for function 'costMatrixPSR_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "costMatrixPSR.h"
#include "costMatrixPSR_terminate.h"

/* Function Definitions */
void costMatrixPSR_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal,
                     emlrtLockerFunction, omp_get_num_procs());
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void costMatrixPSR_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (costMatrixPSR_terminate.c) */
