#include <bits/stdc++.h>
using namespace std;

int n,m;
bool visited[1001];
vector<int> ke[1001];

void DFS(int u){
    visited[u] = true;
    for (int i : ke[u]){
        if (!visited[i]){
            DFS(i);
        }
    }
}

int tplt(){
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            cnt++;
            DFS(i);
        }
    }
    return cnt;
}

void solve(){
    int cc = tplt();
    for (int i = 1; i <= n; i++){
        memset(visited,false,sizeof(visited));
        visited[i] = true;
        if (cc < tplt()){
            cout << i << ' ';
        }
    }
    cout << '\n';
}

int main(){
    int t; cin >> t;
    while (t--){
        memset(ke,0,sizeof(ke));
        memset(visited,false,sizeof(visited));

        cin >> n >> m;
        for (int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }

        solve();
    }
}
