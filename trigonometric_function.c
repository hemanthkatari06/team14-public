/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/
#include<header.h>


void sine()
{
    double input, output;
    printf("\nEnter the value angle of sin : ");
    scanf("%lf", &input);
    output = sin(input*PI/180);
    printf ("sin of %.0lf degrees is %.3lf\n\n", input, output );
    return;
}

void cosine()
{
    double input, output;
    printf("\nEnter the value angle of cos : ");
    scanf("%lf", &input);
    output = cos(input*PI/180);
    printf ("Cos of %.0lf degrees is %.3lf\n\n", input, output );
    return;
}
void tangent()
{
    double input, output;
    printf("\nEnter the value angle of tan : ");
    scanf("%lf", &input);
    output = tan(input*PI/180);
    printf ("Tan of %.0lf degrees is %.3lf\n\n", input, output);
    return;
}
void cosecant()
{
    double input, output;
    printf("\nEnter the value angle of cosec : ");
    scanf("%lf", &input);
    output = 1/sin(input*PI/180);
    printf ("cosec of %.0lf degrees is %.3lf\n\n", input, output );
    return;
}
void secant()
{
    double input, output;
    printf("\nEnter the value angle of sec : ");
    scanf("%lf", &input);
    output = 1/cos(input*PI/180);
    printf ("sec of %.0lf degrees is %.3lf\n\n", input, output );
    return;
}
void cotangent()
{
    double input, output;
    printf("\nEnter the value angle of cot : ");
    scanf("%lf", &input);
    output = 1/tan(input*PI/180);
    printf ("cot of %.0lf degrees is %.3lf\n\n", input, output);
    return;
}

int trigonometric_function()
{
    int trigonometric_number;
    printf("Press 1 to Find the value of sine\n");
    printf("Press 2 to Find the value of cos\n");
    printf("Press 3 to Find the value of tan\n");
    printf("Press 4 to Find the value of cosec\n");
    printf("Press 5 to Find the value of sec\n");
    printf("Press 6 to Find the value of cot\n");
    printf("Press 7 for main Menu\n");
    printf("Press 8 to Exit\n");
    printf("Enter Your Choice to continue... ");
    scanf("%d", &trigonometric_number);
    while(trigonometric_number >= 1 && trigonometric_number <= 8){
        switch(trigonometric_number){
            case 1:
                sine();
                clear();
                break;
            case 2:
                cosine();
                clear();
                break;
            case 3:
                tangent();
                clear();
                break;
             case 4:
                cosecant();
                clear();
                break;
             case 5:
                secant();
                clear();
                break;
             case 6:
                cotangent();
                clear();
                break;
            case 7:
                main();
                break;
                clear();
            case 8:
                exit(0);
                break;
            default:
                break;
        }
        printf("Press 1 to Find the value of sine\n");
        printf("Press 2 to Find the value of cos\n");
        printf("Press 3 to Find the value of tan\n");
        printf("Press 4 to Find the value of cosec\n");
        printf("Press 5 to Find the value of sec\n");
        printf("Press 6 to Find the value of cot\n");
        printf("Press 7 for main Menu\n");
        printf("Press 8 to Exit\n");
        printf("Enter Your Choice to continue... ");
        scanf("%d", &trigonometric_number);
    }
}

