// Write a program which accept range from user and display all even numbers in between that range.
// Input : 23 35
// Output : 24 26 28 30 32 34
#include<stdio.h>

void DisplayEven(int iNo1, int iNo2)
{
    int iCnt = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid input\n");
    }

    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter start number : \n");
    scanf("%d",&iValue1);

    printf("Enter End number : \n");
    scanf("%d",&iValue2);

    DisplayEven(iValue1, iValue2);

    return 0;
}