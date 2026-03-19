#include<stdio.h>

int main ()
{
    int i=10;

    do
    {
        if (i%2==1){
            printf("%d",i);
        }

        i--;

    } while(i>=1);
}