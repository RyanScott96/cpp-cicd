cmake_minimum_required(VERSION 3.10.0)
project(test-harness VERSION 0.1.0 LANGUAGES C CXX)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    set(CMAKE_CXX_EXTENSIONS OFF)
    set_property(GLOBAL PROPERTY USE_FOLDERS ON)
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

add_subdirectory(source)
add_subdirectory(app)
add_subdirectory(test)