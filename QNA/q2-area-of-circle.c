#include <stdio.h>

// Qno1: Write a program to calculate area of a circle 

int main(void){
    float radius;

    printf("Enter radius : ");
    scanf("%f",&radius);
    
    printf("area is : %f", 3.14 * radius * radius);

    return 0;
}