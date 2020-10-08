#include "myblas/level1/copy.h"
#include "myblas.h"

__BEGIN_MYBLAS_C_DECLS

void myblas_scopy(const int n, const float *x, float *y) {
  myblas::copy(n, x, y);
}

void myblas_dcopy(const int n, const double *x, double *y) {
  myblas::copy(n, x, y);
}

__END_MYBLAS_C_DECLS
