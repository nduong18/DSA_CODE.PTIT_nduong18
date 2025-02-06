#include <bits/stdc++.h>
#define ll long long
using namespace std;

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
        bool check = false;
        for (ll i = 0; i < n-2; i++){
            for (ll j = i+1; j < n-1; j++){
                ll c = a[i] + a[j];
                if (binary_search(a,a+n,c)){
                    check = true;
                    break;
                }
            }
            if (check) break;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
}
