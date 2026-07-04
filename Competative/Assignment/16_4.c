// Accept N numbers from user and display all such numbers which contains 3 digits in it.
// Input : N : 6
// Elements :8225 665 3 76 953 858
// Output : 665 953 858
#include<stdio.h>
#include<stdlib.h>

void DisplayThreeDigit(int Arr[], int iSize)
{
    int iCnt = 0;
    int iDigit = 0;

    printf("Three Digits number are : \n");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > 99 && Arr[iCnt] < 1000)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter a number of elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter a number : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    DisplayThreeDigit(Brr,iLength);

    return 0;
}
