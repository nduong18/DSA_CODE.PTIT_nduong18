#include <bits/stdc++.h>
using namespace std;

int n,m;
vector <int> ke[1001];
bool visited[1001];

bool DFS(int u, int parent){
    visited[u] = true;
    for (int i : ke[u]){
        if (!visited[i]){
            if (DFS(i,u)) return true;
        }
        else {
            if (i != parent) return true;
        }
    }
    return false;
}


int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t; cin >> t;
    while (t--){
        memset(visited,false,sizeof(visited));
        memset(ke,0,sizeof(ke));

        cin >> n >> m;
        for (int i = 0; i < m; i++){
            int x,y; cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }

        bool check = false;
        for (int i = 1; i <= n; i++){
            if (!visited[i]){
                if (DFS(i,-1)) {
                    check = true;
                    break;
                }
            }
        }

       if (check) cout << "YES\n";
       else cout << "NO\n";

    }

    
    return 0;
}
