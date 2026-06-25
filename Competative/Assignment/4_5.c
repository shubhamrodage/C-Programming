// a program which accept number from user and return difference between summation of all its factors and non factors.

#include<stdio.h>

int SumFactNonFact(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    int iNonFact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFact = iFact + iCnt;
        }
        else
        {
            iNonFact = iNonFact + iCnt;
        } 
    }
        printf("Sum of Factor : %d\n",iFact);
        printf("Sum of NonFact : %d\n",iNonFact);
        
    return iFact - iNonFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a Value : ");
    scanf("%d",&iValue);

    iRet = SumFactNonFact(iValue);

    printf("Difference of Fact & NonFact : %d",iRet);

    return 0;
}