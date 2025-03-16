#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18
 
ll powMod(ll a, ll n){
    if (n == 0) return 1;
    ll x = powMod(a,n/2);
    x = (x*x)%mod;
    return (n % 2 == 0) ? x : (a*x)%mod;
}

int main() {
    ll a, b;
    while (true){
        cin >> a >> b;
        if (a == 0 && b == 0) return 0;     
        cout << powMod(a,b) << endl;
    }
}
