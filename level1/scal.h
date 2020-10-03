#ifndef MYBLAS_SCAL_H
#define MYBLAS_SCAL_H

#include <type_traits>

namespace myblas {

/// x = \alpha x
/// - x: n vector
template <typename T, std::enable_if_t<std::is_floating_point_v<T>, int> = 0>
static inline void scal(const int n, T alpha, T *x) {
  if (alpha == 1) {
    return;
  }
  if (alpha == 0) {
    for (int i = 0; i < n; ++i) {
      x[i] = 0;
    }
  } else {
    for (int i = 0; i < n; ++i) {
      x[i] *= alpha;
    }
  }
}

} // namespace myblas

#endif // MYBLAS_SCAL_H
