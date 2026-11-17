#include<stdio.h>
int isprime(int n);
int isperfect(int n);
int reversenumber(int n);
int ispalindrome(int n);
int digitsum(int n);
void report(int n);

int main()
{
	int n;
	
	printf("Enter a positive number:");
	scanf("%d",&n);
	
	report(n);
	return 0;
}
int isprime(int n)
{
	if(n<=1){
		return 0;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int isperfect(int n){
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0){
			sum=sum+i;
		}
	}
	return (sum==n)?1:0;
}
int reversenumber(int n){
	int reversed=0;
while(n>0){
reversed=reversed*reversed*10+(n%10);
n=n/10;
}
return reversed;
}
int digitsum(int n){
	int sum=0;
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
void report(int n)
{
	printf("Prime:%s\n",isprime(n)?"yes":"no");
	printf("Perfect:%s\n",isperfect(n)?"yes":"no");
	printf("Reverse:%d\n",reversenumber(n));
	printf("Palindrome:%s\n", ispalindrome(n) ?"yes":"no");
	printf("Sum of digits:%d\n",digitsum(n));
	
	printf("Primes from 1 to %d: ",n);
	for(int i=1; i<=n;i++)
	{
		if(!isprime(i))
		{
			continue;
		}
			printf("%d",i);
	}

	printf("\n");
}