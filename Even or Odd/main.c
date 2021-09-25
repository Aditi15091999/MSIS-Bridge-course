#include <assert.h>
#include "head.c"
#include <stdio.h>
//#include <stdlib.h>

int main()
{
    int num,c;
    printf("Enter the number\n");
    scanf("%d",&num);
    c=even_or_odd(num);
    if(c==1)
        printf("Even");
    else
        printf("odd");
    //assert(even_or_odd(num)==1||even_or_odd(num)==0);
    return 0;
}
