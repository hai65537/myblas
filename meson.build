project('myblas', 'cpp',
  default_options: ['cpp_std=c++17'])

level1 = files(
  'level1/axpy.cc',
  'level1/copy.cc',
  'level1/dot.cc',
  'level1/nrm2.cc',
  'level1/scal.cc',
)
level2 = files(
  'level2/gemv.cc',
)
sources = level1 + level2

inc = include_directories('include')
install_subdir('include', install_dir: '')

library('myblas', sources, include_directories: inc, install: true)
