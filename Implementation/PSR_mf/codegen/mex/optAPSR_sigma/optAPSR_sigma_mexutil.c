/*
 * optAPSR_sigma_mexutil.c
 *
 * Code generation for function 'optAPSR_sigma_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_sigma.h"
#include "optAPSR_sigma_mexutil.h"

/* Function Definitions */
const mxArray *b_message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m16;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m16, 1, &pArray, "message", true,
    location);
}

const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m17;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m17, 3, pArrays, "message", true,
    location);
}

const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m13;
  y = NULL;
  m13 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m13);
  return y;
}

void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

/* End of code generation (optAPSR_sigma_mexutil.c) */
