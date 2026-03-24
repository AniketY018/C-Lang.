#include <stdio.h>

int main()
{
    int arr[5] = {4, 5, 7, 8, 9};
    int *ptr;
    int i, min, max;

    ptr = arr;   // pointer pointing to first element

    min = max = *ptr;  // initialize with first element

    for(i = 0; i < 5; i++)
    {
        if(*(ptr + i) < min)
        {
            min = *(ptr + i);
        }

        if(*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
    }

    printf("Smallest element = %d\n", min);
    printf("Largest element = %d\n", max);

    return 0;
}