#include <iostream>
#include <string>
#define ll long long
#define double long double
#define FIXED(x)          cout << fixed << setprecision(x)
using namespace std;

struct sepeda
{
    string merk;
    string type;
    ll tahun;
    double harga;
};

struct sepeda spd;

int main(){
    spd;
    cout << "merek : ";cin >> spd.merk;
    cin.ignore();
    cout << "type : ";getline(cin, spd.type);
    cout << "tahun pembuatan : "; cin >> spd.tahun;
    cout << "harga : "; cin >> spd.harga;

    cout << "keluaran\n";
    cout << "merk : " << spd.merk << endl;
    cout << "type : " << spd.type << endl;
    cout << "tahun pembuatan : " << spd.tahun << endl;
    cout << "harga : " << spd.harga << endl;
    return 0;
}