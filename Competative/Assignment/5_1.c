// Write a program which accept number from user and print that number of $ & * on screen.

#include<stdio.h>
// Input : 5
// Output : $ * $ * $ * $ * $ *

void DisplayPattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
            printf("$\t");
            printf("*\t");  
        
    }

}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    DisplayPattern(iValue);

    return 0;
}
