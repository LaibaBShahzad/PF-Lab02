#include<stdio.h>
int main(){
	int lap_price,cur_savings,mon_savings,tot_savings,numb_months;
	int month = 1;
	printf("Enter the price of laptop");
	scanf("%d",&lap_price);

	printf("Enter current svings of Sara");
	scanf("%d",&cur_savings);

	printf("Enter monthly savings:");
	scanf("%d",&mon_savings);

	while(cur_savings<lap_price)
	{
	numb_months=(lap_price-cur_savings)/mon_savings;
	printf("Sara need to save for %d months:",numb_months);
	printf("Savings in %d month: %d\n",month,cur_savings);
	month++;
	cur_savings=cur_savings+mon_savings;
	}


	return 0;
	}