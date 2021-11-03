/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/
#include<header.h>

int matrix_division()
{
    system("cls");
    int row_size, column_size;
    printf("\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\tInsert Row Size    : ");
    scanf("%d", &row_size);
    printf("\t\t\t\t\tInsert Column Size : ");
    scanf("%d", &column_size);
    int array1[row_size][column_size], array2[row_size][column_size];
    printf("\t\t\t\t      Insert the %d * %d Matrix A :\n", row_size, column_size);
    int i, j;
    for(i = 0; i < row_size; i++){
        printf("\t\t\t\t\t\t ");
        for(j = 0; j < row_size; j++){
            scanf("%d", &array1[i][j]);
        }
    }
    printf("\t\t\t\t      Insert the %d * %d Matrix B :\n", row_size, column_size);
    int k, l;
    for(k = 0; k < row_size; k++){
        printf("\t\t\t\t\t\t ");
        for(l = 0; l < row_size; l++){
            scanf("%d", &array2[k][l]);
        }
    }
    printf("\t\t\t\t\t  Here Matrix A / B\n", row_size, column_size);
    for(i = 0; i < row_size; i++){
        printf("\t\t\t\t\t    ");
        for(j = 0; j < row_size; j++){
            printf("%d ", array1[i][j]);
            printf("/");
            printf(" %d\t", array2[i][j]);
        }

    printf("\n");
    }
    //int sum = 0;
    printf("\t\t\t\t     Divided of A , B Matrix is : \n");
    for(i = 0; i < row_size; i++){
        float divided = 0;
        printf("\t\t\t\t\t     ");
        for(j = 0; j < row_size; j++){
            divided = (float) array1[i][j] / (float) array2[i][j];
        printf("%.2f\t", divided);
        }
        printf("\n");

    }
    return 0;
}