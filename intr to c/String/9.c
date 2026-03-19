// Calculating length of the string 

#include<stdio.h>
#include<string.h>

int main ()
{
    char str1[20] = "techno "; // array with extra space
    char str2[10] = "script ";

    int len;
    len = strlen(str2);
    printf("length of the string is: %d",len);
}