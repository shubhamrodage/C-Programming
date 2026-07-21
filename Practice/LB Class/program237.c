#include<stdio.h>

int main()
{
    char *str = "Ganesh";       // char str[] = "Ganesh";  last la '\0' ahe

    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
   
    return 0;
}