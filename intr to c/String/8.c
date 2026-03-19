#include<stdio.h>

int main ()
{
    char str1[20] = "techno "; // array with extra space
    char str2[10] = "script ";

    int i=0;
    int j=0;

    while(str1[i]!='\0')

    {
          i++;
    }

    while(str2[j]!='\0')

    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i]='\0'; // null added manual 

    printf(" concat string:- %s",str1); //  meaning joining two or more strings end to end 
}