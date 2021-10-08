//#include <stdio.h>
//#include <stdlib.h>
#include <assert.h>
#include "head.c"
int main()
{
    int year,ly;
    printf("Enter the year\n");
    scanf("%d",&year);
    ly=leapyear(year);
    if(ly==1)
        printf("LeapYear");
    else
        printf("Not Leap Year");

    return 0;
}
