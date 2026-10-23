#include<stdio.h>
int main()
{
	int choice=0;
	int quantity=0;
	int tot_items=0;
	int bill=0;
	int discount=0;
	int payable=0;
	
	//loop will run until choice is selected
	while(choice!=4)
	{
	printf("\n1. Tea (Rs: 60)\n2. Samosa (Rs: 40)\n3. Sandwich (Rs: 180)\n4. Checkout\n");
	printf("Enter choice: ");
	scanf("%d",&choice);

	if(choice>=1&& choice<=3){
	printf("Quantity: ");
	scanf("%d",&quantity);
	tot_items= tot_items+quantity;
	
	if(choice==1)
		bill= bill+(60*quantity);
	else if(choice==2)
		bill= bill+(40*quantity);
	else if(choice==3)
		bill= bill+(180*quantity);
	}
	else if(choice!=4){
		printf("Invalid choice. Try again.\n");
	 }
	}
	if(bill>1000){
		discount=bill*0.10;
	}
	else {
		discount=0;
	}

	//Final amount
	payable= bill-discount;
	//Summary
	printf("\nTotal itmes: %d\n",tot_items);
	printf("Bill: Rs%d\n",bill);
	printf("Discount: Rs%d\n",discount);
	printf("Payable: Rs%d\n",payable);

	return 0;
	}