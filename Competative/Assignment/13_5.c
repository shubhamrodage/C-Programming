// Accept N numbers from user and display all such elements which are multiples of 11.
// Input : N : 6
// Elements :85 66 3 55 93 88
// Output : 66 55 88
#include<stdio.h>
#include<stdlib.h>

void DisplayDivisible(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Number of Divisible by 11 are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 11 == 0)
        {
            printf("%d\n",Arr[iCnt]);
        }  
        
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

    DisplayDivisible(Brr, iLength);

    free(Brr);

    return 0;
}