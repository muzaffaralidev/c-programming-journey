// 1. Write a C program to print numbers from 1 to 10.

// #include <stdio.h>
// int main(void){
//     int num;
//     num = 1;
//      do{
//         printf("%d\n",num);
//         num++;
//      }while(num <=10);
//      return 0;
// }



// 2. Write a C program to print numbers from 10 to 1.
// #include <stdio.h>
// int main(void){
//     int num;
//     num = 10;
//      do{
//         printf("%d\n",num);
//         num--;
//      }while(num >=1);
//      return 0;
// }


// 3. Write a C program to print all even numbers from 1 to 50.
// #include <stdio.h>
// int main(void){
//     int num;
//     num = 2;
//      do{ 
//         printf("%d\n",num); 
//         num+=2; 
//      }while(num <=50);
//      return 0;
// }

// 4. Write a C program to print all odd numbers from 1 to 50.
// #include <stdio.h>
// int main(void){
//     int num;
//     num = 1;
//     do{
//         printf("%d\n",num);
//         num+=2;
//     }while(num <=50);
//      return 0;
// }



// 5. Write a C program to calculate the sum of numbers from 1 to 10. 
// #include <stdio.h>
// int main(void){
//     int num,sum;
//     num = 1;
//     sum = 0;
//     do{
//         sum = sum + num;
//         num++;
//     }while(num <= 10);
//     printf("%d",sum);
//      return 0;
// }


// 6. Write a C program to calculate the sum of all even numbers from 1 to 20. 
// #include <stdio.h>
// int main(void){
//      int num,sum;
//      num = 2;
//      sum = 0;
//      do{
//         sum = sum + num;
//         num++;
//      }while(num <= 20);
//      printf("%d",sum);
//      return 0;
// }


// 7. Write a C program to display the multiplication table of a given number. 
// #include <stdio.h>
// int main(void){
//     int num,table;
//     num = 1;
//      printf("Enter the number for the multiplication table: ");
//      scanf("%d",&table);
//      do{
//         printf("%d x %d = %d\n",table,num,table * num);
//         num++;
//      }while(num <= 10);
//      return 0;
// }


// 8. Write a C program to calculate the factorial of a given number. 
#include <stdio.h>
int main(void){
    int num,i,factorial;
    i = 1;
    factorial = 1;
//   yhn code ko smj kr krna h kal 

    printf("Enter number for factorial: ");
    scanf("%d",&num);

     do{
        factorial = factorial*i;
        i++; 
     }while(i<=num);
     printf("%d",factorial);
     return 0;
}


// 9. Write a C program to calculate the average of numbers from 1 to 10. 
// #include <stdio.h>
// int main(void){
//    int num,sum;
//    float average;
//       sum = 0;
//       num = 1; 
//    while(num <= 10){
//       sum = sum + num;
//       num++;
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
//    a = 1;
   
//    do{
//       b = 1;

//       do{
//          printf("*");
    
//          b++;
//     }while(b<=a);
    
//       printf("\n");
//       a++;
//    }while(a <= 5);

//      return 0;
// }
