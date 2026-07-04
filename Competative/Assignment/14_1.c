// Accept N numbers from user and return frequency of even numbers.
// Input : N : 6
// Elements :85 66 3 80 93 88
// Output : 3
#include<stdio.h>
#include<stdlib.h>

int FrequencyOfEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount++;
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

    iRet = FrequencyOfEven(Brr,iLength);

    printf("Number of frequency in even number : %d\n",iRet);

    free(Brr);

    return 0;
}