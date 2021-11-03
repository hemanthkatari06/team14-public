#include "header.h"
#include"unity.h"
float cel_to_fah(float tem)
{   float convert_number;
    convert_number = tem * 1.8 + 32;
    return convert_number;
}

float cel_to_kel(float tem)
{
    float convert_number;
    convert_number = tem + 273.15;
    return convert_number;
}

float fah_to_cel(float tem)
{
    float convert_number;
    convert_number = (tem- 32) * .5556;
    return convert_number;
}


float fah_to_kel(float tem)
{
    float convert_number;
    convert_number = (tem + 459.67) * 5/9;
    return convert_number;
}


float kel_to_cel(float tem)
{
    float convert_number;
    convert_number = tem - 273.15;
    return convert_number;
}


float kel_to_fah(float tem)
{
    float convert_number;
    convert_number= tem * 9/5 - 459.67;
    return convert_number;
}
