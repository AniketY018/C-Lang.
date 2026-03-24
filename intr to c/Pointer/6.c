// update array 

#include<stdio.h>
int main ()
{
    int arr [5] = {4,5,7,8,9};
    int *ptr = arr;

    *(ptr+2) = 99;

    for (int i=0; i<5; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
}