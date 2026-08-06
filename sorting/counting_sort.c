
#include <stdio.h>

void countingSort(int arr[], int n)
{
    int max = arr[0];

    // Find the maximum element
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    int count[max + 1];

    // Initialize count array
    for(int i = 0; i <= max; i++)
        count[i] = 0;

    // Count frequency of each element
    for(int i = 0; i < n; i++)
        count[arr[i]]++;

    // Store sorted elements back into array
    int index = 0;
    for(int i = 0; i <= max; i++)
    {
        while(count[i] > 0)
        {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    countingSort(arr, n);

    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
