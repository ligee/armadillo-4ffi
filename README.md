armadillo-4ffi
==============

Armadillo library (http://arma.sourceforge.net/) wrapper suitable to use with ffi from other languages

Requires armadillo library and CMake 2.8+. On the Mac OS X with brew armadillo could be installed with command:

    brew install --c++11 homebrew/science/armadillo
    
To build lib and test (on a typical unix platform), run:

    cmake .
    make
