// Simple Interest

#include <stdio.h>
int main(void) {
    float interest;
    float principal,rate,time;

    printf("Enter Principal: ");
    scanf("%f", &principal);

    printf("Enter Annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;

    printf("interest = %.2f\n", interest);

    return 0;
}