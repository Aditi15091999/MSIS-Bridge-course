#include <stdio.h>
#include "head.c"
#include <assert.h>
#define CONCATENATE(a,b) a##b
int main()
{
    printf("%d", CONCATENATE(23,43));
    return 0;
}
