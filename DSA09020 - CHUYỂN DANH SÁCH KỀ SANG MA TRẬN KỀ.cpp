#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    cin.ignore();
    int a[n+1][n+1];
    memset(a,0,sizeof(a));
    for (int i = 1; i <= n; i++){
        string s; getline(cin,s);
        string z;
        stringstream ss(s);
        while (ss >> z){
            a[i][stoi(z)] = 1;
            a[stoi(z)][i] = 1;
        }
    }
    
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    solve();

}

