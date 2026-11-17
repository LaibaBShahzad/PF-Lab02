#include <stdio.h>
#include<math.h>
int hypotenuse(double a, double b,double c);
int area(double a,double b,double ar);
int main() {
    double a,b;
    double c;
    double ar;
    
    printf("Enter the values of side a and side b: ");
    scanf("%lf%lf",&a,&b);

    hypotenuse(a,b,c);
    area(a,b,ar);
    return 0;
}
int hypotenuse(double a, double b,double c)
{
    c= sqrt(pow(a,2)+pow(b,2));
    printf("Hypotenuse: %.2lf\n",c);
    printf("Rounded up: %.2lf\n",ceil(c));
    printf("Rounded down: %.2lf\n",floor(c));
}
int area(double a,double b,double ar)
{
	ar= (1.0/2.0)*a*b;
	printf("Area: %.2lf",ar);
}