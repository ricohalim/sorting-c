#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][20], int n) {
    for (int i = 0; i < n-1; i++) { // Outer loop untuk setiap iterasi
        printf("\nIterasi %d: \n", i + 1); // Menampilkan iterasi
        for (int j = 0; j < n-i-1; j++) { // Inner loop untuk membandingkan elemen bertetangga
            printf("Membandingkan %s dan %s\n", arr[j], arr[j+1]); // Proses perbandingan

            if (strcmp(arr[j], arr[j+1]) > 0) { // Jika elemen lebih besar secara leksikografis, tukar
                printf("Tukar %s dan %s\n", arr[j], arr[j+1]); // Menampilkan pertukaran
                char temp[20];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }

            // Menampilkan status array setelah setiap perbandingan
            printf("Array setelah perbandingan: ");
            for (int k = 0; k < n; k++) {
                printf("%s ", arr[k]);
            }
            printf("\n\n");  // Line break antar perbandingan
        }
    }
}

void printArray(char arr[][20], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main() {
    char arr[][20] = {
        "Ali", "Ani", "Tono", "Bayu", "Amir", 
        "Ani", "Budi", "Tini", "Ucok", "Paijo"
    };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array:\n");
    printArray(arr, n); // Menampilkan array awal

    bubbleSort(arr, n); // Proses Bubble Sort

    printf("\nFinal Sorted Array:\n");
    printArray(arr, n); // Menampilkan array setelah sorting
    return 0;
}