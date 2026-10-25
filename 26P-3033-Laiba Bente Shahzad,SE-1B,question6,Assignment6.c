#include<stdio.h>
int main()
{
	int i,j,n;
	
	printf("Enter the number of rows: ");
	scanf("%d",&n);

	for(i=0 ; i<=n; i++)
	{
	for(j=1; j<=n-i; j++)
		printf(" ");

	for(j=0; j<=i; j++)
		printf("%d ",i);
	
	printf("\n");
	}
	for(i=n-1; i>=0; i--)
	{
	for(j=1; j<=n-i; j++)
	{
	printf(" ");
	}
	for(j=0;j<=i; j++)
	{
	printf("%d ",i);
	}
	printf("\n");
	}

	return 0;
	}