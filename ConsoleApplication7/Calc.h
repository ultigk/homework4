#pragma once

#include <iostream>
#include <vector>
#include <istream>
#include <ostream>



class Calculator
{
public:
    //Matrix(const size_t height, const size_t width);
    int Add(const int lhs, const int rhs);
    int Sub(const int lhs, const int rhs);
    int Div(const int lhs, const int rhs);
    int Multiply(const int lhs, const int rhs);
    int Expon(const int lhs, const int rhs);
    int CheckSignsEquivalence(const int lhs, const int rhs);
    int GetGCD(const int lhs, const int rhs);
    int GetLCM(const int lhs, const int rhs);   

};



