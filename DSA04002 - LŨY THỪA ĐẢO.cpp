#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll power (ll a, ll n){
    if (n == 0) return 1;
    ll x = power(a,n/2);
    x = (x*x)%mod;
    return (n % 2 == 0) ? x : (a*x)%mod;
}

ll rev (ll n){
    ll tmp = 0;
    while (n > 0){
        tmp = tmp*10 + n%10;
        n /= 10;
    }
    return tmp;
}

int main() {
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        ll k = rev(n);
        cout << power(n,k) << endl;
    }
}
