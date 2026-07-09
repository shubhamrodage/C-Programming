// Accept number from user and display below pattern.
// Input : 5
// Output : A B C D E
#include<stdio.h>

void Display(int iNo)
{
    int i = 0;
    char ch = 0;

    for(i = 0, ch = 65; i <= iNo; i++, ch++)
    {
        printf("%c\t",ch);
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