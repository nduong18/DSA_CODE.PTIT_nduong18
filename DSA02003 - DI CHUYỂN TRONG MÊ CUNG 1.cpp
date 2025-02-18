#include <bits/stdc++.h>
#define ll long long
using namespace std;
//GitHub: nduong18

int a[100][100];
int n, found = 0;
string s = "";
set <string> se;

void in(){}

void Try(int i, int j){
    if (i == n && j == n) {
        found = 1;
        se.insert(s);
    }

    if (i + 1 <= n && a[i+1][j] == 1){
        s += "D";
        a[i+1][j] = 0; //danh dau da di qua
        Try(i+1,j);
        s.pop_back();
        a[i+1][j] = 1;
    }

    if (j + 1 <= n && a[i][j+1] == 1){
        s += "R";
        a[i][j+1] = 0;
        Try(i,j+1);
        s.pop_back();
        a[i][j+1] = 1;
    }
}

int main(){
    int t; cin >> t;
    while (t--){
        cin >> n;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        found = 0;
        if (a[1][1] == 0) {
            cout << "-1\n";
        }
        else {
            Try(1,1);
            if (se.size() != 0) for (auto it : se) cout << it << ' ';
            else cout << "-1";
            se.clear();
            cout << endl;
        }
    }
}
