#include<stdio.h>
int main()
{
	int i,j,n;
	char st;

	printf("Enter the number of rows: ");
	scanf("%d",&n);

	printf("Enter a symbol: ");
	scanf(" %c",&st);
	
	for(i=1; i<=n; i++)
	{
	for(j=1; j<=n-i; j++)
	printf(" ");
	
	for(j=1;j<=2*i-1; j++)
	printf("%c",st);

	printf("\n");
	}

	return 0;
	}