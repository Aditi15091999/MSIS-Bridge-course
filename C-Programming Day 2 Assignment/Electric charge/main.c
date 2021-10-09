#include <stdio.h>
#include <stdlib.h>
#include "head.c"
int main()
{
    float units,total;
    printf("Enter the units consumed\n");
    scanf("%f",&units);
    total=total_rate(units);
    printf("%f",total);
    return 0;
}
