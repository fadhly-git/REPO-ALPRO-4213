#include <iostream>

using namespace std;

bool isGanjil(int n);
void minEven(int arr[], int n);
int main(){
    int A[]={6,7,4,3,2};
    int n= sizeof(A)/sizeof(A[0]);
    minEven(A, n);
    return 0;
}
void minEven(int arr[], int n){
    int min = arr[0];
    int idx = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] <= min && !isGanjil(arr[i])){
            min = arr[i];
            idx = i;
        }
    }
    cout << "\nnilai genap terkecil adalah -> " << min << "\ndengan index -> "<< idx << endl;
}
bool isGanjil(int n){
    if(n % 2 != 0){
        return true;
    }else{
        return false;
    }
}
