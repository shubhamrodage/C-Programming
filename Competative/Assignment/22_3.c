// Accept number from user and display below pattern.
// Input : 5
// Output : 1 * 2 * 3 * 4 * 5 *
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
        
        printf("%d\t",i);
        printf("*\t");
    
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