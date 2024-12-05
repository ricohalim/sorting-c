#include <stdio.h>

// Function to swap two elements
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Recursive function to perform selection sort
void selectionSortRecursive(int arr[], int n, int index) {
    // Base case: If the array is fully sorted
    if (index == n)
        return;

    // Find the minimum element in the unsorted part of the array
    int minIndex = index;
    for (int j = index + 1; j < n; j++) {
        if (arr[j] < arr[minIndex])
            minIndex = j;
    }

    // Swap the found minimum element with the first element
    swap(&arr[minIndex], &arr[index]);

    // Print the array after each iteration
    printf("Array after iteration %d: ", index + 1);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Recursively call the function for the remaining part of the array
    selectionSortRecursive(arr, n, index + 1);
}

int main() {
    int arr[] = {14,6,23,18,7,47,2,83,16,38};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSortRecursive(arr, n, 0);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}