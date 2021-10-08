#include <stdio.h>
#include <stdlib.h>
#include "head.c"
int main()
{
    int number,rev,temp;
    printf("Enter the number\n");
    scanf("%d",&number);
    temp=number;
    rev=check_palindrome(number);
    if(rev==temp)
    {
        printf("Palindrome%d",rev);
    }
    else
        printf("Not Palindrome %d",rev);
    return 0;
}
