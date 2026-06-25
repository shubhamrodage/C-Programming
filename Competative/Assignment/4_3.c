// Write a program which accept number from user and display all its non factors.

#include<stdio.h>

void DisplayNonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter a number : ");
    scanf("%d",&iValue);

    DisplayNonFact(iValue);

    return 0;
}