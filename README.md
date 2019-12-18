# Instructions to reproduce

```
mkdir build
cd build
cmake -DCMAKE_PREFIX_PATH=/path/to/abseil ..
make
./absl_test
```

# Outputs

```
$ ./absl_test 
./absl_test: error while loading shared libraries: libabsl_city.so: cannot open shared object file: No such file or directory
```

```
$ ldd absl_test 
        linux-vdso.so.1 (0x00007ffc7f5fc000)
        libabsl_hash.so => PATH_TO_ABSEIL/lib/libabsl_hash.so (0x00007f57ae922000)
        libabsl_raw_hash_set.so => PATH_TO_ABSEIL/lib/libabsl_raw_hash_set.so (0x00007f57ae71f000)
        libabsl_hashtablez_sampler.so => PATH_TO_ABSEIL/lib/libabsl_hashtablez_sampler.so (0x00007f57ae519000)
        libstdc++.so.6 => /usr/lib/x86_64-linux-gnu/libstdc++.so.6 (0x00007f57ae190000)
        libgcc_s.so.1 => /lib/x86_64-linux-gnu/libgcc_s.so.1 (0x00007f57adf78000)
        libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f57adb87000)
        /lib64/ld-linux-x86-64.so.2 (0x00007f57aed32000)
        libabsl_city.so => not found
        libabsl_exponential_biased.so => not found
        libabsl_synchronization.so => not found
        libabsl_stacktrace.so => not found
        libabsl_time.so => not found
        libabsl_raw_logging_internal.so => not found
        libm.so.6 => /lib/x86_64-linux-gnu/libm.so.6 (0x00007f57ad7e9000)
```

```
$ make VERBOSE=1
/usr/bin/cmake -S/home/arnaud/programming/test_abseil -B/home/arnaud/programming/test_abseil/build --check-build-system CMakeFiles/Makefile.cmake 0
/usr/bin/cmake -E cmake_progress_start /home/arnaud/programming/test_abseil/build/CMakeFiles /home/arnaud/programming/test_abseil/build/CMakeFiles/progress.marks
make -f CMakeFiles/Makefile2 all
make[1] : on entre dans le répertoire « /home/arnaud/programming/test_abseil/build »
make -f CMakeFiles/absl_test.dir/build.make CMakeFiles/absl_test.dir/depend
make[2] : on entre dans le répertoire « /home/arnaud/programming/test_abseil/build »
cd /home/arnaud/programming/test_abseil/build && /usr/bin/cmake -E cmake_depends "Unix Makefiles" /home/arnaud/programming/test_abseil /home/arnaud/programming/test_abseil /home/arnaud/programming/test_abseil/build /home/arnaud/programming/test_abseil/build /home/arnaud/programming/test_abseil/build/CMakeFiles/absl_test.dir/DependInfo.cmake --color=
make[2] : on quitte le répertoire « /home/arnaud/programming/test_abseil/build »
make -f CMakeFiles/absl_test.dir/build.make CMakeFiles/absl_test.dir/build
make[2] : on entre dans le répertoire « /home/arnaud/programming/test_abseil/build »
[ 50%] Building CXX object CMakeFiles/absl_test.dir/absl_test.cpp.o
/usr/bin/c++  -D__CLANG_SUPPORT_DYN_ANNOTATION__ -isystem /tmp/abseil-cpp/build/install/include  -std=c++11 -o CMakeFiles/absl_test.dir/absl_test.cpp.o -c /home/arnaud/programming/test_abseil/absl_test.cpp
[100%] Linking CXX executable absl_test
/usr/bin/cmake -E cmake_link_script CMakeFiles/absl_test.dir/link.txt --verbose=1
/usr/bin/c++     CMakeFiles/absl_test.dir/absl_test.cpp.o  -o absl_test  -Wl,-rpath,/tmp/abseil-cpp/build/install/lib /tmp/abseil-cpp/build/install/lib/libabsl_hash.so /tmp/abseil-cpp/build/install/lib/libabsl_bad_variant_access.so /tmp/abseil-cpp/build/install/lib/libabsl_city.so /tmp/abseil-cpp/build/install/lib/libabsl_raw_hash_set.so /tmp/abseil-cpp/build/install/lib/libabsl_bad_optional_access.so /tmp/abseil-cpp/build/install/lib/libabsl_hashtablez_sampler.so /tmp/abseil-cpp/build/install/lib/libabsl_exponential_biased.so /tmp/abseil-cpp/build/install/lib/libabsl_synchronization.so /tmp/abseil-cpp/build/install/lib/libabsl_graphcycles_internal.so /tmp/abseil-cpp/build/install/lib/libabsl_stacktrace.so /tmp/abseil-cpp/build/install/lib/libabsl_symbolize.so /tmp/abseil-cpp/build/install/lib/libabsl_malloc_internal.so /tmp/abseil-cpp/build/install/lib/libabsl_debugging_internal.so /tmp/abseil-cpp/build/install/lib/libabsl_demangle_internal.so /tmp/abseil-cpp/build/install/lib/libabsl_time.so /tmp/abseil-cpp/build/install/lib/libabsl_strings.so /tmp/abseil-cpp/build/install/lib/libabsl_strings_internal.so /tmp/abseil-cpp/build/install/lib/libabsl_int128.so /tmp/abseil-cpp/build/install/lib/libabsl_base.so /tmp/abseil-cpp/build/install/lib/libabsl_dynamic_annotations.so /tmp/abseil-cpp/build/install/lib/libabsl_spinlock_wait.so -lpthread /tmp/abseil-cpp/build/install/lib/libabsl_civil_time.so /tmp/abseil-cpp/build/install/lib/libabsl_time_zone.so /tmp/abseil-cpp/build/install/lib/libabsl_throw_delegate.so /tmp/abseil-cpp/build/install/lib/libabsl_raw_logging_internal.so /tmp/abseil-cpp/build/install/lib/libabsl_log_severity.so 
make[2] : on quitte le répertoire « /home/arnaud/programming/test_abseil/build »
[100%] Built target absl_test
make[1] : on quitte le répertoire « /home/arnaud/programming/test_abseil/build »
/usr/bin/cmake -E cmake_progress_start /home/arnaud/programming/test_abseil/build/CMakeFiles 0
```
