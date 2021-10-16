#include "head.c"
int power(int base,int expo)
{

    if(expo==0)
        return 1;
    else{
        return (base*power(base,expo-1));
    }

}
