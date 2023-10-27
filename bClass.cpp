//
// Created by Jacob Yeung on 10/26/23.
//

#include "bClass.h"

#include <iostream>

using namespace std;

bClass::bClass(int a, int b)
{
    x = a;
    y = b;
}

void bClass::print() const
{
    cout << x << " " << y <<endl;
}
