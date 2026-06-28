//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
// Input : 2395
// Output : -15 (2 - 17)
#include<stdio.h>

int DifferenceEvenOdd(int iNo)
{
    int iDigit = 0;
    int iEven = 0;
    int iOdd = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iEven= iEven + iDigit;
        }
        else
        {
             iOdd = iOdd + iDigit;
        }
        iNo = iNo / 10;
    }
    iSum = iEven - iOdd;

    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Value : \n");
    scanf("%d",&iValue);

    iRet = DifferenceEvenOdd(iValue);

    printf("difference between summation of even digits and summation of odd digits : %d\n",iRet);

    return 0;
}