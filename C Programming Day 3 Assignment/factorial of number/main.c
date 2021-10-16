#include <stdio.h>
#include <stdlib.h>
#include "head.c"
int main()
{
    int num,fact;
    printf("Enter the number\n");
    scanf("%d",&num);
    fact=Factorial(num);
    printf("%d",fact);
    return 0;
}
