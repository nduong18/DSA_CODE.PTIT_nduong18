#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

ll findIdx (ll a[], ll n, ll x){
    ll l = 0, r = n-1, ans = -1;
    while(l <= r){
        ll mid = l+(r-l)/2;
        if (a[mid] <= x) {
            ans = mid;
            l = mid+1;
        } else {
            r = mid-1;
        }
    }
    return ans;
}

int main() {
    int t; cin >> t;
    while(t--){
        ll n,x; cin >> n >> x;
        ll a[n];
        for (ll i = 0; i < n; i++) cin >> a[i];

        ll z = findIdx(a,n,x);
        if (z == -1) cout << -1 << endl;
        else cout << z+1 << endl;

    }
}
