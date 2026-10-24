// slope of a line
#include <stdio.h>
#include <math.h>

int main(void) {
    float slope;
    int x1,y1,x2,y2;

    printf("Enter x1: ");
    scanf("%d", &x1);
    
    printf("Enter y1: ");
    scanf("%d", &y1);

    printf("Enter x2: ");
    scanf("%d", &x2);

    printf("Enter y2: ");
    scanf("%d", &y2);

    slope =  (float)(y2 - y1) / (x2 - x1);
    printf("slope of a line = %.2f\n", slope);

    return 0;
}