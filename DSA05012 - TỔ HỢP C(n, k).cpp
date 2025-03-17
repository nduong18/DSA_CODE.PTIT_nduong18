#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
//Github: nduong18

int c[1001][1001];

void create(){
    for (int i = 0; i < 1001; i++){
        for (int j = 0; j < 1001; j++){
            if (j == 0 || i == j) c[i][j] = 1;
            else c[i][j] = (c[i-1][j-1] + c[i-1][j]) % mod;
        }
    }
}

int main() {
    create();
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        cout << c[n][k] << endl;
    }
}
