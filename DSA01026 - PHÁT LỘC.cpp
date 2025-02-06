#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, final = 0;
char a[20];

void ktao(){
    for (int i = 1; i <= n; i++) a[i] = '6';
}

void sinh(){
    int i = n;
    while (i >= 1 && a[i] == '8'){
        a[i] = '6';
        i--;
    }
    if (i == 0) final = 1;
    else a[i] = '8';
}

bool check(char a[], int n){
    if (n < 6) return false;
    if (a[1] != '8' || a[n] != '6') return false;
    for (int i = 1; i <= n-1; i++){
        if (a[i] == a[i+1] && a[i] == '8'){
            return false;
        }
    }
    string tmp = "";
    for (int i = 1; i <= n; i++) tmp += a[i];
    string x = "6666";
    auto res = tmp.find(x);
    if (res != std::string::npos) return false;
    return true;
}

int main(){
    cin >> n;
    ktao();
    while (final == 0){
        if (check(a,n)){
            for (int i = 1; i <= n; i++) cout << a[i];
            cout << "\n";
        }
        sinh();
    }
}
