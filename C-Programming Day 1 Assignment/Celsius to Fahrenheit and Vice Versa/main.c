#include <assert.h>
#include "head.c"
#include <stdio.h>


int main()
{
    assert(celsius_to_farenheit(24)==75);
    assert(farenheit_to_celsius(98)==36);
    return 0;
}
