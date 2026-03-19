// finding frequency of each element in the array ?

#include<stdio.h>
int main ()
{
   int arr[7]={1,2,4,2,6,2,2};
    int num=2;

    for(int i = 0; i < 7; i++) // This loop selects one element at a time from the array
    {
        int count=0; // Every time the outer loop runs, count resets to 0.
        for(int j = 0; j < 7; j++) // Compare arr[i] with every element in the array.
          
    
    {
        if(arr[i]==arr[j] )
        {
            count++;
        }
    
    }
    printf ("%d element find %d times\n",arr[i],count);

}
}
   