#include <stdio.h> // pre-proccesor directive / header files
// void main(void){
//     int num ;
    
//     printf("Enter Number: ");
//     scanf("%d",&num);

//     if(num > 0){
//         printf("Positive Number");
//     }
// }

// Write a C program that takes marks from 0 to 100 and displays the grade according to the following criteria: 
// 80–100 → A 
// 70–79 → B 
// 60–69 → C 
// 50–59 → D 
// Below 50 → F
// void main(void){
//     int marks ;
    
//     printf("Enter your Marks: ");
//     scanf("%d",&marks);

//     if(marks >= 80 && marks <= 100 ){
//         printf("Grade A");
//     }else if(marks >= 70 && marks <= 79 ){
//         printf("Grade B");
//     }else if(marks >= 60 && marks <= 69 ){
//         printf("Grade C");
//     }else if(marks >= 50 && marks <= 59 ){
//         printf("Grade D");
//     }else if(marks < 50 ){
//         printf("Fail");
//     }else{
//         printf("Invalid input! Please enter marks between 0 and 100.");
//     }
// }



// Write a C program that takes two numbers and an operator (+, -, *, /) and performs the selected arithmetic operation using 
// a switch statement. 

// void main(void){
//     int num1,num2;
//     char operator;

//     printf("Enter first Number: ");
//     scanf("%d", &num1);

//     printf("Enter Second Number: ");
//     scanf("%d", &num2);
    
//     printf("Select Operator (+,-,*,/): ");
//     scanf(" %c",&operator);
    
//     switch(operator){
//         case '+':
//           printf("%d",num1+num2);
//           break;
//         case '-':
//           printf("%d",num1-num2);
//           break;
//         case '*':
//          printf("%d",num1*num2);
//          break;
//          case '/':
//            if(num2 == 0){
//               printf("zero cannot Divide");
//            }else{
//             printf("%d",num1/num2);
//            }
//            break;
//         default:
//             printf("Invalid operator");
        
//     }

   
// }



// Write a C program to print numbers from 1 to 10. 

// void main(void){
//     int num;
//     for(num = 1;num<=10;num++){
//         printf("%d \n",num);
//     }
// }


// Write a C program to print numbers from 10 to 1.
// void main(void){
//     int num;
//     for(num = 10;num>=1;num--){
//         printf("%d \n",num);
//     }
// }


// Write a C program to print all even numbers from 1 to 50.
// void main(void){
//     int num;
//     for(num=2; num<=50; num+=2){
//         printf("%d \n",num);
//     }
// }


//  Write a C program to print all odd numbers from 1 to 50. 
// void main(void){
//     int num;
//     for(num=1; num<=50; num+=2){
//         printf("%d \n",num);
//     }
// }


// Write a C program to calculate the sum of numbers from 1 to 10. 
// void main(void){
//     int num,sum;
//     sum = 0;
//     for(num=1; num<=10; num++){
//         sum = sum + num;
//     }
//     printf("%d",sum);
// }

// sum of all even form 1 to 20
// void main(void){
//     int num,sum;
//     sum = 0;
//     for(num=2; num<=20; num+=2){
//         sum = sum + num;
//     }
//     printf("%d",sum);
// }

// Write a C program to display the multiplication table of a given number.
// void main(void){
//     int num1,num2;

//     printf("enter number: ");
//     scanf("%d",&num1);

//     for(num2 = 1;num2 <= 10; num2++){
//         printf("%d x %d = %d \n",num1,num2, num1 * num2);
//     }

// }


// Write a C program to calculate the factorial of a given number.
// void main(void){
//     int num1,num2,factorial;
//     factorial = 1;
//     printf("Enter Number : ");
//     scanf("%d",&num2);
//     for(num1=1;num1<=num2;num1++){
//         factorial = factorial * num1;
//     }
//     printf("Factorial = %d",factorial);
// }


// Write a C program to calculate the average of numbers from 1 to 10.
// void main(void){
//     int num1,sum;
//     float average;
//     sum = 0;
//     for(num1=1;num1<=10;num1++){
//          sum = sum + num1;
//     }
//     average = sum / 10.0;
//     printf("average = %.2f",average);
// }


// 10. Write a C program to print the following pattern:
// * 
// *  * 
// *   *   * 
// *   *   *   * 
// *   *   *   *   *

// void main(void){
//     int a,b,i,e;

//     for(a = 1 ; a<=5 ; a++){
//         printf("\n");

//         for(b = 1 ; b <= a; b++){
//             printf("*");
//         }
//     }


//     // reverse
//     for(i = 1 ; i<=5 ; i++){
//         printf("\n");

//         for(e = 5 ; e >= i; e--){
//             printf("*");
//         }
//     }
// }



// int main(void){
//    int num ;
//    num = 1;
//    do{
//       printf("%d\n",num);
//       num++;
//    }while(num <= 10);
//    return 0;
// }

// int main(void){
//     int num ;
//     num = 1;

//     while (num <= 10){
//         printf("%d\n",num);
//         num++;
//     }
// }


// Q3.  Write a program to input 10 integers and find the largest and smallest elements in the array
// void main(void){
//     int a,b,nums_array[10];
//     int largest,smallest;

//     for(a=0;a<=9;a++){
//         printf("%d = Enter Number: ", a+1);
//         scanf("%d",&b);
//         nums_array[a] = b;
//     }
    
//     largest = nums_array[0];
//     smallest = nums_array[0];
    
//     for(b = 0; b <= 9; b++){
//         if(nums_array[b] > largest){
//             largest = nums_array[b];
//         }

//         if(nums_array[b] < smallest){
//             smallest = nums_array[b];
//         }
//     }
 
//     printf("%d = %d", smallest, largest);
// }

// void main(void){
//     int a,b,c,d,e,f;

//     printf("Enter 1st number: ");
//     scanf("%d",&a);

//     printf("Enter 2nd number: ");
//     scanf("%d",&b);

//     printf("Enter 3nd number: ");
//     scanf("%d",&c);

//     if(a > b){
//         d = a;
//     }else{
//         d = b;
//     }

//     if(c > d){
//       e = c;
//     }else{
//         e = d;
//     }

//     printf("Largest number is %d",e);
// }


int main(void){
   float obt_mark,total_mark;
   float persontage;
   
   printf("Enter Your Marks: ");
   scanf("%f",&obt_mark);

   printf("Enter Total Marks: ");
   scanf("%f",&total_mark);

   persontage = (obt_mark / total_mark) * 100;
   printf("%s Your persontage is %0.2f",name,persontage);

   return 0;
}