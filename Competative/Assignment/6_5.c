// Write a program which accept number from user and display its table in reverse order.
// Input : 2
// Output : 20 18 16 14 12 10 8 6 4 2

#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt > 0; iCnt--)
    {
        printf("%d\t",iNo * iCnt);
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a Value : \n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}