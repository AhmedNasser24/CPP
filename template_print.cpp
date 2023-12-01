// -------------------------- Optimizations -----------------------------

#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3") // GCC
#undef _GLIBCXX_DEBUG       // disable run-time bound checking, etc
#pragma GCC optimize("Ofast,inline")        // Ofast = O3,fast-math,allow-store-data-races,no-protect-parens
#pragma GCC target("bmi,bmi2,lzcnt,popcnt")     // bit manipulation
#pragma GCC target("movbe")     // byte swap
#pragma GCC target("aes,pclmul,rdrnd")      // encryption
#pragma GCC target("avx,avx2,f16c,fma,sse3,ssse3,sse4.1,sse4.2")        // SIMD