// Q5. Write a program to input 10 integers and a number to search for. Display the index at which the number is found, or a message if it is not present.
#include <stdio.h>
int main(void){
     int a,b,searchNumber,nums[10];
     int index = -1;

     for(a=0; a<=9; a++){
        printf("Enter Number %d: ",a+1);
        scanf("%d",&nums[a]);
     }
     
     printf("Search Number : ");
     scanf("%d",&searchNumber);
  
    //  Linear Search
     for(b=0;b<=9;b++){
       
       if(searchNumber == nums[b]){
        index = b;
        printf("Number found at index %d",index);
        break;
       }
  
     }

      if(index == -1){
        printf("Number not found");
       }

    return 0;

}