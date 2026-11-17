#include <stdio.h>
#include <math.h>

int solveQuadratic(double a, double b, double c, double *r1, double *r2)
{
    double d = b*b - 4*a*c;

    if (d < 0)
        return 0;

    else if (d == 0)
    {
        *r1 = -b / (2*a);
        return 1;
    }

    else
    {
        *r1 = (-b + sqrt(d)) / (2*a);
        *r2 = (-b - sqrt(d)) / (2*a);
        return 2;
    }
}

int main()
{
    double a, b, c, r1, r2;
    int n;

    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0)
        printf("Not a quadratic equation.");

    else
    {
        n = solveQuadratic(a, b, c, &r1, &r2);

        if (n == 0)
            printf("No real roots.");
        else if (n == 1)
            printf("One root: %.2lf", r1);
        else
            printf("Two roots: %.2lf and %.2lf", r1, r2);
    }

    return 0;
}
