#include <stdio.h>
#include "unity.h"
#include "my_library.h"

void setUp(void)
{
    // Set up before each test
    printf("%s : called\r\n", __func__);
}

void tearDown(void)
{
    // Clean up after each test
    printf("%s : called\r\n", __func__);
}

void test_function1(void)
{
    TEST_ASSERT_EQUAL_INT32_MESSAGE(3, my_library_add(1, 15), "!Error in my_library_add(1,2)");
    // TEST_ASSERT_EQUAL(3, my_library_add(1,2));
}

void test_function2(void)
{
    TEST_ASSERT_EQUAL_INT32_MESSAGE(-1, my_library_subtract(1, 2), "!Error in my_library_subtract(1,2)");
    // TEST_ASSERT_EQUAL(3, my_library_add(1,2));
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_function1);
    RUN_TEST(test_function2);
    return UNITY_END();
}