#include"unity.h"
#include"header.h"
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
/* speed()
{

    int ch;
    printf("Press 1 to Convert Meters per Second to Kilometers per Hours");
    printf("\nPress 2 to Convert Meters per Second to Miles per Hours");
    printf("\nPress 3 to Convert Kilometers per Hours to Meters per Second");
    printf("\nPress 4 to Convert Kilometers per Hours to Miles per Hours");
    printf("\nPress 5 to Convert Miles per Hours to Meters per Second");
    printf("\nPress 6 to Convert Miles per Hours to Kilometers per Hours");
    printf("\nPress 7 for Exit the Program\n");
    printf("\nEnter your choice...");
    scanf("%d", &ch);
    while(ch > 0 && ch <=7)
    {
        switch(ch)
        {
            case 1:
                mps_to_kmh();
                clear();
                break;
            case 2:
                mps_to_miph();
                clear();
                break;
            case 3:
                kph_to_mps();
                clear();
                break;
            case 4:
                kph_to_miph();
                clear();
                break;
            case 5:
                miph_to_mps();
                clear();
                break;
            case 6:
                miph_to_kph();
                clear();
                break;
            case 7:
                exit(0);
                clear();
                break;
            default:
                break;
        }
        printf("Press 1 to Convert Meters per Second to Kilometers per Hours");
        printf("\nPress 2 to Convert Meters per Second to Miles per Hours");
        printf("\nPress 3 to Convert Kilometers per Hours to Meters per Second");
        printf("\nPress 4 to Convert Kilometers per Hours to Miles per Hours");
        printf("\nPress 5 to Convert Miles per Hours to Meters per Second");
        printf("\nPress 6 to Convert Miles per Hours to Kilometers per Hours");
        printf("\nPress 7 for Exit the Program\n");
        printf("\nEnter your choice...");
        scanf("%d", &ch);
        system ("cls");
    }
    return 0;
}*/
