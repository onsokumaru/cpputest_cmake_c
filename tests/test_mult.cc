/* file: test_mult.cc */
#include "CppUTest/TestHarness.h"
#include "CppUTest/CommandLineTestRunner.h"

TEST_GROUP(FirstTestGroup)
{
};

// TEST(FirstTestGroup, FirstTest)
// {
//    FAIL("Fail me!");
// }

TEST(FirstTestGroup, SecondTest)
{
   STRCMP_EQUAL("hello", "hello");
}

// cpputest main function
int main(int ac, char** av)
{
   return CommandLineTestRunner::RunAllTests(ac, av);
}