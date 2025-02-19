#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

string s;
int used[100], n;
char X[100];

void Try(int i){
    if (i == n){
        for (int j = 0; j < n; j++) cout << X[j];
        cout << ' ';
        return;
    }
    for (int j = 0; j < n; j++){
        if (!used[j]){
            X[i] = s[j];
            used[j] = 1;
            Try(i+1);
            used[j] = 0;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        cin >> s;
        n = s.size();
        Try(0);
        cout << endl;
    }
}
