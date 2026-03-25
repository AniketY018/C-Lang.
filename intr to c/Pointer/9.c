#include<stdio.h>
int main ()
 {
    int arr [6] = {1,2,3,4,5};
    int index = 2;
    int *s = arr;
    int m;
    for (int i = 0; i<6; i++)
    {
        if (4 == *(s+i))
        {
            m = i;
        }
    }
    int *ptr = arr + m;
    for (int i = m; i<6; i++)
    {
    {
        *ptr = *(ptr+1);
        ptr++;
    }
      for (int i=0; i<5; i++)
      {
        printf("%d ",arr[i]);
      }
}
 }
    