#include<stdio.h>

int main ()
{
    char str[20] = "level";   // try other words also

    char *start = str;
    char *end = str;

    // Move end to last character
    while (*end != '\0')
    {
        end++;
    }
    end--;   // last valid character

    int isPalindrome = 1;

    while (start < end)
    {
        if (*start != *end)
        {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}