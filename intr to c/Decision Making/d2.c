#include<stdio.h>

int main ()
{
    int num = 81;
    int sq = num * num;
    int d = 1;

    while (d <= num)
    {
        d = d * 10;
    }

    d = d / 10;

    if (sq % d == num)
    {
        printf("%d is an automorphic number", num);
    }
    else
    {
        printf("%d is not an automorphic number", num);
    }

    return 0;
}