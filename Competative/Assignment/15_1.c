// Accept N numbers from user and accept one another number as NO ,check whether NO is present or not.
// Input : N : 6
// NO: 66
// Elements :85 66 3 66 93 88
// Output : TRUE
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNumber(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0 ;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iNum = 0;
    bool bRet = false;

    printf("Enter a number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter a number : \n");
    scanf("%d",&iNum);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter a Array element : \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d\n",&Brr[iCnt]);
    }

    bRet =  CheckNumber(Brr, iLength, iNum);

    if(bRet == true)
    {
        printf("True : Number is Present\n");
    }
    else
    {
        printf("False : Number is not Present\n");
    }

    free(Brr);
    
    return 0;
}
