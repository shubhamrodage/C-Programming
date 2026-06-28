// Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)
// Input : 5
// Output : 0.464515
#include<stdio.h>

double SquareMeter(float fNo)
{
    double SqMeter = 0.0;
    double SqFeet =  0.0929;

    SqMeter = fNo * SqFeet;

    return SqMeter;
}

int main()
{
    float fValue = 0;
    double dRet = 0.0;

    printf("Enter a Value : \n");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("square feet and convert it into square meter is : %f\n",dRet);

    return 0;
}