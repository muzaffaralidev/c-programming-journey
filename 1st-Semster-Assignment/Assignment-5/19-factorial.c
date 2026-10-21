// Factorial
#include <stdio.h>

int main(void) {
    int factorial = 1, num, i;

    printf("Enter one Number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num > 12) {
        printf("Number is too large for int factorial.\n");
    } else {
        for (i = 1; i <= num; i++) {
            factorial = factorial * i;
        }

        printf("Factorial of %d = %d\n", num, factorial);
    }

    return 0;
}