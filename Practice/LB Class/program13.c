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

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = CheckEvenOdd(iValue);
    
    if(iRet == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}