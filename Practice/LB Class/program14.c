#include<stdio.h>

int CheckEvenOdd(int iNo)
{
    int iRemender = 0;
    iRemender = iNo % 2;
   
    return iRemender;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number to check whether it is Even or Odd : ");
    scanf("%d",&iValue);

    iRet = CheckEvenOdd(iValue);
    
    if(iRet == 0)
    {
        printf("%d is Even\n",iValue);
    }
    else
    {
        printf("%d is Odd\n",iValue);
    }

    return 0;
}