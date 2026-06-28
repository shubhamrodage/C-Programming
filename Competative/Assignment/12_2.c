// Write a program which accept number from user and check whether it contains 0 in it or not.
// Input : 2395
// Output : There is no Zero
#include<stdio.h>
#include<stdbool.h>

bool CheckZeroOrNot(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo/10;
    }
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet = CheckZeroOrNot(iValue);

    if(bRet == true)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}