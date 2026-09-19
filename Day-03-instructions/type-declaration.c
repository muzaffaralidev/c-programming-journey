#include <stdio.h>

int main(void){
    // valid
    int a = 10;
    int b = a;
    int c = b + 1;
    int d = c, e;
    
    // Invalid
    // int oldAge = 19;
    // int newAge = oldAge + years; // year is undeclared
    // int year = 2;

    int x,y,z;
    // int x=y=z = 2; error q k aik sath declare and use nhi kr skty compiler ko smj hi nhi aiga  
    x = y = z = 1;
    printf("%d",x);

    return 0;
} 