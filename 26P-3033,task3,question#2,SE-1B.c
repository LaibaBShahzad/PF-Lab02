#include<stdio.h>
int main(){
	//swapping values of both numbers
	int num_1, num_2, num_3;
	
	printf("Enter number 1:");
	scanf("%d",&num_1);
	
	printf("Enter number 2:");
	scanf("%d",&num_2);

	num_3=num_1;
	num_1=num_2;
	num_2=num_3;

 	printf("\nAfter swapping number 1: %d",num_1);
	printf("\nAfter swapping number 2:%d",num_2);

	return 0;
}