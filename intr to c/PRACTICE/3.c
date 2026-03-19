// Take two numbers as input and print their sum (take user input)

#include<stdio.h>
int main ()
{
    int a;
    int b;
    int sum;

    printf("enter the first number: ");
    scanf("%d",&a);  // & gives memory address of variable

     printf("enter the second number: ");
    scanf("%d",&b);

    sum = a + b ;

    printf("sum of the numbers = %d",sum);
    return 0;
}

 //Take two numbers as input and print their sum (without user input)

#include<stdio.h>
int main ()
{
    int a=12;
    int b=13;
    int sum;

    sum = a + b;

    printf("sum = %d", sum);
}