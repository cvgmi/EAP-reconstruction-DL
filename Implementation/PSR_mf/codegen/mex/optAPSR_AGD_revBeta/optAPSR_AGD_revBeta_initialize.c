/*
 * optAPSR_AGD_revBeta_initialize.c
 *
 * Code generation for function 'optAPSR_AGD_revBeta_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD_revBeta.h"
#include "optAPSR_AGD_revBeta_initialize.h"
#include "optAPSR_AGD_revBeta_data.h"

/* Function Definitions */
void optAPSR_AGD_revBeta_initialize(emlrtContext *aContext)
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

/* End of code generation (optAPSR_AGD_revBeta_initialize.c) */
