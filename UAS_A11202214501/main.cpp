//diketahui struct data mahasiswa : nama, nim,arr nilai
//a. proc mencetak data -
//b. proc swap dengan pointer
//c fungsi sum dengan rekursif
//d. sort menggunakan rek dan pointer
/*
nama : fadhly rozaq
nim : A11.2022.14501
kelp : A11.4213
*/

#include <iostream>
#include <cmath>
#include <string>

#define _flush            endl
#define ll                long long
#define double            long double
#define FIXED(x)          cout << fixed << setprecision(x)

using namespace std;

struct mahasiswa
{
    string nama;
    string nim;
    ll score[5];
    
    void printData() {
        cout << "\nnama: "<< nama << "\n"; cout << "nim: " << nim << "\n";
        for (size_t i = 0; i < 5; ++i)
            cout << "nilai "<< i <<":" << score[i] << "\n";
    }
    void swapScore(ll *a, ll *b){
        ll temp = *a;
        *a = *b;
        *b = temp;
    }

    ll sumScore(ll arr[], ll n){
        if(n == 0)
            return 0;
        else
            return arr[n - 1] + sumScore(arr, n - 1);
    }



    void buuble_sort(ll arr[],ll n){
        //basis
        if (n <=1)
            return ;
        //lakukan iterasi untuk memindahkan elemnt terbsear ke akhir
        for(ll i = 0; i < n-1; ++i){
            if(arr[i] > arr[i+1])
                swapScore(&arr[i], &arr[i+1]);
        }
        //pemangilan arwah
        buuble_sort(arr, n-1);
    }
};

int main()
{
    cout << "Program data mahasiswa" << _flush;
    //declare ml
    mahasiswa m1 = {"fadhly rozaq", "A11.2022.14501",{90, 91, 99, 75, 80}};
    cout << "\nbefore swap" << _flush;
    m1.printData();

    //after swap first and last element 
    cout << "\nafter swap" << _flush;
    m1.swapScore(&m1.score[0], &m1.score[4]);
    m1.printData();

    //average
    ll n = sizeof(m1.score)/sizeof(m1.score[0]);
    cout << "\nnilai rata-rata: " << m1.sumScore(m1.score, n)/n << _flush;
    cout << "\ndata sebelum di sorting";
    m1.printData();

    m1.buuble_sort(m1.score, n);
    cout << "\ndata setelah di sorting";
    m1.printData();
    return 0;
}
