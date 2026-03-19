#include<stdio.h>

int main ()
{
    int num = 1234;
    int rev =0;
    int a = num;

    while (a>0)
    {
        int digit = a % 10;
        rev = rev * 10 + digit ;
        a = a / 10;
    }

    printf("%d",rev);
}