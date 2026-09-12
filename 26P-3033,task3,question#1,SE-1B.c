#include<stdio.h>
int main(){

	float time, distance,average_speed;
	

	printf("\nEnter the distance: ");
	scanf("%f",&distance);

	printf("\nEnter the number of hours: ");
	scanf("%f",&time);
	
	average_speed = distance/time;
	printf("\nThe average speed of car is:%.1fkm/hr",average_speed);
	
        return 0;
	}
	