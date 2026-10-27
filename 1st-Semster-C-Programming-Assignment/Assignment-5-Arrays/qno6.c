// Q6. Write a program to input 10 integers and display the elements in reverse order without using another array.
#include <stdio.h>

int main(void){
    int a,b,nums[10];


    for(a=0;a<=9;a++){
        printf("Enter Number %d : ",a+1);
        scanf("%d",&nums[a]);
    }


    printf("Reverse Order \n");

    
    for(b=9;b>=0;b--){
        printf("%d\n",nums[b]);
    }




    return 0;
}