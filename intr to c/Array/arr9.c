// add any number at any index in given array

#include<stdio.h>
int main ()
{
    int arr[6]={1,2,3,4,5,6};
    int index = 0;
    int ele = 99;
    for (int i=5; i>=index; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=ele;
    for (int i=0; i<6; i++)
    {
        printf("%d ", arr[i]);
    }
}