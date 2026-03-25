#include<stdio.h>

int main ()
{
    char name[20] = "Techno Script";
    char copy[20];

    char *str = name;
    char *cpy = copy;

    while (*str != '\0')
    {
        *cpy = *str;   // copy character
        str++;
        cpy++;
    }

    *cpy = '\0';   // end string

    printf("%s", copy);

    return 0;
}