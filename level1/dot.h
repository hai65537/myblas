#ifndef MYBLAS_DOT_H
#define MYBLAS_DOT_H

#include <type_traits>

namespace myblas {

/// dot product
/// - x,y: n vector
template <typename T, std::enable_if_t<std::is_floating_point_v<T>, int> = 0>
static inline T dot(const int n, const T *x, const T *y) {
  T sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += x[i] * y[i];
  }
  return sum;
}

} // namespace myblas

#endif // MYBLAS_DOT_H
