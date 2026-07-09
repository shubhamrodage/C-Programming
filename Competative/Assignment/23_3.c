/*
    Accept number of rows and number of columns from user and display below pattern.
    Input : iRow = 3 iCol = 5
    Output :5 4 3 2 1
            5 4 3 2 1
            5 4 3 2 1
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    for(i = iRow; i > 0; i--)
    {
        for(j = iCol; j > 0; j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter a number of Row : \n");
    scanf("%d",&iValue1);

    printf("Enter a number of Column : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}