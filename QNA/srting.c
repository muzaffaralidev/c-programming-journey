#include <stdio.h> // pre-processer derictive and header

// function return type
int main(void) // main function and paameter
{    // program body
    char name[40];

    printf("Enter Your Name: ");

    // scanf("%39s",name); // spaces ke baad read nahi karta. so it use only normal 
    //& not in array : array ka naam khud hi uske first element ka address provide karta hai jab function ko pass kiya jata hai.
    fgets(name,sizeof(name),stdin);

    printf("%s",name);
    
    return 0;
}