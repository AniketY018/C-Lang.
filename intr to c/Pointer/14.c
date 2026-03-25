#include<stdio.h>

int main ()
{
    char string1[20] = "Techno";
        char string2[20] = "Script";

  
    char *str1 = string1;
        char *str2 = string2;

        while (*str1!='\0')
        {
            *str1++;
        }
    while (*str2!='\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
    printf("%s",string1);

    
}