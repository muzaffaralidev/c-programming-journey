// Q7. Write a program to input 10 integers
// and sort them in ascending order using Bubble Sort.

#include <stdio.h>

int main(void) {
    int i, j, temp, nums[10];

    
    for (i = 0; i < 10; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &nums[i]);
    }

   
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (nums[j] > nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    
    printf("\nNumbers in Ascending Order:\n");

    for (i = 0; i < 10; i++) {
        printf("%d\n", nums[i]);
    }

    return 0;
}