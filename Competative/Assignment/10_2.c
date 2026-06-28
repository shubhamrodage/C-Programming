// Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Height)
// Input : 5.3 9.78
// Output : 51.834
#include<stdio.h>

double AreaOfRectangle(float Width, float Height)
{
    float Area = 0.0f;

    Area = Width * Height;
    
    return Area;
}

int main()
{
    float iValue1 = 0.0f;
    float iValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter a width : \n");
    scanf("%f",&iValue1);

    printf("Enter a height : \n");
    scanf("%f",&iValue2);

    dRet = AreaOfRectangle(iValue1,iValue2);

    printf("Area of rectangle : %f\n",dRet);

    return 0;
}