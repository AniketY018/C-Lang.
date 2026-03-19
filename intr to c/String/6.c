// Code to copy the string

#include<stdio.h>
int main ()
{
char str[10]="techno";
char copy[10];
int i=0;
while (str[i]!='\0')
{
    copy[i]=str[i];// string copy 
    i++;
}
 copy [i]='\0'; // beacuse of this don't print garbage value
 printf("copied string is : %s", copy);
}