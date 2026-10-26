// Q5. Write a program to input 10 integers and a number to search for. Display the index at which the number is found, or a message if it is not present.
#include <stdio.h>
int main(void){
     int a,b,c,nums[10];
  

     for(a=0; a<=9; a++){
        printf("Enter Number %d: ",a+1);
        scanf("%d",&nums[a]);
     }
     
     printf("search Number : ");
     scanf("%d",&c);

     for(b=0;b<=9;b++){
       
       if(c == nums[b]){
        printf("number mil gya\n");
        printf("Index number is %d",b);
       }
     }

    return 0;

}