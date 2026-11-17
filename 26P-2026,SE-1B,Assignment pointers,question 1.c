#include<stdio.h>
int main(){
	int age;
	float cgpa;
	char grade;

	int *pAge;
	float *pcgpa;
	char *pgrade;

	pAge= &age;
	pcgpa= &cgpa;
	pgrade= &grade;

	printf("Enter your age: ");
	scanf("%d",&age);

	printf("Enter your cgpa: ");
	scanf("%f",&cgpa);

	printf("Enter your grade: ");
	scanf(" %c",&grade);

	printf("age = %d",age);
	printf("\tvia pointer = %d",*pAge);

	printf("\t&age = %d",&age);
	printf("\tpAge = %d",pAge);

	printf("\ncgpa = %.2f",cgpa);
	printf("\tvia pointer = %.2f",*pcgpa);

	printf("\t&cgpa = %d",&cgpa);
	printf("\tpcgpa = %d",pcgpa);

	printf("\ngrade = %c",grade);
	printf("\tvia pointer = %c",*pgrade);

	printf("\t&grade = %d",&grade);
	printf("\tpgrade = %d",pgrade);

	return 0;
	}