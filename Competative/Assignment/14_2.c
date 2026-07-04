// Accept N numbers from user and return difference between frequency of even number and odd numbers.
// Input : N : 7
// Elements :85 66 3 80 93 88 90
// Output : 1 (4 -3)
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEven = 0, iOdd = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven = iEven + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }
    return (iEven - iOdd);
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
    iRet = Frequency(Brr, iLength);

    printf("Difference of Even & Odd : %d\n",iRet);

    return 0;
}