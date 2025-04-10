cmake_minimum_required(VERSION 3.20)
project(Pokedex)

set(CMAKE_CXX_STANDARD 17)

add_executable(Pokedex
        main.cpp
        Pokemon.cpp
        Pokedex.cpp
)

add_executable(Pokedex_Test
        testing.cpp
        Pokemon.cpp
        Pokedex.cpp
)