#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRemender = 0;
    iRemender = iNo % 2;
   
    if(iRemender == 0)
    {
        printf("Number is Even\n");
    }
    else
    { 
        printf("Number is Odd\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);
    return 0;
}


