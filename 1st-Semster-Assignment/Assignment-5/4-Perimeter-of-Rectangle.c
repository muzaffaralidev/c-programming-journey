// Perimeter-of-Rectangle.c

#include <stdio.h>

int main(void) {
    float perimeter;
    float length,width;

    printf("Enter Length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);

    printf("perimeter of Rectangle = %.2f\n", perimeter);

    return 0;
}

