#include<stdio.h>

int main ()
{
    int num = 1239;
    int sum = 0;
    int digit;

    while (num>0)
    {
        digit = num % 10;
        sum =sum + digit;
        num = num / 10;
    }

    printf("%d",sum);
}