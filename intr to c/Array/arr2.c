// update the element from the  while taking input from user

#include<stdio.h>
int main ()
{
    int arr[5]={12,34,1,8,23};
     // printf("%d ", arr[i]);

     // Update variable
    //  arr[0]=99;
     int index, ele;
     printf("enter the index that u want to change :- ");
     scanf("%d", &index);

      printf("enter the element that u want to store :- ");
     scanf("%d", &ele);

     arr[index] = ele;

    for (int i = 0; i < 5; i++)
    {
         printf("%d ", arr[i]);
    }
       
}