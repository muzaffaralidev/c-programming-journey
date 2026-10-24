// 7-area-of-triangle.c
#include <stdio.h>

int main(void){
    float area;
    float base,height;

    printf("Enter Base of Triangle ");
    scanf("%f",&base);

    printf("Enter Height of Triangle ");
    scanf("%f",&height);

    area = 1.0 / 2.0 * (base * height);

    printf("area of triangle = %.2f",area);

    return 0;
}