#include "B.h"

void B::setValue(int newValue)
{
    value = newValue;
}

int B::getValue()
{
    return value;
}

void B::setValueFromObjectA()
{
    value = objectA.getValue();
}
