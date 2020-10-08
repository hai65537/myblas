#include "myblas/level1/axpy.h"
#include "myblas.h"

__BEGIN_MYBLAS_C_DECLS

void myblas_saxpy(const int n, const float alpha, const float *x, float *y) {
  myblas::axpy(n, alpha, x, y);
}

void myblas_daxpy(const int n, const double alpha, const double *x, double *y) {
  myblas::axpy(n, alpha, x, y);
}

__END_MYBLAS_C_DECLS
