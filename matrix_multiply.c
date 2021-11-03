/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/
#include<header.h>


int matrix_multiply()
{
    system("cls");
    int a[10][10], b[10][10], mult[10][10], a_row_size, a_column_size, b_row_size, b_column_size, i, j, k;
    int row_size, column_size;
    printf("Enter 1st Matrix Rows and Column : ");
    scanf("%d %d", &a_row_size, &a_column_size);
    printf("Enter 2nd Matrix Rows and Column : ");
    scanf("%d %d", &b_row_size, &b_column_size);
    printf("\nInsert the %d * %d Matrix A :\n", a_row_size, a_column_size);
    for(i = 0; i < a_row_size; i++){
            for(j = 0; j < a_column_size; j++){
        scanf("%d",&a[i][j]);
        }
    }
    printf("Insert the %d * %d Matrix B :\n", b_row_size, b_column_size);
    for(i = 0; i < b_row_size; i++){
        for(j = 0; j < b_column_size; j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i = 0; i < a_row_size; i++){
        for(j = 0; j < b_column_size; j++){
           mult[i][j]=0;
        }
    }
    printf("Here Matrix A * B\n", a_row_size, b_column_size);
    for(i = 0; i < a_row_size; i++){
        for(j = 0; j < b_column_size; j++){
            int count = 0;
            for(k = 0; k < a_column_size; k++){
                printf("%d * %d", a[i][k], b[k][j]);
                mult[i][j] += a[i][k]*b[k][j];
                if(count == a_column_size - 1){
                break;
            }
            count++;
            printf(" + ");
            }
           printf("\t");
        }
        printf("\n");
    }
    printf("\nResult of Matrix A * B\n", row_size, column_size);
    for(i=0; i<a_row_size; ++i){
        for(j=0; j<b_column_size; ++j){
            printf("%d\t",mult[i][j]);
        }
        printf("\n");
    }
    printf("\n");


    return 0;
}