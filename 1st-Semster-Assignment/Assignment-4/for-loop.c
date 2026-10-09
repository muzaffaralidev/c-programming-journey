// 1. Write a C program to print numbers from 1 to 10.
// #include <stdio.h>

// int main(void){
//     int num;
//      for(num = 1; num <=10; num++){
//         printf("%d\n",num);
//      }
//      return 0;
// }



// 2. Write a C program to print numbers from 10 to 1.
// #include <stdio.h>

// int main(void){
//     int num;
//      for(num = 10; num >=1; num--){
//         printf("%d\n",num);
//      }
//      return 0;
// }


// 3. Write a C program to print all even numbers from 1 to 50.
// #include <stdio.h>

// int main(void){
//     int num;
//      for(num = 2; num <=50; num+=2){
//         printf("%d\n",num);
//      }
//      return 0;
// }

// 4. Write a C program to print all odd numbers from 1 to 50.
// #include <stdio.h>

// int main(void){
//     int num;
//      for(num = 1; num <=50; num+=2){
//         printf("%d\n",num);
//      }
//      return 0;
// }



// 5. Write a C program to calculate the sum of numbers from 1 to 10. 
// #include <stdio.h>

// int main(void){
//     int num,sum;
//      sum = 0;
//      for(num = 1; num <=10; num++){
//         sum = sum + num; 
//      }
//      printf("%d\n",sum);
//      return 0;
// }


// 6. Write a C program to calculate the sum of all even numbers from 1 to 20. 
// #include <stdio.h>

// int main(void){
//     int num,sum;
//      sum = 0;
//      for(num = 2; num <=20; num+=2){
//         sum = sum + num; 
//      }
//      printf("%d\n",sum);
//      return 0;
// }


// 7. Write a C program to display the multiplication table of a given number. 
// #include <stdio.h>
// int main(void){
//     int num,table;
     
//      printf("Enter the number for the multiplication table: ");
//      scanf("%d",&table);

//      for(num = 1; num <=10; num++){
//         printf("%d x %d = %d\n",table,num,table * num);
//      }
     
//      return 0;
// }


// 8. Write a C program to calculate the factorial of a given number. 
// #include <stdio.h>
// int main(void){
//     int num,i,factorial;
//     factorial = 1;

//     printf("Enter number for factorial: ");
//     scanf("%d",&num);

//      for(i = 1; i <=num; i++){
//         factorial = factorial * i; 
//      }
//      printf("%d\n",factorial);
     
//      return 0;
// }


// 9. Write a C program to calculate the average of numbers from 1 to 10. 
// #include <stdio.h>
// int main(void){
//    int num,sum;
//    float average;
//       sum = 0;
//    for(num = 1; num <= 10; num++){
//       sum = sum + num;
//    }

//     average = sum / 10;
//     printf("%.2f",average);
//      return 0;
// }


// 10. Write a C program to print the following pattern:
// * 
// *  * 
// *   *   * 
// *   *   *   * 
// *   *   *   *   *

// #include <stdio.h>
// int main(void){
//    int a,b;
      
//    for(a = 1; a <= 5; a++){
//         printf("\n");
//       for(b = 1; b<=a; b++){
//          printf("*");
//     }
//    }

//      return 0;
// }