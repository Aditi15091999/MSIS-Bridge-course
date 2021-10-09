#include <stdio.h>
#include <stdlib.h>
#include "head.c"
int main()
{
    int num,result;
    printf("Enter the value\n");
    scanf("%d",&num);
    result=generate_prime(num);
    return 0;
}
