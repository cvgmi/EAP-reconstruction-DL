/*
 * optASR_sigma_disp_data.c
 *
 * Code generation for function 'optASR_sigma_disp_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "optASR_sigma_disp.h"
#include "optASR_sigma_disp_data.h"

/* Variable Definitions */
const volatile char_T *emlrtBreakCheckR2012bFlagVar;
emlrtRSInfo t_emlrtRSI = { 68, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo u_emlrtRSI = { 21, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo v_emlrtRSI = { 54, "eml_xgemm",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/blas/eml_xgemm.m" };

emlrtRSInfo x_emlrtRSI = { 20, "eml_int_forloop_overflow_check",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"
};

emlrtRSInfo db_emlrtRSI = { 13, "sum",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/sum.m" };

emlrtRSInfo eb_emlrtRSI = { 46, "sumprod",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/datafun/private/sumprod.m" };

emlrtRSInfo hb_emlrtRSI = { 14, "sqrt",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elfun/sqrt.m" };

emlrtRSInfo nb_emlrtRSI = { 15, "acos",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/elfun/acos.m" };

emlrtRSInfo yb_emlrtRSI = { 1, "xdotu",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/+blas/xdotu.p" };

emlrtRSInfo ac_emlrtRSI = { 1, "xdot",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/+blas/xdot.p" };

emlrtRSInfo bc_emlrtRSI = { 37, "norm",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/norm.m" };

emlrtRSInfo cc_emlrtRSI = { 170, "norm",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/matfun/norm.m" };

emlrtRSInfo dc_emlrtRSI = { 19, "eml_xnrm2",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/blas/eml_xnrm2.m" };

emlrtRSInfo ec_emlrtRSI = { 1, "xnrm2",
  "/opt/matlab2014b/toolbox/coder/coder/+coder/+internal/+blas/xnrm2.p" };

emlrtRSInfo ic_emlrtRSI = { 37, "mpower",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/mpower.m" };

emlrtRSInfo jc_emlrtRSI = { 42, "power",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/power.m" };

emlrtRSInfo kc_emlrtRSI = { 56, "power",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/power.m" };

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

emlrtMCInfo l_emlrtMCI = { 51, 13, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtMCInfo m_emlrtMCI = { 50, 23, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtMCInfo o_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtMCInfo p_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRSInfo xc_emlrtRSI = { 98, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo yc_emlrtRSI = { 103, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo ad_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRSInfo bd_emlrtRSI = { 50, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRSInfo jd_emlrtRSI = { 99, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo kd_emlrtRSI = { 104, "eml_mtimes_helper",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m" };

emlrtRSInfo ld_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

emlrtRSInfo qd_emlrtRSI = { 51, "eml_assert_valid_size_arg",
  "/opt/matlab2014b/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m" };

omp_nest_lock_t emlrtNestLockGlobal;

/* End of code generation (optASR_sigma_disp_data.c) */
