#include <stdio.h>
#include <assert.h>
#include "head.c"
int main()
{
    int call,number;
    printf("Enter the number\n");
    scanf("%d",&number);

   call=sumofdigits(number);
   printf("%d",call);
    return 0;
}
