#include <stdio.h>
#include <stdlib.h>
#include "head.c"
int main()
{
    int num,decimal;
    printf("Enter a binary number with the combination of 0s and 1s \n");
    scanf("%d",&num);
    decimal=binarytodecimal(num);
    printf("%d",decimal);
    return 0;
}
