// copying one string to another 

#include<stdio.h>
#include<string.h>

int main ()
{
    char str1[20] = "techno "; // array with extra space
    char str2[10] = "script ";
    char str3[10];

    strcpy(str3,str1); // str3 mdhe str1 copy kele
    printf("%s",str3);
}