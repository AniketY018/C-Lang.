#include<stdio.h>
#include<stdlib.h>

// Function declarations
void input(int arr[], int *n);
void display(int arr[], int n);
void smallest(int arr[], int n);
void largest(int arr[], int n);
void reverse(int arr[], int n);
void deleteElement(int arr[], int *n);
void update(int arr[], int n);
void frequency(int arr[], int n);
void search(int arr[], int n);
void sorting(int arr[], int n);
void stack(int arr[], int *n);
void queue(int arr[], int *n);

int main()
{
    int arr[100];
    int n = 0;
    int choice;
    char ch;

    do
    {
        printf("\n===== MENU =====");
        printf("\n1. Array Input");
        printf("\n2. Display");
        printf("\n3. Smallest Number");
        printf("\n4. Largest Number");
        printf("\n5. Reverse Array");
        printf("\n6. Delete Element");
        printf("\n7. Update Element");
        printf("\n8. Find Frequency");
        printf("\n9. Search Element");
        printf("\n10. Sorting");
        printf("\n11. Stack");
        printf("\n12. Queue");
        printf("\n0. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: input(arr, &n); break;
            case 2: display(arr, n); break;
            case 3: smallest(arr, n); break;
            case 4: largest(arr, n); break;
            case 5: reverse(arr, n); break;
            case 6: deleteElement(arr, &n); break;
            case 7: update(arr, n); break;
            case 8: frequency(arr, n); break;
            case 9: search(arr, n); break;
            case 10: sorting(arr, n); break;
            case 11: stack(arr, &n); break;
            case 12: queue(arr, &n); break;
            case 0: exit(0);
            default: printf("Wrong choice!");
        }

        printf("\nDo you want to continue (Y/N): ");
        scanf(" %c", &ch);

    } while(ch=='y' || ch=='Y');

    return 0;
}

// Function definitions

void input(int arr[], int *n)
{
    printf("Enter size: ");
    scanf("%d", n);

    printf("Enter elements:\n");
    for(int i=0;i<*n;i++)
        scanf("%d",&arr[i]);
}

void display(int arr[], int n)
{
    printf("Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}

void smallest(int arr[], int n)
{
    int min = arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]<min)
            min = arr[i];

    printf("Smallest = %d",min);
}

void largest(int arr[], int n)
{
    int max = arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]>max)
            max = arr[i];

    printf("Largest = %d",max);
}

void reverse(int arr[], int n)
{
    printf("Reversed Array: ");
    for(int i=n-1;i>=0;i--)
        printf("%d ",arr[i]);
}

void deleteElement(int arr[], int *n)
{
    int pos;
    printf("Enter position: ");
    scanf("%d",&pos);

    if(pos>=0 && pos<*n)
    {
        for(int i=pos;i<*n-1;i++)
            arr[i]=arr[i+1];
        (*n)--;
    }
    else
        printf("Invalid position!");
}

void update(int arr[], int n)
{
    int pos, ele;
    printf("Enter index: ");
    scanf("%d",&pos);

    printf("Enter new value: ");
    scanf("%d",&ele);

    if(pos>=0 && pos<n)
        arr[pos]=ele;
    else
        printf("Invalid index!");
}

void frequency(int arr[], int n)
{
    int ele, count=0;
    printf("Enter element: ");
    scanf("%d",&ele);

    for(int i=0;i<n;i++)
        if(arr[i]==ele)
            count++;

    printf("Frequency = %d",count);
}

void search(int arr[], int n)
{
    int ele, found=0;
    printf("Enter element: ");
    scanf("%d",&ele);

    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
        {
            printf("Found at index %d",i);
            found=1;
            break;
        }
    }

    if(found==0)
        printf("Not Found");
}

void sorting(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("Sorted Array: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}

void stack(int arr[], int *n)
{
    int ele;
    printf("Push element: ");
    scanf("%d",&ele);

    arr[(*n)++] = ele;

    printf("Stack: ");
    for(int i=0;i<*n;i++)
        printf("%d ",arr[i]);

    if(*n>0)
    {
        printf("\nPopped: %d",arr[*n-1]);
        (*n)--;
    }
}

void queue(int arr[], int *n)
{
    int ele;
    printf("Insert element: ");
    scanf("%d",&ele);

    arr[(*n)++] = ele;

    printf("Queue: ");
    for(int i=0;i<*n;i++)
        printf("%d ",arr[i]);

    if(*n>0)
    {
        printf("\nDeleted: %d",arr[0]);

        for(int i=0;i<*n-1;i++)
            arr[i]=arr[i+1];

        (*n)--;
    }
}