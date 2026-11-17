#include <stdio.h>
int readunits();
float calculatebill(int units);
int main()
{
	int units;
	float tot_bill;
	
	units=readunits();
	printf("Units consumed: %d\n",units);
	tot_bill= calculatebill(units);
	printf("Total bill: %.2f",tot_bill);
}
int readunits()
{
	int units;
	while(1)
	{
		printf("Enter the units consumed: ");
		scanf("%d",&units);
		
		if(units>=0)
		{
			//valid umits found
			break;
		}
		else if(units<0)
		{
			printf("Units are invalid\n");
		}
	}
	return units;
}
float calculatebill(int units)
{
	float tot_bill=0;
	
	if(units<=100)
	{
		tot_bill=units*10;
	}
	else if(units<=300)
	{
		tot_bill=(100*10)+(units-100)*15;
	}
	else if(units>300)
	{
		tot_bill=(100*10)+(200*15)+(units-300)*20;
	}
	if(tot_bill>3000)
	{
		tot_bill=tot_bill*0.5;
	}
	return tot_bill;
}