/*
 * optAPSR_sigma_initialize.c
 *
 * Code generation for function 'optAPSR_sigma_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "optAPSR_sigma_initialize.h"
#include "optAPSR_sigma_data.h"

/* Function Definitions */
void optAPSR_sigma_initialize(emlrtContext *aContext)
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

/* End of code generation (optAPSR_sigma_initialize.c) */
