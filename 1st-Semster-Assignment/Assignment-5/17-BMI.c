// Body Mass Index
#include <stdio.h>

int main(void) {
    float bmi, w, h;

    printf("Enter Weight in kg: ");
    scanf("%f", &w);

    printf("Enter Height : ");
    scanf("%f", &h);

    bmi = w / (h * h) ;

    printf("BMI = %.2f \n", bmi);

    return 0;
}