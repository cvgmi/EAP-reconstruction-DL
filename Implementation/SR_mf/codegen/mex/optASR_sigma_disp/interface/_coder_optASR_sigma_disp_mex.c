/*
 * _coder_optASR_sigma_disp_mex.c
 *
 * Code generation for function 'optASR_sigma_disp'
 *
 */

/* Include files */
#include "mex.h"
#include "_coder_optASR_sigma_disp_api.h"
#include "optASR_sigma_disp_data.h"
#include "optASR_sigma_disp_initialize.h"
#include "optASR_sigma_disp_terminate.h"

/* Function Declarations */
static void optASR_sigma_disp_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);
void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtCTX aTLS, void *aData);
int emlrtMexPrintf(const char *aFmt, ...);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "optASR_sigma_disp", NULL, false, {2045744189U,2170104910U,2743257031U,4284093946U}, NULL };
void *emlrtRootTLSGlobal = NULL;
omp_lock_t emlrtLockGlobal;
static jmp_buf emlrtJBEnviron;

/* Function Definitions */
static void optASR_sigma_disp_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  const mxArray *outputs[1];
  const mxArray *inputs[4];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  int nInputs = nrhs;
  emlrtStack st = { NULL, NULL, NULL };
  /* Module initialization. */
  optASR_sigma_disp_initialize(&emlrtContextGlobal);
  st.tls = emlrtRootTLSGlobal;
  emlrtSetJmpBuf(&st, &emlrtJBEnviron);
  if (setjmp(emlrtJBEnviron) == 0) {
    /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, mxINT32_CLASS, 4, mxCHAR_CLASS, 17, "optASR_sigma_disp");
  } else if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, mxCHAR_CLASS, 17, "optASR_sigma_disp");
  }
  /* Temporary copy for mex inputs. */
  for (n = 0; n < nInputs; ++n) {
    inputs[n] = prhs[n];
  }
  /* Call the function. */
  optASR_sigma_disp_api(inputs, outputs);
  } else {
    omp_destroy_lock(&emlrtLockGlobal);
    omp_destroy_nest_lock(&emlrtNestLockGlobal);
    emlrtReportParallelRunTimeError(&st);
  }
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  optASR_sigma_disp_terminate();
}

void optASR_sigma_disp_atexit_wrapper(void)
{
   optASR_sigma_disp_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  omp_init_lock(&emlrtLockGlobal);
  omp_init_nest_lock(&emlrtNestLockGlobal);
  emlrtLoadLibrary(OMPLIBNAME);
  mexAtExit(optASR_sigma_disp_atexit_wrapper);
  /* Dispatch the entry-point. */
  optASR_sigma_disp_mexFunction(nlhs, plhs, nrhs, prhs);
  omp_destroy_lock(&emlrtLockGlobal);
  omp_destroy_nest_lock(&emlrtNestLockGlobal);
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, emlrtCTX aTLS, void *aData)
{
    omp_set_lock(&emlrtLockGlobal);
    aLockee(aTLS, aData);
    omp_unset_lock(&emlrtLockGlobal);
}

int emlrtMexPrintf(const char *aFmt, ...)
{
    va_list ap;
    int count;
    va_start(ap, aFmt);
    omp_set_lock(&emlrtLockGlobal);
    count = emlrtMexVprintf(aFmt, ap);
    omp_unset_lock(&emlrtLockGlobal);
    va_end(ap);
    return count;
}
/* End of code generation (_coder_optASR_sigma_disp_mex.c) */
