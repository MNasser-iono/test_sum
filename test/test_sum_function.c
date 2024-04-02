#ifdef TEST

#include "unity.h"

#include "sum_function.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_sum_function_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement sum_function");
}

void test_sum_positive_numbers(void)
{
    TEST_ASSERT_EQUAL_INT(5, sum(2, 3));
    TEST_ASSERT_EQUAL_INT(10, sum(5, 5));
    TEST_ASSERT_EQUAL_INT(15, sum(10, 5));
}

void test_sum_negative_numbers(void)
{
    TEST_ASSERT_EQUAL_INT(-1, sum(2, -3));
    TEST_ASSERT_EQUAL_INT(-10, sum(-5, -5));
    TEST_ASSERT_EQUAL_INT(-15, sum(-10, -5));
}

void test_sum_zero(void)
{
    TEST_ASSERT_EQUAL_INT(5, sum(5, 0));
    TEST_ASSERT_EQUAL_INT(-5, sum(0, -5));
    TEST_ASSERT_EQUAL_INT(0, sum(0, 0));
}


#endif // TEST
