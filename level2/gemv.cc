#include "level2/gemv.h"
#include "myblas.h"

__BEGIN_MYBLAS_C_DECLS

void myblas_sgemv(const int m, const int n, const float alpha, const float *a,
                  const float *x, const float beta, float *y) {
  myblas::gemv(m, n, alpha, a, x, beta, y);
}

void myblas_dgemv(const int m, const int n, const double alpha, const double *a,
                  const double *x, const double beta, double *y) {
  myblas::gemv(m, n, alpha, a, x, beta, y);
}

__END_MYBLAS_C_DECLS
