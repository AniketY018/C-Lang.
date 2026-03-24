// array merge

#include<stdio.h>
int main ()
{
    int arr [5] = {4,5,7,8,9};
    int b[5] = {11,22,33,44,55};
    int *ptr = arr;
    int *ptr2 = b;
    int c[10];
    int *res = c;

    for (int i=0; i<5; i++)
    {
        *res = *ptr;
        ptr++;
        res++;
    }

    for (int i=0; i<5; i++)
    {
        *ptr = *ptr2;
        res++;
        ptr2++;
    }

    for (int j=0; j<10; j++)
    {
        printf("%d ",*res);
        res++;
    }

    
}