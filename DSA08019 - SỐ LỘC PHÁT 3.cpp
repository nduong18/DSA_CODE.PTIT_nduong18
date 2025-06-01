#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<string> v;
    queue<string> q;
    q.push("6");
    q.push("8");
    while (!q.empty()){
        string x = q.front();
        q.pop();
        if (x.size() > n) break;
        v.push_back(x);
        q.push(x + "6");
        q.push(x + "8");
    }

    cout << v.size() << '\n';
    for (int i = v.size()-1; i >= 0; i--) cout << v[i] << " ";
    cout << '\n';
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    int t; cin >> t;
    while (t--){
        solve();
    }


}
