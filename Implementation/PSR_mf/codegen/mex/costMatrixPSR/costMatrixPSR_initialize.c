/*
 * costMatrixPSR_initialize.c
 *
 * Code generation for function 'costMatrixPSR_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "costMatrixPSR.h"
#include "costMatrixPSR_initialize.h"
#include "costMatrixPSR_data.h"

/* Function Definitions */
void costMatrixPSR_initialize(emlrtContext *aContext)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, emlrtLockerFunction,
                     omp_get_num_procs());
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (costMatrixPSR_initialize.c) */
