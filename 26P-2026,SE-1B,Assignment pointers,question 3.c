
#include <stdio.h>
void circleInfo(float radius, float *area, float *circumference);

int main()
{
    float radius, area, circumference;

    printf("Enter radius: ");
    scanf("%f", &radius);

    while (radius < 0){
	printf("Radius cannot be negative.\n");
        printf("Enter radius: ");
        scanf("%f", &radius);
    }

    circleInfo(radius, &area, &circumference);

    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);

    return 0;
}

void circleInfo(float radius, float *area, float *circumference)
{
    float pi = 3.14159;

    *area = pi * radius * radius;
    *circumference = 2 * pi * radius;
}

