#include<stdio.h>

int c;

void fib(int a, int b)
{
    int c = 0;

    if(c >= 13)
    {
        return;
    }
    else
    {
        c = a + b;
        printf("%d ", c);
        fib(b,c);
    }
}

int main ()
{
    fib(0,1);
}