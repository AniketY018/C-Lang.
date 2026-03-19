// Swap two numbers (using third variable) 

#include<stdio.h>
int main ()
{
    int a = 10;
    int b = 20;
    int temp;

    printf("numbers before swapping: ");
        printf("a = %d, b = %d\n", a,b);

    temp=a;
    a=b;
    b=temp;

    printf("numbers after swapping: ");
        printf("a = %d, b = %d\n", a,b);

}