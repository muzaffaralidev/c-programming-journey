//Pythagorean Theorem

#include <stdio.h>
#include <math.h>

int main(void) {
    float Hypotenuse;
    float a,b;

    printf("Enter Side a: ");
    scanf("%f", &a);

    
    printf("Enter Side b: ");
    scanf("%f", &b);

    Hypotenuse = sqrt(a * a + b * b);

    printf("Pythagorean Theorem = %.2f\n", Hypotenuse);

    return 0;
}