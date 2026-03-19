#include<stdio.h>
int main ()

{   
    int num=3;
    int arr[6]={9,7,12,15,19}
    for (int i=0;i<5;i++)
   if (arr[i]==num)
   {
    for (j=i;j<5;j+1)
    {
        arr[j]=arr[j+1]
    }
   }
}
for (int i=0; i<4; i++)
{
    printf("%d", a[i]);
}