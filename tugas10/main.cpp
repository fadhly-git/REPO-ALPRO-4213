#include <bits/stdc++.h>
#define _flush            endl
#define lli               long long int
#define ll                long long
#define vi                vector<int>
#define vii               vector<lli>
#define vch               vector<char>
#define double            long double
#define vss               vector<string>
#define vpp(T1, T2)       vector<pair<T1, T2>>
#define pq                priority_queue // high prec.
#define pqq(T)            priority_queue<T, vector<T>, greater<T>>
#define pb                push_back
#define ppb 	           pop_back
#define mp                make_pair
#define Fi(p)             get<0>(p)
#define Sc(p)             get<1>(p)
#define sz(x)             int ((x).size())
#define all(x)            (x).begin(), (x).end()
#define scanv(x)          for(auto &i: x) cin >> i
#define bin_sc(a, x)      binary_search(all(a), x)
#define lbd(a, x)         lower_bound(all(a), x) // an iter.
#define ubd(a, x)         upper_bound(all(a), x) // an iter.
#define eq_seg(a, x)      equal_range(all(a), x) // a pair of lb, ub
#define minE(a)           (*min_element(all(a)))
#define maxE(a)           (*max_element(all(a)))
#define FIXED(x)          cout << fixed << setprecision(x)
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL))
using namespace std;

struct Data {
    string nim;
    string nama;
    string jurusan;
    int tahunLulus;
};

int main() {
    int size;
    cout << "Enter the number of data: ";
    cin >> size;

    // Alokasi memori dinamis untuk array of structure
    Data* dataArr = new Data[size];

    // Mengisi data ke dalam array of structure
    for (int i = 0; i < size; i++) {
        cout << "Enter data for person " << i+1 << ":" << endl;
        cin.ignore();  // Mengabaikan karakter newline dalam input sebelumnya
        cout << "NIM: ";
        getline(cin, dataArr[i].nim);
        cout << "Nama: ";
        getline(cin, dataArr[i].nama);
        cout << "Jurusan: ";
        getline(cin, dataArr[i].jurusan);
        cout << "Tahun Lulus: ";
        cin >> dataArr[i].tahunLulus;
        cout << endl;
    }

    // Mencetak data dari array of structure
    for (int i = 0; i < size; i++) {
        cout << "Data " << i+1 << ":" << endl;
        cout << "NIM: " << dataArr[i].nim << endl;
        cout << "Nama: " << dataArr[i].nama << endl;
        cout << "Jurusan: " << dataArr[i].jurusan << endl;
        cout << "Tahun Lulus: " << dataArr[i].tahunLulus << endl;
        cout << endl;
    }

    // Dealokasi memori setelah selesai menggunakan array of structure
    delete[] dataArr;

    return 0;
}