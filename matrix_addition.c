/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/
#include<header.h>

int matrix_addition()
{
    int row_size, column_size;
    printf("\nInsert Row Size    : ");
    scanf("%d", &row_size);
    printf("Insert Column Size : ");
    scanf("%d", &column_size);
    int array1[row_size][column_size], array2[row_size][column_size];
    printf("Insert the %d * %d Matrix A :\n", row_size, column_size);
    int i, j;
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Insert the %d * %d Matrix B :\n", row_size, column_size);
    int k, l;
    for(k = 0; k < row_size; k++){
        for(l = 0; l < column_size; l++){
            scanf("%d", &array2[k][l]);
        }
    }
    printf("Here Matrix A + B\n", row_size, column_size);
    for(i = 0; i < row_size; i++){
        for(j = 0; j < column_size; j++){
            printf("%d ", array1[i][j]);
            printf("+");
            printf(" %d", array2[i][j]);
            printf("\t");
        }

    printf("\n");
    }
    //int sum = 0;
    printf("Summation of A , B Matrix is : \n");
    for(i = 0; i < row_size; i++){
        int sum = 0;
        //printf("\t\t\t\t\t        ");
        for(j = 0; j < column_size; j++){
            sum = array1[i][j] + array2[i][j];
        printf("%d\t", sum);
        }
        printf("\n");

    }
    printf("\n");


    //getch();
    return 0;
}