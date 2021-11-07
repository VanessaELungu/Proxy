cmake_minimum_required(VERSION 3.10)
project(Proxy)

include(CTest)
enable_testing()

file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/Debug)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/Release)

ADD_CUSTOM_TARGET(debug
  COMMAND ${CMAKE_COMMAND} -DCMAKE_BUILD_TYPE=Debug ${CMAKE_SOURCE_DIR}
  COMMAND ${CMAKE_COMMAND} --build ${CMAKE_BINARY_DIR} --target all
  COMMENT "Switch CMAKE_BUILD_TYPE to Debug"
  WORKING_DIRECTORY Debug
  )

ADD_CUSTOM_TARGET(release
  COMMAND ${CMAKE_COMMAND} -DCMAKE_BUILD_TYPE=Release ${CMAKE_SOURCE_DIR}
  COMMAND ${CMAKE_COMMAND} --build ${CMAKE_BINARY_DIR} --target all
  COMMENT "Switch CMAKE_BUILD_TYPE to Release"
  WORKING_DIRECTORY Release
  )

  include_directories(include)
  file(GLOB SOURCES "src/*.cpp")
  
  add_executable(a.out ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
