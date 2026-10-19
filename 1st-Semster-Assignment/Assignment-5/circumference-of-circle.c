// Circumference of a circle
#include <stdio.h>

int main(void) {
    float circumference;
    int radius;

    printf("Enter radius: ");
    scanf("%d", &radius);

    circumference = 2 * 3.14 * radius;

    printf("Circumference = %.2f\n", circumference);

    return 0;
}