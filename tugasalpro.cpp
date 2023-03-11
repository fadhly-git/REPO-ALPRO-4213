#include  <iostream>

using namespace std;

int sumData(int num1, int num2){
    int sum = 0;
    sum = num1 + num2;
    return sum;
}
int subtraction(int num1, int num2){
    int sub = 0;
    sub = num1 - num2;
    return  sub;
}

int sumarr(int arrec[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arrec[i];
    }
    return sum;
}

float arawrr(int arrec[], int n){
    float sum = 0;
    float rata = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arrec[i];
    }
    rata = sum/n;
    return rata;
}


int main()
{
    char lagi = 'y';
    while (lagi == 'y')
    {
        cout << "1. penjumlahan 2 bilangan\n2. pengurangan 2 bilangan\n3. menghitung jumlah array\n4. menghitung rata-rata  array\n" ;
        int pilih;
        std::cout << "pilih ->" ;
        cin >> pilih;
        if (pilih == 1){
            int num1, num2;
            cout << "Masukan angka pertama-> ";
            cin >> num1;
            cout << "masukan angka kedua -> ";
            cin >> num2;
            int sum = sumData(num1, num2);
            cout << "jumlah nya adalah => " << sum << endl;
        }
        else if (pilih == 2)
        {
            int num1,num2;
            cout << "Masukan Angka pertama ->";
            cin >>num1 ;
            cout << "Masukan angka kedua -> ";
            cin >> num2;
            int sub = subtraction(num1, num2);
            cout << "hasil pengurangan -> " << sub << endl;
        }
        else if (pilih == 3)
        {
            int n = 0;
            cout << "jumlah data array -> ";
            cin >> n;
            int rawr[n-1];
            for (int i = 0; i < n; i++)
            {
                cout << "Masukan angka ke " << i+1 << " -> ";
                cin >> rawr[i];
            }
            int sumrawr =  sumarr(rawr, n);
            cout << "hasil sumrawr -> " << sumrawr << endl;
        }else if (pilih == 4)
        {
            int n = 0;
            cout << "jumlah data array -> ";
            cin >> n;
            int rawrr[n-1];
            for (int i = 0; i < n; i++){
                cout << "Masukan angka ke"<< i+1 << "-> ";
                cin >> rawrr[i];
            }
            float ratarawr =  arawrr(rawrr, n);
            std::cout << "rata-rata rawr -> " << ratarawr << endl;
        }
        
    cout << "ulangi? (y/t)=>";
    cin >> lagi;
    }
}
