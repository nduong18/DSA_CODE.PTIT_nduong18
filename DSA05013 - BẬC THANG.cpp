#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

int main() {
    int t; cin >> t;
    while (t--){
        int n,k; cin >> n >> k;
        ll F[n+1] = {0};
        F[0] = 1;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= min(i,k); j++){
                F[i] += F[i-j];
                F[i] %= mod; 
            }
        }
        cout << F[n] << endl;
    }
}
