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

typedef struct dataMhs
{
    string nim;
    string nama;
    string jurusan;
    ll tahunLulus;
}daMhs;


int main() {
    fastread();
    ll size;cout << "Enter the number of data: "; cin >> size;

    //alokasi memori dinamis untuk array of struct
    daMhs* dataArr = new daMhs[size];

    //mengisi data
    for (ll i = 0; i < size; i++)
    {
        cout << "Enter data for person " << i + 1 << ": " << _flush;
        cout << "NIM : \t";cin >> dataArr[i].nim;
        cout << "Nama : \t"; cin >> dataArr[i].nama;
        cout << "Jurusan : \t"; cin >> dataArr[i].jurusan;
        cout << "Tahun Lulus : \t";cin >> dataArr[i].tahunLulus;
    }

    for (ll i = 0; i < size; i++)
    {
        cout << "Data " << i+1 << ":" << endl;
        cout << "NIM: " << dataArr[i].nim << endl;
        cout << "Nama: " << dataArr[i].nama << endl;
        cout << "Jurusan: " << dataArr[i].jurusan << endl;
        cout << "Tahun Lulus: " << dataArr[i].tahunLulus << endl;
        cout << endl;
    }
    
    //delokasi memori seteleah selesai
    delete[] dataArr;
    return 0;
}