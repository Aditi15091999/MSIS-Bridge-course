

#include <stdio.h>
int main()
{
    int N,shift;
    printf("Enter the value of N\n");
    scanf("%d",&N);

    for(shift=0;shift<=N;shift++)
        printf("%d\t",1<<shift);


    return 0;
}
