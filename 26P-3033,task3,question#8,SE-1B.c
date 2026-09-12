#include <stdio.h>

int main() {
    float original_value;
    printf("The float value is: ");
    scanf("%f",&original_value);
    
    int converted_value = (int) original_value;
    printf("\nThe float converted into int is: %d",converted_value);
    
    float difference = original_value-converted_value;
    printf("\n\nThe difference between original value and converted value is: %.3f",difference);
    return 0;
}