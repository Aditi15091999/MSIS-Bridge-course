#include <assert.h>
#include "operator.h"
#include "operator.c"
void test_simple();
int main()
{
    test_simple();
    return 0;
}
void test_simple(){

    assert(simple(4000,2,10)==800);
    //assert(compound(3000,5,10)==);
}
