// Accept N numbers from user check whether that numbers contains 11 in it or not.
// Input : N : 6
// Elements :85 66 11 80 93 88
// Output : 11 is present
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Number of Array is present in 11 or not : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;
    bool bRet = 0;

    printf("Enter a number of elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter a number : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    bRet = CheckNumber(Brr, iLength);

    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    free(Brr);

    return 0;
}