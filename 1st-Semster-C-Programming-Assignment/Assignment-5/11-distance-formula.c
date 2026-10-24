// Distance Formula

#include <stdio.h>
#include <math.h>

int main(void) {
    int distance;
    int x1,y1,x2,y2;

    printf("Enter x1: ");
    scanf("%d", &x1);
    
    printf("Enter y1: ");
    scanf("%d", &y1);

    printf("Enter x2: ");
    scanf("%d", &x2);

    printf("Enter y2: ");
    scanf("%d", &y2);

    distance =  sqrt(pow(x2 - x1,2) + pow(y2 - y1,2)) ;
    printf("distance = %d\n", distance);

    return 0;
}