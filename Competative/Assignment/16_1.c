// Accept N numbers from user and return the largest number.
// Input : N : 6
// Elements : 85 66 3 66 93 88
// Output : 93
#include<stdio.h>
#include<stdlib.h>

int LargestNumber(int Arr[], int iSize)
{
    int iCnt = 0;
    int iLarge = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= iLarge)
        {
            iLarge = Arr[iCnt];
        }
    }
    return iLarge;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter a number of element : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter a number : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    iRet = LargestNumber(Brr, iLength);

    printf("Largest number of Array is : %d\n",iRet);

    free(Brr);

    return 0;   
}