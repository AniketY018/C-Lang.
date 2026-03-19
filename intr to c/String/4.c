#include <stdio.h>
int main ()
{
    int i = 6;
    int count = 6;

    char str[20] = "Aniket";

    // reverse the string
    for(i = count - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}