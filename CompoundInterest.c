/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/
#include "header.h"


int CompoundInterest()
{
       float principle, rate, time, CI;


    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);


    CI = principle* (pow((1 + rate / 100), time));


    printf("Compound Interest = %f", CI);

    return 0;
}