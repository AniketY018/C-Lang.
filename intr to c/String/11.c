// string compare 

#include<stdio.h>
#include<string.h>

int main ()
{
    char str1[20] = "techno "; // array with extra space
    char str2[10] = "script ";
    char str3[10];

    int s = strcmp(str1, str2); // str1 compared to str2 
    printf("%d",s);
}

// string same : value return = o
// string different : value return = -1