#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include<stdlib.h>

float mps_to_kmh(float A);
float mps_to_miph(float A);
float kph_to_mps(float A);
float kph_to_miph(float A);
float miph_to_mps(float A);
float miph_to_kph(float A);
void test_mps_to_kmh(void);
void test_mps_to_miph(void);
void test_kph_to_mps(void);
void test_kph_to_miph(void);
void test_miph_to_mps(void);
void test_miph_to_kph(void);
//-------------------------------------
float cel_to_fah(float tem);
float cel_to_kel(float tem);
float fah_to_cel(float tem);
float fah_to_kel(float tem);
float kel_to_cel(float tem);
float kel_to_fah(float tem);
void test_cel_to_fah(void);
void test_cel_to_kel(void);
void test_fah_to_cel(void);
void test_fah_to_kel(void);
void test_kel_to_cel(void);
void test_kel_to_fah(void);
//---------------------------------------
float binarytodecimal(int n);
void test_binarytodecimal(void);
char binarytohexadecimal(int binaryval);
void test_binarytohexadecimal(void);
#endif // HEADER_H_INCLUDED
