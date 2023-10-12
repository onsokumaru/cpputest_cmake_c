# CppUTest
include(FetchContent)
FetchContent_Declare(
    CppUTest
    GIT_REPOSITORY https://github.com/cpputest/cpputest.git
    GIT_TAG        v4.0 # or use release tag, eg. v4.0
    # GIT_TAG        master # or use release tag, eg. v4.0
)
# Set this to ON if you want to have the CppUTests in your project as well.
set(TESTS OFF CACHE BOOL "Switch off CppUTest Test build")
FetchContent_MakeAvailable(CppUTest)

set(CPPUTEST_HOME ${CMAKE_CURRENT_SOURCE_DIR}/../build/_deps/cpputest-src/cpputest_build)

find_package(CppUTest REQUIRED)

add_executable(mult_test test_mult.cc)

target_include_directories(mult_test PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
    ${CMAKE_CURRENT_SOURCE_DIR}/../src
    ${CMAKE_CURRENT_SOURCE_DIR}/../build/_deps/cpputest-src/include
    ${CMAKE_CURRENT_SOURCE_DIR}/../build/_deps/cpputest-src/cpputest_build/lib
)

target_link_libraries(mult_test PRIVATE --static
#    CppUTest::CppUTest
#    CppUTest::CppUTestExt)
    ${CPPUTEST_HOME}/lib/libCppUTest.a
    ${CPPUTEST_HOME}/lib/libCppUTestExt.a
)

add_test(NAME mult_test COMMAND mult_test)
set_target_properties(mult_test PROPERTIES WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
