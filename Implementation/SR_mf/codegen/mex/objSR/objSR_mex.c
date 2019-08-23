/*
 * objSR_mex.c
 *
 * Code generation for function 'objSR'
 *
 * C source code generated on: Mon Feb 10 22:16:59 2014
 *
 */

/* Include files */
#include "mex.h"
#include "objSR_api.h"
#include "objSR_initialize.h"
#include "objSR_terminate.h"

/* Type Definitions */

/* Function Declarations */
static void objSR_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[]);
MEXFUNCTION_LINKAGE mxArray *emlrtMexFcnProperties(void);

/* Variable Definitions */
emlrtContext emlrtContextGlobal = { true, false, EMLRT_VERSION_INFO, NULL, "objSR", NULL, false, {2045744189U,2170104910U,2743257031U,4284093946U}, 0, false, 1, false };

/* Function Definitions */
static void objSR_mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Temporary copy for mex outputs. */
  mxArray *outputs[1];
  int n = 0;
  int nOutputs = (nlhs < 1 ? 1 : nlhs);
  objSRStackData* objSRStackDataLocal = (objSRStackData*)mxCalloc(1,sizeof(objSRStackData));
  /* Check for proper number of arguments. */
  if(nrhs != 3) {
    mexErrMsgIdAndTxt("emlcoder:emlmex:WrongNumberOfInputs","3 inputs required for entry-point 'objSR'.");
  } else if(nlhs > 1) {
    mexErrMsgIdAndTxt("emlcoder:emlmex:TooManyOutputArguments","Too many output arguments for entry-point 'objSR'.");
  }
  /* Module initialization. */
  objSR_initialize(&emlrtContextGlobal);
  /* Call the function. */
  objSR_api(objSRStackDataLocal, prhs,(const mxArray**)outputs);
  /* Copy over outputs to the caller. */
  for (n = 0; n < nOutputs; ++n) {
    plhs[n] = emlrtReturnArrayR2009a(outputs[n]);
  }
  /* Module finalization. */
  objSR_terminate();
  mxFree(objSRStackDataLocal);
}

void objSR_atexit_wrapper(void)
{
  objSR_atexit();
}

void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
  /* Initialize the memory manager. */
  mexAtExit(objSR_atexit_wrapper);
  emlrtClearAllocCount(&emlrtContextGlobal, 0, 0, NULL);
  /* Dispatch the entry-point. */
  objSR_mexFunction(nlhs, plhs, nrhs, prhs);
}

mxArray *emlrtMexFcnProperties(void)
{
    const char *mexProperties[] = {
        "Version",
        "EntryPoints"};
    const char *epProperties[] = {
        "Name",
        "NumberOfInputs",
        "NumberOfOutputs",
        "ConstantInputs"};
    mxArray *xResult = mxCreateStructMatrix(1,1,2,mexProperties);
    mxArray *xEntryPoints = mxCreateStructMatrix(1,1,4,epProperties);
    mxArray *xInputs = NULL;
    xInputs = mxCreateLogicalMatrix(1, 3);
    mxSetFieldByNumber(xEntryPoints, 0, 0, mxCreateString("objSR"));
    mxSetFieldByNumber(xEntryPoints, 0, 1, mxCreateDoubleScalar(3));
    mxSetFieldByNumber(xEntryPoints, 0, 2, mxCreateDoubleScalar(1));
    mxSetFieldByNumber(xEntryPoints, 0, 3, xInputs);
    mxSetFieldByNumber(xResult, 0, 0, mxCreateString("7.14.0.739 (R2012a)"));
    mxSetFieldByNumber(xResult, 0, 1, xEntryPoints);

    return xResult;
}
/* End of code generation (objSR_mex.c) */
