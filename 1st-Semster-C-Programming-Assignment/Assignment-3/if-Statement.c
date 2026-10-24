// Programming Fundamentals  
// C Programming Language 
// Assignment No. 3

// if Statement
// 1. Write a C program that takes an integer from the user and uses an if statement to check whether the number is positive. 
// #include <stdio.h>
// int main(void){
//      int num;
//      printf("Enter a Number ");
//      scanf("%d",&num);
//      if(num > 0){
//         printf("Number is Positive");
//      }

//     return 0;
// }



// 2. Write a C program that takes the age of a person and displays "Eligible to vote" if the age is 18 or above. 
// #include <stdio.h> 
// int main(void){ 
//      int age;
//      printf("Enter Your Age: ");
//      scanf("%d",&age);

//      if(age >= 18){
//         printf("Eligible to vote");
//      }

//     return 0;
// }


// 3. Write a C program that takes an integer and uses an if statement to check whether it is divisible by 5. 
// #include <stdio.h>
// int main(void){
//      int num;
//      printf("Enter an integer: ");
//      scanf("%d",&num);

//      if(num % 5 == 0){
//         printf("Yes %d is divisible by 5",num);
//      }
     
//     return 0;
// }


// 4. Write a C program that takes marks obtained by a student and displays "Pass" if the marks are 50 or above. 
#include <stdio.h>
int main(void){
     int marks;
     
     printf("Enter Your Marks: ");
     scanf("%d",&marks);

     if(marks >= 50){
        printf("Pass");
     }

    return 0;
}
