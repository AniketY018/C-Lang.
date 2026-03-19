#include<stdio.h>
int main ()
{
    char str[20];
    printf("enter the string:");
    scanf("%[^n]s",str);     // [^n ] used to read space in the string 
    printf("entered string is: %s\n",str);

}
