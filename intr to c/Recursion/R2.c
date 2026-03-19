#include<stdio.h>   

int sum;

int fib(int n)
{
    if(n > 10)
    {
        return 0;
    }
    else
    {
        sum = n + fib(n+1);
    }

    return sum;
}

int main()
{
    int s = fib(1);
    printf("%d", s);
}