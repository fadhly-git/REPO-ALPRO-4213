//Algoritma Bubble Sort membandingkan dan menukar pasangan elemen berturut-turut hingga seluruh array terurut
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Menukar elemen jika elemen saat ini lebih besar dari elemen berikutnya
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    bubbleSort(arr, size);

    cout << "Array setelah pengurutan: ";
    printArray(arr, size);

    return 0;
}
/*
Kompleksitas Waktu Bubble Sort:

Terburuk: O(n^2) (n merupakan ukuran array)
Rata-rata: O(n^2)
Terbaik: O(n) (dalam kasus terbaik, ketika array sudah terurut)
*/
