#include <stdio.h>
#include <stdlib.h>
#include "head.c"
#include<assert.h>
int main()
{
    int N;
    printf("Enter the Number\n");
    scanf("%d",&N);
    assert(star_gen(N)==1);
    return 0;
}
