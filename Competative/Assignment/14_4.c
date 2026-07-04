// Accept N numbers from user and return frequency of 11 form it.
// Input : N : 6
// Elements :85 66 3 15 93 88
// Output : 0
#include<stdio.h>
#include<stdlib.h>

int CheckNumber(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iCount++;
        }
      
    }
    return iCount;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
    int iRet = 0;

    printf("Enter a number of elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter a number : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = CheckNumber(Brr, iLength);

    printf("Number present in Array is 11 : %d\n",iRet);

    free(Brr);

    return 0;
}