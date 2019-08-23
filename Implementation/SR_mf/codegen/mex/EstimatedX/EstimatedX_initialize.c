/*
 * EstimatedX_initialize.c
 *
 * Code generation for function 'EstimatedX_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "EstimatedX.h"
#include "EstimatedX_initialize.h"
#include "EstimatedX_data.h"

/* Function Definitions */
void EstimatedX_initialize(emlrtContext *aContext)
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

/* End of code generation (EstimatedX_initialize.c) */
