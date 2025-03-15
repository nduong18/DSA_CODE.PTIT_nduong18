#include <bits/stdc++.h>
#define ll long long
#define mod 123456789
using namespace std;

//2 ^ (n-1)

ll power (ll n){
    if (n == 0) return 1;
    ll x = power(n/2);
    x = (x*x)%mod;
    return (n % 2 == 0) ? x : (2*x)%mod;
}

int main() {
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        cout << power(n-1) << endl;
    }
}
