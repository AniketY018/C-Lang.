#include<stdio.h>
int main ()
{
    char name [20] = "aniket yesare";

    char *str = name;
    int count = 0;
    while (*str !='\0')
    {
        printf("%c",*str);
        str++;
        count++;
    }
    printf("\n%d ",count);
        printf("\n%d ",' ');

}