cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++20")
project(ray_tracing)

set(HEADERS 
    vec3.h 
    color.h
    ray.h
    hittable.h
    sphere.h
)
set(SOURCES 
    main.cpp
    color.cpp
)

add_executable(ray_tracing ${SOURCES})
