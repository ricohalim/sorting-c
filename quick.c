#include <stdio.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Pilih pivot (elemen terakhir)
    int i = low - 1;
    printf("\nPivot: %d\n", pivot); // Menampilkan pivot

    for (int j = low; j < high; j++) {
        printf("Membandingkan %d dan %d\n", arr[j], pivot); // Proses perbandingan
        if (arr[j] <= pivot) {
            i++;
            // Tukar arr[i] dengan arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            printf("Tukar %d dan %d\n", arr[i], arr[j]); // Menampilkan pertukaran
        }
    }
    // Tukar pivot dengan elemen di i+1
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    printf("Tukar pivot %d dan %d\n", arr[i + 1], arr[high]); // Menampilkan pertukaran pivot

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Partisi array
        quickSort(arr, low, pi - 1);  // Urutkan subarray kiri
        quickSort(arr, pi + 1, high); // Urutkan subarray kanan
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

    quickSort(arr, 0, n - 1); // Proses Quick Sort

    printf("\nFinal Sorted Array:\n");
    printArray(arr, n); // Menampilkan array setelah sorting
    return 0;
}
