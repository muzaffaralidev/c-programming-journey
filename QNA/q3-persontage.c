#include <stdio.h>

// Qno1: Write a program to calculate persontage of exam marks

int main(void){
    float obt_mark,total_mark;
    float persontage;
    printf("Enter Your Marks: ");
    scanf("%f",&obt_mark);
    printf("Enter Total Marks: ");
    scanf("%f",&total_mark);
    persontage = (obt_mark / total_mark) * 100;
    printf("Your persontage is : %f",persontage);

    return 0;
}