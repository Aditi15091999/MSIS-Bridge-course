#include"head.c"

int check_palindrome(int number)
{
    int rem=0,rev=0;
    while(number!=0)
    {
      rem=number%10;
      rev=(rev*10)+rem;
      number= number/10;
    }
    return rev;
}
