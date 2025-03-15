#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll power (ll n, ll k){
    if (k == 0) return 1;
    ll x = power(n,k/2);
    x = (x*x) % mod;
    return (k % 2 == 0) ? x : (n*x)%mod;
}

int main() {
    int t; cin >> t;
    while (t--){
        ll n,k; cin >> n >> k;
        cout << power(n,k) << endl;
    }
}
