// Write a program to find factorial of given number.
// Input : 5
// Output : 120 (5 * 4 * 3 * 2 * 1)

#include<stdio.h>

int MultiplyFactorial(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; iCnt > 0 ; iCnt--)
    {
        iMult = iMult * iCnt;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Value : \n");
    scanf("%d",&iValue);

    iRet =  MultiplyFactorial(iValue);

    printf("Factorial number is : %d\n",iRet);

    return 0;
}