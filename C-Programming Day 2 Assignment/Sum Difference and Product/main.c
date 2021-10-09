#include <stdio.h>
#include <stdlib.h>
#include "head.c"
int main()
{
    int sum,diff,pro,num1,num2,ch;
    printf("Enter the two numbers");
    scanf("%d%d",&num1,&num2);
    printf("Enter your choice\n 1.ADD\n 2.DIFFERENCE\n 3.PRODUCT\n 4.EXIT\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            sum=int_sum(num1,num2);
            printf("Sum is %d",sum);
            break;
        case 2:
            diff=int_difference(num1,num2);
            printf("Difference is %d",diff);
            break;
        case 3:
            pro=int_product(num1,num2);
            printf("Product is %d",pro);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");

    }
    return 0;
}
