#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int a[100][100], n, found = 0, dx[2] = {0,1}, dy[2] = {1,0};
string s, p = "RD";
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
    for (int k = 0; k < 2; k++){
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
    nhap();
    Try(1,1);
    if (!a[1][1]) cout << "-1";
    else {
        if (se.size()) for (auto it : se) cout << it << ' ';
        else cout << "-1";
    }
    se.clear();
    cout << endl;
    }
}
