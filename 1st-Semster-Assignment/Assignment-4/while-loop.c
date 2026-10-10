// 1. Write a C program to print numbers from 1 to 10.

// #include <stdio.h>
// int main(void){
//     int num;
//     num = 1;
//      while(num <=10){
//         printf("%d\n",num);
//         num++;
//      }
//      return 0;
// }



// 2. Write a C program to print numbers from 10 to 1.
// #include <stdio.h>
// int main(void){
//     int num;
//     num = 10;
//      while(num >=1){
//         printf("%d\n",num);
//         num--;
//      }
//      return 0;
// }


// 3. Write a C program to print all even numbers from 1 to 50.
// #include <stdio.h>
// int main(void){
//     int num;
//     num = 2;
//      while(num <=50){ 
//         printf("%d\n",num); 
//         num+=2; 
//      }
//      return 0;
// }

// 4. Write a C program to print all odd numbers from 1 to 50.
// #include <stdio.h>
// int main(void){
//     int num;
//     num = 1;
//      while(num <=50){
//         printf("%d\n",num);
//          num+=2;
//      }
//      return 0;
// }



// 5. Write a C program to calculate the sum of numbers from 1 to 10. 
// #include <stdio.h>
// int main(void){
//     int num,sum;
//      sum = 0;
//      num = 1;
//      while(num <=10){
//         sum = sum + num; 
//          num++;
//      }
//      printf("%d\n",sum);
//      return 0;
// }


// 6. Write a C program to calculate the sum of all even numbers from 1 to 20. 
// #include <stdio.h>
// int main(void){
//     int num,sum;
//      sum = 0;
//      num = 2; 
//      while(num <=20){
//         sum = sum + num; 
//         num+=2;
//      }
//      printf("%d\n",sum);
//      return 0;
// }


// 7. Write a C program to display the multiplication table of a given number. 
// #include <stdio.h>
// int main(void){
//     int num,table;
//      num = 1; 
//      printf("Enter the number for the multiplication table: ");
//      scanf("%d",&table);

//      while(num <=10){
//         printf("%d x %d = %d\n",table,num,table * num);
//          num++;
//      }
     
//      return 0;
// }


// 8. Write a C program to calculate the factorial of a given number. 
// #include <stdio.h>
// int main(void){
//     int num,i,factorial;
//     factorial = 1;
//     i = 1;

//     printf("Enter number for factorial: ");
//     scanf("%d",&num);

//      while(i <=num){
//         factorial = factorial * i; 
//         i++;
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

#include <stdio.h>
int main(void){
   int a,b;
   a = 1;
   
   while(a <= 5){
      b = 1;

      while(b<=a){
         printf("*");
    
         b++;
    }

      printf("\n");
      a++;
   }

     return 0;
}
