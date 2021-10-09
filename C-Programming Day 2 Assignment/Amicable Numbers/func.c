#include "head.c"
int amicable_num(int num1)
{
    int i=1,sum=0;
    while(i<num1)
    {
       if(num1%i==0)
       {
          sum=sum+i;
       }
       i++;
    }
    return sum;
}
int ami_num(int num2)
{
    int i=1,sum=0;
    while(i<num2)
    {
       if(num2%i==0)
       {
         sum=sum+i;
       }
       i++;

    }
    return sum;
}
