#ifndef MYBLAS_AXPY_H
#define MYBLAS_AXPY_H

#include <type_traits>

namespace myblas {

/// y := \alpha x + y
/// - \alpha: scalar
/// - x,y: n vector
template <typename T, std::enable_if_t<std::is_floating_point_v<T>, int> = 0>
static inline void axpy(const int n, const T alpha, const T *x, T *y) {
  if (alpha == 0) {
    return;
  }
  if (alpha == 1) {
    for (int i = 0; i < n; ++i) {
      y[i] += x[i];
    }
  } else {
    for (int i = 0; i < n; ++i) {
      y[i] += alpha * x[i];
    }
  }
}

} // namespace myblas

#endif // MYBLAS_AXPY_H
