// Accept N numbers from user and accept one another number as NO ,return index of first occurrence of that NO.
// Input : N : 6
// NO: 66
// Elements :85 66 3 66 93 88
// Output : 1
#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iValue = 0, iRet = 0;

    printf("Enter a number od elements : \n");
    scanf("%d",&iLength);

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter a number of Array element : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    iRet = FirstOcc(Brr, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurence of number is : %d\n",iRet);
    }

    free(Brr);
    
    return 0;
}