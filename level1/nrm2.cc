#include "myblas/level1/nrm2.h"
#include "myblas.h"

__BEGIN_MYBLAS_C_DECLS

float myblas_snrm2(const int n, const float *x) {
  return myblas::nrm2(n, x);
}

double myblas_dnrm2(const int n, const double *x) {
  return myblas::nrm2(n, x);
}

__END_MYBLAS_C_DECLS
