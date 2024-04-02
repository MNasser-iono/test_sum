#include "src/sum_function.h"
#include "C:/Users/PC/.local/share/gem/ruby/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void setUp(void)

{

}



void tearDown(void)

{

}



void test_sum_function_NeedToImplement(void)

{

    UnityIgnore( (("Need to Implement sum_function")), (UNITY_UINT)(17));

}



void test_sum_positive_numbers(void)

{

    UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((sum(2, 3))), (

   ((void *)0)

   ), (UNITY_UINT)(22), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((10)), (UNITY_INT)((sum(5, 5))), (

   ((void *)0)

   ), (UNITY_UINT)(23), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((15)), (UNITY_INT)((sum(10, 5))), (

   ((void *)0)

   ), (UNITY_UINT)(24), UNITY_DISPLAY_STYLE_INT);

}



void test_sum_negative_numbers(void)

{

    UnityAssertEqualNumber((UNITY_INT)((-1)), (UNITY_INT)((sum(2, -3))), (

   ((void *)0)

   ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((-10)), (UNITY_INT)((sum(-5, -5))), (

   ((void *)0)

   ), (UNITY_UINT)(30), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((-15)), (UNITY_INT)((sum(-10, -5))), (

   ((void *)0)

   ), (UNITY_UINT)(31), UNITY_DISPLAY_STYLE_INT);

}



void test_sum_zero(void)

{

    UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((sum(5, 0))), (

   ((void *)0)

   ), (UNITY_UINT)(36), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((-5)), (UNITY_INT)((sum(0, -5))), (

   ((void *)0)

   ), (UNITY_UINT)(37), UNITY_DISPLAY_STYLE_INT);

    UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((sum(0, 0))), (

   ((void *)0)

   ), (UNITY_UINT)(38), UNITY_DISPLAY_STYLE_INT);

}
