#include<stdio.h>

int main()
{
    int a[5];
    int sum = 0;

    printf("Enter 5 students marks :\n");

    for(int i = 0; i < 5; i++)
    {  
        printf("enter the %dth student marks :-  ", i+1 );
        scanf("%d", &a[i]);   // taking input
    }
     printf("students marks are");
    for(int i = 0; i < 5; i++)
    {
        sum = sum + a[i];     // adding each element
    }

    printf("= %d", sum);

    return 0;
}