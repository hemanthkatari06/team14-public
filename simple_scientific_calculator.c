/*#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define PI 3.14159265*/
#include "allheader.h"

int add_scient(int a, char check, int b)
{
    int a, b, c;
    int result;
    char check;
    if(check == '+'){
            result = a + b;
            if(check == '+'){
            result = result + c;
            printf("Result = %d\n\n", result);
            }
        return(result)  ;  

    }
}

int sub_scient(int a, char check, int b)
{
    int a, b, c;
    int result;
    //int count = 0;
    char check;
    if(check == '-'){
            result = a + b;
            if(check == '-'){
            result = result + c;
            printf("Result = %d\n\n", result);
            }
        return(result)  ;  

    }
}

int mul_scient(int a, char check, int b)
{
    int a, b, c;
    int result;
    char check;
    if(check == '*'){
            result = a + b;
            if(check == '*'){
            result = result + c;
            printf("Result = %d\n\n", result);
            }
        return(result)  ;  

    }
}

int div_scient(int a, char check, int b)
{
    int a, b, c;
    int result;
    char check;
    if(check == '/'){
            result = a + b;
            if(check == '/'){
            result = result + c;
            printf("Result = %d\n\n", result);
            }
        return(result)  ;  

    }
}