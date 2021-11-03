#include "allheader.h"

int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int subs(int a,int b)
{
    int c;
    c=a-b;
    return c;
}
int mul(int a,int b)
{
    int c;
    c=a*b;
    return c;
}
int divide(int a,int b)
{
    int c;
    c=a/b;
    return c;
}
int power(int a,int b)
{
    int c;
    c=pow(a,b);
    return c;
}
int sqroot(int a)
{
    int c;
    c= sqrt(a);
    return c;
}


float centigram_gram(int a)
{
    int c;
    c= a/100;
    return c;
}
float centigram_kilogram(int a)
{
    int c;
    c= a/100000;
    return c;
}
float gram_kilogram(int a)
{
    int c;
    c= a/1000;
    return c;
}
int gram_centigram(int a)
{
    int c;
    c= a*100;
    return c;
}
int kilogram_centigram(int a)
{
    int c;
    c= a*100000;
    return c;
}
int kilogram_gram(int a)
{
    int c;
    c= a*1000;
    return c;
}

//---------------------------------------------------upto here narsimha


float taka_to_dollar(float a)
{
    float c;
    c= a*0.0122133;
    return c;
}
float taka_to_euro(float a)
{
    float c;
    c= a* 0.0103774;
    return c;
}
float dollar_to_taka(float a)
{
    float c;
    c= a*81.8783;
    return c;
}
float dollar_to_euro(float a)
{
    int c;
    c= a*0.848139;
    return c;
}
float euro_to_taka(float a)
{
    int c;
    c= a* 96.4136;
    return c;
}
float euro_to_dollar(float a)
{
    int c;
    c= a*1.17905;
    return c;
}


float j_to_kw(float a)
{
    float c;
    c= a/ 3600000;
    return c;
}
float j_to_kj(float a)
{
    float c;
    c= a/ 1000;
    return c;
}
float kw_to_j(float a)
{
    float c;
    c= a*3600000;
    return c;
}
float kw_to_kj(float a)
{
    int c;
    c= a*3600;
    return c;
}
float kj_to_j(float a)
{
    int c;
    c= a*1000;
    return c;
}
float kj_to_kw(float a)
{
    int c;
    c= a/3600;
    return c;
}


float cm_to_m(float a)
{
    float c;
    c= a/100;
    return c;
}
float cm_to_km(float a)
{
    float c;
    c= a/100000;
    return c;
}
float m_to_cm(float a)
{
    float c;
    c= a*100;
    return c;
}
float m_to_km(float a)
{
    int c;
    c= a/1000;
    return c;
}
float km_to_cm(float a)
{
    int c;
    c= a*100000;
    return c;
}
float km_to_m(float a)
{
    int c;
    c= a*1000;
    return c;
}



//----------------------------------------------------upto here sravan

