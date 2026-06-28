// Write a program which accept range from user and display all numbers in between that range.
// Input : 23 35
// Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
#include<stdio.h>

void DisplayRange(int iNo1, int iNo2)
{
    int iCnt = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid input\n");
    }

    for(iCnt = iNo1; iCnt <= iNo2; iCnt++ )
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 2;

    printf("Enter Start number : \n");
    scanf("%d",&iValue1);

    printf("Enter End number : \n");
    scanf("%d",&iValue2);

    DisplayRange(iValue1, iValue2);

    return 0;
}