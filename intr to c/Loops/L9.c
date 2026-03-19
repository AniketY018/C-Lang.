#include <stdio.h>

int main ()
{
    int n = 15;
    int first = 0;
    int second = 1;
    int next;
    int i = 1;

    while (i<=n)
    {
      printf("%d ", first);

      next = first + second;
      first = second;
      second = next;

      i++;
    } 
}