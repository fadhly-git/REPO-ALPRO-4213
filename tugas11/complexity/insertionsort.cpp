//Algoritma Insertion Sort membagi array menjadi dua bagian, yaitu bagian terurut dan bagian tidak terurut. 
//Elemen-elemen dari bagian tidak terurut diambil satu per satu dan ditempatkan pada posisi yang tepat dalam bagian terurut.
#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
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

    insertionSort(arr, size);

    cout << "Array setelah pengurutan: ";
    printArray(arr, size);

    return 0;
}
/*
Kompleksitas Waktu Insertion Sort:

Terburuk: O(n^2) (n merupakan ukuran array)
Rata-rata: O(n^2)
Terbaik: O(n) (dalam kasus terbaik, ketika array sudah terurut)
*/
