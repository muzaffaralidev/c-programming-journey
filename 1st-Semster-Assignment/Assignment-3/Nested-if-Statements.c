// Nested if Statements 
// 1. Write a C program that asks the user to enter a username and password. Use nested if statements to verify: 
// Username is correct. 
// If the username is correct, check whether the password is correct. 
// Display an appropriate message for each case. 
 #include <string.h>

#include <stdio.h>
int main(void){
    char user_name[40];
    int user_password;
    char username[40] = "muzaffar";
    int password = 1234567;

    printf("enter a username ");
    scanf("%s",&user_name);

    printf("enter a password ");
    scanf("%d",&user_password);

    if(strcmp(username,user_name) == 0){
        if(password == user_password){
            printf("Welome Back!");
        }else{
            printf("Wrong Username!");
        }
    }else{
        printf("Wrong Username!");
    }

    return 0;
}



// 2. Write a C program that takes a student's marks and family income. A student is eligible for a scholarship if: 
// Marks are 80 or above, and 
// Family income is less than or equal to Rs. 50,000. 
 
// 3. Write a C program that takes three numbers and uses nested if statements to find the smallest number.