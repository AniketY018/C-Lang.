// finding smallest element from the array using pointer

#include<stdio.h>
int main ()
{
    int arr[5] = {4,5,7,8,9};
    int *ptr = arr;

    int min = *ptr;
    for (int i=0; i<5; i++)

    {
        if(min >*(ptr+i))
        {
            min =*(ptr+i);
        }
    }
    printf("%d",min);
}