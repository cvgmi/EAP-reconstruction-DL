/*
 * optAPSR_AGD_data.c
 *
 * Code generation for function 'optAPSR_AGD_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR_AGD.h"
#include "optAPSR_AGD_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
emlrtRSInfo n_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo fb_emlrtRSI = { 68, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo gb_emlrtRSI = { 21, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo hb_emlrtRSI = { 54, "eml_xgemm",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m" };

emlrtRSInfo ib_emlrtRSI = { 1, "xgemm",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/+blas/xgemm.p" };

emlrtRSInfo wb_emlrtRSI = { 15, "acos",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elfun/acos.m" };

emlrtRSInfo xb_emlrtRSI = { 61, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo yb_emlrtRSI = { 30, "eml_xdotu",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/blas/eml_xdotu.m" };

emlrtRSInfo ac_emlrtRSI = { 1, "xdotu",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/+blas/xdotu.p" };

emlrtRSInfo bc_emlrtRSI = { 1, "xdot",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/+blas/xdot.p" };

emlrtRSInfo cc_emlrtRSI = { 37, "norm",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/norm.m" };

emlrtRSInfo dc_emlrtRSI = { 170, "norm",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/norm.m" };

emlrtRSInfo ec_emlrtRSI = { 19, "eml_xnrm2",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/blas/eml_xnrm2.m" };

emlrtRSInfo fc_emlrtRSI = { 1, "xnrm2",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/+blas/xnrm2.p" };

emlrtRTEInfo b_emlrtRTEI = { 99, 13, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRTEInfo c_emlrtRTEI = { 104, 13, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRTEInfo e_emlrtRTEI = { 51, 13, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRTEInfo g_emlrtRTEI = { 57, 5, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtMCInfo e_emlrtMCI = { 99, 13, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtMCInfo f_emlrtMCI = { 98, 23, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtMCInfo g_emlrtMCI = { 104, 13, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtMCInfo h_emlrtMCI = { 103, 23, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtMCInfo j_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtMCInfo k_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtMCInfo m_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtMCInfo n_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRSInfo hd_emlrtRSI = { 98, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo id_emlrtRSI = { 103, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo jd_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRSInfo nd_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRSInfo sd_emlrtRSI = { 99, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo td_emlrtRSI = { 104, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo ud_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRSInfo be_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

omp_nest_lock_t emlrtNestLockGlobal;

/* End of code generation (optAPSR_AGD_data.c) */
