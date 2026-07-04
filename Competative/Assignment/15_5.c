// Accept N numbers from user and return product of all odd elements.
// Input : N : 6
// Elements :15 66 3 70 10 88
// Output : 45
#include<stdio.h>
#include<stdlib.h>

int OddProduct(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMult = 1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iMult = iMult * Arr[iCnt];
        }
    }
    return iMult;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iRet = 0, iCnt = 0;

    printf("Enter a number of element : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter a number of elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt ++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = OddProduct(Brr, iLength);

    printf("Product Odd numbers are : %d\n",iRet);

    return 0;
}