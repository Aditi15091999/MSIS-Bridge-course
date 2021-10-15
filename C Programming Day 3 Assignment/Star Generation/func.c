#include "head.c"
int star_gen(int num)
{
    int x=0,i=num;
    while(i>0)
    {
        while(x<(num-i))
        {
             printf("\t");
             x++;
        }
        while(x<num)
        {
            printf("*\t");
            x++;
        }
        i--;
        x=0;
        printf("\n");
    }
    return 1;
}
