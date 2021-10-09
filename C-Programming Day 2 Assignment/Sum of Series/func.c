#include "head.c"
int sum_of_series(int n)
{
    int sum=0,count,j=1;
    for(count=1;count<=n;count++)
        {
            sum=sum+j;
            j=(j*10)+1;

        }
    printf("%d",sum);
    return 1;
}
