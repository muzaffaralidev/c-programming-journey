// Q9. Write a program to input a 3 x 3 matrix and calculate the sum of all its elements


#include <stdio.h>
void main(void){
    int matrix[3][3];
    int i,j,u,sum;
    sum = 0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter Number for Row %d, Column %d: ", i + 1, j + 1);
            scanf("%d",&u);
            matrix[i][j] = u;
            sum = sum + matrix[i][j];
        }
    }

     for(i=0;i<3;i++){
         for(j=0;j<3;j++){
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
    }
    
    printf("Sum of All Matrix Elements = %d ",sum);
    
}