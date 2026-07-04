#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// used Flag in this code
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;              // break ne control loop chya baher jato ani return ne function chya baher jato         
        }
    }
    return bFlag;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iValue = 0;
    int iCnt = 0;
    bool bRet = false;

    printf("Enter the number of element : ");
    scanf("%d",&iLength);

    Brr = (int *)malloc(sizeof(int) * iLength);

    printf("Enter the elements : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }

    printf("Enter the element that you wont to search : \n");
    scanf("%d",&iValue);

    bRet = LinearSearch(Brr, iLength, iValue);

    if(bRet == true)
    {
        printf("Element is present\n");
    }
    else
    {
        printf("Element is not present\n");
    }

    free(Brr);

    return 0;
}