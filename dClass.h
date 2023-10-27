//
// Created by Jacob Yeung on 10/26/23.
//

#ifndef PJTEST_DCLASS_H
#define PJTEST_DCLASS_H

#include "bClass.h"

class dClass: public bClass
{
public:
    void print() const override;
    dClass(int a = 0, int b = 0, int c = 0);
    //Postcondition: x = a; y = b; z = c;

private:
    int z;
};


#endif //PJTEST_DCLASS_H
