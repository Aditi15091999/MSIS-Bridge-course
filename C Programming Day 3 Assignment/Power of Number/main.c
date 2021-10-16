#include <stdio.h>
#include <assert.h>
#include "head.c"
int main()
{
    int base,expo,pow;
    printf("Enter the value for base\n");
    scanf("%d",&base);
    printf("Enter the value for exponent\n");
    scanf("%d",&expo);
    pow=power(base,expo);
    printf("%d",pow);
    return 0;
}
