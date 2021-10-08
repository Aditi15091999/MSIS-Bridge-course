int count_occurences(int number,int digit)
{
    int count=0,rem;
    while(number!=0)
    {
        rem=number%10;
        if(rem==digit)
            count++;
        number=number/10;
    }
    return count;
}
