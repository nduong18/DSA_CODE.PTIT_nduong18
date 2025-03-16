#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

int main() {
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n], b[n-1];
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n-1; i++) cin >> b[i];

        for (ll i = 0; i < n; i++){
            if (a[i] != b[i]){
                cout << i+1 << endl;
                break;
            }
        }
    }
}
