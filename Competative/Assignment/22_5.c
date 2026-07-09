// Accept number from user and display below pattern.
// Input : 8
// Output : 2 4 6 8 10 12 14 16
#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t",2*i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter a value : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}