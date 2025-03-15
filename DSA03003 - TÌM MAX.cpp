#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

int main() {
    int t; cin >> t;
    while (t--)
    {
        ll n; cin >> n;
        ll a[n]; 
        for (ll &i : a) cin >> i;
        sort(a,a+n);
        ll x = 0;
        for (ll i = 0; i < n; i++){
            x += a[i]*i;
            x %= mod;
        }
        cout << x << endl;
    }
}
