cmake_minimum_required(VERSION 4.0)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++23")
project(ray_tracing)

set(HEADERS 
    include/color.h
    include/ray.h
    include/vec3.h 
    include/rtweekend.h
    include/hittable.h
    include/hittable_list.h
    include/sphere.h
)
set(SOURCES 
    src/main.cpp
    src/color.cpp
)

add_executable(ray_tracing ${SOURCES})
