cmake_minimum_required(VERSION 3.10)
project(print LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Версия
set(PRINT_VERSION_MAJOR 1)
set(PRINT_VERSION_MINOR 0)
set(PRINT_VERSION_PATCH 2)
set(PRINT_VERSION_TWEAK 0)
set(PRINT_VERSION "${PRINT_VERSION_MAJOR}.${PRINT_VERSION_MINOR}.${PRINT_VERSION_PATCH}.${PRINT_VERSION_TWEAK}")
set(PRINT_VERSION_STRING "v${PRINT_VERSION}")

# Для CPack
set(CPACK_DEBIAN_PACKAGE_MAINTAINER "solyuway@example.com")
set(CPACK_PACKAGE_CONTACT "solyuway@example.com")

add_library(print STATIC
    src/print.cpp
)

target_include_directories(print PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

add_executable(solver src/solver.cpp)

install(TARGETS print DESTINATION lib)
install(FILES src/print.hpp DESTINATION include)
install(TARGETS solver DESTINATION bin)

include(CPackConfig.cmake)
