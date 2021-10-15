#include <stdio.h>
#include <stdlib.h>
#include "head.c"
#include<assert.h>
int main()
{
    int num;
    printf("Enter the number of sequence to be generated\n");
    scanf("%d",&num);
    assert(sequence_of_num(num)==1);
    return 0;
}
