#include<stdio.h>
int main()
{
	int weight;
	printf("Enter weight of water melon");
	scanf("%d",&weight);

	if(weight/2>=0)
		printf("WEight of water melon is valid\n");
	if(weight%2==0)
		printf("Weight of splits is even\n");

	else
		printf("Weight is not even");
	return 0;
	}