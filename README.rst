######
MyBLAS
######

****
概要
****

電気電子計算工学及演習のための， `BLAS`_ をベースにした線型代数ライブラリの実装．C++ での実装で，C/C++ 用のインターフェースを提供する．

.. _`BLAS`: https://www.netlib.org/blas/

******
ビルド
******

.. code-block:: console

    $ mkdir build
    $ cd build
    $ cmake ..
    $ make

ネイティブビルド
================

最適化を有効にするには，CMake にオプションを追加する::

    $ cmake -DCMAKE_BUILD_TYPE=Release -DMYBLAS_OPTIMIZE_FOR_NATIVE=ON ..

********
実装済み
********

いずれも単精度と倍精度の浮動小数点数のみをサポートする．

- Level 1

  - axpy
  - copy
  - dot
  - nrm2
  - scal

- Level 2

  - gemv
