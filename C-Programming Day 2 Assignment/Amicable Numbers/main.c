#include <stdio.h>
#include <stdlib.h>
#include "head.c"
int main()
{
    int num1,num2,tsum,dsum;
    printf("Enter the Numbers\n");
    scanf("%d%d",&num1,&num2);
    tsum=amicable_num(num1);
    dsum=ami_num(num2);
    if(tsum==num2&&dsum==num1)
        printf("They are Amicable numbers");
    else
        printf("Not Amicable number");
    return 0;
}
