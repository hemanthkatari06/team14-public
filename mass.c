#include<header.h>

/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/

int mass(float res,int a)
{
    system("cls");
    float convert_number;
    int mass_number;
    printf("Press 1 to Convert Centigram to Gram");
    printf("\nPress 2 to Convert Centigram to Kilogram");
    printf("\nPress 3 to Convert Gram to Centigram");
    printf("\nPress 4 to Convert Gram to Kilogram");
    printf("\nPress 5 to Convert Kilogram to Centigram");
    printf("\nPress 6 to Convert Kilogram to Gram");
    printf("\nPress 7 to Convert Kilgram to Pound");
    printf("\nPress 8 to Convert Pound to Kilogram");
    printf("\nPress 9 for mainmenu");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &mass_number);
    system ("cls");
    while(mass_number > 0 && mass_number < 9){
        switch(mass_number){
            case 1:
                printf("\nCentigram : ");
                scanf("%f", &convert_number);
                printf("Gram      : %.3f\n", convert_number / 100);
                clear();
                break;
            case 2:
                printf("\nCentigram : ");
                scanf("%f", &convert_number);
                printf("Kilogram  : %.3f\n", convert_number / 1000);
                clear();
                break;
            case 3:
                printf("\nGram      : ");
                scanf("%f", &convert_number);
                printf("Centigram : %.3f\n", convert_number * 100);
                clear();
                break;
            case 4:
                printf("\nGram     : ");
                scanf("%f", &convert_number);
                printf("Kilogram : %.3f\n", convert_number / 100);
                clear();
                break;
            case 5:
                printf("\nKilogram  : ");
                scanf("%f", &convert_number);
                printf("Centigram : %.3f\n", convert_number * 1000);
                clear();
                break;
            case 6:
                printf("\nKilogram : ");
                scanf("%f", &convert_number);
                printf("Gram     : %.3f\n", convert_number * 100);
                clear();
                break;

            case 7:
                  printf("\n kilogram    : ");
                  scanf("%f", &convert_number);
                  printf("pound    :%.3f\n",convert_number * 2.20462);
                  clear();
                  break;

            case 8:
                printf("\n pound   : ");
                scanf("%f", &convert_number);
                printf("kilogram    :%.3f\n",convert_number * 0.453592);
                clear();
                break;
            case 9:
                main();
                clear();
                break;
            default:
                break;
        }
        system ("cls");
    printf("Press 1 to Convert Centigram to Gram");
    printf("\nPress 2 to Convert Centimeter to Kilogram");
    printf("\nPress 3 to Convert Gram to Centigram");
    printf("\nPress 4 to Convert Gram to Kilogram");
    printf("\nPress 5 to Convert Kilogram to Centigram");
    printf("\nPress 6 to Convert Kilogram to Gram");
    printf("\nPress 7 for main Menu");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &mass_number);
    system ("cls");
    }
    return 0;
}