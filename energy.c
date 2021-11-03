/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/
#include "header.h"

void j_to_kw()
{
    float convert_number;
    printf("\nJoules    : ");
    scanf("%f", &convert_number);
    printf("Kilowatts : %.10f\n\n", convert_number / 3600000);
    return;
}

void j_to_kj()
{
    float convert_number;
    printf("\nJoules     : ");
    scanf("%f", &convert_number);
    printf("KiloJoules : %.3f\n\n", convert_number / 1000);
    return;
}

void kw_to_j()
{
    float convert_number;
    printf("\nKilowatts : ");
    scanf("%f", &convert_number);
    printf("Joules    : %10.f\n\n", 3600000 * convert_number);
    return;
}

void kw_to_kj()
{
    float convert_number;
    printf("\nKilowatts  : ");
    scanf("%f", &convert_number);
    printf("Kilojoules : %.3f\n\n", convert_number * 3600);
    return;
}

void kj_to_j()
{
    float convert_number;
    printf("\nKilojoules : ");
    scanf("%f", &convert_number);
    printf("Joules     : %.3f\n\n", convert_number * 1000);
    return;
}

void kj_to_kw()
{
    float convert_number;
    printf("\nKilojoules : ");
    scanf("%f", &convert_number);
    printf("Kilowatts  : %f\n\n", convert_number / 3600);
    return;
}


int energy()
{
    system ("cls");
    int energy_number;
    printf("Press 1 to Convert Joules to Kilowatts");
    printf("\nPress 2 to Convert Joules to Kilojoules");
    printf("\nPress 3 to Convert Kilowatts to Joules");
    printf("\nPress 4 to Convert Kilowatts to Kilojoules");
    printf("\nPress 5 to Convert Kilojoules to Joules");
    printf("\nPress 6 to Convert Kilojoules to Kilowatts");
    printf("\nPress 7 for main Menu");
    printf("\nPress 8 to Exit");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &energy_number);
    while(energy_number > 0 && energy_number <= 8){
        switch(energy_number){
            case 1:
                j_to_kw();
                clear();
                break;
            case 2:
                j_to_kj();
                clear();
                break;
            case 3:
                kw_to_j();
                clear();
                break;
            case 4:
                kw_to_kj();
                clear();
                break;
            case 5:
                kj_to_j();
                clear();
                break;
            case 6:
                kj_to_kw();
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
    printf("Press 1 to Convert Joules to Kilowatts");
    printf("\nPress 2 to Convert Joules to Kilojoules");
    printf("\nPress 3 to Convert Kilowatts to Joules");
    printf("\nPress 4 to Convert Kilowatts to Kilojoules");
    printf("\nPress 5 to Convert Kilojoules to Joules");
    printf("\nPress 6 to Convert Kilojoules to Kilowatts");
    printf("\nPress 7 for main Menu");
    printf("\nPress 8 to Exit");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &energy_number);
    }
    return 0;
}