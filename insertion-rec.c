#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSortRecursive(int arr[], int n) {
    // Base case
    if (n <= 1) {
        return;
    }

    // Sort first n-1 elements
    insertionSortRecursive(arr, n - 1);

    // Insert last element at its correct position in sorted array
    int last = arr[n - 1];
    int j = n - 2;

    // Move elements of arr[0..n-1], that are greater than last, to one position ahead of their current position
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;

    // Print the array after each insertion
    printArray(arr, n);
}

int main() {
    int arr[] = {14,6,23,18,7,47,2,83,16,38};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    insertionSortRecursive(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}