#include "head.c"
int sumofdigits(int number)
{
    int sum=0,lastdigit=0;
    while(number>0)
    {
        lastdigit=number%10;
        sum=sum+lastdigit;
        number=number/10;
    }
    //printf("%d",sum);
    return sum;
}
