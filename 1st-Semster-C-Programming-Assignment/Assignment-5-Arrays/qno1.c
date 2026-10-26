// Q1. Write a program to input 10 integers into a one-dimensional array and display all the
// elements

#include <stdio.h>
int main(void){
    int nums[10];
    int a,b;

    for(a = 0; a <=9; a++){
        printf("Enter Number: ");
        scanf("%d",&nums[a]);
    }
    printf("Display\n");
     for(b = 0; b <=9; b++){
         printf("%d \n",nums[b]);
       
    }

    return 0;
}