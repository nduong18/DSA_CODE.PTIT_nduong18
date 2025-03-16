#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

char a[26];

void create(){
    int idx = 1;
    for (char i = 'A'; i <= 'Z'; i++) a[idx++] = i;
}

char findChar(int n, int k){
    ll x = (1ll << (n-1));
    if (k == x) return a[n];
    if (k < x) return findChar(n-1,k);
    return findChar(n-1,k-x);
}

int main() {
    create();
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        cout << findChar(n,k) << endl;
    }
}
