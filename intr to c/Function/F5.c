#include<stdio.h>

void checkNumber(int num)
{
    int i;
    int count = 0;
    int original = num;
    int remainder;
    int sum = 0;

    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
            count++;
    }

    while(num > 0)
    {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }

    if(count == 2 && sum == original)
        printf("%d is both Prime and Armstrong\n", original);
    else
        printf("%d is NOT both Prime and Armstrong\n", original);
}

int main()
{
    int number = 2;

    checkNumber(number);

    return 0;
}