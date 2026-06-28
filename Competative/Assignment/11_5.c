// Write a program which accept accept range from user and display all numbers in between that range in reverse order.
// Input : 23 35
// Output : 35 34 33 32 31 30 29 28 27 26 25 24 23
#include<stdio.h>

void DisplayRev(int iNo1, int iNo2)
{
    int iCnt = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid input\n");
    }

    for(iCnt = iNo2; iCnt >= iNo1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Starting number : \n");
    scanf("%d",&iValue1);

    printf("Enter Ending number : \n");
    scanf("%d",&iValue2);

    DisplayRev(iValue1, iValue2);

    return 0;
}