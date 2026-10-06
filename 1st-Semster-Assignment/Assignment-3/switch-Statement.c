// Switch Statement 
// 1. Write a C program that takes two numbers and an operator (+, -, *, /) and performs the selected arithmetic operation using 
// a switch statement. 

// #include <stdio.h>
// int main(void){
//     char operator;
//     int num1,num2;
    
//     printf("Select Operator: (+,-,*,/) ");
//     scanf("%c",&operator);

//     printf("Enter First Number: ");
//     scanf("%d",&num1);
//     printf("Enter Second Number: ");
//     scanf("%d",&num2);
    

//     switch(operator){
//         case '+':
//         printf("%d",num1 + num2);
//         break;

//         case '-':
//         printf("%d",num1 - num2);
//         break;

//         case '*':
//         printf("%d", num1 * num2);
//         break;

//         case '/':
//          if(num2 != 0){
//             printf("%d", num1 / num2);
//             break;
//          }else{
//             printf("Cannot divide by zero.")
//          }

//         default:
//            printf("Error: '%c' is an invalid operator.", operator);
//            break;
//     }
    


//     return 0;
// }




// 2. Write a C program that takes a number from 1 to 7 and displays the corresponding day: 
// 1 → Monday 
// 2 → Tuesday 
// 3 → Wednesday 
// 4 → Thursday 
// 5 → Friday 
// 6 → Saturday 
// 7 → Sunday 
// #include <stdio.h>
// int main(void){
//     int day;
    
   
//     printf("Enter a number (1-7): ");
//     scanf("%d",&day);
    

//     switch(day){
//         case 1:
//         printf("Monday");
//         break;

//         case 2:
//         printf("Tuesday");
//         break;

//         case 3:
//         printf("Wednesday");
//         break;

//         case 4:
//         printf("Thursday");
//         break;

//         case 5:
//         printf("Friday");
//         break;

//         case 6:
//         printf("Saturday");
//         break;

//         case 7:
//         printf("Sunday");
//         break;

//         default:
//            printf("Invalid number. Please enter 1-7", day);
//            break;
//     }
    


//     return 0;
// }



// 3. Write a C program that displays the following menu using a switch statement: 
// 1. Addition 
// 2. Subtraction 
// 3. Multiplication 
// 4. Division 
// 5. Exit 
// Ask the user to select an option and perform the corresponding operation. 
#include <stdio.h>
int main(void){
    int choice;
    int num1,num2;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);

    if(choice >= 1 && choice <= 4){
        printf("Enter First Number: ");
        scanf("%d",&num1);
        printf("Enter Second Number: ");
        scanf("%d",&num2);
    }
    

    switch(choice){
        case 1:
        printf("%d + %d = %d",num1,num2, num1 + num2);
        break;

        case 2:
        printf("%d - %d = %d",num1,num2, num1 - num2);
        break;

        case 3:
        printf("%d * %d = %d",num1,num2, num1 * num2);
        break;

        case 4:
         if(num2 != 0){
            printf("%d / %d = %d",num1,num2, num1 / num2);
            break;
         }else{
            printf("Cannot divide by zero.");
         }
         
        case 5:
        printf("Exit Good Bye!");
        break;

        default:
           printf("Invalid Number");
           break;
    }
    
    return 0;
}





// 4. Write a C program that takes a month number from 1 to 12 and uses a switch statement to display the number of days in 
// that month. Assume February has 28 days.
// #include <stdio.h>
// int main(void){
//     int month_number;

//     printf("Enter Month Number between 1 to 12 : ");
//     scanf("%d",&month_number);


//     switch(month_number){
//         case 1:
//          printf("January has 31 days");
//         break;

//         case 2:
//             printf("February has 28 days");
//             break;
        
//         case 3:
//             printf("March has 31 days");
//             break;
        
//         case 4:
//             printf("April has 30 days");
//             break;
        
//         case 5:
//             printf("May has 31 days");
//             break;
        
//         case 6:
//             printf("June has 30 days");
//             break;
        
//         case 7:
//             printf("July has 31 days");
//             break;
        
//         case 8:
//             printf("August has 31 days");
//             break;
        
//         case 9:
//             printf("September has 30 days");
//             break;
        
//         case 10:
//             printf("October has 31 days");
//             break;
        
//         case 11:
//             printf("November has 30 days");
//             break;
        
//         case 12:
//             printf("December has 31 days");
//             break;
        
//         default:
//            printf("Enter a correct number.");
//            break;
//     }
    


//     return 0;
// }
