#include"unity.h"
#include "fun.h"
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_factorial(void);
void test_npr(void);
void test_ncr(void);
void test_power(void);
void test_square(void);
void test_cube(void);




void setUp(void)
{
}

void tearDown(void){

}
int main()
{
    UNITY_BEGIN();

    RUN_TEST(test_add);
    RUN_TEST(test_subtract);
    RUN_TEST(test_multiply);
    RUN_TEST(test_divide);
    RUN_TEST(test_factorial);
    RUN_TEST(test_npr);
    RUN_TEST(test_ncr);
    RUN_TEST(test_power);
    RUN_TEST(test_square);
    RUN_TEST(test_cube);

    return UNITY_END();

}

void test_add(void){
    TEST_ASSERT_EQUAL(30,add(10,20));
}

void test_subtract(void){
    TEST_ASSERT_EQUAL(5,subtract(20,15));
}
void test_multiply(void){
    TEST_ASSERT_EQUAL(60,multiply(10,6));
}
void test_divide(void){
    TEST_ASSERT_EQUAL(30,divide(150,5));
}
void test_factorial(void){
    TEST_ASSERT_EQUAL(120,fact(5));
}

void test_npr(void){
    TEST_ASSERT_EQUAL(120,npr(5,5));
}

void test_ncr(void){
    TEST_ASSERT_EQUAL(1,divide(5,5));
}

void test_power(void){
    TEST_ASSERT_EQUAL(81,power(3,4));
}

void test_square(void){
    TEST_ASSERT_EQUAL(25,square(5));
}

void test_cube(void){
    TEST_ASSERT_EQUAL(64,cube(4));
}

