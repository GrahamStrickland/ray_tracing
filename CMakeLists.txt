cmake_minimum_required(VERSION 3.20)
project(ray_tracing VERSION 1.0 LANGUAGES CXX)

# Build configuration
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_compile_options(-Wall -Wextra -Wpedantic -g)

file(GLOB_RECURSE RAY_TRACING_SOURCES
    "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)
file(GLOB_RECURSE RAY_TRACING_HEADERS
    "${CMAKE_CURRENT_SOURCE_DIR}/include/ray_tracing/*.h"
)

# Create executable
add_executable(ray_tracing ${RAY_TRACING_SOURCES} ${RAY_TRACING_HEADERS})

target_include_directories(ray_tracing PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Installation
set_target_properties(ray_tracing PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

include(GNUInstallDirs)
install(TARGETS ray_tracing
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
