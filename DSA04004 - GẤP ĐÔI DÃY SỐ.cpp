#include <bits/stdc++.h>
#define ll long long
#define mod 123456789
using namespace std;

ll find(ll n, ll k){
    ll mid = (1ll<< (n-1));
    if (k == mid) return n;
    if (k < mid) return find(n-1,k);
    return find(n-1,k-mid);
}

int main() {
    int t; cin >> t;
    while (t--){
        ll n,k; cin >> n >> k;
        cout << find(n,k) << endl;
    }
}
