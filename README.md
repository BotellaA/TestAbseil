# Instruction to reproduce

mkdir build
cd build
cmake -DCMAKE_PREFIX_PATH=/path/to/abseil ..
make
./absl_test

# Output

$ ./absl_test 
./absl_test: error while loading shared libraries: libabsl_city.so: cannot open shared object file: No such file or directory

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