#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {  // Outer loop untuk iterasi
        printf("\nIterasi %d: \n", i + 1);  // Menampilkan iterasi
        int minIndex = i;  // Menyimpan indeks elemen terkecil
        for (int j = i+1; j < n; j++) {  // Inner loop untuk mencari elemen terkecil
            printf("Membandingkan %d dan %d\n", arr[j], arr[minIndex]); // Proses perbandingan
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Jika ditemukan yang lebih kecil, simpan indeksnya
            }
        }

        // Jika indeks yang ditemukan berbeda, tukar elemen
        if (minIndex != i) {
            printf("Tukar %d dan %d\n", arr[i], arr[minIndex]);  // Menampilkan pertukaran
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }

        // Menampilkan status array setelah pertukaran (jika ada)
        printf("Array setelah iterasi: ");
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");  // Line break antar iterasi
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

    selectionSort(arr, n); // Proses Selection Sort

    printf("\nFinal Sorted Array:\n");
    printArray(arr, n); // Menampilkan array setelah sorting
    return 0;
}
