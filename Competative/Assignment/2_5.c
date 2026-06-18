// Accept number from user and check whether number is even or odd.
#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEvenOdd(int iNo)
{
    if(iNo%2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == TRUE)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }

    return 0;
}
