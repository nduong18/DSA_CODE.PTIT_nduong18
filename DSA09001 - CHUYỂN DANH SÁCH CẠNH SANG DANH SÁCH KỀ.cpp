#include <bits/stdc++.h>
using namespace std;

void solve(){
    int v,e; cin >> v >> e;
    vector <int> a[1001];

    for (int i = 0; i < e; i++){
        int x,y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    for (int i = 1; i <= v; i++){
        cout << i << ": ";
        for (auto x : a[i]){
            cout << x << ' ';
        }
        cout << "\n";
    }

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    
    int t; cin >> t;
    while (t--){
        solve();
    }
}

