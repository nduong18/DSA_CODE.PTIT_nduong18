#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GITHUB: nduong18

int n, final = 0;
char a[15];

void ktao(){
    for (int i = 1; i <= n; i++) a[i] = 'A';
}

void sinh(){
    int i = n;
    while (i >= 1 && a[i] == 'B'){
        a[i] = 'A';
        i--;
    }
    if (i == 0) final = 1;
    else a[i] = 'B';
}

int main(){
    int t; cin >> t;
    while (t--){
    cin >> n;
    ktao();
    while (final == 0){
        for (int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << ' ';
        sinh();
    }
    cout << "\n";
    final = 0;
    }
}
