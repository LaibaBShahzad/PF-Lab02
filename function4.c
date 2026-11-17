#include<stdio.h>
float tofaranheit(float c);
float tocelcius(float f);
void printTable(float start, float end, float step);
int main()
{
	float start,end,step,faran_input;
	
	while(1)
	{
		printf("Start: ");
		scanf("%f",&start);
		printf("End: ");
		scanf("%f",&end);
		printf("Step: ");
		scanf("%f",&step);
		
		if((start<end&&step>0) || (start>end &&step<0) || (start==end))
		break;
		else
		printf("Invalid ");
	}

//Call the function to print the table
printTable(start,end,step);
printf("\n");

printf("Enter a temperature in Faranheit:");
scanf("%f",&faran_input);

printf("%.1fF=%.2fC\n",faran_input,tocelcius(faran_input));
return 0;
}
void printTable(float start,float end, float step)
{
	printf("Celcius\t\tFaranheit\n");
	if (step>0)
	{
		for(float c=start;c<=end; c=c+step)
		{printf("%7.1f\t\t%10.1f\n",c,tofaranheit(c));
		}
	}
	else if(step<0)
	{
		for(float c=start;c>=end;c=c+step)
		{
			printf("%7.0f\t\t%10.1f\n",c,tofaranheit(c));
		}
	}
	else
	{
		printf("%7.1f\t\t%10.1f\n");
	}
}
float tofaranheit(float c)
{
	return (c*(9.0/5.0))+32.0;
}
float tocelcius(float f)
{
	return (f-32.0)*(5.0/9.0);
}