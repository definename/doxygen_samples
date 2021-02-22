cmake_minimum_required(VERSION 3.10)

project(doxygen_howto)

set(SRC
    src/main.cpp
    src/do_something.cpp
    )

add_executable(${PROJECT_NAME} ${SRC})
