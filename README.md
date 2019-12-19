# Data Structures ( in c++)

## __Reference book__

1. _[Essential Algorithms (A practical Approach To Computer Algorithms)](https://amzn.to/2PyvuhH)_ By  __Rod Stephens__.

1. _[C++ Primer](https://amzn.to/35DCNtY)_ By  __Stanley B.Lippman,Josee Lajoie, Barbara E. Moo_. 

### __Reference video course :__  [Learning Data Structures and Algorithms](http://shop.oreilly.com/product/0636920039884.do) By __Rod Stephens__.

## __Build Tools__

1. [cmake](https://cmake.org)
1. _[Introduction to CMake by Example](http://derekmolloy.ie/hello-world-introductions-to-cmake/)_ Please Go through the website to understand cmake.

## __Repository Tree Structure:__

root:

    1. numeric_algos
        1.random_no
        2.randomise_array
        3.gcd_lcm
        4.exponent
        5.prime
        6.integration 
    2.

## __How to run programs__

eg. To run random_no

    \random_no:
        \build          -> has executable files
        \include        -> has .h header files
        \src            -> has the src files .cpp files
        CMakeLists.txt  -> has configuration files to link and compile files.

### Steps

1.Delete all files from /build folder.

2.cd into the build folder and follow below commands:


```bash

random_no $ cd build/
build $ cmake ..
-- The C compiler identification is GNU 7.4.0
-- The CXX compiler identification is GNU 7.4.0
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/madrajib/other_folders_F/Projects/algorithms_practice/cpp/numeric_algos/random_no/build
```

## Note: Use cmake only when you add new files in include or src folder or you change the CMakeList file

3.To link and compile code:

```bash
build $ make

Scanning dependencies of target random
[ 33%] Building CXX object CMakeFiles/random.dir/src/lcgs.cpp.o
[ 66%] Building CXX object CMakeFiles/random.dir/src/main_lcgs.cpp.o
[100%] Linking CXX executable random
[100%] Built target random

```

It generated a build target executable file called random in build folder.

4.To run the program:

```bash

build $ ./random

```

## Note: Whenever you make changes to your file. just start from step 3

just type __make__ and execute the executable file!.
