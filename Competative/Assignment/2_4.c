// Accept two numbers from user and display first number in second number of times.
#include<stdio.h>

void Display(int iNo1, int iNo2)
{
    int iCnt = 0;
    
    if(iNo2 < 0)
    {
        iNo2 = -iNo2;
    }
    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\n",iNo1);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter first number : ");
    scanf("%d",&iValue);

    printf("Enter first number : ");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}
