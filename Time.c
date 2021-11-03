/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/
#include "header.h"


int timec()
{
    system ("cls");
    float convert_number;
    int time_number;
    printf("Press 1 to Convert Seconds to Minutes");
    printf("\nPress 2 to Convert Seconds to Hours");
    printf("\nPress 3 to Convert Minutes to Seconds");
    printf("\nPress 4 to Convert Minutes to Hours");
    printf("\nPress 5 to Convert Hours to Seconds");
    printf("\nPress 6 to Convert Hours to Minutes");
    printf("\nPress 7 for main Menu");
    printf("\nPress 8 to Exit");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &time_number);
    system ("cls");
    while(time_number > 0 && time_number < 7){
        switch(time_number){
            case 1:
                printf("\nSeconds : ");
                scanf("%f", &convert_number);
                printf("Minutes : %.2f\n\n", convert_number / 60);
                clear();
                break;
            case 2:
                printf("\nSeconds : ");
                scanf("%f", &convert_number);
                printf("Hours   : %.5f\n\n", convert_number / 3600);
                clear();
                break;
            case 3:
                printf("\nMinutes : ");
                scanf("%f", &convert_number);
                printf("Seconds : %.2f\n\n", 60 * convert_number);
                clear();
                break;
            case 4:
                printf("\nMinutes : ");
                scanf("%f", &convert_number);
                printf("Hours   : %.2f\n\n", convert_number / 60);
                clear();
                break;
            case 5:
                printf("\nHours   : ");
                scanf("%f", &convert_number);
                printf("Seconds : %.2f\n\n", convert_number * 3600);
                clear();
                break;
            case 6:
                printf("\nHours   : ");
                scanf("%f", &convert_number);
                printf("Minutes : %.2f\n\n", convert_number * 60);
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
    system ("cls");
    printf("Press 1 to Convert Seconds to Minutes");
    printf("\nPress 2 to Convert Seconds to Hours");
    printf("\nPress 3 to Convert Minutes to Seconds");
    printf("\nPress 4 to Convert Minutes to Hours");
    printf("\nPress 5 to Convert Hours to Seconds");
    printf("\nPress 6 to Convert Hours to Minutes");
    printf("\nPress 7 for main Menu");
    printf("\nPress 8 to Exit");
    printf("\nPress Any Key to Continue...");
    scanf("%d", &time_number);
    system ("cls");
    }
    return 0;
}
