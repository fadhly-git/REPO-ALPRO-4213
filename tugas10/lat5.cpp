#include <iostream>
#include <cmath>
#include <string>

#define _flush            endl
#define ll                long long
#define double            long double
#define FIXED(x)          cout << fixed << setprecision(x)

using namespace std;
struct sepeda
{
    string merk;
    string type;
    ll tahun;
    double harga;
};
int main(){
    sepeda* spdptr = new sepeda;
    cout << "merk\t: ";cin >> spdptr->merk;
    cout << "merek\t: ";cin >> spdptr->merk;
    cin.ignore();
    cout << "type\t: ";getline(cin, spdptr->type);
    cout << "tahun pembuatan : "; cin >> spdptr->tahun;
    cout << "harga\t: "; cin >> spdptr->harga;

    cout << "keluaran\n";
    cout << "merk : " << spdptr->merk << endl;
    cout << "type : " << spdptr->type << endl;
    cout << "tahun pembuatan : " << spdptr->tahun << endl;
    cout << "harga : " << spdptr->harga << endl;
    return 0;
}