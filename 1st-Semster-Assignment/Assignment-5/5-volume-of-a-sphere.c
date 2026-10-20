// volume-of-a-sphere.c
#include <stdio.h>

int main(void) {
    float volume;
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);


    volume = (4.0 / 3.0) * 3.14 * radius * radius * radius ;

    printf("volume = %.2f\n", volume);

    return 0;
}