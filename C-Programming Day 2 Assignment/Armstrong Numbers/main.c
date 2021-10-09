#include <stdio.h>
#include <stdlib.h>
#include "head.c"
int main()
{
    int num,tnum,sum;
    printf("Enter the Number\n");
    scanf("%d",&num);
    tnum=num;
    sum=armstrong_num(num);
    if(tnum==sum)
        printf("%d is an Armstrong Number",tnum);
    else
        printf("%d is  not an Armstrong Number",tnum);
    return 0;
}
