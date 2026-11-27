#include <stdio.h>
#include <string.h>

// Read a string and display it with its length.

void main(void){
    char user_data[30];
    int length ;

    printf("Enter some data : ");
    gets(user_data);

    // Calculate and print the number of characters in the entered string.
    length = strlen(user_data);
    printf("user data is '%s' and  lenght is '%d'",user_data,length);
}