cmake_minimum_required(VERSION 3.5)

project(concurrency-test LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(concurrency-test main.cpp)

install(TARGETS concurrency-test
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

#file(GLOB SRCS "${CMAKE_SOURCE_DIR}/sources/*.cpp")
#add_executable(MyTest ${SRCS})
