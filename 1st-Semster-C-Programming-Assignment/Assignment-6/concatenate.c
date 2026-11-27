#include <stdio.h>
#include <string.h>

// Concatenate two strings and append a limited portion of the second string.

void main(void){
    char s1[20];
    char s2[20];

    // Store the initial strings.
    strcpy(s1,"Muzaffar Ali");
    strcpy(s2," Kalwar");

    // Join the strings and display the complete result.
    strcat(s1,s2);
    printf("%s\n",s1);

    // Reset and append only the first five characters of the second string.
    strcpy(s1,"Muzaffar Ali");
    strncat(s1,s2,5);
    printf("%s",s1);
}