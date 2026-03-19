#include <stdio.h>

void prime(int num){
    for (int i = 2; i < num; i++)
    {
        int f = 1;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                f = 0;
                break;
            }
        }

        if (f == 1)
        {
            printf("%d ", i);
        }
    }
}

int main ()
{
    prime (50);
}