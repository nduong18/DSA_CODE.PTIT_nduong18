#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

int main() {
    int t; cin >> t;
    while (t--)
    {
        ll n,k; cin >> n >> k;
        ll a[n];
        for (ll i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        ll sum1 = 0, sum2 = 0;
        for (ll i = 0; i < k; i++) sum1 += a[i];
        for (ll i = k; i < n; i++) sum2 += a[i];
        ll sum3 = 0, sum4 = 0;
        for (ll i = 0; i < n-k; i++) sum3 += a[i];
        for (ll i = n-k; i < n; i++) sum4 += a[i];    

        cout << max(sum4-sum3,sum2-sum1) << endl;
    }

}
