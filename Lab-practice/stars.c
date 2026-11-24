// #include <stdio.h>
// void main(void)
// {
//     int a,b,c,d;

//     for(a=1; a <= 5; a++)
//     {
//         printf("\n");
//         for(b=1; b <= a; b++)
//         {
//             printf("*");
//         }
//     }

//     for(c=5; c >= 1; c--)
//     {
//         printf("\n");
//         for(d=1; d <= c; d++)
//         {
//             printf("*");
//         }
//     }
// }

#include <stdio.h>
void main(void)
{
    int a,b,c,d;

    for(a=1; a <= 5; a++)
    {
        printf("\n");
        for(b=1; b <= a; b++)
        {
            printf("%d",a);
        }
    }

    for(c=5; c >= 1; c--)
    {
        printf("\n");
        for(d=1; d <= c; d++)
        {
            printf("%d",c);
        }
    }
}