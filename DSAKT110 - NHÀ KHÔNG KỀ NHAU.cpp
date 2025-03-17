#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

int main() {
    int t; cin >> t;
        while(t--){
        ll n; cin >> n;
        ll a[n], f[n];
        for (ll i = 0; i < n; i++) cin >> a[i];
        f[0] = a[0];
        if (n>1) f[1] = max(a[0],a[1]);
        for (ll i = 2; i < n; i++)
            f[i] = max(f[i-1], f[i-2]+a[i]);
        cout << *max_element(f,f+n) << endl;
    }
}
