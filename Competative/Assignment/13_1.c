// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
// Input : N : 6
// Elements :85 66 3 80 93 88
// Output : 53 (234 - 181)
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEven = 0, iOdd = 0;
    int iSum = 0;

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
    iSum = iEven - iOdd;

    return iSum;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0,iCnt = 0, iRet = 0;

    printf("Enter a number of Array : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter a element : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Difference(Brr, iLength);

    printf("Differce of even & odd numbers : %d\n",iRet);


    return 0;
}