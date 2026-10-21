// Average
#include <stdio.h>

int main(void) {
    float average, num1,num2,num3;

    printf("Enter first Number: ");
    scanf("%f", &num1);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    printf("Enter third Number: ");
    scanf("%f", &num3);

    average = (num1 + num2 + num3) / 3  ;

    printf("average = %.2f \n", average);
   
    return 0;
    
}