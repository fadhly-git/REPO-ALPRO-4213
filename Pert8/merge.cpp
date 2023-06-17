#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l,int r);
void print(int A[], int size);

int main() {
    //int n;
    //cout << "Enter the number of elements: ";
    //cin >> n;
    //int arr[n];
    //for(int i = 0; i < n; i++){
    //    cout << "masukan nilai array -> ";cin >> arr[i];
    //}
    int arr[]={6,7,4,3,2};
    int n= sizeof(A)/sizeof(A[0]);
    cout << "array sebelum di urutkan :\n";
    print(arr,n);

    mergeSort(arr, 0, n - 1);
    print(arr, n);
    return 0;
}

void merge(int arr[], int left, int mid, int right){
    int i,j,k;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1],R[n2];
    for (i = 0; i < n1; i++){
        L[i] = arr[left + i];
    }
    for (j = 0; j < n2; j++){
        R[j] = arr[mid + 1 + j];
    }
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] >= R[j])
        {
            arr[k] =  L[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right){
    if (left < right){
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void print(int A[], int size){
    for(int i = 0; i < size; i++){
        cout << A[i] << " ";
    }
    cout << "\n";
}
