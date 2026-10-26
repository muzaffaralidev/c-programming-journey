// Q3.  Write a program to input 10 integers and find the largest and smallest elements in the array

#include <stdio.h>
int main(void){
     int a,b,nums[10];
     int largest,smallest;
     
     for(a=0; a<=9; a++){
        printf("Enter Number %d: ",a+1);
        scanf("%d",&nums[a]);
     }

      largest = nums[0];
      smallest = nums[0];

     for(b=0; b<=9; b++){
    
        if(nums[b] > largest){
            largest = nums[b];
        }

        if(nums[b] < smallest){
            smallest = nums[b];
        }
     }
       

     printf("\nLargest number is %d", largest);
     printf("\nsmallest number is %d", smallest);

    

    return 0;

}