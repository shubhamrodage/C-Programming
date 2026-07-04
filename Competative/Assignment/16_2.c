// Accept N numbers from user and return the smallest number.
// Input : N : 6
// Elements :85 66 3 66 93 88
// Output : 3
#include<stdio.h>
#include<stdlib.h>

int SmallestNumber(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSmall = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    return iSmall;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter a number of element is : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter a number : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = SmallestNumber(Brr, iLength);

    printf("Smallest number of Array is : %d\n",iRet);

    return 0;
}