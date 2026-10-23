#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter x and y:");
	scanf("%d%d",&x,&y);

	if(x>0 && y>0)
		printf("Point lies in the first quadrant");
	else if(x<0 && y>0)
		printf("Point lies in the second quadrant");
	else if(x<0 && y<0)
		printf("Point lies in the third quadrant");
	else if(x>0 && y<0)
		printf("Point lies in the fourth quadrant");
	else if(y!=0 && x==0)
		printf("Pont lies on y axis");
	else if(x!=0 && y==0)
		printf("Point lies on x axis");
	else if(x==0 && y==0)
		printf("Point lies on the origin");

	return 0;
	}