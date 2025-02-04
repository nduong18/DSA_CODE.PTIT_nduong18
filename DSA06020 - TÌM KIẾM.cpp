#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--){
        int n,k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        if (binary_search(a,a+n,k)) cout << "1\n";
        else cout << "-1\n";
    }
}
