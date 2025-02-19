#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int a[100][100], n, found = 0, dx[4] = {0,1,0,-1}, dy[4] = {1,0,-1,0};
string s, p = "RDLU";
set <string> se;

void nhap(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j){
    if (i == n && j == n) se.insert(s);
    for (int k = 0; k < 4; k++){
        int i1 = i+dx[k], j1 = j+dy[k];
        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1]){
            a[i1][j1] = 0;
            s += p[k];
            Try(i1,j1);
            a[i1][j1] = 1;
            s.pop_back();
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
    se.clear();
    nhap();   
    if (!a[1][1] || !a[n][n]) cout << "-1";
    else {
        a[1][1] = 0;
        Try(1,1);
        if (se.size()) for (auto it : se) cout << it << ' ';
        else cout << "-1";
    }
    cout << endl;
    }
}
