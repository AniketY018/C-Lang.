#include <stdio.h>

int main()
{
    int arr[6] = {7, 8, 9, 10, 11, 12};
    int *ptr;
    int i;
    int flag = 0;

    ptr = arr;   // pointer to array

    for(i = 0; i < 6; i++)
    {
        if(*(ptr + i) == 10)
        {
            printf("Element 10 found at index = %d\n", i);
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}