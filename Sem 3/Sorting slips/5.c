#include <stdio.h>
void insertionSort(int arr[], int n) {
    int i, current, j;
    for (i = 1; i < n; i++) {
        current = arr[i];
        j = i - 1;

        while (j >= 0 &&  current<arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main() {
    int n;

    // Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare a fixed-size array
    int arr[n];

    // Get elements of the array from the user
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform insertion sort
    insertionSort(arr, n);

    // Display the sorted array
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
