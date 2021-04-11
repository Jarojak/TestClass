#ifndef B_H
#define B_H

#include "A.h"

class B
{
    int value;
    A objectA;
public:
    B(A & otherA)
    : objectA(otherA)
    {
    }

    void setValue(int newValue);
    int getValue();
    void setValueFromObjectA();
};

#endif
