#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GITHUB: nduong18

int n, final = 0, a[20];

void ktao(){
    for (int i = 1; i <= n; i++) a[i] = 0;
}

void sinh(){
    int i = n;
    while (i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if (i == 0) final = 1;
    else a[i] = 1;
}

bool check(int a[], int n, int k){
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        if (a[i] == 1) cnt++;
    }
    return cnt == k;
}

int main(){
    int t; cin >> t;
    while (t--){
    int k;
    cin >> n >> k;
    ktao();
    while (final == 0){
        if (check(a,n,k)){
        for (int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << '\n';
        }
        sinh();
    }
    final = 0;
    }
}
