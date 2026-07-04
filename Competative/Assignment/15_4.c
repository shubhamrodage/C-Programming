// Accept N numbers from user and accept Range, Display all elements from that range
// Input : N : 6
// Start: 60
// End : 90
// Elements :85 66 3 76 93 88
// Output : 66 76 88
#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int Arr[], int iSize, int iNo1, int iNo2)
{
    int iCnt = 0;

    printf("Range of a number : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iNo1 && Arr[iCnt] < iNo2)
        {
            printf("%d\n",Arr[iCnt]);
        }

    }

}

int main()
{
    int *Brr = NULL;
    int iLength = 0,iCnt = 0, iValue = 0, iStart = 0, iEnd = 0;

    printf("Enter a number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter a Starting number : \n");
    scanf("%d",&iStart);

    printf("Enter a Ending number : \n");
    scanf("%d",&iEnd);


    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter a number of elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    DisplayRange(Brr, iLength, iStart, iEnd);

    free(Brr);

    return 0;
}
