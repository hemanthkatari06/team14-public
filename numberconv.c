#include "header.h"
#include "unity.h"
float binarytodecimal(int n)
{
int   binary, decimal = 0, base = 1, r;

    binary = n;
    while (n > 0)
    {
        r = n % 10;
        decimal = decimal + r * base;
        n = n / 10 ;
        base = base * 2;
    }
    return decimal;
}
char binarytohexadecimal(int binaryval)
{
    long int  hexadecimalval = 0, i = 1, remainder;
    while (binaryval != 0)
    {
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    }
    return hexadecimalval;
}

