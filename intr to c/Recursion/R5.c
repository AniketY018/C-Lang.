#include<stdio.h>

void even(int n)
{
    if(n == 0)
    {
        return;
    }

    if(n % 2 == 0)
    {
        printf("%d ", n);
    }

    even(n - 2);
}

int main()
{
    even(50);
    return 0;
}