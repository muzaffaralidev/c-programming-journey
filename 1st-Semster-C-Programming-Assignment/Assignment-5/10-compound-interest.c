// Compound Interest

#include <stdio.h>
#include <math.h>

int main(void) {
    float Compound_Interest;
    float principal,rate,time;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    Compound_Interest = principal * pow(1 +  rate / 100 ,time )  - principal;
    printf("Compound Interest = %.2f\n", Compound_Interest);

    return 0;
}