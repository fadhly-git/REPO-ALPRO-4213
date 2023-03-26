#include <iostream>
using namespace std;

bool isEven (int x){
    if (x%2 == 0){
        return true;
    } else {
        return false;
    }
}

bool isOdd (int x){
    if (x%2 == 1){
        return true;
    } else {
        return false;
    }
}

bool isFactor (int x, int F){
    return x % F == 0;
}

int Max (int a, int b){
    return max(a,b);
}

int Min (int a, int b){
    return min(a,b);
}

int maxArray (int A[], int n){
    int max_Arr;
    for(int i = 0; i < n; i++){
        if(A[i] > max_Arr){
            max_Arr = A[i];
        }
    }
    return max_Arr;
}

int minArray (int A[], int n){
    int min_Arr = A[0];
    for(int i = 1; i < n; i++){
        if(A[i] < min_Arr){
            min_Arr = A[i];
        }
    }
    return min_Arr;
}

int SumEven (int A[], int n){
    int sum_Even = 0;
    for(int i = 0; i<n; i++){
        if(A[i]%2 == 0){
            sum_Even += A[i];
        }
    }
    return sum_Even;
}

int SumOdd (int A[], int n){
    int sum_Odd = 0;
    for(int i = 0; i<n; i++){
        if(A[i]%2 == 1){
            sum_Odd += A[i];
        }
    }
    return sum_Odd;
}

bool isFound (int A[], int n, int x){
    for (int i=0; i<n; i++){
        if(A[i] == x){
            return true;
        }
    }
    return false;
}

void Swap(int a, int b){
    int temp;
    temp = a;
    a=b;
    b=temp;
    cout << "Nilai a : " << a << endl << "Nilai b : " << b;
}

int main(){
    int pilih = 'y';
    do{
        cout << "== Menu ==" << endl;
        std::cout << "1. fungsi isEven" << std::endl;
        std::cout << "2. fungsi isOdd" << std::endl;
        std::cout << "3. fungsi isFactor" << std::endl;
        std::cout << "4. fungsi MaxMin" << std::endl;
        std::cout << "5. fungsi AllInArray" << std::endl;
        std::cout << "6. fungsi isFound" << std::endl;
        std::cout << "7. procedure Swapantigen" << std::endl;

        int pilihan;
        std::cout << "piiihhhh -> " << std::endl;
        cin >> pilihan;
        if (pilihan == 1)
        {
            int a;
            cout << "masukan angka";
            cin >> a;
            string genap =(isEven(a)==1)? " adalah bilangan genap " : " bukan bilangan genap (ganjil)";
            std::cout << a << genap << "\n" << std::endl;
        }
        else if (pilihan == 2)
        {
            int a;
            cout << "masukan angka";
            cin >> a;
            string ganjil = (isOdd(a)==1)? " adalah bilangan ganjil " : " bukan bilangan ganjil (genap)";
            std::cout << a << ganjil << "\n" << std::endl;
        }
        else if (pilihan == 3)
        {
            int a, fac;
            cout << "masukan angka : ";
            cin >> a;
            cout << "masukan factor : ";
            cin >> fac;
            string factr = (isFactor(a, fac)==1)?  " merupakan factor dari angka " : " bukan factor dari angka ";
            cout << fac << factr << a << "\n" << endl;
        }
        else if (pilihan == 4)
        {
            int a, b;
            cout << " masukan bilangan pertama : ";
            cin >> a;
            cout << " masukan bilangan kedua : ";
            cin >> b;
                cout << "Nilai maksimum diantara dua bilangan tersebut adalah : " << Max (a, b) << endl;
                cout << "Nilai minimum diantara dua bilangan tersebut adalah : " << Min (a, b) << "\n" << endl;
        }
        else if (pilihan == 5)
        {
            int n;
            cout << " masukan panjang array -> ";
            cin >> n;
            int A[n];
            for (int i=0; i<n; i++){
                cout << "Masukkan nilai array ke-" << i << " : ";
                cin >> A[i];
            }
            int max_Arr = maxArray (A, n);
            cout << "Nilai maksimum dari array adalah : " << max_Arr << endl;
            int min_Arr = minArray (A, n);
            cout << "Nilai minimum dari array adalah : " << min_Arr << endl;
            int sum_Even = SumEven(A, n);
            cout << "Jumlah bilangan genap dari array adalah : " << sum_Even << endl;
            int sum_Odd = SumOdd (A, n);
            cout << "Jumlah bilangan ganjil dari array adalah : " << sum_Odd << "\n" << endl;
        }
        else if (pilihan == 6)
        {
            int n;
            cout << "masukan panjang array -> ";
            cin >> n;
            int x;
            int A[n];
            for (int i=0; i<n; i++){
                cout << "Masukkan nilai array ke-" << i << " : ";
                cin >> A[i];
            }
            cout << "Masukkan nilai yang dicari : " ;
            cin >> x;
            string Cari = (isFound(A,n,x)==1)? "Nilai ditemukan" : "Nilai tidak ditemukan";
            cout << Cari << "\n" << endl;
        }
        else if (pilihan == 7)
        {
            int a, b;
            cout << "//Prosedur Swap//" << endl;
            cout << "Masukkan nilai a : ";
            cin >> a;
            cout << "Masukkan nilai b : ";
            cin >> b;
            Swap(a, b);
        }
        else 
        {
            break;
        }
    } while (pilih == 'y');
    return 0;
}

