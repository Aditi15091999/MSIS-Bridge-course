#include <stdio.h>
#include <ctype.h>
#include "head.c"
int main()
{
    char str[50];
    printf("Enter the String\n");
    gets(str);
    toupperr(str);
    printf("%s",str);
    return 0;
}
