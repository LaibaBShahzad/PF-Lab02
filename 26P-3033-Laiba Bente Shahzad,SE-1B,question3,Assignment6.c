#include<stdio.h>
int main()
{
	int x,k,i,n,power=1,fact=1;
	float result,sum=0;

	printf("Enter a number: ");
	scanf("%d",&x);

	printf("Enter the power: ");
	scanf("%d",&n);

	for(k=0;k<=n;k++)
	{
		power=1;
		fact=1;
	for(i=1;i<=k;i++)
	{
	power= power*x;
	fact= fact*i;
	}
	
	result=(float) power/fact;
	sum=sum+result;
	}
	printf("The sum is: %.2f",sum);
	

	return 0;
	}