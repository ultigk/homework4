#include "Calc.h"
#include <iostream>
#include <cassert>

#define ASSERT_EQUAL(x, y)                                         \
    if ((x) != (y))                                                \
    {                                                              \
        std::cerr << "Assertion failed. File: " << __FILE__        \
            << " Line: " << __LINE__ << " "                        \
            << x << " != " << y << " ("                            \
            << #x << " != " << #y << ")" << std::endl;             \
        fails_count++;                                             \
    }

void TestAdd();
void TestSub();
void TestDiv();
void TestMultiply();
void TestExpon();
void TestSign();
void TestGetGCD();
void TestGetLCM();

void TestAdd(Calculator counter)
{
    Calculator test;
    int fails_count = 0;
    ASSERT_EQUAL(test.Add(2, 3), 5);
    ASSERT_EQUAL(test.Add(-4, -9), -13);
    ASSERT_EQUAL(test.Add(8, 0), 8);

    if (fails_count == 0)
    {
        std::cerr << "TestAdd: Ok" << std::endl;
    }
    else
    {
        std::cerr << "TestAdd fails. fails count: " << fails_count << std::endl;
    }
    std::cerr << "---------------" << std::endl;
}

void TestSub()
{
    Calculator test;
    int fails_count = 0;
    ASSERT_EQUAL(test.Sub(2, 3), -1);
    ASSERT_EQUAL(test.Sub(-4, -9), 5);
    ASSERT_EQUAL(test.Sub(8, 0), 8);

    if (fails_count == 0)
    {
        std::cerr << "TestSub: Ok" << std::endl;
    }
    else
    {
        std::cerr << "TestSub fails. fails count: " << fails_count << std::endl;
    }
    std::cerr << "---------------" << std::endl;
}

void TestDiv()
{
    Calculator test;
    int fails_count = 0;
    ASSERT_EQUAL(test.Div(5, 2), 2);
    ASSERT_EQUAL(test.Div(1, 5), 0);
    ASSERT_EQUAL(test.Div(-12, 5), -2);

    if (fails_count == 0)
    {
        std::cerr << "TestDiv: Ok" << std::endl;
    }
    else
    {
        std::cerr << "TestDiv fails. fails count: " << fails_count << std::endl;
    }
    std::cerr << "---------------" << std::endl;
}

void TestMultiply()
{
    Calculator test;
    int fails_count = 0;
    ASSERT_EQUAL(test.Multiply(2, 3), 6);
    ASSERT_EQUAL(test.Multiply(-4, -9), 36);
    ASSERT_EQUAL(test.Multiply(8, 0), 0);
    ASSERT_EQUAL(test.Multiply(8, 1), 8);
    ASSERT_EQUAL(test.Multiply(-24, 2), -48);

    if (fails_count == 0)
    {
        std::cerr << "TestMultiply: Ok" << std::endl;
    }
    else
    {
        std::cerr << "TestMultiply fails. fails count: " << fails_count << std::endl;
    }
    std::cerr << "---------------" << std::endl;
}

void TestExpon()
{
    Calculator test;
    int fails_count = 0;
    ASSERT_EQUAL(test.Expon(2, 3), 8);
    ASSERT_EQUAL(test.Expon(2, -1), 0.5);
    ASSERT_EQUAL(test.Expon(8, 0), 1);

    if (fails_count == 0)
    {
        std::cerr << "TestExpon: Ok" << std::endl;
    }
    else
    {
        std::cerr << "TestExpon fails. fails count: " << fails_count << std::endl;
    }
    std::cerr << "---------------" << std::endl;
}

void TestSign()
{
    Calculator test;
    int fails_count = 0;
    ASSERT_EQUAL(test.CheckSignsEquivalence(50000, 50000), 1);
    ASSERT_EQUAL(test.CheckSignsEquivalence(50000, -50000), 0);

    if (fails_count == 0)
    {
        std::cerr << "TestSign: Ok" << std::endl;
    }
    else
    {
        std::cerr << "TestSign fails. fails count: " << fails_count << std::endl;
    }
    std::cerr << "---------------" << std::endl;
}

void TestGetGCD()
{
    Calculator test;
    int fails_count = 0;
    ASSERT_EQUAL(test.GetGCD(15, 1), 1);
    ASSERT_EQUAL(test.GetGCD(125, 50), 25);
    ASSERT_EQUAL(test.GetGCD(-231, -140), 7);

    if (fails_count == 0)
    {
        std::cerr << "TestGetGCD: Ok" << std::endl;
    }
    else
    {
        std::cerr << "TestGetGCD fails. fails count: " << fails_count << std::endl;
    }
    std::cerr << "---------------" << std::endl;
}

void TestGetLCM()
{
    Calculator test;
    int fails_count = 0;
    ASSERT_EQUAL(test.GetLCM(50000, 50000), 50000);
    ASSERT_EQUAL(test.GetLCM(-145, -45), 1305);
    ASSERT_EQUAL(test.GetLCM(125, 50), 250);

    if (fails_count == 0)
    {
        std::cerr << "TestGetLCM: Ok" << std::endl;
    }
    else
    {
        std::cerr << "TestGetLCM fails. fails count: " << fails_count << std::endl;
    }
    std::cerr << "---------------" << std::endl;
}


/*int TestAllFunctions()
{
    TestAdd();
    TestSub();
    TestDiv();
    TestMultiply();
    TestExpon();
    TestSign();
    TestGetGCD();
    TestGetLCM();
    return 0;
}*/