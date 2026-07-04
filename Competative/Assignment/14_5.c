// Accept N numbers from user and accept one another number as NO ,return frequency of NO form it.
// Input : N : 6
// NO: 66
// Elements :85 66 3 66 93 88
// Output : 2
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNO)
{
    int iCnt = 0;
    int iCount = 0;

    printf("Number of element are present : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNO)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iNum = 0, iRet = 0;

    printf("Enter a number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the number : \n");
    scanf("%d",&iNum);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter a number of element : \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = Frequency(Brr, iLength, iNum);

    printf("%d\n",iRet);

    return 0;
}