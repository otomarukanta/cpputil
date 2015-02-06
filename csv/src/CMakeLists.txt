set(GTEST_ROOT $ENV{HOME}/usr/src/gtest-1.7.0)
include_directories(
    ${GTEST_ROOT}/include
    ../include
    )
add_executable(test test.cpp csv_parser.cpp)
target_link_libraries(test
    ${GTEST_ROOT}/build/libgtest.a
    ${GTEST_ROOT}/build/libgtest_main.a
    )
