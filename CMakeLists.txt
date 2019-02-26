cmake_minimum_required (VERSION 3.1.0)

if (NOT DEFINED CMAKE_BUILD_TYPE)
  set (CMAKE_BUILD_TYPE Release CACHE STRING "Build type")
endif ()


project(specfunc)
add_executable(t_specfunc t_specfunc.cpp)
install (TARGETS t_specfunc DESTINATION bin)

enable_testing()

add_test(NAME specfunc COMMAND t_specfunc)
