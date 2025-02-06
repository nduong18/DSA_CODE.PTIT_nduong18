#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GITHUB: nduong18

int n, final = 0;
char a[20];

void ktao(){
    for (int i = 1; i <= n; i++) a[i] = 'A';
}

void sinh(){
    int i = n;
    while (i >= 1 && a[i] == 'H'){
        a[i] = 'A';
        i--;
    }
    if (i == 0) final = 1;
    else a[i] = 'H';
}

bool check(char a[], int n){
    if (a[1] != 'H' || a[n] != 'A') return false;
    for (int i = 1; i <= n-1; i++){
        if (a[i] == a[i+1] && a[i] == 'H'){
            return false;
        }
    }
    return true;
}

int main(){
    int t; cin >> t;
    while (t--){
    cin >> n;
    ktao();
    while (final == 0){
        if (check(a,n)){
        for (int i = 1; i <= n; i++) cout << a[i];
        cout << "\n";
        }
        sinh();
    }
    final = 0;
    }
}
