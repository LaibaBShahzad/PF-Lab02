#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortThree(int *a, int *b, int *c) {
    if (*a > *b) 
    swap(a, b);

    if (*b > *c) 
    swap(b, c);

    if (*a > *b) 
    swap(a, b);
}

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Before: %d %d %d\n", num1, num2, num3);

    sortThree(&num1, &num2, &num3);
    printf("After:  %d %d %d\n", num1, num2, num3);

    return 0;
}