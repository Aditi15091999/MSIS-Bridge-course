#include <stdio.h>
#include <stdlib.h>
#include "head.c"
int main()
{
    int num,digit,count,temp;
    printf("Enter the number\n");
    scanf("%d",&num);
    temp=num;
    printf("Enter the digit\n");
    scanf("%d",&digit);
    count=count_occurences(num,digit);
    printf("The count of occurrences of %d in %d is %d ",digit,temp,count);
    return 0;
}
