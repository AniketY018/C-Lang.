#include<stdio.h>
int main ()
{
    char str[] = "Aniket";
    int start=0;
    int end=5;
    int temp;

    while (start<end)
    {
        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start ++;
        end -- ;
    }
     printf("string after reverse:%s",str);

}