#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#define SQUARE(x) (x * x)
int main()
{
    int num;
    printf("Enter any number to find square: ");
    scanf("%d", &num);
    printf("SQUARE(%d) = %d\n", num, SQUARE(num));
    return 0;

}
