#include<stdio.h>
int main ()
{
    int arr [6] = {1,2,3,4,5};
    // int *ptr = arr;
    int index = 2;
        int *ptr = arr + index;
    for (int i = index; i<6; i++)
    {
        *ptr = *(ptr+1);
        ptr++;
    }
      for (int i=0; i<6; i++)
      {
        printf("%d ",arr[i]);
      }
}