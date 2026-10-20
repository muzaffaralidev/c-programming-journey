// Area of circle
#include <stdio.h>

int main(void) {
    float area;
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("Area of circle = %.2f\n", area);

    return 0;
}