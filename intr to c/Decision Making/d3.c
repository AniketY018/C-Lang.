#include<stdio.h>

void checkevenodd(int num)
{
    if (num % 2 == 0)
        printf("%d is Even ", num);
    else
        printf("%d is Odd ", num);
}

int main()
{
    int number = 114;

    checkevenodd(number);

    return 0;
}