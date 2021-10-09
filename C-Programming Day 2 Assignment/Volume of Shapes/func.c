# include "head.c"
#include <math.h>
float cube(float side)
{
    float vol;
    vol=pow(side,3);
    return vol;
}
float cuboid(float length,float width,float height)
{
    float vol;
    vol=length*width*height;
    return vol;
}
float sphere(float radius)
{
    float vol,pi=3.14159;
    vol=pow(radius,3)*pi*4/3;
    return vol;
}
float cylinder(float radius,float height)
{
    float vol,pi=3.14159;
    vol=pi*height*pow(radius,2);
    return vol;
}
float cone(float radius,float height)
{
    float vol,pi=3.14159;
    vol=pi*pow(radius,2)*(height/3);
    return vol;
}
