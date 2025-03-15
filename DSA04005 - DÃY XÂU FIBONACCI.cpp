#include <bits/stdc++.h>
#define ll long long
#define mod 123456789
using namespace std;

ll fibLen[93];

void create(){
    fibLen[1] = 1; fibLen[2] = 1;
    for (int i = 3; i <= 92; i++){
        fibLen[i] = fibLen[i-2] + fibLen[i-1];
    }
}

char findChar (ll n, ll i){
    if (n == 1) return 'A';
    if (n == 2) return 'B';
    if (i <= fibLen[n-2]) return findChar(n-2,i);
    return findChar(n-1,i - fibLen[n-2]);
}

int main() {
    create();
    int t; cin >> t;
    while (t--){
        ll n,i; cin >> n >> i;
        cout << findChar(n,i) << endl;
    }
}
