#include<stdio.h>

void factorial(int num); 

int main()
{
    int num = 7;   

    factorial(num);   

}

void factorial(int num)   
{
    int i;
    int fact = 1;

    for(i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is %d ", num, fact);
}