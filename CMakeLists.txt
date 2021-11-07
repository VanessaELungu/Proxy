cmake_minimum_required(VERSION 3.10)
project(Proxy)

include(CTest)
enable_testing()

include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_executable(a.out ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
