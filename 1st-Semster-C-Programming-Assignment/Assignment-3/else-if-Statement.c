// else-if Statement 
// 1. Write a C program that takes marks from 0 to 100 and displays the grade according to the following criteria: 
// 80–100 → A 
// 70–79 → B 
// 60–69 → C 
// 50–59 → D 
// Below 50 → F 


// #include <stdio.h>
// int main(void){
//     int marks;

//     printf("Enter Your Marks: ");
//     scanf("%d",&marks);

//     if(marks >= 80 && marks <= 100){
//         printf("Grade A");
//     }else if(marks >= 70 && marks <= 79){
//         printf("Grade B");
//     }else if(marks >= 60 && marks <= 69){
//         printf("Grade C");
//     }else if(marks >= 50 && marks <= 59){
//         printf("Grade D");
//     }else if(marks < 50){
//         printf("Fail");
//     }else{
//        printf("Please Enter correct Marks between 0 to 100");
//     }
//     return 0;
// }








// 2. Write a C program that takes three integers and determines the largest number using an else-if structure.


// #include <stdio.h>
// int main(void){
//     int num1,num2,num3;
//     int largest,res;

//     printf("Enter First Number: ");
//     scanf("%d",&num1);

//     printf("Enter Second Number: ");
//     scanf("%d",&num2);

//     printf("Enter Third Number: ");
//     scanf("%d",&num3);
    
//     if(num1 >= num2 && num1 >= num3){
//         largest = num1;
//     }else if(num2 >= num1 && num2 >= num3){
//         largest = num2;
//     }else if(num3 >= num1 && num3 >= num2){
//         largest = num3;
//     }
//     printf("Largest Number is %d",largest);
//     return 0;
// }






// 3. Write a C program that takes temperature in Celsius and displays: 
// 40 or above → Very Hot 
// 30–39 → Hot 
// 20–29 → Normal 
// 10–19 → Cold 
// Below 10 → Very Cold 
// #include <stdio.h>
// int main(void){
//     int temperature;
    
//     printf("Enter temperature: ");
//     scanf("%d",&temperature);

//     if(temperature >= 40){
//        printf("Very Hot");
//     }else if(temperature >= 30){
//        printf("Hot");
//     }else if(temperature >= 20){
//        printf("Normal");
//     }else if(temperature >= 10){
//        printf("Cold");
//     }else if(temperature < 10){
//         printf("Very Cold ");
//     }

//     return 0;
// }



// 4. Write a C program that takes the number of electricity units consumed and calculates the bill according to these rates: 
// 0–100 units → Rs. 10 per unit 
// 101–200 units → Rs. 15 per unit 
// 201–300 units → Rs. 20 per unit 
// Above 300 units → Rs. 25 per unit 
// #include <stdio.h>
// int main(void){
//     int units;
    
//     printf("Enter electricity units: ");
//     scanf("%d",&units);

//     if(units > 300){
//        printf("Rs. 25 per unit");
//     }else if(units > 200 && units <= 300){
//        printf("Rs. 20 per unit");
//     }else if(units > 100 && units <= 200){
//        printf("Rs. 15 per unit");
//     }else if(units >= 0 && units <= 100){
//        printf("Rs. 10 per unit");
//     }

//     return 0;
// }



// 5. Write a C program that takes marks and displays the student's performance: 
// 90–100 → Excellent 
// 80–89 → Very Good 
// 70–79 → Good 
// 60–69 → Satisfactory 
// Below 60 → Needs Improvement
#include <stdio.h>
int main(void){
    int marks;

    printf("Enter Your Marks: ");
    scanf("%d",&marks);

    if(marks >= 90 && marks <= 100){
        printf("Excellent");
    }else if(marks >= 80 && marks <= 89){
        printf("Very Good");
    }else if(marks >= 70 && marks <= 79){
        printf("Good");
    }else if(marks >= 60 && marks <= 69){
        printf("Satisfactory");
    }else if(marks < 60){
        printf("Needs Improvement");
    }else{
       printf("Please Enter correct marks between 0 to 100");
    }

    return 0;
}