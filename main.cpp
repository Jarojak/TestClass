#include <iostream>

#include "A.h"
#include "B.h"

using namespace std;

int main()
{
    A objectA;
    objectA.setValue(11123);
    B objectB(objectA);
    cout<<objectB.getValue()<<endl;
    objectA.setValue(23);
    cout<<objectB.getValue()<<endl;

    return 0;
}
