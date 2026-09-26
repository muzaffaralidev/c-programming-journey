// Write a Note in your own hand writing on the following: 
// 1. Variable 
// 2. Data Types 
// 3. Format specifiers  
// 4. Scape sequences 
// 5. Preprocessor Directives 
// 6. Write a program to display your name 5 times? 
// 7. Write a program to add, subtract, multiply and divide of two numbers? 
// 8. Write a program to display your name, CNIC and address using few scape sequences?  

// -------------------------------------------------------------
// Write a program to display your name 5 times?

// #include <stdio.h>
// int main(void){

//     printf("Muzaffar Ali\n");
//     printf("Muzaffar Ali\n");
//     printf("Muzaffar Ali\n");
//     printf("Muzaffar Ali\n");
//     printf("Muzaffar Ali\n");
    

//     return 0;

// }

// -----------------------------------------------------------------


//  Write a program to add, subtract, multiply and divide of two numbers? 

// #include <stdio.h>
// int main(void){

//     float num1,num2,result; // variable declaration
//     num1 = 8;
//     num2 = 8; // variable initiazation and Assigning value
    
//     // Addition
//     result = num1 + num2;
//     printf("%.0f + %.0f = %.0f",num1,num2, result);
    
//     // subtract
//     result = num1 - num2;
//     printf("\n%.0f - %.0f = %.0f",num1,num2, result);

//     // multiply
//     result = num1 * num2;
//     printf("\n%.0f x %.0f = %.0f",num1,num2, result);

//     // divide
//     result = num1 / num2;
//     printf("\n%.0f / %.0f = %.2f",num1,num2, result);

//     return 0;

// }



// ----------------------------------------------------------------

// Write a program to display your name, CNIC and address using few scape sequences?
#include <stdio.h>
int main(void){
    
    char name[] = "Muzaffar ALi"; 
    char address[] = "P.O Box Adilpur District Ghotki Sindh";
    
    printf("Name:\t%s\nAddress: %s\nCNIC:\t45102010408224",name,address);
    

    return 0;

}