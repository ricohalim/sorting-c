#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {  // Outer loop untuk setiap elemen setelah indeks pertama
        printf("\nIterasi %d: \n", i); // Menampilkan iterasi
        int key = arr[i];  // Elemen yang akan disisipkan
        int j = i - 1;

        printf("Menyisipkan %d\n", key);  // Menampilkan elemen yang disisipkan

        // Geser elemen yang lebih besar ke kanan
        while (j >= 0 && arr[j] > key) {
            printf("Membandingkan %d dan %d: Geser %d ke kanan\n", arr[j], key, arr[j]);  // Proses perbandingan
            arr[j + 1] = arr[j];  // Geser elemen
            j = j - 1;
        }
        
        // Sisipkan key pada posisi yang benar
        arr[j + 1] = key;

        // Menampilkan status array setelah sisipkan elemen
        printf("Array setelah iterasi: ");
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
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

    insertionSort(arr, n); // Proses Insertion Sort

    printf("\nFinal Sorted Array:\n");
    printArray(arr, n); // Menampilkan array setelah sorting
    return 0;
}
