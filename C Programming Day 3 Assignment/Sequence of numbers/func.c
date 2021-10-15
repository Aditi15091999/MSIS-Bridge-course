#include "head.c"
int sequence_of_num(int num)
{
    int fib1=0,fib2=0,fib3=1,fib4;
    printf("%d\t%d\t%d\t",fib1,fib2,fib3);
    while(num>0)
    {
        fib4=fib1+fib2+fib3;
        printf("%d\t",fib4);
        fib1=fib2;
        fib2=fib3;
        fib3=fib4;
        num--;
    }
    return 1;
}
