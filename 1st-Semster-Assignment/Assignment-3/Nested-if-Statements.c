// Nested if Statements 
// 1. Write a C program that asks the user to enter a username and password. Use nested if statements to verify: 
// Username is correct. 
// If the username is correct, check whether the password is correct. 
// Display an appropriate message for each case. 
// #include <string.h>
// #include <stdio.h>

// int main(void){
//     char user_name[40];
//     int user_password;

//     printf("enter a username ");
//     scanf("%s",&user_name);

//     printf("enter a password ");
//     scanf("%d",&user_password);

//     if(strcmp(user_name,"muzaffar") == 0){ /// 0 means both strings are equal
//         if(user_password == 1234567){
//             printf("Welcome Back! %s",user_name);
//         }else{
//             printf("Wrong  Password!");
//         }
//     }else{
//         printf("Wrong Username!");
//     }

//     return 0;
// }



// 2. Write a C program that takes a student's marks and family income. A student is eligible for a scholarship if: 
// Marks are 80 or above, and 
// Family income is less than or equal to Rs. 50,000. 

// #include <stdio.h>
// int main(void){
//     int student_marks;
//     int family_income;

//     printf("Enter Your Marks: ");
//     scanf("%d",&student_marks);
//     printf("Enter Your Family Income: ");
//     scanf("%d",&family_income);

//     if(student_marks >= 80 && family_income <= 50000){
//         printf("Congratulations! You are eligible for a scholarship.");
//     }else{
//         printf("you are not eligible for a scholarship");
//     }

//     return 0;
// }




// 3. Write a C program that takes three numbers and uses nested if statements to find the smallest number.
// #include <stdio.h>
// int main(void){
//     int num1,num2,num3;
    

//     printf("Enter First Number: ");
//     scanf("%d",&num1);
//     printf("Enter Second Number: ");
//     scanf("%d",&num2);
//     printf("Enter third Number: ");
//     scanf("%d",&num3);

//     if(num1 < num2){
//        if(num1 < num3){
//         printf("%d is the smallest number.",num1);
//        }else{
//         printf("%d is the smallest number.",num3);
//        }
//     }else{
//        if(num2 < num3){
//         printf("%d is smallest Number",num2);
//        }else{
//         printf("%d is smallest Number",num3);
//        }
//     }

//     return 0;
// }
