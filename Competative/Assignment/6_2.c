// Accept single digit number from user and print it into word.
// Input : 9
// Output : Nine
#include<stdio.h>

void Digit(int iNo)
{
    int iCnt = 0;
    
    char *Arr[] = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    for(iCnt = 1; iCnt <= 9; iCnt++)
    {
        if(iCnt == iNo)
        { 
            printf("%s\n",Arr[iCnt]);
            break;
        }
    }
  
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

   
    if(iValue < 0 || iValue > 9)
    {
        printf("Invalid input\n");
    }
    else
    {
        Digit(iValue);
    }

    return 0;
}