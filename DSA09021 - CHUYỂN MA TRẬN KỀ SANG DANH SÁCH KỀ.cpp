#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<vector<int>> v(n+1);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            int x; cin >> x;
            if (x == 1){
                v[i].push_back(j);
            }
        }
    }

    for (int i = 1; i <= n; i++){
        for (int j : v[i]){
            cout << j << ' ';
        }
        cout << '\n';
    }
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    solve();

}

