#include <bits/stdc++.h>
using namespace std;

vector<int> ke[1001];
bool visited[1001];
int n,m;

void DFS(int u){
    visited[u] = true;
    for (int i : ke[u]){
        if (!visited[i]){
            DFS(i);
        }
    }
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()){
        int x = q.front();
        q.pop();
        for (int i : ke[x]){
            if (!visited[i]){
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int t; cin >> t;
    while (t--){
        memset(ke,0,sizeof(ke));
        cin >> n >> m;
        for (int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }

        int q; cin >> q;
        while (q--){
            memset(visited,false,sizeof(visited));
            int u,v; cin >> u >> v;
            DFS(u);
            if (visited[v]) cout << "YES\n";
            else cout << "NO\n";        
        }
        
    }
}
