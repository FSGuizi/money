cmake_minimum_required(VERSION 2.6)
project(basic_test)

#GTEST
ADD_SUBDIRECTORY (googletest-1.6.0)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

#MAIN
include_directories(include)
add_library(dollar_lib src/Dollar.cpp)
add_executable(runDollar src/main.cpp)
target_link_libraries(runDollar dollar_lib)

# TESTS
set(SOUCES_TEST test/main.cpp test/DollarTest.cpp)
add_executable(runUnitTests ${SOUCES_TEST})
# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests gtest gtest_main dollar_lib)
add_test(runUnitTests runUnitTests)
