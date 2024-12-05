#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSortRecursive(int arr[], int n) {
    if (n == 1) {
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        printf("Comparing %d and %d\n", arr[i], arr[i + 1]);
        if (arr[i] > arr[i + 1]) {
            printf("swap %d and %d\n", arr[i], arr[i+1]);
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    bubbleSortRecursive(arr, n - 1);
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, n);

    bubbleSortRecursive(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}