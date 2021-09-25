#include "head.c"
int celsius_to_farenheit(int C){
    int c;
    c=((C*9)/5)+32;
    printf("%d",c);
    return c;
    //return ((C*9)/5)+32;

}
int farenheit_to_celsius(int F){
    int f;
    f=((F-32)*5)/9;
    printf("%d",f);
    return f;
    //return (F-32)*(5/9);

}
