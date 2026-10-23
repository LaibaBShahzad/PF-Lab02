#include<stdio.h>
int main()
{
	float weight,height,BMI;
	printf("Enter your weight and height");
	scanf("%f%f",&weight,&height);
	
	BMI= (float) weight/(height*height);

	printf("BMI:%f",BMI);
	
	if(BMI<18.5)
		printf("Under weight");
	else if(BMI>=18.5&& BMI<25)
		printf("Normal");
	else if(BMI>=25 && BMI<30)
		printf("Overweight");
	else if(BMI>=30)
		printf("Obese");

	return 0;
	}