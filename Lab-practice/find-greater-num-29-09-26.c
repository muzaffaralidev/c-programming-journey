#include <stdio.h>

int main(void)
{
    int a, b, c,d,e,f,g;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    printf("Enter fourth number: ");
    scanf("%d", &d);

    if (a > b) // if a is greater than b than store value in e
        e = a;
    else
        e = b;

    if (e > c) // if a is greater than c than store value in f
        f = e;
    else 
        f = c;
    
    if(f > d) // if a is greater than d than store value in g
       g = f;
    else 
       g = d;
       
    printf("%d is greater\n", g);
    printf("%c Ascci Number:",g);
    return 0;
}