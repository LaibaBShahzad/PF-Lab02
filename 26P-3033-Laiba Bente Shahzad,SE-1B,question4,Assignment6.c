#include<stdio.h>
int main()
{
	 int i,j=1,num,sum;

	for(num=2;j<=4; num++)
	{
	sum=0;
	for(i=1; i<num; i++)
	{
	   if(num%i==0)
		{
		sum=sum+i;
		}
	}
	if(sum==num)
	{
	printf("%d is a perfect number\n",num);
	printf("Sum of proper divisors is: %d\n",sum);

	j=j+1;
	 }
	}

	return 0;
	}