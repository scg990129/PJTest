//
// Created by Jacob Yeung on 10/26/23.
//

#ifndef PJTEST_BCLASS_H
#define PJTEST_BCLASS_H


class bClass
{
public:
    virtual void print() const;
    bClass(int a = 0, int b = 0);
    //Postcondition: x = a; y = b;

private:
    int x;
    int y;
};


#endif //PJTEST_BCLASS_H
