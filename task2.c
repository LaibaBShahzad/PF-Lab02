#include<stdio.h>
int main()
{
	int balls=1;
	int total_runs=0;
	int boundaries=0;
	int dot_balls=0;
	int runs;
	
	for(balls=1; balls<=6;balls++){
		printf("Ball %d, runs:",balls);
		scanf("%d",&runs);

	//updating total runs
	total_runs=total_runs+runs;

	if(runs==4 || runs==6)
	{	
		boundaries++;
	}
	if(runs==0)
	{	
		dot_balls++;
	} }
	
	
	//printing summary
	printf("\nTotal runs: %d\n",total_runs);
	printf("Boundaries:%d\n",boundaries);
	printf("Dot balls:%d\n",dot_balls);
	
	return 0;
	}