// Accept N numbers from user and display all such elements which are divisible by 3 and 5.
// Input : N : 6
// Elements :85 66 3 15 93 88
// Output : 15
#include<stdio.h>
#include<stdlib.h>

void DisplayDivisible(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Number of Divisible by 3 & 5 are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] % 3 == 0) && (Arr[iCnt] % 5 == 0))
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