#include<stdio.h>

int main (){
    int a;
    int b;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(operator){

        case '+':
        printf("addition = %d", a+b);
        break;

        case '-':
        printf("subtraction = %d", a-b);
        break;

        case '*':
        printf("multiplication = %d", a*b);
        break;

        case '/':
        printf("division = %d", a/b);
        break;
    }
}