// Write a program which accept number from user and count frequency of such a digits which are less than 6.
// Input : 2395
// Output : 3
#include<stdio.h>

int CountFrequency(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = CountFrequency(iValue);

    printf("Number is less than 6 is : %d\n",iRet);

    return 0;
}