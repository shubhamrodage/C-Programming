// Write a program which accept number from user and display its digits in reverse order.
// Input : 2395
// Output : 5 9 3 5

#include<stdio.h>

void ReverseDigit(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        printf("%d\n",iDigit);

        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    ReverseDigit(iValue);

    return 0;
}