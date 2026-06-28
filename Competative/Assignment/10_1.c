// Write a program which accept radius of circle from user and calculate its area.
// Consider value of PI as 3.14. (Area = PI * Radius * Radius)
// Input : 5.3
// Output : 88.2026

#include<stdio.h>

double AreaOfCircle(float Radius)
{
    float PI = 3.14;
    double Area = 0;

    Area = PI * Radius * Radius;

    return Area;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter a value : \n");
    scanf("%f",&fValue);

    dRet = AreaOfCircle(fValue);

    printf("Area of Circle : %f\n",dRet);

    return 0;
}