// Accept number from user and display below pattern.
// Input : 5
// Output : 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i > 0; i--)
    {
        
        printf("%d\t",i);
        printf("#\t");
    
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