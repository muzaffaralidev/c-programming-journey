// ohm's law
#include <stdio.h>

int main(void) {
    float voltage, current, resistance;

    printf("Enter current: ");
    scanf("%f", &current);

    printf("Enter resistance: ");
    scanf("%f", &resistance);

    voltage = current * resistance ;

    printf("Voltage = %.2f V\n", voltage);

    return 0;
}