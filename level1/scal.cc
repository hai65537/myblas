#include "level1/scal.h"
#include "myblas.h"
#include <type_traits>

__BEGIN_MYBLAS_C_DECLS

void myblas_sscal(const int n, float alpha, float *x) {
  myblas::scal(n, alpha, x);
}

void myblas_dscal(const int n, double alpha, double *x) {
  myblas::scal(n, alpha, x);
}

__END_MYBLAS_C_DECLS
