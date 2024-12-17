cmake_minimum_required(VERSION 3.30)
project(matrixsFUNC C)

set(CMAKE_C_STANDARD 11)

add_library(matrixsFUNC SHARED matrix.c
        test.c
)
