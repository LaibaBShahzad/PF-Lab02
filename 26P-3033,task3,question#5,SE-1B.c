#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("\nb=");
    scanf("%d",&b);
    printf("\nc=");
    scanf("%d",&c);
    float x1,x2;
    x1= (-b+sqrt(b*b-4*a*c))/(2*a);
    x2= (-b-sqrt(b*b-4*a*c))/(2*a);
    /*Do not put numbers which will result in a negative value inside the square root*/
    printf("The roots of quadratic equation a*x*x-b*x+c=0 are (%f,%f)",x1,x2);
    
    return 0;
}