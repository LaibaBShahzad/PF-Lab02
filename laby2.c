#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter your sides:");
	scanf("%d%d%d",&a,&b,&c);

	if(a+b>c && b+c>a && a+c>b) 
	{	
		printf("It is a triangle\n");
	
	if(a==b && b==c )
		printf("Equilateral");

	if((a==b && b!=c)||(a==c && c!=b)||(b==c&& c!=a))
		printf("Issoceles triangle");
	
	if(a!=b && b!=c && c!=a)
		printf("Scalene triangle");
	}
	else
		printf("not a triangle");

	return 0;
	}