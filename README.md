# README
---

## Instructions for Use:


- clone repository

- from root directory run :

        cmake -Bbuild

- cd to /build/\_deps/cpputest-src/cpputest-build/

- then run:

        autoreconf .. -i
        ../configure
        make


- cd to root directory then run :

        cmake --build build
