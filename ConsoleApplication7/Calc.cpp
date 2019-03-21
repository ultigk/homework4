#include <iostream>
#include <cassert>
#include "Calc.h"
#include <cmath>
#include <utility>

int Calculator::Add(const int lhs, const int rhs)
{
    return lhs + rhs;
}

int Calculator::Sub(const int lhs, const int rhs)
{
    return lhs - rhs;
}

int Calculator::Div(const int lhs, const int rhs)
{
    return lhs / rhs;
}

int Calculator::Multiply(const int lhs, const int rhs)
{
    return lhs * rhs;
}

int Calculator::Expon(const int lhs, const int rhs)
{
    int temp_lhs = lhs;

    if (rhs < 0)
    {
        return 0;
    }

    if (rhs == 0)
    {
        return 1;
    }

    for (int i = 1; i < rhs; i++)
    {
        temp_lhs *= temp_lhs;
    }
    return temp_lhs;
}

int Calculator::CheckSignsEquivalence(const int lhs, const int rhs)
{
    if ((lhs > 0 && rhs > 0) || (lhs < 0 && rhs < 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Calculator::GetGCD(const int lhs, const int rhs)
{
    //std::cout << "Attention!! Euclid's algorithm is going on" << std::endl;
    int temp_int_rhs = rhs;
    int temp_int_lhs = lhs;
    while (temp_int_lhs != temp_int_rhs)
    {
        if (temp_int_lhs > temp_int_rhs)
        {
            int temp_int = temp_int_lhs;
            temp_int_lhs = temp_int_rhs;
            temp_int_rhs = temp_int;
        }
        temp_int_rhs = temp_int_rhs - temp_int_lhs;
    }
    return temp_int_lhs;
}

int Calculator::GetLCM(const int lhs, const int rhs)
{
    int max = rhs;
    for (int i = max; i > 0; i++) 
    {
        if ((i % lhs == 0) && (i % rhs == 0)) 
        {
            return i;
        }
    }
    /*int temp_nod = this->GetGCD(lhs, rhs);
    return lhs * rhs / temp_nod;*/
}
