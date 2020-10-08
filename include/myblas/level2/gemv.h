#ifndef MYBLAS_GEMV_H
#define MYBLAS_GEMV_H

#include "myblas/level1/dot.h"
#include "myblas/level1/scal.h"
#include <type_traits>

namespace myblas {

/// y := \alpha Ax + \beta y
/// - A: mn matrix
/// - x: n vector
/// - y: m vector
template <typename T, std::enable_if_t<std::is_floating_point_v<T>, int> = 0>
static inline void gemv(const int m, const int n, const T alpha, const T *a,
                        const T *x, const T beta, T *y) {
  // y := beta*y
  scal(m, beta, y);
  // y := alpha*A*x+y
  if (alpha == 0) {
    return;
  }
  if (alpha == 1) {
    for (int i = 0; i < m; ++i) {
      y[i] += dot(n, &a[i * n], x);
    }
  } else {
    for (int i = 0; i < m; ++i) {
      y[i] += alpha * dot(n, &a[i * n], x);
    }
  }
}

} // namespace myblas

#endif
