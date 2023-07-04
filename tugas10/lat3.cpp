#include <iostream>
#include <cmath>
#include <string>

#define _flush            endl
#define double            long double
using namespace std;

const double phi = 3.14159265358979323846;
typedef struct lat3
{
    double p, l, r, t;
    double luas(){
        return p * l;
    }
    double lingkaran(){
        return 22/7 * r * r;
    }
    double volumKer(){
        return 1/3 * phi * pow(r, 2) * t;
    }
    double volumBola(){
        return 4/3  * phi * pow(r, 3);
    }
}math;

int main(){
    math all;
    cout << "masukan panjang -> " << _flush;cin >> all.p;
    cout << "masukan lebar -> " << _flush; cin >> all.l;
    double luasPsgPjng = all.luas();
    cout << "Luas persegi panjang : " << luasPsgPjng << _flush;
    
    cout << "masukan jari jari -> ";cin >> all.r;
    double luasLingkaran = all.lingkaran();
    cout << "Luas lingkaran : " << luasLingkaran << _flush;

    all.r = 0;
    cout << "masukan jari jari kerucut -> "; cin >> all.r;
    cout << "masukan tinggi kerucut -> "; cin  >> all.t;
    double volumeKerucut = all.volumKer();
    cout << "Volume kerucut : " << volumeKerucut << _flush;

    all.r = 0;cout << "masukan jari jari bola -> ";cin >> all.r;
    double volumeBola = all.volumBola();
    cout << "Volume bola : " << volumeBola << _flush;
    return 0;
}