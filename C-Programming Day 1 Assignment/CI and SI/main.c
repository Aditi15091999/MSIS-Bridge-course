#include <assert.h>
#include "operator.h"

void test_simple();
void test_compound();
int main()
{
    test_simple();
    test_compound();
    return 0;
}
void test_simple(){

    assert(simple(4000,2,10)==800);
}
void test_compound(){
    float compound_interest;
    compound_interest=compound(3000,5,10);
    printf("CI is %f",compound_interest);
}

