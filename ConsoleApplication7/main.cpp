
#include <iostream>
#include <cassert>
#include "Calc.h"
#include <cmath>
#include <utility>

enum function {Add_, Sub_, Div_, Multiply_, Expon_, CheckSignsEquivalence_, GetGCD_, GetLCM_};


/*#define ASSERT_EQUAL(x, y)                                         \
    if ((x) != (y))                                                \
    {                                                              \
        std::cerr << "Assertion failed. File: " << __FILE__        \
            << " Line: " << __LINE__ << " "                        \
            << x << " != " << y << " ("                            \
            << #x << " != " << #y << ")" << std::endl;             \
        fails_count++;                                             \
    }*/

int main()
{
    // function funct_mean = Add;
    Calculator counter;
    int case_number = 0;
    int number1 = 0;
    int number2 = 0;
    std::cout << "Hello, I'm a calculator! Let's calculate:" << std::endl;
    std::cout << " Please, input 1 number of int type(!) " << std::endl;
    std::cin >> number1;
    std::cout << " Please, input 2 number of int type(!) " << std::endl;
    std::cin >> number2;

    
    std::cout << " What do you want to do with these numbers? " << std::endl;
    std::cout << "Input 0 to call Add function" << std::endl;
    std::cout << "Input 1 to call Sub function" << std::endl;
    std::cout << "Input 2 to call Div function" << std::endl;
    std::cout << "Input 3 to call Multiply function" << std::endl;
    std::cout << "Input 4 to call Expon function" << std::endl;
    std::cout << "Input 5 to call CheckSignsEquivalence function" << std::endl;
    std::cout << "Input 6 to call GetGCD function" << std::endl;
    std::cout << "Input 7 to call GetLCM function" << std::endl;
    std::cin >> case_number;

    switch (case_number)
    {
        case Add_:
        {
            std::cout << counter.Add(number1, number2) << std::endl;
            break;
        }

        case Sub_:
        {
            std::cout << counter.Sub(number1, number2) << std::endl;
            break;
        }

        case Div_:
        {
            std::cout << counter.Div(number1, number2) << std::endl;
            break;
        }

        case Multiply_:
        {
            std::cout << counter.Multiply(number1, number2) << std::endl;
            break;
        }

        case Expon_:
        {
            std::cout << counter.Expon(number1, number2) << std::endl;
            break;
        }

        case CheckSignsEquivalence_:
        {
            std::cout << counter.CheckSignsEquivalence(number1, number2) << std::endl;
            break;
        }

        case GetGCD_:
        {
            std::cout << counter.GetGCD(number1, number2) << std::endl;
            break;
        }

        case GetLCM_:
        {
            std::cout << counter.GetLCM(number1, number2) << std::endl;
            break;
        }

        default:
        {
            std::cout << "Please, input a number from 0 to 7" << std::endl;
            break;
        }
    }

    return 0;
}


/*#include <iostream>
#include <cassert>

/*#include <list>

int main()
{

    std::list<int> l;
    l.push_back(1);
    l.push_back(22);
    for (auto it = l.begin(); it != l.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    return 0;
}
*/


/*int Add(const int lhs, const int rhs)
{
    return lhs + rhs;
}

void TestAdd()
{
    int fails_count = 0;
    assert(Add(2, 3) == 5);
    assert(Add(-4, -9) == -13);
    assert(Add(8, 0) == 8);
    std::cerr << "TestAdd: OK" << std::endl;
}

int main()
{
    TestAdd();
    //std::cout << Add(4, 7) << std::endl;
    return 0;
}*/