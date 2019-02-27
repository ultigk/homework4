
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



int Add(const int lhs, const int rhs)
{
    return lhs + rhs;
}

int Sub(const int lhs, const int rhs)
{
    return lhs - rhs;
}



int main()
{
    int number1 = 0;
    int number2 = 0;
    std::cout << "Hello, I'm a calculator! Let's calculate:" << std::endl;
    std::cout << " Please, input 1 number of int type(!) " << std::endl;
    std::cin >> number1;
    std::cout << " Please, input 2 number of int type(!) " << std::endl;
    std::cin >> number2;

    int case_number = 0;
    std::cout << " What do you want to do with these numbers? " << std::endl;
    std::cout << "Press 1 to call Add function" << std::endl;
    std::cout << "Press 2 to call Sub function" << std::endl;
    std::cout << "Press 3 to call Div function" << std::endl;
    std::cout << "Press 4 to call Multiply function" << std::endl;
    std::cout << "Press 5 to call Expon function" << std::endl;
    std::cout << "Press 6 to call Sign function" << std::endl;
    std::cout << "Press 7 to call NOD function" << std::endl;
    std::cout << "Press 8 to call NOK function" << std::endl;
    std::cin >> case_number;

    switch (case_number)
    {
        case 1:
        {
            std::cout << Add(number1, number2) << std::endl;
            break;
        }

        case 2:
        {
            std::cout << Sub(number1, number2) << std::endl;
            break;
        }

        case 3:
        {
            std::cout << Div(number1, number2) << std::endl;
            break;
        }

        case 4:
        {
            std::cout << Multiply(number1, number2) << std::endl;
            break;
        }

        case 5:
        {
            std::cout << Expon(number1, number2) << std::endl;
            break;
        }

        case 6:
        {
            std::cout << Sign(number1, number2) << std::endl;
            break;
        }

        case 7:
        {
            std::cout << NOD(number1, number2) << std::endl;
            break;
        }

        case 8:
        {
            std::cout << NOK(number1, number2) << std::endl;
            break;
        }

        default:
        {
            std::cout << "Please, input a number from 1 to 8" << std::endl;
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