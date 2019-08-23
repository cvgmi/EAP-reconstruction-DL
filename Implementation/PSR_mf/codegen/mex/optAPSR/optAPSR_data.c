/*
 * optAPSR_data.c
 *
 * Code generation for function 'optAPSR_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optAPSR.h"
#include "optAPSR_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
emlrtRSInfo m_emlrtRSI = { 22, "squeeze",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/squeeze.m" };

emlrtRSInfo n_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo x_emlrtRSI = { 68, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo y_emlrtRSI = { 21, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo ab_emlrtRSI = { 54, "eml_xgemm",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m" };

emlrtRSInfo bb_emlrtRSI = { 1, "xgemm",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/+blas/xgemm.p" };

emlrtRSInfo qb_emlrtRSI = { 15, "acos",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elfun/acos.m" };

emlrtRSInfo ic_emlrtRSI = { 1, "xdotu",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/+blas/xdotu.p" };

emlrtRSInfo jc_emlrtRSI = { 1, "xdot",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/+blas/xdot.p" };

emlrtRSInfo kc_emlrtRSI = { 37, "norm",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/norm.m" };

emlrtRSInfo lc_emlrtRSI = { 170, "norm",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/norm.m" };

emlrtRSInfo mc_emlrtRSI = { 19, "eml_xnrm2",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/blas/eml_xnrm2.m" };

emlrtRSInfo nc_emlrtRSI = { 1, "xnrm2",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/+blas/xnrm2.p" };

emlrtRTEInfo d_emlrtRTEI = { 51, 13, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRTEInfo e_emlrtRTEI = { 57, 5, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRTEInfo g_emlrtRTEI = { 99, 13, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRTEInfo h_emlrtRTEI = { 104, 13, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtMCInfo g_emlrtMCI = { 99, 13, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtMCInfo h_emlrtMCI = { 98, 23, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtMCInfo i_emlrtMCI = { 104, 13, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtMCInfo j_emlrtMCI = { 103, 23, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtMCInfo l_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtMCInfo m_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtMCInfo o_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtMCInfo p_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRTEInfo ab_emlrtRTEI = { 21, 5, "squeeze",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elmat/squeeze.m" };

emlrtRSInfo cd_emlrtRSI = { 98, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo dd_emlrtRSI = { 103, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo ed_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRSInfo fd_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRSInfo nd_emlrtRSI = { 99, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo od_emlrtRSI = { 104, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo pd_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRSInfo ud_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

omp_nest_lock_t emlrtNestLockGlobal;

/* End of code generation (optAPSR_data.c) */
