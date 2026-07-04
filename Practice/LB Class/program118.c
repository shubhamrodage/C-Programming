#include<stdio.h>

// Accept Array and samation of array value
int Sammation(int Arr[], int iSize)      
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)       
    {
        iSum = iSum + Arr[iCnt];
    }    
    return iSum;
}

int main()
{          
    int iLength = 4;
    int iCnt = 0;
    int iRet = 0;

    int Brr[iLength];
    
    printf("Enter the element : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    
    iRet = Sammation(Brr,iLength);

    printf("Addition of all element : %d \n",iRet);

    return 0;
}