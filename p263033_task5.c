#include <stdio.h>

int main() {
    
    float celcius = 37.5;
    float faranheit = (celcius*9.0/5.0)+32.0;
    float kelvin = celcius+273.15;

    printf("====TEMPERATURE CONVERSION====");
    printf("\n\nTemperature in celcius is: %f", celcius);
    printf("\nTemperature in faranheit is: %f", faranheit);
    printf("\nTemperature in kevin is: %f", kelvin);

    return 0;
}
