#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--){
        int n,m; cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        int x = *max_element(a,a+n);
        int y = *min_element(b,b+m);
        ll value = 1ll *x * y;
        cout << value << "\n";
    }
}
