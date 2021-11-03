/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/
#include "header.h"

void cm_to_m()
{
    float convert_number;
    printf("\nCentimeter : ");
    scanf("%f", &convert_number);
    printf("Meter      : %.3f\n", convert_number / 100);
    return;
}

void cm_to_km()
{
    float convert_number;
    printf("\nCentimeter : ");
    scanf("%f", &convert_number);
    printf("Kilometer  : %.5f\n", convert_number / 100000);
    return;
}

void m_to_cm()
{
    float convert_number;
    printf("\nMeter      : ");
    scanf("%f", &convert_number);
    printf("Centimeter : %.3f\n", convert_number * 100);
    return;
}

void m_to_km()
{
    float convert_number;
    printf("\nMeter     : ");
    scanf("%f", &convert_number);
    printf("Kilometer : %.3f\n", convert_number / 1000);
    return;
}

void km_to_cm()
{
    float convert_number;
    printf("\nKilometer  : ");
    scanf("%f", &convert_number);
    printf("Centimeter : %.3f\n", convert_number * 100000);
    return;
}

void km_to_m()
{
    float convert_number;
    printf("\nKilometer : ");
    scanf("%f", &convert_number);
    printf("Meter     : %.3f\n", convert_number * 1000);
    return;
}




int length()
{
    system("cls");
    int length_number;
    printf("Press 1 to Convert Centimeter to Meter");
    printf("\nPress 2 to Convert Centimeter to Kilometer");
    printf("\nPress 3 to Convert Meter to Centimeter");
    printf("\nPress 4 to Convert Meter to Kilometer");
    printf("\nPress 5 to Convert Kilometer to Centimeter");
    printf("\nPress 6 to Convert Kilometer to Meter");
    printf("\nPress 7 for main Menu");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &length_number);
    system ("cls");
    while(length_number > 0 && length_number < 7){
        switch(length_number){
            case 1:
                cm_to_m();
                clear();
                break;
            case 2:
                cm_to_km();
                clear();
                break;
            case 3:
                m_to_cm();
                clear();
                break;
            case 4:
                m_to_km();
                clear();
                break;
            case 5:
                km_to_cm();
                clear();
                break;
            case 6:
                km_to_m();
                clear();
                break;
            case 7:
                main();
                clear();
                break;
            default:
                break;
        }
        system ("cls");
        printf("Press 1 to Convert Centimeter to Meter");
        printf("\nPress 2 to Convert Centimeter to Kilometer");
        printf("\nPress 3 to Convert Meter to Centimeter");
        printf("\nPress 4 to Convert Meter to Kilometer");
        printf("\nPress 5 to Convert Kilometer to Centimeter");
        printf("\nPress 6 to Convert Kilometer to Meter");
        printf("\nPress 7 for main Menu");
        printf("\nPress Any Key to Continue...");
        scanf("%d", &length_number);
        system ("cls");
    }
    return 0;
}