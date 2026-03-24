// How poniter goes forward and comes backward

#include<stdio.h>
int main ()

{
    int arr [5] = {4,5,7,8,9};
    int *ptr = arr + 4 ;
    for (int i=5; i>0; i--)
    {
        printf("%d ",*ptr);
        ptr--;
    }
    printf("%d ",&arr + 4);
    printf("%d ",ptr);
}