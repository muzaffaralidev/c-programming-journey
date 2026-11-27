#include <stdio.h>
#include <string.h>

// Compare two strings and identify the lexicographically greater string.

void main(void){
    char s1[20];
    char s2[20];
    int compare;

    // Initialize the strings to compare.
    strcpy(s1,"AAA");
    strcpy(s2,"KKK");

    // strcmp returns zero, a positive value, or a negative value.
    compare = strcmp(s1,s2);

    if(compare == 0){
        printf("both are equal");
    }else if(compare > 0){
        printf("first String is Greater");
    }else{
        printf("Second String is greater");
    }
    
}