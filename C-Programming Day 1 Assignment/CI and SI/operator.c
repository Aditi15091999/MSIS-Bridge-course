#include "operator.h"
#include "math.h"

float simple(float principal, float time, float rate){
    return (principal*time*rate)/100;

}
float compound(float principal, float time, float rate){
    return principal*pow((1+(rate/100)),time)-principal;
}
