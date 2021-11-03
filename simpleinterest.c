/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/
#include "header.h"



int simpleinterest()
{
        float principle, time, rate, SI;


    printf("Enter principle amount: ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);


    SI = (principle * time * rate) / 100;


    printf("Simple Interest = %f", SI);

    return 0;


}
