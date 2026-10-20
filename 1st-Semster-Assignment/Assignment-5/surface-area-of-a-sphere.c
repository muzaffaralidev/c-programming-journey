// surface area of a sphere

#include <stdio.h>

int main(void) {
    float surfaceArea;
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);


    surfaceArea = 4 * 3.14 radius * radius;

    printf("surface area of a sphere = %.2f\n", surfaceArea);

    return 0;
}