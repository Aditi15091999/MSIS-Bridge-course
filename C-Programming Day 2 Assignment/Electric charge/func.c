#include "head.c"

float total_rate(float unit)
{
    float total;
    if(unit<=200)
    {
        total=unit*1;

    }
    else if(unit>200&&unit<=300)
    {
        total=(200*1)+((unit-200)*1.5);

    }
    else
    {
       total=(200*1)+(100*1.5)+((unit-300)*2);
    }
    return total;
}
