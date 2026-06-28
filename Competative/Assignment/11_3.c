// Write a program which accept range from user and return addition of all numbers
// in between that range. (Range should contains positive numbers only)
// Input : 23 30
// Output : 212
#include<stdio.h>

int RangeAddition(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iSum = 0;
 
    if(iNo1 < 0 || iNo2 < 0 || iNo1 > iNo2)
    {
       return -1;
    }   

    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter Start number : \n");
    scanf("%d",&iValue1);

    printf("Enter End number : \n");
    scanf("%d",&iValue2);

    iRet = RangeAddition(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Summation of all range element :%d\n",iRet);
    }

    return 0;
}