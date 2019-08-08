//
//  complex.cpp
//  operator
//
//  Created by fengsh on 2019/8/7.
//  Copyright © 2019 fengsh. All rights reserved.
//

#include <iostream>
#include "complex.hpp"
using namespace std;

ostream& operator <<(ostream& output,Complex& c)
{
    output<<"("<<c.real;
    if(c.imag>=0)output<<"+";
    output<<c.imag<<"i)";
    return output;
}

istream& operator >>(istream& input,Complex& c)
{
    cout<<"input real part and imaginary part of complex number:";
    input>>c.real>>c.imag;
    return input;
}

Complex operator +(Complex&c1,Complex&c2)
{
    return Complex(c1.real+c2.real,c1.imag+c2.imag);
}

