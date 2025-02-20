#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int n, k, idx = 1, used[100];
char X[100], a[100];

void Try(int i, int pos){
    for (int j = pos; j <= n; j++){
        if (!used[j]){
            X[i] = a[j];
            used[j] = 1;
            if (i == k){
                for (char l = 1; l <= k; l++) cout << X[l];
                cout << endl;
            }
            else Try(i+1,j+1);
            used[j] = 0;
        }
    }
}

int main(){
    for (char i = 'A'; i <= 'Z'; i++) a[idx++] = i;
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        Try(1,1);
    }
}
