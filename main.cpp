#include <iostream>

#include "A.h"
#include "B.h"

using namespace std;

int main()
{
    A objectA;
    B objectB(objectA);

    objectA.setValue(345);
    objectB.setValueFromObjectA();
    cout<<objectB.getValue()<<endl;
    objectA.setValue(123);
    objectB.setValueFromObjectA();
    cout<<objectB.getValue()<<endl;

    return 0;
}
