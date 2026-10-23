#include<stdio.h>
int main(){

	int code=4321;
	int max_attempts= 3;
	int try, attempts=0;

	while(attempts<max_attempts){
	
	printf("Enter pin:");
	scanf("%d",&try);
	
		if(try==code)
		{
		printf("Access granted\n");
		break;
		}

			else{
			attempts++;

			if(attempts<max_attempts){
				printf("Wrong PIN: %d attempts left\n",max_attempts-attempts);
			}
			else {
				printf("Card blocked. Please contact your bank.\n");
			}
		     }
		 }

	return 0;
	}