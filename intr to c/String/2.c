// calculate the string length 

#include<stdio.h>
int main ()
{
    char str []= " Techno ";
    int count=0;
    int i=0;

    while (str[i]!='\0') // null always put in inverted comma..
    {
        count++;
        i++;
    }
    printf("Length of string = %d", count);
}