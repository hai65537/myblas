#include "level1/dot.h"
#include "myblas.h"

__BEGIN_MYBLAS_C_DECLS

float myblas_sdot(const int n, const float *x, const float *y) {
  return myblas::dot(n, x, y);
}

double myblas_ddot(const int n, const double *x, const double *y) {
  return myblas::dot(n, x, y);
}

__END_MYBLAS_C_DECLS
