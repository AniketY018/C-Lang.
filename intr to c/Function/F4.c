#include <stdio.h>

int factorial(int a)
{
    int i, fact = 1;

    for(i = 1; i <= a; i++)
    {
        fact = fact * i;
    }

    return fact;
}

void findFactors(int b)
{
    int i;

    printf("Factors of %d are:\n", b);

    for(i = 1; i <= b; i++)
    {
        if(b % i == 0)
        {
            printf("%d ", i);
        }
    }
}

int main()
{
    int number, result;

    printf("Enter the number: ");
    scanf("%d", &number);

    result = factorial(number);

    printf("Factorial of %d is %d\n", number, result);

    findFactors(result);

    return 0;
}