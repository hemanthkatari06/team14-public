/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/
#include"header.h"

int simple_calculator(int c,int a,int b)
{
   /* printf("Press 1 to  Calculate Addition\n");
    printf("Press 2 to  Calculate Subtraction\n");
    printf("Press 3 to  Calculate Multiply\n");
    printf("Press 4 to  Calculate Divided\n");
    printf("Press 5 to  Calculate Power\n");
    printf("Press 6 to  Calculate Root\n");
    printf("Press 7 for main Menu\n");
    printf("Press 8 to Exit\n");
    printf("Enter Your to Continue...");
    int simple_number;
    int a, b; 
    int result;
    double number,num, p;
    scanf("%d", &simple_number);*/
    int result;
    double number,num, p;
    while(c> 0 && c < 9){
        switch(c){
            case 1:
                /*printf("\nEnter the first value  : ");
                scanf("%d", &a);
                printf("Enter the Second value : ");
                scanf("%d", &b);*/
                result = a + b;
               /* printf("Addition = %d\n\n", result);*/
               return result;
                clear();
                break;
           /* case 2:
                printf("\nEnter the first value  : ");
                scanf("%d", &a);
                printf("Enter the Second value : ");
                scanf("%d", &b);
                result = a - b;
                printf("Subtraction = %d\n\n", result);
                clear();
                break;
            case 3:
                printf("\nEnter the first value  : ");
                scanf("%d", &a);
                printf("Enter the Second value : ");
                scanf("%d", &b);
                result = a * b;
                printf("Multiply = %d\n\n", result);
                clear();
                break;
            case 4:
                printf("\nEnter the first value  : ");
                scanf("%d", &a);
                printf("Enter the Second value : ");
                scanf("%d", &b);
                float result = (float) a / (float) b;
                printf("Divided = %.2f\n\n", result);
                clear();
                break;
            case 5:
                printf("\nEnter The numbers and Power\n");
                printf("Enter The Number : ");
                scanf("%lf",&number);
                printf("Enter The Power : ");
                scanf("%lf",&num);
                p = pow(number, num);
                printf("Result = %.2lf\n\n", p);
                clear();
                break;
            case 6:
                printf("\nTo Root Enter The number\n");
                printf("Enter The Number : ");
                scanf("%lf",&number);
                p = sqrt(number);
                printf("Result = %.2lf\n\n", p);
                clear();
                break;
            case 7:
                main();
                clear();
                break;
            case 8:
                exit(0);
                break;
            default:
                break;*/
        }
   /* printf("Press 1 to  Calculate Addition\n");
    printf("Press 2 to  Calculate Subtraction\n");
    printf("Press 3 to  Calculate Multiply\n");
    printf("Press 4 to  Calculate Divided\n");
    printf("Press 5 to  Calculate Power\n");
    printf("Press 6 to  Calculate Root\n");
    printf("Press 7 for main Menu\n");
    printf("Press 8 to Exit\n");
    printf("Enter Your Choice to Continue...");
    scanf("%d", &c);
    }
    return 0;*/
}
