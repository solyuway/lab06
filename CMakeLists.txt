cmake_minimum_required(VERSION 3.10)
project(print LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Версия библиотеки
set(PRINT_VERSION_MAJOR 0)
set(PRINT_VERSION_MINOR 1)
set(PRINT_VERSION_PATCH 0)
set(PRINT_VERSION_TWEAK 0)
set(PRINT_VERSION ${PRINT_VERSION_MAJOR}.${PRINT_VERSION_MINOR}.${PRINT_VERSION_PATCH}.${PRINT_VERSION_TWEAK})
set(PRINT_VERSION_STRING "v${PRINT_VERSION}")

add_library(print STATIC
    src/print.cpp
)

target_include_directories(print PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

install(TARGETS print DESTINATION lib)
install(FILES src/print.hpp DESTINATION include)

# Подключение CPack
include(CPackConfig.cmake)
