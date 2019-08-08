//
//  main.cpp
//  operator
//
//  Created by fengsh on 2019/8/7.
//  Copyright © 2019 fengsh. All rights reserved.
//

#include <iostream>
#include "complex.hpp"
using namespace std;

int main(int argc, const char * argv[])
{
    Complex c1,c2,c3;
    cin>>c1>>c2;
    cout<<"c1 = "<<c1<<endl;
    cout<<"c2 = "<<c2<<endl;
    c3 = c1 + c2;
    cout<<"c3 = "<<c3<<endl;
    return 0;
}
