#include "head.c"
int multiples(int num)
{
    int lastdigit,i=num,sum=0;
    while(i!=0)
    {
        lastdigit=i%10;
        sum=sum+lastdigit;
        i=i/10;
    }

    return sum;
}
