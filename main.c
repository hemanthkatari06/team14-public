/**
 * @file main.c
 * @author  (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-10-04
 * 
 * @copyright Copyright (c) 2021
 * 
 */



/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>*/
#include "header.h"




void clear();
void delay(int mseconds);
void clear()
{
    system("PAUSE");
    system("CLS");
}
void delay(int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
int main()
{
    system("cls");
    printf("Press 1 for Simple Calculator\n");
    printf("Press 2 for Scientific Calculator\n");
    printf("Press 3 for Matrix Calculator\n");
    printf("Press 4 for Converter Calculator\n");
    printf("Press 5 for Interest Calculation\n");
    printf("Press 6 for Exit the Program\n");
    int n;
    int s_number;
    int c_number;
    printf("Enter Your Choice...");
    scanf("%d", &n);
    system("cls");
    while(n > 0 && n <= 6){
        switch(n){
            case 1:
                simple_calculator();
                //clear();
                break;
            case 2:
                printf("Press 1 for Simple Calculator\n");
                printf("Press 2 for Trigonometric Function\n");
                printf("Press 3 For Main Menu\n");
                printf("Press 4 for Exit the Program\n");
                printf("Enter Your Choice...");
                scanf("%d", &s_number);
                while(s_number > 0 && s_number <= 4){
                    switch(s_number){
                        case 1:
                            simple_scientific_calculator();
                            //scientificcalci();
                            clear();
                            break;
                        case 2:
                            system("cls");
                            trigonometric_function();
                            clear();
                            break;
                        case 3:
                            main();
                            clear();
                            break;
                        case 4:
                            exit(0);
                            break;
                        default:
                            break;
                    }
                    printf("Press 1 for Simple Calculator\n");
                    printf("Press 2 for Trigonometric Function\n");
                    printf("Press 3 For Main Menu\n");
                    printf("Press 4 for Exit the Program\n");
                    printf("Enter Your Choice...");
                    scanf("%d", &s_number);
                }
            case 3:
                printf("Press 1 for Matrix Addition\n");
                printf("Press 2 for Matrix Subtraction\n");
                printf("Press 3 for Matrix Divide\n");
                printf("Press 4 for Matrix Multiply\n");
                printf("Press 5 for conversion of linear equations into matrix\n");
                printf("Press 6 For Main Menu\n");
                printf("Press 7 for Exit the Program\n");
                printf("Enter Your Choice...");
                scanf("%d", &s_number);
                while(s_number > 0 && s_number <= 7){
                    switch(s_number){
                        case 1:
                            matrix_addition();
                            clear();
                            break;
                        case 2:
                            matrix_substraction();
                            clear();
                            break;
                        case 3:
                            matrix_division();
                            clear();
                            break;
                        case 4:
                            matrix_multiply();
                            clear();
                            break;
                         case 5:
                            linear_to_matrix();
                            clear();
                            break;
                        case 6:
                            main();
                            clear();
                            break;
                        case 7:
                            exit(0);
                            break;
                        default:
                            break;
                    }
                    printf("Press 1 for Matrix Addition\n");
                    printf("Press 2 for Matrix Subtraction\n");
                    printf("Press 3 for Matrix Divide\n");
                    printf("Press 4 for Matrix Multiply\n");
                    printf("Press 5 for conversion of linear equations into matrix\n");
                    printf("Press 6 For Main Menu\n");
                    printf("Press 7 for Exit the Program\n");
                    printf("Enter Your Choice...");
                    scanf("%d", &s_number);
                }
            case 4:
                printf("Press 1 for Convert Birth Calculator\n");
                printf("Press 2 for Convert Length\n");
                printf("Press 3 for Convert Mass\n");
                printf("Press 4 for Convert Temperature\n");
                printf("Press 5 for Convert Speed\n");
                printf("Press 6 for Convert Time\n");
                printf("Press 7 for Convert Currency\n");
                printf("Press 8 for Convert Energy\n");
                printf("Press 9 for BMI calculator\n");
                printf("Press 10 for Number system conversion\n");
                printf("Press 11 For Main Menu\n");
                printf("Press 12 for Exit the Program\n");
                printf("Enter Your Choice....");
                scanf("%d", &c_number);
                while(c_number > 0 && c_number <= 12){
                    switch(c_number){
                        case 1:
                            birth_calculator();
                            clear();
                            break;
                        case 2:
                            length();
                            clear();
                            break;
                        case 3:
                            mass();
                            clear();
                            break;
                        case 4:
                            temperature();
                            clear();
                            break;
                        case 5:
                            speed();
                            clear();
                            break;
                        case 6:
                            timec();
                            clear();
                            break;
                        case 7:
                            currency();
                            clear();
                            break;
                        case 8:
                            energy();
                            clear();
                            break;
                        case 9:
                            bmi();
                            clear();
                            break;
                        case 10:
                            numberconv();
                            clear();
                            break;
                        case 11:
                            main();
                            clear();
                            break;
                        case 12:
                            exit(0);
                            break;
                        default:
                            break;
                    }
                    printf("Press 1 for Convert Birth Calculator\n");
                    printf("Press 2 for Convert Length\n");
                    printf("Press 3 for Convert Mass\n");
                    printf("Press 4 for Convert Temperature\n");
                    printf("Press 5 for Convert Speed\n");
                    printf("Press 6 for Convert Time\n");
                    printf("Press 7 for Convert Currency\n");
                    printf("Press 8 for Convert Energy\n");
                    printf("Press 9 for BMI calculator\n");
                    printf("Press 10 for Number system conversion\n");
                    printf("Press 11 For Main Menu\n");
                    printf("Press 12 for Exit the Program\n");
                    printf("Enter Your Choice....");
                    scanf("%d", &c_number);
                    system("cls");
                }
            case 5:
                printf("Press 1 for Simple interest\n");
                printf("Press 2 for Compound Interest\n");
                printf("Press 3 For Main Menu\n");
                printf("Press 4 for Exit the Program\n");
                printf("Enter Your Choice...");
                scanf("%d", &s_number);
                while(s_number > 0 && s_number <= 4){
                    switch(s_number){
                        case 1:
                            simpleinterest();
                            clear();
                            break;
                        case 2:
                            system("cls");
                            CompoundInterest();
                            clear();
                            break;
                        case 3:
                            main();
                            clear();
                            break;
                        case 4:
                            exit(0);
                            break;
                        default:
                            break;
                    }
                    printf("Press 1 for Simple interest\n");
                    printf("Press 2 for Compound Interest\n");
                    printf("Press 3 For Main Menu\n");
                    printf("Press 4 for Exit the Program\n");
                    printf("Enter Your Choice...");
                    scanf("%d", &s_number);
                }

            case 6:
                exit(0);
                break;
            default :
                break;
        }
    printf("Press 1 for Simple Calculator\n");
    printf("Press 2 for Scientific Calculator\n");
    printf("Press 3 for Matrix Calculator\n");
    printf("Press 4 for Converter Calculator\n");
    printf("Press 5 for Interest Calculation\n");
    printf("Press 6 for Exit the Program\n");
    printf("Enter Your Choice...");
    scanf("%d", &n);
    system("cls");
    }

    return 0;
}



//gcc main.c simple_calculator.c trigonometric_function.c simple_scientific_calculator.c matrix_substraction.c matrix_addition.c matrix_division.c matrix_multiply.c linear_to_matrix.c birth_calculator.c bmi.c mass.c timec.c temperature.c speed.c simpleinterest.c numberconv.c length.c energy.c CompoundInterest.c currency.c