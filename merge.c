#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    printf("\nMerging: \n");

    while (i < n1 && j < n2) {
        printf("Membandingkan %d dan %d\n", L[i], R[j]); // Proses perbandingan
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Menyalin elemen yang tersisa
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Menampilkan array setelah merge
    printf("Array setelah merge: ");
    for (int m = left; m <= right; m++) {
        printf("%d ", arr[m]);
    }
    printf("\n");
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);    // Urutkan bagian kiri
        mergeSort(arr, mid + 1, right); // Urutkan bagian kanan
        merge(arr, left, mid, right);   // Gabungkan hasilnya
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array:\n");
    printArray(arr, n); // Menampilkan array awal

    mergeSort(arr, 0, n - 1); // Proses Merge Sort

    printf("\nFinal Sorted Array:\n");
    printArray(arr, n); // Menampilkan array setelah sorting
    return 0;
}
