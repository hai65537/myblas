#ifndef MYBLAS_H
#define MYBLAS_H

#ifdef __cplusplus

#undef __BEGIN_MYBLAS_C_DECLS
#define __BEGIN_MYBLAS_C_DECLS extern "C" {

#undef __END_MYBLAS_C_DECLS
#define __END_MYBLAS_C_DECLS }

#else

#undef __BEGIN_MYBLAS_C_DECLS
#define __BEGIN_MYBLAS_C_DECLS

#undef __END_MYBLAS_C_DECLS
#define __END_MYBLAS_C_DECLS

#endif

__BEGIN_MYBLAS_C_DECLS

/* level 1 */

void myblas_saxpy(const int n, const float alpha, const float *x, float *y);
void myblas_daxpy(const int n, const double alpha, const double *x, double *y);

void myblas_scopy(const int n, const float *x, float *y);
void myblas_dcopy(const int n, const double *x, double *y);

float myblas_sdot(const int n, const float *x, const float *y);
double myblas_ddot(const int n, const double *x, const double *y);

float myblas_snrm2(const int n, const float *x);
double myblas_dnrm2(const int n, const double *x);

void myblas_sscal(const int n, const float alpha, float *x);
void myblas_dscal(const int n, const double alpha, double *x);

/* level 2 */

void myblas_sgemv(const int m, const int n, const float alpha, const float *a,
                  const float *x, const float beta, float *y);
void myblas_dgemv(const int m, const int n, const double alpha, const double *a,
                  const double *x, const double beta, double *y);

__END_MYBLAS_C_DECLS

#endif // myblas.h
