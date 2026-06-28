// Write a program which accept range from user and return addition of all even
// numbers in between that range. (Range should contains positive numbers only)
// Input : 23 30
// Output : 108
#include<stdio.h>

int AdditionEven(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo1 < 0 || iNo2 < 0 || iNo1 > iNo2)
    {
        return -1;
    }

    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Strating number : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending number : \n");
    scanf("%d",&iValue2);

    iRet = AdditionEven(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Addition of all even number : %d\n",iRet);
    }

    return 0;
}