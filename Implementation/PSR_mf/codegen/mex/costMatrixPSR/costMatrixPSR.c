/*
 * costMatrixPSR.c
 *
 * Code generation for function 'costMatrixPSR'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "costMatrixPSR.h"
#include "costMatrixPSR_emxutil.h"
#include "logmapSRi.h"
#include "squeeze.h"
#include "costMatrixPSR_mexutil.h"
#include "costMatrixPSR_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 12, "costMatrixPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/costMatrixPSR.m"
};

static emlrtRSInfo b_emlrtRSI = { 13, "costMatrixPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/costMatrixPSR.m"
};

static emlrtRSInfo c_emlrtRSI = { 14, "costMatrixPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/costMatrixPSR.m"
};

static emlrtRSInfo d_emlrtRSI = { 15, "costMatrixPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/costMatrixPSR.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 1, 14, "costMatrixPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/costMatrixPSR.m"
};

static emlrtRTEInfo j_emlrtRTEI = { 14, 5, "costMatrixPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/costMatrixPSR.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 13, 5, "costMatrixPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/costMatrixPSR.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 12, 5, "costMatrixPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/costMatrixPSR.m"
};

static emlrtBCInfo emlrtBCI = { -1, -1, 12, 21, "X", "costMatrixPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/costMatrixPSR.m",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 13, 22, "AA", "costMatrixPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/costMatrixPSR.m",
  0 };

static emlrtECInfo emlrtECI = { 2, 15, 9, "costMatrixPSR",
  "/blank0/blank0/DictL_ProductSpace/Discrete/SRProductSpace/mf/costMatrixPSR.m"
};

/* Function Definitions */
void costMatrixPSR(const emlrtStack *sp, const emxArray_real_T *X, const
                   emxArray_real_T *AA, emxArray_real_T *T)
{
  int32_T AA_idx_0;
  int32_T i0;
  int32_T j;
  emxArray_real_T *C;
  emxArray_real_T *r0;
  emxArray_real_T *b_AA;
  emxArray_real_T *b_X;
  emxArray_real_T *x;
  emxArray_real_T *A;
  emxArray_real_T *V;
  emxArray_real_T *TPrime;
  boolean_T TFirst;
  int32_T loop_ub;
  int32_T i1;
  int32_T i2;
  int32_T b_loop_ub;
  int32_T i3;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 45 };

  const mxArray *m0;
  char_T cv0[45];
  int32_T i;
  static const char_T cv1[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *b_y;
  static const int32_T iv1[2] = { 1, 21 };

  char_T cv2[21];
  static const char_T cv3[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  int32_T c_loop_ub;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  real_T alpha1;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  const mxArray *c_y;
  static const int32_T iv2[2] = { 1, 45 };

  const mxArray *d_y;
  static const int32_T iv3[2] = { 1, 21 };

  int32_T b_TPrime[2];
  int32_T b_C[2];
  int32_T c_TPrime;
  int32_T d_TPrime;
  int32_T b_T;
  int32_T c_T;
  jmp_buf * volatile emlrtJBStack;
  emlrtStack st;
  jmp_buf emlrtJBEnviron;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  boolean_T emlrtHadParallelError = false;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  compute the matrix T for the optimization step wrt W */
  /*  Input: */
  /*      x - one square root density field data (d-by-N) */
  /*      A - atoms in dictionary (d-by-N-by-m) */
  /*  Output: */
  /*      T - symmetric matrix (m-by-m) */
  AA_idx_0 = AA->size[2];
  i0 = T->size[0] * T->size[1];
  T->size[0] = AA_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)T, i0, (int32_T)sizeof(real_T),
                    &i_emlrtRTEI);
  AA_idx_0 = AA->size[2];
  i0 = T->size[0] * T->size[1];
  T->size[1] = AA_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)T, i0, (int32_T)sizeof(real_T),
                    &i_emlrtRTEI);
  AA_idx_0 = AA->size[2] * AA->size[2];
  for (i0 = 0; i0 < AA_idx_0; i0++) {
    T->data[i0] = 0.0;
  }

  i0 = AA->size[1];
  AA_idx_0 = i0 - 1;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(C,r0,b_AA,b_X,x,A,V,TPrime,TFirst,loop_ub,i1,i2,b_loop_ub,i3,m0,i,unnamed_idx_0,c_loop_ub,unnamed_idx_1,alpha1,beta1,TRANSB,TRANSA,m_t,n_t,k_t,lda_t,ldb_t,ldc_t,alpha1_t,Aia0_t,Bib0_t,beta1_t,Cic0_t,c_TPrime,d_TPrime,b_T,c_T,emlrtJBEnviron) \
 firstprivate(st,b_st,c_st,d_st,e_st,y,cv0,b_y,cv2,c_y,d_y,b_TPrime,b_C,emlrtHadParallelError)

  {
    if (setjmp(emlrtJBEnviron) == 0) {
      st.prev = sp;
      st.tls = emlrtAllocTLS(sp, omp_get_thread_num());
      st.site = NULL;
      emlrtSetJmpBuf(&st, &emlrtJBEnviron);
      b_st.prev = &st;
      b_st.tls = st.tls;
      c_st.prev = &b_st;
      c_st.tls = b_st.tls;
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
      e_st.prev = &c_st;
      e_st.tls = c_st.tls;
      emxInit_real_T(&st, &C, 2, &i_emlrtRTEI, true);
      emxInit_real_T(&st, &r0, 2, &i_emlrtRTEI, true);
      c_emxInit_real_T(&st, &b_AA, 3, &i_emlrtRTEI, true);
      b_emxInit_real_T(&st, &b_X, 1, &i_emlrtRTEI, true);
      b_emxInit_real_T(&st, &x, 1, &l_emlrtRTEI, true);
      emxInit_real_T(&st, &A, 2, &k_emlrtRTEI, true);
      emxInit_real_T(&st, &V, 2, &j_emlrtRTEI, true);
      emxInit_real_T(&st, &TPrime, 2, &i_emlrtRTEI, true);
      TFirst = true;
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (j = 0; j <= AA_idx_0; j++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(emlrtJBEnviron) == 0) {
        loop_ub = X->size[0];
        i1 = X->size[1];
        i2 = 1 + j;
        i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &emlrtBCI, &st);
        i2 = b_X->size[0];
        b_X->size[0] = loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_X, i2, (int32_T)sizeof
                          (real_T), &i_emlrtRTEI);
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_X->data[i2] = X->data[i2 + X->size[0] * (i1 - 1)];
        }

        b_st.site = &emlrtRSI;
        squeeze(&b_st, b_X, x);
        loop_ub = AA->size[0];
        b_loop_ub = AA->size[2];
        i1 = AA->size[1];
        i2 = 1 + j;
        i1 = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &b_emlrtBCI, &st);
        i2 = b_AA->size[0] * b_AA->size[1] * b_AA->size[2];
        b_AA->size[0] = loop_ub;
        b_AA->size[1] = 1;
        b_AA->size[2] = b_loop_ub;
        emxEnsureCapacity(&st, (emxArray__common *)b_AA, i2, (int32_T)sizeof
                          (real_T), &i_emlrtRTEI);
        for (i2 = 0; i2 < b_loop_ub; i2++) {
          for (i3 = 0; i3 < loop_ub; i3++) {
            b_AA->data[i3 + b_AA->size[0] * b_AA->size[1] * i2] = AA->data[(i3 +
              AA->size[0] * (i1 - 1)) + AA->size[0] * AA->size[1] * i2];
          }
        }

        b_st.site = &b_emlrtRSI;
        b_squeeze(&b_st, b_AA, A);
        b_st.site = &c_emlrtRSI;
        logmapSRi(&b_st, x, A, V);
        if (TFirst) {
          TFirst = false;
          b_st.site = &d_emlrtRSI;
          i1 = A->size[0] * A->size[1];
          A->size[0] = V->size[1];
          A->size[1] = V->size[0];
          emxEnsureCapacity(&b_st, (emxArray__common *)A, i1, (int32_T)sizeof
                            (real_T), &i_emlrtRTEI);
          loop_ub = V->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_loop_ub = V->size[1];
            for (i2 = 0; i2 < b_loop_ub; i2++) {
              A->data[i2 + A->size[0] * i1] = V->data[i1 + V->size[0] * i2];
            }
          }

          c_st.site = &q_emlrtRSI;
          if (!(A->size[1] == V->size[0])) {
            if (((A->size[0] == 1) && (A->size[1] == 1)) || ((V->size[0] == 1) &&
                 (V->size[1] == 1))) {
              emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
              y = NULL;
              m0 = emlrtCreateCharArray(2, iv0);
              for (i = 0; i < 45; i++) {
                cv0[i] = cv1[i];
              }

              emlrtInitCharArrayR2013a(&c_st, 45, m0, cv0);
              emlrtAssign(&y, m0);
              d_st.site = &nb_emlrtRSI;
              e_st.site = &sb_emlrtRSI;
              error(&d_st, b_message(&e_st, y, &c_emlrtMCI), &d_emlrtMCI);
            } else {
              emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
              b_y = NULL;
              m0 = emlrtCreateCharArray(2, iv1);
              for (i = 0; i < 21; i++) {
                cv2[i] = cv3[i];
              }

              emlrtInitCharArrayR2013a(&c_st, 21, m0, cv2);
              emlrtAssign(&b_y, m0);
              d_st.site = &ob_emlrtRSI;
              e_st.site = &tb_emlrtRSI;
              error(&d_st, b_message(&e_st, b_y, &e_emlrtMCI), &f_emlrtMCI);
            }
          }

          if ((A->size[1] == 1) || (V->size[0] == 1)) {
            i1 = TPrime->size[0] * TPrime->size[1];
            TPrime->size[0] = A->size[0];
            TPrime->size[1] = V->size[1];
            emxEnsureCapacity(&b_st, (emxArray__common *)TPrime, i1, (int32_T)
                              sizeof(real_T), &i_emlrtRTEI);
            loop_ub = A->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              b_loop_ub = V->size[1];
              for (i2 = 0; i2 < b_loop_ub; i2++) {
                TPrime->data[i1 + TPrime->size[0] * i2] = 0.0;
                c_loop_ub = A->size[1];
                for (i3 = 0; i3 < c_loop_ub; i3++) {
                  TPrime->data[i1 + TPrime->size[0] * i2] += A->data[i1 +
                    A->size[0] * i3] * V->data[i3 + V->size[0] * i2];
                }
              }
            }
          } else {
            unnamed_idx_0 = (uint32_T)A->size[0];
            unnamed_idx_1 = (uint32_T)V->size[1];
            i1 = r0->size[0] * r0->size[1];
            r0->size[0] = (int32_T)unnamed_idx_0;
            emxEnsureCapacity(&b_st, (emxArray__common *)r0, i1, (int32_T)sizeof
                              (real_T), &i_emlrtRTEI);
            i1 = r0->size[0] * r0->size[1];
            r0->size[1] = (int32_T)unnamed_idx_1;
            emxEnsureCapacity(&b_st, (emxArray__common *)r0, i1, (int32_T)sizeof
                              (real_T), &i_emlrtRTEI);
            loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
            for (i1 = 0; i1 < loop_ub; i1++) {
              r0->data[i1] = 0.0;
            }

            c_st.site = &p_emlrtRSI;
            d_st.site = &r_emlrtRSI;
            i1 = TPrime->size[0] * TPrime->size[1];
            TPrime->size[0] = (int32_T)unnamed_idx_0;
            emxEnsureCapacity(&d_st, (emxArray__common *)TPrime, i1, (int32_T)
                              sizeof(real_T), &i_emlrtRTEI);
            i1 = TPrime->size[0] * TPrime->size[1];
            TPrime->size[1] = (int32_T)unnamed_idx_1;
            emxEnsureCapacity(&d_st, (emxArray__common *)TPrime, i1, (int32_T)
                              sizeof(real_T), &i_emlrtRTEI);
            loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
            for (i1 = 0; i1 < loop_ub; i1++) {
              TPrime->data[i1] = 0.0;
            }

            if ((A->size[0] < 1) || (V->size[1] < 1) || (A->size[1] < 1)) {
            } else {
              alpha1 = 1.0;
              beta1 = 0.0;
              TRANSB = 'N';
              TRANSA = 'N';
              m_t = (ptrdiff_t)(A->size[0]);
              n_t = (ptrdiff_t)(V->size[1]);
              k_t = (ptrdiff_t)(A->size[1]);
              lda_t = (ptrdiff_t)(A->size[0]);
              ldb_t = (ptrdiff_t)(A->size[1]);
              ldc_t = (ptrdiff_t)(A->size[0]);
              alpha1_t = (double *)(&alpha1);
              Aia0_t = (double *)(&A->data[0]);
              Bib0_t = (double *)(&V->data[0]);
              beta1_t = (double *)(&beta1);
              Cic0_t = (double *)(&TPrime->data[0]);
              dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
                    Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
            }
          }
        } else {
          b_st.site = &d_emlrtRSI;
          i1 = A->size[0] * A->size[1];
          A->size[0] = V->size[1];
          A->size[1] = V->size[0];
          emxEnsureCapacity(&b_st, (emxArray__common *)A, i1, (int32_T)sizeof
                            (real_T), &i_emlrtRTEI);
          loop_ub = V->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_loop_ub = V->size[1];
            for (i2 = 0; i2 < b_loop_ub; i2++) {
              A->data[i2 + A->size[0] * i1] = V->data[i1 + V->size[0] * i2];
            }
          }

          c_st.site = &q_emlrtRSI;
          if (!(A->size[1] == V->size[0])) {
            if (((A->size[0] == 1) && (A->size[1] == 1)) || ((V->size[0] == 1) &&
                 (V->size[1] == 1))) {
              emlrtAssertMATLABThread(&c_st, &b_emlrtRTEI);
              c_y = NULL;
              m0 = emlrtCreateCharArray(2, iv2);
              for (i = 0; i < 45; i++) {
                cv0[i] = cv1[i];
              }

              emlrtInitCharArrayR2013a(&c_st, 45, m0, cv0);
              emlrtAssign(&c_y, m0);
              d_st.site = &nb_emlrtRSI;
              e_st.site = &sb_emlrtRSI;
              error(&d_st, b_message(&e_st, c_y, &c_emlrtMCI), &d_emlrtMCI);
            } else {
              emlrtAssertMATLABThread(&c_st, &c_emlrtRTEI);
              d_y = NULL;
              m0 = emlrtCreateCharArray(2, iv3);
              for (i = 0; i < 21; i++) {
                cv2[i] = cv3[i];
              }

              emlrtInitCharArrayR2013a(&c_st, 21, m0, cv2);
              emlrtAssign(&d_y, m0);
              d_st.site = &ob_emlrtRSI;
              e_st.site = &tb_emlrtRSI;
              error(&d_st, b_message(&e_st, d_y, &e_emlrtMCI), &f_emlrtMCI);
            }
          }

          if ((A->size[1] == 1) || (V->size[0] == 1)) {
            i1 = C->size[0] * C->size[1];
            C->size[0] = A->size[0];
            C->size[1] = V->size[1];
            emxEnsureCapacity(&b_st, (emxArray__common *)C, i1, (int32_T)sizeof
                              (real_T), &i_emlrtRTEI);
            loop_ub = A->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              b_loop_ub = V->size[1];
              for (i2 = 0; i2 < b_loop_ub; i2++) {
                C->data[i1 + C->size[0] * i2] = 0.0;
                c_loop_ub = A->size[1];
                for (i3 = 0; i3 < c_loop_ub; i3++) {
                  C->data[i1 + C->size[0] * i2] += A->data[i1 + A->size[0] * i3]
                    * V->data[i3 + V->size[0] * i2];
                }
              }
            }
          } else {
            unnamed_idx_0 = (uint32_T)A->size[0];
            unnamed_idx_1 = (uint32_T)V->size[1];
            i1 = r0->size[0] * r0->size[1];
            r0->size[0] = (int32_T)unnamed_idx_0;
            emxEnsureCapacity(&b_st, (emxArray__common *)r0, i1, (int32_T)sizeof
                              (real_T), &i_emlrtRTEI);
            i1 = r0->size[0] * r0->size[1];
            r0->size[1] = (int32_T)unnamed_idx_1;
            emxEnsureCapacity(&b_st, (emxArray__common *)r0, i1, (int32_T)sizeof
                              (real_T), &i_emlrtRTEI);
            loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
            for (i1 = 0; i1 < loop_ub; i1++) {
              r0->data[i1] = 0.0;
            }

            c_st.site = &p_emlrtRSI;
            d_st.site = &r_emlrtRSI;
            i1 = C->size[0] * C->size[1];
            C->size[0] = (int32_T)unnamed_idx_0;
            emxEnsureCapacity(&d_st, (emxArray__common *)C, i1, (int32_T)sizeof
                              (real_T), &i_emlrtRTEI);
            i1 = C->size[0] * C->size[1];
            C->size[1] = (int32_T)unnamed_idx_1;
            emxEnsureCapacity(&d_st, (emxArray__common *)C, i1, (int32_T)sizeof
                              (real_T), &i_emlrtRTEI);
            loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
            for (i1 = 0; i1 < loop_ub; i1++) {
              C->data[i1] = 0.0;
            }

            if ((A->size[0] < 1) || (V->size[1] < 1) || (A->size[1] < 1)) {
            } else {
              alpha1 = 1.0;
              beta1 = 0.0;
              TRANSB = 'N';
              TRANSA = 'N';
              m_t = (ptrdiff_t)(A->size[0]);
              n_t = (ptrdiff_t)(V->size[1]);
              k_t = (ptrdiff_t)(A->size[1]);
              lda_t = (ptrdiff_t)(A->size[0]);
              ldb_t = (ptrdiff_t)(A->size[1]);
              ldc_t = (ptrdiff_t)(A->size[0]);
              alpha1_t = (double *)(&alpha1);
              Aia0_t = (double *)(&A->data[0]);
              Bib0_t = (double *)(&V->data[0]);
              beta1_t = (double *)(&beta1);
              Cic0_t = (double *)(&C->data[0]);
              dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
                    Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
            }
          }

          for (i1 = 0; i1 < 2; i1++) {
            b_TPrime[i1] = TPrime->size[i1];
          }

          for (i1 = 0; i1 < 2; i1++) {
            b_C[i1] = C->size[i1];
          }

          emlrtSizeEqCheck2DFastR2012b(b_TPrime, b_C, &emlrtECI, &st);
          i1 = TPrime->size[0] * TPrime->size[1];
          emxEnsureCapacity(&st, (emxArray__common *)TPrime, i1, (int32_T)sizeof
                            (real_T), &i_emlrtRTEI);
          c_TPrime = TPrime->size[0];
          d_TPrime = TPrime->size[1];
          loop_ub = c_TPrime * d_TPrime;
          for (i1 = 0; i1 < loop_ub; i1++) {
            TPrime->data[i1] += C->data[i1];
          }
        }

        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, &st);
      } else {
        emlrtHadParallelError = true;
      }
    }

    omp_set_nest_lock(&emlrtNestLockGlobal);
    if (!emlrtHadParallelError) {
      if (setjmp(emlrtJBEnviron) == 0) {
        if (TFirst) {
        } else {
          for (i1 = 0; i1 < 2; i1++) {
            b_C[i1] = T->size[i1];
          }

          for (i1 = 0; i1 < 2; i1++) {
            b_TPrime[i1] = TPrime->size[i1];
          }

          emlrtSizeEqCheck2DFastR2012b(b_C, b_TPrime, &emlrtECI, &st);
          i1 = T->size[0] * T->size[1];
          emxEnsureCapacity(&st, (emxArray__common *)T, i1, (int32_T)sizeof
                            (real_T), &i_emlrtRTEI);
          b_T = T->size[0];
          c_T = T->size[1];
          loop_ub = b_T * c_T;
          for (i1 = 0; i1 < loop_ub; i1++) {
            T->data[i1] += TPrime->data[i1];
          }
        }
      } else {
        emlrtHadParallelError = true;
      }
    }

    omp_unset_nest_lock(&emlrtNestLockGlobal);
    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 8);
      emxFree_real_T(&TPrime);
      emxFree_real_T(&V);
      emxFree_real_T(&A);
      emxFree_real_T(&x);
      emxFree_real_T(&b_X);
      emxFree_real_T(&b_AA);
      emxFree_real_T(&r0);
      emxFree_real_T(&C);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (costMatrixPSR.c) */
