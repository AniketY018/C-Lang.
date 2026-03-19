// Finding frequency of a element from the given array ?

#include<stdio.h>
int main ()
{
   int arr[7]={1,2,4,2,6,2,2};
    int num=2;
    int count=0;
    for(int i = 0; i < 7; i++)
    {
        if(arr[i]==2 )
        {
            count++;
        }
    
    }
    printf ("2 find %d times",count);

}
   