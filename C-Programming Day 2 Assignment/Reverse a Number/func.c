#include "head.c"
int reverse(int number)
{
    int temp,rev=0,rem;
    while(number!=0)
    {
        rem=number%10;
        rev=(rev*10)+rem;
        number/=10;
    }
    return rev;
}
