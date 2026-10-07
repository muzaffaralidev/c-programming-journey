// #include <stdio.h>
// int main(void){
//     int a,b;

//     for(a=1;a<=5;a++){
//         printf("\n");

//         for(b=1;b<=a;b++){
//             printf("*");
//         }

//     }

//     return 0;
// }
#include <stdio.h>
int main(void){
    int a,b;

    for(a=1;a<=5;a++){
        printf("\n");

        for(b=5;b>=a;b--){
            printf("*");
        }
        
    }

    return 0;
}