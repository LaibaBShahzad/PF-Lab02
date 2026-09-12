#include <stdio.h>

int main() {
    int a,b;
    printf("First integer a=");
    scanf("%d",&a);
    printf("Second integer b=");
    scanf("%d",&b);
    float c1 = a/b;
    float c2 = (float) a/b;
    float c3 = (float) (a/b);
    printf("The result of c1 is=%.1f\n\n\t(It shows that dividing two integers will give an integer as a product,but as the data type is a float so the result will be in decimals.)",c1);
    printf("\n\nThe result of c2 is=%.1f\n\n\t(When we divide two integers and apply a foat on it directly the result will be a flaot and then the if the data type is also a float the result will be in floats,and we will get the exact result of the division.)",c2);
    printf("\n\nThe result of c3 is=%.1f\n\n\t(In all of the equations mentioned above, we can see that float is enclosed in brackets, it's basically part of the syntax and does not represent that it's given the priority. So if the integers are enclosed in brackets, it means that priority is given to it and division of these integers will give an integer, however float will be applied to it afterwards and result will be in decimals.)",c3);

    return 0;
}