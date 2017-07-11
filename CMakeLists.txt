cmake_minimum_required(VERSION 2.6)
project(basic_test)

#GTEST
ADD_SUBDIRECTORY (googletest-1.6.0)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

#MAIN
include_directories(include)
add_library(money_lib src/Money.cpp src/Dollar.cpp src/Franc.cpp)
add_executable(runMain src/main.cpp)
target_link_libraries(runMain money_lib)

# TESTS
set(SRCS_TEST test/main.cpp test/MoneyTest.cpp)
add_executable(runUnitTests ${SRCS_TEST} )
# Link test executable against gtest & gtest_main
target_link_libraries(runUnitTests gtest gtest_main money_lib)
add_test(runUnitTests runUnitTests)
