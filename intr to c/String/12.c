// string combine (CONCAT)

#include<stdio.h>
#include<string.h>

int main ()
{
    char str1[20] = "--techno "; // array with extra space
    char str2[10] = "script ";
    char str3[10];

    strcat(str2, str1); // only two strings can be combine...
    printf("%s",str2);
}
