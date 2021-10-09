#include "head.c"
int armstrong_num(int num)
{
    int last,dsum=0;

    while(num>0)
    {
        last=num%10;
        dsum=dsum+pow(last,3);
        num=num/10;
    }
    return dsum;
}
