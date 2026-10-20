// Area of Rectangle
#include <stdio.h>

int main(void) {
    float area;
    float length,width;

    printf("Enter Length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    area = length * width;

    printf("Area of Rectangle = %.2f\n", area);

    return 0;
}