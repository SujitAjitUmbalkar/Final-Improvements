///////////////////////////////////////////////////////
//
//  File name :     0005_program.c
//  Descreption :   Used to calculate percentage
//  Author :        Sujit Ajit Umbalkar
//  Date :          28/04/2025
//
///////////////////////////////////////////////////////


#include<stdio.h>

float checkPercentage(int Total , int Obtained)
{
    float fRet = 0.0f;

    fRet = ((float)Obtained / (float) Total) * 100;

    return fRet;
}

int main()
{
    int iObtained = 0;
    int iTotal = 0;

    do
    {
        printf("Enter total marks : [should be > 0 ]\n");
        scanf("%d",&iTotal);

        if(iTotal <= 0)
        {
            printf("Invalid Total marks , Please enter valid marks : \n");
        }
    }while(iTotal <= 0);

    do 
    {
        printf("Enter obtained marks : [should be <= iTotal , should be > 0   ]\n");
        scanf("%d",&iObtained);

        if(iObtained < 0    ||  iObtained > iTotal)
        {
            printf("Invalid Obtained marks , Please enter valid marks : \n");
        }

    }while(iObtained < 0 || iObtained > iTotal);
    
    // calling function 
    float fAns = checkPercentage(iTotal, iObtained);

    printf("percenatage is : %f\t",fAns);

    return 0;
