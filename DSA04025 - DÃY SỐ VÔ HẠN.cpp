#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

//1 1
//1 0

struct Matrix
{
    ll f[2][2];
};

Matrix operator * (Matrix a, Matrix b){
    Matrix c = {0};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 2; k++)
                c.f[i][j] = (c.f[i][j] + a.f[i][k] * b.f[k][j]) % mod;
    return c;
}

Matrix powMod (Matrix a, int n){
    if (n == 1) return a;
    Matrix x = powMod(a,n/2);
    if (n % 2 == 0) return x*x;
    return a*x*x;
}

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        Matrix a;
        a.f[0][0] = a.f[0][1] = a.f[1][0] = 1;
        a.f[1][1] = 0;
        Matrix res = powMod(a,n);
        cout << res.f[0][1] << endl;
    }
}
