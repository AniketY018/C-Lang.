#include<stdio.h>

int main ()
{
    char name[20] = "Techno Script";
    char copy[20] = "Techno Script";

    char *str = name;
    char *cpy = copy;
    int count =0;
    int f=0;

    while (*str != '\0')
    {
        if (*cpy != *str)
        {
            f=1;
        }  // copy character
        str++;
        cpy++;
    }
    if (f==0)
    {
        printf("both are same string");
    }
    else 
    {
        printf("different string");
    }
}