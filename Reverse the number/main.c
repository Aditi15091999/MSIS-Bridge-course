#include <stdio.h>
#include <assert.h>
#include "head.c"
int main()
{
    int call,number;
    printf("Enter the number\n");
    scanf("%d",&number);
    call=reverse(number);

    printf("reverse of %d is %d",number,call);
    return 0;
}
