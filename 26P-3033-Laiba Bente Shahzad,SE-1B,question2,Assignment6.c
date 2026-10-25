#include<stdio.h>
int main()
{
	int i,j;
	char st;

	printf("Enter a symbol: ");
	scanf("%c",&st);

	for(i=1;i<=5; i++)
	{

	for(j=1; j<=i; j++)
	  {
		printf("%c",st);
	  }
		printf("\n");
	}

	for(i=1; i<=5; i++)
	{
	for(j=1; j<=6-i;j++)
	{
		printf("%c",st);
	}
		printf("\n");
	}

	return 0;
	}