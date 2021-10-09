#include "head.c"
int generate_prime(int n)
{
  int cnt=1,i=2,flag,j;
  while(cnt<=n)
  {
     flag = 0;
		  for(j=2; j < i; j++)
		  {
			   if(i%j==0)
			   {
			    flag=1;
			    break;
			   }
		  }
		  if(flag==0)
		  {
			   printf("%d\t",i);
			   cnt++;
		  }
		  i++;
	 }
	 return 1;
}

