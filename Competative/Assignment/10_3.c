// Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)
// Input : 5
// Output : 5000
#include<stdio.h>

int KmToMeter(int iNo)
{
    int iMeter = 0;
    int Meter = 1000;

    iMeter = iNo * Meter;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Value : \n");
    scanf("%d",&iValue);

    iRet = KmToMeter(iValue);

    printf("conver Km to Meter is : %d\n",iRet);

    return 0;
}