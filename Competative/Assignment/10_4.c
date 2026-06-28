// Write a program which accept temperature in Fahrenheit and convert it into
// celsius. (1 celsius = (Fahrenheit -32) * (5/9))
// Input : 10
// Output : -12.2222 (10 - 32) * (5/9)
#include<stdio.h>

double FhToCs(float iNo)
{
    double Celsius = 0;

    Celsius = (iNo -32) * (5.0/9.0);

    return Celsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter a Value : \n");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("temperature in Fahrenheit and convert it into : %f\n",dRet);

    return 0;
}