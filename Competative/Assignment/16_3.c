// Accept N numbers from user and return the difference between largest and smallest number.
// Input : N : 6
// Elements :85 66 3 66 93 88
// Output : 90 (93 -3)
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0;
    int iLarge = Arr[0];
    int iSmall = Arr[0];
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= iLarge)
        {
            iLarge = Arr[iCnt];
        }
        else if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }
    }
    return (iLarge - iSmall);
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

    printf("Enter a number of elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter a element : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Difference(Brr, iLength);

    printf("Difference of iLarage and iSmall : %d\n",iRet);

    return 0;
}