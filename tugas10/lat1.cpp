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

const double phi = 3.14159265358979323846;

struct lat1
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
};
struct lat1 all;

int main() {
    fastread();
    all;
    cin >> all.p >> all.l;
    double luasPsgPjng = all.luas();
    cout << "Luas persegi panjang : " << luasPsgPjng << _flush;
    
    cin >> all.r;
    double luasLingkaran = all.lingkaran();
    cout << "Luas lingkaran : " << luasLingkaran << _flush;

    cin >> all.r >> all.t;
    double volumeKerucut = all.volumKer();
    cout << "Volume kerucut : " << volumeKerucut << _flush;

    cin >> all.r;
    double volumeBola = all.volumBola();
    cout << "Volume bola : " << volumeBola << _flush;
    return 0;
}