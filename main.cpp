#include <iostream>
#include "bClass.cpp"
#include "dClass.cpp"

using namespace std;

int main()
{
    bClass bObject(2, 3);
    dClass dObject(3, 5, 8);

    bObject.print();
    cout<<endl;
    dObject.print();
    cout<<endl;

    return 0 ;
}

