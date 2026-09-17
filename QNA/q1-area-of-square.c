#include <stdio.h>

// Qno1: Write a program to calculate area of a squarr (side is given)  side X side

int main(void){ 
    float side;

    printf("Enter Side: ");

    scanf("%f",&side);

    printf("area is : %0.2f",side * side);
    return 0;
}