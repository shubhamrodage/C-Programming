#include<stdio.h>

void strlenX(char *str)
{
    *str = 'A';
}

int main()
{
    int iRet = 0;

    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);                

    strlenX(Arr);

    printf("String is : %s\n",Arr);

    return 0;
}