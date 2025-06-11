#include <stdio.h>

void quicksort(int[], int, int);
int partition(int[], int, int);

int main()
{
    int arr[10] = {6, 3, 8, 1, 4, 9, 2, 7, 5, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;

    printf("Unsorted array: \n");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    quicksort(arr, 0, n-1);

    printf("\nSorted array: \n");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void quicksort(int arr[], int left, int right)
{
    if(left < right) {
        int pivot_index = partition(arr, left, right);
        quicksort(arr, left, pivot_index - 1);
        quicksort(arr, pivot_index + 1, right);
    }
}

int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;
    int j, temp;

    for(j=left; j<=right-1; j++) {
        if(arr[j] < pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i+1];
    arr[i+1] = arr[right];
    arr[right] = temp;

    return i+1;
}

