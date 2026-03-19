#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int n = 0;
    int choice, i, j, pos, ele, found;
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
        printf("\n8. Find Duplicate (Frequency)");
        printf("\n9. Search Element");
        printf("\n10. Sorting");
        printf("\n11. Stack (Push/Pop)");
        printf("\n12. Queue (Insert/Delete)");
        printf("\n0. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter size: ");
                scanf("%d", &n);

                printf("Enter elements:\n");
                for(i = 0; i < n; i++)
                    scanf("%d", &arr[i]);
                break;

            case 2:
                printf("Array: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                break;

            case 3: {
                int min = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] < min)
                        min = arr[i];

                printf("Smallest = %d", min);
                break;
            }

            case 4: {
                int max = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];

                printf("Largest = %d", max);
                break;
            }

            case 5:
                printf("Reversed Array: ");
                for(i = n-1; i >= 0; i--)
                    printf("%d ", arr[i]);
                break;

            case 6:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if(pos >= 0 && pos < n)
                {
                    for(i = pos; i < n-1; i++)
                        arr[i] = arr[i+1];
                    n--;
                }
                else
                    printf("Invalid position!");
                break;

            case 7:
                printf("Enter index: ");
                scanf("%d", &pos);

                printf("Enter new value: ");
                scanf("%d", &ele);

                if(pos >= 0 && pos < n)
                    arr[pos] = ele;
                else
                    printf("Invalid index!");
                break;

            case 8: {
                int count = 0;
                printf("Enter element to count: ");
                scanf("%d", &ele);

                for(i = 0; i < n; i++)
                    if(arr[i] == ele)
                        count++;

                printf("Frequency = %d", count);
                break;
            }

            case 9:
                printf("Enter element to search: ");
                scanf("%d", &ele);

                found = 0;
                for(i = 0; i < n; i++)
                {
                    if(arr[i] == ele)
                    {
                        printf("Found at index %d", i);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Not Found");
                break;

            case 10:
                for(i = 0; i < n-1; i++)
                {
                    for(j = i+1; j < n; j++)
                    {
                        if(arr[i] > arr[j])
                        {
                            int temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }

                printf("Sorted Array: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                break;

            case 11:
                printf("Push element: ");
                scanf("%d", &ele);

                arr[n++] = ele;

                printf("Stack: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);

                if(n > 0)
                {
                    printf("\nPopped: %d", arr[n-1]);
                    n--;
                }
                break;

            case 12:
                printf("Insert element: ");
                scanf("%d", &ele);

                arr[n++] = ele;

                printf("Queue: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);

                if(n > 0)
                {
                    printf("\nDeleted: %d", arr[0]);

                    for(i = 0; i < n-1; i++)
                        arr[i] = arr[i+1];

                    n--;
                }
                break;

            case 0:
                exit(0);

            default:
                printf("Wrong choice!");
        }

        printf("\nDo you want to continue (Y/N): ");
        scanf(" %c", &ch);

    } while(ch == 'y' || ch == 'Y');

    return 0;
}