#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18


int main() {
    int t; cin >> t;
    while(t--){
        int n,m,k; cin >> n >> m >> k;
        int z = n+m;
        int a[z];
        for (int i = 0; i < z; i++) cin >> a[i];
        sort(a,a+z);
        cout << a[k-1] << endl;
    }
}
