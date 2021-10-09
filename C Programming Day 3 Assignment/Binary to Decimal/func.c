#include "head.c"
int binarytodecimal(int num)
{
    int rem,decimal_num=0,base=1;
    while(num>0)
    {
        rem=num%10;
        decimal_num=decimal_num+rem*base;
        num=num/10;
        base=base*2;
    }
    return decimal_num;
}
