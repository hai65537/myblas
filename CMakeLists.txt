cmake_minimum_required(VERSION 3.10)
project(
  myblas
  DESCRIPTION "my BLAS-like library"
  LANGUAGES C CXX
)

set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(MYBLAS_OPTIMIZE_FOR_NATIVE "Build with -march=native" OFF)

if(${BUILD_SHARED_LIBS})
  set(MYBLAS_LIB_TYPE SHARED)
else()
  set(MYBLAS_LIB_TYPE STATIC)
endif()

add_library(myblas ${MYBLAS_LIB_TYPE})
target_sources(
  myblas
  PRIVATE
  # level 1
  level1/axpy.cc
  level1/copy.cc
  level1/dot.cc
  level1/nrm2.cc
  level1/scal.cc
  # level 2
  level2/gemv.cc
)
target_include_directories(
  myblas
  PUBLIC "${PROJECT_SOURCE_DIR}/include"
)
target_compile_options(myblas PRIVATE "-Wall" "-Wextra")
if("${CMAKE_BUILD_TYPE}" STREQUAL "Release" AND ${MYBLAS_OPTIMIZE_FOR_NATIVE})
  target_compile_options(myblas PUBLIC "-march=native")
endif()
