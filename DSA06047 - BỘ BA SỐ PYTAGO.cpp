#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(ll a[], ll n){
    for (ll i = 0; i < n-2; i++){
            for (ll j = i+1; j < n-1; j++){
                ll c = a[i] + a[j];
                if (binary_search(a,a+n,c)){
                    return true;
                }
            }
        }
        return false;
}

int main(){
    int t; cin >> t;
    while (t--){
        ll n; cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++){
            cin >> a[i];
            a[i] = a[i] * a[i];
        }
        sort(a,a+n);
        if (check(a,n)) cout << "YES\n";
        else cout << "NO\n";
    }
}
