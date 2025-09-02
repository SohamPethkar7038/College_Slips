#include <stdio.h>

// Function to perform selection sort on an array
void selectionSort(int arr[], int n) {
    int i, j,SmallIndex, temp;
    for (i = 0; i < n - 1; i++) {
        SmallIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[SmallIndex] > arr[j]) {
               SmallIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        temp = arr[SmallIndex];
        arr[SmallIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;

    // Get the size of the array from the user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Get array elements from the user
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform selection sort
    selectionSort(arr, n);

    // Display the sorted array
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
