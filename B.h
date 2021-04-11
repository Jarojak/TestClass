#ifndef B_H
#define B_H

#include "A.h"

class B
{
    int value;

public:
    B(A & otherA)
    {
        value = otherA.getValue();
    }

    void setValue(int newValue);
    int getValue();
};

#endif
