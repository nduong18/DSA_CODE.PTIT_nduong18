#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

int n;

struct Matrix
{
    ll f[12][12];
};

Matrix operator * (Matrix a, Matrix b){
    Matrix c = {0};
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                for (int k = 0; k < n; k++)
                    c.f[i][j] = (c.f[i][j] + a.f[i][k] * b.f[k][j]) % mod;
    return c;
}

Matrix powMod (Matrix a, ll n){
    if (n == 1) return a;
    Matrix x = powMod(a,n/2);
    return (n % 2 == 0) ? x*x : a*x*x;
}

int main() {
    int t; cin >> t;
    while (t--){
        int k; cin >> n >> k;
        Matrix a;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a.f[i][j];

        Matrix res = powMod(a,k);

        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cout << res.f[i][j] << ' ';
            }
            cout << endl;
        }
    }
}
