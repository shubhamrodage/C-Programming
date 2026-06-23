// 10/05/2026
/*
    Algorothm

        START
            Accept number as No
            If No is completely divisible by 2 then
                 print Even
            otherwise
                 print Odd
        STOP

        START
            Accept number as No
            Divide No by 2
            If remender is 0
                 then print as Even
            otherwise
                 print as Odd
        STOP
*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    int iRemender = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRemender = iValue % 2;

    if(iRemender == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}