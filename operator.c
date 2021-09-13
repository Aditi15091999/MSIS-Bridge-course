#include "operator.h"

int add(int x, int y)
{
    if(x < 0 || y < 0)
        return INVALID;
    return x+y;
}



int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int division(int x, int y)
{
    if(y == 0)
        return INVALID;
    return x/y;
}
