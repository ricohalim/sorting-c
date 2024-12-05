#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) { // Outer loop untuk setiap iterasi
        printf("\nIterasi %d: \n", i + 1); // Menampilkan iterasi
        for (int j = 0; j < n-i-1; j++) { // Inner loop untuk membandingkan elemen bertetangga
            printf("Membandingkan %d dan %d\n", arr[j], arr[j+1]); // Proses perbandingan

            if (arr[j] > arr[j+1]) { // Jika elemen lebih besar, tukar
                printf("Tukar %d dan %d\n", arr[j], arr[j+1]); // Menampilkan pertukaran
                int temp = arr[j];
                
                arr[j] = arr[j+1];
                
                arr[j+1] = temp;
                
            }

            // Menampilkan status array setelah setiap perbandingan
            printf("Array setelah perbandingan: ");
            for (int k = 0; k < n; k++) {
                printf("%d ", arr[k]);
            }
            printf("\n");  // Line break antar perbandingan
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {14,6,23,18,7,47,2,83,16,38};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array:\n");
    printArray(arr, n); // Menampilkan array awal

    bubbleSort(arr, n); // Proses Bubble Sort

    printf("\nFinal Sorted Array:\n");
    printArray(arr, n); // Menampilkan array setelah sorting
    return 0;
}
