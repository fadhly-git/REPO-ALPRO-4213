//Algoritma Quick Sort menggunakan pendekatan "divide and conquer" untuk membagi array menjadi subarray yang lebih kecil,
//dan kemudian mengurutkan subarray tersebut secara terpisah.
#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            // Menukar elemen jika elemen saat ini lebih kecil dari pivot
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Menukar pivot ke posisi yang tepat
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum pengurutan: ";
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    cout << "Array setelah pengurutan: ";
    printArray(arr, size);

    return 0;
}
/*
kompleksitas Waktu Quick Sort:

Terburuk: O(n^2) (n merupakan ukuran array)
Rata-rata: O(n log n)
Terbaik: O(n log n) (dalam kasus terbaik, ketika pivot selalu membagi array menjadi dua bagian yang sama)
*/
