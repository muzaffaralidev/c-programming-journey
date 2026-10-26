// Q2. Write a program to input 10 numbers into an array and calculate their sum and average

#include <stdio.h>
int main(void){
     int a,sum,nums[10];
     float average;
     sum = 0;

     for(a=0; a<=9; a++){
        printf("Enter Number %d: ",a+1);
        scanf("%d",&nums[a]);
        
        sum = sum + nums[a];
     }
     average = sum / 10.0;
     printf("\nSum : %d",sum);
     printf("\naverage : %f",average);

    return 0;

}