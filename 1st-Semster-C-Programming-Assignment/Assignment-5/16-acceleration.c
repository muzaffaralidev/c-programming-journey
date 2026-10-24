// acceleration
#include <stdio.h>

int main(void) {
    float force, mass, acceleration;

    printf("Enter mass: ");
    scanf("%f", &mass);

    printf("Enter acceleration: ");
    scanf("%f", &acceleration);

    force = mass * acceleration ;

    printf("force = %.2f N\n", force);

    return 0;
}