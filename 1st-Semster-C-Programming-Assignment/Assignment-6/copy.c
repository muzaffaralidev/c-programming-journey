#include <stdio.h>
#include <string.h>

// Copy one string into another and display both values.

void main(void){
    char s1[20];
    char s2[20];

    printf("Enter some data : ");
    gets(s2);

    // Copy the entered string into a second character array.
    strcpy(s1,s2);

    printf("string 1 %s\n",s1);
    printf("string 2 %s\n",s2);
}