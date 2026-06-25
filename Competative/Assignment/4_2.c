// Write a program which accept number from user and display its factors in decreasing order.
#include<stdio.h>

void DecreaseFact(int iNo)
{
    int iCnt = 0;

    for(iCnt =(iNo/2); iCnt > 0 ; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    DecreaseFact(iValue);

    return 0;
}
