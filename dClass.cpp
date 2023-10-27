//
// Created by Jacob Yeung on 10/26/23.
//

#include "dClass.h"
#include <iostream>
#include "bClass.h"

using namespace std;

void dClass::print() const
{
    bClass::print();

    cout<< " " << z <<endl;
}


dClass::dClass(int a, int b, int c)
        : bClass(a, b)
{
    z = c;
}