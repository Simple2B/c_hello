cmake_minimum_required(VERSION 3.10)
project(c_hello VERSION 1.0)
# debug mode
set(CMAKE_BUILD_TYPE Debug)

# sources
set(SOURCES
    main.c
)

add_executable(${PROJECT_NAME} ${SOURCES})
