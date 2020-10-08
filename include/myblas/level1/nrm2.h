#ifndef MYBLAS_NRM2_H
#define MYBLAS_NRM2_H

#include <cmath>
#include <type_traits>

namespace myblas {

/// euclidean norm
/// - x: n vector
template <typename T, std::enable_if_t<std::is_floating_point_v<T>, int> = 0>
static inline T nrm2(const int n, const T *x) {
  if (n == 1) {
    return std::abs(x[0]);
  }
  T sum = 0;
  for (int i = 0; i < n; ++i) {
    if (x[i] == 0) {
      continue;
    }
    sum += x[i] * x[i];
  }
  return std::sqrt(sum);
}

} // namespace myblas

#endif // MYBLAS_NRM2_H
