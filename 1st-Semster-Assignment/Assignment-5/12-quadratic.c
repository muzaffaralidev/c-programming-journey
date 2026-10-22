
// Fahrenheit to Celsius Conversion:

#include <stdio.h>

int main(void) {
    float fahrenheit,celsius;

    printf("Enter Fahrenheit: ");
    scanf("%f", &fahrenheit);
   
    celsius = 5.0 / 9.0 * (fahrenheit - 32);


    printf("celsius  %.02f\n",celsius);
    

    return 0;
}