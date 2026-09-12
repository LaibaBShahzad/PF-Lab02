#include<stdio.h>
int main(){
	float tax_rate,salary;

	printf("Enter the tax rate:");
	scanf("%f",&tax_rate);

	printf("Enter salary:");
	scanf("%f",&salary);
 	
	float tax_payable= tax_rate*salary/100;
	float salary_remaining= salary-tax_payable;

	printf("\nTax amount: %f",tax_payable);
	printf("\nNet income:%f",salary_remaining);
return 0;
}
	