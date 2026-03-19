// Comparing the elements of the array by taking 2 arrays ?

#include<stdio.h>
int main ()
{
    int f=1;
    int a[7]={1,2,4,2,5,2,2};
    int b[7]={1,2,4,2,6,2,2};

    for(int i = 0; i < 7; i++) // This loop checks each element of both arrays
    {
        if (a[i] !=b[i])
    {
        f=0;  // array are different 
        break; // loop stops 
    }

}
if (f==1) // if (f=1) array are same and if (f=0) then program goes to else block.
{
    printf("both array are same");
}
else
{
    printf("both array are different");
 }
}
   