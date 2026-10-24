// Kinetic Energy
#include <stdio.h>

int main(void) {
    float ek, m, u;

    printf("Enter mass: ");
    scanf("%f", &m);

    printf("Enter velocity: ");
    scanf("%f", &u);

    ek = (1.0 / 2.0) * m * u * u;

    printf("Kinetic Energy = %.2f J\n", ek);

    return 0;
}