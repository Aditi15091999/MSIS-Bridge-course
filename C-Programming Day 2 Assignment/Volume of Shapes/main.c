#include <stdio.h>
#include <stdlib.h>
#include "head.c"
int main()
{
    float volume,side,length,width,height,radius;
    int ch;
    printf("Enter your choice\n 1.CUBE\n 2.CUBOID\n 3.SPHERE\n 4.CYLINDER\n 5.CONE\n 6.EXIT\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Enter the value for side");
            scanf("%f",&side);
            volume=cube(side);
            printf("volume is %.2f",volume);
            break;
        case 2:
            printf("Enter the value for length,width,height");
            scanf("%f%f%f",&length,&width,&height);
            volume=cuboid(length,width,height);
            printf("volume is %.2f",volume);
            break;
        case 3:
            printf("Enter the value for radius");
            scanf("%f",&radius);
            volume=sphere(radius);
            printf("volume is %.2f",volume);
            break;
        case 4:
            printf("Enter the value for radius,height");
            scanf("%f%f",&radius,&height);
            volume=cylinder(radius,height);
            printf("volume is %.2f",volume);
            break;
        case 5:
            printf("Enter the value for radius,height");
            scanf("%f%f",&radius,&height);
            volume=cone(radius,height);
            printf("volume is %.2f",volume);
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice");

    }
    return 0;
}
