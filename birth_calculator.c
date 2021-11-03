
/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/
#include "header.h"

int birth_calculator()
{
    system("cls");
    int birth_date, birth_month, birth_day;
    int present_date, present_month, present_day;
    int date, month, day;
    printf("Enter Your Present Date Month Day : ");
    scanf("%d %d %d", &present_date, &present_month, &present_day);
    printf("Enter Your Birth Date Month Day   : ");
    scanf("%d %d %d", &birth_date, &birth_month, &birth_day);
    printf("Your Birth Calculate in Year Month Day Below\n");
    if(present_month > 12 || birth_month > 12 || present_day > 31 || birth_day > 31){
        printf("Error Calculation\n");
    }
    else{
        //d>=m>=d>=
        if((present_date > birth_date || present_date == birth_date) && (present_month > birth_month || present_month == birth_month) && (present_day > birth_day || present_day == birth_day)){
            date = present_date - birth_date;
            month = present_month - birth_month;
            day = present_day - birth_day;
            printf("Year - Month - Day\n");
            printf("%d -    %d -    %d\n", date, month, day + 1);
        }
        //d>=m>=d<=
        else if((present_date > birth_date || present_date == birth_date) && (present_month > birth_month || present_month == birth_month) && (present_day < birth_day || present_day == birth_day)){
            if(present_month == 1 || present_month == 3 || present_month == 5 || present_month == 7 || present_month == 8 || present_month == 10 || present_month == 12 ){
                date = present_date - birth_date;
                month = (present_month - 1) - birth_month;
                day = (present_day + 31) - birth_day;
                printf("Year - Month - Day\n");
                printf("%d -    %d -    %d\n", date, month, day + 1);
                }
            else{
                if(present_month != 2){
                    date = present_date - birth_date;
                    month = (present_month - 1) - birth_month;
                    day = (present_day + 30) - birth_day;
                    printf("Year - Month - Day\n");
                    printf("%d -    %d -    %d\n", date, month, day + 1);
                }
                else{
                    if(present_date % 4 != 0){
                    date = present_date - birth_date;
                    month = (present_month - 1) - birth_month;
                    day = (present_day + 29) - birth_day;
                    printf("Year - Month - Day\n");
                    printf("%d -    %d -    %d\n", date, month, day + 1);
                    }
                    else{
                    date = present_date - birth_date;
                    month = (present_month - 1) - birth_month;
                    day = (present_day + 28) - birth_day;
                    printf("Year - Month - Day\n");
                    printf("%d -    %d -    %d\n", date, month, day + 1);
                    }
                }
            }
        }
        //d>=m<=d>=
        else if((present_date > birth_date || present_date == birth_date) && (present_month < birth_month || present_month == birth_month) && (present_day > birth_day || present_day == birth_day)){
            date = (present_date - 1) - birth_date;
            month = (present_month + 12) - birth_month;
            day = present_day - birth_day;
            printf("Year - Month - Day\n");
            printf("%d -    %d -    %d\n", date, month, day + 1);
        }
        //d>=m=<d<=
        else if((present_date > birth_date || present_date == birth_date) && (present_month < birth_month || present_month == birth_month) && (present_day < birth_day || present_day == birth_day)){
            if(present_month == 1 || present_month == 3 || present_month == 5 || present_month == 7 || present_month == 8 || present_month == 10 || present_month == 12 ){
                date = (present_date - 1) - birth_date;
                month = (present_month + 11) - birth_month;
                day = (present_day + 31) - birth_day;
                printf("Year - Month - Day\n");
                printf("%d -    %d -    %d\n", date, month, day + 1);
                }
            else{
                if(present_month != 2){
                    date = (present_date - 1) - birth_date;
                    month = (present_month + 11) - birth_month;
                    day = (present_day + 30) - birth_day;
                    printf("Year - Month - Day\n");
                    printf("%d -    %d -    %d\n", date, month, day + 1);
                }
                else{
                    if(present_date % 4 != 0){
                    date = (present_date - 1) - birth_date;
                    month = (present_month + 11) - birth_month;
                    day = (present_day + 29) - birth_day;
                    printf("Year - Month - Day\n");
                    printf("%d -    %d -    %d\n", date, month, day + 1);
                    }
                    else{
                    date = (present_date - 1) - birth_date;
                    month = (present_month + 11) - birth_month;
                    day = (present_day + 28) - birth_day;
                    printf("Year - Month - Day\n");
                    printf("%d -    %d -    %d\n", date, month, day + 1);
                    }
                }
            }
        }
        else{
            printf("Error Calculation\n");
        }
    }
    return 0;
}