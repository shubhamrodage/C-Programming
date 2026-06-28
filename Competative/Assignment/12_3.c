// Write a program which accept number from user and count frequency of 2 in it.
// Input : 2395
// Output : 1
#include<stdio.h>

int CountFrequency(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
        {
            iCount++;
        }
        iNo = iNo/10;
    }
    return iCount++;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = CountFrequency(iValue);

    printf("Number of 2 present in number : %d\n",iRet);

    return 0;
}