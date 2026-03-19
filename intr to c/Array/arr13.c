// sum of all elements from the array ?

#include<stdio.h>
int main ()
{
    int a[5]= {1,2,3,4,5};
    int sum = 0;

    for (int i=0; i<5; i++) // Loop runs 5 times to access every array element.
    {
        sum = sum + a[i];
    }
    printf("sum of array is %d",sum);
}