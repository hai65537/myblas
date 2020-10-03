#ifndef MYBLAS_COPY_H
#define MYBLAS_COPY_H

#include <type_traits>

namespace myblas {

/// y = x
/// - x,y: n vector
template <typename T, std::enable_if_t<std::is_floating_point_v<T>, int> = 0>
static inline void copy(const int n, const T *x, T *y) {
  for (int i = 0; i < n; ++i) {
    y[i] = x[i];
  }
}

} // namespace myblas

#endif // MYBLAS_COPY_H
