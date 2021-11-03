/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/
#include "header.h"

void taka_to_dollar()
{
    float convert_number;
    printf("\nBangladeshi Taka : ");
    scanf("%f", &convert_number);
    printf("US Dollar   : %.2f\n\n", convert_number *  0.0122133);
    return;
}

void taka_to_euro()
{
    float convert_number;
    printf("\nBangladeshi Taka : ");
    scanf("%f", &convert_number);
    printf("Euro        : %.3f\n\n", convert_number * 0.0103774);
    return;
}

void dollar_to_taka()
{
    float convert_number;
    printf("\nUS Dollar    : ");
    scanf("%f", &convert_number);
    printf("Bangladeshi Taka : %10.f\n\n", 81.8783 * convert_number);
    return;

}

void dollar_to_euro()
{
    float convert_number;
    printf("\nUS Dollar     : ");
    scanf("%f", &convert_number);
    printf("Euro      : %.3f\n\n", convert_number * 0.848139);
    return;
}

void euro_to_taka()
{
    float convert_number;
    printf("\nEuro       : ");
    scanf("%f", &convert_number);
    printf("Bangladeshi Taka : %.3f\n\n", convert_number * 96.4136);
    return;
}

void euro_to_dollar()
{
    float convert_number;
    printf("\nEuro     : ");
    scanf("%f", &convert_number);
    printf("US Dollar : %f\n\n", convert_number * 1.17905);
    return;
}




int currency()
{
    system ("cls");
    int currency_number;
    printf("Press 1 to Convert Bangladeshi Taka to US Dollar");
    printf("\nPress 2 to Convert Bangladeshi Taka to Euro");
    printf("\nPress 3 to Convert US Dollar to Bangladeshi Taka");
    printf("\nPress 4 to Convert US Dollar to Euro");
    printf("\nPress 5 to Convert Euro to Bangladeshi Taka");
    printf("\nPress 6 to Convert Euro to US Dollar");
    printf("\nPress 7 for main Menu");
    printf("\nPress 8 to Exit");
    printf("\nEnter Your Choice to Continue...");
    scanf("%d", &currency_number);
    while(currency_number > 0 && currency_number < 8){
        switch(currency_number){
            case 1:
                taka_to_dollar();
                clear();
                break;
            case 2:
                taka_to_euro();
                clear();
                break;
            case 3:
                dollar_to_taka();
                clear();
                break;
            case 4:
                dollar_to_euro();
                clear();
                break;
            case 5:
                euro_to_taka();
                clear();
                break;
            case 6:
                euro_to_dollar();
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
                break;
        }
    printf("Press 1 to Convert Bangladeshi Taka to US Dollar");
    printf("\nPress 2 to Convert Bangladeshi Taka to Euro");
    printf("\nPress 3 to Convert US Dollar to Bangladeshi Taka");
    printf("\nPress 4 to Convert US Dollar to Euro");
    printf("\nPress 5 to Convert Euro to Bangladeshi Taka");
    printf("\nPress 6 to Convert Euro to US Dollar");
    printf("\nPress 7 for main Menu");
    printf("\nPress 8 to Exit");
    printf("\nEnter Your Choice to Continue...");
    scanf("%d", &currency_number);

    }
    return 0;
}