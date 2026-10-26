// Q4. Write a program to input 15 integers into an array and count how many are even and how many are odd.
#include <stdio.h>
int main(void){
     int a,b,nums[15];
     int even_Count = 0;
     int odd_Count = 0;

     for(a=0; a<=14; a++){
        printf("Enter Number %d: ",a+1);
        scanf("%d",&nums[a]);
        
     }

     for(b=0;b<=14;b++){
        if(nums[b] % 2 == 0){
          even_Count++;
        }else{
          odd_Count++;
        }
     }
     printf("there are %d number is even\n",even_Count);
     printf("there are %d number is odd",odd_Count);

    return 0;

}