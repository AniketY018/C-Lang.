#include<stdio.h>

int main ()
{
    int arr [10] = {7,8,9,10,11,12};
     int even[10], odd[10];
    int *ptr;
    int i, e = 0, o = 0;

    ptr = arr;   // pointer to array

    for(i = 0; i < 6; i++)
    {
        if(*(ptr + i) % 2 == 0)
        {
            even[e] = *(ptr + i);
            e++;
        }
        else
        {
            odd[o] = *(ptr + i);
            o++;
        }
    }

    // Print even elements
    printf("Even elements are: ");
    for(i = 0; i < e; i++)
    {
        printf("%d ", even[i]);
    }

    // Print odd elements
    printf("\nOdd elements are: ");
    for(i = 0; i < o; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}