int birth_cal(int birth_date, int birth_month,int birth_day,int present_date,int present_month,int present_day,int A)
{
    system("cls");
    //int birth_date, birth_month, birth_day;
    //int present_date, present_month, present_day;
    int date, month, day;
    //printf("Enter Your Present Date Month Day : ");
    //scanf("%d %d %d", &present_date, &present_month, &present_day);
    //printf("Enter Your Birth Date Month Day   : ");
    //scanf("%d %d %d", &birth_date, &birth_month, &birth_day);
    //printf("Your Birth Calculate in Year Month Day Below\n");
    if(present_month > 12 || birth_month > 12 || present_day > 31 || birth_day > 31){
        //printf("Error Calculation\n");
        return A;
    }
    else{
        //d>=m>=d>=
        if((present_date > birth_date || present_date == birth_date) && (present_month > birth_month || present_month == birth_month) && (present_day > birth_day || present_day == birth_day)){
            date = present_date - birth_date;
            month = present_month - birth_month;
            day = present_day - birth_day;
            //printf("Year - Month - Day\n");
            //printf("%d -    %d -    %d\n", date, month, day + 1);
            return date;
            return month;
            return day+1;
        }
        //d>=m>=d<=
        else if((present_date > birth_date || present_date == birth_date) && (present_month > birth_month || present_month == birth_month) && (present_day < birth_day || present_day == birth_day)){
            if(present_month == 1 || present_month == 3 || present_month == 5 || present_month == 7 || present_month == 8 || present_month == 10 || present_month == 12 ){
                date = present_date - birth_date;
                month = (present_month - 1) - birth_month;
                day = (present_day + 31) - birth_day;
                //printf("Year - Month - Day\n");
                //printf("%d -    %d -    %d\n", date, month, day + 1);
                return date;
                return month;
                return day+1;
                }
            else{
                if(present_month != 2){
                    date = present_date - birth_date;
                    month = (present_month - 1) - birth_month;
                    day = (present_day + 30) - birth_day;
                    //printf("Year - Month - Day\n");
                    //printf("%d -    %d -    %d\n", date, month, day + 1);

                    return date;
                    return month;
                    return day+1;
                }
                else{
                    if(present_date % 4 != 0){
                    date = present_date - birth_date;
                    month = (present_month - 1) - birth_month;
                    day = (present_day + 29) - birth_day;
                    //printf("Year - Month - Day\n");
                    //printf("%d -    %d -    %d\n", date, month, day + 1);
                    return date;
                    return month;
                    return day+1;
                    }
                    else{
                    date = present_date - birth_date;
                    month = (present_month - 1) - birth_month;
                    day = (present_day + 28) - birth_day;
                    //printf("Year - Month - Day\n");
                    //printf("%d -    %d -    %d\n", date, month, day + 1);
                    return date;
                    return month;
                    return day+1;
                    }
                }
            }
        }
        //d>=m<=d>=
        else if((present_date > birth_date || present_date == birth_date) && (present_month < birth_month || present_month == birth_month) && (present_day > birth_day || present_day == birth_day)){
            date = (present_date - 1) - birth_date;
            month = (present_month + 12) - birth_month;
            day = present_day - birth_day;
            //printf("Year - Month - Day\n");
            //printf("%d -    %d -    %d\n", date, month, day + 1);
            return date;
            return month;
            return day+1;
        }
        //d>=m=<d<=
        else if((present_date > birth_date || present_date == birth_date) && (present_month < birth_month || present_month == birth_month) && (present_day < birth_day || present_day == birth_day)){
            if(present_month == 1 || present_month == 3 || present_month == 5 || present_month == 7 || present_month == 8 || present_month == 10 || present_month == 12 ){
                date = (present_date - 1) - birth_date;
                month = (present_month + 11) - birth_month;
                day = (present_day + 31) - birth_day;
                //printf("Year - Month - Day\n");
                //printf("%d -    %d -    %d\n", date, month, day + 1);
                return date;
                return month;
                return day+1;
                }
            else{
                if(present_month != 2){
                    date = (present_date - 1) - birth_date;
                    month = (present_month + 11) - birth_month;
                    day = (present_day + 30) - birth_day;
                    //printf("Year - Month - Day\n");
                    //printf("%d -    %d -    %d\n", date, month, day + 1);
                    return date;
                    return month;
                    return day+1;
                }
                else{
                    if(present_date % 4 != 0){
                    date = (present_date - 1) - birth_date;
                    month = (present_month + 11) - birth_month;
                    day = (present_day + 29) - birth_day;
                    //printf("Year - Month - Day\n");
                    //printf("%d -    %d -    %d\n", date, month, day + 1);
                    return date;
                    return month;
                    return day+1;
                    }
                    else{
                    date = (present_date - 1) - birth_date;
                    month = (present_month + 11) - birth_month;
                    day = (present_day + 28) - birth_day;
                    //printf("Year - Month - Day\n");
                    //printf("%d -    %d -    %d\n", date, month, day + 1);
                    return date;
                    return month;
                    return day+1;
                    }
                }
            }
        }
        else{
                return A;
            //printf("Error Calculation\n");
        }
    }
    //return 0;
}






//-----------------------------------------------------upto here suhas
int sec_min(int a)
{
    int b;
    b=a/60;
    return b;
}
int sec_hr(int a)
{
    int b;
    b=a*3600;
    return b;
}
int min_sec(int a)
{
    int b;
    b=a*60;
    return b;
}
int min_hr(int a)
{
    int b;
    b=a/60;
    return b;
}
int hr_sec(int a)
{
    int b;
    b=a*3600;
    return b;
}
int hr_min(int a)
{
    int b;
    b=a*60;
    return b;
}






//-------------------------------------------------------upto here teja

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

float mps_to_kmh(float A)
{
    float convert_number;
    convert_number = A* 3.60;
    return convert_number;
}
float mps_to_miph(float A)
{
    float convert_number;
    convert_number= A * 2.24;
    return convert_number;
}
float kph_to_mps(float A)
{
    float convert_number;
    convert_number = A* 0.28;
    return convert_number;
}

float kph_to_miph(float A)
{
    float convert_number;
    convert_number=A * 0.62;
    return convert_number;
}


float miph_to_mps(float A)
{
    float convert_number;
    convert_number=A * 0.45;
    return convert_number;
}


float miph_to_kph(float A)
{
    float convert_number;
    convert_number = A * 1.61;
    return convert_number;
}

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

//-------------------------------------------------------upto here kajal


float ci(float p,float r,float t)
{

    float ci;
    ci=p*(pow((1+r/100),t));
    return ci;
}


//---------------------------------------------------------upto here sadanand

float bmi(int weight,int height)
{
    float bmi1;
    bmi1 = weight / (height * height);
    return bmi1;
}

//-------------------------------------------------------------upto here varalaxmi



float simple(float p,float t,float r)
{
    float  SI;

    SI = (p*t*r) / 100; 

    return SI;
}




//-------------------------------------------------------------upto here neha
