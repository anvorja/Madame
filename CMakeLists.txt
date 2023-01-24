cmake_minimum_required(VERSION 3.0.0)
project(madame_ VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(madame_ main.cpp madame.cpp madame.h monsieur.h monsieur.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
