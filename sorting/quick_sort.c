
#include <stdio.h>

void quickSort(int ar[], int low, int high);
int partition(int ar[], int low, int high);
void swap(int *a, int *b);

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int ar[n];

    printf("Enter %d the elements: ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    quickSort(ar, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}

void quickSort(int ar[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(ar, low, high);

        quickSort(ar, low, pivot - 1);
        quickSort(ar, pivot + 1, high);
    }
}

int partition(int ar[], int low, int high)
{
    int pivot = ar[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (ar[j] < pivot)
        {
            i++;
            swap(&ar[i], &ar[j]);
        }
    }

    swap(&ar[i + 1], &ar[high]);

    return i + 1;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
