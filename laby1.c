#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);

	if(year%4==0)
		printf("It is a leap year");
	else if(year%400==0)
		printf("It is a leap year");
	else if(year%100==0)
		printf("It is not a leap year");
	else
		printf("Not a leap year");

	return 0;
	}