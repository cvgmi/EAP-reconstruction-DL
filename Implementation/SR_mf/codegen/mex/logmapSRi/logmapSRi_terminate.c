/*
 * logmapSRi_terminate.c
 *
 * Code generation for function 'logmapSRi_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "logmapSRi.h"
#include "logmapSRi_terminate.h"

/* Function Definitions */
void logmapSRi_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void logmapSRi_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (logmapSRi_terminate.c) */
