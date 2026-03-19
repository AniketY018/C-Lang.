#include<stdio.h>
int main ()
{
    char str1[]="techno";
    char str2[]="pune";

    int i=0;
    int f=0;

    while(str1[i]!='\0')

       if (str1[i]=str2[i])
       {
        f=1;
        break;

       }
       i++;

}
if (f==0)
{
    printf("same string");
}
else{
    printf("not same string ");
}