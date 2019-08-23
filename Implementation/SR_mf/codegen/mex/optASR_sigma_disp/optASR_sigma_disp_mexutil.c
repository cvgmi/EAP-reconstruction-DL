/*
 * optASR_sigma_disp_mexutil.c
 *
 * Code generation for function 'optASR_sigma_disp_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "optASR_sigma_disp_mexutil.h"

/* Function Definitions */
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

const mxArray *message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m14;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m14, 1, &pArray, "message", true,
    location);
}

/* End of code generation (optASR_sigma_disp_mexutil.c) */
