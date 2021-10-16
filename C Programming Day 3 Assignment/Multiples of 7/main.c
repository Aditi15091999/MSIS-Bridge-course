#include <stdio.h>
#include "head.c"

int main()
{
    int low,high,sum;
    printf("Enter the value for low and high\n");
    scanf("%d%d",&low,&high);
    while(low<=high)
    {
       sum=multiples(low);
       if(sum%7==0)
       {
           printf("%d\t",low);
       }
       low++;
    }

    return 0;
}
