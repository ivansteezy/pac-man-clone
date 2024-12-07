cmake_minimum_required(VERSION 3.16)
project(pac-man-clone)

set(CMAKE_CXX_STANDARD 20)

if(MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

add_subdirectory(game-framework)
add_subdirectory(pac-man)
add_subdirectory(mods)