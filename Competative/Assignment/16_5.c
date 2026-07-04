// Accept N numbers from user and display summation of digits of each number.
// Input : N : 6
// Elements :8225 665 3 76 953 858
// Output : 17 17 3 13 17 21
#include<stdio.h>
#include<stdlib.h>

void Summation(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    int iNo = 0;
    int iDigit = 0;

    printf("Summation of each digit : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iNo = Arr[iCnt];
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            
            iNo = iNo/10;
        }
        printf("%d\n",iSum);
    }
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    printf("Enter a number of elements : \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter a number : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    Summation(Brr, iLength);

    return 0;
}