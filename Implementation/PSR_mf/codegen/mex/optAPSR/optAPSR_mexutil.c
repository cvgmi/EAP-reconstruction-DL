/*
 * optAPSR_mexutil.c
 *
 * Code generation for function 'optAPSR_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR.h"
#include "optAPSR_mexutil.h"

/* Function Definitions */
const mxArray *b_message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m15;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m15, 1, &pArray, "message", true,
    location);
}

const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m16;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m16, 3, pArrays, "message", true,
    location);
}

void error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

/* End of code generation (optAPSR_mexutil.c) */
